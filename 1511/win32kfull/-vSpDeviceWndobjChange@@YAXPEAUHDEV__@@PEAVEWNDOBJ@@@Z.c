/*
 * XREFs of ?vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C02756F4
 * Callers:
 *     ?vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C0279684 (-vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00FAA54 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C026AC94 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C026ADE0 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x1C0279348 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 */

void __fastcall vSpDeviceWndobjChange(HDEV a1, struct EWNDOBJ *a2)
{
  struct _SPRITESTATE *v2; // rbx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (struct _SPRITESTATE *)(a1 + 24);
  UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v4, a2, (struct _SPRITESTATE *)(a1 + 24));
  if ( a2 )
    vSpUpdateWndobjOverlap(v2, a2);
  vSpComputeUnlockedRegion(v2);
  UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v4);
}
