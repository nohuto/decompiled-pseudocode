/*
 * XREFs of itrp_SPVTCA_1 @ 0x1C00E80C0
 * Callers:
 *     <none>
 * Callees:
 *     itrp_Check_PF_Proj @ 0x1C00E825C (itrp_Check_PF_Proj.c)
 */

__int64 __fastcall itrp_SPVTCA_1(__int64 a1)
{
  __int64 v1; // rdx
  __int16 v3; // ax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 result; // rax
  int v8; // r10d
  __int16 v9; // r9

  v1 = qword_1C0323160;
  dword_1C0323190 = 3;
  dword_1C0323138 = 0x4000;
  v3 = *(_WORD *)(qword_1C0323160 + 452);
  if ( (v3 & 1) == 0 || (v3 & 4) != 0 )
  {
    word_1C03231D4 = 0;
  }
  else
  {
    word_1C03231D4 = 1;
    if ( (*(_BYTE *)(qword_1C0323160 + 120) & 4) != 0 || *(_BYTE *)(qword_1C0323160 + 333) )
    {
      v4 = 1LL;
      goto LABEL_4;
    }
  }
  v4 = 0LL;
LABEL_4:
  v5 = *(unsigned __int16 *)(qword_1C0323160 + 132) + 8 * v4;
  *(_DWORD *)(qword_1C0323160 + 128) = itrp_RoundFunctionId[v5];
  word_1C03231D8 = -1;
  word_1C03231D6 = -1;
  word_1C0323188 = dword_1C032313C;
  itrp_Check_PF_Proj(v5, v1, a1, 0LL);
  dword_1C0323194 = dword_1C0323190;
  result = v6;
  dword_1C032318C = v8;
  word_1C03231AC = v9;
  return result;
}
