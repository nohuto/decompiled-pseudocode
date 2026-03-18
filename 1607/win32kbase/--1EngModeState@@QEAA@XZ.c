/*
 * XREFs of ??1EngModeState@@QEAA@XZ @ 0x1C00CB3C4
 * Callers:
 *     EngCreateRectRgn @ 0x1C0057710 (EngCreateRectRgn.c)
 *     EngGetRgnData @ 0x1C00786C0 (EngGetRgnData.c)
 *     EngCombineRgn @ 0x1C00787F0 (EngCombineRgn.c)
 *     EngSetRectRgn @ 0x1C0078890 (EngSetRectRgn.c)
 *     EngDeleteRgn @ 0x1C0078910 (EngDeleteRgn.c)
 *     EngCopyRgn @ 0x1C00CB3E0 (EngCopyRgn.c)
 *     EngEqualRgn @ 0x1C00CB460 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C00CB520 (EngGetRgnBox.c)
 *     EngIntersectRgn @ 0x1C00CB580 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C00CB610 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C00CB680 (EngRectInRgn.c)
 *     EngSubtractRgn @ 0x1C00CB6E0 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C00CB770 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C00CB800 (EngXorRgn.c)
 * Callees:
 *     <none>
 */

void __fastcall EngModeState::~EngModeState(EngModeState *this)
{
  if ( *(_QWORD *)this )
    *(_BYTE *)(*(_QWORD *)this + 331LL) = 0;
}
