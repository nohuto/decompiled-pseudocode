/*
 * XREFs of PopGetSettingNotificationName @ 0x14045429C
 * Callers:
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     PopSetNotificationWork @ 0x140097574 (PopSetNotificationWork.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PopFindPowerSettingConfiguration @ 0x1404493B4 (PopFindPowerSettingConfiguration.c)
 *     PopStateIsSessionSpecific @ 0x1404494A4 (PopStateIsSessionSpecific.c)
 *     PopCreateNotificationName @ 0x1404C3F44 (PopCreateNotificationName.c)
 *     PopValidateContextMembership @ 0x14050CEF0 (PopValidateContextMembership.c)
 */

__int64 __fastcall PopGetSettingNotificationName(__int64 a1, _WNF_STATE_NAME *a2)
{
  char v4; // r12
  char v5; // r15
  int v6; // edi
  _WNF_STATE_NAME *PowerSettingConfiguration; // rax
  __int64 v8; // rdx
  _WNF_STATE_NAME *v9; // rdi
  _WNF_STATE_NAME v10; // rax
  int v11; // ebx
  __int64 v13; // rax
  int SessionId; // eax
  int v15; // r14d
  int v16; // eax
  _WNF_STATE_NAME StateName; // [rsp+28h] [rbp-40h] BYREF

  v4 = 0;
  ExAcquireFastMutex(&PopSettingLock);
  v5 = 1;
  if ( a1 )
    v6 = *(_DWORD *)(a1 + 16);
  else
    v6 = -1;
  if ( a1 )
  {
    if ( PopStateIsSessionSpecific((_QWORD *)a1) )
    {
      SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
      v15 = SessionId;
      if ( v6 == -1 || v6 == SessionId )
      {
        if ( (unsigned int)(SessionId - 1) > 0xFFFFFFFD )
        {
          v11 = -1073741811;
          goto LABEL_12;
        }
        v6 = SessionId;
      }
      else
      {
        v11 = PopValidateContextMembership(SeLocalSystemSid);
        if ( v11 < 0 )
        {
          if ( v15 )
            goto LABEL_12;
          v11 = PopValidateContextMembership(SeExports->SeLocalServiceSid);
          if ( v11 < 0 )
            goto LABEL_12;
        }
      }
    }
    else
    {
      v6 = -1;
    }
    PowerSettingConfiguration = (_WNF_STATE_NAME *)PopFindPowerSettingConfiguration((_QWORD *)a1, v6);
    v9 = PowerSettingConfiguration;
    if ( PowerSettingConfiguration )
    {
      if ( PowerSettingConfiguration[7].Data[0] || PowerSettingConfiguration[7].Data[1] )
      {
        v10 = PowerSettingConfiguration[7];
LABEL_10:
        StateName = v10;
LABEL_11:
        KeReleaseGuardedMutex(&PopSettingLock);
        v5 = 0;
        *a2 = StateName;
        v11 = 0;
        goto LABEL_12;
      }
      v11 = PopCreateNotificationName(&StateName);
      if ( v11 >= 0 )
      {
        v13 = *(_QWORD *)a1 - *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
        if ( *(_QWORD *)a1 == *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 )
          v13 = *(_QWORD *)(a1 + 8) - *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
        if ( !v13 )
          v9[6].Data[1] |= 8u;
        v9[7] = StateName;
        v9[6].Data[1] |= 1u;
        v4 = 1;
        goto LABEL_11;
      }
    }
    else
    {
      v11 = -1073741275;
    }
  }
  else
  {
    v10 = PopPopPowerSettingSetChangeNotification;
    if ( PopPopPowerSettingSetChangeNotification != __PAIR64__(PopPopPowerSettingSetChangeNotification.Data[0], 0) )
      goto LABEL_10;
    v16 = PopCreateNotificationName(&StateName);
    v11 = v16;
    if ( v16 >= 0 )
    {
      PopPopPowerSettingSetChangeNotification = StateName;
      goto LABEL_11;
    }
  }
LABEL_12:
  if ( v5 )
    KeReleaseGuardedMutex(&PopSettingLock);
  if ( v4 )
    PopSetNotificationWork(0x80u, v8);
  return (unsigned int)v11;
}
