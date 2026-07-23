/*
 * XREFs of CmpAddAliasEntry @ 0x1407CD4E0
 * Callers:
 *     CmpCreateControlSet @ 0x1407AC02C (CmpCreateControlSet.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140074D74 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     sprintf_s @ 0x1401530AC (sprintf_s.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F54C4 (RtlAnsiStringToUnicodeString.c)
 *     NtSetValueKey @ 0x140401F58 (NtSetValueKey.c)
 *     NtOpenKey @ 0x140414318 (NtOpenKey.c)
 *     NtCreateKey @ 0x140462F98 (NtCreateKey.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     CmpAddDockingInfo @ 0x1407AC56C (CmpAddDockingInfo.c)
 */

__int64 __fastcall CmpAddAliasEntry(void *a1, __int64 a2, int a3)
{
  unsigned int v5; // edi
  NTSTATUS v6; // ebx
  void *v7; // rsi
  NTSTATUS v8; // eax
  HANDLE v9; // rdi
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Disposition; // [rsp+48h] [rbp-B8h] BYREF
  int Data; // [rsp+4Ch] [rbp-B4h] BYREF
  _STRING KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  char DstBuf[128]; // [rsp+A0h] [rbp-60h] BYREF
  char v18; // [rsp+120h] [rbp+20h] BYREF

  ObjectAttributes.RootDirectory = a1;
  *(_QWORD *)&KeyHandle.Length = 0LL;
  Handle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpStrAliasString;
  ObjectAttributes.Attributes = 64;
  v5 = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = NtOpenKey((PHANDLE)&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v6 == -1073741772 )
    v6 = NtCreateKey((PHANDLE)&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( v6 >= 0 )
  {
    v7 = *(void **)&KeyHandle.Length;
    while ( 1 )
    {
      sprintf_s(DstBuf, 0x80uLL, "%04d", ++v5);
      RtlInitAnsiString(&KeyHandle, DstBuf);
      *(_DWORD *)&DestinationString.Length = 0x1000000;
      DestinationString.Buffer = (wchar_t *)&v18;
      RtlAnsiStringToUnicodeString(&DestinationString, &KeyHandle, 0);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = v7;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v8 = NtOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
      v6 = v8;
      if ( v8 < 0 )
        break;
      NtClose(Handle);
      if ( v5 >= 0xC8 )
        goto LABEL_10;
    }
    if ( v8 == -1073741772 )
      v6 = 0;
LABEL_10:
    if ( v6 < 0 || (v6 = NtCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition), v6 < 0) )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = Handle;
      CmpAddDockingInfo(Handle, a2);
      Data = a3;
      v6 = NtSetValueKey(v9, (PUNICODE_STRING)&CmpStrProfileNumberString, 0, 4u, &Data, 4u);
    }
    if ( v7 )
      NtClose(v7);
    if ( v9 )
      NtClose(v9);
  }
  return (unsigned int)v6;
}
