/*
 * XREFs of ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00EF454
 * Callers:
 *     zzzComposeDesktop @ 0x1C0097524 (zzzComposeDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C00EF304 (zzzDecomposeDesktop.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsWindowComposedOnDesktop(struct tagWND *const a1, struct tagDESKTOP *const a2)
{
  struct tagDESKTOP *v2; // r8
  _BOOL8 result; // rax

  v2 = (struct tagDESKTOP *)*((_QWORD *)a1 + 3);
  result = 0LL;
  if ( v2 )
  {
    if ( v2 == a2 )
      return (*((_BYTE *)a1 + 288) & 0x20) != 0;
  }
  return result;
}
