/*
 * XREFs of cComputeGlyphSet @ 0x1C000FA30
 * Callers:
 *     EngComputeGlyphSet @ 0x1C000F760 (EngComputeGlyphSet.c)
 *     cUnicodeRangesSupported @ 0x1C000F81C (cUnicodeRangesSupported.c)
 *     pcpComputeGlyphset @ 0x1C0117494 (pcpComputeGlyphset.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cComputeGlyphSet(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, _DWORD *a5)
{
  _DWORD *v5; // r10
  _DWORD *v10; // r11
  _DWORD *v11; // rbp
  unsigned int v12; // edi
  unsigned int v13; // r9d
  __int64 v14; // r8
  unsigned __int16 *v15; // rdx
  __int64 v16; // r15
  unsigned __int16 v17; // dx
  _DWORD *v18; // rcx
  unsigned __int8 *v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 i; // rcx
  __int64 v23; // rbp
  int v24; // eax

  v5 = a5;
  v10 = 0LL;
  v11 = 0LL;
  if ( a5 )
  {
    a5[3] = a4;
    a5[2] = 0;
    v23 = a3 + 4 + 4 * a4;
    *a5 = v23 * 4;
    v24 = 4;
    v11 = &a5[v23];
    if ( a3 != 256 )
      v24 = 2;
    v10 = &a5[4 * a4 + 4];
    a5[1] = v24;
  }
  v12 = 0;
  v13 = 0;
  if ( a3 )
  {
    do
    {
      v14 = v12 + 1;
      if ( (unsigned int)v14 < a3 )
      {
        v15 = (unsigned __int16 *)(a1 + 2 * v14);
        do
        {
          if ( *v15 - *(unsigned __int16 *)(a1 + 2LL * (unsigned int)(v14 - 1)) > 1 )
            break;
          LODWORD(v14) = v14 + 1;
          ++v15;
        }
        while ( (unsigned int)v14 < a3 );
      }
      if ( v5 )
      {
        if ( v13 < a4 )
        {
          v16 = 2LL * v13;
          LOWORD(v5[2 * v16 + 4]) = *(_WORD *)(a1 + 2LL * v12);
          v17 = *(_WORD *)(a1 + 2LL * (unsigned int)(v14 - 1)) - *(_WORD *)(a1 + 2LL * v12) + 1;
          *(_QWORD *)&v5[2 * v16 + 6] = v10;
          HIWORD(v5[2 * v16 + 4]) = v17;
          v18 = &v10[v17];
          if ( v18 <= v11 )
          {
            v19 = (unsigned __int8 *)(v12 + a2);
            v20 = (4 * (unsigned __int64)v17 + 3) >> 2;
            if ( v10 > v18 )
              v20 = 0LL;
            if ( v20 )
            {
              for ( i = 0LL; i < v20; ++i )
                *v10++ = *v19++;
              v5 = a5;
            }
            v5[2] += HIWORD(v5[4 * v13 + 4]);
          }
        }
      }
      ++v13;
      v12 = v14;
    }
    while ( (unsigned int)v14 < a3 );
  }
  return v13;
}
