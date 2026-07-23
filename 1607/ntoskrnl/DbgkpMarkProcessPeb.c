/*
 * XREFs of DbgkpMarkProcessPeb @ 0x1406184F4
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x14045E744 (DbgkCopyProcessDebugPort.c)
 *     DbgkClearProcessDebugObject @ 0x1404D30AC (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x14061822C (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x140619330 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall DbgkpMarkProcessPeb(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rdx
  __int64 *v3; // rax
  _BYTE v4[48]; // [rsp+28h] [rbp-40h] BYREF

  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736)) )
  {
    if ( *(_QWORD *)(BugCheckParameter1 + 1016) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v4);
      ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
      *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1016) + 2LL) = *(_QWORD *)(BugCheckParameter1 + 1056) != 0LL;
      v2 = 0LL;
      v3 = *(__int64 **)(BugCheckParameter1 + 1064);
      if ( v3 )
        v2 = *v3;
      if ( v2 )
        *(_BYTE *)(v2 + 2) = *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1016) + 2LL);
      KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
      KiUnstackDetachProcess((struct _KTHREAD *)v4, 0);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
  }
}
