/*
 * XREFs of ACPIFlushQueuesUnload @ 0x1C00366F8
 * Callers:
 *     ACPIFlushDeviceQueueCallback @ 0x1C00366B0 (ACPIFlushDeviceQueueCallback.c)
 *     ACPITableUnload @ 0x1C0040720 (ACPITableUnload.c)
 * Callees:
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C000A528 (ACPIBuildSpecialSynchronizationRequest.c)
 */

__int64 __fastcall ACPIFlushQueuesUnload(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // r8d

  result = 3221225473LL;
  v5 = a3 - 1;
  if ( !v5 )
    return ACPIBuildSpecialSynchronizationRequest(a1, (__int64)ACPIFlushDeviceQueueCallback, a2, a4, 1);
  if ( v5 == 1 )
    return ACPIDeviceInternalSynchronizeRequest(a1, (int)ACPIFlushPowerQueueCallback, a2);
  return result;
}
