/*
 * XREFs of cComputeGlyphSet @ 0x140184AB4
 * Callers:
 *     EngComputeGlyphSet @ 0x140184290 (EngComputeGlyphSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cComputeGlyphSet(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, _DWORD *a5)
{
  _DWORD *v5; // r10
  _DWORD *v6; // rsi
  __int64 v11; // rsi
  int v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // r9d
  __int64 v15; // r8
  unsigned __int16 *v16; // rdx
  __int64 v18; // r15
  __int64 v19; // rdi
  unsigned __int16 v20; // dx
  _DWORD *v21; // rdx
  unsigned __int8 *v22; // rcx
  int v23; // eax

  v5 = 0LL;
  v6 = 0LL;
  if ( a5 )
  {
    a5[2] = 0;
    a5[3] = a4;
    v11 = a3 + 4 + 4 * a4;
    v12 = 2;
    *a5 = v11 * 4;
    v6 = &a5[v11];
    if ( a3 == 256 )
      v12 = 4;
    v5 = &a5[4 * a4 + 4];
    a5[1] = v12;
  }
  v13 = 0;
  v14 = 0;
  if ( a3 )
  {
    do
    {
      v15 = v13 + 1;
      if ( (unsigned int)v15 < a3 )
      {
        v16 = (unsigned __int16 *)(a1 + 2 * v15);
        do
        {
          if ( *v16 - *(unsigned __int16 *)(a1 + 2LL * (unsigned int)(v15 - 1)) > 1 )
            break;
          LODWORD(v15) = v15 + 1;
          ++v16;
        }
        while ( (unsigned int)v15 < a3 );
      }
      if ( a5 )
      {
        if ( v14 < a4 )
        {
          v18 = v13;
          v19 = 2LL * v14;
          LOWORD(a5[2 * v19 + 4]) = *(_WORD *)(a1 + 2 * v18);
          v20 = *(_WORD *)(a1 + 2LL * (unsigned int)(v15 - 1)) - *(_WORD *)(a1 + 2 * v18) + 1;
          *(_QWORD *)&a5[2 * v19 + 6] = v5;
          HIWORD(a5[2 * v19 + 4]) = v20;
          v21 = &v5[v20];
          if ( v21 <= v6 )
          {
            v22 = (unsigned __int8 *)(v18 + a2);
            while ( v5 < v21 )
            {
              v23 = *v22++;
              *v5++ = v23;
            }
            a5[2] += HIWORD(a5[4 * v14 + 4]);
          }
        }
      }
      ++v14;
      v13 = v15;
    }
    while ( (unsigned int)v15 < a3 );
  }
  return v14;
}
