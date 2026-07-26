/*
 * XREFs of ndisSetFilterDefaultParameter @ 0x1C00C91F8
 * Callers:
 *     ndisSetAllFilterDefaultParameters @ 0x1C00C8F84 (ndisSetAllFilterDefaultParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_qqq @ 0x1C00384C4 (WPP_SF_qqq.c)
 *     WPP_SF_dd @ 0x1C0040948 (WPP_SF_dd_ea_1C0040948.c)
 *     WPP_SF_qqqL @ 0x1C0040C54 (WPP_SF_qqqL.c)
 */

__int64 __fastcall ndisSetFilterDefaultParameter(__int64 a1, const WCHAR *a2, __int64 a3, unsigned __int8 a4)
{
  unsigned int v6; // edi
  unsigned int v7; // r14d
  int v8; // ebx
  char v10; // r12
  PCWSTR v11; // r14
  NTSTATUS RegistryValues; // eax
  NTSTATUS v13; // ebx
  wchar_t *Buffer; // rcx
  unsigned int v15; // ebx
  const WCHAR *v16; // rdx
  NTSTATUS v17; // eax
  int v18; // ecx
  __int64 ValueLength; // [rsp+28h] [rbp-D8h]
  ULONG Value; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING String; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-A8h] BYREF
  PCWSTR Path; // [rsp+68h] [rbp-98h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable[5]; // [rsp+70h] [rbp-90h] BYREF

  Path = a2;
  v6 = 0;
  *(_DWORD *)&String.Length = 0;
  String.Buffer = 0LL;
  v7 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  v8 = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&String2.Length = 0;
  v10 = 1;
  String2.Buffer = 0LL;
  Value = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqq(0x5Eu, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1, a2, a3);
  if ( a4 )
  {
    v8 = 256;
    v7 = 0x1000000;
  }
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].Name = *(wchar_t **)(a3 + 8);
  QueryTable[1].DefaultType = v7;
  QueryTable[2].DefaultType = v7;
  QueryTable[1].Name = L"Optional";
  QueryTable[3].DefaultType = v7;
  v11 = Path;
  QueryTable[1].EntryContext = &String;
  QueryTable[0].QueryRoutine = 0LL;
  QueryTable[2].Name = L"Default";
  QueryTable[2].EntryContext = &DestinationString;
  QueryTable[3].Name = L"Type";
  QueryTable[1].QueryRoutine = 0LL;
  QueryTable[2].QueryRoutine = 0LL;
  QueryTable[3].QueryRoutine = 0LL;
  QueryTable[4].Name = 0LL;
  QueryTable[3].EntryContext = &String2;
  QueryTable[0].Flags = 1;
  QueryTable[1].Flags = v8 | 0x20;
  QueryTable[2].Flags = v8 | 0x20;
  QueryTable[3].Flags = v8 | 0x20;
  RegistryValues = RtlQueryRegistryValuesEx(0x40000000u, Path, QueryTable, 0LL, 0LL);
  v13 = RegistryValues;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_dd(0x5Fu, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, RegistryValues, a4);
  if ( v13 )
  {
    v6 = -1073741823;
  }
  else
  {
    if ( String.Buffer )
      RtlUnicodeStringToInteger(&String, 0xAu, &Value);
    if ( !Value )
    {
      Buffer = DestinationString.Buffer;
      if ( !DestinationString.Buffer )
      {
        if ( !String2.Buffer )
          goto LABEL_19;
        v15 = 0;
        while ( RtlCompareUnicodeString((PCUNICODE_STRING)((char *)&unk_1C0075420 + 24 * v15), &String2, 1u) )
        {
          if ( ++v15 >= 6 )
            goto LABEL_19;
        }
        v16 = (const WCHAR *)qword_1C00AF450;
        if ( (unsigned int)(*((_DWORD *)&unk_1C0075420 + 6 * v15 + 4) - 4) > 1 )
LABEL_19:
          v16 = L"0";
        RtlInitUnicodeString(&DestinationString, v16);
        Buffer = DestinationString.Buffer;
        v10 = 0;
      }
      v17 = RtlWriteRegistryValue(
              1u,
              *(PCWSTR *)(a1 + 8),
              *(PCWSTR *)(a3 + 8),
              1u,
              Buffer,
              DestinationString.Length + 2);
      v18 = 0;
      if ( v17 )
        v18 = -1073741823;
      v6 = v18;
    }
  }
  if ( String.Buffer )
    ExFreePoolWithTag(String.Buffer, 0);
  if ( DestinationString.Buffer && v10 )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( String2.Buffer )
    ExFreePoolWithTag(String2.Buffer, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    LODWORD(ValueLength) = v6;
    WPP_SF_qqqL(0x60u, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1, v11, a3, ValueLength);
  }
  return v6;
}
