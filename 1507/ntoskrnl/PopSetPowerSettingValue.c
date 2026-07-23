/*
 * XREFs of PopSetPowerSettingValue @ 0x1404FFFC0
 * Callers:
 *     PopScanIdleList @ 0x1400D0490 (PopScanIdleList.c)
 *     PopInitilizeAcDcSettings @ 0x14015F24C (PopInitilizeAcDcSettings.c)
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     PopSetNewPolicyValue @ 0x1404FFD24 (PopSetNewPolicyValue.c)
 *     PopSetSessionUserStatus @ 0x14055DFC0 (PopSetSessionUserStatus.c)
 *     PopSetPowerSettingValueAcDc @ 0x14055E1B0 (PopSetPowerSettingValueAcDc.c)
 *     PopSetSessionDisplayStatus @ 0x140582FD8 (PopSetSessionDisplayStatus.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PopSetNotificationWork @ 0x1400D0780 (PopSetNotificationWork.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PoRegisterPowerSettingCallback @ 0x1404E4240 (PoRegisterPowerSettingCallback.c)
 *     PopUnreferencePowerSetting @ 0x1404E55B0 (PopUnreferencePowerSetting.c)
 *     PopArePowerSettingsEqual @ 0x1405004D0 (PopArePowerSettingsEqual.c)
 *     PopFindPowerSettingConfiguration @ 0x140500508 (PopFindPowerSettingConfiguration.c)
 *     PopGetListHead @ 0x140500588 (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x1405005F8 (PopStateIsSessionSpecific.c)
 *     PopValidatePowerSettingData @ 0x140500630 (PopValidatePowerSettingData.c)
 */

