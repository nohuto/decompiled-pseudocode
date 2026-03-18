/*
 * XREFs of NtUserSetFocus @ 0x14012B310
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x14012B3C8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

__int64 __fastcall NtUserSetFocus(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  struct tagWND *v4; // rdi
  struct tagTHREADINFO *v5; // rax
  struct tagWND *v6; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  v3 = 0LL;
  if ( a1 )
  {
    v4 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v4 )
      goto LABEL_8;
  }
  else
  {
    v4 = 0LL;
  }
  v5 = PtiCurrent(v2);
  BugCheckParameter3[0] = *((_QWORD *)v5 + 56);
  *((_QWORD *)v5 + 56) = BugCheckParameter3;
  BugCheckParameter3[1] = (ULONG_PTR)v4;
  if ( v4 )
    HMLockObject(v4);
  v6 = xxxSetFocus(v4);
  if ( v6 )
    v3 = *(_QWORD *)v6;
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
LABEL_8:
  UserSessionSwitchLeaveCrit(v2);
  return v3;
}
