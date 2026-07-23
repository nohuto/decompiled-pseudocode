/*
 * XREFs of PopGetSettingNotificationName @ 0x1404E98A4
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     PopSetNotificationWork @ 0x1400D0780 (PopSetNotificationWork.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PopCreateNotificationName @ 0x1404EB758 (PopCreateNotificationName.c)
 *     PopFindPowerSettingConfiguration @ 0x140500508 (PopFindPowerSettingConfiguration.c)
 *     PopStateIsSessionSpecific @ 0x1405005F8 (PopStateIsSessionSpecific.c)
 *     PopValidateContextMembership @ 0x1405842DC (PopValidateContextMembership.c)
 */

__int64 __fastcall PopGetSettingNotificationName(__int64 a1, _WNF_STATE_NAME *a2, __int64 a3, __int64 a4)
{
  _WNF_STATE_NAME *v4; // r13
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned int v9; // esi
  __int64 PowerSettingConfiguration; // rax
  _WNF_STATE_NAME *v11; // rsi
  _WNF_STATE_NAME v12; // rax
  char v13; // si
  unsigned __int8 v14; // di
  signed __int32 v15; // eax
  int v16; // edi
  char v17; // al
  unsigned __int8 v19; // di
  signed __int32 v20; // eax
  __int64 v21; // rax
  unsigned int SessionId; // eax
  unsigned int v23; // r13d
  int v24; // [rsp+24h] [rbp-44h]
  _WNF_STATE_NAME StateName; // [rsp+38h] [rbp-30h] BYREF

  v4 = a2;
  v6 = KeAbPreAcquire((ULONG_PTR)&PopSettingLock, 0LL, 0LL, a4);
  v7 = v6;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopSettingLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PopSettingLock, v6);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  qword_14032EFE8 = (__int64)KeGetCurrentThread();
  dword_14032F010 = CurrentIrql;
  if ( a1 )
    v9 = *(_DWORD *)(a1 + 16);
  else
    v9 = -1;
  if ( a1 )
  {
    if ( (unsigned __int8)PopStateIsSessionSpecific(a1) )
    {
      SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
      v23 = SessionId;
      if ( v9 == -1 || v9 == SessionId )
      {
        if ( SessionId - 1 > 0xFFFFFFFD )
        {
          v16 = -1073741811;
LABEL_22:
          v24 = v16;
LABEL_23:
          v13 = 0;
LABEL_24:
          v17 = 1;
          goto LABEL_17;
        }
        v9 = SessionId;
      }
      else
      {
        v16 = PopValidateContextMembership(SeLocalSystemSid);
        v24 = v16;
        if ( v16 < 0 )
        {
          if ( v23 )
            goto LABEL_23;
          v16 = PopValidateContextMembership(SeExports->SeLocalServiceSid);
          v24 = v16;
          if ( v16 < 0 )
            goto LABEL_23;
        }
      }
      v4 = a2;
    }
    else
    {
      v9 = -1;
    }
    PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, v9);
    v11 = (_WNF_STATE_NAME *)PowerSettingConfiguration;
    if ( PowerSettingConfiguration )
    {
      if ( !*(_DWORD *)(PowerSettingConfiguration + 56) && !*(_DWORD *)(PowerSettingConfiguration + 60) )
      {
        v16 = PopCreateNotificationName(&StateName);
        v24 = v16;
        if ( v16 >= 0 )
        {
          v21 = *(_QWORD *)a1 - *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
          if ( *(_QWORD *)a1 == *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 )
            v21 = *(_QWORD *)(a1 + 8) - *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
          if ( !v21 )
            v11[6].Data[1] |= 8u;
          v11[7] = StateName;
          v11[6].Data[1] |= 1u;
          v13 = 1;
          goto LABEL_14;
        }
        goto LABEL_23;
      }
      v12 = *(_WNF_STATE_NAME *)(PowerSettingConfiguration + 56);
      goto LABEL_13;
    }
    v16 = -1073741275;
    goto LABEL_22;
  }
  v12 = PopPopPowerSettingSetChangeNotification;
  if ( PopPopPowerSettingSetChangeNotification != __PAIR64__(PopPopPowerSettingSetChangeNotification.Data[0], 0) )
  {
LABEL_13:
    v13 = 0;
    StateName = v12;
    goto LABEL_14;
  }
  v16 = PopCreateNotificationName(&StateName);
  v24 = v16;
  v13 = 0;
  if ( v16 < 0 )
    goto LABEL_24;
  PopPopPowerSettingSetChangeNotification = StateName;
LABEL_14:
  qword_14032EFE8 = 0LL;
  v14 = dword_14032F010;
  v15 = _InterlockedCompareExchange((volatile signed __int32 *)&PopSettingLock, 1, 0);
  if ( v15 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PopSettingLock, v15);
  __writecr8(v14);
  KeAbPostRelease((ULONG_PTR)&PopSettingLock);
  *v4 = StateName;
  v16 = 0;
  v24 = 0;
  v17 = 0;
LABEL_17:
  if ( v17 )
  {
    qword_14032EFE8 = 0LL;
    v19 = dword_14032F010;
    v20 = _InterlockedCompareExchange((volatile signed __int32 *)&PopSettingLock, 1, 0);
    if ( v20 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PopSettingLock, v20);
    __writecr8(v19);
    KeAbPostRelease((ULONG_PTR)&PopSettingLock);
    v16 = v24;
  }
  if ( v13 )
    PopSetNotificationWork(0x80u);
  return (unsigned int)v16;
}
