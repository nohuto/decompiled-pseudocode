/*
 * XREFs of cjComputeGLYPHSET_TEMPLATE @ 0x1C012489C
 * Callers:
 *     bLoadGlyphSet @ 0x1C00AC344 (bLoadGlyphSet.c)
 * Callees:
 *     fs_WinNTGetGlyphIDs @ 0x1C0124958 (fs_WinNTGetGlyphIDs.c)
 *     pgsetComputeSymbolCP @ 0x1C0124BA4 (pgsetComputeSymbolCP.c)
 *     EngComputeGlyphSet @ 0x1C0124D00 (EngComputeGlyphSet.c)
 */

__int64 __fastcall cjComputeGLYPHSET_TEMPLATE(int a1, FD_GLYPHSET **a2, int a3, int a4)
{
  int v7; // r9d
  int v8; // r9d
  FD_GLYPHSET *v9; // rax
  FD_GLYPHSET *v10; // rbx
  int v11; // edi
  INT v13; // ecx
  __int64 phg; // [rsp+20h] [rbp-18h]

  *a2 = 0LL;
  v7 = a4 - 1;
  if ( !v7 )
  {
    v13 = 10000;
    goto LABEL_14;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v13 = 0;
LABEL_14:
    v9 = EngComputeGlyphSet(v13, 0, 256);
    goto LABEL_5;
  }
  if ( v8 != 2 )
    return 0LL;
  v9 = (FD_GLYPHSET *)pgsetComputeSymbolCP();
LABEL_5:
  v10 = v9;
  if ( v9 )
  {
    v11 = 0;
    v9->flAccel = 4;
    if ( !v9->cRuns )
    {
LABEL_9:
      *a2 = v10;
      return v10->cjThis;
    }
    while ( 1 )
    {
      phg = (__int64)v10->awcrun[v11].phg;
      if ( (unsigned int)fs_WinNTGetGlyphIDs(a1, v10->awcrun[v11].cGlyphs, 0, a3, phg, phg) )
        break;
      if ( ++v11 >= v10->cRuns )
        goto LABEL_9;
    }
    EngFreeMem(v10);
  }
  return 0LL;
}