__int64 __fastcall PopSetPowerSettingValue(const GUID *a1, unsigned int a2, int a3, unsigned int a4, _DWORD *Src)
{
  bool v5; // r15
  _DWORD *v6; // rdi
  SIZE_T v7; // r13
  const GUID *v9; // r12
  PVOID PoolWithTag; // rax
  PVOID v11; // r14
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int8 CurrentIrql; // r14
  char *v16; // rbx
  void *v17; // rbp
  _DWORD *v18; // r12
  unsigned int v19; // esi
  unsigned __int8 v20; // bl
  signed __int32 v21; // eax
  __int64 v23; // rax
  char v24; // r15
  __int64 v25; // rbp
  _QWORD *v26; // r14
  bool v27; // zf
  _DWORD *v28; // rax
  signed __int32 v29; // eax
  _QWORD *i; // rax
  char *v31; // rax
  __int64 ListHead; // rax
  __int64 *v33; // r8
  __int64 v34; // r9
  __int64 *v35; // rcx
  __int64 *v36; // r10
  __int64 v37; // rdx
  __int64 **v38; // rax
  __int64 **v39; // rdx
  __int64 *v40; // rdx
  _QWORD *v41; // rax
  char IsSessionSpecific; // [rsp+40h] [rbp-68h]
  char v43; // [rsp+41h] [rbp-67h]
  char v44; // [rsp+42h] [rbp-66h]
  PVOID P; // [rsp+50h] [rbp-58h]
  __int64 PowerSettingConfiguration; // [rsp+60h] [rbp-48h]

  v5 = 0;
  v43 = 0;
  v6 = 0LL;
  v44 = 0;
  v7 = a4;
  v9 = a1;
  if ( (PoDebug & 0x800) != 0 )
    DbgPrint("PopSetPowerSettingValue: state = %d, size = %d first ulong = 0x%08x.\n", a3, a4, *Src);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x74655350u);
  P = PoolWithTag;
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, Src, v7);
  PopValidatePowerSettingData(v9, (unsigned int)v7, v11);
  IsSessionSpecific = PopStateIsSessionSpecific(v9);
  v13 = KeAbPreAcquire((ULONG_PTR)&PopSettingLock, 0LL, 0LL, v12);
  v14 = v13;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopSettingLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PopSettingLock, v13);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  qword_14032EFE8 = (__int64)KeGetCurrentThread();
  dword_14032F010 = CurrentIrql;
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(v9, a2);
  v16 = (char *)PowerSettingConfiguration;
  if ( !PowerSettingConfiguration )
  {
    if ( (PoDebug & 0x800) != 0 )
      DbgPrint("PopSetPowerSettingValue: Creating new setting with empty values.\n");
    v31 = (char *)ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x74655350u);
    PowerSettingConfiguration = (__int64)v31;
    v16 = v31;
    if ( !v31 )
    {
      v17 = P;
      v19 = -1073741670;
      goto LABEL_15;
    }
    memset(v31, 0, 0x58uLL);
    *((GUID *)v16 + 2) = *v9;
    ListHead = PopGetListHead(v9);
    v33 = (__int64 *)(v16 + 16);
    v34 = ListHead;
    *((_QWORD *)v16 + 3) = v16 + 16;
    *((_QWORD *)v16 + 2) = v16 + 16;
    if ( IsSessionSpecific )
    {
      *((_DWORD *)v16 + 12) = a2;
    }
    else
    {
      v35 = (__int64 *)PopRegisteredPowerSettingCallbacks;
      while ( v35 != &PopRegisteredPowerSettingCallbacks )
      {
        v36 = v35;
        v35 = (__int64 *)*v35;
        v37 = *(__int64 *)((char *)v36 + 36) - *(_QWORD *)&v9->Data1;
        if ( !v37 )
          v37 = *(__int64 *)((char *)v36 + 44) - *(_QWORD *)v9->Data4;
        if ( !v37 )
        {
          v38 = (__int64 **)v35[1];
          v39 = (__int64 **)v38[1];
          if ( *v38 != v35 || *v39 != (__int64 *)v38 )
            __fastfail(3u);
          v35[1] = (__int64)v39;
          *v39 = v35;
          v40 = (__int64 *)*((_QWORD *)v16 + 3);
          *v38 = v33;
          v38[1] = v40;
          if ( (__int64 *)*v40 != v33 )
            __fastfail(3u);
          *v40 = (__int64)v38;
          *((_QWORD *)v16 + 3) = v38;
        }
      }
      *((_DWORD *)v16 + 12) = -1;
    }
    v41 = *(_QWORD **)(v34 + 8);
    *(_QWORD *)v16 = v34;
    *((_QWORD *)v16 + 1) = v41;
    if ( *v41 != v34 )
      __fastfail(3u);
    *v41 = v16;
    *(_QWORD *)(v34 + 8) = v16;
    v43 = 1;
    if ( PopPopPowerSettingSetChangeNotification.Data[0] || PopPopPowerSettingSetChangeNotification.Data[1] )
      v44 = 1;
  }
  v17 = P;
  v18 = *(_DWORD **)&v16[8 * a3 + 64];
  if ( (unsigned __int8)PopArePowerSettingsEqual(v18, P, (unsigned int)v7) )
  {
    if ( (PoDebug & 0x800) != 0 )
      DbgPrint("PopSetPowerSettingValue: Setting value didn't change.\n");
    v19 = 0;
  }
  else
  {
    v23 = a3;
    v24 = 0;
    v25 = 0LL;
    v26 = v16 + 64;
    do
    {
      if ( v25 != v23 )
      {
        if ( !v6 )
        {
          v27 = (unsigned __int8)PopArePowerSettingsEqual(*v26, P, (unsigned int)v7) == 0;
          v23 = a3;
          if ( !v27 )
          {
            v6 = (_DWORD *)*v26;
            ++*(_DWORD *)*v26;
          }
        }
        if ( (_DWORD *)*v26 == v18 )
          v24 = 1;
      }
      ++v25;
      ++v26;
    }
    while ( v25 < 3 );
    v19 = 0;
    if ( v6 )
    {
      v17 = P;
    }
    else
    {
      if ( (PoDebug & 0x800) != 0 )
        DbgPrint("PopSetPowerSettingValue: Allocating new value.\n");
      v28 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v7 + 12), 0x74655350u);
      v6 = v28;
      if ( !v28 )
      {
        v5 = 0;
        v19 = -1073741670;
        v17 = P;
        LOBYTE(v6) = 0;
        goto LABEL_14;
      }
      memset(v28, 0, (unsigned int)(v7 + 12));
      v6[1] = v7;
      *v6 = 1;
      do
        v29 = _InterlockedIncrement(&PopPowerSettingChangeStamp);
      while ( !v29 );
      v17 = P;
      v6[2] = v29;
      memmove(v6 + 3, P, v7);
    }
    if ( v18 )
    {
      if ( !v24 )
      {
        for ( i = *(_QWORD **)(PowerSettingConfiguration + 16);
              i != (_QWORD *)(PowerSettingConfiguration + 16);
              i = (_QWORD *)*i )
        {
          if ( (_DWORD *)i[7] == v18 )
            i[7] = 0LL;
        }
      }
      PopUnreferencePowerSetting(v18);
    }
    v5 = 0;
    *(_QWORD *)(PowerSettingConfiguration + 8LL * a3 + 64) = v6;
    if ( dword_14032E84C == a3 )
      v5 = IsSessionSpecific == 0;
    if ( *(_DWORD *)(PowerSettingConfiguration + 56) || *(_DWORD *)(PowerSettingConfiguration + 60) )
    {
      *(_DWORD *)(PowerSettingConfiguration + 52) |= 1u;
      LOBYTE(v6) = 1;
      goto LABEL_14;
    }
  }
  LOBYTE(v6) = 0;
LABEL_14:
  v9 = a1;
LABEL_15:
  v20 = dword_14032F010;
  qword_14032EFE8 = 0LL;
  v21 = _InterlockedCompareExchange((volatile signed __int32 *)&PopSettingLock, 1, 0);
  if ( v21 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PopSettingLock, v21);
  __writecr8(v20);
  KeAbPostRelease((ULONG_PTR)&PopSettingLock);
  if ( v43 )
    PoRegisterPowerSettingCallback(0LL, v9, (PPOWER_SETTING_CALLBACK)PopTracePowerSettingChange, 0LL, 0LL);
  ExFreePoolWithTag(v17, 0x74655350u);
  if ( (unsigned int)PopOsInitPhase >= 3 )
  {
    if ( v44 )
      ZwUpdateWnfStateData(&PopPopPowerSettingSetChangeNotification, 0LL, 0, 0LL, 0LL, 0, 0);
    if ( v5 )
      PopSetNotificationWork(0x20u);
    if ( (_BYTE)v6 )
      PopSetNotificationWork(0x80u);
  }
  return v19;
}
