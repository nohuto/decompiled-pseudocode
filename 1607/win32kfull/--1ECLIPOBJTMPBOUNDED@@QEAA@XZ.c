/*
 * XREFs of ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C02AB0B4
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

void __fastcall ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED(ECLIPOBJTMPBOUNDED *this)
{
  RGNMEMOBJTMP::~RGNMEMOBJTMP((ECLIPOBJTMPBOUNDED *)((char *)this + 152));
}
