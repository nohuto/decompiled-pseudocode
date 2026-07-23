/*
 * XREFs of RtlpQueryDiskSpacePolicy @ 0x180003720
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180004FE0 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlpQueryDiskSpacePolicyByHandle @ 0x18000387C (RtlpQueryDiskSpacePolicyByHandle.c)
 *     StringCbPrintfW @ 0x18000392C (StringCbPrintfW.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwCreateFile @ 0x180093E50 (ZwCreateFile.c)
 */

__int64 __fastcall RtlpQueryDiskSpacePolicy(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax
  wchar_t *v4; // rcx
  NTSTATUS DiskSpacePolicyByHandle; // ebx
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  int v8; // [rsp+68h] [rbp-98h] BYREF
  wchar_t *v9; // [rsp+70h] [rbp-90h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t pszDest[264]; // [rsp+C0h] [rbp-40h] BYREF

  FileHandle = 0LL;
  if ( BYTE2(RtlpUserPolicies) )
  {
    DiskSpacePolicyByHandle = 0;
    *a2 = BYTE2(RtlpUserPolicies);
  }
  else
  {
    StringCbPrintfW(pszDest, 0x208uLL, L"\\??\\%s", a1);
    v8 = 0;
    v3 = 0x7FFFLL;
    v9 = 0LL;
    v4 = pszDest;
    do
    {
      if ( !*v4 )
        break;
      ++v4;
      --v3;
    }
    while ( v3 );
    if ( v3 )
    {
      LOWORD(v8) = 2 * (0x7FFF - v3);
      HIWORD(v8) = v8 + 2;
      v9 = pszDest;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    DiskSpacePolicyByHandle = ZwCreateFile(
                                &FileHandle,
                                0x100080u,
                                &ObjectAttributes,
                                &IoStatusBlock,
                                0LL,
                                0,
                                7u,
                                1u,
                                0x20u,
                                0LL,
                                0);
    if ( DiskSpacePolicyByHandle >= 0 )
    {
      DiskSpacePolicyByHandle = RtlpQueryDiskSpacePolicyByHandle(FileHandle, a2);
      if ( DiskSpacePolicyByHandle >= 0 )
        DiskSpacePolicyByHandle = 0;
    }
    if ( FileHandle )
      NtClose(FileHandle);
  }
  return (unsigned int)DiskSpacePolicyByHandle;
}
