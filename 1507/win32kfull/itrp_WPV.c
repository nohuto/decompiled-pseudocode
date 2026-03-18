/*
 * XREFs of itrp_WPV @ 0x1C0116E60
 * Callers:
 *     <none>
 * Callees:
 *     itrp_ComputeAndCheck_PF_Proj @ 0x1C00BA808 (itrp_ComputeAndCheck_PF_Proj.c)
 */

__int64 itrp_WPV()
{
  __int64 v0; // rcx
  __int64 v1; // r10
  __int64 v2; // r9
  __int16 v3; // ax
  __int64 result; // rax
  bool v5; // zf

  if ( (qword_1C0323160 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323160 + 424)) == *(_QWORD *)(qword_1C0323160 + 432) )
  {
    v0 = qword_1C0323148;
    if ( (unsigned __int64)((qword_1C0323148 - *(_QWORD *)qword_1C0323160) >> 2) >= 2 )
    {
      qword_1C0323148 -= 4LL;
      HIWORD(dword_1C0323138) = *(_WORD *)(v0 - 4);
      qword_1C0323148 = v0 - 8;
      LOWORD(dword_1C0323138) = *(_WORD *)(v0 - 8);
      word_1C03231D8 = -1;
      word_1C03231D6 = -1;
      itrp_ComputeAndCheck_PF_Proj();
      v2 = 1LL;
      dword_1C032318C = 1;
      dword_1C0323190 = 1;
      v3 = *(_WORD *)(qword_1C0323160 + 452);
      if ( (v3 & 1) == 0 )
      {
LABEL_4:
        word_1C03231D4 = 0;
LABEL_5:
        v2 = 0LL;
LABEL_6:
        *(_DWORD *)(qword_1C0323160 + 128) = itrp_RoundFunctionId[8 * v2 + *(unsigned __int16 *)(qword_1C0323160 + 132)];
        dword_1C0323194 = dword_1C0323190;
        result = v1;
        word_1C03231AC = 0;
        return result;
      }
      if ( (v3 & 4) != 0 )
      {
        if ( (_WORD)dword_1C0323138 != 0x4000 )
          goto LABEL_9;
        v5 = HIWORD(dword_1C0323138) == 0;
      }
      else
      {
        if ( HIWORD(dword_1C0323138) != 0x4000 )
          goto LABEL_9;
        v5 = (_WORD)dword_1C0323138 == 0;
      }
      if ( v5 )
        goto LABEL_4;
LABEL_9:
      word_1C03231D4 = 1;
      if ( (*(_BYTE *)(qword_1C0323160 + 120) & 4) != 0 || *(_BYTE *)(qword_1C0323160 + 333) )
        goto LABEL_6;
      goto LABEL_5;
    }
  }
  result = qword_1C03231B8;
  dword_1C03231B0 = 4368;
  return result;
}
