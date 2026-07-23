/*
 * XREFs of PnpAllocateCriticalMemory @ 0x140485EEC
 * Callers:
 *     PnpSetTargetDeviceRemove @ 0x140484C7C (PnpSetTargetDeviceRemove.c)
 *     PiEventAllocateVetoBuffer @ 0x140485334 (PiEventAllocateVetoBuffer.c)
 *     PnpResizeTargetDeviceBlock @ 0x140485388 (PnpResizeTargetDeviceBlock.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14048545C (PnpQueuePendingSurpriseRemoval.c)
 *     PiEventBuildPdoList @ 0x1404857D0 (PiEventBuildPdoList.c)
 *     PnpCompileDeviceInstancePaths @ 0x140485AE0 (PnpCompileDeviceInstancePaths.c)
 *     IopAllocateRelationList @ 0x140485D8C (IopAllocateRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x140485E34 (PiAllocateDeviceObjectList.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
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
