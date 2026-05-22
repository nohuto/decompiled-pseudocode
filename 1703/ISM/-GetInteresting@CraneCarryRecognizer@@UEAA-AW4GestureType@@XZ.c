/*
 * XREFs of ?GetInteresting@CraneCarryRecognizer@@UEAA?AW4GestureType@@XZ @ 0x180038590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CraneCarryRecognizer::GetInteresting(__int64 a1)
{
  return *(_BYTE *)(a1 + 20) != 0 ? 0x10000 : 0;
}
