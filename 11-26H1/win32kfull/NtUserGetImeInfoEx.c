/*
 * XREFs of NtUserGetImeInfoEx @ 0x1401D9180
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?GetImeInfoEx@@YAHPEAUtagWINDOWSTATION@@PEAUtagIMEINFOEX@@W4_IMEINFOEXCLASS@@@Z @ 0x1401D93B0 (-GetImeInfoEx@@YAHPEAUtagWINDOWSTATION@@PEAUtagIMEINFOEX@@W4_IMEINFOEXCLASS@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtUserGetImeInfoEx(volatile void *a1, unsigned int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  _OWORD *v5; // rax
  _OWORD *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rcx
  int ImeInfo; // ebx
  _OWORD *v12; // rcx
  _OWORD *v13; // rdx
  _QWORD v16[3]; // [rsp+28h] [rbp-190h] BYREF
  _BYTE v17[352]; // [rsp+40h] [rbp-178h] BYREF

  memset_0(v17, 0, sizeof(v17));
  EnterLeaveCritShared::EnterLeaveCritShared(v16, 1LL);
  if ( (**(_DWORD **)(W32GetUserSessionState(v4, v3) + 19904) & 4) != 0 )
  {
    ProbeForWrite(a1, 0x160uLL, 1u);
    v5 = a1;
    v6 = v17;
    v7 = 2LL;
    v8 = 2LL;
    do
    {
      *v6 = *v5;
      v6[1] = v5[1];
      v6[2] = v5[2];
      v6[3] = v5[3];
      v6[4] = v5[4];
      v6[5] = v5[5];
      v6[6] = v5[6];
      v6 += 8;
      *(v6 - 1) = v5[7];
      v5 += 8;
      --v8;
    }
    while ( v8 );
    *v6 = *v5;
    v6[1] = v5[1];
    v6[2] = v5[2];
    v6[3] = v5[3];
    v6[4] = v5[4];
    v6[5] = v5[5];
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v10 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v10 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)CurrentProcessWin32Process >> 64) & CurrentProcessWin32Process;
    ImeInfo = GetImeInfoEx(*(_QWORD *)(v10 + 656), v17, a2);
    LODWORD(v16[0]) = ImeInfo;
    v12 = a1;
    v13 = v17;
    do
    {
      *v12 = *v13;
      v12[1] = v13[1];
      v12[2] = v13[2];
      v12[3] = v13[3];
      v12[4] = v13[4];
      v12[5] = v13[5];
      v12[6] = v13[6];
      v12 += 8;
      *(v12 - 1) = v13[7];
      v13 += 8;
      --v7;
    }
    while ( v7 );
    *v12 = *v13;
    v12[1] = v13[1];
    v12[2] = v13[2];
    v12[3] = v13[3];
    v12[4] = v13[4];
    v12[5] = v13[5];
  }
  else
  {
    UserSetLastError(120);
    ImeInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v12);
  return ImeInfo;
}
