/*
 * XREFs of PopSetPowerSettingValue @ 0x140448F44
 * Callers:
 *     PopScanIdleList @ 0x1400990D8 (PopScanIdleList.c)
 *     PopInitilizeAcDcSettings @ 0x140136C9C (PopInitilizeAcDcSettings.c)
 *     PopSetNewPolicyValue @ 0x140448E50 (PopSetNewPolicyValue.c)
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404C1D24 (PopSetPowerSettingValueAcDc.c)
 *     PopSetSessionUserStatus @ 0x1404F30C8 (PopSetSessionUserStatus.c)
 *     PopSetSessionDisplayStatus @ 0x14050BBB8 (PopSetSessionDisplayStatus.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     PopIncrementPowerSettingPendingUpdates @ 0x140091F48 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopDecrementPowerSettingPendingUpdates @ 0x140091FA4 (PopDecrementPowerSettingPendingUpdates.c)
 *     PopSetNotificationWork @ 0x140097574 (PopSetNotificationWork.c)
 *     ZwUpdateWnfStateData @ 0x140153CA0 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PopArePowerSettingsEqual @ 0x14044937C (PopArePowerSettingsEqual.c)
 *     PopFindPowerSettingConfiguration @ 0x1404493B4 (PopFindPowerSettingConfiguration.c)
 *     PopGetListHead @ 0x140449434 (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x1404494A4 (PopStateIsSessionSpecific.c)
 *     PopValidatePowerSettingData @ 0x1404494DC (PopValidatePowerSettingData.c)
 *     PoRegisterPowerSettingCallback @ 0x1404568F0 (PoRegisterPowerSettingCallback.c)
 *     PopUnreferencePowerSetting @ 0x14045705C (PopUnreferencePowerSetting.c)
 */

