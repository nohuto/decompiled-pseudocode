/*
 * XREFs of EtwpUMGLEnabled @ 0x1406E27A0
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x1406E58C8 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

char __fastcall EtwpUMGLEnabled(ULONG_PTR BugCheckParameter1)
{
  char v2; // bl
  __int64 v3; // rsi
  struct _EX_RUNDOWN_REF *v5; // rcx
  unsigned __int64 v6; // rtt
  unsigned __int8 v7; // cl
  __int64 v8; // rax
  unsigned __int64 v9; // rtt
  char v10; // [rsp+20h] [rbp-68h]
  _BYTE v11[48]; // [rsp+40h] [rbp-48h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(BugCheckParameter1 + 1016);
  if ( !v3 )
    return 0;
  v5 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 736);
  _m_prefetchw(v5);
  v6 = v5->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v6 != _InterlockedCompareExchange64((volatile signed __int64 *)v5, v6 + 2, v6)
    && !ExfAcquireRundownProtection(v5) )
  {
    return 0;
  }
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v11);
  v7 = _bittest((const signed __int32 *)(v3 + 888), 0);
  v10 = v7;
  v8 = *(_QWORD *)(BugCheckParameter1 + 1064);
  if ( v8 )
  {
    if ( v7 || _bittest((const signed __int32 *)(v8 + 576), 0) )
      v2 = 1;
    v10 = v2;
  }
  KiUnstackDetachProcess((struct _KTHREAD *)v11, 0);
  _m_prefetchw((const void *)(BugCheckParameter1 + 736));
  v9 = *(_QWORD *)(BugCheckParameter1 + 736) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter1 + 736), v9 - 2, v9) )
    ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
  return v10;
}
