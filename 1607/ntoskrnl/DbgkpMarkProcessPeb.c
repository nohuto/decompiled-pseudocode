/*
 * XREFs of DbgkpMarkProcessPeb @ 0x140618440
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x14045F874 (DbgkCopyProcessDebugPort.c)
 *     DbgkClearProcessDebugObject @ 0x1404F0FB8 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x140618178 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x14061927C (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
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
