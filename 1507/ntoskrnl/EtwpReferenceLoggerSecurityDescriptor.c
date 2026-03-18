/*
 * XREFs of EtwpReferenceLoggerSecurityDescriptor @ 0x1404D32E0
 * Callers:
 *     EtwpCheckLoggerControlAccess @ 0x1404D3244 (EtwpCheckLoggerControlAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406E58C8 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ObDereferenceSecurityDescriptor @ 0x140486190 (ObDereferenceSecurityDescriptor.c)
 */

unsigned __int64 __fastcall EtwpReferenceLoggerSecurityDescriptor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 v5; // rbx
  signed __int64 v6; // rax
  int v7; // eax
  unsigned __int64 v8; // rbx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rbx
  __int64 v14; // r9
  struct _KTHREAD *v15; // rdx
  __int16 v16; // ax

  _m_prefetchw((const void *)(a1 + 800));
  v5 = *(_QWORD *)(a1 + 800);
  if ( (v5 & 0xF) != 0 )
  {
    do
    {
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 800), v5 - 1, v5);
      if ( v5 == v6 )
        break;
      v5 = v6;
    }
    while ( (v6 & 0xF) != 0 );
  }
  v7 = v5 & 0xF;
  if ( (v5 & 0xF) != 0 )
  {
    v8 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v7 == 1 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 16), 0xFuLL) <= 0 )
        __fastfail(0xEu);
      _m_prefetchw((const void *)(a1 + 800));
      v10 = *(_QWORD *)(a1 + 800);
      while ( (unsigned __int64)(v10 & 0xF) + 15 <= 0xF && v8 == (v10 & 0xFFFFFFFFFFFFFFF0uLL) )
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 800), v10 + 15, v10);
        if ( v11 == v10 )
          return v8;
      }
      ObDereferenceSecurityDescriptor(v8, 0xFu, 15LL, a4);
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = KeAbPreAcquire((ULONG_PTR)&EtwpSecurityLock, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&EtwpSecurityLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&EtwpSecurityLock, v13, (ULONG_PTR)&EtwpSecurityLock, v14);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    v8 = *(_QWORD *)(a1 + 800) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 16), 1uLL) <= 0 )
      __fastfail(0xEu);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&EtwpSecurityLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&EtwpSecurityLock);
    KeAbPostRelease((ULONG_PTR)&EtwpSecurityLock);
    v15 = KeGetCurrentThread();
    v16 = v15->KernelApcDisable + 1;
    v15->KernelApcDisable = v16;
    if ( !v16
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
      && !v15->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v8;
}
