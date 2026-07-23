/*
 * XREFs of PopSetPowerSettingValue @ 0x1403F6F90
 * Callers:
 *     PopScanIdleList @ 0x1400094AC (PopScanIdleList.c)
 *     PopInitilizeAcDcSettings @ 0x14013A0EC (PopInitilizeAcDcSettings.c)
 *     PopSetPowerSettingValueAcDc @ 0x1403F4AA8 (PopSetPowerSettingValueAcDc.c)
 *     PopSetNewPolicyValue @ 0x1403F6C58 (PopSetNewPolicyValue.c)
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     PopSetSessionUserStatus @ 0x14052EBB4 (PopSetSessionUserStatus.c)
 *     PopSetSessionDisplayStatus @ 0x140546764 (PopSetSessionDisplayStatus.c)
 * Callees:
 *     PopSetNotificationWork @ 0x1400085B4 (PopSetNotificationWork.c)
 *     PopIncrementPowerSettingPendingUpdates @ 0x140009C40 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopDecrementPowerSettingPendingUpdates @ 0x140009CB0 (PopDecrementPowerSettingPendingUpdates.c)
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PoRegisterPowerSettingCallback @ 0x1403F1CFC (PoRegisterPowerSettingCallback.c)
 *     PopUnreferencePowerSetting @ 0x1403F4B18 (PopUnreferencePowerSetting.c)
 *     PopArePowerSettingsEqual @ 0x1403F73C4 (PopArePowerSettingsEqual.c)
 *     PopFindPowerSettingConfiguration @ 0x1403F73FC (PopFindPowerSettingConfiguration.c)
 *     PopGetListHead @ 0x1403F747C (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x1403F74EC (PopStateIsSessionSpecific.c)
 *     PopValidatePowerSettingData @ 0x1403F7524 (PopValidatePowerSettingData.c)
 */

