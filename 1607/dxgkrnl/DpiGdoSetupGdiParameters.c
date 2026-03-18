/*
 * XREFs of DpiGdoSetupGdiParameters @ 0x1C00ECEE4
 * Callers:
 *     DpiGdoCreateGdiObjects @ 0x1C00ECAA8 (DpiGdoCreateGdiObjects.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C000B6E0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     DpiCopyUnicodeString @ 0x1C00EC7DC (DpiCopyUnicodeString.c)
 *     DpiAppendStringToString @ 0x1C00ED344 (DpiAppendStringToString.c)
 *     DpiGdoCreateServiceEntry @ 0x1C00ED42C (DpiGdoCreateServiceEntry.c)
 */

__int64 __fastcall DpiGdoSetupGdiParameters(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdx
  int appended; // eax
  __int64 v10; // rbx
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE v30; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING Source; // [rsp+58h] [rbp-A8h] BYREF
  void *KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  ULONG Disposition; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+D0h] [rbp-30h] BYREF
  struct _OBJECT_ATTRIBUTES v39; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t pszDest; // [rsp+110h] [rbp+10h] BYREF
  WCHAR SourceString[4]; // [rsp+112h] [rbp+12h] BYREF
  int v42; // [rsp+11Ah] [rbp+1Ah]

  v3 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)&Source.MaximumLength = 0LL;
  Source.Length = 0;
  *(_DWORD *)((char *)&Source.Buffer + 2) = 0;
  HIWORD(Source.Buffer) = 0;
  KeyHandle = 0LL;
  pszDest = 0;
  *(_QWORD *)SourceString = 0LL;
  v42 = 0;
  v30 = 0LL;
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
    appended = DpiCopyUnicodeString(&Source, (PCUNICODE_STRING)(*(_QWORD *)(v6 + 40) + 40LL));
  }
  else
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 24) + 64LL);
    if ( *(_QWORD *)(v7 + 4440) )
      v8 = v7 + 4432;
    else
      v8 = 0LL;
    if ( !v8 )
    {
      v10 = -1073741823LL;
      goto LABEL_36;
    }
    appended = DpiAppendStringToString(
                 L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Video\\",
                 *(PCWSTR *)(v8 + 8),
                 &Source);
  }
  LODWORD(v10) = appended;
  if ( appended < 0 )
    goto LABEL_22;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 704;
  ObjectAttributes.ObjectName = &Source;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwCreateKey(&KeyHandle, 0xCu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  v10 = v11;
  if ( v11 < 0 )
    goto LABEL_36;
  LODWORD(v10) = DpiGdoCreateServiceEntry(*(_QWORD *)(v6 + 40) + 40LL, KeyHandle);
  if ( (int)v10 < 0 )
    goto LABEL_22;
  if ( *(_BYTE *)(v6 + 480) )
  {
    pszDest = 0;
    RtlInitUnicodeString(&DestinationString, &pszDest);
    goto LABEL_14;
  }
  RtlStringCbPrintfW(&pszDest, 0xEuLL, L"\\%04d", a3);
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v30, 0xF003Fu, &ObjectAttributes) >= 0 )
  {
    v21 = ZwDeleteKey(v30);
    v26 = v21;
    if ( v21 < 0 )
    {
      v27 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
      *(_QWORD *)(v27 + 24) = v26;
      WdLogEvent5_WdWarning(v27);
    }
  }
  v12 = ZwCreateKey(&v30, 0x20u, &ObjectAttributes, 0, 0LL, 3u, &Disposition);
  v10 = v12;
  if ( v12 < 0 )
  {
    if ( v12 == -1073741771 )
      goto LABEL_14;
LABEL_36:
    v28 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v28 + 24) = v10;
    WdLogEvent5_WdError(v28);
    goto LABEL_22;
  }
  if ( Disposition == 1 )
  {
    RtlInitUnicodeString(&ValueName, L"SymbolicLinkValue");
    v13 = ZwSetValueKey(v30, &ValueName, 0, 6u, *(PVOID *)(v6 + 536), *(unsigned __int16 *)(v6 + 528));
    v10 = v13;
    if ( v13 < 0 )
      goto LABEL_36;
  }
LABEL_14:
  LODWORD(v10) = DpiAppendStringToString(Source.Buffer, &pszDest, &UnicodeString);
  if ( (int)v10 >= 0 )
  {
    v14 = RtlWriteRegistryValue(
            4u,
            L"VIDEO",
            *(PCWSTR *)(a2 + 8),
            1u,
            UnicodeString.Buffer,
            UnicodeString.MaximumLength);
    v10 = v14;
    if ( v14 < 0 )
      goto LABEL_36;
    Destination.Length = 0;
    Destination.MaximumLength = Source.Length + 52;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                      PagedPool,
                                      (unsigned __int16)(Source.Length + 52),
                                      0x74727044u);
    if ( !Destination.Buffer )
      goto LABEL_36;
    v15 = RtlAppendUnicodeStringToString(&Destination, &Source);
    v10 = v15;
    if ( v15 < 0 )
      goto LABEL_36;
    v16 = RtlAppendUnicodeToString(&Destination, &pszDest);
    v10 = v16;
    if ( v16 < 0 )
      goto LABEL_36;
    v17 = RtlAppendUnicodeToString(&Destination, L"\\VolatileSettings");
    v10 = v17;
    if ( v17 < 0 )
      goto LABEL_36;
    v39.ObjectName = &Destination;
    v39.Length = 48;
    v39.RootDirectory = 0LL;
    *(_OWORD *)&v39.SecurityDescriptor = 0LL;
    v39.Attributes = 576;
    v18 = ZwCreateKey(&Handle, 0xC0000000, &v39, 0, 0LL, 1u, 0LL);
    v10 = v18;
    if ( v18 < 0 )
      goto LABEL_36;
    v19 = RtlWriteRegistryValue(
            0,
            Destination.Buffer,
            L"{5b45201d-f2f2-4f3b-85bb-30ff1f953599}",
            3u,
            *(PVOID *)(v3 + 176),
            *(unsigned __int16 *)(v3 + 168));
    v10 = v19;
    if ( v19 < 0 )
      goto LABEL_36;
  }
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeUnicodeString(&Destination);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v30 )
    ZwClose(v30);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  RtlFreeUnicodeString(&Source);
  return (unsigned int)v10;
}
