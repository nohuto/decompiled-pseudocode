/*
 * XREFs of itrp_NROUND @ 0x1C02E0FC0
 * Callers:
 *     <none>
 * Callees:
 *     itrp_RoundOff @ 0x1C00D1B90 (itrp_RoundOff.c)
 */

__int64 __fastcall itrp_NROUND(__int64 a1, int a2)
{
  int v3; // eax
  _DWORD *v4; // r10
  __int64 result; // rax

  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) == *(_QWORD *)(qword_1C03294E0 + 432)
    && (qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2 )
  {
    qword_1C03294C8 -= 4LL;
    v3 = itrp_RoundOff(*(_DWORD *)qword_1C03294C8, *(_DWORD *)(qword_1C03294E0 + 4LL * (a2 - 108) + 32));
    *v4 = v3;
    result = a1;
    qword_1C03294C8 += 4LL;
  }
  else
  {
    result = qword_1C0329538;
    dword_1C0329530 = 4368;
  }
  return result;
}
