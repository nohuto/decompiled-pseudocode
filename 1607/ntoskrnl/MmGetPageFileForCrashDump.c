/*
 * XREFs of MmGetPageFileForCrashDump @ 0x14065B338
 * Callers:
 *     IoConfigureCrashDump @ 0x140142EA0 (IoConfigureCrashDump.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

__int64 MmGetPageFileForCrashDump()
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v1; // rsi
  unsigned __int64 v2; // rbp
  _BYTE *v3; // rax
  signed __int8 v4; // cf
  _BYTE *v5; // rdi
  _QWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  v2 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)qword_1403238F8, 0LL, 0);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)qword_1403238F8, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(qword_1403238F8, v3, (ULONG_PTR)qword_1403238F8);
  if ( v5 )
    v5[26] |= 1u;
  if ( Count )
  {
    v6 = qword_140324DE0;
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_1403238F8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)qword_1403238F8);
  KeAbPostRelease((ULONG_PTR)qword_1403238F8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v1;
}
