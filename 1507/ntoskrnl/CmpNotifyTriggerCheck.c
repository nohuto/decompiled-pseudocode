/*
 * XREFs of CmpNotifyTriggerCheck @ 0x1404EC670
 * Callers:
 *     CmpReportNotifyHelper @ 0x14042A100 (CmpReportNotifyHelper.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CmpCheckNotifyAccess @ 0x1404EC768 (CmpCheckNotifyAccess.c)
 */

char __fastcall CmpNotifyTriggerCheck(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v8; // rax
  signed __int8 v9; // cf
  __int64 v10; // rbx
  __int64 v11; // rax
  signed __int32 v12; // eax
  signed __int32 v14; // eax

  CurrentThread = KeGetCurrentThread();
  v8 = KeAbPreAcquire((ULONG_PTR)&CmpPostLock, 0LL, 0LL, a4);
  v9 = _interlockedbittestandreset((volatile signed __int32 *)&CmpPostLock, 0);
  v10 = v8;
  if ( !v9 )
    ExpAcquireFastMutexContended((ULONG_PTR)&CmpPostLock, v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = a1 + 16;
  qword_14034DB68 = (__int64)CurrentThread;
  if ( *(_QWORD *)v11 == v11 || (unsigned __int16)*(_DWORD *)(*(_QWORD *)v11 + 56LL) != 3 )
  {
    qword_14034DB68 = 0LL;
    v12 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpPostLock, 1, 0);
    if ( v12 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpPostLock, v12);
    KeAbPostRelease((ULONG_PTR)&CmpPostLock);
    return CmpCheckNotifyAccess(a1, a2, a3);
  }
  else
  {
    qword_14034DB68 = 0LL;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpPostLock, 1, 0);
    if ( v14 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpPostLock, v14);
    KeAbPostRelease((ULONG_PTR)&CmpPostLock);
    return 1;
  }
}
