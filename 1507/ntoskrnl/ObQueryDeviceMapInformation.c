/*
 * XREFs of ObQueryDeviceMapInformation @ 0x1405107C0
 * Callers:
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ObfDereferenceDeviceMap @ 0x140510A14 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x140510B90 (ObpReferenceDeviceMap.c)
 */

__int64 __fastcall ObQueryDeviceMapInformation(_KPROCESS *a1, __int64 a2, int a3)
{
  int v4; // edi
  signed __int64 v5; // rbx
  BOOL v6; // esi
  __int64 v7; // r13
  __int64 v8; // r9
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 *v10; // r12
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // r14
  char v15; // r14
  __int64 v16; // r9
  __int64 v17; // rax
  int v18; // r10d
  __int64 v19; // rcx
  __int64 v20; // r8
  _BYTE *v21; // rdx
  signed __int64 v22; // rax
  signed __int64 v23; // rcx
  unsigned __int64 v24; // rtt
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  signed __int64 v28; // rax
  unsigned __int64 v29; // rtt
  struct _KTHREAD *v30; // rcx
  __int16 v31; // ax
  _OWORD v32[2]; // [rsp+28h] [rbp-50h] BYREF
  int v33; // [rsp+48h] [rbp-30h]
  _QWORD *v35; // [rsp+98h] [rbp+20h] BYREF

  if ( (a3 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  v4 = 1;
  v5 = 0LL;
  v6 = (a3 & 1) == 0;
  if ( a1 )
  {
    if ( KeGetCurrentThread()->ApcState.Process != a1 )
      return 3221225485LL;
  }
  v7 = ObpReferenceDeviceMap(0LL);
  PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v35, v8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v10 = v35 + 15;
  v14 = KeAbPreAcquire((ULONG_PTR)(v35 + 15), 0LL, 0LL, v11);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v10, v14, (ULONG_PTR)v10, v13);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  if ( v7 )
  {
    v15 = 1;
  }
  else
  {
    v15 = 0;
    if ( a1 )
      v7 = a1[1].ActiveProcessors.Bitmap[8];
    else
      v7 = *v35;
  }
  if ( v7 )
  {
    v16 = v7;
    v17 = *(_QWORD *)(v7 + 8);
    if ( v17 && *(_QWORD *)(v17 + 304) )
      v16 = *(_QWORD *)(v17 + 304);
    v18 = *(_DWORD *)(v7 + 28);
    LODWORD(v32[0]) = v18;
    v19 = 0LL;
    v20 = 32LL;
    do
    {
      v21 = (char *)v32 + v19 + 4;
      *((_BYTE *)v32 + v19 + 4) = *((_BYTE *)&v32[2] + v19 + v7 - ((_QWORD)v32 + 4) + 4);
      if ( (v18 & v4) == 0 && v6 )
      {
        *v21 = *(_BYTE *)(v19 + v16 + 32);
        LODWORD(v32[0]) |= v4 & *(_DWORD *)(v16 + 28);
      }
      ++v19;
      v4 *= 2;
      --v20;
    }
    while ( v20 );
    _m_prefetchw(v10);
    v22 = *v10;
    if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v23 = v22 - 16;
    else
      v23 = 0LL;
    if ( (v22 & 2) != 0 || (v24 = *v10, v24 != _InterlockedCompareExchange64((volatile signed __int64 *)v10, v23, v22)) )
      ExfReleasePushLock(v10, (__int64)v21);
    KeAbPostRelease((ULONG_PTR)v10);
    v25 = KeGetCurrentThread();
    v26 = v25->SpecialApcDisable + 1;
    v25->SpecialApcDisable = v26;
    if ( !v26 && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
      KiCheckForKernelApcDelivery();
    PsDereferenceMonitorContextServerSilo((__int64)v35);
    if ( v15 == 1 )
      ObfDereferenceDeviceMap((PVOID)v7);
    *(_OWORD *)a2 = v32[0];
    *(_OWORD *)(a2 + 16) = v32[1];
    *(_DWORD *)(a2 + 32) = v33;
  }
  else
  {
    _m_prefetchw(v10);
    v28 = *v10;
    if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v5 = v28 - 16;
    if ( (v28 & 2) != 0 || (v29 = *v10, v29 != _InterlockedCompareExchange64((volatile signed __int64 *)v10, v5, v28)) )
      ExfReleasePushLock(v10, v12);
    KeAbPostRelease((ULONG_PTR)v10);
    v30 = KeGetCurrentThread();
    v31 = v30->SpecialApcDisable + 1;
    v30->SpecialApcDisable = v31;
    if ( !v31 && ($CD287064E7C9F7953DE243E927CFCB99 *)v30->ApcState.ApcListHead[0].Flink != &v30->152 )
      KiCheckForKernelApcDelivery();
    PsDereferenceMonitorContextServerSilo((__int64)v35);
    LODWORD(v5) = -1073741807;
  }
  return (unsigned int)v5;
}
