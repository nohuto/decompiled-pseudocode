/*
 * XREFs of itrp_ABS @ 0x1C00DD4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_ABS(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  if ( (qword_1C0323160 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323160 + 424)) == *(_QWORD *)(qword_1C0323160 + 432)
    && (qword_1C0323148 - *(_QWORD *)qword_1C0323160) >> 2 )
  {
    v1 = *(_DWORD *)(qword_1C0323148 - 4);
    if ( v1 < 0 )
      *(_DWORD *)(qword_1C0323148 - 4) = -v1;
    return a1;
  }
  else
  {
    result = qword_1C03231B8;
    dword_1C03231B0 = 4368;
  }
  return result;
}
