/*
 * XREFs of PopBackgroundActivityPolicyCallback @ 0x140201C90
 * Callers:
 *     <none>
 * Callees:
 *     PopGetPowerSettingValue @ 0x14000851C (PopGetPowerSettingValue.c)
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopTraceBackgroundActivityPolicyUpdate @ 0x14067270C (PopTraceBackgroundActivityPolicyUpdate.c)
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
  __int64 v9; // r9
  int v10; // ebp
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v16; // [rsp+20h] [rbp-38h]
  int v17; // [rsp+40h] [rbp-18h] BYREF
  WNF_CHANGE_STAMP v18[5]; // [rsp+44h] [rbp-14h] BYREF

  v4 = ValueLength;
  PowerSettingValue = 0;
  PopAcquirePolicyLock(SettingGuid, Value, ValueLength, Context);
  v9 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - *(_QWORD *)&SettingGuid->Data1;
  if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *(_QWORD *)&SettingGuid->Data1 )
    v9 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( !v9 && v4 == 4 && Value )
  {
    v10 = *Value;
  }
  else
  {
    PowerSettingValue = PopGetPowerSettingValue((__int64)&GUID_ACDC_POWER_SOURCE, v8, 3u, &v17, v16, v18);
    if ( PowerSettingValue < 0 )
      goto LABEL_22;
    v10 = v17;
  }
  v11 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *(_QWORD *)&SettingGuid->Data1;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)&SettingGuid->Data1 )
    v11 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( !v11 && v4 == 4 && Value )
  {
    v12 = *Value;
  }
  else
  {
    PowerSettingValue = PopGetPowerSettingValue((__int64)&GUID_LOW_POWER_EPOCH, v11, 3u, &v17, v16, v18);
    if ( PowerSettingValue < 0 )
      goto LABEL_22;
    v12 = v17;
  }
  if ( !v12 || (v13 = 1, v10 != 1) )
    v13 = 0;
  v14 = PopBackgroundActivityPolicy;
  if ( PopBackgroundActivityPolicy != v13 )
  {
    PopBackgroundActivityPolicy = v13;
    ZwUpdateWnfStateData(&WNF_PO_BACKGROUND_ACTIVITY_POLICY, &PopBackgroundActivityPolicy, 4u, 0LL, 0LL, 0, 0);
    PopTraceBackgroundActivityPolicyUpdate(v14);
  }
LABEL_22:
  PopReleasePolicyLock();
  return (unsigned int)PowerSettingValue;
}
