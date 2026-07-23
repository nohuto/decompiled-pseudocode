/*
 * XREFs of PopSetNewPolicyValue @ 0x1404FFD24
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1404FFB68 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     PpmSetProfilePolicySetting @ 0x1404FF554 (PpmSetProfilePolicySetting.c)
 *     RtlStringFromGUIDEx @ 0x1404FFEB8 (RtlStringFromGUIDEx.c)
 *     PopSetPowerSettingValue @ 0x1404FFFC0 (PopSetPowerSettingValue.c)
 *     PopStateIsSessionSpecific @ 0x1405005F8 (PopStateIsSessionSpecific.c)
 */

__int64 __fastcall PopSetNewPolicyValue(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edi
  __int64 v4; // rax
  unsigned int v5; // ebp
  unsigned int v6; // r15d
  int v7; // eax
  __int64 v9; // rax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-38h] BYREF

  v1 = a1 + 20;
  v3 = 0;
  if ( RtlStringFromGUIDEx((PGUID)(a1 + 20), &UnicodeString, 1u) >= 0 )
  {
    if ( (PoDebug & 0x10000000) != 0 )
      DbgPrint("%s: Received setting from UMPO, guid=%S\n", "PopSetNewPolicyValue", UnicodeString.Buffer);
    RtlFreeAnsiString(&UnicodeString);
  }
  if ( !(unsigned __int8)PopStateIsSessionSpecific(v1) )
  {
    v4 = *(_QWORD *)(a1 + 36) - *(_QWORD *)&GUID_PROCESSOR_SETTINGS_SUBGROUP.Data1;
    v5 = *(_DWORD *)(a1 + 52);
    v6 = *(_DWORD *)(a1 + 56);
    if ( !v4 )
      v4 = *(_QWORD *)(a1 + 44) - *(_QWORD *)GUID_PROCESSOR_SETTINGS_SUBGROUP.Data4;
    if ( v4 )
      goto LABEL_9;
    v3 = PpmSetProfilePolicySetting((_QWORD *)(a1 + 4), v1, v5, a1 + 60, *(_DWORD *)(a1 + 56));
    if ( v3 == -1073741275 )
      v3 = 0;
    v9 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&NullGuid.Data1;
    if ( !v9 )
      v9 = *(_QWORD *)(a1 + 12) - *(_QWORD *)NullGuid.Data4;
    if ( !v9 )
    {
LABEL_9:
      v7 = PopSetPowerSettingValue(v1, 0xFFFFFFFFLL, v5, v6, a1 + 60);
      v3 = v7;
      if ( v7 < 0 && (PoDebug & 1) != 0 )
        DbgPrint("%s: PopSetPowerSettingValue() 0x%x\n", "PopSetNewPolicyValue", v7);
    }
  }
  return v3;
}
