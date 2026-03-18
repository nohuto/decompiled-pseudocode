/*
 * XREFs of itrp_ABS @ 0x1C00CF290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_ABS(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) == *(_QWORD *)(qword_1C03294E0 + 432)
    && (qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2 )
  {
    v1 = *(_DWORD *)(qword_1C03294C8 - 4);
    if ( v1 < 0 )
      *(_DWORD *)(qword_1C03294C8 - 4) = -v1;
    return a1;
  }
  else
  {
    result = qword_1C0329538;
    dword_1C0329530 = 4368;
  }
  return result;
}
