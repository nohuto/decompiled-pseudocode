/*
 * XREFs of OutputAAToVGA256 @ 0x14021D240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OutputAAToVGA256(
        unsigned int *a1,
        __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8,
        __int64 a9)
{
  __int64 result; // rax
  unsigned __int8 *v10; // r10
  unsigned __int16 *v12; // r11
  int v13; // edx
  unsigned __int64 v14; // r9
  unsigned __int16 *v15; // r11

  result = *a1;
  v10 = (unsigned __int8 *)(a2 + 4);
  if ( (result & 0x80u) != 0LL )
  {
    if ( (unsigned __int64)v10 < a3 )
    {
      result = a9;
      v15 = a6;
      do
      {
        if ( v10[3] )
          *a4 = *(_BYTE *)((((*(_DWORD *)(a5 + 4LL * *v10) - *v15) & 0x1C00000 | (*(_DWORD *)(a5 + 4LL * v10[1] + 1024)
                                                                                - v15[1]) & 0x380000 | (unsigned __int64)((*(_DWORD *)(a5 + 4LL * v10[2] + 2048) - v15[2]) & 0x70000)) >> 16)
                         + a9);
        ++a4;
        v15 += 3;
        if ( (unsigned __int64)v15 >= a7 )
          v15 = (unsigned __int16 *)((char *)v15 + a8);
        v10 += 4;
      }
      while ( (unsigned __int64)v10 < a3 );
    }
  }
  else if ( (unsigned __int64)v10 < a3 )
  {
    result = a9;
    v12 = a6;
    do
    {
      v13 = *v12;
      v14 = (*(_DWORD *)(a5 + 4LL * v10[1] + 1024) - v12[1]) & 0x380000 | (unsigned __int64)((*(_DWORD *)(a5 + 4LL * v10[2] + 2048)
                                                                                            - v12[2]) & 0x70000);
      v12 += 3;
      *a4++ = *(_BYTE *)((((*(_DWORD *)(a5 + 4LL * *v10) - v13) & 0x1C00000 | v14) >> 16) + a9);
      if ( (unsigned __int64)v12 >= a7 )
        v12 = (unsigned __int16 *)((char *)v12 + a8);
      v10 += 4;
    }
    while ( (unsigned __int64)v10 < a3 );
  }
  return result;
}
