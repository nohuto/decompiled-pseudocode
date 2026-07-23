/*
 * XREFs of KeSwapProcessOrStack @ 0x14013D844
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KiInSwapProcesses @ 0x140090680 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x140090730 (KiOutSwapProcesses.c)
 *     MiInPageSingleKernelStack @ 0x140094924 (MiInPageSingleKernelStack.c)
 *     KiOutSwapKernelStacks @ 0x1400A5934 (KiOutSwapKernelStacks.c)
 *     KeSetPriorityThread @ 0x1400D0DC0 (KeSetPriorityThread.c)
 *     KeGetNextKernelStackSegment @ 0x1400EEA2C (KeGetNextKernelStackSegment.c)
 *     KiFastReadyThread @ 0x1400F05F8 (KiFastReadyThread.c)
 */

void __noreturn KeSwapProcessOrStack()
{
  __int64 v0; // rdx
  _SINGLE_LIST_ENTRY *v1; // r8
  __int64 v2; // r9
  _QWORD *v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  ULONG_PTR v6; // rdi
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF

  KeSetPriorityThread(KeGetCurrentThread(), 23);
  while ( 1 )
  {
    KeWaitForSingleObject(&KiSwapEvent, Executive, 0, 0, 0LL);
    if ( _InterlockedCompareExchange(&KiStackOutSwapRequest, 0, 1) == 1 )
      KiOutSwapKernelStacks();
    v3 = (_QWORD *)_InterlockedExchange64(&KiProcessOutSwapListHead, 0LL);
    if ( v3 )
      KiOutSwapProcesses(v3);
    v4 = (_QWORD *)_InterlockedExchange64(&KiProcessInSwapListHead, 0LL);
    if ( v4 )
      KiInSwapProcesses(v4);
    v5 = (_QWORD *)_InterlockedExchange64(&KiStackInSwapListHead, 0LL);
    while ( v5 )
    {
      v6 = (ULONG_PTR)(v5 - 27);
      v5 = (_QWORD *)*v5;
      if ( (MiFlags & 0x40) != 0 )
      {
        KeGetNextKernelStackSegment((_QWORD *)v6, v7, 1);
        do
          MiInPageSingleKernelStack(v6, v7);
        while ( KeGetNextKernelStackSegment((_QWORD *)v6, v7, 0) );
      }
      _interlockedbittestandset((volatile signed __int32 *)(v6 + 120), 0x10u);
      KiFastReadyThread(v6, v0, v1, v2);
    }
  }
}
