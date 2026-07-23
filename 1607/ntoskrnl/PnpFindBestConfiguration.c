/*
 * XREFs of PnpFindBestConfiguration @ 0x1405562FC
 * Callers:
 *     PnpAllocateResources @ 0x14050B1A0 (PnpAllocateResources.c)
 *     PnpRebalance @ 0x140630484 (PnpRebalance.c)
 *     PnpReallocateResources @ 0x14064BD60 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x14064BF2C (PnpRestoreResourcesInternal.c)
 * Callees:
 *     PnpFindBestConfigurationWorker @ 0x14055634C (PnpFindBestConfigurationWorker.c)
 */

__int64 __fastcall PnpFindBestConfiguration(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 2; ++i )
  {
    result = PnpFindBestConfigurationWorker(a1, a2, a3, i);
    if ( (int)result >= 0 )
      break;
  }
  return result;
}
