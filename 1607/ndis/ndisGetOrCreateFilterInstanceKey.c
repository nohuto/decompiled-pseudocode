/*
 * XREFs of ndisGetOrCreateFilterInstanceKey @ 0x1C00CE108
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C00A0980 (NdisOpenConfigurationEx.c)
 *     ndisCreateFilterInstanceRegistry @ 0x1C00CDE7C (ndisCreateFilterInstanceRegistry.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0017A44 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_qqq @ 0x1C003C434 (WPP_SF_qqq.c)
 *     WPP_SF_dd @ 0x1C0042EFC (WPP_SF_dd_ea_1C0042EFC.c)
 *     WPP_SF_qqqL @ 0x1C00446D4 (WPP_SF_qqqL.c)
 */

__int64 __fastcall ndisGetOrCreateFilterInstanceKey(
        PCUNICODE_STRING Source,
        __int64 a2,
        __int64 a3,
        char a4,
        _BYTE *a5,
        PUNICODE_STRING Destination)
{
  PCUNICODE_STRING v6; // rbx
  __int64 v7; // r15
  unsigned int v8; // edi
  char v9; // r14
  unsigned __int16 *v10; // r13
  __int16 v11; // ax
  __int64 v12; // rbx
  wchar_t *PoolWithTag; // rax
  NTSTATUS v15; // ebx
  ULONG i; // r15d
  NTSTATUS v17; // eax
  __int64 v18; // rcx
  unsigned __int8 v19; // al
  int v20; // eax
  NTSTATUS RegistryValues; // eax
  NTSTATUS v22; // ebx
  wchar_t *v23; // rax
  unsigned __int16 v24; // ax
  wchar_t *v25; // rax
  PULONG ResultLength; // [rsp+28h] [rbp-D8h]
  char v27; // [rsp+30h] [rbp-D0h]
  char v28; // [rsp+31h] [rbp-CFh]
  int v32; // [rsp+48h] [rbp-B8h]
  _UNICODE_STRING String1; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v34; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  ULONG v36; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v37; // [rsp+84h] [rbp-7Ch]
  HANDLE KeyHandle; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING GuidString; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING String2; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING Sourcea; // [rsp+D8h] [rbp-28h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E8h] [rbp-18h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[3]; // [rsp+120h] [rbp+20h] BYREF

  v6 = Source;
  v7 = a3;
  v41 = a2;
  v8 = 0;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  SourceString.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\";
  Sourcea.Buffer = (wchar_t *)L"\\";
  *(_DWORD *)&String1.Length = 0;
  v9 = 0;
  String1.Buffer = 0LL;
  v10 = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  v27 = 0;
  v28 = 0;
  KeyHandle = 0LL;
  v36 = 0;
  *(_DWORD *)&v34.Length = 0;
  v34.Buffer = 0LL;
  *(_DWORD *)&String2.Length = 0;
  String2.Buffer = 0LL;
  v37 = 0;
  v32 = 0;
  *(_DWORD *)&SourceString.Length = 6946920;
  *(_DWORD *)&Sourcea.Length = 262146;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqq(0x61u, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, Source, a3, a2);
  if ( !*(_QWORD *)(v7 + 16) )
  {
    v8 = -1073741811;
    goto LABEL_20;
  }
  *a5 = 0;
  *(_QWORD *)&Destination->Length = 0LL;
  Destination->Buffer = 0LL;
  if ( RtlStringFromGUID((const GUID *const)(*(_QWORD *)(v7 + 16) + 4064LL), &GuidString) )
    goto LABEL_19;
  v9 = 1;
  v11 = v6->Length + 2;
  DestinationString.Length = 0;
  DestinationString.MaximumLength = GuidString.Length
                                  + SourceString.Length
                                  + ndisParameterStr.Length
                                  + ndisFilterAdapterStr.Length
                                  + v11;
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          DestinationString.MaximumLength,
                                          0x2020444Eu);
  if ( !DestinationString.Buffer )
  {
    v8 = -1073741670;
    goto LABEL_20;
  }
  memset(DestinationString.Buffer, 0, DestinationString.MaximumLength);
  RtlCopyUnicodeString(&DestinationString, &SourceString);
  RtlAppendUnicodeStringToString(&DestinationString, v6);
  RtlAppendUnicodeStringToString(&DestinationString, &ndisParameterStr);
  RtlAppendUnicodeStringToString(&DestinationString, &ndisFilterAdapterStr);
  RtlAppendUnicodeStringToString(&DestinationString, &GuidString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes) )
  {
    v8 = -1073741823;
    KeyHandle = 0LL;
LABEL_23:
    RtlFreeUnicodeString(&GuidString);
    goto LABEL_24;
  }
  v12 = *(_QWORD *)(v41 + 112);
  if ( !v12 )
    goto LABEL_17;
  do
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 464LL) + 56LL) & 2) == 0 )
      break;
    v12 = *(_QWORD *)(v12 + 112);
  }
  while ( v12 );
  if ( !v12 )
  {
LABEL_17:
    if ( !RtlStringFromGUID((const GUID *const)(v7 + 4064), &UnicodeString) )
    {
      String1.Length = UnicodeString.Length;
      String1.MaximumLength = UnicodeString.MaximumLength;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, UnicodeString.MaximumLength, 0x2020444Eu);
      String1.Buffer = PoolWithTag;
      if ( PoolWithTag )
      {
        v27 = 1;
        memset(PoolWithTag, 0, String1.MaximumLength);
        v15 = RtlUpcaseUnicodeString(&String1, &UnicodeString, 0);
        RtlFreeUnicodeString(&UnicodeString);
        if ( !v15 )
          goto LABEL_40;
      }
      else
      {
        RtlFreeUnicodeString(&UnicodeString);
      }
    }
