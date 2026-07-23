/*
 * XREFs of PopPdcCsDeviceNotification @ 0x14066FFD0
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x1407BD360 (PopPdcCsCheckSystemVolumeDevice.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopNetUpdateCsConsumptionFlags @ 0x14057C9D8 (PopNetUpdateCsConsumptionFlags.c)
 *     PopPdcUpdateDeviceCompliance @ 0x1406701F4 (PopPdcUpdateDeviceCompliance.c)
 *     PopNetCompliantNicUpdate @ 0x140673748 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x140673848 (PopNetNonCompliantDeviceUpdate.c)
 */

__int64 __fastcall PopPdcCsDeviceNotification(__int64 a1)
{
  unsigned int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v4; // rax
  signed __int8 v5; // cf
  _BYTE *v6; // rbp
  _DWORD *v7; // rcx
  _DWORD *v8; // r8
  char v9; // al
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // r14
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  void **v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  int *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9

  v1 = 0;
  if ( !PopPlatformAoAc )
    return v1;
  if ( *(_DWORD *)(a1 + 8) > 4u )
    return (unsigned int)-1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&PopPdcDeviceListLock, 0LL, 0);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&PopPdcDeviceListLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&PopPdcDeviceListLock, v4, (ULONG_PTR)&PopPdcDeviceListLock);
  if ( v6 )
    v6[26] |= 1u;
  v7 = PopPdcDeviceList;
  v8 = 0LL;
  v9 = 0;
  if ( PopPdcDeviceList != (_UNKNOWN *)&PopPdcDeviceList )
  {
    while ( 1 )
    {
      v8 = v7;
      if ( *((_QWORD *)v7 + 2) == *(_QWORD *)a1 )
        break;
      v7 = *(_DWORD **)v7;
      if ( v7 == (_DWORD *)&PopPdcDeviceList )
        goto LABEL_12;
    }
    v9 = 1;
  }
LABEL_12:
  if ( *(_BYTE *)(a1 + 12) )
  {
    if ( v9 )
    {
      ++v8[7];
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x6F435343u);
      v11 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x28uLL);
        v11[2] = *(_QWORD *)a1;
        *((_DWORD *)v11 + 6) = *(_DWORD *)(a1 + 8);
        *((_BYTE *)v11 + 32) = *(_BYTE *)(a1 + 13);
        *((_DWORD *)v11 + 7) = 1;
        v12 = off_1402F4B38;
        if ( *off_1402F4B38 != (_UNKNOWN *)&PopPdcDeviceList )
          __fastfail(3u);
        *v11 = &PopPdcDeviceList;
        v11[1] = v12;
        *v12 = v11;
        off_1402F4B38 = (_UNKNOWN **)v11;
LABEL_25:
        PopPdcUpdateDeviceCompliance();
        PopAcquirePolicyLock();
        v16 = *(int *)(a1 + 8);
        if ( (((_DWORD)v16 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v16 == 3 )
        {
          v17 = PopCsDeviceCompliance;
          if ( PopCsDeviceCompliance[v16] == -1 )
          {
            LOBYTE(v17) = *(_BYTE *)(a1 + 12);
            PopNetNonCompliantDeviceUpdate(v17);
          }
        }
        else
        {
          if ( *(_BYTE *)(a1 + 13) )
          {
            LOBYTE(v15) = *(_BYTE *)(a1 + 12);
            PopNetCompliantNicUpdate(v15);
          }
          PopNetUpdateCsConsumptionFlags();
        }
        PopReleasePolicyLock();
        goto LABEL_35;
      }
      v1 = -1073741801;
    }
  }
  else if ( v9 )
  {
    if ( (int)--v8[7] <= 0 )
    {
      v13 = *(_QWORD **)v7;
      v14 = (void **)*((_QWORD *)v7 + 1);
      if ( *(_DWORD **)(*(_QWORD *)v7 + 8LL) != v7 || *v14 != v7 )
        __fastfail(3u);
      *v14 = v13;
      v13[1] = v14;
      ExFreePoolWithTag(v8, 0x6F435343u);
      goto LABEL_25;
    }
  }
  else
  {
    v1 = -1073741811;
  }
LABEL_35:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPdcDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPdcDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPdcDeviceListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v18, v19, v20);
  return v1;
}