__int64 __fastcall PopSetPowerSettingValue(const GUID *a1, unsigned int a2, int a3, unsigned int a4, void *Src)
{
  size_t v5; // r13
  const GUID *v7; // r12
  bool v8; // r14
  _DWORD *v9; // rsi
  void *v10; // r15
  char *v11; // rbx
  _DWORD *v12; // r12
  unsigned int v13; // edi
  __int64 v15; // rax
  _QWORD *v16; // r14
  char v17; // r15
  __int64 i; // rbp
  bool v19; // zf
  _DWORD *v20; // rax
  signed __int32 v21; // eax
  _QWORD *j; // rax
  char *v23; // rax
  __int64 ListHead; // rax
  __int64 *v25; // r8
  __int64 v26; // r9
  __int64 *v27; // rcx
  __int64 *v28; // r10
  __int64 v29; // rdx
  __int64 **v30; // rax
  __int64 **v31; // rdx
  __int64 *v32; // rdx
  _QWORD *v33; // rax
  char IsSessionSpecific; // [rsp+40h] [rbp-68h]
  char v35; // [rsp+41h] [rbp-67h]
  char v36; // [rsp+42h] [rbp-66h]
  PVOID PoolWithTag; // [rsp+50h] [rbp-58h]
  __int64 PowerSettingConfiguration; // [rsp+60h] [rbp-48h]

  v5 = a4;
  v35 = 0;
  v7 = a1;
  v8 = 0;
  v9 = 0LL;
  v36 = 0;
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
    v23 = (char *)ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x74655350u);
    PowerSettingConfiguration = (__int64)v23;
    v11 = v23;
    if ( !v23 )
    {
      v13 = -1073741670;
      goto LABEL_6;
    }
    memset(v23, 0, 0x58uLL);
    *((GUID *)v11 + 2) = *v7;
    ListHead = PopGetListHead(v7);
    v25 = (__int64 *)(v11 + 16);
    v26 = ListHead;
    *((_QWORD *)v11 + 3) = v11 + 16;
    *((_QWORD *)v11 + 2) = v11 + 16;
    if ( IsSessionSpecific )
    {
      *((_DWORD *)v11 + 12) = a2;
    }
    else
    {
      v27 = (__int64 *)PopRegisteredPowerSettingCallbacks;
      while ( v27 != &PopRegisteredPowerSettingCallbacks )
      {
        v28 = v27;
        v27 = (__int64 *)*v27;
        v29 = *(__int64 *)((char *)v28 + 36) - *(_QWORD *)&v7->Data1;
        if ( !v29 )
          v29 = *(__int64 *)((char *)v28 + 44) - *(_QWORD *)v7->Data4;
        if ( !v29 )
        {
          v30 = (__int64 **)v27[1];
          v31 = (__int64 **)v30[1];
          if ( *v30 != v27 || *v31 != (__int64 *)v30 )
            __fastfail(3u);
          v27[1] = (__int64)v31;
          *v31 = v27;
          v32 = (__int64 *)*((_QWORD *)v11 + 3);
          if ( (__int64 *)*v32 != v25 )
            __fastfail(3u);
          *v30 = v25;
          v30[1] = v32;
          *v32 = (__int64)v30;
          *((_QWORD *)v11 + 3) = v30;
        }
      }
      *((_DWORD *)v11 + 12) = -1;
    }
    v33 = *(_QWORD **)(v26 + 8);
    if ( *v33 != v26 )
      __fastfail(3u);
    *((_QWORD *)v11 + 1) = v33;
    *(_QWORD *)v11 = v26;
    *v33 = v11;
    *(_QWORD *)(v26 + 8) = v11;
    v35 = 1;
    if ( PopPopPowerSettingSetChangeNotification.Data[0] || PopPopPowerSettingSetChangeNotification.Data[1] )
      v36 = 1;
  }
  v12 = *(_DWORD **)&v11[8 * a3 + 64];
  if ( !(unsigned __int8)PopArePowerSettingsEqual(v12, PoolWithTag, (unsigned int)v5) )
  {
    v15 = a3;
    v16 = v11 + 64;
    v17 = 0;
    for ( i = 0LL; i < 3; ++i )
    {
      if ( i != v15 )
      {
        if ( !v9 )
        {
          v19 = (unsigned __int8)PopArePowerSettingsEqual(*v16, PoolWithTag, (unsigned int)v5) == 0;
          v15 = a3;
          if ( !v19 )
          {
            v9 = (_DWORD *)*v16;
            ++*(_DWORD *)*v16;
          }
        }
        if ( (_DWORD *)*v16 == v12 )
          v17 = 1;
      }
      ++v16;
    }
    v13 = 0;
    if ( !v9 )
    {
      v20 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v5 + 12), 0x74655350u);
      v9 = v20;
      if ( !v20 )
      {
        v8 = 0;
        v13 = -1073741670;
        LOBYTE(v9) = 0;
LABEL_37:
        v10 = PoolWithTag;
        goto LABEL_5;
      }
      memset(v20, 0, (unsigned int)(v5 + 12));
      v9[1] = v5;
      *v9 = 1;
      do
        v21 = _InterlockedIncrement(&PopPowerSettingChangeStamp);
      while ( !v21 );
      v9[2] = v21;
      memmove(v9 + 3, PoolWithTag, v5);
    }
    if ( v12 )
    {
      if ( !v17 )
      {
        for ( j = *(_QWORD **)(PowerSettingConfiguration + 16);
              j != (_QWORD *)(PowerSettingConfiguration + 16);
              j = (_QWORD *)*j )
        {
          if ( (_DWORD *)j[9] == v12 )
            j[9] = 0LL;
        }
      }
      PopUnreferencePowerSetting(v12);
    }
    v8 = 0;
    *(_QWORD *)(PowerSettingConfiguration + 8LL * a3 + 64) = v9;
    if ( dword_140303D4C == a3 )
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
  if ( v35 )
    PoRegisterPowerSettingCallback(0LL, v7, (PPOWER_SETTING_CALLBACK)PopTracePowerSettingChange, 0LL, 0LL);
  ExFreePoolWithTag(v10, 0x74655350u);
  if ( (unsigned int)PopOsInitPhase >= 3 )
  {
    if ( v36 )
      ZwUpdateWnfStateData(&PopPopPowerSettingSetChangeNotification, 0LL, 0, 0LL, 0LL, 0, 0);
    if ( v8 )
    {
      PopIncrementPowerSettingPendingUpdates(1);
      PopSetNotificationWork(0x20u);
    }
    if ( (_BYTE)v9 )
      PopSetNotificationWork(0x80u);
  }
  PopDecrementPowerSettingPendingUpdates(0);
  return v13;
}
