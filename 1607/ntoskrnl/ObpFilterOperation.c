/*
 * XREFs of ObpFilterOperation @ 0x1400D1714
 * Callers:
 *     ObCompleteObjectDuplication @ 0x1404CBC54 (ObCompleteObjectDuplication.c)
 *     ObDuplicateObject @ 0x14050CBB0 (ObDuplicateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpFilterOperation(__int64 a1)
{
  return (*(_BYTE *)(a1 + 66) & 0x40) != 0 && *(_QWORD *)(a1 + 200) != a1 + 200;
}
