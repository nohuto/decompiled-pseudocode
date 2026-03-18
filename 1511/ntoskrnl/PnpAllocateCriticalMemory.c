/*
 * XREFs of PnpAllocateCriticalMemory @ 0x1404A0618
 * Callers:
 *     PnpSetTargetDeviceRemove @ 0x14049EB40 (PnpSetTargetDeviceRemove.c)
 *     PnpResizeTargetDeviceBlock @ 0x14049F7A0 (PnpResizeTargetDeviceBlock.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14049F874 (PnpProcessQueryRemoveAndEject.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14049FEC0 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpCompileDeviceInstancePaths @ 0x1404A029C (PnpCompileDeviceInstancePaths.c)
 *     IopAllocateRelationList @ 0x1404A04B8 (IopAllocateRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x1404A050C (PiAllocateDeviceObjectList.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
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
