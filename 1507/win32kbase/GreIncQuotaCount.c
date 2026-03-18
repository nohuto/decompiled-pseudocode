/*
 * XREFs of GreIncQuotaCount @ 0x1C000FD20
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0035D30 (GreSetDCOwnerEx.c)
 *     HMChangeOwnerPheProcess @ 0x1C0069DC0 (HMChangeOwnerPheProcess.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall GreIncQuotaCount(__int64 a1)
{
  unsigned int v2; // edx

  GreAcquireHmgrSemaphore();
  v2 = *(_DWORD *)(a1 + 64);
  if ( ++*(_DWORD *)(a1 + 60) > v2 )
    v2 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a1 + 64) = v2;
  return GreReleaseHmgrSemaphore();
}
