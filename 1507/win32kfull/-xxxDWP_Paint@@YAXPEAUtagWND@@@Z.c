/*
 * XREFs of ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00798F0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxEndPaint @ 0x1C0079A28 (xxxEndPaint.c)
 *     xxxBeginPaint @ 0x1C0089C38 (xxxBeginPaint.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall xxxDWP_Paint(struct tagWND *a1)
{
  if ( (*((_BYTE *)a1 + 44) & 4) == 0 || (unsigned int)IsRectEmptyInl((const struct tagRECT *)a1 + 8) )
  {
    if ( xxxBeginPaint(a1) )
      xxxEndPaint(a1);
  }
}
