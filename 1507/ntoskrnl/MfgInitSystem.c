/*
 * XREFs of MfgInitSystem @ 0x1407E8BA0
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbPrintfW @ 0x1400CEF64 (RtlStringCbPrintfW.c)
 *     RtlStringCbCopyW @ 0x1400CF240 (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14017F390 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x140180890 (ZwDeleteKey.c)
 *     ZwOpenKeyEx @ 0x140181170 (ZwOpenKeyEx.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MfgInitSystem(__int64 a1)
{
  NTSTATUS inited; // ebx
  __int64 v2; // rdi
  unsigned __int16 v3; // ax
  PVOID PoolWithTag; // rax
  __int64 v6; // rax
  HANDLE v7; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING ValueName; // [rsp+98h] [rbp-68h] BYREF
  WCHAR pszDest[256]; // [rsp+B0h] [rbp-50h] BYREF

  ExpManufacturingInformation = 0LL;
  inited = 0;
  qword_1403254A8 = 0LL;
  qword_1403254B0 = 0LL;
  v2 = *(_QWORD *)(a1 + 240);
  v7 = 0LL;
  KeyHandle = 0LL;
  v3 = *(_WORD *)(v2 + 2456);
  if ( !v3 )
    return (unsigned int)inited;
  if ( v3 >= 0x80u )
    return (unsigned int)-1073741811;
  LODWORD(qword_1403254A8) = *(_DWORD *)(v2 + 2456);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, WORD1(qword_1403254A8), 0x5067664Du);
  qword_1403254B0 = PoolWithTag;
  if ( PoolWithTag )
  {
    inited = RtlStringCbCopyW((NTSTRSAFE_PWSTR)PoolWithTag, WORD1(qword_1403254A8), *(NTSTRSAFE_PCWSTR *)(v2 + 2464));
    if ( inited < 0 )
      goto LABEL_22;
    inited = RtlStringCbPrintfW(
               pszDest,
               0x200uLL,
               L"%s%s",
               L"\\registry\\machine\\",
               L"System\\CurrentControlSet\\Control\\ManufacturingMode\\");
    if ( inited < 0 )
      goto LABEL_22;
    inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( inited < 0 )
      goto LABEL_22;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    inited = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( inited < 0 )
      goto LABEL_22;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_1403254A8;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    inited = ZwOpenKey(&Handle, 0xF003Fu, &ObjectAttributes);
    if ( inited < 0 )
      goto LABEL_22;
    ZwClose(Handle);
    LODWORD(ExpManufacturingInformation) = ExpManufacturingInformation | 1;
    RtlInitUnicodeStringEx(&ValueName, L"LastProfile");
    inited = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, qword_1403254B0, WORD1(qword_1403254A8));
    if ( inited < 0 )
      goto LABEL_22;
    inited = RtlInitUnicodeStringEx(&DestinationString, L"Current");
    if ( inited < 0 )
      goto LABEL_22;
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 832;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKeyEx(&v7, 0xF003Fu, &ObjectAttributes, 8u) >= 0 )
    {
      inited = ZwDeleteKey(v7);
      if ( inited < 0 )
        goto LABEL_22;
      ZwClose(v7);
      v7 = 0LL;
    }
    inited = ZwCreateKey(&v7, 0xF003Fu, &ObjectAttributes, 0, 0LL, 3u, 0LL);
    if ( inited >= 0 )
    {
      inited = RtlStringCbPrintfW(
                 pszDest,
                 0x200uLL,
                 L"%s%s%wZ",
                 L"\\registry\\machine\\",
                 L"System\\CurrentControlSet\\Control\\ManufacturingMode\\",
                 &qword_1403254A8);
      if ( inited >= 0 )
      {
        v6 = -1LL;
        do
          ++v6;
        while ( pszDest[v6] );
        inited = ZwSetValueKey(v7, &CmSymbolicLinkValueName, 0, 6u, pszDest, 2 * v6);
      }
    }
    goto LABEL_22;
  }
  inited = -1073741670;
LABEL_22:
  if ( v7 )
    ZwClose(v7);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)inited;
}
