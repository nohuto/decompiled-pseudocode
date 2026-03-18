/*
 * XREFs of KeQueryCurrentStackInformation @ 0x140028340
 * Callers:
 *     RtlpWalkFrameChain @ 0x140026220 (RtlpWalkFrameChain.c)
 *     RtlpGetStackLimits @ 0x140028310 (RtlpGetStackLimits.c)
 *     RtlpIsFrameInBoundsEx @ 0x1400284B8 (RtlpIsFrameInBoundsEx.c)
 *     PnprGetStackLimits @ 0x1401C0F3C (PnprGetStackLimits.c)
 *     KeBugCheck2 @ 0x1401C4F98 (KeBugCheck2.c)
 *     EtwpTraceStackWalk @ 0x140211040 (EtwpTraceStackWalk.c)
 *     ViDeadlockAnalyze @ 0x1406CCCBC (ViDeadlockAnalyze.c)
 * Callees:
 *     KeGetCurrentStackPointer @ 0x140154400 (KeGetCurrentStackPointer.c)
 */

bool __fastcall KeQueryCurrentStackInformation(_DWORD *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 CurrentStackPointer; // rdx
  struct _KTHREAD *CurrentThread; // rax
  void *volatile StackLimit; // r10
  void *StackBase; // r8
  bool result; // al
  char *IsrStack; // rax
  char *v12; // rcx
  char *v13; // r8
  char *v14; // r9

  if ( (KiBugCheckActive & 3) != 0 )
  {
    *a1 = 0;
    *a3 = -1LL;
    *a2 = (unsigned __int64)MmSystemRangeStart;
    return 1;
  }
  CurrentStackPointer = KeGetCurrentStackPointer();
  if ( KeGetCurrentIrql() >= 2u )
  {
    IsrStack = (char *)KeGetPcr()->Prcb.IsrStack;
    v12 = IsrStack - 24576;
    if ( (unsigned __int64)(IsrStack - 24576) <= CurrentStackPointer && CurrentStackPointer < (unsigned __int64)IsrStack )
    {
      *a1 = 6;
      *a3 = (unsigned __int64)IsrStack;
      result = 1;
      *a2 = (unsigned __int64)v12;
      return result;
    }
  }
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->InitialStack == (void *)KeGetPcr()->Prcb.RspBase )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v13 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
      v14 = &v13[-(unsigned int)KeKernelStackSize];
      if ( (unsigned __int64)v14 <= CurrentStackPointer && CurrentStackPointer < (unsigned __int64)v13 )
      {
        *a1 = 1;
        result = 1;
        *a3 = (unsigned __int64)v13;
        *a2 = (unsigned __int64)v14;
        return result;
      }
    }
    if ( (CurrentThread->MiscFlags & 0x1000) != 0 )
      *a1 = 2;
    else
      *a1 = (CurrentThread->CallbackNestingLevel != 0) + 3;
    StackLimit = CurrentThread->StackLimit;
    StackBase = CurrentThread->StackBase;
    *a3 = (unsigned __int64)StackBase;
    *a2 = (unsigned __int64)StackLimit;
    return *a2 <= CurrentStackPointer && CurrentStackPointer < *a3;
  }
  *a1 = 5;
  *a3 = -1LL;
  *a2 = (unsigned __int64)MmSystemRangeStart;
  return 1;
}
