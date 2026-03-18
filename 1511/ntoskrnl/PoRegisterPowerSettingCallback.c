/*
 * XREFs of PoRegisterPowerSettingCallback @ 0x1404568F0
 * Callers:
 *     HvlpRegisterPowerPolicyCallbacks @ 0x1401B2E68 (HvlpRegisterPowerPolicyCallbacks.c)
 *     PopSetPowerSettingValue @ 0x140448F44 (PopSetPowerSettingValue.c)
 *     CmpInitializeLazyWriters @ 0x1405308E4 (CmpInitializeLazyWriters.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x1405309F0 (PopIdleInitAoAcDozeS4Timer.c)
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 *     PopInitializePowerSettingCallbacks @ 0x140762C20 (PopInitializePowerSettingCallbacks.c)
 *     PpmInfoRegisterCallbacks @ 0x140762CF4 (PpmInfoRegisterCallbacks.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     PopSetNotificationWork @ 0x140097574 (PopSetNotificationWork.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     PopFindPowerSettingConfiguration @ 0x1404493B4 (PopFindPowerSettingConfiguration.c)
 *     PopStateIsSessionSpecific @ 0x1404494A4 (PopStateIsSessionSpecific.c)
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
  char *PoolWithTag; // rax
  char *v12; // rbx
  GUID v13; // xmm0
  _QWORD *PowerSettingConfiguration; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  NTSTATUS v18; // edi
  __int64 v19; // rdx
  __int64 **v21; // rax

  v5 = dword_1402DE28C;
  v10 = 0;
  if ( PopStateIsSessionSpecific(SettingGuid) )
    return -1073741811;
  ExAcquireFastMutex(&PopSettingLock);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x74655350u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x60uLL);
    *((_DWORD *)v12 + 4) = 1952797520;
    v13 = *SettingGuid;
    *((_QWORD *)v12 + 8) = Callback;
    *((_QWORD *)v12 + 9) = Context;
    *(GUID *)(v12 + 36) = v13;
    *((_QWORD *)v12 + 10) = DeviceObject;
    PowerSettingConfiguration = PopFindPowerSettingConfiguration(SettingGuid, -1);
    if ( PowerSettingConfiguration )
    {
      v15 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_IDLE_BACKGROUND_TASK.Data1;
      if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_IDLE_BACKGROUND_TASK.Data1 )
        v15 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_IDLE_BACKGROUND_TASK.Data4;
      if ( !v15 )
        goto LABEL_19;
      v16 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_BACKGROUND_TASK_NOTIFICATION.Data1;
      if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_BACKGROUND_TASK_NOTIFICATION.Data1 )
        v16 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_BACKGROUND_TASK_NOTIFICATION.Data4;
      if ( !v16 )
LABEL_19:
        *((_QWORD *)v12 + 7) = PowerSettingConfiguration[v5 + 8];
      v17 = (_QWORD *)PowerSettingConfiguration[3];
      *(_QWORD *)v12 = PowerSettingConfiguration + 2;
      *((_QWORD *)v12 + 1) = v17;
      if ( (_QWORD *)*v17 != PowerSettingConfiguration + 2 )
        __fastfail(3u);
      *v17 = v12;
      PowerSettingConfiguration[3] = v12;
    }
    else
    {
      v21 = (__int64 **)qword_1402DE958;
      *(_QWORD *)v12 = &PopRegisteredPowerSettingCallbacks;
      *((_QWORD *)v12 + 1) = v21;
      if ( *v21 != &PopRegisteredPowerSettingCallbacks )
        __fastfail(3u);
      *v21 = (__int64 *)v12;
      qword_1402DE958 = (__int64)v12;
    }
    v18 = 0;
    v10 = (unsigned int)PopOsInitPhase >= 3;
    if ( Handle )
      *Handle = v12;
  }
  else
  {
    v18 = -1073741670;
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  if ( v10 )
    PopSetNotificationWork(0x20u, v19);
  return v18;
}
