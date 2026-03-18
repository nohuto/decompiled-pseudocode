/*
 * XREFs of xxxFillWindow @ 0x1C0087340
 * Callers:
 *     NtUserFillWindow @ 0x1C0086260 (NtUserFillWindow.c)
 *     xxxDWP_EraseBkgnd @ 0x1C00F7390 (xxxDWP_EraseBkgnd.c)
 * Callees:
 *     xxxPaintRect @ 0x1C00863E8 (xxxPaintRect.c)
 *     UT_GetParentDCClipBox @ 0x1C0089F3C (UT_GetParentDCClipBox.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall xxxFillWindow(__int64 a1, __int64 *a2, HDC a3, HBRUSH a4)
{
  __int64 v4; // rbx
  RECT v9; // [rsp+30h] [rbp-48h] BYREF

  v4 = a1;
  if ( !a1 )
    v4 = (__int64)a2;
  v9 = 0LL;
  if ( (unsigned int)UT_GetParentDCClipBox(a2, a3, &v9) )
    return xxxPaintRect(v4, a2, a3, a4, &v9);
  else
    return 1LL;
}
