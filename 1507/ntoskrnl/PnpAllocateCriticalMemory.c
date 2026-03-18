/*
 * XREFs of PnpAllocateCriticalMemory @ 0x140536EA0
 * Callers:
 *     PnpQueuePendingSurpriseRemoval @ 0x140535188 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpSetTargetDeviceRemove @ 0x1405353A4 (PnpSetTargetDeviceRemove.c)
 *     PnpResizeTargetDeviceBlock @ 0x140535E34 (PnpResizeTargetDeviceBlock.c)
 *     IopAllocateRelationList @ 0x140535F08 (IopAllocateRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x140535F5C (PiAllocateDeviceObjectList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpCompileDeviceInstancePaths @ 0x140536BE4 (PnpCompileDeviceInstancePaths.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
