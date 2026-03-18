/*
 * XREFs of ?_HitTestRejectionRegion@PalmRejection@@YAHPEAXUtagPOINT@@@Z @ 0x1C0229374
 * Callers:
 *     ?ProcessInput@PalmRejection@@YAHPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C0228FC8 (-ProcessInput@PalmRejection@@YAHPEAUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?_GetNonRejectionRegion@PalmRejection@@YA?AUtagRECT@@PEAX@Z @ 0x1C0229304 (-_GetNonRejectionRegion@PalmRejection@@YA-AUtagRECT@@PEAX@Z.c)
 */

__int64 __fastcall PalmRejection::_HitTestRejectionRegion(
        struct tagRECT *retstr,
        unsigned __int64 a2,
        struct tagPOINT a3)
{
  unsigned int v3; // ebx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  if ( SHIDWORD(a2) > (int)gPalmRejectTopEdgeThr )
  {
    v5 = (__int128)*PalmRejection::_GetNonRejectionRegion((PalmRejection *)&v5, retstr, *(void **)&a3);
    LOBYTE(v3) = !PtInRect(&v5, a2);
  }
  return v3;
}
