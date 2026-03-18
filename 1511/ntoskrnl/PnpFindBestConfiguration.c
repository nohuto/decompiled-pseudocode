/*
 * XREFs of PnpFindBestConfiguration @ 0x140529B2C
 * Callers:
 *     PnpAllocateResources @ 0x1404F213C (PnpAllocateResources.c)
 *     PnpRebalance @ 0x140606198 (PnpRebalance.c)
 *     PnpReallocateResources @ 0x140617258 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x140617684 (PnpRestoreResourcesInternal.c)
 * Callees:
 *     PnpFindBestConfigurationWorker @ 0x140529B7C (PnpFindBestConfigurationWorker.c)
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
