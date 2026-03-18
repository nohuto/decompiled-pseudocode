/*
 * XREFs of CreateGlyphSetFromMITable @ 0x1C0244CD4
 * Callers:
 *     cjComputeGLYPHSET_HIGH_BYTE @ 0x1C0245678 (cjComputeGLYPHSET_HIGH_BYTE.c)
 *     cjComputeGLYPHSET_MSFT_GENERAL @ 0x1C0245890 (cjComputeGLYPHSET_MSFT_GENERAL.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C0124EE8 (ConvertToAndFromWideChar.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     GetCodePageFromSpecId @ 0x1C0245020 (GetCodePageFromSpecId.c)
 */

__int64 __fastcall CreateGlyphSetFromMITable(__int64 a1, __int64 a2, unsigned __int16 a3, ULONG **a4)
{
  int v8; // ebp
  int *v9; // rax
  int *v10; // rdi
  unsigned int CodePageFromSpecId; // r13d
  unsigned __int16 v13; // si
  int *v14; // rax
  unsigned int v15; // esi
  ULONG v16; // r15d
  __int64 v17; // rcx
  ULONG v18; // ebp
  ULONG *v19; // rax
  ULONG *v20; // r14
  _DWORD *v21; // rdx
  ULONG *v22; // r9
  int *v23; // rcx
  unsigned __int16 v24; // r10
  int v25; // r8d
  int v26[4]; // [rsp+30h] [rbp-38h] BYREF

  v8 = 0;
  v9 = (int *)EngAllocMem(0, 0xC0000u, 0x64667454u);
  v10 = v9;
  if ( !v9 )
  {
    if ( a4 )
      *a4 = 0LL;
    return 0LL;
  }
  memset(v9, 0, 0xC0000uLL);
  CodePageFromSpecId = GetCodePageFromSpecId(*(unsigned __int16 *)(a1 + 8));
  v13 = 0;
  if ( a3 )
  {
    while ( (unsigned int)ConvertToAndFromWideChar(
                            CodePageFromSpecId,
                            (WCHAR *)v26,
                            4u,
                            (CHAR *)(a2 + 8LL * v13),
                            2u,
                            1) != -1 )
    {
      if ( !v10[3 * LOWORD(v26[0])] )
      {
        v10[3 * LOWORD(v26[0])] = 1;
        LOWORD(v10[3 * LOWORD(v26[0]) + 1]) = v26[0];
        v10[3 * LOWORD(v26[0]) + 2] = *(_DWORD *)(a2 + 8LL * v13 + 4);
      }
      if ( ++v13 >= a3 )
        goto LABEL_10;
    }
    EngFreeMem(v10);
    if ( a4 )
      *a4 = 0LL;
    return 0LL;
  }
LABEL_10:
  v14 = v10;
  v15 = 0;
  v16 = 0;
  v17 = 0xFFFFLL;
  do
  {
    if ( *v14 )
    {
      v8 = 1;
      ++v16;
    }
    else if ( v8 )
    {
      v8 = 0;
      ++v15;
    }
    v14 += 3;
    --v17;
  }
  while ( v17 );
  if ( v8 )
    ++v15;
  if ( !v15 )
  {
    EngFreeMem(v10);
    if ( !a4 )
      return 0LL;
LABEL_22:
    *a4 = 0LL;
    return 0LL;
  }
  v18 = 4 * (v16 + 4 * (v15 + 1));
  if ( a4 )
  {
    v19 = (ULONG *)EngAllocMem(0, v18, 0x64667454u);
    v20 = v19;
    if ( !v19 )
    {
      EngFreeMem(v10);
      goto LABEL_22;
    }
    memset(v19, 0, v18);
    *v20 = v18;
    v20[1] = 0;
    v21 = v20 + 4;
    v22 = &v20[4 * v15 + 4];
    v20[3] = v15;
    v20[2] = v16;
    v23 = v10;
    v24 = 0;
    v25 = *v10;
    do
    {
      if ( !v25 )
      {
        do
          v23 += 3;
        while ( !*v23 );
      }
      *v21 = *((unsigned __int16 *)v23 + 2);
      *((_QWORD *)v21 + 1) = v22;
      while ( 1 )
      {
        v25 = *v23;
        if ( !*v23 )
          break;
        ++*((_WORD *)v21 + 1);
        *v22++ = v23[2];
        v23 += 3;
      }
      ++v24;
      v21 += 4;
    }
    while ( v24 < v15 );
    EngFreeMem(v10);
    *a4 = v20;
  }
  return v18;
}
