/*
 * XREFs of xxxEnableWindow @ 0x1C0090D00
 * Callers:
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     xxxEnableScrollBar @ 0x1C014D0EC (xxxEnableScrollBar.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C0090D48 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     IsNonImmersiveBand @ 0x1C00910EC (IsNonImmersiveBand.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01D3168 (ExemptedFromImmersiveRestrictions.c)
 */

__int64 __fastcall xxxEnableWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax

  v4 = a2;
  if ( (unsigned int)IsNonImmersiveBand(a1, a2, a3, a4) )
    return xxxEnableWindowWorker(a1, v4);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  if ( !(unsigned int)IsDesktopApp(CurrentProcessWin32Process)
    || (unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent) )
  {
    return xxxEnableWindowWorker(a1, v4);
  }
  UserSetLastError(5);
  return (*((unsigned __int8 *)a1 + 55) >> 3) & 1;
}
