/*
 * XREFs of itrp_JMPR @ 0x1C00EC680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_JMPR(__int64 a1)
{
  unsigned __int64 v1; // rcx

  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) != *(_QWORD *)(qword_1C0323E30 + 432)
    || !((qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2) )
  {
    dword_1C0323E80 = 4368;
    return qword_1C0323E88;
  }
  qword_1C0323E18 -= 4LL;
  v1 = *(_DWORD *)qword_1C0323E18 - 1 + a1;
  if ( !--dword_1C0323E98 )
  {
    dword_1C0323E80 = 4359;
    return qword_1C0323E88;
  }
  if ( v1 < qword_1C0323E90 )
  {
    dword_1C0323E80 = 4363;
    return qword_1C0323E88;
  }
  if ( v1 > qword_1C0323E88 )
    return qword_1C0323E88;
  return v1;
}
