/*
 * XREFs of PdcReleaseRwLockExclusive @ 0x1C00E4C68
 * Callers:
 *     PdcTaskClientRequest @ 0x1C00E4AEC (PdcTaskClientRequest.c)
 *     PdcTaskClientUnregister @ 0x1C00E4BA4 (PdcTaskClientUnregister.c)
 * Callees:
 *     <none>
 */

void __fastcall PdcReleaseRwLockExclusive(__int64 a1)
{
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
