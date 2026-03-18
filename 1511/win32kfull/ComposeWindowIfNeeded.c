/*
 * XREFs of ComposeWindowIfNeeded @ 0x1C007A3EC
 * Callers:
 *     xxxSetWindowStyle @ 0x1C0058020 (xxxSetWindowStyle.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     SetVisible @ 0x1C007A120 (SetVisible.c)
 *     SetDisplayAffinity @ 0x1C0239428 (SetDisplayAffinity.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C00569D8 (IsToplevelWindowDesktopComposed.c)
 *     IsDesktopWindow @ 0x1C007AA1C (IsDesktopWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C0080178 (DwmAsyncChildStyleChange.c)
 *     ComposeWindow @ 0x1C0080214 (ComposeWindow.c)
 */

__int64 __fastcall ComposeWindowIfNeeded(struct tagWND *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1)
    || (unsigned int)IsDesktopWindow(a1) && (unsigned int)IsWindowDesktopComposed(v2) )
  {
    v3 = ComposeWindow(a1);
    v9 = (void *)ReferenceDwmApiPort(v6, v5, v7, v8);
    DwmAsyncChildStyleChange(v9);
  }
  else
  {
    return 4063234;
  }
  return v3;
}
