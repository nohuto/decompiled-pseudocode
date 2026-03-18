/*
 * XREFs of OutputAATo16BPP_555_RGB @ 0x1C0250710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OutputAATo16BPP_555_RGB(
        unsigned int *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        _WORD *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        __int64 a8,
        int a9)
{
  unsigned __int16 *v10; // r9
  unsigned __int8 *v11; // r10
  __int64 result; // rax
  unsigned __int8 *v14; // r10
  int v15; // ecx
  unsigned int v16; // r8d

  v10 = a6;
  v11 = a2;
  if ( (_BYTE)a9 )
  {
    v11 = a2 + 4;
    if ( a2[7] )
      *a4 = (((*(_DWORD *)(a5 + 4LL * *v11) - (unsigned int)*a6) >> 16) & 0x1F | ((*(_DWORD *)(a5
                                                                                             + 4LL
                                                                                             * ((unsigned int)v11[2]
                                                                                              + 512))
                                                                                 - (unsigned int)a6[2]) >> 16) & 0x7C00 | ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v11[1] + 256)) - (unsigned int)a6[1]) >> 16) & 0x3E0) ^ 0x7FFF;
    ++a4;
    v10 = a6 + 3;
    if ( (unsigned __int64)(a6 + 3) >= a7 )
      v10 = (unsigned __int16 *)((char *)v10 + (int)a8);
  }
  result = *a1;
  v14 = v11 + 4;
  if ( (result & 0x80u) != 0LL )
  {
    while ( (unsigned __int64)v14 < a3 )
    {
      if ( v14[3] )
      {
        result = 0x7FFFLL;
        *a4 = (((*(_DWORD *)(a5 + 4LL * *v14) - (unsigned int)*v10) >> 16) & 0x1F | ((*(_DWORD *)(a5
                                                                                                + 4LL
                                                                                                * ((unsigned int)v14[2]
                                                                                                 + 512))
                                                                                    - (unsigned int)v10[2]) >> 16) & 0x7C00 | ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v14[1] + 256)) - (unsigned int)v10[1]) >> 16) & 0x3E0) ^ 0x7FFF;
      }
      ++a4;
      v10 += 3;
      if ( (unsigned __int64)v10 >= a7 )
      {
        result = (int)a8;
        v10 = (unsigned __int16 *)((char *)v10 + (int)a8);
      }
      v14 += 4;
    }
  }
  else
  {
    for ( ; (unsigned __int64)v14 < a3; v14 += 8 )
    {
      v15 = v10[3];
      result = v14[4];
      v16 = (*(_DWORD *)(a5 + 4LL * ((unsigned int)v14[6] + 512)) - v10[5]) & 0x7C000000 | (*(_DWORD *)(a5 + 4LL * ((unsigned int)v14[5] + 256))
                                                                                          - v10[4]) & 0x3E00000 | (((*(_DWORD *)(a5 + 4LL * *v14) - *v10) & 0x1F0000 | (*(_DWORD *)(a5 + 4LL * ((unsigned int)v14[2] + 512)) - v10[2]) & 0x7C000000 | (*(_DWORD *)(a5 + 4LL * ((unsigned int)v14[1] + 256)) - v10[1]) & 0x3E00000u) >> 16);
      v10 += 6;
      *(_DWORD *)a4 = ((*(_DWORD *)(a5 + 4 * result) - v15) & 0x1F0000 | v16) ^ 0x7FFF7FFF;
      a4 += 2;
      if ( (unsigned __int64)v10 >= a7 )
      {
        result = (int)a8;
        v10 = (unsigned __int16 *)((char *)v10 + (int)a8);
      }
    }
  }
  if ( HIBYTE(a9) )
  {
    if ( v14[3] )
    {
      result = 0x7FFFLL;
      *a4 = (((*(_DWORD *)(a5 + 4LL * *v14) - (unsigned int)*v10) >> 16) & 0x1F | ((*(_DWORD *)(a5
                                                                                              + 4LL
                                                                                              * ((unsigned int)v14[2]
                                                                                               + 512))
                                                                                  - (unsigned int)v10[2]) >> 16) & 0x7C00 | ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v14[1] + 256)) - (unsigned int)v10[1]) >> 16) & 0x3E0) ^ 0x7FFF;
    }
  }
  return result;
}
