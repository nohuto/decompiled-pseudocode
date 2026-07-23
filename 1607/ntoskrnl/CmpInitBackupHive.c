/*
 * XREFs of CmpInitBackupHive @ 0x14054DED8
 * Callers:
 *     CmpLoadHiveThread @ 0x14054D948 (CmpLoadHiveThread.c)
 *     CmpFlushBackupHive @ 0x140604564 (CmpFlushBackupHive.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwCreateFile @ 0x14015AC90 (ZwCreateFile.c)
 *     ZwSetSecurityObject @ 0x14015D470 (ZwSetSecurityObject.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlAppendStringToString @ 0x140544C30 (RtlAppendStringToString.c)
 */

NTSTATUS __fastcall CmpInitBackupHive(ULONG_PTR BugCheckParameter2, const WCHAR *BugCheckParameter3)
{
  void *v4; // rcx
  NTSTATUS v5; // eax
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  STRING Destination; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-50h] BYREF
  char v14; // [rsp+C0h] [rbp-40h] BYREF

  if ( CmpSpecialBootCondition )
  {
    if ( CmpAdminSystemFileSecurityDescriptor )
    {
      v4 = *(void **)(BugCheckParameter2 + 2664);
      if ( v4 )
      {
        v5 = ZwSetSecurityObject(v4, 4u, CmpAdminSystemFileSecurityDescriptor);
        if ( v5 < 0 )
          KeBugCheckEx(0x51u, 0x13uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, v5);
        v6 = *(void **)(BugCheckParameter2 + 2696);
        if ( v6 )
          ZwSetSecurityObject(v6, 4u, CmpAdminSystemFileSecurityDescriptor);
        v7 = *(void **)(BugCheckParameter2 + 2704);
        if ( v7 )
          ZwSetSecurityObject(v7, 4u, CmpAdminSystemFileSecurityDescriptor);
        v8 = *(void **)(BugCheckParameter2 + 2672);
        if ( v8 )
          ZwSetSecurityObject(v8, 4u, CmpAdminSystemFileSecurityDescriptor);
      }
    }
  }
  *(_DWORD *)&Destination.Length = 0x800000;
  Destination.Buffer = &v14;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Config\\RegBack\\");
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlInitUnicodeString(&DestinationString, BugCheckParameter3);
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&Destination;
  ObjectAttributes.SecurityDescriptor = CmpAdminSystemFileSecurityDescriptor;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  return ZwCreateFile(
           (PHANDLE)(BugCheckParameter2 + 2688),
           0x10003u,
           &ObjectAttributes,
           &IoStatusBlock,
           0LL,
           0x80u,
           0,
           3u,
           0xC808u,
           0LL,
           0);
}
