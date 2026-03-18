/*
 * XREFs of ComposeWindowIfNeeded @ 0x1C008227C
 * Callers:
 *     xxxSetWindowStyle @ 0x1C0068470 (xxxSetWindowStyle.c)
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0092654 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     SetDisplayAffinity @ 0x1C0239014 (SetDisplayAffinity.c)
 * Callees:
 *     ComposeWindow @ 0x1C000B878 (ComposeWindow.c)
 *     IsDesktopWindow @ 0x1C0012B0C (IsDesktopWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C005B79C (DwmAsyncChildStyleChange.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0065EE4 (IsToplevelWindowDesktopComposed.c)
 */

__int64 __fastcall ComposeWindowIfNeeded(__int64 a1, int a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed(a1)
    || (unsigned int)IsDesktopWindow(a1) && (unsigned int)IsWindowDesktopComposed(v6) )
  {
    v9 = 5LL;
    if ( a2 )
      v9 = 13LL;
    v7 = ComposeWindow((struct tagWND *)a1, v9, v4, v5);
    v14 = (void *)ReferenceDwmApiPort(v11, v10, v12, v13);
    DwmAsyncChildStyleChange(v14, *(_QWORD *)a1, -16, *(_DWORD *)(a1 + 52));
  }
  else
  {
    return 4063234;
  }
  return v7;
}
