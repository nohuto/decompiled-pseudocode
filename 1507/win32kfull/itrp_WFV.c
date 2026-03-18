/*
 * XREFs of itrp_WFV @ 0x1C02DDD00
 * Callers:
 *     <none>
 * Callees:
 *     itrp_ComputeAndCheck_PF_Proj @ 0x1C00BA808 (itrp_ComputeAndCheck_PF_Proj.c)
 */

__int64 itrp_WFV()
{
  __int64 v0; // rcx
  __int64 v1; // r10
  __int64 result; // rax

  if ( (qword_1C0323160 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323160 + 424)) == *(_QWORD *)(qword_1C0323160 + 432)
    && (v0 = qword_1C0323148, (unsigned __int64)((qword_1C0323148 - *(_QWORD *)qword_1C0323160) >> 2) >= 2) )
  {
    qword_1C0323148 -= 4LL;
    HIWORD(dword_1C032313C) = *(_WORD *)(v0 - 4);
    qword_1C0323148 = v0 - 8;
    LOWORD(dword_1C032313C) = *(_WORD *)(v0 - 8);
    itrp_ComputeAndCheck_PF_Proj();
    dword_1C032318C = 1;
    word_1C03231AC = 0;
    return v1;
  }
  else
  {
    result = qword_1C03231B8;
    dword_1C03231B0 = 4368;
  }
  return result;
}
