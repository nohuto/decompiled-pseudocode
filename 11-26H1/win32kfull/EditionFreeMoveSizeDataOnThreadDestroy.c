/*
 * XREFs of EditionFreeMoveSizeDataOnThreadDestroy @ 0x1402C8230
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z @ 0x140261F74 (-FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z.c)
 */

void __fastcall EditionFreeMoveSizeDataOnThreadDestroy(__int64 a1)
{
  MOVESIZEDATA::FreeMoveSizeData((struct MOVESIZEDATA **)(a1 + 704));
}
