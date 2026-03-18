/*
 * XREFs of DecomposeWindowIfNeeded @ 0x1C000B824
 * Callers:
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0092654 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ComposeWindow @ 0x1C000B878 (ComposeWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C005B79C (DwmAsyncChildStyleChange.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0065EE4 (IsToplevelWindowDesktopComposed.c)
 */

__int64 __fastcall DecomposeWindowIfNeeded(struct tagWND *a1)
{
  unsigned int v2; // edi
  void *v3; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed() )
  {
    v2 = ComposeWindow(a1);
    v3 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v3);
  }
  else
  {
    return 4063234;
  }
  return v2;
}
