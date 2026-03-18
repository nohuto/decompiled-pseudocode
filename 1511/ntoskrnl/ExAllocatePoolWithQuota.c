/*
 * XREFs of ExAllocatePoolWithQuota @ 0x140212ACC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall ExAllocatePoolWithQuota(POOL_TYPE PoolType, SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithQuotaTag(PoolType, NumberOfBytes, 0x656E6F4Eu);
}
