/*
 * XREFs of PnpAllocateCriticalMemory @ 0x1404C5AB8
 * Callers:
 *     PnpSetTargetDeviceRemove @ 0x1404C3F44 (PnpSetTargetDeviceRemove.c)
 *     PiEventAllocateVetoBuffer @ 0x1404C4F00 (PiEventAllocateVetoBuffer.c)
 *     PnpResizeTargetDeviceBlock @ 0x1404C4F54 (PnpResizeTargetDeviceBlock.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1404C5028 (PnpQueuePendingSurpriseRemoval.c)
 *     PiEventBuildPdoList @ 0x1404C539C (PiEventBuildPdoList.c)
 *     PnpCompileDeviceInstancePaths @ 0x1404C56AC (PnpCompileDeviceInstancePaths.c)
 *     IopAllocateRelationList @ 0x1404C5958 (IopAllocateRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x1404C5A00 (PiAllocateDeviceObjectList.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400D0580 (KeDelayExecutionThread.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PnpAllocateCriticalMemory(int a1, POOL_TYPE a2, SIZE_T a3, ULONG a4)
{
  ULONG i; // r8d
  PVOID result; // rax
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-18h] BYREF

  for ( i = a4; ; i = a4 )
  {
    result = ExAllocatePoolWithTag(a2, a3, i);
    if ( result || (a1 & 0xFFFFFFFB) == 0 )
      break;
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
