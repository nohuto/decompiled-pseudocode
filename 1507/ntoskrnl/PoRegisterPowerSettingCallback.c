/*
 * XREFs of PoRegisterPowerSettingCallback @ 0x1404E4240
 * Callers:
 *     HvlpRegisterPowerPolicyCallbacks @ 0x1401EDB6C (HvlpRegisterPowerPolicyCallbacks.c)
 *     PopSetPowerSettingValue @ 0x1404FFFC0 (PopSetPowerSettingValue.c)
 *     CmpInitializeLazyWriters @ 0x1405A74EC (CmpInitializeLazyWriters.c)
 *     PopInitializePowerSettingCallbacks @ 0x1407E0AD0 (PopInitializePowerSettingCallbacks.c)
 *     PpmInfoRegisterCallbacks @ 0x1407E0BA4 (PpmInfoRegisterCallbacks.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PopSetNotificationWork @ 0x1400D0780 (PopSetNotificationWork.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PopFindPowerSettingConfiguration @ 0x140500508 (PopFindPowerSettingConfiguration.c)
 *     PopStateIsSessionSpecific @ 0x1405005F8 (PopStateIsSessionSpecific.c)
 */

NTSTATUS __stdcall PoRegisterPowerSettingCallback(
        PDEVICE_OBJECT DeviceObject,
        LPCGUID SettingGuid,
        PPOWER_SETTING_CALLBACK Callback,
        PVOID Context,
        PVOID *Handle)
{
  __int64 v5; // rbp
  bool v10; // si
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int8 CurrentIrql; // r13
  char *PoolWithTag; // rax
  char *v16; // rbx
  GUID v17; // xmm0
  __int64 PowerSettingConfiguration; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  NTSTATUS v22; // edi
  unsigned __int8 v23; // bl
  signed __int32 v24; // eax
  __int64 **v26; // rax

  v5 = dword_14032E84C;
  v10 = 0;
  if ( (unsigned __int8)PopStateIsSessionSpecific(SettingGuid) )
    return -1073741811;
  v12 = KeAbPreAcquire((ULONG_PTR)&PopSettingLock, 0LL, 0LL, v11);
  v13 = v12;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopSettingLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PopSettingLock, v12);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  qword_14032EFE8 = (__int64)KeGetCurrentThread();
  dword_14032F010 = CurrentIrql;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x74655350u);
  v16 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x60uLL);
    *((_DWORD *)v16 + 4) = 1952797520;
    v17 = *SettingGuid;
    *((_QWORD *)v16 + 8) = Callback;
    *((_QWORD *)v16 + 9) = Context;
    *(GUID *)(v16 + 36) = v17;
    *((_QWORD *)v16 + 10) = DeviceObject;
    PowerSettingConfiguration = PopFindPowerSettingConfiguration(SettingGuid, 0xFFFFFFFFLL);
    if ( PowerSettingConfiguration )
    {
      v19 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_IDLE_BACKGROUND_TASK.Data1;
      if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_IDLE_BACKGROUND_TASK.Data1 )
        v19 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_IDLE_BACKGROUND_TASK.Data4;
      if ( !v19 )
        goto LABEL_25;
      v20 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_BACKGROUND_TASK_NOTIFICATION.Data1;
      if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_BACKGROUND_TASK_NOTIFICATION.Data1 )
        v20 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_BACKGROUND_TASK_NOTIFICATION.Data4;
      if ( !v20 )
LABEL_25:
        *((_QWORD *)v16 + 7) = *(_QWORD *)(PowerSettingConfiguration + 8 * v5 + 64);
      v21 = *(_QWORD **)(PowerSettingConfiguration + 24);
      *(_QWORD *)v16 = PowerSettingConfiguration + 16;
      *((_QWORD *)v16 + 1) = v21;
      if ( *v21 != PowerSettingConfiguration + 16 )
        __fastfail(3u);
      *v21 = v16;
      *(_QWORD *)(PowerSettingConfiguration + 24) = v16;
    }
    else
    {
      v26 = (__int64 **)qword_14032E058;
      *(_QWORD *)v16 = &PopRegisteredPowerSettingCallbacks;
      *((_QWORD *)v16 + 1) = v26;
      if ( *v26 != &PopRegisteredPowerSettingCallbacks )
        __fastfail(3u);
      *v26 = (__int64 *)v16;
      qword_14032E058 = (__int64)v16;
    }
    v22 = 0;
    v10 = (unsigned int)PopOsInitPhase >= 3;
    if ( Handle )
      *Handle = v16;
  }
  else
  {
    v22 = -1073741670;
  }
  qword_14032EFE8 = 0LL;
  v23 = dword_14032F010;
  v24 = _InterlockedCompareExchange((volatile signed __int32 *)&PopSettingLock, 1, 0);
  if ( v24 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PopSettingLock, v24);
  __writecr8(v23);
  KeAbPostRelease((ULONG_PTR)&PopSettingLock);
  if ( v10 )
    PopSetNotificationWork(0x20u);
  return v22;
}
