/*
 * XREFs of itrp_ROTATE @ 0x1C00CD7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_ROTATE(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ecx
  __int64 result; // rax

  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) == *(_QWORD *)(qword_1C03294E0 + 432)
    && (v2 = qword_1C03294C8, (unsigned __int64)((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2) >= 3) )
  {
    v3 = *(_DWORD *)(qword_1C03294C8 - 8);
    *(_DWORD *)(qword_1C03294C8 - 8) = *(_DWORD *)(qword_1C03294C8 - 4);
    *(_DWORD *)(v2 - 4) = *(_DWORD *)(v2 - 12);
    result = a1;
    *(_DWORD *)(v2 - 12) = v3;
  }
  else
  {
    result = qword_1C0329538;
    dword_1C0329530 = 4368;
  }
  return result;
}
