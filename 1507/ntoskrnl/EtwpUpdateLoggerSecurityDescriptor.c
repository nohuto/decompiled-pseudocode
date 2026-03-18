/*
 * XREFs of EtwpUpdateLoggerSecurityDescriptor @ 0x1406EA9E0
 * Callers:
 *     EtwpUpdateTrace @ 0x1405C48A0 (EtwpUpdateTrace.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockExclusive @ 0x1400F36C0 (ExfReleasePushLockExclusive.c)
 *     ObDereferenceSecurityDescriptor @ 0x140486190 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x140486480 (ObLogSecurityDescriptor.c)
 *     EtwpEventWriteTemplateSession @ 0x1406E6B70 (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpUpdateLoggerSecurityDescriptor(__int64 a1, void *a2)
{
  int v3; // esi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdi
  __int64 v10; // r9
  struct _KTHREAD *v11; // rdx
  __int16 v12; // ax
  __int64 v13; // rcx
  signed __int32 v15[18]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v3 = ObLogSecurityDescriptor(a2, &v16, 0x10u);
  if ( v3 >= 0 )
  {
    if ( v16 )
      v6 = v16 | 0xF;
    else
      v6 = 0LL;
    v7 = _InterlockedExchange64((volatile __int64 *)(a1 + 800), v6);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v15, 0);
    if ( (EtwpSecurityLock & 1) != 0 )
    {
      v9 = KeAbPreAcquire((ULONG_PTR)&EtwpSecurityLock, 0LL, 0LL, v5);
      ExfAcquirePushLockExclusiveEx(&EtwpSecurityLock, v9, (ULONG_PTR)&EtwpSecurityLock, v10);
      if ( v9 )
        *(_BYTE *)(v9 + 26) |= 1u;
      ExfReleasePushLockExclusive((volatile signed __int64 *)&EtwpSecurityLock);
      if ( v9 )
        KeAbPostRelease((ULONG_PTR)&EtwpSecurityLock);
    }
    v11 = KeGetCurrentThread();
    v12 = v11->KernelApcDisable + 1;
    v11->KernelApcDisable = v12;
    if ( !v12
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
      && !v11->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ObDereferenceSecurityDescriptor(v7 & 0xFFFFFFFFFFFFFFF0uLL, (v7 & 0xF) + 1, v4, v5);
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_CHANGE_SESSION_SD) )
      EtwpEventWriteTemplateSession(v13, &ETW_EVENT_CHANGE_SESSION_SD, a1);
  }
  return (unsigned int)v3;
}
