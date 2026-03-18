/*
 * XREFs of xxxDWP_EraseBkgnd @ 0x1C00B2848
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxFillWindow @ 0x1C00B28A4 (xxxFillWindow.c)
 *     xxxInternalPaintDesktop @ 0x1C0100C4C (xxxInternalPaintDesktop.c)
 */

__int64 __fastcall xxxDWP_EraseBkgnd(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // r9

  if ( a2 != 20 )
  {
    if ( a2 == 39 )
    {
      if ( (*(_BYTE *)(a1 + 55) & 0x40) != 0 )
        return 0LL;
      xxxInternalPaintDesktop(a1, a3, 1LL);
    }
    return 1LL;
  }
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 128LL);
  if ( v3 )
  {
    if ( v3 <= 0x1F )
      v3 = *(_QWORD *)(gpsi + 8 * v3 + 5080);
    xxxFillWindow(a1, a1, a3, v3);
    return 1LL;
  }
  return 0LL;
}
