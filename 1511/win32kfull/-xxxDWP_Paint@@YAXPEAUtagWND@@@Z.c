/*
 * XREFs of ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00C80C4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0041E08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxBeginPaint @ 0x1C0067C4C (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x1C00C81F8 (xxxEndPaint.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall xxxDWP_Paint(struct tagWND *a1)
{
  _BYTE v2[80]; // [rsp+20h] [rbp-68h] BYREF

  if ( (*((_BYTE *)a1 + 44) & 4) == 0 || IsRectEmptyInl((const struct tagRECT *)a1 + 8) )
  {
    if ( xxxBeginPaint(a1, (__int64)v2) )
      xxxEndPaint(a1);
  }
}
