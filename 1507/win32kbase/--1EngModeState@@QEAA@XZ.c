/*
 * XREFs of ??1EngModeState@@QEAA@XZ @ 0x1C00BDBEC
 * Callers:
 *     EngSetRectRgn @ 0x1C0010FA0 (EngSetRectRgn.c)
 *     EngDeleteRgn @ 0x1C0011020 (EngDeleteRgn.c)
 *     EngCreateRectRgn @ 0x1C0011B10 (EngCreateRectRgn.c)
 *     EngCombineRgn @ 0x1C0083FA0 (EngCombineRgn.c)
 *     EngGetRgnData @ 0x1C0084E00 (EngGetRgnData.c)
 *     EngCopyRgn @ 0x1C00BDC00 (EngCopyRgn.c)
 *     EngEqualRgn @ 0x1C00BDC80 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C00BDD40 (EngGetRgnBox.c)
 *     EngIntersectRgn @ 0x1C00BDDA0 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C00BDE30 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C00BDEA0 (EngRectInRgn.c)
 *     EngSubtractRgn @ 0x1C00BDF00 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C00BDF90 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C00BE020 (EngXorRgn.c)
 * Callees:
 *     <none>
 */

void __fastcall EngModeState::~EngModeState(EngModeState *this)
{
  if ( *(_QWORD *)this )
    *(_BYTE *)(*(_QWORD *)this + 331LL) = 0;
}
