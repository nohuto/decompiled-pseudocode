/*
 * XREFs of EtwpUpdateLoggerSecurityDescriptor @ 0x1406A814C
 * Callers:
 *     EtwpUpdateTrace @ 0x14053F1B8 (EtwpUpdateTrace.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400AA9EC (ExfAcquireReleasePushLockExclusive.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
 *     ObLogSecurityDescriptor @ 0x14041FCF0 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404200D0 (ObDereferenceSecurityDescriptor.c)
 *     EtwpEventWriteTemplateSession @ 0x1406A43E0 (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpUpdateLoggerSecurityDescriptor(__int64 a1, void *a2)
{
  __int64 v3; // rdx
  int v4; // edi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rcx
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v4 = ObLogSecurityDescriptor(a2, &v13, 0x10u);
  if ( v4 >= 0 )
  {
    v7 = v13;
    if ( v13 )
      v7 = v13 | 0xF;
    v8 = _InterlockedExchange64((volatile __int64 *)(a1 + 784), v7);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v12, 0);
    if ( (EtwpSecurityLock & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((ULONG_PTR)&EtwpSecurityLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v3, v5, v6);
    ObDereferenceSecurityDescriptor(v8 & 0xFFFFFFFFFFFFFFF0uLL, (v8 & 0xF) + 1);
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_CHANGE_SESSION_SD) )
      EtwpEventWriteTemplateSession(v10, &ETW_EVENT_CHANGE_SESSION_SD, a1);
  }
  return (unsigned int)v4;
}
