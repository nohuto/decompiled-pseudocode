/*
 * XREFs of FindExtrema @ 0x1C00AC1F8
 * Callers:
 *     fsc_MeasureGlyph @ 0x1C00AB4F0 (fsc_MeasureGlyph.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindExtrema(unsigned __int16 *a1, __int64 a2)
{
  int v3; // r11d
  int v4; // esi
  int v5; // ebx
  int v6; // ebp
  int v7; // r12d
  __int16 *v8; // r9
  __int64 v9; // r15
  __int64 v10; // r13
  __int16 v11; // di
  __int16 v12; // r8
  char *v13; // r14
  char *v14; // rcx
  signed __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  int v18; // r10d
  int v19; // r9d
  int v20; // ecx
  int v21; // r8d
  __int64 result; // rax

  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 1;
  if ( *a1 )
  {
    v8 = (__int16 *)*((_QWORD *)a1 + 2);
    v9 = *((_QWORD *)a1 + 1) - (_QWORD)v8;
    v10 = *a1;
    do
    {
      v11 = *(__int16 *)((char *)v8 + v9);
      v12 = *v8;
      if ( v11 != *v8 )
      {
        v13 = (char *)(*((_QWORD *)a1 + 3) + 4LL * v11);
        v14 = (char *)(*((_QWORD *)a1 + 4) + 4LL * v11);
        if ( v7 )
        {
          v3 = *(_DWORD *)v13;
          v7 = 0;
          v5 = *(_DWORD *)v14;
          v4 = *(_DWORD *)v13;
          v6 = *(_DWORD *)v14;
        }
        if ( v11 <= v12 )
        {
          v15 = v14 - v13;
          v16 = (unsigned __int16)(v12 - v11 + 1);
          do
          {
            if ( *(_DWORD *)v13 > v3 )
              v3 = *(_DWORD *)v13;
            if ( *(_DWORD *)v13 < v4 )
              v4 = *(_DWORD *)v13;
            v17 = *(_DWORD *)&v13[v15];
            v13 += 4;
            if ( v17 > v5 )
              v5 = v17;
            if ( v17 < v6 )
              v6 = v17;
            --v16;
          }
          while ( v16 );
        }
      }
      ++v8;
      --v10;
    }
    while ( v10 );
  }
  *(_DWORD *)(a2 + 20) = v4;
  v18 = (v4 + 31) >> 6;
  v19 = (v6 + 31) >> 6;
  v20 = (v3 + 32) >> 6;
  v21 = (v5 + 32) >> 6;
  *(_DWORD *)(a2 + 28) = v6;
  *(_DWORD *)(a2 + 24) = v3;
  *(_DWORD *)(a2 + 32) = v5;
  if ( (__int16)v18 != v18
    || (__int16)v19 != v19
    || (__int16)v20 != v20
    || (__int16)v21 != v21
    || v20 == 0x7FFF
    || v21 == 0x7FFF )
  {
    return 4609LL;
  }
  *(_DWORD *)(a2 + 16) = 0;
  if ( !v7 )
  {
    if ( v18 == v20 )
    {
      LOWORD(v20) = v20 + 1;
      *(_DWORD *)(a2 + 16) = 1;
    }
    if ( v19 == v21 )
    {
      LOWORD(v21) = v21 + 1;
      *(_DWORD *)(a2 + 16) = 1;
    }
  }
  *(_WORD *)(a2 + 8) = v18;
  result = 0LL;
  *(_WORD *)(a2 + 12) = v20;
  *(_WORD *)(a2 + 10) = v19;
  *(_WORD *)(a2 + 6) = v21;
  return result;
}
