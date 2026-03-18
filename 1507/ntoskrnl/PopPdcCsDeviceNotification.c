/*
 * XREFs of PopPdcCsDeviceNotification @ 0x1406B787C
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x1407E9120 (PopPdcCsCheckSystemVolumeDevice.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopSnapStandbyNetworkingState @ 0x1405C2938 (PopSnapStandbyNetworkingState.c)
 *     PopPdcUpdateDeviceCompliance @ 0x1406B7AC0 (PopPdcUpdateDeviceCompliance.c)
 */

__int64 __fastcall PopPdcCsDeviceNotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rax
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rsi
  __int64 *v11; // rcx
  __int64 *v12; // r8
  char v13; // al
  PVOID PoolWithTag; // rax
  __int64 v15; // rsi
  __int64 **v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // rax
  int v19; // ecx
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax

  v5 = 0;
  if ( !PopPlatformAoAc )
    return v5;
  if ( *(_DWORD *)(a1 + 8) > 4u )
    return (unsigned int)-1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&PopPdcDeviceListLock, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&PopPdcDeviceListLock, 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&PopPdcDeviceListLock, v7, (ULONG_PTR)&PopPdcDeviceListLock, v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = (__int64 *)PopPdcDeviceList;
  v12 = 0LL;
  v13 = 0;
  if ( (__int64 *)PopPdcDeviceList != &PopPdcDeviceList )
  {
    while ( 1 )
    {
      v12 = v11;
      if ( v11[2] == *(_QWORD *)a1 )
        break;
      v11 = (__int64 *)*v11;
      if ( v11 == &PopPdcDeviceList )
        goto LABEL_12;
    }
    v13 = 1;
  }
LABEL_12:
  if ( *(_BYTE *)(a1 + 12) )
  {
    if ( v13 )
    {
      ++*((_DWORD *)v12 + 7);
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x6F435343u);
      v15 = (__int64)PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x28uLL);
        *(_QWORD *)(v15 + 16) = *(_QWORD *)a1;
        *(_DWORD *)(v15 + 24) = *(_DWORD *)(a1 + 8);
        *(_BYTE *)(v15 + 32) = *(_BYTE *)(a1 + 13);
        *(_DWORD *)(v15 + 28) = 1;
        v16 = (__int64 **)qword_14032DD18;
        *(_QWORD *)v15 = &PopPdcDeviceList;
        *(_QWORD *)(v15 + 8) = v16;
        if ( *v16 != &PopPdcDeviceList )
          __fastfail(3u);
        *v16 = (__int64 *)v15;
        qword_14032DD18 = v15;
LABEL_25:
        PopPdcUpdateDeviceCompliance();
        v19 = *(_DWORD *)(a1 + 8);
        if ( ((v19 - 1) & 0xFFFFFFFC) == 0 && v19 != 3 )
        {
          PopAcquirePolicyLock();
          PopSnapStandbyNetworkingState();
          PopReleasePolicyLock();
        }
        goto LABEL_30;
      }
      v5 = -1073741801;
    }
  }
  else if ( v13 )
  {
    if ( (int)--*((_DWORD *)v12 + 7) <= 0 )
    {
      v17 = *v11;
      v18 = (__int64 *)v11[1];
      if ( *(__int64 **)(*v11 + 8) != v11 || (__int64 *)*v18 != v11 )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      ExFreePoolWithTag(v12, 0x6F435343u);
      goto LABEL_25;
    }
  }
  else
  {
    v5 = -1073741811;
  }
LABEL_30:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPdcDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPdcDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPdcDeviceListLock);
  v20 = KeGetCurrentThread();
  v21 = v20->KernelApcDisable + 1;
  v20->KernelApcDisable = v21;
  if ( !v21
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
    && !v20->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v5;
}
