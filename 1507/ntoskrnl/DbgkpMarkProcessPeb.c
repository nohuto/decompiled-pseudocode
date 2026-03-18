/*
 * XREFs of DbgkpMarkProcessPeb @ 0x140666EA8
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x14046ACD0 (DbgkCopyProcessDebugPort.c)
 *     DbgkClearProcessDebugObject @ 0x1405685D8 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x140666AD0 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x140667F30 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall DbgkpMarkProcessPeb(ULONG_PTR BugCheckParameter1)
{
  struct _EX_RUNDOWN_REF *v2; // rcx
  unsigned __int64 v3; // rtt
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 v8; // rdx
  unsigned __int8 v9; // di
  signed __int32 v10; // eax
  unsigned __int64 v11; // rtt
  _BYTE v12[48]; // [rsp+30h] [rbp-48h] BYREF

  v2 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 736);
  _m_prefetchw(v2);
  v3 = v2->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v3 == _InterlockedCompareExchange64((volatile signed __int64 *)v2, v3 + 2, v3) || ExfAcquireRundownProtection(v2) )
  {
    if ( *(_QWORD *)(BugCheckParameter1 + 1016) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v12);
      v5 = KeAbPreAcquire((ULONG_PTR)&DbgkpProcessDebugPortMutex, 0LL, 0LL, v4);
      v6 = v5;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&DbgkpProcessDebugPortMutex, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&DbgkpProcessDebugPortMutex, v5);
      if ( v6 )
        *(_BYTE *)(v6 + 26) |= 1u;
      qword_14034D468 = (__int64)KeGetCurrentThread();
      dword_14034D490 = CurrentIrql;
      *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1016) + 2LL) = *(_QWORD *)(BugCheckParameter1 + 1056) != 0LL;
      v8 = *(_QWORD *)(BugCheckParameter1 + 1064);
      if ( v8 )
        *(_BYTE *)(v8 + 2) = *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1016) + 2LL);
      qword_14034D468 = 0LL;
      v9 = dword_14034D490;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)&DbgkpProcessDebugPortMutex, 1, 0);
      if ( v10 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&DbgkpProcessDebugPortMutex, v10);
      __writecr8(v9);
      KeAbPostRelease((ULONG_PTR)&DbgkpProcessDebugPortMutex);
      KiUnstackDetachProcess((struct _KTHREAD *)v12, 0);
    }
    _m_prefetchw((const void *)(BugCheckParameter1 + 736));
    v11 = *(_QWORD *)(BugCheckParameter1 + 736) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter1 + 736), v11 - 2, v11) )
      ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
  }
}
