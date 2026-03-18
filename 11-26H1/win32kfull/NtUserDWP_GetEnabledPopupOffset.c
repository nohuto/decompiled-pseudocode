/*
 * XREFs of NtUserDWP_GetEnabledPopupOffset @ 0x1401AF020
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     DWP_GetEnabledPopup @ 0x1401AF13C (DWP_GetEnabledPopup.c)
 */

__int64 __fastcall NtUserDWP_GetEnabledPopupOffset(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 EnabledPopup; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateHwnd(a1);
  v5 = 0LL;
  v6 = v3;
  if ( v3 )
  {
    Win32HM_LockIntoThread<0>(v2, v3, BugCheckParameter3);
    EnabledPopup = DWP_GetEnabledPopup(v6);
    if ( EnabledPopup )
      v5 = *(_QWORD *)(EnabledPopup + 48);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
