/*
 * XREFs of ndisCreateFilterDriverRegistry @ 0x1C00A7EE4
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C001EE40 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     WPP_SF_dd @ 0x1C0040948 (WPP_SF_dd_ea_1C0040948.c)
 *     ndisSetAllFilterDefaultParameters @ 0x1C00C8F84 (ndisSetAllFilterDefaultParameters.c)
 */

__int64 __fastcall ndisCreateFilterDriverRegistry(PCUNICODE_STRING Source, unsigned __int8 a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // r15d
  int v5; // esi
  wchar_t *PoolWithTag; // rax
  NTSTATUS RegistryValues; // eax
  NTSTATUS v9; // esi
  NTSTATUS v11; // eax
  int v12; // ecx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-49h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+40h] [rbp-39h] BYREF
  int ValueData; // [rsp+E0h] [rbp+67h] BYREF

  v3 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v4 = 0;
  v5 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x55u, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, (__int64)Source);
  DestinationString.MaximumLength = ndisParameterStr.Length + Source->Length + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, DestinationString.MaximumLength, 0x2020444Eu);
  DestinationString.Buffer = PoolWithTag;
  if ( !PoolWithTag )
  {
    v3 = -1073741670;
    goto LABEL_12;
  }
  memset(PoolWithTag, 0, DestinationString.MaximumLength);
  RtlCopyUnicodeString(&DestinationString, Source);
  RtlAppendUnicodeStringToString(&DestinationString, &ndisParameterStr);
  if ( RtlCheckRegistryKey(1u, (PWSTR)DestinationString.Buffer)
    && RtlCreateRegistryKey(1u, (PWSTR)DestinationString.Buffer) )
  {
    goto LABEL_17;
  }
  memset(QueryTable, 0, sizeof(QueryTable));
  if ( a2 )
  {
    v5 = 256;
    v4 = 0x4000000;
  }
  QueryTable[0].DefaultType = v4;
  QueryTable[0].Name = (wchar_t *)L"DefaultFilterSettings";
  QueryTable[0].QueryRoutine = 0LL;
  QueryTable[0].Flags = v5 | 0x24;
  QueryTable[0].EntryContext = &ValueData;
  QueryTable[1].Name = 0LL;
  RegistryValues = RtlQueryRegistryValuesEx(1u, (PCWSTR)DestinationString.Buffer, QueryTable, 0LL, 0LL);
  v9 = RegistryValues;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_dd(0x56u, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, RegistryValues, a2);
  if ( !v9 )
    goto LABEL_10;
  if ( v9 != -1073741772 )
  {
LABEL_17:
    v3 = -1073741823;
  }
  else
  {
    v3 = ndisSetAllFilterDefaultParameters(Source);
    if ( !v3 )
    {
      ValueData = 1;
      v11 = RtlWriteRegistryValue(1u, (PCWSTR)DestinationString.Buffer, L"DefaultFilterSettings", 4u, &ValueData, 4u);
      v12 = 0;
      if ( v11 )
        v12 = -1073741823;
      v3 = v12;
    }
  }
LABEL_10:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
LABEL_12:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x57u, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, (__int64)Source, v3);
  return v3;
}
