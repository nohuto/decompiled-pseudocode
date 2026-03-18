/*
 * XREFs of MmGetPageFileForCrashDump @ 0x140625A8C
 * Callers:
 *     IoConfigureCrashDump @ 0x14013A5A8 (IoConfigureCrashDump.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 MmGetPageFileForCrashDump()
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v1; // rsi
  unsigned __int64 v2; // rbp
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  v2 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)qword_140300100, 0LL, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)qword_140300100, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(qword_140300100, v3, (ULONG_PTR)qword_140300100);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  if ( Count )
  {
    v6 = qword_1403013A0;
    v7 = Count;
    do
    {
      v8 = *v6;
      if ( (*(_BYTE *)(*v6 + 204LL) & 0x50) == 0 && *(_QWORD *)(v8 + 16) > v2 )
      {
        v1 = *(_QWORD *)(v8 + 224);
        v2 = *(_QWORD *)(v8 + 16);
      }
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140300100, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)qword_140300100);
  KeAbPostRelease((ULONG_PTR)qword_140300100);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v1;
}
