/*
 * XREFs of ObQueryDeviceMapInformation @ 0x1404210E0
 * Callers:
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140013220 (PsGetProcessServerSilo.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ObpReferenceDeviceMap @ 0x140420CA0 (ObpReferenceDeviceMap.c)
 *     ObfDereferenceDeviceMap @ 0x140421318 (ObfDereferenceDeviceMap.c)
 */

__int64 __fastcall ObQueryDeviceMapInformation(_KPROCESS *a1, __int64 a2, int a3)
{
  int v4; // edi
  signed __int64 v5; // rbx
  BOOL v6; // esi
  __int64 v7; // r13
  __int64 ProcessServerSilo; // rax
  __int64 *ServerSiloGlobals; // rax
  __int64 *v10; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // r15
  signed __int64 *v13; // r9
  char v14; // r14
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // r10d
  __int64 v18; // rcx
  __int64 v19; // r8
  signed __int64 v20; // rax
  signed __int64 v21; // rcx
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  _OWORD v25[2]; // [rsp+28h] [rbp-50h] BYREF
  int v26; // [rsp+48h] [rbp-30h]
  _QWORD *BugCheckParameter2; // [rsp+98h] [rbp+20h]

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
  if ( a1 )
  {
    ProcessServerSilo = PsGetProcessServerSilo((__int64)a1);
    ServerSiloGlobals = (__int64 *)PsGetServerSiloGlobals(ProcessServerSilo);
  }
  else
  {
    ServerSiloGlobals = (__int64 *)PsGetCurrentServerSiloGlobals();
  }
  v10 = ServerSiloGlobals;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = v10 + 15;
  v12 = KeAbPreAcquire((ULONG_PTR)(v10 + 15), 0LL, 0);
  v13 = v10 + 15;
  if ( _InterlockedCompareExchange64(v10 + 15, 17LL, 0LL) )
  {
    ExfAcquirePushLockSharedEx((unsigned __int64 *)v10 + 15, v12, (ULONG_PTR)(v10 + 15));
    v13 = v10 + 15;
  }
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  if ( v7 )
  {
    v14 = 1;
  }
  else
  {
    if ( a1 )
      v7 = a1[1].ActiveProcessors.Bitmap[8];
    else
      v7 = *v10;
    v14 = 0;
  }
  if ( v7 )
  {
    v15 = v7;
    v16 = *(_QWORD *)(v7 + 8);
    if ( v16 && *(_QWORD *)(v16 + 304) )
      v15 = *(_QWORD *)(v16 + 304);
    v17 = *(_DWORD *)(v7 + 28);
    LODWORD(v25[0]) = v17;
    v18 = 0LL;
    v19 = 32LL;
    do
    {
      *((_BYTE *)v25 + v18 + 4) = *((_BYTE *)&v25[2] + v18 + v7 - ((_QWORD)v25 + 4) + 4);
      if ( (v17 & v4) == 0 && v6 )
      {
        *((_BYTE *)v25 + v18 + 4) = *(_BYTE *)(v18 + v15 + 32);
        LODWORD(v25[0]) |= v4 & *(_DWORD *)(v15 + 28);
      }
      ++v18;
      v4 *= 2;
      --v19;
    }
    while ( v19 );
    _m_prefetchw(BugCheckParameter2);
    v20 = v10[15];
    if ( (v20 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v21 = v20 - 16;
    else
      v21 = 0LL;
    if ( (v20 & 2) != 0 || v20 != _InterlockedCompareExchange64(BugCheckParameter2, v21, v20) )
      ExfReleasePushLock(BugCheckParameter2);
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v14 == 1 )
      ObfDereferenceDeviceMap((PVOID)v7);
    *(_OWORD *)a2 = v25[0];
    *(_OWORD *)(a2 + 16) = v25[1];
    *(_DWORD *)(a2 + 32) = v26;
  }
  else
  {
    _m_prefetchw(v13);
    v23 = *v13;
    if ( (*v13 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v5 = v23 - 16;
    if ( (v23 & 2) != 0 || (v24 = *v13, v24 != _InterlockedCompareExchange64(v13, v5, v23)) )
    {
      ExfReleasePushLock(v13);
      v13 = v10 + 15;
    }
    KeAbPostRelease((ULONG_PTR)v13);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    LODWORD(v5) = -1073741807;
  }
  return (unsigned int)v5;
}
