/*
 * XREFs of cjComputeGLYPHSET_TEMPLATE @ 0x1C001C5E4
 * Callers:
 *     bLoadGlyphSet @ 0x1C001F968 (bLoadGlyphSet.c)
 * Callees:
 *     pgsetComputeSymbolCP @ 0x1C0017ADC (pgsetComputeSymbolCP.c)
 *     EngComputeGlyphSet @ 0x1C0017C40 (EngComputeGlyphSet.c)
 *     fs_WinNTGetGlyphIDs @ 0x1C001C6A0 (fs_WinNTGetGlyphIDs.c)
 */

__int64 __fastcall cjComputeGLYPHSET_TEMPLATE(int a1, _QWORD *a2, int a3, int a4)
{
  int v7; // r9d
  int v8; // r9d
  unsigned int *v9; // rax
  unsigned int *v10; // rbx
  int v11; // edi
  INT v13; // ecx
  __int64 v14; // [rsp+20h] [rbp-18h]

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
    v9 = (unsigned int *)EngComputeGlyphSet(v13, 0, 256);
    goto LABEL_5;
  }
  if ( v8 != 2 )
    return 0LL;
  v9 = (unsigned int *)pgsetComputeSymbolCP();
LABEL_5:
  v10 = v9;
  if ( v9 )
  {
    v11 = 0;
    v9[1] = 4;
    if ( !v9[3] )
    {
LABEL_9:
      *a2 = v10;
      return *v10;
    }
    while ( 1 )
    {
      v14 = *(_QWORD *)&v10[4 * v11 + 6];
      if ( (unsigned int)fs_WinNTGetGlyphIDs(a1, HIWORD(v10[4 * v11 + 4]), 0, a3, v14, v14) )
        break;
      if ( ++v11 >= v10[3] )
        goto LABEL_9;
    }
    EngFreeMem(v10);
  }
  return 0LL;
}
