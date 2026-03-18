/*
 * XREFs of CmpPerformKeyBodyDeletionCheck @ 0x1404044AC
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A660 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x14000B338 (CmpQueryKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x14014A9C8 (CmpAssignKeySecurity.c)
 *     CmQueryLayeredKey @ 0x1401B3DE4 (CmQueryLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401B4234 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405FED24 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmpIsKeyDeletedForKeyBody @ 0x140439400 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmpPerformKeyBodyDeletionCheck(__int64 a1, __int64 a2)
{
  char IsKeyDeletedForKeyBody; // al
  unsigned int v4; // edx

  IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a1, a2);
  v4 = 0;
  if ( IsKeyDeletedForKeyBody )
    return (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
  return v4;
}