__int64 __fastcall PopSetPowerSettingValue(const GUID *a1, unsigned int a2, int a3, unsigned int a4, void *Src)
{
  size_t v5; // r13
  const GUID *v7; // r12
  bool v8; // r14
  _DWORD *v9; // rsi
  void *v10; // r15
  char *v11; // rbx
  __int64 v12; // r12
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v16; // rax
  _QWORD *v17; // r14
  char v18; // r15
  __int64 i; // rbp
  bool v20; // zf
  _DWORD *v21; // rax
  signed __int32 v22; // eax
  __int64 v23; // rdx
  _QWORD *j; // rax
  char *v25; // rax
  __int64 ListHead; // rax
  __int64 *v27; // r8
  __int64 v28; // r9
  __int64 *v29; // rcx
  __int64 *v30; // r10
  __int64 v31; // rdx
  __int64 **v32; // rax
  __int64 **v33; // rdx
  __int64 *v34; // rdx
  _QWORD *v35; // rax
  char IsSessionSpecific; // [rsp+40h] [rbp-68h]
  char v37; // [rsp+41h] [rbp-67h]
  char v38; // [rsp+42h] [rbp-66h]
  PVOID PoolWithTag; // [rsp+50h] [rbp-58h]
  __int64 PowerSettingConfiguration; // [rsp+60h] [rbp-48h]

  v5 = a4;
  v37 = 0;
  v7 = a1;
  v8 = 0;
  v9 = 0LL;
  v38 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4, 0x74655350u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PopIncrementPowerSettingPendingUpdates(0);
  memmove(PoolWithTag, Src, (unsigned int)v5);
  PopValidatePowerSettingData(v7, (unsigned int)v5, PoolWithTag);
  IsSessionSpecific = PopStateIsSessionSpecific(v7);
  ExAcquireFastMutex(&PopSettingLock);
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(v7, a2);
  v11 = (char *)PowerSettingConfiguration;
  if ( !PowerSettingConfiguration )
  {
    v25 = (char *)ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x74655350u);
    PowerSettingConfiguration = (__int64)v25;
    v11 = v25;
    if ( !v25 )
    {
      v13 = -1073741670;
      goto LABEL_6;
    }
    memset(v25, 0, 0x58uLL);
    *((GUID *)v11 + 2) = *v7;
    ListHead = PopGetListHead(v7);
    v27 = (__int64 *)(v11 + 16);
    v28 = ListHead;
    *((_QWORD *)v11 + 3) = v11 + 16;
    *((_QWORD *)v11 + 2) = v11 + 16;
    if ( IsSessionSpecific )
    {
      *((_DWORD *)v11 + 12) = a2;
    }
    else
    {
      v29 = (__int64 *)PopRegisteredPowerSettingCallbacks;
      while ( v29 != &PopRegisteredPowerSettingCallbacks )
      {
        v30 = v29;
        v29 = (__int64 *)*v29;
        v31 = *(__int64 *)((char *)v30 + 36) - *(_QWORD *)&v7->Data1;
        if ( !v31 )
          v31 = *(__int64 *)((char *)v30 + 44) - *(_QWORD *)v7->Data4;
        if ( !v31 )
        {
          v32 = (__int64 **)v29[1];
          v33 = (__int64 **)v32[1];
          if ( *v32 != v29 || *v33 != (__int64 *)v32 )
            __fastfail(3u);
          v29[1] = (__int64)v33;
          *v33 = v29;
          v34 = (__int64 *)*((_QWORD *)v11 + 3);
          *v32 = v27;
          v32[1] = v34;
          if ( (__int64 *)*v34 != v27 )
            __fastfail(3u);
          *v34 = (__int64)v32;
          *((_QWORD *)v11 + 3) = v32;
        }
      }
      *((_DWORD *)v11 + 12) = -1;
    }
    v35 = *(_QWORD **)(v28 + 8);
    *(_QWORD *)v11 = v28;
    *((_QWORD *)v11 + 1) = v35;
    if ( *v35 != v28 )
      __fastfail(3u);
    *v35 = v11;
    *(_QWORD *)(v28 + 8) = v11;
    v37 = 1;
    if ( PopPopPowerSettingSetChangeNotification.Data[0] || PopPopPowerSettingSetChangeNotification.Data[1] )
      v38 = 1;
  }
  v12 = *(_QWORD *)&v11[8 * a3 + 64];
  if ( !(unsigned __int8)PopArePowerSettingsEqual(v12, PoolWithTag, (unsigned int)v5) )
  {
    v16 = a3;
    v17 = v11 + 64;
    v18 = 0;
    for ( i = 0LL; i < 3; ++i )
    {
      if ( i != v16 )
      {
        if ( !v9 )
        {
          v20 = (unsigned __int8)PopArePowerSettingsEqual(*v17, PoolWithTag, (unsigned int)v5) == 0;
          v16 = a3;
          if ( !v20 )
          {
            v9 = (_DWORD *)*v17;
            ++*(_DWORD *)*v17;
          }
        }
        if ( *v17 == v12 )
          v18 = 1;
      }
      ++v17;
    }
    v13 = 0;
    if ( !v9 )
    {
      v21 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v5 + 12), 0x74655350u);
      v9 = v21;
      if ( !v21 )
      {
        v8 = 0;
        v13 = -1073741670;
        LOBYTE(v9) = 0;
LABEL_37:
        v10 = PoolWithTag;
        goto LABEL_5;
      }
      memset(v21, 0, (unsigned int)(v5 + 12));
      v9[1] = v5;
      *v9 = 1;
      do
        v22 = _InterlockedIncrement(&PopPowerSettingChangeStamp);
      while ( !v22 );
      v9[2] = v22;
      memmove(v9 + 3, PoolWithTag, v5);
    }
    if ( v12 )
    {
      if ( !v18 )
      {
        for ( j = *(_QWORD **)(PowerSettingConfiguration + 16);
              j != (_QWORD *)(PowerSettingConfiguration + 16);
              j = (_QWORD *)*j )
        {
          if ( j[7] == v12 )
            j[7] = 0LL;
        }
      }
      PopUnreferencePowerSetting(v12);
    }
    v8 = 0;
    *(_QWORD *)(PowerSettingConfiguration + 8LL * a3 + 64) = v9;
    if ( dword_1402DE28C == a3 )
      v8 = IsSessionSpecific == 0;
    if ( *(_DWORD *)(PowerSettingConfiguration + 56) || *(_DWORD *)(PowerSettingConfiguration + 60) )
    {
      *(_DWORD *)(PowerSettingConfiguration + 52) |= 1u;
      LOBYTE(v9) = 1;
    }
    else
    {
      LOBYTE(v9) = 0;
    }
    goto LABEL_37;
  }
  v13 = 0;
LABEL_5:
  v7 = a1;
LABEL_6:
  KeReleaseGuardedMutex(&PopSettingLock);
  if ( v37 )
    PoRegisterPowerSettingCallback(0LL, v7, PopTracePowerSettingChange, 0LL, 0LL);
  ExFreePoolWithTag(v10, 0x74655350u);
  if ( (unsigned int)PopOsInitPhase >= 3 )
  {
    if ( v38 )
      ZwUpdateWnfStateData(&PopPopPowerSettingSetChangeNotification, 0LL, 0, 0LL, 0LL, 0, 0);
    if ( v8 )
    {
      PopIncrementPowerSettingPendingUpdates(1);
      PopSetNotificationWork(0x20u, v23);
    }
    if ( (_BYTE)v9 )
      PopSetNotificationWork(0x80u, v14);
  }
  PopDecrementPowerSettingPendingUpdates(0);
  return v13;
}
