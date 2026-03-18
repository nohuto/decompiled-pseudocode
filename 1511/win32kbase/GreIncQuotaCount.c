/*
 * XREFs of GreIncQuotaCount @ 0x1C0071BD0
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0034DF0 (GreSetDCOwnerEx.c)
 *     HMChangeOwnerPheProcess @ 0x1C0071AF0 (HMChangeOwnerPheProcess.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall GreIncQuotaCount(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx

  GreAcquireHmgrSemaphore(a1, a2, a3);
  v6 = *(unsigned int *)(a1 + 64);
  if ( ++*(_DWORD *)(a1 + 60) > (unsigned int)v6 )
    v6 = *(unsigned int *)(a1 + 60);
  *(_DWORD *)(a1 + 64) = v6;
  return GreReleaseHmgrSemaphore(v4, v6, v5);
}
