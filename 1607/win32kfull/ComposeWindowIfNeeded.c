/*
 * XREFs of ComposeWindowIfNeeded @ 0x1C0061A28
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006CB00 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzComposeDesktop @ 0x1C0097524 (zzzComposeDesktop.c)
 *     SetVisible @ 0x1C00A0D80 (SetVisible.c)
 *     xxxSetWindowStyle @ 0x1C00A1758 (xxxSetWindowStyle.c)
 *     SetDisplayAffinity @ 0x1C0231484 (SetDisplayAffinity.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C0063530 (IsDesktopWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00723B0 (IsToplevelWindowDesktopComposed.c)
 *     DwmAsyncChildStyleChange @ 0x1C00965BC (DwmAsyncChildStyleChange.c)
 *     ComposeWindow @ 0x1C0096658 (ComposeWindow.c)
 */

__int64 __fastcall ComposeWindowIfNeeded(struct tagWND *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  void *v5; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed()
    || (unsigned int)IsDesktopWindow(a1) && (unsigned int)IsWindowDesktopComposed(v2) )
  {
    v3 = ComposeWindow(a1);
    v5 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v5);
  }
  else
  {
    return 4063234;
  }
  return v3;
}
