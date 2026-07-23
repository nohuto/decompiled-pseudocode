/*
 * XREFs of KeRestoreExtendedAndSupervisorState @ 0x140083914
 * Callers:
 *     KeRestoreExtendedProcessorState @ 0x14008390C (KeRestoreExtendedProcessorState.c)
 *     SymCryptParallelSha256Process @ 0x140237160 (SymCryptParallelSha256Process.c)
 *     PopHandleNextState @ 0x1403CC8F0 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x1403DC538 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlXRestore @ 0x140083A2C (RtlXRestore.c)
 *     KeFreeXStateContext @ 0x140083A74 (KeFreeXStateContext.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     XRestoreSHelper @ 0x140167D00 (XRestoreSHelper.c)
 */

__int64 __fastcall KeRestoreExtendedAndSupervisorState(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r9
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int8 v4; // al
  unsigned __int8 v5; // cl
  ULONG_PTR v6; // r8
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  bool v9; // zf

  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x131u, 1uLL, CurrentIrql, 0LL, 0LL);
  if ( CurrentIrql || (CurrentThread->ApcState.InProgressFlags & 1) != 0 )
    v4 = CurrentIrql + 1;
  else
    v4 = 0;
  v5 = *(_BYTE *)(a1 + 16);
  if ( v5 != v4 )
    KeBugCheckEx(0x131u, 4uLL, v5, v4, 0LL);
  v6 = *(_QWORD *)(a1 + 8);
  if ( (struct _KTHREAD *)v6 != CurrentThread )
    KeBugCheckEx(0x131u, 3uLL, v6, (ULONG_PTR)CurrentThread, 0LL);
  if ( !CurrentIrql )
    --CurrentThread->SpecialApcDisable;
  result = *(_QWORD *)a1;
  CurrentThread->WaitBlock[1].SparePtr = *(PVOID *)a1;
  v8 = *(_QWORD *)(a1 + 24);
  if ( (KeFeatureBits & 0x800000) == 0 )
  {
    if ( (v8 & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
      goto LABEL_13;
LABEL_31:
    KeBugCheckEx(0x131u, 0LL, KeFeatureBits & 0x800000, (unsigned int)v8, HIDWORD(v8));
  }
  if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
  {
    result = MEMORY[0xFFFFF780000003D8];
    v9 = (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & v8) == 0;
  }
  else
  {
    result = ~MEMORY[0xFFFFF780000003D8];
    v9 = (~MEMORY[0xFFFFF780000003D8] & v8) == 0;
  }
  if ( !v9 )
    goto LABEL_31;
LABEL_13:
  if ( v8 && (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      result = XRestoreSHelper(*(_QWORD *)(a1 + 40));
      goto LABEL_19;
    }
    result = RtlXRestore(*(_QWORD *)(a1 + 40), v8);
  }
  if ( !CurrentIrql )
    result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_19:
  if ( *(_QWORD *)(a1 + 48) )
    return KeFreeXStateContext(a1 + 24);
  return result;
}
