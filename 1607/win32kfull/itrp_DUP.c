/*
 * XREFs of itrp_DUP @ 0x1C00CC3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_DUP(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_1C03294E0 + 424);
  if ( (qword_1C03294E0 ^ v1 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C03294E0 + 432)
    && (qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2 )
  {
    if ( (v1 - qword_1C03294C8) >> 2 )
    {
      *(_DWORD *)qword_1C03294C8 = *(_DWORD *)(qword_1C03294C8 - 4);
      result = a1;
      qword_1C03294C8 += 4LL;
      return result;
    }
    dword_1C0329530 = 4369;
  }
  else
  {
    dword_1C0329530 = 4368;
  }
  return qword_1C0329538;
}
