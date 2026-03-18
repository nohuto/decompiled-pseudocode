/*
 * XREFs of GreDecQuotaCount @ 0x1C0010C20
 * Callers:
 *     HMChangeOwnerPheProcess @ 0x1C0069DC0 (HMChangeOwnerPheProcess.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall GreDecQuotaCount(__int64 a1)
{
  GreAcquireHmgrSemaphore();
  --*(_DWORD *)(a1 + 60);
  return GreReleaseHmgrSemaphore();
}
