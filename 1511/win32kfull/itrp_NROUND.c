/*
 * XREFs of itrp_NROUND @ 0x1C02DD700
 * Callers:
 *     <none>
 * Callees:
 *     itrp_RoundOff @ 0x1C00B8430 (itrp_RoundOff.c)
 */

__int64 __fastcall itrp_NROUND(__int64 a1, int a2)
{
  int v3; // eax
  _DWORD *v4; // r10
  __int64 result; // rax

  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) == *(_QWORD *)(qword_1C0323E30 + 432)
    && (qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2 )
  {
    qword_1C0323E18 -= 4LL;
    v3 = itrp_RoundOff(*(_DWORD *)qword_1C0323E18, *(_DWORD *)(qword_1C0323E30 + 4LL * a2 - 400));
    *v4 = v3;
    result = a1;
    qword_1C0323E18 += 4LL;
  }
  else
  {
    result = qword_1C0323E88;
    dword_1C0323E80 = 4368;
  }
  return result;
}
