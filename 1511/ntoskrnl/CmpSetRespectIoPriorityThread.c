/*
 * XREFs of CmpSetRespectIoPriorityThread @ 0x14001B3E0
 * Callers:
 *     CmpDoFileWrite @ 0x1403DD10C (CmpDoFileWrite.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpSetRespectIoPriorityThread(__int64 a1, char a2)
{
  int v2; // r8d
  bool result; // al

  v2 = *(_DWORD *)(a1 + 1728);
  result = (v2 & 0x40) != 0;
  *(_DWORD *)(a1 + 1728) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(a2 << 6)) & 0x40;
  return result;
}
