/*
 * XREFs of xxxFillWindow @ 0x1401279B4
 * Callers:
 *     xxxDWP_EraseBkgnd @ 0x1401277E8 (xxxDWP_EraseBkgnd.c)
 *     NtUserFillWindow @ 0x140205170 (NtUserFillWindow.c)
 * Callees:
 *     xxxPaintRect @ 0x140127520 (xxxPaintRect.c)
 *     UT_GetParentDCClipBox @ 0x14012962C (UT_GetParentDCClipBox.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxFillWindow(struct tagWND *a1, __int64 a2, HDC a3, HBRUSH a4)
{
  struct tagWND *v8; // rcx
  RECT v10; // [rsp+30h] [rbp-48h] BYREF

  v10 = 0LL;
  if ( !(unsigned int)UT_GetParentDCClipBox(a2, a3, &v10) )
    return 1LL;
  v8 = (struct tagWND *)a2;
  if ( a1 )
    v8 = a1;
  return xxxPaintRect(v8, a2, a3, a4, &v10);
}
