/*
 * XREFs of EtwpUMGLEnabled @ 0x14065FED4
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x1406627B0 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall EtwpUMGLEnabled(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbx
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  __int64 *v6; // rcx
  $D4FCF91253F76F57393CBFE908971F67 v7; // [rsp+30h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter1 + 1016);
  if ( !v2 || !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736)) )
    return 0;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)&v7);
  v4 = _bittest((const signed __int32 *)(v2 + 888), 0);
  v5 = 0LL;
  v6 = *(__int64 **)(BugCheckParameter1 + 1064);
  if ( v6 )
    v5 = *v6;
  if ( v5 )
    v4 = v4 || _bittest((const signed __int32 *)(v5 + 576), 0);
  KiUnstackDetachProcess(&v7, 0LL);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
  return v4;
}
