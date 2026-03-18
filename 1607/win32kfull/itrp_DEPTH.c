/*
 * XREFs of itrp_DEPTH @ 0x1C02E0520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_DEPTH(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_1C03294E0 + 424);
  if ( (qword_1C03294E0 ^ v1 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C03294E0 + 432)
    && (v1 - qword_1C03294C8) >> 2 )
  {
    *(_DWORD *)qword_1C03294C8 = (qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2;
    result = a1;
    qword_1C03294C8 += 4LL;
  }
  else
  {
    result = qword_1C0329538;
    dword_1C0329530 = 4369;
  }
  return result;
}
