/*
 * XREFs of DbgkpMarkProcessPeb @ 0x1405EE810
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x1403E38B4 (DbgkCopyProcessDebugPort.c)
 *     DbgkClearProcessDebugObject @ 0x1404F48C4 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x1405EE548 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x1405EF678 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void __fastcall DbgkpMarkProcessPeb(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rdx
  __int64 *v3; // rax
  $D4FCF91253F76F57393CBFE908971F67 v4; // [rsp+28h] [rbp-40h] BYREF

  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736)) )
  {
    if ( *(_QWORD *)(BugCheckParameter1 + 1016) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)&v4);
      ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
      *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1016) + 2LL) = *(_QWORD *)(BugCheckParameter1 + 1056) != 0LL;
      v2 = 0LL;
      v3 = *(__int64 **)(BugCheckParameter1 + 1064);
      if ( v3 )
        v2 = *v3;
      if ( v2 )
        *(_BYTE *)(v2 + 2) = *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1016) + 2LL);
      KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
      KiUnstackDetachProcess(&v4, 0LL);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
  }
}
