/*
 * XREFs of IoWithinStackLimits @ 0x1401019F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL __stdcall IoWithinStackLimits(ULONG_PTR RegionStart, SIZE_T RegionSize)
{
  struct _KTHREAD *CurrentThread; // r10
  ULONG_PTR v3; // r9
  char *v5; // rdx
  ULONG_PTR StackLimit; // rcx
  _QWORD *InitialStack; // rax
  void *StackBase; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = RegionStart + RegionSize;
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) == 0 || CurrentThread == KeGetCurrentPrcb()->IdleThread )
  {
    StackLimit = (ULONG_PTR)CurrentThread->StackLimit;
    InitialStack = CurrentThread->InitialStack;
    StackBase = CurrentThread->StackBase;
    while ( v3 > (unsigned __int64)StackBase || RegionStart < StackLimit )
    {
      if ( !InitialStack[2] )
        return 0;
      StackLimit = InitialStack[3];
      StackBase = (void *)InitialStack[2];
      InitialStack = (_QWORD *)InitialStack[5];
    }
    return 1;
  }
  v5 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
  return v3 <= (unsigned __int64)v5 && RegionStart >= (unsigned __int64)&v5[-(unsigned int)KeKernelStackSize];
}
