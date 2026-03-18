/*
 * XREFs of ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x14012A0D0
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxBeginPaint @ 0x14012A7C4 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x14012B900 (xxxEndPaint.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall xxxDWP_Paint(struct tagWND *a1)
{
  __int64 v2; // rcx
  _BYTE v3[80]; // [rsp+20h] [rbp-68h] BYREF

  memset_0(v3, 0, 0x48uLL);
  v2 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v2 + 20) & 4) == 0 || IsRectEmptyInl((const struct tagRECT *)(v2 + 104)) )
  {
    if ( xxxBeginPaint(a1) )
      xxxEndPaint(a1);
  }
}
