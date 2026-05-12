/*
 * XREFs of RaidPowerSettingCallback @ 0x1C0018A10
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000EE90 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C000FF08 (RaidIsAdapterControlSupported.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C0027024 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C0027040 (RaidAdapterGetSystemPowerResumeLatency.c)
 *     Template_qqqqq @ 0x1C002ABA0 (Template_qqqqq.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003090C (RaidAdapterSetMaxOperationalPower.c)
 *     StorpCSEntryTelemetry @ 0x1C003C108 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C003C4D8 (StorpCSExitTelemetry.c)
 */

__int64 __fastcall RaidPowerSettingCallback(
        _OWORD *SettingGuid,
        unsigned int *Value,
        __int64 ValueLength,
        _QWORD *Context)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int128 v7; // xmm0
  char v9; // di
  unsigned int SystemPowerHint; // eax
  char v11; // cl
  int SystemPowerResumeLatency; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  char v16; // r9
  char v17; // r10
  char v18; // al
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  char v23; // r10
  _QWORD v24[5]; // [rsp+40h] [rbp-40h] BYREF
  int v25; // [rsp+68h] [rbp-18h]
  __int64 v26; // [rsp+6Ch] [rbp-14h]
  int v27; // [rsp+74h] [rbp-Ch]

  memset(&v24[1], 0, 32);
  v25 = 0;
  v26 = 0LL;
  v27 = 0;
  v5 = *(_QWORD *)SettingGuid - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
  if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
    v5 = *((_QWORD *)SettingGuid + 1) - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
  if ( v5 )
  {
    v6 = *(_QWORD *)SettingGuid - *(_QWORD *)&GUID_DISK_MAX_POWER.Data1;
    if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_DISK_MAX_POWER.Data1 )
      v6 = *((_QWORD *)SettingGuid + 1) - *(_QWORD *)GUID_DISK_MAX_POWER.Data4;
    if ( !v6 )
    {
      v24[0] = *Value;
      if ( v24[0] <= 0x64uLL )
      {
        LOBYTE(ValueLength) = 1;
        RaidAdapterSetMaxOperationalPower(Context, v24, ValueLength);
      }
      return 0LL;
    }
    v7 = *SettingGuid;
    v24[3] = Value;
    LODWORD(v24[4]) = ValueLength;
    *(_OWORD *)&v24[1] = v7;
    if ( !(unsigned int)RaidIsAdapterControlSupported((__int64)Context, 5) )
      return 0LL;
LABEL_8:
    RaCallMiniportAdapterControl((__int64)(Context + 37));
    return 0LL;
  }
  if ( (_DWORD)ValueLength == 4 && Value )
  {
    v9 = *(_BYTE *)Value;
    if ( !(unsigned int)RaidIsAdapterControlSupported((__int64)Context, 12) || !Context[637] || !Context[639] )
      return 0LL;
    SystemPowerHint = RaidAdapterGetSystemPowerHint(Context);
    RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
    v25 = 1;
    LODWORD(v26) = 16;
    if ( v9 == 1 )
    {
      v11 = *((_BYTE *)Context + 108);
      if ( v11 < 0 )
        return 0LL;
      *((_BYTE *)Context + 108) = v11 | 0x80;
      HIDWORD(v26) = RaidAdapterGetSystemPowerHint(Context);
      SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(HIDWORD(v26));
      v27 = SystemPowerResumeLatency;
      if ( StorEtwLoggingEnabled && (Microsoft_Windows_StorPortEnableBits & 0x100000) != 0 )
        Template_qqqqq(v14, v13, v15, *((_DWORD *)Context + 14), v15, v17, v16, SystemPowerResumeLatency);
      StorpCSEntryTelemetry(Context);
    }
    else
    {
      if ( v9 )
        return 0LL;
      v18 = *((_BYTE *)Context + 108);
      if ( v18 >= 0 )
        return 0LL;
      *((_BYTE *)Context + 108) = v18 & 0x7F;
      HIDWORD(v26) = RaidAdapterGetSystemPowerHint(Context);
      v19 = RaidAdapterGetSystemPowerResumeLatency(HIDWORD(v26));
      v27 = v19;
      if ( StorEtwLoggingEnabled && (Microsoft_Windows_StorPortEnableBits & 0x100000) != 0 )
        Template_qqqqq(v21, v20, v22, *((_DWORD *)Context + 14), v22, v23, v20, v19);
      StorpCSExitTelemetry(Context);
    }
    goto LABEL_8;
  }
  return 3221225485LL;
}
