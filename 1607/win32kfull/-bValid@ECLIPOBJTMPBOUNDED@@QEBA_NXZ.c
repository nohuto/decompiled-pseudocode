/*
 * XREFs of ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C02AC06C
 * Callers:
 *     NtGdiEngGradientFill @ 0x1C02ADD60 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02AE150 (NtGdiEngLineTo.c)
 *     NtGdiEngStretchBlt @ 0x1C02AE9C0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02AEE10 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02AF350 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02AF6D0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02AF9F0 (NtGdiEngTextOut.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ECLIPOBJTMPBOUNDED::bValid(ECLIPOBJTMPBOUNDED *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 176) || *((_QWORD *)this + 21) )
    return 1LL;
  return result;
}
