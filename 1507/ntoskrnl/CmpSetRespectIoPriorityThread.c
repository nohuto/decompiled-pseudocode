/*
 * XREFs of CmpSetRespectIoPriorityThread @ 0x14001B140
 * Callers:
 *     CmpDoFileWrite @ 0x14044ACA4 (CmpDoFileWrite.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpSetRespectIoPriorityThread(__int64 a1, char a2)
{
  int v2; // r8d
  bool result; // al

  v2 = *(_DWORD *)(a1 + 1728);
  result = (v2 & 0x20) != 0;
  *(_DWORD *)(a1 + 1728) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(32 * a2)) & 0x20;
  return result;
}
