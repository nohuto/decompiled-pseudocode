/*
 * XREFs of NtUserSetForegroundWindowForApplication @ 0x1402BCBD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140179C24 (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 */

__int64 __fastcall NtUserSetForegroundWindowForApplication(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi
  const struct tagWND *v6; // rdi
  int v7; // edx
  __int64 v8; // rdx
  int IsPartOfCompositeApplication; // eax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateHwnd(a1);
  v5 = 0LL;
  v6 = (const struct tagWND *)v3;
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 40);
    v7 = *(_WORD *)(v4 + 42) & 0x2FFF;
    if ( v7 != 669 && v7 != 671 )
    {
      Win32HM_LockIntoThread<0>(v2, v3, BugCheckParameter3);
      IsPartOfCompositeApplication = CoreWindowProp::IsPartOfCompositeApplication(v6, v8);
      v5 = (unsigned __int8)xxxSetForegroundWindowWithOptions(
                              (__int64)v6,
                              2LL,
                              IsPartOfCompositeApplication != 0 ? 0x40 : 0,
                              1);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
