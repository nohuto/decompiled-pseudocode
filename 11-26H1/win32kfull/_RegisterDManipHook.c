/*
 * XREFs of _RegisterDManipHook @ 0x1402935E0
 * Callers:
 *     NtUserRegisterDManipHook @ 0x1402572F0 (NtUserRegisterDManipHook.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GetHmodTableIndex @ 0x140026E70 (GetHmodTableIndex.c)
 *     AddHmodDependency @ 0x140027098 (AddHmodDependency.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14013EFD0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     RtlStringCopyWorkerW @ 0x1401531D0 (RtlStringCopyWorkerW.c)
 *     Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline @ 0x140250434 (Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1402874CC (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 RegisterDManipHook()
{
  __int64 v0; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rax
  bool v3; // zf
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 UserSessionState; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  const wchar_t *NtSystemRoot; // rax
  size_t *v15; // r8
  __int64 v16; // rdx
  const unsigned __int16 *v17; // r8
  int HmodTableIndex; // eax
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  size_t v25; // [rsp+20h] [rbp-238h]
  wchar_t pszDest[264]; // [rsp+30h] [rbp-228h] BYREF

  if ( (unsigned __int8)IsRestricted(KeGetCurrentThread()) )
    goto LABEL_26;
  if ( (unsigned int)Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v0);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( *(_DWORD *)(CurrentProcessWin32Process + 764) != luidSystem[0] )
      goto LABEL_26;
    v2 = PsGetCurrentProcessWin32Process(*(_QWORD *)luidSystem);
    if ( v2 )
      v2 &= -(__int64)(*(_QWORD *)v2 != 0LL);
    if ( *(_DWORD *)(v2 + 768) != luidSystem[1] )
      goto LABEL_26;
    v3 = (unsigned __int8)HasTcbPrivilege() == 0;
  }
  else
  {
    v6 = PsGetCurrentProcessWin32Process(v0);
    if ( v6 )
      v6 &= -(__int64)(*(_QWORD *)v6 != 0LL);
    if ( *(_DWORD *)(v6 + 764) != luidSystem[0] )
      goto LABEL_26;
    v7 = PsGetCurrentProcessWin32Process(*(_QWORD *)luidSystem);
    if ( v7 )
      v7 &= -(__int64)(*(_QWORD *)v7 != 0LL);
    v8 = luidSystem[1];
    if ( *(_DWORD *)(v7 + 768) != (_DWORD)v8 )
      goto LABEL_26;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)luidSystem, v8);
    v3 = (unsigned int)IsPrivileged(UserSessionState + 42568) == 0;
  }
  if ( v3 )
  {
LABEL_26:
    v19 = 5;
    goto LABEL_27;
  }
  v10 = W32GetUserSessionState(v5, v4);
  NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot(v12, v11, v13);
  if ( RtlStringCopyWorkerW(pszDest, 0x82uLL, v15, NtSystemRoot, v25) < 0 || RtlStringCbCatW(pszDest, v16, v17) < 0 )
  {
    v19 = 3;
    goto LABEL_27;
  }
  RtlStringCchCopyW((char *)(v10 + 65260), 260LL, (char *)pszDest);
  HmodTableIndex = GetHmodTableIndex((__int64)pszDest);
  *(_DWORD *)(v10 + 65256) = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v19 = 126;
LABEL_27:
    UserSetLastError(v19);
    return 0LL;
  }
  AddHmodDependency(HmodTableIndex);
  v21 = PsGetCurrentProcessWin32Process(v20);
  if ( v21 )
  {
    v23 = -*(_QWORD *)v21;
    v22 = -(__int64)(*(_QWORD *)v21 != 0LL);
    v21 &= v22;
  }
  *(_QWORD *)(v10 + 64176) = v21;
  _InterlockedOr(*(volatile signed __int32 **)(W32GetUserSessionState(v23, v22) + 19904), 0x10u);
  return 1LL;
}
