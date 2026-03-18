/*
 * XREFs of ObSetCurrentProcessDeviceMap @ 0x140461D94
 * Callers:
 *     ObpLookupObjectName @ 0x140491C10 (ObpLookupObjectName.c)
 *     ObpReferenceDeviceMap @ 0x140510B90 (ObpReferenceDeviceMap.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     SeGetTokenDeviceMap @ 0x140461F64 (SeGetTokenDeviceMap.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     ObfDereferenceDeviceMap @ 0x140510A14 (ObfDereferenceDeviceMap.c)
 */

__int64 ObSetCurrentProcessDeviceMap()
{
  void *v0; // rsi
  __int64 v1; // rdi
  _KPROCESS *Process; // r13
  PACCESS_TOKEN v3; // rax
  __int64 v4; // r9
  void *v5; // r15
  int TokenDeviceMap; // ebp
  __int64 v7; // r9
  unsigned __int64 v8; // r14
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rsi
  signed __int64 v15; // rax
  signed __int64 v16; // rcx
  signed __int64 v17; // rtt
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  unsigned __int64 *v21; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v22; // [rsp+80h] [rbp+18h] BYREF
  __int64 v23; // [rsp+88h] [rbp+20h] BYREF

  v0 = 0LL;
  v1 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = PsReferencePrimaryToken(Process);
  v5 = v3;
  if ( !v3 )
    return 3221225596LL;
  TokenDeviceMap = 0;
  if ( *((_QWORD *)v3 + 3) == 999LL )
  {
    PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v21, v4);
    v1 = (__int64)v21;
    v8 = *v21;
  }
  else
  {
    TokenDeviceMap = SeGetTokenDeviceMap(v3, &v22);
    if ( TokenDeviceMap < 0 )
      goto LABEL_27;
    v8 = v22;
  }
  if ( v8 )
  {
    if ( !v1 )
    {
      PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v23, v7);
      v1 = v23;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v10 = (signed __int64 *)(v1 + 120);
    v11 = KeAbPreAcquire(v1 + 120, 0LL, 0LL, v7);
    v14 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 120), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 120), v11, v1 + 120, v13);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    v0 = (void *)Process[1].ActiveProcessors.Bitmap[8];
    Process[1].ActiveProcessors.Bitmap[8] = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 24));
    _m_prefetchw(v10);
    v15 = *v10;
    v16 = *v10 - 16;
    if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v16 = 0LL;
    if ( (v15 & 2) != 0 || (v17 = *v10, v17 != _InterlockedCompareExchange64(v10, v16, v15)) )
      ExfReleasePushLock((_QWORD *)(v1 + 120), v12);
    KeAbPostRelease(v1 + 120);
    v18 = KeGetCurrentThread();
    v19 = v18->SpecialApcDisable + 1;
    v18->SpecialApcDisable = v19;
    if ( !v19 && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
      KiCheckForKernelApcDelivery();
    goto LABEL_19;
  }
LABEL_27:
  TokenDeviceMap = -1073741767;
LABEL_19:
  if ( v1 )
    PsDereferenceMonitorContextServerSilo(v1);
  ObfDereferenceObject(v5);
  if ( v0 )
    ObfDereferenceDeviceMap(v0);
  return (unsigned int)TokenDeviceMap;
}
