/*
 * XREFs of itrp_CEILING @ 0x1C02E0420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_CEILING(__int64 a1)
{
  __int64 result; // rax

  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) == *(_QWORD *)(qword_1C03294E0 + 432)
    && (qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2 )
  {
    *(_DWORD *)(qword_1C03294C8 - 4) = (*(_DWORD *)(qword_1C03294C8 - 4) + 63) & 0xFFFFFFC0;
    return a1;
  }
  else
  {
    result = qword_1C0329538;
    dword_1C0329530 = 4368;
  }
  return result;
}
