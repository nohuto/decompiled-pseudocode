/*
 * XREFs of itrp_PUSHB @ 0x1C00D4ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_PUSHB(unsigned __int64 a1, int a2)
{
  int v2; // r10d
  _DWORD *v3; // rdx
  unsigned __int8 *v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rcx
  int v7; // eax

  v2 = a2 - 175;
  v3 = (_DWORD *)qword_1C0323148;
  v4 = (unsigned __int8 *)a1;
  v5 = *(_QWORD *)(qword_1C0323160 + 424);
  if ( (qword_1C0323160 ^ v5 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0323160 + 432)
    && v2 <= (unsigned __int64)((v5 - qword_1C0323148) >> 2) )
  {
    if ( a1 < qword_1C03231C0 || (v6 = a1 + v2, v6 > qword_1C03231B8) || v6 < (unsigned __int64)v4 )
    {
      dword_1C03231B0 = 4381;
      return qword_1C03231B8;
    }
    else
    {
      for ( ; v2; --v2 )
      {
        v7 = *v4++;
        *v3++ = v7;
      }
      qword_1C0323148 = (__int64)v3;
    }
  }
  else
  {
    v4 = (unsigned __int8 *)qword_1C03231B8;
    dword_1C03231B0 = 4369;
  }
  return (__int64)v4;
}
