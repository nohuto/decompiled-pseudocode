/*
 * XREFs of ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0097780
 * Callers:
 *     zzzComposeDesktop @ 0x1C0097524 (zzzComposeDesktop.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C0063530 (IsDesktopWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C0065CC0 (IsWindowBeingDestroyed.c)
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall ShouldComposeWindow(struct tagWND *const a1, struct tagDESKTOP *const a2)
{
  struct tagDESKTOP *v2; // rax
  unsigned int v3; // r9d
  __int64 v5; // rcx
  __int64 v6; // r10

  v2 = (struct tagDESKTOP *)*((_QWORD *)a1 + 3);
  v3 = 0;
  if ( v2
    && v2 == a2
    && !(unsigned int)IsWindowBeingDestroyed((__int64)a1)
    && (*(_BYTE *)(v5 + 55) & 0x10) != 0
    && ((unsigned int)IsTopLevelWindow(v5) || (unsigned int)IsDesktopWindow(v6)) )
  {
    return 1;
  }
  return v3;
}
