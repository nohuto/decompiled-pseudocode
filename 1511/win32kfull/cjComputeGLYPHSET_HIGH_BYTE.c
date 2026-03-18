/*
 * XREFs of cjComputeGLYPHSET_HIGH_BYTE @ 0x1C02457A0
 * Callers:
 *     bLoadGlyphSet @ 0x1C00A3E84 (bLoadGlyphSet.c)
 * Callees:
 *     CreateGlyphSetFromMITable @ 0x1C0244E64 (CreateGlyphSetFromMITable.c)
 */

__int64 __fastcall cjComputeGLYPHSET_HIGH_BYTE(_WORD *a1, ULONG **a2, __int64 a3)
{
  _WORD *v3; // rbx
  _WORD *v5; // r14
  _WORD *v6; // r9
  int v7; // edx
  __int64 v8; // r10
  unsigned __int16 v9; // ax
  _BYTE *v10; // rdi
  unsigned __int16 v11; // r8
  unsigned __int16 v12; // r9
  __int64 v13; // r11
  _WORD *v14; // r10
  unsigned __int16 v15; // ax
  int v16; // ecx
  __int64 v17; // rax
  unsigned __int16 i; // r10
  unsigned __int16 v19; // ax
  _WORD *v20; // rdx
  unsigned __int16 v21; // r9
  unsigned __int16 v22; // r15
  char *v23; // r12
  int v24; // r11d
  __int64 v25; // rbp
  unsigned __int16 v26; // cx
  int v27; // edx
  __int64 v28; // rcx
  unsigned int GlyphSetFromMITable; // ebx
  __int64 result; // rax

  v3 = a1 + 3;
  v5 = a1 + 259;
  v6 = a1 + 3;
  v7 = (unsigned __int16)__ROR2__(a1[260], 8);
  v8 = 256LL;
  do
  {
    v9 = __ROR2__(*v6, 8);
    if ( v9 )
      v7 += (unsigned __int16)__ROR2__(*(_WORD *)((char *)v5 + v9 + 2), 8);
    ++v6;
    --v8;
  }
  while ( v8 );
  if ( (unsigned int)(v7 - 1) <= 0xFFFE && (v10 = EngAllocMem(0, 8 * v7, 0x64667454u)) != 0LL )
  {
    v11 = 0;
    v12 = 0;
    v13 = 3LL;
    v14 = v3;
    do
    {
      if ( !__ROR2__(*v14, 8) )
      {
        v15 = __ROR2__(
                *(_WORD *)((char *)&v5[v13 - (unsigned __int16)__ROR2__(*v5, 8)] + (unsigned __int16)__ROR2__(v5[3], 8)),
                8);
        v16 = v15;
        if ( v15 )
        {
          v17 = v11++;
          v10[8 * v17] = v12;
          v10[8 * v17 + 1] = 0;
          *(_DWORD *)&v10[8 * v17 + 4] = v16;
        }
      }
      ++v12;
      ++v14;
      ++v13;
    }
    while ( v12 < 0x100u );
    for ( i = 0; i < 0x100u; ++i )
    {
      v19 = __ROR2__(*v3, 8);
      if ( v19 )
      {
        v20 = (_WORD *)((char *)v5 + v19);
        v21 = __ROR2__(*v20, 8);
        v22 = __ROR2__(v20[2], 8);
        v23 = (char *)v20 + (unsigned __int16)__ROR2__(v20[3], 8);
        v24 = v21 + (unsigned __int16)__ROR2__(v20[1], 8);
        if ( v21 < v24 )
        {
          v25 = v21;
          do
          {
            v26 = __ROR2__(*(_WORD *)&v23[2 * (v21 - v25) + 6], 8);
            v27 = v26;
            if ( v26 )
            {
              v28 = v11++;
              v10[8 * v28] = i;
              v10[8 * v28 + 1] = v21;
              v10[8 * v28 + 2] = 0;
              *(_DWORD *)&v10[8 * v28 + 4] = v27 + v22;
            }
            ++v21;
          }
          while ( v21 < v24 );
        }
      }
      ++v3;
    }
    GlyphSetFromMITable = CreateGlyphSetFromMITable(a3, (__int64)v10, v11, a2);
    EngFreeMem(v10);
    return GlyphSetFromMITable;
  }
  else
  {
    result = 0LL;
    *a2 = 0LL;
  }
  return result;
}
