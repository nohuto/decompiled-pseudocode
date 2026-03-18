/*
 * XREFs of itrp_WFV @ 0x1C02E1AA0
 * Callers:
 *     <none>
 * Callees:
 *     itrp_ComputeAndCheck_PF_Proj @ 0x1C00D1B24 (itrp_ComputeAndCheck_PF_Proj.c)
 */

__int64 itrp_WFV()
{
  __int64 v0; // rcx
  __int64 v1; // r10
  __int64 result; // rax

  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) == *(_QWORD *)(qword_1C03294E0 + 432)
    && (v0 = qword_1C03294C8, (unsigned __int64)((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2) >= 2) )
  {
    qword_1C03294C8 -= 4LL;
    HIWORD(dword_1C03294BC) = *(_WORD *)(v0 - 4);
    qword_1C03294C8 = v0 - 8;
    LOWORD(dword_1C03294BC) = *(_WORD *)(v0 - 8);
    itrp_ComputeAndCheck_PF_Proj();
    dword_1C032950C = 1;
    word_1C032952C = 0;
    return v1;
  }
  else
  {
    result = qword_1C0329538;
    dword_1C0329530 = 4368;
  }
  return result;
}
