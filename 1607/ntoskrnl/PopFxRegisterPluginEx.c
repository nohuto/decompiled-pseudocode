/*
 * XREFs of PopFxRegisterPluginEx @ 0x140203328
 * Callers:
 *     PoFxRegisterPluginEx @ 0x1402020D8 (PoFxRegisterPluginEx.c)
 *     PoFxRegisterPlugin @ 0x14066C530 (PoFxRegisterPlugin.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KeInitializeQueue @ 0x14007DEC4 (KeInitializeQueue.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PopFxCreateEmergencyWorkerThread @ 0x14057B3F0 (PopFxCreateEmergencyWorkerThread.c)
 *     PopDiagTraceFxPluginRegistration @ 0x140671740 (PopDiagTraceFxPluginRegistration.c)
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
  _BYTE *v20; // rax
  _BYTE *v21; // rbp
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  bool v27; // cf
  unsigned __int64 v28; // [rsp+60h] [rbp+18h]

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
  v28 = ((int)(56 * v10 + 128) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 136LL * v10 + v28, 0x4D584650u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 136LL * v10 + v28);
    v14 = &v13[v28];
    v15 = &v13[v28];
    v16 = v14 + 65;
    v17 = v10;
    do
    {
      *(_DWORD *)v15 = 0;
      *v15 = 8;
      *(_DWORD *)(v16 - 61) = 0;
      *(_QWORD *)(v16 - 49) = v16 - 57;
      *(_QWORD *)(v16 - 57) = v16 - 57;
      *(_QWORD *)(v16 - 9) = 0LL;
      *(_QWORD *)(v16 - 41) = 0LL;
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
      v20 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&PopFxPluginLock, 0LL, 0);
      v21 = v20;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&PopFxPluginLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&PopFxPluginLock, v20, (ULONG_PTR)&PopFxPluginLock);
      if ( v21 )
        v21[26] |= 1u;
      v22 = (_QWORD *)PopFxDeviceRegisterHead;
      v23 = *(_QWORD *)PopFxDeviceRegisterHead;
      if ( *(_QWORD *)(*(_QWORD *)PopFxDeviceRegisterHead + 8LL) != PopFxDeviceRegisterHead )
        __fastfail(3u);
      *((_QWORD *)v13 + 1) = PopFxDeviceRegisterHead;
      *(_QWORD *)v13 = v23;
      *(_QWORD *)(v23 + 8) = v13;
      *v22 = v13;
      if ( (a2 & 0x80000000) != 0 )
        PopFxDeviceRegisterHead = (__int64)v13;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxPluginLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&PopFxPluginLock);
      KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v24, v25, v26);
      PopDiagTraceFxPluginRegistration(v13, a2, 0LL);
      v27 = *a3 < 2u;
      *((_QWORD *)a3 + 2) = PopFxRequestWorker;
      *((_QWORD *)a3 + 6) = PopFxTransitionCriticalResource;
      *((_QWORD *)a3 + 1) = v13;
      *((_QWORD *)a3 + 4) = 0LL;
      *((_QWORD *)a3 + 5) = 0LL;
      *((_QWORD *)a3 + 3) = 0LL;
      if ( !v27 )
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
