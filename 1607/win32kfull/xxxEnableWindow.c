/*
 * XREFs of xxxEnableWindow @ 0x1C011B380
 * Callers:
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxEnableScrollBar @ 0x1C00FFF6C (xxxEnableScrollBar.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     IsNonImmersiveBand @ 0x1C00AC030 (IsNonImmersiveBand.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C011B3C8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01CAF0C (ExemptedFromImmersiveRestrictions.c)
 */

__int64 __fastcall xxxEnableWindow(struct tagWND *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  if ( IsNonImmersiveBand((__int64)a1) )
    return xxxEnableWindowWorker(a1, a2);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v4);
  if ( !(unsigned int)IsDesktopApp(CurrentProcessWin32Process, v8, v9, v10)
    || (unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent) )
  {
    return xxxEnableWindowWorker(a1, a2);
  }
  UserSetLastError(5LL);
  return (*((unsigned __int8 *)a1 + 55) >> 3) & 1;
}
