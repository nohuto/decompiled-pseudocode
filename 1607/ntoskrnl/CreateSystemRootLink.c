/*
 * XREFs of CreateSystemRootLink @ 0x1407BA050
 * Callers:
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     NtCreateDirectoryObject @ 0x14046FB9C (NtCreateDirectoryObject.c)
 *     NtCreateSymbolicLinkObject @ 0x1404729FC (NtCreateSymbolicLinkObject.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 */

__int64 __fastcall CreateSystemRootLink(__int64 a1)
{
  NTSTATUS v2; // eax
  NTSTATUS v3; // eax
  __int64 v4; // r9
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  HANDLE DirectoryHandle; // [rsp+30h] [rbp-D0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING Name; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v15; // [rsp+88h] [rbp-78h] BYREF
  wchar_t pszDest[256]; // [rsp+A0h] [rbp-60h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\ArcName");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v2 = NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  if ( v2 < 0 )
    KeBugCheckEx(0x64u, v2, 1uLL, 0LL, 0LL);
  NtClose(DirectoryHandle);
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v3 = NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  if ( v3 < 0 )
    KeBugCheckEx(0x64u, v3, 2uLL, 0LL, 0LL);
  NtClose(DirectoryHandle);
  RtlInitUnicodeString(&v15, L"\\Device\\BootDevice");
  v4 = *(_QWORD *)(a1 + 184);
  ObjectAttributes.ObjectName = &v15;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v5 = RtlStringCbPrintfW(pszDest, 0x200uLL, L"\\ArcName\\%S", v4);
  if ( v5 < 0 )
    KeBugCheckEx(0x64u, v5, 3uLL, 0LL, 0LL);
  RtlInitUnicodeString(&Name, pszDest);
  v6 = NtCreateSymbolicLinkObject(&DirectoryHandle, 0xF0001u, &ObjectAttributes, &Name);
  if ( v6 < 0 )
    KeBugCheckEx(0x64u, v6, 4uLL, 0LL, 0LL);
  NtClose(DirectoryHandle);
  RtlInitUnicodeString(&v15, L"\\SystemRoot");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v15;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  BugCheckParameter4 = *(_QWORD *)(a1 + 200);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v7 = RtlStringCbPrintfW(pszDest, 0x200uLL, L"%s%S", L"\\Device\\BootDevice", BugCheckParameter4);
  if ( v7 < 0 )
    KeBugCheckEx(0x64u, v7, 5uLL, 0LL, 0LL);
  RtlInitUnicodeString(&Name, pszDest);
  Name.Length -= 2;
  v8 = NtCreateSymbolicLinkObject(&DirectoryHandle, 0xF0001u, &ObjectAttributes, &Name);
  if ( v8 < 0 )
    KeBugCheckEx(0x64u, v8, 6uLL, 0LL, 0LL);
  NtClose(DirectoryHandle);
  return 0LL;
}
