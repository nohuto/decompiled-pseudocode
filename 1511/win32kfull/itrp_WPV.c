/*
 * XREFs of itrp_WPV @ 0x1C012C0A0
 * Callers:
 *     <none>
 * Callees:
 *     itrp_ComputeAndCheck_PF_Proj @ 0x1C00B8EC0 (itrp_ComputeAndCheck_PF_Proj.c)
 */

__int64 itrp_WPV()
{
  __int64 v0; // rcx
  __int64 v1; // r10
  __int64 v2; // r9
  __int16 v3; // ax
  __int64 result; // rax
  bool v5; // zf

  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) == *(_QWORD *)(qword_1C0323E30 + 432) )
  {
    v0 = qword_1C0323E18;
    if ( (unsigned __int64)((qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2) >= 2 )
    {
      qword_1C0323E18 -= 4LL;
      HIWORD(dword_1C0323E08) = *(_WORD *)(v0 - 4);
      qword_1C0323E18 = v0 - 8;
      LOWORD(dword_1C0323E08) = *(_WORD *)(v0 - 8);
      word_1C0323EA8 = -1;
      word_1C0323EA6 = -1;
      itrp_ComputeAndCheck_PF_Proj();
      v2 = 1LL;
      dword_1C0323E5C = 1;
      dword_1C0323E60 = 1;
      v3 = *(_WORD *)(qword_1C0323E30 + 452);
      if ( (v3 & 1) == 0 )
      {
LABEL_4:
        word_1C0323EA4 = 0;
LABEL_5:
        v2 = 0LL;
LABEL_6:
        *(_DWORD *)(qword_1C0323E30 + 128) = itrp_RoundFunctionId[8 * v2 + *(unsigned __int16 *)(qword_1C0323E30 + 132)];
        dword_1C0323E64 = dword_1C0323E60;
        result = v1;
        word_1C0323E7C = 0;
        return result;
      }
      if ( (v3 & 4) != 0 )
      {
        if ( (_WORD)dword_1C0323E08 != 0x4000 )
          goto LABEL_9;
        v5 = HIWORD(dword_1C0323E08) == 0;
      }
      else
      {
        if ( HIWORD(dword_1C0323E08) != 0x4000 )
          goto LABEL_9;
        v5 = (_WORD)dword_1C0323E08 == 0;
      }
      if ( v5 )
        goto LABEL_4;
LABEL_9:
      word_1C0323EA4 = 1;
      if ( (*(_BYTE *)(qword_1C0323E30 + 120) & 4) != 0 || *(_BYTE *)(qword_1C0323E30 + 333) )
        goto LABEL_6;
      goto LABEL_5;
    }
  }
  result = qword_1C0323E88;
  dword_1C0323E80 = 4368;
  return result;
}
