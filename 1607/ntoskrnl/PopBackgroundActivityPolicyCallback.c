/*
 * XREFs of PopBackgroundActivityPolicyCallback @ 0x140201E64
 * Callers:
 *     <none>
 * Callees:
 *     PopGetPowerSettingValue @ 0x1400089A8 (PopGetPowerSettingValue.c)
 *     ZwUpdateWnfStateData @ 0x14015D3C0 (ZwUpdateWnfStateData.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopTraceBackgroundActivityPolicyUpdate @ 0x140672628 (PopTraceBackgroundActivityPolicyUpdate.c)
 */

__int64 __fastcall PopBackgroundActivityPolicyCallback(
        LPCGUID SettingGuid,
        int *Value,
        __int64 ValueLength,
        PVOID Context)
{
  int v4; // r14d
  int PowerSettingValue; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebp
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v18; // [rsp+20h] [rbp-38h]
  int v19; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v20[5]; // [rsp+44h] [rbp-14h] BYREF

  v4 = ValueLength;
  PowerSettingValue = 0;
  PopAcquirePolicyLock(SettingGuid, Value, ValueLength, Context);
  v11 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - *(_QWORD *)&SettingGuid->Data1;
  if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *(_QWORD *)&SettingGuid->Data1 )
    v11 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( !v11 && v4 == 4 && Value )
  {
    v12 = *Value;
  }
  else
  {
    PowerSettingValue = PopGetPowerSettingValue((__int64)&GUID_ACDC_POWER_SOURCE, v8, 3u, &v19, v18, v20);
    if ( PowerSettingValue < 0 )
      goto LABEL_22;
    v12 = v19;
  }
  v13 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *(_QWORD *)&SettingGuid->Data1;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)&SettingGuid->Data1 )
    v13 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( !v13 && v4 == 4 && Value )
  {
    v14 = *Value;
  }
  else
  {
    PowerSettingValue = PopGetPowerSettingValue((__int64)&GUID_LOW_POWER_EPOCH, v13, 3u, &v19, v18, v20);
    if ( PowerSettingValue < 0 )
      goto LABEL_22;
    v14 = v19;
  }
  if ( !v14 || (v15 = 1, v12 != 1) )
    v15 = 0;
  v16 = PopBackgroundActivityPolicy;
  if ( PopBackgroundActivityPolicy != v15 )
  {
    PopBackgroundActivityPolicy = v15;
    ZwUpdateWnfStateData((__int64)&WNF_PO_BACKGROUND_ACTIVITY_POLICY, (__int64)&PopBackgroundActivityPolicy, 4LL);
    PopTraceBackgroundActivityPolicyUpdate(v16);
  }
LABEL_22:
  PopReleasePolicyLock(v9, v13, v10);
  return (unsigned int)PowerSettingValue;
}
