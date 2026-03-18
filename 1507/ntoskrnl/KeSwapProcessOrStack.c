/*
 * XREFs of KeSwapProcessOrStack @ 0x140164CD4
 * Callers:
 *     <none>
 * Callees:
 *     KiFastReadyThread @ 0x14000DBF8 (KiFastReadyThread.c)
 *     KeGetNextKernelStackSegment @ 0x140021688 (KeGetNextKernelStackSegment.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     MiInPageSingleKernelStack @ 0x1400DE01C (MiInPageSingleKernelStack.c)
 *     KiOutSwapProcesses @ 0x1401100B8 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x140110624 (KiInSwapProcesses.c)
 *     KiOutSwapKernelStacks @ 0x140123398 (KiOutSwapKernelStacks.c)
 */

void __noreturn KeSwapProcessOrStack()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  _QWORD *v2; // rcx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  ULONG_PTR v5; // rdi
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF

  KeSetPriorityThread(KeGetCurrentThread(), 23);
  while ( 1 )
  {
    KeWaitForSingleObject(&KiSwapEvent, Executive, 0, 0, 0LL);
    if ( _InterlockedCompareExchange(&KiStackOutSwapRequest, 0, 1) == 1 )
      KiOutSwapKernelStacks();
    v2 = (_QWORD *)_InterlockedExchange64(&KiProcessOutSwapListHead, 0LL);
    if ( v2 )
      KiOutSwapProcesses(v2, v0);
    v3 = (_QWORD *)_InterlockedExchange64(&KiProcessInSwapListHead, 0LL);
    if ( v3 )
      KiInSwapProcesses(v3);
    v4 = (_QWORD *)_InterlockedExchange64(&KiStackInSwapListHead, 0LL);
    while ( v4 )
    {
      v5 = (ULONG_PTR)(v4 - 27);
      v4 = (_QWORD *)*v4;
      if ( (MiFlags & 0x40) != 0 )
      {
        KeGetNextKernelStackSegment((_QWORD *)v5, v6, 1);
        do
          MiInPageSingleKernelStack(v5, v6);
        while ( KeGetNextKernelStackSegment((_QWORD *)v5, v6, 0) );
      }
      _interlockedbittestandset((volatile signed __int32 *)(v5 + 120), 0x10u);
      KiFastReadyThread(v5, v0, v1);
    }
  }
}
