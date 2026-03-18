/*
 * XREFs of EtwpUpdateLoggerSecurityDescriptor @ 0x140667728
 * Callers:
 *     EtwpUpdateTrace @ 0x140545148 (EtwpUpdateTrace.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400F45B8 (ExfAcquireReleasePushLockExclusive.c)
 *     ObDereferenceSecurityDescriptor @ 0x140420D30 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x14042E2C0 (ObLogSecurityDescriptor.c)
 *     EtwpEventWriteTemplateSession @ 0x140663A90 (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpUpdateLoggerSecurityDescriptor(__int64 a1, char *a2)
{
  int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rcx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v3 = ObLogSecurityDescriptor(a2, &v10, 0x10u);
  if ( v3 >= 0 )
  {
    v4 = v10;
    if ( v10 )
      v4 = v10 | 0xF;
    v5 = _InterlockedExchange64((volatile __int64 *)(a1 + 800), v4);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v9, 0);
    if ( (EtwpSecurityLock & 1) != 0 )
      ExfAcquireReleasePushLockExclusive(&EtwpSecurityLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ObDereferenceSecurityDescriptor(v5 & 0xFFFFFFFFFFFFFFF0uLL, (v5 & 0xF) + 1);
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_CHANGE_SESSION_SD) )
      EtwpEventWriteTemplateSession(v7, &ETW_EVENT_CHANGE_SESSION_SD, a1);
  }
  return (unsigned int)v3;
}
