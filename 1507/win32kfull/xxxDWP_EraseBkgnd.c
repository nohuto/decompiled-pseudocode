/*
 * XREFs of xxxDWP_EraseBkgnd @ 0x1C00F7390
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxFillWindow @ 0x1C0087340 (xxxFillWindow.c)
 *     xxxInternalPaintDesktop @ 0x1C015135C (xxxInternalPaintDesktop.c)
 */

__int64 __fastcall xxxDWP_EraseBkgnd(__int64 a1, int a2, HDC a3)
{
  HBRUSH v3; // r9

  if ( a2 == 20 )
  {
    v3 = *(HBRUSH *)(*(_QWORD *)(a1 + 152) + 128LL);
    if ( !v3 )
      return 0LL;
    if ( (unsigned __int64)v3 <= 0x1F )
      v3 = *(HBRUSH *)(gpsi + 8LL * (_QWORD)v3 + 3688);
    xxxFillWindow(a1, (__int64 *)a1, a3, v3);
  }
  else if ( a2 == 39 )
  {
    if ( (*(_BYTE *)(a1 + 55) & 0x40) != 0 )
      return 0LL;
    xxxInternalPaintDesktop(a1, a3, 1LL);
  }
  return 1LL;
}
