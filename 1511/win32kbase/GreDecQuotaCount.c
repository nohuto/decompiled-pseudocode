/*
 * XREFs of GreDecQuotaCount @ 0x1C0071C00
 * Callers:
 *     HMChangeOwnerPheProcess @ 0x1C0071AF0 (HMChangeOwnerPheProcess.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall GreDecQuotaCount(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  GreAcquireHmgrSemaphore(a1, a2, a3);
  --*(_DWORD *)(a1 + 60);
  return GreReleaseHmgrSemaphore(v5, v4, v6);
}
