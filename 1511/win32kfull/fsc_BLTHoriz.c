/*
 * XREFs of fsc_BLTHoriz @ 0x1C00A7CAC
 * Callers:
 *     fsc_FillBitMap @ 0x1C00A7B0C (fsc_FillBitMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsc_BLTHoriz(int a1, int a2, __int64 a3)
{
  int v3; // r9d
  int v4; // r11d
  int v5; // edx
  _DWORD *v6; // r10
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax

  v3 = 32 * (a1 >> 5);
  v4 = a1 - v3;
  v5 = a2 - v3;
  v6 = (_DWORD *)(a3 + 4LL * (a1 >> 5));
  if ( v5 >= 32 )
  {
    v8 = (unsigned __int64)(unsigned int)v5 >> 5;
    v9 = v4;
    v4 = 0;
    v5 += -32 * ((unsigned int)v5 >> 5);
    do
    {
      v10 = aulStartBits[v9];
      v9 = 0LL;
      *v6++ |= v10;
      --v8;
    }
    while ( v8 );
  }
  *v6 |= aulStopBits[v5] & aulStartBits[v4];
  return 0LL;
}
