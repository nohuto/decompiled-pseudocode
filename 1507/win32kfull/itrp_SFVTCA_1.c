/*
 * XREFs of itrp_SFVTCA_1 @ 0x1C00E8070
 * Callers:
 *     <none>
 * Callees:
 *     itrp_Check_PF_Proj @ 0x1C00E825C (itrp_Check_PF_Proj.c)
 */

__int64 __fastcall itrp_SFVTCA_1(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int16 v4; // r9

  word_1C0323188 = dword_1C0323138;
  dword_1C032313C = 0x4000;
  itrp_Check_PF_Proj(a1, a2, a1, 0LL);
  result = v2;
  dword_1C032318C = 1;
  word_1C03231AC = v4;
  return result;
}
