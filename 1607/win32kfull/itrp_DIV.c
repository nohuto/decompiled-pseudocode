/*
 * XREFs of itrp_DIV @ 0x1C0105B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_DIV(__int64 a1)
{
  int *v2; // r8
  __int64 v3; // rcx

  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) == *(_QWORD *)(qword_1C03294E0 + 432)
    && (unsigned __int64)((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2) >= 2 )
  {
    v2 = (int *)(qword_1C03294C8 - 4);
    qword_1C03294C8 = (__int64)v2;
    v3 = *v2;
    if ( (_DWORD)v3 )
    {
      *(v2 - 1) = ((__int64)*(v2 - 1) << 6) / v3;
      return a1;
    }
    dword_1C0329530 = 4355;
  }
  else
  {
    dword_1C0329530 = 4368;
  }
  return qword_1C0329538;
}
