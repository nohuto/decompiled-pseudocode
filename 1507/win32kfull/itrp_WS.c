/*
 * XREFs of itrp_WS @ 0x1C00E3730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_WS(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // r10d
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( (qword_1C0323160 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323160 + 424)) == *(_QWORD *)(qword_1C0323160 + 432)
    && (v2 = qword_1C0323148, (unsigned __int64)((qword_1C0323148 - *(_QWORD *)qword_1C0323160) >> 2) >= 2) )
  {
    qword_1C0323148 -= 4LL;
    v3 = *(_DWORD *)(v2 - 4);
    qword_1C0323148 = v2 - 8;
    v4 = *(_QWORD *)(qword_1C0323160 + 344);
    v5 = *(int *)(v2 - 8);
    if ( (int)v5 < *(unsigned __int16 *)(v4 + 18) && (int)v5 >= 0 )
    {
      v6 = *(_QWORD *)(qword_1C0323160 + 8);
      if ( (qword_1C0323160 ^ v4 ^ v6 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0323160 + 352) )
      {
        *(_DWORD *)(v6 + 4 * v5) = v3;
        return a1;
      }
    }
    dword_1C03231B0 = 4377;
  }
  else
  {
    dword_1C03231B0 = 4368;
  }
  return qword_1C03231B8;
}
