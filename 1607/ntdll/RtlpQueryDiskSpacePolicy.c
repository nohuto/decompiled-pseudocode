/*
 * XREFs of RtlpQueryDiskSpacePolicy @ 0x180086C84
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180029F60 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlpQueryDiskSpacePolicyByHandle @ 0x180086DE0 (RtlpQueryDiskSpacePolicyByHandle.c)
 *     StringCbPrintfW @ 0x180086E90 (StringCbPrintfW.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwCreateFile @ 0x1800A6EC0 (ZwCreateFile.c)
 */

__int64 __fastcall RtlpQueryDiskSpacePolicy(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax
  wchar_t *v4; // rcx
  int DiskSpacePolicyByHandle; // ebx
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  int v8; // [rsp+68h] [rbp-98h] BYREF
  wchar_t *v9; // [rsp+70h] [rbp-90h]
  int v10; // [rsp+78h] [rbp-88h] BYREF
  __int64 v11; // [rsp+80h] [rbp-80h]
  int *v12; // [rsp+88h] [rbp-78h]
  int v13; // [rsp+90h] [rbp-70h]
  __int128 v14; // [rsp+98h] [rbp-68h]
  _BYTE v15[24]; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t pszDest[264]; // [rsp+C0h] [rbp-40h] BYREF

  Handle = 0LL;
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
    v10 = 48;
    v11 = 0LL;
    v13 = 64;
    v12 = &v8;
    v14 = 0LL;
    DiskSpacePolicyByHandle = ZwCreateFile(&Handle, 1048704LL, &v10, v15, 0LL, 0, 7, 1, 32, 0LL, 0);
    if ( DiskSpacePolicyByHandle >= 0 )
    {
      DiskSpacePolicyByHandle = RtlpQueryDiskSpacePolicyByHandle(Handle, a2);
      if ( DiskSpacePolicyByHandle >= 0 )
        DiskSpacePolicyByHandle = 0;
    }
    if ( Handle )
      NtClose(Handle);
  }
  return (unsigned int)DiskSpacePolicyByHandle;
}
