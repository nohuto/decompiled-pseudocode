/*
 * XREFs of itrp_PUSHB1 @ 0x1C00CBD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_PUSHB1(unsigned __int8 *a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_1C03294E0 + 424);
  if ( (qword_1C03294E0 ^ v1 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C03294E0 + 432)
    && (v1 - qword_1C03294C8) >> 2 )
  {
    result = qword_1C0329538;
    if ( (unsigned __int64)a1 < qword_1C0329540 || (unsigned __int64)(a1 + 1) > qword_1C0329538 || a1 + 1 < a1 )
    {
      dword_1C0329530 = 4381;
    }
    else
    {
      *(_DWORD *)qword_1C03294C8 = *a1;
      result = (__int64)(a1 + 1);
      qword_1C03294C8 += 4LL;
    }
  }
  else
  {
    result = qword_1C0329538;
    dword_1C0329530 = 4369;
  }
  return result;
}
