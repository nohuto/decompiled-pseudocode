/*
 * XREFs of RaidPowerSettingCallback @ 0x1C0026BB0
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000AFB8 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C000BBE4 (RaidIsAdapterControlSupported.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C0023C38 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C0023C54 (RaidAdapterGetSystemPowerResumeLatency.c)
 *     Template_qqqqq @ 0x1C0027520 (Template_qqqqq.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C002CBB4 (RaidAdapterSetMaxOperationalPower.c)
 *     StorpCSEntryTelemetry @ 0x1C00383C4 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C0038794 (StorpCSExitTelemetry.c)
 */

__int64 __fastcall RaidPowerSettingCallback(
        _OWORD *SettingGuid,
        unsigned int *Value,
        __int64 ValueLength,
        _BYTE *Context)
{
  __int64 v5; // rax
  char v6; // di
  int SystemPowerHint; // eax
  char v8; // cl
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  char v13; // r9
  char v14; // r10
  char v15; // al
  int SystemPowerResumeLatency; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  char v20; // r10
  __int64 v22; // rax
  __int128 v23; // xmm0
  _QWORD v24[5]; // [rsp+40h] [rbp-40h] BYREF
  int v25; // [rsp+68h] [rbp-18h]
  int v26; // [rsp+6Ch] [rbp-14h]
  int v27; // [rsp+70h] [rbp-10h]
  int v28; // [rsp+74h] [rbp-Ch]

  memset(&v24[1], 0, 32);
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v5 = *(_QWORD *)SettingGuid - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
  if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
    v5 = *((_QWORD *)SettingGuid + 1) - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
  if ( v5 )
  {
    v22 = *(_QWORD *)SettingGuid - *(_QWORD *)&GUID_DISK_MAX_POWER.Data1;
    if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_DISK_MAX_POWER.Data1 )
      v22 = *((_QWORD *)SettingGuid + 1) - *(_QWORD *)GUID_DISK_MAX_POWER.Data4;
    if ( !v22 )
    {
      v24[0] = *Value;
      if ( v24[0] <= 0x64uLL )
      {
        LOBYTE(ValueLength) = 1;
        RaidAdapterSetMaxOperationalPower(Context, v24, ValueLength, 1LL);
      }
      return 0LL;
    }
    v23 = *SettingGuid;
    v24[3] = Value;
    LODWORD(v24[4]) = ValueLength;
    *(_OWORD *)&v24[1] = v23;
    if ( (unsigned int)RaidIsAdapterControlSupported((__int64)Context, 5) )
      goto LABEL_29;
  }
  else
  {
    if ( (_DWORD)ValueLength != 4 || !Value )
      return 3221225485LL;
    v6 = *(_BYTE *)Value;
    if ( (unsigned int)RaidIsAdapterControlSupported((__int64)Context, 12)
      && *((_QWORD *)Context + 637)
      && *((_QWORD *)Context + 639) )
    {
      SystemPowerHint = RaidAdapterGetSystemPowerHint((__int64)Context);
      RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
      v25 = 1;
      v26 = 16;
      if ( v6 != 1 )
      {
        if ( v6 )
          return 0LL;
        v15 = Context[108];
        if ( v15 >= 0 )
          return 0LL;
        Context[108] = v15 & 0x7F;
        v27 = RaidAdapterGetSystemPowerHint((__int64)Context);
        SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(v27);
        v28 = SystemPowerResumeLatency;
        if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
          Template_qqqqq(v18, v17, v19, *((_DWORD *)Context + 14), v19, v20, v17, SystemPowerResumeLatency);
        StorpCSExitTelemetry(Context);
        goto LABEL_29;
      }
      v8 = Context[108];
      if ( v8 >= 0 )
      {
        Context[108] = v8 | 0x80;
        v27 = RaidAdapterGetSystemPowerHint((__int64)Context);
        v9 = RaidAdapterGetSystemPowerResumeLatency(v27);
        v28 = v9;
        if ( StorEtwLoggingEnabled )
        {
          if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
            Template_qqqqq(v11, v10, v12, *((_DWORD *)Context + 14), v12, v14, v13, v9);
        }
        StorpCSEntryTelemetry(Context);
LABEL_29:
        RaCallMiniportAdapterControl((__int64)(Context + 296));
      }
    }
  }
  return 0LL;
}
