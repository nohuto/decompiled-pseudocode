/*
 * XREFs of NtUserValidateRect @ 0x140252F00
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     xxxValidateRect @ 0x14002C178 (xxxValidateRect.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??$ReadFromUser@UtagRECT@@@UmpDetail@@YA?AUtagRECT@@PEBU1@@Z @ 0x1402512A4 (--$ReadFromUser@UtagRECT@@@UmpDetail@@YA-AUtagRECT@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserValidateRect(__int64 a1, void *a2)
{
  int v4; // edi
  __int128 *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rbx
  ULONG_PTR BugCheckParameter3[4]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v10; // [rsp+50h] [rbp-28h] BYREF

  v10 = 0LL;
  v4 = 0;
  v5 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( a2 )
  {
    v10 = *UmpDetail::ReadFromUser<tagRECT>(BugCheckParameter3, a2);
    v5 = &v10;
    BugCheckParameter3[2] = (ULONG_PTR)&v10;
  }
  if ( !a1 )
  {
    v7 = 0LL;
LABEL_7:
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v7);
    v4 = xxxValidateRect(v7, (__int64)v5);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    goto LABEL_8;
  }
  v7 = ValidateHwnd(a1);
  if ( v7 )
    goto LABEL_7;
LABEL_8:
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
