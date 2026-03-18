/*
 * XREFs of _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x14024F4BC
 * Callers:
 *     EditionSetForegroundCheckNoActivate @ 0x14024F4A0 (EditionSetForegroundCheckNoActivate.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x14008C1D8 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x14008D9DC (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z @ 0x1401B7DA0 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1402719BC (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 */

char __fastcall anonymous_namespace_::xxxSetForegroundCheckNoActivate(const struct tagWND *a1)
{
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  char v2; // di
  const struct tagWND *v3; // rcx
  __int64 v4; // rcx
  __int64 TopLevelWindow; // rax
  char v6; // bl
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  CompositionInputWindowUIOwner = a1;
  BugCheckParameter3[1] = 0LL;
  BugCheckParameter3[0] = -1LL;
  v2 = 0;
  if ( (unsigned int)IsIndependentInputWindow(a1) )
  {
    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v3);
    if ( !CompositionInputWindowUIOwner )
    {
LABEL_6:
      v6 = 0;
      goto LABEL_7;
    }
    v2 = 1;
  }
  if ( CompositionInputWindowUIOwner == (struct tagWND *)GetDesktopWindow((__int64)CompositionInputWindowUIOwner) )
    goto LABEL_6;
  if ( (*((_DWORD *)CompositionInputWindowUIOwner + 95) & 0x2000) != 0 )
    goto LABEL_6;
  TopLevelWindow = GetTopLevelWindow(v4);
  if ( !TopLevelWindow || (*(_BYTE *)(*(_QWORD *)(TopLevelWindow + 40) + 27LL) & 8) != 0 )
    goto LABEL_6;
  if ( v2 )
    Win32HMThreadLockBase<tagWND,0,1>::ManualLock<void>(BugCheckParameter3, (__int64)CompositionInputWindowUIOwner);
  v6 = xxxForceForegroundWindowNoRestoreFocus(CompositionInputWindowUIOwner, 0LL);
LABEL_7:
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  return v6;
}
