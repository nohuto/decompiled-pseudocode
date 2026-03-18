/*
 * XREFs of itrp_JMPR @ 0x1C00E5410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_JMPR(__int64 a1)
{
  unsigned __int64 v1; // rcx

  if ( (qword_1C0323160 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323160 + 424)) != *(_QWORD *)(qword_1C0323160 + 432)
    || !((qword_1C0323148 - *(_QWORD *)qword_1C0323160) >> 2) )
  {
    dword_1C03231B0 = 4368;
    return qword_1C03231B8;
  }
  qword_1C0323148 -= 4LL;
  v1 = *(_DWORD *)qword_1C0323148 - 1 + a1;
  if ( !--dword_1C03231C8 )
  {
    dword_1C03231B0 = 4359;
    return qword_1C03231B8;
  }
  if ( v1 < qword_1C03231C0 )
  {
    dword_1C03231B0 = 4363;
    return qword_1C03231B8;
  }
  if ( v1 > qword_1C03231B8 )
    return qword_1C03231B8;
  return v1;
}
