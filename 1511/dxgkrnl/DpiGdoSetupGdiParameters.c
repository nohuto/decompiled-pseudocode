/*
 * XREFs of DpiGdoSetupGdiParameters @ 0x1C00CF250
 * Callers:
 *     DpiGdoCreateGdiObjects @ 0x1C00CEE00 (DpiGdoCreateGdiObjects.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C000A560 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     DpiAppendStringToString @ 0x1C00CF6C0 (DpiAppendStringToString.c)
 *     DpiGdoCreateServiceEntry @ 0x1C00CF7B0 (DpiGdoCreateServiceEntry.c)
 *     DpiFdoGetAdapterUniqueGUID @ 0x1C00CF960 (DpiFdoGetAdapterUniqueGUID.c)
 *     DpiCopyUnicodeString @ 0x1C00D0D90 (DpiCopyUnicodeString.c)
 */

__int64 __fastcall DpiGdoSetupGdiParameters(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v6; // rsi
  __int64 AdapterUniqueGUID; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rbx
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  NTSTATUS v13; // eax
  __int64 v14; // rcx
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  NTSTATUS v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  NTSTATUS appended; // eax
  __int64 v21; // rcx
  NTSTATUS v22; // eax
  __int64 v23; // rcx
  NTSTATUS v24; // eax
  NTSTATUS v25; // eax
  NTSTATUS v26; // eax
  _QWORD *v28; // rax
  __int64 (__fastcall *v29)(_QWORD); // rcx
  NTSTATUS v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rbx
  __int64 v36; // rax
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE v38; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING Source; // [rsp+58h] [rbp-A8h] BYREF
  void *KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  ULONG Disposition; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES v46; // [rsp+D0h] [rbp-30h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+100h] [rbp+0h] BYREF
  wchar_t pszDest; // [rsp+110h] [rbp+10h] BYREF
  WCHAR SourceString[4]; // [rsp+112h] [rbp+12h] BYREF
  int v50; // [rsp+11Ah] [rbp+1Ah]

  v3 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)&Source.MaximumLength = 0LL;
  Source.Length = 0;
  *(_DWORD *)((char *)&Source.Buffer + 2) = 0;
  HIWORD(Source.Buffer) = 0;
  KeyHandle = 0LL;
  pszDest = 0;
  *(_QWORD *)SourceString = 0LL;
  v50 = 0;
  v38 = 0LL;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  Destination.Length = 0;
  *(_QWORD *)&Destination.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  Handle = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL);
  if ( *(_BYTE *)(v6 + 480) )
  {
    v9 = DpiCopyUnicodeString(&Source, (PCUNICODE_STRING)(*(_QWORD *)(v6 + 40) + 40LL));
LABEL_4:
    LODWORD(v10) = v9;
    if ( v9 < 0 )
      goto LABEL_20;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 704;
    ObjectAttributes.ObjectName = &Source;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v11 = ZwCreateKey(&KeyHandle, 0xCu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    v10 = v11;
    if ( v11 < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v12);
LABEL_32:
      v29 = (__int64 (__fastcall *)(_QWORD))ZwCreateKey;
      goto LABEL_42;
    }
    LODWORD(v10) = DpiGdoCreateServiceEntry(*(_QWORD *)(v6 + 40) + 40LL, KeyHandle);
    if ( (int)v10 < 0 )
      goto LABEL_20;
    if ( *(_BYTE *)(v6 + 480) )
    {
      pszDest = 0;
      RtlInitUnicodeString(&DestinationString, &pszDest);
    }
    else
    {
      RtlStringCbPrintfW(&pszDest, 0xEuLL, L"\\%04d", a3);
      RtlInitUnicodeString(&DestinationString, SourceString);
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&v38, 0xF003Fu, &ObjectAttributes) >= 0 )
      {
        v30 = ZwDeleteKey(v38);
        v35 = v30;
        if ( v30 < 0 )
        {
          v36 = WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
          *(_QWORD *)(v36 + 24) = DpiGdoSetupGdiParameters;
          *(_QWORD *)(v36 + 32) = v35;
          WdLogEvent5_WdWarning(v36);
        }
      }
      v13 = ZwCreateKey(&v38, 0x20u, &ObjectAttributes, 0, 0LL, 3u, &Disposition);
      v10 = v13;
      if ( v13 < 0 )
      {
        if ( v13 != -1073741771 )
        {
LABEL_31:
          v28 = (_QWORD *)WdLogNewEntry5_WdError(v14);
          goto LABEL_32;
        }
      }
      else if ( Disposition == 1 )
      {
        RtlInitUnicodeString(&ValueName, L"SymbolicLinkValue");
        v15 = ZwSetValueKey(v38, &ValueName, 0, 6u, *(PVOID *)(v6 + 536), *(unsigned __int16 *)(v6 + 528));
        v10 = v15;
        if ( v15 < 0 )
        {
          v28 = (_QWORD *)WdLogNewEntry5_WdError(v16);
          v29 = (__int64 (__fastcall *)(_QWORD))ZwSetValueKey;
          goto LABEL_42;
        }
      }
    }
    LODWORD(v10) = DpiAppendStringToString(Source.Buffer, &pszDest, &UnicodeString);
    if ( (int)v10 < 0 )
      goto LABEL_20;
    v17 = RtlWriteRegistryValue(
            4u,
            L"VIDEO",
            *(PCWSTR *)(a2 + 8),
            1u,
            UnicodeString.Buffer,
            UnicodeString.MaximumLength);
    v10 = v17;
    if ( v17 < 0 )
    {
LABEL_41:
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v18);
      v29 = (__int64 (__fastcall *)(_QWORD))RtlWriteRegistryValue;
      goto LABEL_42;
    }
    Destination.Length = 0;
    Destination.MaximumLength = Source.Length + 52;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                      PagedPool,
                                      (unsigned __int16)(Source.Length + 52),
                                      0x74727044u);
    if ( !Destination.Buffer )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v19);
      v29 = (__int64 (__fastcall *)(_QWORD))ExAllocatePoolWithTag;
      goto LABEL_42;
    }
    appended = RtlAppendUnicodeStringToString(&Destination, &Source);
    v10 = appended;
    if ( appended < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v21);
      v29 = (__int64 (__fastcall *)(_QWORD))RtlAppendUnicodeStringToString;
      goto LABEL_42;
    }
    v22 = RtlAppendUnicodeToString(&Destination, &pszDest);
    v10 = v22;
    if ( v22 < 0 || (v24 = RtlAppendUnicodeToString(&Destination, L"\\VolatileSettings"), v10 = v24, v24 < 0) )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v23);
      v29 = (__int64 (__fastcall *)(_QWORD))RtlAppendUnicodeToString;
      goto LABEL_42;
    }
    v46.ObjectName = &Destination;
    v46.Length = 48;
    v46.RootDirectory = 0LL;
    *(_OWORD *)&v46.SecurityDescriptor = 0LL;
    v46.Attributes = 576;
    v25 = ZwCreateKey(&Handle, 0xC0000000, &v46, 0, 0LL, 1u, 0LL);
    v10 = v25;
    if ( v25 >= 0 )
    {
      v26 = RtlWriteRegistryValue(
              0,
              Destination.Buffer,
              L"{5b45201d-f2f2-4f3b-85bb-30ff1f953599}",
              3u,
              *(PVOID *)(v3 + 176),
              *(unsigned __int16 *)(v3 + 168));
      v10 = v26;
      if ( v26 >= 0 )
        goto LABEL_20;
      goto LABEL_41;
    }
    goto LABEL_31;
  }
  AdapterUniqueGUID = DpiFdoGetAdapterUniqueGUID(*(_QWORD *)(v6 + 24));
  if ( AdapterUniqueGUID )
  {
    v9 = DpiAppendStringToString(
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Video\\",
           *(PCWSTR *)(AdapterUniqueGUID + 8),
           &Source);
    goto LABEL_4;
  }
  v10 = -1073741823LL;
  v28 = (_QWORD *)WdLogNewEntry5_WdError(v8);
  v29 = DpiFdoGetAdapterUniqueGUID;
LABEL_42:
  v28[4] = v29;
  v28[3] = DpiGdoSetupGdiParameters;
  v28[5] = v10;
  WdLogEvent5_WdError(v28);
LABEL_20:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeUnicodeString(&Destination);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v38 )
    ZwClose(v38);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  RtlFreeUnicodeString(&Source);
  return (unsigned int)v10;
}
