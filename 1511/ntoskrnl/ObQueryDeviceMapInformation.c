/*
 * XREFs of ObQueryDeviceMapInformation @ 0x14041D1A0
 * Callers:
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 *     ObpReferenceDeviceMap @ 0x14041CF70 (ObpReferenceDeviceMap.c)
 *     ObfDereferenceDeviceMap @ 0x14041D3D4 (ObfDereferenceDeviceMap.c)
 */

__int64 __fastcall ObQueryDeviceMapInformation(_KPROCESS *a1, __int64 a2, int a3)
{
  int v4; // edi
  signed __int64 v5; // rbx
  BOOL v6; // esi
  __int64 v7; // r13
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 *v9; // r12
  __int64 v10; // r14
  char v11; // r14
  __int64 v12; // r9
  __int64 v13; // rax
  int v14; // r10d
  __int64 v15; // rcx
  __int64 v16; // r8
  signed __int64 v17; // rax
  signed __int64 v18; // rcx
  unsigned __int64 v19; // rtt
  signed __int64 v21; // rax
  unsigned __int64 v22; // rtt
  _OWORD v23[2]; // [rsp+28h] [rbp-50h] BYREF
  int v24; // [rsp+48h] [rbp-30h]
  _QWORD *v26; // [rsp+98h] [rbp+20h] BYREF

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
  v7 = ObpReferenceDeviceMap(0);
  PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v26);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v9 = v26 + 15;
  v10 = KeAbPreAcquire((ULONG_PTR)(v26 + 15), 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v9, v10, (ULONG_PTR)v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( v7 )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    if ( a1 )
      v7 = a1[1].ActiveProcessors.Bitmap[8];
    else
      v7 = *v26;
  }
  if ( v7 )
  {
    v12 = v7;
    v13 = *(_QWORD *)(v7 + 8);
    if ( v13 && *(_QWORD *)(v13 + 304) )
      v12 = *(_QWORD *)(v13 + 304);
    v14 = *(_DWORD *)(v7 + 28);
    LODWORD(v23[0]) = v14;
    v15 = 0LL;
    v16 = 32LL;
    do
    {
      *((_BYTE *)v23 + v15 + 4) = *((_BYTE *)&v23[2] + v15 + v7 - ((_QWORD)v23 + 4) + 4);
      if ( (v14 & v4) == 0 && v6 )
      {
        *((_BYTE *)v23 + v15 + 4) = *(_BYTE *)(v15 + v12 + 32);
        LODWORD(v23[0]) |= v4 & *(_DWORD *)(v12 + 28);
      }
      ++v15;
      v4 *= 2;
      --v16;
    }
    while ( v16 );
    _m_prefetchw(v9);
    v17 = *v9;
    if ( (*v9 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v18 = v17 - 16;
    else
      v18 = 0LL;
    if ( (v17 & 2) != 0 || (v19 = *v9, v19 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v18, v17)) )
      ExfReleasePushLock(v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    PsDereferenceMonitorContextServerSilo((__int64)v26);
    if ( v11 == 1 )
      ObfDereferenceDeviceMap((PVOID)v7);
    *(_OWORD *)a2 = v23[0];
    *(_OWORD *)(a2 + 16) = v23[1];
    *(_DWORD *)(a2 + 32) = v24;
  }
  else
  {
    _m_prefetchw(v9);
    v21 = *v9;
    if ( (*v9 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v5 = v21 - 16;
    if ( (v21 & 2) != 0 || (v22 = *v9, v22 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v5, v21)) )
      ExfReleasePushLock(v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    PsDereferenceMonitorContextServerSilo((__int64)v26);
    LODWORD(v5) = -1073741807;
  }
  return (unsigned int)v5;
}
