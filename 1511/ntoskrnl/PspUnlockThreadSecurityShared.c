/*
 * XREFs of PspUnlockThreadSecurityShared @ 0x1400D1980
 * Callers:
 *     NtQueryKey @ 0x1404003C0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     AlpcpExposeTokenAttribute @ 0x14042B240 (AlpcpExposeTokenAttribute.c)
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 *     PsOpenProcess @ 0x140476110 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x140476C40 (ObOpenObjectByPointer.c)
 *     NtOpenProcessTokenEx @ 0x140476F10 (NtOpenProcessTokenEx.c)
 *     PsReferenceImpersonationToken @ 0x1404978B0 (PsReferenceImpersonationToken.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1404A53C8 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall PspUnlockThreadSecurityShared(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rbx

  v2 = (signed __int64 *)(a1 + 1704);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1704), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return KeLeaveCriticalRegionThread(a2);
}
