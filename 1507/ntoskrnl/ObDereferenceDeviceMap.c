/*
 * XREFs of ObDereferenceDeviceMap @ 0x14050423C
 * Callers:
 *     PspProcessDelete @ 0x140503E8C (PspProcessDelete.c)
 *     PspAssignPrimaryToken @ 0x1406C3208 (PspAssignPrimaryToken.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ObfDereferenceDeviceMap @ 0x140510A14 (ObfDereferenceDeviceMap.c)
 */

void __fastcall ObDereferenceDeviceMap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rdi
  void *v12; // rdi
  signed __int64 v13; // rax
  signed __int64 v14; // rcx
  unsigned __int64 v15; // rtt
  struct _KTHREAD *v16; // rdx
  __int16 v17; // ax
  __int64 v18; // [rsp+38h] [rbp+10h] BYREF

  PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v18, a4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v6 = (unsigned __int64 *)(v18 + 120);
  v8 = KeAbPreAcquire(v18 + 120, 0LL, 0LL, v7);
  v11 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v8, (ULONG_PTR)v6, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = *(void **)(a1 + 1072);
  *(_QWORD *)(a1 + 1072) = 0LL;
  _m_prefetchw(v6);
  v13 = *v6;
  v14 = *v6 - 16;
  if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v14 = 0LL;
  if ( (v13 & 2) != 0 || (v15 = *v6, v15 != _InterlockedCompareExchange64((volatile signed __int64 *)v6, v14, v13)) )
    ExfReleasePushLock(v6, v9);
  KeAbPostRelease((ULONG_PTR)v6);
  v16 = KeGetCurrentThread();
  v17 = v16->SpecialApcDisable + 1;
  v16->SpecialApcDisable = v17;
  if ( !v17 && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery();
  PsDereferenceMonitorContextServerSilo(v18);
  if ( v12 )
    ObfDereferenceDeviceMap(v12);
}
