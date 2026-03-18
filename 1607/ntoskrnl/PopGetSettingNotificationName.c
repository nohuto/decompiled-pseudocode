/*
 * XREFs of PopGetSettingNotificationName @ 0x14051FCC4
 * Callers:
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 * Callees:
 *     PopSetNotificationWork @ 0x140008A40 (PopSetNotificationWork.c)
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     MmIsSessionInCurrentServerSilo @ 0x1401ECA54 (MmIsSessionInCurrentServerSilo.c)
 *     PopFindPowerSettingConfiguration @ 0x1403F853C (PopFindPowerSettingConfiguration.c)
 *     PopStateIsSessionSpecific @ 0x1403F862C (PopStateIsSessionSpecific.c)
 *     PsIsServiceSession @ 0x14051DDD4 (PsIsServiceSession.c)
 *     PopCreateNotificationName @ 0x140545198 (PopCreateNotificationName.c)
 *     PopValidateContextMembership @ 0x140547E10 (PopValidateContextMembership.c)
 */

__int64 __fastcall PopGetSettingNotificationName(__int64 a1, __int64 *a2)
{
  char v4; // r12
  char v5; // r15
  unsigned int v6; // edi
  _QWORD *PowerSettingConfiguration; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rax
  int v10; // ebx
  unsigned int SessionId; // eax
  unsigned int v13; // r14d
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // [rsp+28h] [rbp-40h] BYREF

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
      v13 = SessionId;
      if ( v6 == -1 || v6 == SessionId )
      {
        if ( SessionId == -1 || PsIsServiceSession(SessionId) )
        {
          v10 = -1073741811;
          goto LABEL_12;
        }
        v6 = v13;
      }
      else
      {
        v10 = PopValidateContextMembership(SeLocalSystemSid);
        if ( v10 < 0 )
        {
          if ( !PsIsServiceSession(v13) )
            goto LABEL_12;
          if ( !MmIsSessionInCurrentServerSilo(v6) )
            goto LABEL_12;
          v10 = PopValidateContextMembership(SeExports->SeLocalServiceSid);
          if ( v10 < 0 )
            goto LABEL_12;
        }
      }
    }
    else
    {
      v6 = -1;
    }
    PowerSettingConfiguration = PopFindPowerSettingConfiguration((_QWORD *)a1, v6);
    v8 = PowerSettingConfiguration;
    if ( PowerSettingConfiguration )
    {
      if ( *((_DWORD *)PowerSettingConfiguration + 14) || *((_DWORD *)PowerSettingConfiguration + 15) )
      {
        v9 = PowerSettingConfiguration[7];
LABEL_10:
        v16 = v9;
LABEL_11:
        KeReleaseGuardedMutex(&PopSettingLock);
        v5 = 0;
        *a2 = v16;
        v10 = 0;
        goto LABEL_12;
      }
      v10 = PopCreateNotificationName(&v16);
      if ( v10 >= 0 )
      {
        v14 = *(_QWORD *)a1 - *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
        if ( *(_QWORD *)a1 == *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 )
          v14 = *(_QWORD *)(a1 + 8) - *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
        if ( !v14 )
          *((_DWORD *)v8 + 13) |= 8u;
        v8[7] = v16;
        *((_DWORD *)v8 + 13) |= 1u;
        v4 = 1;
        goto LABEL_11;
      }
    }
    else
    {
      v10 = -1073741275;
    }
  }
  else
  {
    v9 = PopPopPowerSettingSetChangeNotification;
    if ( PopPopPowerSettingSetChangeNotification != __PAIR64__(PopPopPowerSettingSetChangeNotification, 0) )
      goto LABEL_10;
    v15 = PopCreateNotificationName(&v16);
    v10 = v15;
    if ( v15 >= 0 )
    {
      PopPopPowerSettingSetChangeNotification = v16;
      goto LABEL_11;
    }
  }
LABEL_12:
  if ( v5 )
    KeReleaseGuardedMutex(&PopSettingLock);
  if ( v4 )
    PopSetNotificationWork(0x80u);
  return (unsigned int)v10;
}
