/*
 * XREFs of ObpFilterOperation @ 0x14007A018
 * Callers:
 *     ObDuplicateObject @ 0x1404246E0 (ObDuplicateObject.c)
 *     ObCompleteObjectDuplication @ 0x140480070 (ObCompleteObjectDuplication.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpFilterOperation(__int64 a1)
{
  return (*(_BYTE *)(a1 + 66) & 0x40) != 0 && *(_QWORD *)(a1 + 200) != a1 + 200;
}
