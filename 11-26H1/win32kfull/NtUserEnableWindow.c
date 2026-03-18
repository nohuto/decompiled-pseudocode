/*
 * XREFs of NtUserEnableWindow @ 0x14015E250
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxEnableWindow @ 0x14015E320 (xxxEnableWindow.c)
 */

__int64 __fastcall NtUserEnableWindow(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // esi
  struct tagWND *v6; // rdi
  int v7; // edx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateHwnd(a1);
  v5 = 0;
  v6 = (struct tagWND *)v3;
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 40);
    v7 = *(_WORD *)(v4 + 42) & 0x2FFF;
    if ( v7 != 669 && v7 != 671 )
    {
      BugCheckParameter3[0] = *(_QWORD *)(v2 + 448);
      *(_QWORD *)(v2 + 448) = BugCheckParameter3;
      BugCheckParameter3[1] = v3;
      HMLockObject(v3);
      v5 = xxxEnableWindow(v6);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
