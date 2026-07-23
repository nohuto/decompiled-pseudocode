/*
 * XREFs of KeSaveExtendedAndSupervisorState @ 0x140083B40
 * Callers:
 *     KeSaveExtendedProcessorState @ 0x140083B00 (KeSaveExtendedProcessorState.c)
 *     PopHandleNextState @ 0x1403CC8F0 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x1403DC538 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlXRestore @ 0x140083A2C (RtlXRestore.c)
 *     RtlXSave @ 0x140083D0C (RtlXSave.c)
 *     KeAllocateXStateContext @ 0x140083D50 (KeAllocateXStateContext.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     XSaveSHelper @ 0x140167CE0 (XSaveSHelper.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall KeSaveExtendedAndSupervisorState(ULONG_PTR BugCheckParameter3, PVOID *a2)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int8 v6; // r15
  _BYTE *SparePtr; // rax
  ULONG_PTR v8; // r12
  unsigned int v9; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  int v12; // eax
  unsigned __int8 v13; // cl

  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x131u, 1uLL, CurrentIrql, 0LL, 0LL);
  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      if ( (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & BugCheckParameter3) == 0 )
      {
LABEL_25:
        v6 = CurrentIrql + 1;
        goto LABEL_8;
      }
LABEL_34:
      KeBugCheckEx(0x131u, 0LL, KeFeatureBits & 0x800000, (unsigned int)BugCheckParameter3, HIDWORD(BugCheckParameter3));
    }
    if ( (~MEMORY[0xFFFFF780000003D8] & BugCheckParameter3) != 0 )
      goto LABEL_34;
  }
  else if ( (BugCheckParameter3 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    goto LABEL_34;
  }
  if ( CurrentIrql || (CurrentThread->ApcState.InProgressFlags & 1) != 0 )
    goto LABEL_25;
  v6 = 0;
LABEL_8:
  SparePtr = CurrentThread->WaitBlock[1].SparePtr;
  v8 = (BugCheckParameter3 | MEMORY[0xFFFFF780000003D8]) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( SparePtr )
  {
    v13 = SparePtr[16];
    if ( v13 > v6 )
      KeBugCheckEx(0x131u, 2uLL, v13, v6, 0LL);
  }
  if ( v8 )
  {
    if ( CurrentIrql < 2u )
      goto LABEL_11;
    if ( SparePtr && SparePtr[16] == v6 )
    {
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      {
        v9 = MEMORY[0xFFFFF78000000600];
LABEL_12:
        result = KeAllocateXStateContext(a2 + 3, BugCheckParameter3, v9);
        if ( (int)result < 0 )
          return result;
        goto LABEL_13;
      }
LABEL_11:
      v9 = MEMORY[0xFFFFF780000003E8];
      goto LABEL_12;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    memset(&CurrentPrcb->ExtendedState->Header, 0, sizeof(CurrentPrcb->ExtendedState->Header));
    v12 = KeXStateLength;
    a2[6] = 0LL;
    *((_DWORD *)a2 + 8) = v12;
    a2[5] = CurrentPrcb->ExtendedState;
  }
  else
  {
    *((_DWORD *)a2 + 8) = 0;
    a2[6] = 0LL;
    a2[5] = 0LL;
  }
LABEL_13:
  a2[1] = CurrentThread;
  *((_BYTE *)a2 + 16) = v6;
  a2[3] = (PVOID)v8;
  if ( !CurrentIrql )
    --CurrentThread->SpecialApcDisable;
  *a2 = CurrentThread->WaitBlock[1].SparePtr;
  if ( v8 && (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      RtlXRestore((__int64)a2[5], 0LL);
      XSaveSHelper(a2[5], v8);
    }
    else
    {
      RtlXSave(a2[5], v8);
    }
  }
  CurrentThread->WaitBlock[1].SparePtr = a2;
  if ( !CurrentIrql )
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 0LL;
}
