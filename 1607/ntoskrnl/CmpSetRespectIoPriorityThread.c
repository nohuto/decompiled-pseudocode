/*
 * XREFs of CmpSetRespectIoPriorityThread @ 0x14000A0EC
 * Callers:
 *     CmpDoFileWrite @ 0x1403F7EE8 (CmpDoFileWrite.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpSetRespectIoPriorityThread(__int64 a1, char a2)
{
  int v2; // r9d
  char result; // al

  v2 = *(_DWORD *)(a1 + 1732);
  result = (unsigned __int8)v2 >> 7;
  *(_DWORD *)(a1 + 1732) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(a2 << 7)) & 0x80;
  return result;
}
