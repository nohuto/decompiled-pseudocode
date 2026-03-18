/*
 * XREFs of ?vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x14031881C
 * Callers:
 *     GreClientRgnUpdated @ 0x140013A14 (GreClientRgnUpdated.c)
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x14031808C (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x14031912C (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x140319690 (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     GreClientRgnDone @ 0x140319FA4 (GreClientRgnDone.c)
 *     GreDeleteWnd @ 0x14031A0A0 (GreDeleteWnd.c)
 *     GreSetClientRgn @ 0x14031A314 (GreSetClientRgn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall TRACKOBJ::vUpdateDrv(TRACKOBJ *this, struct EWNDOBJ *a2, unsigned int a3)
{
  (*((void (__fastcall **)(struct EWNDOBJ *, _QWORD))this + 5))(a2, a3);
}
