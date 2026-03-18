/*
 * XREFs of PnpFindBestConfiguration @ 0x14059C42C
 * Callers:
 *     PnpAllocateResources @ 0x14045C42C (PnpAllocateResources.c)
 *     PnpRebalance @ 0x140680EDC (PnpRebalance.c)
 *     PnpReallocateResources @ 0x140695AF8 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x140695F48 (PnpRestoreResourcesInternal.c)
 * Callees:
 *     PnpFindBestConfigurationWorker @ 0x14059C47C (PnpFindBestConfigurationWorker.c)
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
