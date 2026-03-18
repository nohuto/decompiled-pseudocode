/*
 * XREFs of CitProcessForegroundChange @ 0x1C004B1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CitProcessForegroundChange(__int64 a1, struct tagWND *a2, struct tagPROCESSINFO *a3)
{
  struct tagPROCESSINFO *v4; // rcx
  struct tagPROCESSINFO *v5; // rax

  v4 = 0LL;
  if ( a1 )
  {
    v5 = *(struct tagPROCESSINFO **)(a1 + 376);
    if ( v5 )
      v4 = v5;
  }
  CitpProcessForegroundChange(v4, a2, a3, 0LL);
}
