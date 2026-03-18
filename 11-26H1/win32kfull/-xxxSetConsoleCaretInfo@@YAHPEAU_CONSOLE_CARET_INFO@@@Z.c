/*
 * XREFs of ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x14022DB70
 * Callers:
 *     xxxConsoleControl @ 0x140278BE4 (xxxConsoleControl.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 */

__int64 __fastcall xxxSetConsoleCaretInfo(struct _CONSOLE_CARET_INFO *a1)
{
  __int64 v2; // rax
  struct tagWND *v3; // rbx
  __int64 v4; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = ValidateHwnd(*(_QWORD *)a1);
  v3 = (struct tagWND *)v2;
  if ( v2 && (v4 = *(_QWORD *)(v2 + 24)) != 0 )
  {
    *(_OWORD *)(v4 + 152) = *(_OWORD *)a1;
    *(_QWORD *)(v4 + 168) = *((_QWORD *)a1 + 2);
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)v3);
    xxxWindowEvent(0x800Bu, v3, -8, 0, 4);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    return 1LL;
  }
  else
  {
    UserSetLastError(87);
    return 0LL;
  }
}
