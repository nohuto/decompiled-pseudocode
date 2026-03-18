/*
 * XREFs of PopPdcCsDeviceNotification @ 0x140637B24
 * Callers:
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x1407662E0 (PopPdcCsCheckSystemVolumeDevice.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopSnapStandbyNetworkingState @ 0x14054B474 (PopSnapStandbyNetworkingState.c)
 *     PopPdcUpdateDeviceCompliance @ 0x140637D34 (PopPdcUpdateDeviceCompliance.c)
 */

__int64 __fastcall PopPdcCsDeviceNotification(__int64 a1)
{
  unsigned int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rax
  signed __int8 v5; // cf
  __int64 v6; // rsi
  __int64 *v7; // rcx
  __int64 *v8; // r8
  char v9; // al
  PVOID PoolWithTag; // rax
  __int64 v11; // rsi
  __int64 **v12; // rax
  __int64 v13; // rdx
  __int64 *v14; // rax
  int v15; // ecx

  v1 = 0;
  if ( !PopPlatformAoAc )
    return v1;
  if ( *(_DWORD *)(a1 + 8) > 4u )
    return (unsigned int)-1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((ULONG_PTR)&PopPdcDeviceListLock, 0LL, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&PopPdcDeviceListLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&PopPdcDeviceListLock, v4, (ULONG_PTR)&PopPdcDeviceListLock);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v7 = (__int64 *)PopPdcDeviceList;
  v8 = 0LL;
  v9 = 0;
  if ( (__int64 *)PopPdcDeviceList != &PopPdcDeviceList )
  {
    while ( 1 )
    {
      v8 = v7;
      if ( v7[2] == *(_QWORD *)a1 )
        break;
      v7 = (__int64 *)*v7;
      if ( v7 == &PopPdcDeviceList )
        goto LABEL_12;
    }
    v9 = 1;
  }
LABEL_12:
  if ( *(_BYTE *)(a1 + 12) )
  {
    if ( v9 )
    {
      ++*((_DWORD *)v8 + 7);
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x6F435343u);
      v11 = (__int64)PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x28uLL);
        *(_QWORD *)(v11 + 16) = *(_QWORD *)a1;
        *(_DWORD *)(v11 + 24) = *(_DWORD *)(a1 + 8);
        *(_BYTE *)(v11 + 32) = *(_BYTE *)(a1 + 13);
        *(_DWORD *)(v11 + 28) = 1;
        v12 = (__int64 **)qword_1402DD978;
        *(_QWORD *)v11 = &PopPdcDeviceList;
        *(_QWORD *)(v11 + 8) = v12;
        if ( *v12 != &PopPdcDeviceList )
          __fastfail(3u);
        *v12 = (__int64 *)v11;
        qword_1402DD978 = v11;
LABEL_25:
        PopPdcUpdateDeviceCompliance();
        v15 = *(_DWORD *)(a1 + 8);
        if ( ((v15 - 1) & 0xFFFFFFFC) == 0 && v15 != 3 )
        {
          PopAcquirePolicyLock();
          PopSnapStandbyNetworkingState();
          PopReleasePolicyLock();
        }
        goto LABEL_30;
      }
      v1 = -1073741801;
    }
  }
  else if ( v9 )
  {
    if ( (int)--*((_DWORD *)v8 + 7) <= 0 )
    {
      v13 = *v7;
      v14 = (__int64 *)v7[1];
      if ( *(__int64 **)(*v7 + 8) != v7 || (__int64 *)*v14 != v7 )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      ExFreePoolWithTag(v8, 0x6F435343u);
      goto LABEL_25;
    }
  }
  else
  {
    v1 = -1073741811;
  }
LABEL_30:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPdcDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPdcDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPdcDeviceListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v1;
}
