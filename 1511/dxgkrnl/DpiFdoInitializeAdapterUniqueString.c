/*
 * XREFs of DpiFdoInitializeAdapterUniqueString @ 0x1C00D3CA0
 * Callers:
 *     DpiFdoInitializeFdo @ 0x1C00D3310 (DpiFdoInitializeFdo.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C000A560 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     MonitorUnifyCCDMonitorString @ 0x1C00D3EB0 (MonitorUnifyCCDMonitorString.c)
 */

__int64 __fastcall DpiFdoInitializeAdapterUniqueString(__int64 a1)
{
  __int64 v1; // rdi
  WCHAR *PoolWithTag; // r15
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  void *v25; // rcx
  _QWORD *v26; // rax
  void *v27; // rcx
  __int64 v28; // rax
  NTSTATUS v29; // eax
  __int64 v30; // rcx
  NTSTATUS v31; // eax
  __int64 v32; // rcx
  NTSTATUS v33; // eax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  ULONG Length[2]; // [rsp+20h] [rbp-A9h]
  PULONG ResultLength; // [rsp+28h] [rbp-A1h]
  ULONG v38; // [rsp+40h] [rbp-89h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-81h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-79h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-69h] BYREF
  UUID Uuid; // [rsp+90h] [rbp-39h] BYREF
  wchar_t pszDest[40]; // [rsp+A0h] [rbp-29h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  ObjectAttributes.Length = 48;
  KeyHandle = 0LL;
  v38 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v1 + 512);
  PoolWithTag = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v5 = v3;
  if ( v3 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v4);
    v23[3] = DpiFdoInitializeAdapterUniqueString;
    v23[4] = ZwOpenKey;
    v23[5] = v5;
LABEL_26:
    WdLogEvent5_WdError(v23);
LABEL_8:
    if ( (int)v5 >= 0 )
      goto LABEL_9;
    goto LABEL_28;
  }
  RtlInitUnicodeString(&DestinationString, L"VideoID");
  if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &v38) != -1073741789 )
  {
    v28 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v28 + 24) = DpiFdoInitializeAdapterUniqueString;
    *(_QWORD *)(v28 + 32) = 0LL;
    WdLogEvent5_WdEvent(v28);
    v29 = ExUuidCreate(&Uuid);
    v5 = v29;
    if ( v29 >= 0 )
    {
      v31 = RtlStringFromGUID(&Uuid, (PUNICODE_STRING)(v1 + 3280));
      v5 = v31;
      if ( v31 >= 0 )
      {
        RtlUpcaseUnicodeString((PUNICODE_STRING)(v1 + 3280), (PCUNICODE_STRING)(v1 + 3280), 0);
        v33 = ZwSetValueKey(
                KeyHandle,
                &DestinationString,
                0,
                1u,
                *(PVOID *)(v1 + 3288),
                *(unsigned __int16 *)(v1 + 3282));
        v5 = v33;
        if ( v33 >= 0 )
          goto LABEL_6;
        v26 = (_QWORD *)WdLogNewEntry5_WdError(v34);
        v27 = ZwSetValueKey;
      }
      else
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdError(v32);
        v27 = RtlStringFromGUID;
      }
    }
    else
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdError(v30);
      v27 = ExUuidCreate;
    }
    goto LABEL_25;
  }
  v10 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = DpiFdoInitializeAdapterUniqueString;
  *(_QWORD *)(v10 + 32) = -1073741789LL;
  WdLogEvent5_WdEvent(v10);
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v38, 0x74727044u);
  if ( !PoolWithTag )
  {
    LODWORD(v5) = -1073741801;
    v24 = (_QWORD *)WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
    v25 = ExAllocatePoolWithTag;
LABEL_17:
    v24[3] = DpiFdoInitializeAdapterUniqueString;
    v24[4] = v25;
    v24[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v24);
    goto LABEL_28;
  }
  v15 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, PoolWithTag, v38, &v38);
  v5 = v15;
  if ( v15 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v27 = ZwQueryValueKey;
LABEL_25:
    v26[3] = DpiFdoInitializeAdapterUniqueString;
    v26[4] = v27;
    v23 = v26;
    v26[5] = v5;
    goto LABEL_26;
  }
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v1 + 3280), PoolWithTag + 6) )
  {
    LODWORD(v5) = -1073741801;
    v24 = (_QWORD *)WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
    v25 = RtlCreateUnicodeString;
    goto LABEL_17;
  }
LABEL_6:
  pszDest[0] = 0;
  LODWORD(ResultLength) = *(_DWORD *)(v1 + 1080);
  Length[0] = *(_DWORD *)(v1 + 1064);
  LODWORD(v5) = RtlStringCbPrintfW(
                  pszDest,
                  0x4AuLL,
                  L"%04X_%04X_%08X_%08X",
                  *(unsigned int *)(v1 + 1060),
                  *(_QWORD *)Length,
                  ResultLength,
                  *(_DWORD *)(v1 + 1084));
  if ( RtlCreateUnicodeString((PUNICODE_STRING)(v1 + 3296), pszDest) )
  {
    MonitorUnifyCCDMonitorString(v1 + 3296);
    goto LABEL_8;
  }
  LODWORD(v5) = -1073741801;
  v35 = (_QWORD *)WdLogNewEntry5_WdError(v21);
  v35[4] = RtlCreateUnicodeString;
  v35[3] = DpiFdoInitializeAdapterUniqueString;
  v35[5] = -1073741801LL;
  WdLogEvent5_WdError(v35);
LABEL_28:
  if ( *(_QWORD *)(v1 + 3304) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 3296));
    *(_QWORD *)(v1 + 3304) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 3288) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 3280));
    *(_QWORD *)(v1 + 3288) = 0LL;
  }
LABEL_9:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x74727044u);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v5;
}
