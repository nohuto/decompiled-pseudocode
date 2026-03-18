/*
 * XREFs of UT_GetParentDCClipBox @ 0x1C00555D8
 * Callers:
 *     xxxBeginPaint @ 0x1C00552FC (xxxBeginPaint.c)
 *     xxxFillWindow @ 0x1C00B28A4 (xxxFillWindow.c)
 * Callees:
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     GetRect @ 0x1C00AFEE8 (GetRect.c)
 */

__int64 __fastcall UT_GetParentDCClipBox(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned int)GreGetClipBox(a2, a3, 1LL) == 1 )
    return 0LL;
  if ( !a1 || *(char *)(*(_QWORD *)(a1 + 152) + 84LL) >= 0 )
    return 1LL;
  GetRect(a1, v6, 17LL);
  return IntersectRect(a3, a3, v6);
}
