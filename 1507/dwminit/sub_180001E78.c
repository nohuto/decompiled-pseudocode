/*
 * XREFs of sub_180001E78 @ 0x180001E78
 * Callers:
 *     StartAddress @ 0x1800028C0 (StartAddress.c)
 * Callees:
 *     sub_180003A80 @ 0x180003A80 (sub_180003A80.c)
 *     __security_check_cookie @ 0x1800063A0 (__security_check_cookie.c)
 *     memset @ 0x180007606 (memset.c)
 */

__int64 __fastcall sub_180001E78(void **a1)
{
  int v2; // ebx
  _DWORD *v3; // rdi
  NTSTATUS v4; // eax
  __int64 v5; // rdx
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
  struct _LUID_AND_ATTRIBUTES PrivilegesToDelete[8]; // [rsp+E8h] [rbp-20h] BYREF

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
  memset(PrivilegesToDelete, 0, sizeof(PrivilegesToDelete));
  v4 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0x13u, 0, 0, 0, 0, 0, 0, 0, &Sid);
  if ( v4 < 0 )
  {
    v5 = 649LL;
    v2 = v4 | 0x10000000;
LABEL_21:
    sub_180003A80((unsigned int)v2, v5);
    goto LABEL_23;
  }
  v6 = RtlAllocateAndInitializeSid(&v21, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &v18);
  if ( v6 < 0 )
  {
    v5 = 662LL;
    v2 = v6 | 0x10000000;
    goto LABEL_21;
  }
  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 8u, 0x38uLL);
  v3 = v8;
  if ( !v8 )
  {
    v2 = -2147024882;
    v5 = 668LL;
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
                        Buffer,
                        L"Window Manager",
                        &unk_1800089CC,
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
    v5 = 688LL;
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
    v5 = 690LL;
    goto LABEL_17;
  }
  *(_QWORD *)&TokenInformation = pSid;
  DWORD2(TokenInformation) = 32;
  SetLastError(0);
  LengthSid = GetLengthSid(pSid);
  if ( !SetTokenInformation(TokenHandle, TokenIntegrityLevel, &TokenInformation, LengthSid + 16) )
  {
    LastError = GetLastError();
    v5 = 697LL;
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
    v5 = 712LL;
    goto LABEL_17;
  }
  PrivilegesToDelete[0].Luid = (LUID)3LL;
  PrivilegesToDelete[1].Luid = (LUID)5LL;
  PrivilegesToDelete[2].Luid = (LUID)12LL;
  PrivilegesToDelete[3].Luid = (LUID)19LL;
  PrivilegesToDelete[4].Luid = (LUID)29LL;
  PrivilegesToDelete[5].Luid = (LUID)34LL;
  PrivilegesToDelete[6].Luid = (LUID)21LL;
  PrivilegesToDelete[7].Luid = (LUID)25LL;
  SetLastError(0);
  if ( !CreateRestrictedToken(TokenHandle, 0, 0, 0LL, 8u, PrivilegesToDelete, 0, 0LL, &NewTokenHandle) )
  {
    LastError = GetLastError();
    v5 = 732LL;
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
