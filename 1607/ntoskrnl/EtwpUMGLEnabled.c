/*
 * XREFs of EtwpUMGLEnabled @ 0x14069FF10
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3390 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall EtwpUMGLEnabled(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbx
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  __int64 *v6; // rcx
  _BYTE v7[48]; // [rsp+30h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter1 + 1016);
  if ( !v2 || !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736)) )
    return 0;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v7);
  v4 = _bittest((const signed __int32 *)(v2 + 888), 0);
  v5 = 0LL;
  v6 = *(__int64 **)(BugCheckParameter1 + 1064);
  if ( v6 )
    v5 = *v6;
  if ( v5 )
    v4 = v4 || _bittest((const signed __int32 *)(v5 + 576), 0);
  KiUnstackDetachProcess((struct _KTHREAD *)v7, 0);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
  return v4;
}
