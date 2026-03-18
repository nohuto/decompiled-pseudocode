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

__int64 __fastcall PopSetNewPolicyValue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v6; // edi
  __int64 v7; // rax
  unsigned int v8; // ebp
  unsigned int v9; // r15d
  int v10; // eax
  __int64 v12; // rax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-38h] BYREF

  v4 = a1 + 20;
  LOBYTE(a3) = 1;
  v6 = 0;
  if ( (int)RtlStringFromGUIDEx(a1 + 20, &UnicodeString, a3, a4) >= 0 )
  {
    if ( (PoDebug & 0x10000000) != 0 )
      DbgPrint("%s: Received setting from UMPO, guid=%S\n", "PopSetNewPolicyValue", UnicodeString.Buffer);
    RtlFreeAnsiString(&UnicodeString);
  }
  if ( !(unsigned __int8)PopStateIsSessionSpecific(v4) )
  {
    v7 = *(_QWORD *)(a1 + 36) - *(_QWORD *)&GUID_PROCESSOR_SETTINGS_SUBGROUP.Data1;
    v8 = *(_DWORD *)(a1 + 52);
    v9 = *(_DWORD *)(a1 + 56);
    if ( !v7 )
      v7 = *(_QWORD *)(a1 + 44) - *(_QWORD *)GUID_PROCESSOR_SETTINGS_SUBGROUP.Data4;
    if ( v7 )
      goto LABEL_9;
    v6 = PpmSetProfilePolicySetting((_QWORD *)(a1 + 4), v4, v8, a1 + 60, *(_DWORD *)(a1 + 56));
    if ( v6 == -1073741275 )
      v6 = 0;
    v12 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&NullGuid.Data1;
    if ( !v12 )
      v12 = *(_QWORD *)(a1 + 12) - *(_QWORD *)NullGuid.Data4;
    if ( !v12 )
    {
LABEL_9:
      v10 = PopSetPowerSettingValue(v4, 0xFFFFFFFFLL, v8, v9, a1 + 60);
      v6 = v10;
      if ( v10 < 0 && (PoDebug & 1) != 0 )
        DbgPrint("%s: PopSetPowerSettingValue() 0x%x\n", "PopSetNewPolicyValue", v10);
    }
  }
  return v6;
}
