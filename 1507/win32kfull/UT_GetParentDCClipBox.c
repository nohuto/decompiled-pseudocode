/*
 * XREFs of UT_GetParentDCClipBox @ 0x1C0089F3C
 * Callers:
 *     xxxFillWindow @ 0x1C0087340 (xxxFillWindow.c)
 *     xxxBeginPaint @ 0x1C0089C38 (xxxBeginPaint.c)
 * Callees:
 *     GetRect @ 0x1C0087D10 (GetRect.c)
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 */

__int64 __fastcall UT_GetParentDCClipBox(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned int)GreGetClipBox(a2, a3, 1LL) == 1 )
    return 0LL;
  if ( !a1 || *(char *)(*(_QWORD *)(a1 + 152) + 84LL) >= 0 )
    return 1LL;
  GetRect(a1, (__int64)v6, 17);
  return IntersectRect(a3, a3, v6);
}
