/*
 * XREFs of ExUpdateLicenseRegistry @ 0x14049B478
 * Callers:
 *     sub_140498054 @ 0x140498054 (sub_140498054.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     NtSetValueKey @ 0x1403F2FD0 (NtSetValueKey.c)
 */

__int64 ExUpdateLicenseRegistry()
{
  struct _KTHREAD *CurrentThread; // rax
  HANDLE v1; // rsi
  unsigned int v2; // edi
  __int64 v3; // rbx

  CurrentThread = KeGetCurrentThread();
  v1 = ExpProductTypeKey;
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_1406FBA20, v3, (ULONG_PTR)&qword_1406FBA20);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  if ( Data )
    v2 = NtSetValueKey(v1, (PUNICODE_STRING)&stru_1406A1C68, 0, 3u, Data, *(_DWORD *)Data);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1406FBA20);
  KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v2;
}
