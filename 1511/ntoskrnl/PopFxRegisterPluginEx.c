/*
 * XREFs of PopFxRegisterPluginEx @ 0x1401EAB24
 * Callers:
 *     PoFxRegisterPluginEx @ 0x1401E96F8 (PoFxRegisterPluginEx.c)
 *     PoFxRegisterPlugin @ 0x140634044 (PoFxRegisterPlugin.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeInitializeQueue @ 0x1400931DC (KeInitializeQueue.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PopFxCreateEmergencyWorkerThread @ 0x1405464C4 (PopFxCreateEmergencyWorkerThread.c)
 *     PopDiagTraceFxPluginRegistration @ 0x14063957C (PopDiagTraceFxPluginRegistration.c)
 */

__int64 __fastcall PopFxRegisterPluginEx(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 v3; // ax
  int EmergencyWorkerThread; // ebx
  __int16 v8; // ax
  unsigned int v10; // ebx
  __int64 v11; // r12
  char *PoolWithTag; // rax
  char *v13; // rsi
  char *v14; // r8
  char *v15; // rdx
  char *v16; // rcx
  __int64 v17; // r9
  _QWORD *v18; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // rax
  __int64 v21; // rbp
  _QWORD *v22; // rax
  __int64 v23; // rdx
  bool v24; // cf
  unsigned __int64 v25; // [rsp+60h] [rbp+18h]

  v3 = *a3;
  if ( *a3 > 3u )
    return (unsigned int)-1073700860;
  if ( v3 == 3 && a3[1] < 0x60u || v3 == 2 && a3[1] < 0x58u || !v3 || a3[1] < 0x38u )
    return (unsigned int)-1073741811;
  v8 = *a1;
  if ( *a1 > 3u )
    return (unsigned int)-1073700859;
  if ( v8 == 3 )
  {
    if ( a1[1] < 0x20u || !*((_QWORD *)a1 + 1) && !*((_QWORD *)a1 + 3) )
      return (unsigned int)-1073741811;
  }
  else if ( v8 != 2 || a1[1] < 0x18u || !*((_QWORD *)a1 + 1) )
  {
    return (unsigned int)-1073741811;
  }
  v10 = (a2 & 1) != 0 ? 4 : 1;
  v11 = v10;
  v25 = ((int)(56 * v10 + 128) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 136LL * v10 + v25, 0x4D584650u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 136LL * v10 + v25);
    v14 = &v13[v25];
    v15 = &v13[v25];
    v16 = v14 + 65;
    v17 = v10;
    do
    {
      *(_DWORD *)v15 = 0;
      *v15 = 8;
      *(_DWORD *)(v16 - 61) = 0;
      *(_QWORD *)(v16 - 49) = v16 - 57;
      *(_QWORD *)(v16 - 57) = v16 - 57;
      *(_QWORD *)(v16 - 41) = 0LL;
      *(_QWORD *)(v16 - 9) = 0LL;
      *(_QWORD *)(v16 + 31) = v15;
      v15 += 136;
      *(_QWORD *)(v16 + 23) = PopFxWorkOrderWatchdog;
      *(_DWORD *)(v16 - 1) = 275;
      *(_QWORD *)(v16 + 55) = 0LL;
      *(_QWORD *)(v16 + 15) = 0LL;
      v16 += 136;
      --v17;
    }
    while ( v17 );
    *((_DWORD *)v13 + 30) = v10;
    v18 = v13 + 128;
    do
    {
      v18[5] = v13;
      v18[2] = PopFxPluginWork;
      v18[3] = v18;
      *v18 = 0LL;
      v18[6] = v14;
      *((_QWORD *)v14 + 16) = v18;
      v14 += 136;
      v18 += 7;
      --v11;
    }
    while ( v11 );
    KeInitializeQueue((PRKQUEUE)(v13 + 32), 1u);
    EmergencyWorkerThread = PopFxCreateEmergencyWorkerThread(v13 + 32);
    if ( EmergencyWorkerThread >= 0 )
    {
      *((_DWORD *)v13 + 4) = *a1;
      *((_QWORD *)v13 + 3) = a2;
      *((_QWORD *)v13 + 12) = *((_QWORD *)a1 + 1);
      *((_QWORD *)v13 + 13) = *((_QWORD *)a1 + 2);
      if ( *a1 >= 3u )
        *((_QWORD *)v13 + 14) = *((_QWORD *)a1 + 3);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v20 = KeAbPreAcquire((ULONG_PTR)&PopFxPluginLock, 0LL, 0LL);
      v21 = v20;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&PopFxPluginLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&PopFxPluginLock, v20, (ULONG_PTR)&PopFxPluginLock);
      if ( v21 )
        *(_BYTE *)(v21 + 26) |= 1u;
      v22 = (_QWORD *)PopFxDeviceRegisterHead;
      v23 = *(_QWORD *)PopFxDeviceRegisterHead;
      *(_QWORD *)v13 = *(_QWORD *)PopFxDeviceRegisterHead;
      *((_QWORD *)v13 + 1) = v22;
      if ( *(_QWORD **)(v23 + 8) != v22 )
        __fastfail(3u);
      *(_QWORD *)(v23 + 8) = v13;
      *v22 = v13;
      if ( (a2 & 0x80000000) != 0 )
        PopFxDeviceRegisterHead = (__int64)v13;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxPluginLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&PopFxPluginLock);
      KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      PopDiagTraceFxPluginRegistration(v13, a2, 0LL);
      v24 = *a3 < 2u;
      *((_QWORD *)a3 + 2) = PopFxRequestWorker;
      *((_QWORD *)a3 + 6) = PopFxTransitionCriticalResource;
      *((_QWORD *)a3 + 1) = v13;
      *((_QWORD *)a3 + 4) = 0LL;
      *((_QWORD *)a3 + 5) = 0LL;
      *((_QWORD *)a3 + 3) = 0LL;
      if ( !v24 )
      {
        *((_QWORD *)a3 + 7) = PopFxProcessorIdleVeto;
        *((_QWORD *)a3 + 8) = PopFxPlatformIdleVeto;
        *((_QWORD *)a3 + 9) = PopFxUpdateProcessorIdleState;
        *((_QWORD *)a3 + 10) = PopFxUpdatePlatformIdleState;
      }
      if ( *a1 >= 3u )
      {
        *((_QWORD *)a3 + 11) = PopFxRequestCommon;
        if ( *a1 == 3 )
        {
          if ( *((_QWORD *)a1 + 3) )
            PopFxAcpiPepRegistered = 1;
        }
      }
      return 0;
    }
    else
    {
      ExFreePoolWithTag(v13, 0x4D584650u);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)EmergencyWorkerThread;
}
