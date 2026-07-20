/*
 * XREFs of sub_1400042C4 @ 0x1400042C4
 * Callers:
 *     sub_1400012FC @ 0x1400012FC (sub_1400012FC.c)
 *     sub_140002E90 @ 0x140002E90 (sub_140002E90.c)
 *     sub_1400031FC @ 0x1400031FC (sub_1400031FC.c)
 *     sub_140003E30 @ 0x140003E30 (sub_140003E30.c)
 * Callees:
 *     sub_14000436C @ 0x14000436C (sub_14000436C.c)
 *     sub_140004390 @ 0x140004390 (sub_140004390.c)
 */

volatile signed __int32 *__fastcall sub_1400042C4(unsigned int a1, __int64 a2)
{
  volatile signed __int32 *v3; // rbx
  _BYTE *v4; // rcx
  _QWORD **v6; // r10
  _QWORD *i; // rdx
  _QWORD *v9; // r8
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  v4 = *(_BYTE **)(a2 + 8);
  if ( !v4 )
  {
    sub_140004390(a1, 1LL, v10);
    v4 = v10;
  }
  v6 = (_QWORD **)*((_QWORD *)v4 + 1);
  for ( i = *v6; i != v6; i = (_QWORD *)*i )
  {
    v9 = i - 9;
    if ( *((_DWORD *)i - 2) == a1 )
    {
      if ( *(_DWORD *)a2 )
      {
        if ( *(_DWORD *)a2 == 1 && *((_DWORD *)v9 + 6) == *(_DWORD *)(a2 + 16) )
          v3 = (volatile signed __int32 *)(i - 9);
      }
      else if ( v9[6] == *(_QWORD *)(a2 + 16) )
      {
        v3 = (volatile signed __int32 *)(i - 9);
      }
      if ( v3 )
      {
        _InterlockedIncrement(v3);
        break;
      }
    }
  }
  if ( v4 == v10 )
    sub_14000436C(v4);
  return v3;
}
