/*
 * XREFs of itrp_DEPTH @ 0x1C02DCD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_DEPTH(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_1C0323E30 + 424);
  if ( (qword_1C0323E30 ^ v1 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0323E30 + 432)
    && (v1 - qword_1C0323E18) >> 2 )
  {
    *(_DWORD *)qword_1C0323E18 = (qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2;
    result = a1;
    qword_1C0323E18 += 4LL;
  }
  else
  {
    result = qword_1C0323E88;
    dword_1C0323E80 = 4369;
  }
  return result;
}
