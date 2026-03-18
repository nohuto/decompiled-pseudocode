/*
 * XREFs of ??0EngModeState@@QEAA@XZ @ 0x1C00CB390
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
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 */

EngModeState *__fastcall EngModeState::EngModeState(EngModeState *this)
{
  __int64 ThreadWin32Thread; // rax

  *(_QWORD *)this = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)this = ThreadWin32Thread;
  if ( ThreadWin32Thread )
    *(_BYTE *)(ThreadWin32Thread + 331) = 1;
  return this;
}
