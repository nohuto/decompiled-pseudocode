/*
 * XREFs of ObIsDosDeviceLocallyMapped @ 0x1405BA3D8
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

__int64 __fastcall ObIsDosDeviceLocallyMapped(int a1, bool *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // r9
  signed __int64 v12; // rax
  signed __int64 v13; // rcx
  unsigned __int64 v14; // rtt
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  __int64 v18; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned int)(a1 - 1) > 0x19 )
    return 3221225485LL;
  PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v18, a4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(v18 + 120);
  v10 = KeAbPreAcquire(v18 + 120, 0LL, 0LL, v8);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v10, (ULONG_PTR)v7, v11);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  *a2 = *(_DWORD *)(v18 + 4LL * (unsigned int)(a1 - 1) + 12) != 0;
  _m_prefetchw(v7);
  v12 = *v7;
  v13 = *v7 - 16;
  if ( (*v7 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v13 = 0LL;
  if ( (v12 & 2) != 0 || (v14 = *v7, v14 != _InterlockedCompareExchange64((volatile signed __int64 *)v7, v13, v12)) )
    ExfReleasePushLock(v7, v9);
  KeAbPostRelease((ULONG_PTR)v7);
  v15 = KeGetCurrentThread();
  v16 = v15->SpecialApcDisable + 1;
  v15->SpecialApcDisable = v16;
  if ( !v16 && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    KiCheckForKernelApcDelivery();
  PsDereferenceMonitorContextServerSilo(v18);
  return 0LL;
}
