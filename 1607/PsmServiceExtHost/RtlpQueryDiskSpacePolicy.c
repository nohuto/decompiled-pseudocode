/*
 * XREFs of RtlpQueryDiskSpacePolicy @ 0x1800395B0
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18001F768 (RtlQueryResourcePolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     NtClose_0 @ 0x18002058C (NtClose_0.c)
 *     RtlpQueryDiskSpacePolicyByHandle @ 0x180039718 (RtlpQueryDiskSpacePolicyByHandle.c)
 *     StringCbPrintfW @ 0x18003982C (StringCbPrintfW.c)
 */

__int64 __fastcall RtlpQueryDiskSpacePolicy(__int64 a1, _DWORD *a2)
{
  NTSTATUS DiskSpacePolicyByHandle; // ebx
  __int64 v4; // rax
  wchar_t *v5; // rcx
  void *FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  int v8; // [rsp+68h] [rbp-98h] BYREF
  wchar_t *v9; // [rsp+70h] [rbp-90h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-58h] BYREF
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
    v4 = 0x7FFFLL;
    v9 = 0LL;
    v5 = pszDest;
    do
    {
      if ( !*v5 )
        break;
      ++v5;
      --v4;
    }
    while ( v4 );
    if ( v4 )
    {
      LOWORD(v8) = 2 * (0x7FFF - v4);
      HIWORD(v8) = v8 + 2;
      v9 = pszDest;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    DiskSpacePolicyByHandle = NtCreateFile(
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
      NtClose_0(FileHandle);
  }
  return (unsigned int)DiskSpacePolicyByHandle;
}
