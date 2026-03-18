/*
 * XREFs of itrp_MIN @ 0x1C00E92A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_MIN(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  int v4; // ecx
  __int64 result; // rax

  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) == *(_QWORD *)(qword_1C0323E30 + 432)
    && (v2 = qword_1C0323E18, (unsigned __int64)((qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2) >= 2) )
  {
    v3 = qword_1C0323E18 - 4;
    qword_1C0323E18 = v3;
    v4 = *(_DWORD *)(v2 - 4);
    if ( *(_DWORD *)(v3 - 4) > v4 )
      *(_DWORD *)(v3 - 4) = v4;
    return a1;
  }
  else
  {
    result = qword_1C0323E88;
    dword_1C0323E80 = 4368;
  }
  return result;
}
