/*
 * XREFs of ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x180002000
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002A90 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?DoStackCapture@@YAXJI@Z @ 0x180003D40 (-DoStackCapture@@YAXJI@Z.c)
 *     __security_check_cookie @ 0x1800067F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180007B86 (memset_0.c)
 */

__int64 __fastcall LogonDwmAccountAndSetTokenIntegrityLevel(void **a1)
{
  int v2; // ebx
  _DWORD *v3; // rdi
  NTSTATUS v4; // eax
  unsigned int v5; // edx
  NTSTATUS v6; // eax
  HANDLE ProcessHeap; // rax
  _DWORD *v8; // rax
  PSID v9; // rax
  PSID v10; // rax
  signed int LastError; // eax
  DWORD LengthSid; // eax
  HANDLE v13; // rax
  HANDLE TokenHandle; // [rsp+70h] [rbp-98h] BYREF
  void *NewTokenHandle; // [rsp+78h] [rbp-90h] BYREF
  PSID pSid; // [rsp+80h] [rbp-88h] BYREF
  PSID v18; // [rsp+88h] [rbp-80h] BYREF
  PSID Sid; // [rsp+90h] [rbp-78h] BYREF
  __int128 TokenInformation; // [rsp+98h] [rbp-70h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v21; // [rsp+A8h] [rbp-60h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+B0h] [rbp-58h] BYREF
  _TOKEN_PRIVILEGES NewState; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v24; // [rsp+C8h] [rbp-40h]
  int v25; // [rsp+D0h] [rbp-38h]
  __int64 v26; // [rsp+D4h] [rbp-34h]
  int v27; // [rsp+DCh] [rbp-2Ch]
  struct _LUID_AND_ATTRIBUTES PrivilegesToDelete; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v29; // [rsp+F4h] [rbp-14h]
  __int64 v30; // [rsp+100h] [rbp-8h]
  __int64 v31; // [rsp+10Ch] [rbp+4h]
  __int64 v32; // [rsp+118h] [rbp+10h]
  __int64 v33; // [rsp+124h] [rbp+1Ch]
  __int64 v34; // [rsp+130h] [rbp+28h]
  __int64 v35; // [rsp+13Ch] [rbp+34h]

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  pSid = 0LL;
  TokenHandle = 0LL;
  NewTokenHandle = 0LL;
  Sid = 0LL;
  v18 = 0LL;
  v2 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  TokenInformation = 0LL;
  v3 = 0LL;
  *(_DWORD *)v21.Value = 0;
  *(_WORD *)&v21.Value[4] = 512;
  PrivilegesToDelete.Luid.LowPart = 0;
  memset_0(&PrivilegesToDelete.Luid.HighPart, 0, 0x5CuLL);
  v4 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0x13u, 0, 0, 0, 0, 0, 0, 0, &Sid);
  if ( v4 < 0 )
  {
    v5 = 708;
    v2 = v4 | 0x10000000;
LABEL_21:
    DoStackCapture(v2, v5);
    goto LABEL_23;
  }
  v6 = RtlAllocateAndInitializeSid(&v21, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &v18);
  if ( v6 < 0 )
  {
    v5 = 721;
    v2 = v6 | 0x10000000;
    goto LABEL_21;
  }
  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 8u, 0x38uLL);
  v3 = v8;
  if ( !v8 )
  {
    v2 = -2147024882;
    v5 = 727;
    goto LABEL_21;
  }
  *v8 = 2;
  v9 = Sid;
  v3[4] = 7;
  *((_QWORD *)v3 + 1) = v9;
  v10 = v18;
  v3[8] = 7;
  *((_QWORD *)v3 + 3) = v10;
  SetLastError(0);
  if ( !(unsigned int)LogonUserExExW(
                        gwszDwmAccountName,
                        L"Window Manager",
                        &unk_180008A7C,
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
    v5 = 747;
LABEL_17:
    v2 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v2 = LastError;
    if ( v2 >= 0 )
      v2 = -2003304445;
    goto LABEL_21;
  }
  SetLastError(0);
  if ( !ConvertStringSidToSidW(L"SI", &pSid) )
  {
    LastError = GetLastError();
    v5 = 749;
    goto LABEL_17;
  }
  *(_QWORD *)&TokenInformation = pSid;
  DWORD2(TokenInformation) = 32;
  SetLastError(0);
  LengthSid = GetLengthSid(pSid);
  if ( !SetTokenInformation(TokenHandle, TokenIntegrityLevel, &TokenInformation, LengthSid + 16) )
  {
    LastError = GetLastError();
    v5 = 756;
    goto LABEL_17;
  }
  NewState.Privileges[0].Luid = (LUID)30LL;
  v24 = 23LL;
  v26 = 33LL;
  NewState.PrivilegeCount = 3;
  NewState.Privileges[0].Attributes = 2;
  v25 = 2;
  v27 = 2;
  SetLastError(0);
  if ( !AdjustTokenPrivileges(TokenHandle, 0, &NewState, 0x28u, 0LL, 0LL) )
  {
    LastError = GetLastError();
    v5 = 771;
    goto LABEL_17;
  }
  PrivilegesToDelete.Luid = (LUID)3LL;
  v29 = 5LL;
  v30 = 12LL;
  v31 = 19LL;
  v32 = 29LL;
  v33 = 34LL;
  v34 = 21LL;
  v35 = 25LL;
  SetLastError(0);
  if ( !CreateRestrictedToken(TokenHandle, 0, 0, 0LL, 8u, &PrivilegesToDelete, 0, 0LL, &NewTokenHandle) )
  {
    LastError = GetLastError();
    v5 = 791;
    goto LABEL_17;
  }
  *a1 = NewTokenHandle;
  NewTokenHandle = 0LL;
LABEL_23:
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
  if ( v18 )
    RtlFreeSid(v18);
  if ( Sid )
    RtlFreeSid(Sid);
  if ( v3 )
  {
    v13 = GetProcessHeap();
    HeapFree(v13, 0, v3);
  }
  return (unsigned int)v2;
}
