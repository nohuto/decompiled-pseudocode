/*
 * XREFs of ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x180001FB0
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002B90 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?DoStackCapture@@YAXJI@Z @ 0x180003E40 (-DoStackCapture@@YAXJI@Z.c)
 *     __security_check_cookie @ 0x180006E30 (__security_check_cookie.c)
 *     memset_0 @ 0x18000818E (memset_0.c)
 */

__int64 __fastcall LogonDwmAccountAndSetTokenIntegrityLevel(void **a1)
{
  int v2; // ebx
  _DWORD *v3; // rdi
  NTSTATUS v4; // eax
  unsigned int v5; // edx
  HANDLE ProcessHeap; // rax
  _DWORD *v7; // rax
  PSID v8; // rax
  PSID v9; // rax
  signed int LastError; // eax
  signed int v11; // eax
  DWORD LengthSid; // eax
  signed int v13; // eax
  signed int v14; // eax
  signed int v15; // eax
  HANDLE v16; // rax
  HANDLE TokenHandle; // [rsp+70h] [rbp-98h] BYREF
  void *NewTokenHandle; // [rsp+78h] [rbp-90h] BYREF
  PSID pSid; // [rsp+80h] [rbp-88h] BYREF
  PSID v21; // [rsp+88h] [rbp-80h] BYREF
  PSID Sid; // [rsp+90h] [rbp-78h] BYREF
  __int128 TokenInformation; // [rsp+98h] [rbp-70h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+A8h] [rbp-60h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v25; // [rsp+B0h] [rbp-58h] BYREF
  _TOKEN_PRIVILEGES NewState; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-40h]
  int v28; // [rsp+D0h] [rbp-38h]
  __int64 v29; // [rsp+D4h] [rbp-34h]
  int v30; // [rsp+DCh] [rbp-2Ch]
  struct _LUID_AND_ATTRIBUTES PrivilegesToDelete; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v32; // [rsp+F4h] [rbp-14h]
  __int64 v33; // [rsp+100h] [rbp-8h]
  __int64 v34; // [rsp+10Ch] [rbp+4h]
  __int64 v35; // [rsp+118h] [rbp+10h]
  __int64 v36; // [rsp+124h] [rbp+1Ch]
  __int64 v37; // [rsp+130h] [rbp+28h]
  __int64 v38; // [rsp+13Ch] [rbp+34h]
  __int64 v39; // [rsp+148h] [rbp+40h]

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  pSid = 0LL;
  TokenHandle = 0LL;
  NewTokenHandle = 0LL;
  Sid = 0LL;
  v21 = 0LL;
  v2 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  TokenInformation = 0LL;
  v3 = 0LL;
  *(_DWORD *)v25.Value = 0;
  *(_WORD *)&v25.Value[4] = 512;
  memset_0(&PrivilegesToDelete, 0, 0x6CuLL);
  v4 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0x13u, 0, 0, 0, 0, 0, 0, 0, &Sid);
  if ( v4 < 0 )
  {
    v5 = 730;
LABEL_3:
    v2 = v4 | 0x10000000;
LABEL_4:
    DoStackCapture(v2, v5);
    goto LABEL_40;
  }
  v4 = RtlAllocateAndInitializeSid(&v25, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &v21);
  if ( v4 < 0 )
  {
    v5 = 743;
    goto LABEL_3;
  }
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 8u, 0x38uLL);
  v3 = v7;
  if ( !v7 )
  {
    v2 = -2147024882;
    v5 = 749;
    goto LABEL_4;
  }
  *v7 = 2;
  v8 = Sid;
  v3[4] = 7;
  *((_QWORD *)v3 + 1) = v8;
  v9 = v21;
  v3[8] = 7;
  *((_QWORD *)v3 + 3) = v9;
  SetLastError(0);
  if ( !(unsigned int)LogonUserExExW(
                        gwszDwmAccountName,
                        L"Window Manager",
                        &unk_180009D08,
                        2LL,
                        4,
                        v3,
                        &TokenHandle,
                        0LL,
                        0LL,
                        0LL,
                        0LL) )
  {
    LastError = GetLastError();
    v5 = 769;
    v2 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v2 = LastError;
    if ( v2 >= 0 )
      v2 = -2003304445;
    goto LABEL_4;
  }
  SetLastError(0);
  if ( !ConvertStringSidToSidW(L"SI", &pSid) )
  {
    v11 = GetLastError();
    v5 = 771;
    v2 = (unsigned __int16)v11 | 0x80070000;
    if ( v11 <= 0 )
      v2 = v11;
    if ( v2 >= 0 )
      v2 = -2003304445;
    goto LABEL_4;
  }
  *(_QWORD *)&TokenInformation = pSid;
  DWORD2(TokenInformation) = 32;
  SetLastError(0);
  LengthSid = GetLengthSid(pSid);
  if ( !SetTokenInformation(TokenHandle, TokenIntegrityLevel, &TokenInformation, LengthSid + 16) )
  {
    v13 = GetLastError();
    v5 = 778;
    v2 = (unsigned __int16)v13 | 0x80070000;
    if ( v13 <= 0 )
      v2 = v13;
    if ( v2 >= 0 )
      v2 = -2003304445;
    goto LABEL_4;
  }
  NewState.Privileges[0].Luid = (LUID)30LL;
  v27 = 23LL;
  v29 = 33LL;
  NewState.PrivilegeCount = 3;
  NewState.Privileges[0].Attributes = 2;
  v28 = 2;
  v30 = 2;
  SetLastError(0);
  if ( !AdjustTokenPrivileges(TokenHandle, 0, &NewState, 0x28u, 0LL, 0LL) )
  {
    v14 = GetLastError();
    v5 = 793;
    v2 = (unsigned __int16)v14 | 0x80070000;
    if ( v14 <= 0 )
      v2 = v14;
    if ( v2 >= 0 )
      v2 = -2003304445;
    goto LABEL_4;
  }
  PrivilegesToDelete.Luid = (LUID)3LL;
  v32 = 5LL;
  v33 = 12LL;
  v34 = 19LL;
  v35 = 29LL;
  v36 = 34LL;
  v37 = 21LL;
  v38 = 25LL;
  v39 = 36LL;
  SetLastError(0);
  if ( !CreateRestrictedToken(TokenHandle, 0, 0, 0LL, 9u, &PrivilegesToDelete, 0, 0LL, &NewTokenHandle) )
  {
    v15 = GetLastError();
    v5 = 814;
    v2 = (unsigned __int16)v15 | 0x80070000;
    if ( v15 <= 0 )
      v2 = v15;
    if ( v2 >= 0 )
      v2 = -2003304445;
    goto LABEL_4;
  }
  *a1 = NewTokenHandle;
  NewTokenHandle = 0LL;
LABEL_40:
  if ( TokenHandle )
  {
    CloseHandle(TokenHandle);
    TokenHandle = 0LL;
  }
  if ( NewTokenHandle )
  {
    CloseHandle(NewTokenHandle);
    NewTokenHandle = 0LL;
  }
  if ( pSid )
    LocalFree(pSid);
  if ( v21 )
    RtlFreeSid(v21);
  if ( Sid )
    RtlFreeSid(Sid);
  if ( v3 )
  {
    v16 = GetProcessHeap();
    HeapFree(v16, 0, v3);
  }
  return (unsigned int)v2;
}
