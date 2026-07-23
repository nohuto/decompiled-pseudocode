/*
 * XREFs of PspUnlockThreadSecurityShared @ 0x1400920C8
 * Callers:
 *     ObOpenObjectByPointer @ 0x14041F280 (ObOpenObjectByPointer.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     PsReferenceImpersonationToken @ 0x1404A5010 (PsReferenceImpersonationToken.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1404FBC9C (PspWow64ReadOrWriteThreadCpuArea.c)
 *     NtQueryInformationThread @ 0x1404FCA40 (NtQueryInformationThread.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PspUnlockThreadSecurityShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx

  v2 = a1 + 1712;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1712), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease(v2);
  return KeLeaveCriticalRegionThread(a2);
}
