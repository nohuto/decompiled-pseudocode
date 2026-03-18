/*
 * XREFs of DpiFdoInitializeAdapterUniqueString @ 0x1C00EBC54
 * Callers:
 *     DpiFdoInitializeFdo @ 0x1C00EB240 (DpiFdoInitializeFdo.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C000B6E0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     MonitorUnifyCCDMonitorString @ 0x1C00EBE50 (MonitorUnifyCCDMonitorString.c)
 */

__int64 __fastcall DpiFdoInitializeAdapterUniqueString(__int64 a1)
{
  __int64 v1; // rdi
  WCHAR *PoolWithTag; // r14
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  __int64 v18; // rax
  ULONG Length[2]; // [rsp+28h] [rbp-99h]
  PULONG ResultLength; // [rsp+30h] [rbp-91h]
  int v21; // [rsp+38h] [rbp-89h]
  ULONG v22; // [rsp+48h] [rbp-79h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-69h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-59h] BYREF
  UUID Uuid; // [rsp+98h] [rbp-29h] BYREF
  wchar_t pszDest[40]; // [rsp+A8h] [rbp-19h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  ObjectAttributes.Length = 48;
  KeyHandle = 0LL;
  v22 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v1 + 512);
  PoolWithTag = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v5 = v3;
  if ( v3 < 0 )
    goto LABEL_14;
  RtlInitUnicodeString(&DestinationString, L"VideoID");
  if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &v22) != -1073741789 )
  {
    v14 = WdLogNewEntry5_WdEvent(v6);
    *(_QWORD *)(v14 + 24) = 0LL;
    WdLogEvent5_WdEvent(v14);
    v15 = ExUuidCreate(&Uuid);
    v5 = v15;
    if ( v15 >= 0 )
    {
      v16 = RtlStringFromGUID(&Uuid, (PUNICODE_STRING)(v1 + 4432));
      v5 = v16;
      if ( v16 >= 0 )
      {
        RtlUpcaseUnicodeString((PUNICODE_STRING)(v1 + 4432), (PCUNICODE_STRING)(v1 + 4432), 0);
        v17 = ZwSetValueKey(
                KeyHandle,
                &DestinationString,
                0,
                1u,
                *(PVOID *)(v1 + 4440),
                *(unsigned __int16 *)(v1 + 4434));
        v5 = v17;
        if ( v17 >= 0 )
          goto LABEL_6;
      }
    }
    goto LABEL_14;
  }
  v7 = WdLogNewEntry5_WdEvent(v6);
  *(_QWORD *)(v7 + 24) = -1073741789LL;
  WdLogEvent5_WdEvent(v7);
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v22, 0x74727044u);
  if ( !PoolWithTag )
  {
LABEL_15:
    LODWORD(v5) = -1073741801;
    v13 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v13 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v13);
    goto LABEL_21;
  }
  v9 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, PoolWithTag, v22, &v22);
  v5 = v9;
  if ( v9 < 0 )
  {
LABEL_14:
    v12 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v12 + 24) = v5;
    WdLogEvent5_WdError(v12);
LABEL_8:
    if ( (int)v5 >= 0 )
      goto LABEL_9;
    goto LABEL_21;
  }
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v1 + 4432), PoolWithTag + 6) )
    goto LABEL_15;
LABEL_6:
  pszDest[0] = 0;
  v21 = *(_DWORD *)(v1 + 1132);
  LODWORD(ResultLength) = *(_DWORD *)(v1 + 1128);
  Length[0] = *(_DWORD *)(v1 + 1112);
  LODWORD(v5) = RtlStringCbPrintfW(
                  pszDest,
                  0x4AuLL,
                  L"%04X_%04X_%08X_%08X",
                  *(unsigned int *)(v1 + 1108),
                  *(_QWORD *)Length,
                  ResultLength,
                  v21);
  if ( RtlCreateUnicodeString((PUNICODE_STRING)(v1 + 4448), pszDest) )
  {
    MonitorUnifyCCDMonitorString(v1 + 4448);
    goto LABEL_8;
  }
  LODWORD(v5) = -1073741801;
  v18 = WdLogNewEntry5_WdError(v10);
  *(_QWORD *)(v18 + 24) = -1073741801LL;
  WdLogEvent5_WdError(v18);
LABEL_21:
  if ( *(_QWORD *)(v1 + 4456) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4448));
    *(_QWORD *)(v1 + 4456) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 4440) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4432));
    *(_QWORD *)(v1 + 4440) = 0LL;
  }
LABEL_9:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x74727044u);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v5;
}
