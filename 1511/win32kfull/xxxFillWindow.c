/*
 * XREFs of xxxFillWindow @ 0x1C00E79A8
 * Callers:
 *     xxxDWP_EraseBkgnd @ 0x1C00E76E0 (xxxDWP_EraseBkgnd.c)
 *     NtUserFillWindow @ 0x1C00E78B0 (NtUserFillWindow.c)
 * Callees:
 *     UT_GetParentDCClipBox @ 0x1C0067F7C (UT_GetParentDCClipBox.c)
 *     xxxPaintRect @ 0x1C00E7A28 (xxxPaintRect.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxFillWindow(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int128 v9; // [rsp+30h] [rbp-48h] BYREF

  v4 = a1;
  if ( !a1 )
    v4 = a2;
  v9 = 0LL;
  if ( (unsigned int)UT_GetParentDCClipBox(a2, a3, (__int64)&v9) )
    return xxxPaintRect(v4, a2, a3, a4, &v9);
  else
    return 1LL;
}