LABEL_18:
    v6 = Source;
    goto LABEL_19;
  }
  String1.Length = *(_WORD *)(*(_QWORD *)(v12 + 16) + 128LL);
  String1.MaximumLength = String1.Length + 2;
  String1.Buffer = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)(String1.Length + 2), 0x2020444Eu);
  if ( !String1.Buffer )
  {
LABEL_15:
    v6 = Source;
    v8 = -1073741670;
    goto LABEL_20;
  }
  v27 = 1;
  memset(String1.Buffer, 0, String1.MaximumLength);
  memmove(String1.Buffer, *(const void **)(*(_QWORD *)(v12 + 16) + 136LL), String1.Length);
LABEL_40:
  v10 = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x218uLL, 0x2020444Eu);
  if ( !v10 )
    goto LABEL_15;
  for ( i = 0; i <= 0x270F; ++i )
  {
    memset(v10, 0, 0x218uLL);
    v36 = 0;
    v17 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, v10, 0x216u, &v36);
    if ( v17 == -2147483622 )
      break;
    if ( v17 )
      goto LABEL_61;
    v34.Length = v10[6];
    v34.Buffer = v10 + 8;
    v34.MaximumLength = v34.Length + 2;
    memset(QueryTable, 0, sizeof(QueryTable));
    QueryTable[0].QueryRoutine = 0LL;
    QueryTable[0].Flags = 1;
    QueryTable[0].Name = v10 + 8;
    v18 = *(_QWORD *)(v41 + 16);
    v19 = *(_BYTE *)(v18 + 100);
    if ( v19 > 6u || v19 == 6 && *(_BYTE *)(v18 + 101) >= 0x28u )
    {
      v20 = 256;
      v37 = 0x1000000;
      v32 = 256;
    }
    else
    {
      v20 = v32;
    }
    QueryTable[1].QueryRoutine = 0LL;
    QueryTable[1].Flags = v20 | 0x24;
    QueryTable[2].Name = 0LL;
    QueryTable[1].Name = (wchar_t *)L"LowerComponent";
    QueryTable[1].EntryContext = &String2;
    QueryTable[1].DefaultType = v37;
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)KeyHandle, QueryTable, 0LL, 0LL);
    v22 = RegistryValues;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_dd(0x62u, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, RegistryValues, v32);
    if ( v22 )
      goto LABEL_61;
    if ( !RtlCompareUnicodeString(&String1, &String2, 1u) )
    {
      *a5 = 1;
      break;
    }
    if ( String2.Buffer )
    {
      ExFreePoolWithTag(String2.Buffer, 0);
      String2.Buffer = 0LL;
    }
  }
  if ( !*a5 )
  {
    if ( !a4 )
      goto LABEL_61;
    if ( i > 0x270F
      || (*(_DWORD *)&v34.Length = 655368,
          v23 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xAuLL, 0x2020444Eu),
          (v34.Buffer = v23) == 0LL) )
    {
      v7 = a3;
      goto LABEL_15;
    }
    v28 = 1;
    memset(v23, 0, v34.MaximumLength);
    if ( (unsigned int)RtlStringCchPrintfW(v34.Buffer, (unsigned __int64)v34.MaximumLength >> 1, L"%04d", i) )
    {
LABEL_61:
      v7 = a3;
      goto LABEL_18;
    }
  }
  v6 = Source;
  v24 = GuidString.Length
      + Sourcea.Length
      + ndisParameterStr.Length
      + ndisFilterAdapterStr.Length
      + v34.Length
      + Source->Length
      + 2;
  Destination->MaximumLength = v24;
  v25 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v24, 0x2020444Eu);
  Destination->Buffer = v25;
  if ( v25 )
  {
    memset(v25, 0, Destination->MaximumLength);
    RtlCopyUnicodeString(Destination, Source);
    RtlAppendUnicodeStringToString(Destination, &ndisParameterStr);
    RtlAppendUnicodeStringToString(Destination, &ndisFilterAdapterStr);
    RtlAppendUnicodeStringToString(Destination, &GuidString);
    RtlAppendUnicodeStringToString(Destination, &Sourcea);
    RtlAppendUnicodeStringToString(Destination, &v34);
    if ( *a5
      || !RtlCreateRegistryKey(1u, (PWSTR)Destination->Buffer)
      && !RtlWriteRegistryValue(
            1u,
            (PCWSTR)Destination->Buffer,
            L"LowerComponent",
            1u,
            String1.Buffer,
            String1.Length + 2) )
    {
      goto LABEL_66;
    }
    ExFreePoolWithTag(Destination->Buffer, 0);
    v7 = a3;
    *(_QWORD *)&Destination->Length = 0LL;
    Destination->Buffer = 0LL;
LABEL_19:
    v8 = -1073741823;
    goto LABEL_20;
  }
  v8 = -1073741670;
LABEL_66:
  v7 = a3;
LABEL_20:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v9 )
    goto LABEL_23;
LABEL_24:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v27 )
    ExFreePoolWithTag(String1.Buffer, 0);
  if ( String2.Buffer )
    ExFreePoolWithTag(String2.Buffer, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v28 )
    ExFreePoolWithTag(v34.Buffer, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    LODWORD(ResultLength) = v8;
    WPP_SF_qqqL(0x63u, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, v6, v7, v41, ResultLength);
  }
  return v8;
}
