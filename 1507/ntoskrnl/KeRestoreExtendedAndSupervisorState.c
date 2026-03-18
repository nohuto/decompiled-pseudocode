/*
 * XREFs of KeRestoreExtendedAndSupervisorState @ 0x1401265C8
 * Callers:
 *     KeRestoreExtendedProcessorState @ 0x1401265C0 (KeRestoreExtendedProcessorState.c)
 *     SymCryptParallelSha256Process @ 0x14026C770 (SymCryptParallelSha256Process.c)
 *     PopHandleNextState @ 0x1403F3750 (PopHandleNextState.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     RtlXRestore @ 0x140126714 (RtlXRestore.c)
 *     KeFreeXStateContext @ 0x14012675C (KeFreeXStateContext.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     XRestoreSHelper @ 0x14018BE00 (XRestoreSHelper.c)
 */

void __fastcall KeRestoreExtendedAndSupervisorState(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r10
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int8 v4; // al
  unsigned __int8 v5; // cl
  ULONG_PTR v6; // r8
  unsigned __int64 v7; // rdx
  bool v8; // zf
  __int16 v9; // ax

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
  CurrentThread->WaitBlock[1].SparePtr = *(PVOID *)a1;
  v7 = *(_QWORD *)(a1 + 24);
  if ( (KeFeatureBits & 0x800000) == 0 )
  {
    if ( (v7 & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
      goto LABEL_13;
LABEL_33:
    KeBugCheckEx(0x131u, 0LL, KeFeatureBits & 0x800000, (unsigned int)v7, HIDWORD(v7));
  }
  if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    v8 = (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & v7) == 0;
  else
    v8 = (~MEMORY[0xFFFFF780000003D8] & v7) == 0;
  if ( !v8 )
    goto LABEL_33;
LABEL_13:
  if ( v7 && (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      XRestoreSHelper(*(_QWORD *)(a1 + 40));
      goto LABEL_21;
    }
    RtlXRestore(*(_QWORD *)(a1 + 40), v7);
  }
  if ( !CurrentIrql )
  {
    v9 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v9;
    if ( !v9 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
LABEL_21:
  if ( *(_QWORD *)(a1 + 48) )
    KeFreeXStateContext(a1 + 24);
}
