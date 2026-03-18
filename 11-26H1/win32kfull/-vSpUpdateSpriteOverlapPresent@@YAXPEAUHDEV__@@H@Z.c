/*
 * XREFs of ?vSpUpdateSpriteOverlapPresent@@YAXPEAUHDEV__@@H@Z @ 0x140186368
 * Callers:
 *     GreDeleteSpriteOverlapPresent @ 0x14001B174 (GreDeleteSpriteOverlapPresent.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1401862C8 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1403134CC (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x140080C30 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 */

void __fastcall vSpUpdateSpriteOverlapPresent(HDEV a1, int a2)
{
  Gre::Base::Globals((Gre::Base *)a1);
  vSpComputeNoPresentRegion((struct _SPRITESTATE *)(a1 + 20), a2);
}
