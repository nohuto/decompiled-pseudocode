/*
 * XREFs of PspUnlockThreadSecurityShared @ 0x140087058
 * Callers:
 *     ObOpenObjectByPointer @ 0x1404203C0 (ObOpenObjectByPointer.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     PsReferenceImpersonationToken @ 0x140499D10 (PsReferenceImpersonationToken.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1405188AC (PspWow64ReadOrWriteThreadCpuArea.c)
 *     NtQueryInformationThread @ 0x140519650 (NtQueryInformationThread.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
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
