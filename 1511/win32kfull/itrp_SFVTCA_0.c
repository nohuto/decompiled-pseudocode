/*
 * XREFs of itrp_SFVTCA_0 @ 0x1C0105000
 * Callers:
 *     <none>
 * Callees:
 *     itrp_Check_PF_Proj @ 0x1C00A5C08 (itrp_Check_PF_Proj.c)
 */

__int64 itrp_SFVTCA_0()
{
  __int64 v0; // r8
  __int64 result; // rax
  __int16 v2; // r9

  word_1C0323E58 = HIWORD(dword_1C0323E08);
  dword_1C0323E0C = 0x40000000;
  itrp_Check_PF_Proj();
  result = v0;
  dword_1C0323E5C = 1;
  word_1C0323E7C = v2;
  return result;
}
