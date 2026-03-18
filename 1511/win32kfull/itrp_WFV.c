/*
 * XREFs of itrp_WFV @ 0x1C0149950
 * Callers:
 *     <none>
 * Callees:
 *     itrp_ComputeAndCheck_PF_Proj @ 0x1C00B8EC0 (itrp_ComputeAndCheck_PF_Proj.c)
 */

__int64 itrp_WFV()
{
  __int64 v0; // rcx
  __int64 v1; // r10
  __int64 result; // rax

  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) == *(_QWORD *)(qword_1C0323E30 + 432)
    && (v0 = qword_1C0323E18, (unsigned __int64)((qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2) >= 2) )
  {
    qword_1C0323E18 -= 4LL;
    HIWORD(dword_1C0323E0C) = *(_WORD *)(v0 - 4);
    qword_1C0323E18 = v0 - 8;
    LOWORD(dword_1C0323E0C) = *(_WORD *)(v0 - 8);
    itrp_ComputeAndCheck_PF_Proj();
    dword_1C0323E5C = 1;
    word_1C0323E7C = 0;
    return v1;
  }
  else
  {
    result = qword_1C0323E88;
    dword_1C0323E80 = 4368;
  }
  return result;
}
