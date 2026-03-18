/*
 * XREFs of DecomposeWindowIfNeeded @ 0x1C0096460
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006CB00 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C00723B0 (IsToplevelWindowDesktopComposed.c)
 *     DwmAsyncChildStyleChange @ 0x1C00965BC (DwmAsyncChildStyleChange.c)
 *     ComposeWindow @ 0x1C0096658 (ComposeWindow.c)
 */

__int64 __fastcall DecomposeWindowIfNeeded(struct tagWND *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
  {
    v2 = ComposeWindow(a1);
    v7 = (void *)ReferenceDwmApiPort(v4, v3, v5, v6);
    DwmAsyncChildStyleChange(v7);
  }
  else
  {
    return 4063234;
  }
  return v2;
}
