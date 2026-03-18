/*
 * XREFs of ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C02A9C1C
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

void __fastcall ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED(ECLIPOBJTMPBOUNDED *this)
{
  RGNMEMOBJTMP::~RGNMEMOBJTMP((ECLIPOBJTMPBOUNDED *)((char *)this + 152));
}
