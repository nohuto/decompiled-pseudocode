/*
 * XREFs of ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C0100A90
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxBeginPaint @ 0x1C00552FC (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x1C0100BCC (xxxEndPaint.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
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
