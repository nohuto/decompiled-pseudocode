/*
 * XREFs of PopSetNewPolicyValue @ 0x1403F7D98
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1403F7C58 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     PpmSetProfilePolicySetting @ 0x1403F766C (PpmSetProfilePolicySetting.c)
 *     RtlStringFromGUIDEx @ 0x1403F7E8C (RtlStringFromGUIDEx.c)
 *     PopSetPowerSettingValue @ 0x1403F80D0 (PopSetPowerSettingValue.c)
 *     PopStateIsSessionSpecific @ 0x1403F862C (PopStateIsSessionSpecific.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 */

__int64 __fastcall PopSetNewPolicyValue(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  unsigned int v5; // edi
  __int64 v6; // rax
  unsigned int v7; // ebp
  unsigned int v8; // r15d
  __int64 v10; // rax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-38h] BYREF

  v3 = (_QWORD *)(a1 + 20);
  LOBYTE(a3) = 1;
  v5 = 0;
  if ( (int)RtlStringFromGUIDEx(a1 + 20, &UnicodeString, a3) >= 0 )
    RtlFreeAnsiString(&UnicodeString);
  if ( !(unsigned __int8)PopStateIsSessionSpecific(v3) )
  {
    v6 = *(_QWORD *)(a1 + 36) - *(_QWORD *)&GUID_PROCESSOR_SETTINGS_SUBGROUP.Data1;
    v7 = *(_DWORD *)(a1 + 52);
    v8 = *(_DWORD *)(a1 + 56);
    if ( !v6 )
      v6 = *(_QWORD *)(a1 + 44) - *(_QWORD *)GUID_PROCESSOR_SETTINGS_SUBGROUP.Data4;
    if ( v6 )
      return (unsigned int)PopSetPowerSettingValue(v3, 0xFFFFFFFFLL, v7, v8, a1 + 60);
    v5 = PpmSetProfilePolicySetting((_QWORD *)(a1 + 4), v3, v7, a1 + 60, *(_DWORD *)(a1 + 56));
    if ( v5 == -1073741275 )
      v5 = 0;
    v10 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&NullGuid.Data1;
    if ( !v10 )
      v10 = *(_QWORD *)(a1 + 12) - *(_QWORD *)NullGuid.Data4;
    if ( !v10 )
      return (unsigned int)PopSetPowerSettingValue(v3, 0xFFFFFFFFLL, v7, v8, a1 + 60);
  }
  return v5;
}
