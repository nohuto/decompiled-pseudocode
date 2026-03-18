/*
 * XREFs of xxxEnableWindow @ 0x1C0045940
 * Callers:
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     xxxEnableScrollBar @ 0x1C0124078 (xxxEnableScrollBar.c)
 * Callees:
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C0045988 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     IsNonImmersiveBand @ 0x1C0045A6C (IsNonImmersiveBand.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01D14F0 (ExemptedFromImmersiveRestrictions.c)
 */

__int64 __fastcall xxxEnableWindow(struct tagWND *a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx

  v3 = a2;
  if ( (unsigned int)IsNonImmersiveBand(a1, a2, a3) )
    return xxxEnableWindowWorker(a1, v3);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
  if ( !(unsigned int)IsDesktopApp(CurrentProcessWin32Process, v8)
    || (unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent) )
  {
    return xxxEnableWindowWorker(a1, v3);
  }
  UserSetLastError(5LL);
  return (*((unsigned __int8 *)a1 + 55) >> 3) & 1;
}
