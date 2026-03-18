/*
 * XREFs of ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C02AAB18
 * Callers:
 *     NtGdiEngGradientFill @ 0x1C02AC5A0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02AC970 (NtGdiEngLineTo.c)
 *     NtGdiEngStretchBlt @ 0x1C02AD1B0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02AD610 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02ADB60 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02ADEC0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02AE1D0 (NtGdiEngTextOut.c)
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
