/*
 * XREFs of PnpFindBestConfiguration @ 0x140555DBC
 * Callers:
 *     PnpAllocateResources @ 0x1404C82A4 (PnpAllocateResources.c)
 *     PnpRebalance @ 0x1406303D0 (PnpRebalance.c)
 *     PnpReallocateResources @ 0x14064BC7C (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x14064BE48 (PnpRestoreResourcesInternal.c)
 * Callees:
 *     PnpFindBestConfigurationWorker @ 0x140555E0C (PnpFindBestConfigurationWorker.c)
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
