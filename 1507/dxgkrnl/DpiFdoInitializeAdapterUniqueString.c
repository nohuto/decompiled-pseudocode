/*
 * XREFs of DpiFdoInitializeAdapterUniqueString @ 0x1C00C6A30
 * Callers:
 *     DpiFdoInitializeFdo @ 0x1C00C6170 (DpiFdoInitializeFdo.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0008790 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     MonitorUnifyCCDMonitorString @ 0x1C00C6C40 (MonitorUnifyCCDMonitorString.c)
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
  __int64 v11; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  void *v19; // rcx
  _QWORD *v20; // rax
  void *v21; // rcx
  __int64 v22; // rax
  NTSTATUS v23; // eax
  __int64 v24; // rcx
  NTSTATUS v25; // eax
  __int64 v26; // rcx
  NTSTATUS v27; // eax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  ULONG Length[2]; // [rsp+20h] [rbp-A9h]
  PULONG ResultLength; // [rsp+28h] [rbp-A1h]
  ULONG v32; // [rsp+40h] [rbp-89h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-81h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-79h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-69h] BYREF
  UUID Uuid; // [rsp+90h] [rbp-39h] BYREF
  wchar_t pszDest[40]; // [rsp+A0h] [rbp-29h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  ObjectAttributes.Length = 48;
  KeyHandle = 0LL;
  v32 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v1 + 480);
  PoolWithTag = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v5 = v3;
  if ( v3 < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v4);
    v17[3] = DpiFdoInitializeAdapterUniqueString;
    v17[4] = ZwOpenKey;
    v17[5] = v5;
LABEL_26:
    WdLogEvent5_WdError(v17);
LABEL_8:
    if ( (int)v5 >= 0 )
      goto LABEL_9;
    goto LABEL_28;
  }
  RtlInitUnicodeString(&DestinationString, L"VideoID");
  if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &v32) != -1073741789 )
  {
    v22 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v22 + 24) = DpiFdoInitializeAdapterUniqueString;
    *(_QWORD *)(v22 + 32) = 0LL;
    WdLogEvent5_WdEvent(v22);
    v23 = ExUuidCreate(&Uuid);
    v5 = v23;
    if ( v23 >= 0 )
    {
      v25 = RtlStringFromGUID(&Uuid, (PUNICODE_STRING)(v1 + 3216));
      v5 = v25;
      if ( v25 >= 0 )
      {
        RtlUpcaseUnicodeString((PUNICODE_STRING)(v1 + 3216), (PCUNICODE_STRING)(v1 + 3216), 0);
        v27 = ZwSetValueKey(
                KeyHandle,
                &DestinationString,
                0,
                1u,
                *(PVOID *)(v1 + 3224),
                *(unsigned __int16 *)(v1 + 3218));
        v5 = v27;
        if ( v27 >= 0 )
          goto LABEL_6;
        v20 = (_QWORD *)WdLogNewEntry5_WdError(v28);
        v21 = ZwSetValueKey;
      }
      else
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdError(v26);
        v21 = RtlStringFromGUID;
      }
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v24);
      v21 = ExUuidCreate;
    }
    goto LABEL_25;
  }
  v10 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = DpiFdoInitializeAdapterUniqueString;
  *(_QWORD *)(v10 + 32) = -1073741789LL;
  WdLogEvent5_WdEvent(v10);
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v32, 0x74727044u);
  if ( !PoolWithTag )
  {
    LODWORD(v5) = -1073741801;
    v18 = (_QWORD *)WdLogNewEntry5_WdLowResource(v11);
    v19 = ExAllocatePoolWithTag;
LABEL_17:
    v18[3] = DpiFdoInitializeAdapterUniqueString;
    v18[4] = v19;
    v18[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v18);
    goto LABEL_28;
  }
  v12 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, PoolWithTag, v32, &v32);
  v5 = v12;
  if ( v12 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v21 = ZwQueryValueKey;
LABEL_25:
    v20[3] = DpiFdoInitializeAdapterUniqueString;
    v20[4] = v21;
    v17 = v20;
    v20[5] = v5;
    goto LABEL_26;
  }
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v1 + 3216), PoolWithTag + 6) )
  {
    LODWORD(v5) = -1073741801;
    v18 = (_QWORD *)WdLogNewEntry5_WdLowResource(v14);
    v19 = RtlCreateUnicodeString;
    goto LABEL_17;
  }
LABEL_6:
  pszDest[0] = 0;
  LODWORD(ResultLength) = *(_DWORD *)(v1 + 1048);
  Length[0] = *(_DWORD *)(v1 + 1032);
  LODWORD(v5) = RtlStringCbPrintfW(
                  pszDest,
                  0x4AuLL,
                  L"%04X_%04X_%08X_%08X",
                  *(unsigned int *)(v1 + 1028),
                  *(_QWORD *)Length,
                  ResultLength,
                  *(_DWORD *)(v1 + 1052));
  if ( RtlCreateUnicodeString((PUNICODE_STRING)(v1 + 3232), pszDest) )
  {
    MonitorUnifyCCDMonitorString(v1 + 3232);
    goto LABEL_8;
  }
  LODWORD(v5) = -1073741801;
  v29 = (_QWORD *)WdLogNewEntry5_WdError(v15);
  v29[4] = RtlCreateUnicodeString;
  v29[3] = DpiFdoInitializeAdapterUniqueString;
  v29[5] = -1073741801LL;
  WdLogEvent5_WdError(v29);
LABEL_28:
  if ( *(_QWORD *)(v1 + 3240) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 3232));
    *(_QWORD *)(v1 + 3240) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 3224) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 3216));
    *(_QWORD *)(v1 + 3224) = 0LL;
  }
LABEL_9:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x74727044u);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v5;
}
