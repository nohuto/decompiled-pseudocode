/*
 * XREFs of PopSetNewPolicyValue @ 0x140448E50
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1404496B8 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140447328 (RtlStringFromGUIDEx.c)
 *     PopSetPowerSettingValue @ 0x140448F44 (PopSetPowerSettingValue.c)
 *     PopStateIsSessionSpecific @ 0x1404494A4 (PopStateIsSessionSpecific.c)
 *     PpmSetProfilePolicySetting @ 0x140454614 (PpmSetProfilePolicySetting.c)
 */

__int64 __fastcall PopSetNewPolicyValue(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edi
  __int64 v4; // rax
  unsigned int v5; // ebp
  unsigned int v6; // r15d
  __int64 v8; // rax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-38h] BYREF

  v1 = a1 + 20;
  v3 = 0;
  if ( RtlStringFromGUIDEx((PGUID)(a1 + 20), &UnicodeString, 1u) >= 0 )
    RtlFreeAnsiString(&UnicodeString);
  if ( !(unsigned __int8)PopStateIsSessionSpecific(v1) )
  {
    v4 = *(_QWORD *)(a1 + 36) - *(_QWORD *)&GUID_PROCESSOR_SETTINGS_SUBGROUP.Data1;
    v5 = *(_DWORD *)(a1 + 52);
    v6 = *(_DWORD *)(a1 + 56);
    if ( !v4 )
      v4 = *(_QWORD *)(a1 + 44) - *(_QWORD *)GUID_PROCESSOR_SETTINGS_SUBGROUP.Data4;
    if ( v4 )
      return (unsigned int)PopSetPowerSettingValue(v1, 0xFFFFFFFFLL, v5, v6, a1 + 60);
    v3 = PpmSetProfilePolicySetting((int)a1 + 4, v1, v5, (int)a1 + 60, *(_DWORD *)(a1 + 56));
    if ( v3 == -1073741275 )
      v3 = 0;
    v8 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&NullGuid.Data1;
    if ( !v8 )
      v8 = *(_QWORD *)(a1 + 12) - *(_QWORD *)NullGuid.Data4;
    if ( !v8 )
      return (unsigned int)PopSetPowerSettingValue(v1, 0xFFFFFFFFLL, v5, v6, a1 + 60);
  }
  return v3;
}
