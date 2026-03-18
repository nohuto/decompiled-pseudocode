/*
 * XREFs of KeSwapProcessOrStack @ 0x140136234
 * Callers:
 *     <none>
 * Callees:
 *     KiFastReadyThread @ 0x14002AB48 (KiFastReadyThread.c)
 *     KeGetNextKernelStackSegment @ 0x14002BFA4 (KeGetNextKernelStackSegment.c)
 *     KiOutSwapProcesses @ 0x14003272C (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x140032BC0 (KiInSwapProcesses.c)
 *     KeSetPriorityThread @ 0x14007D6F0 (KeSetPriorityThread.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     MiInPageSingleKernelStack @ 0x1400DE754 (MiInPageSingleKernelStack.c)
 *     KiOutSwapKernelStacks @ 0x1400E8164 (KiOutSwapKernelStacks.c)
 */

void __noreturn KeSwapProcessOrStack()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
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
      KiOutSwapKernelStacks(v1, v0, v2);
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
      KiFastReadyThread(v6, v0, v2);
    }
  }
}
