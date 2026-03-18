/*
 * XREFs of vFetchAndCopy @ 0x1C00D521C
 * Callers:
 *     ?vPatCpyRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C00025C0 (-vPatCpyRow8@@YAXPEAU_PATBLTFRAME@@JH@Z.c)
 *     ?vPatCpyRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C00D5080 (-vPatCpyRect8@@YAXPEAU_PATBLTFRAME@@@Z.c)
 *     ?vPatCpyRect8_8x8@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02BF300 (-vPatCpyRect8_8x8@@YAXPEAU_PATBLTFRAME@@H@Z.c)
 *     ?vPatCpyRow8_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02BF934 (-vPatCpyRow8_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z.c)
 * Callees:
 *     ?CopyPattern@@YAXPEAKJJJ@Z @ 0x1C02D1DA0 (-CopyPattern@@YAXPEAKJJJ@Z.c)
 */

void __fastcall vFetchAndCopy(__int64 a1)
{
  unsigned int *v1; // r10
  __int64 v2; // rbx
  __int64 v3; // r9
  int *v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // r11
  int *v7; // rcx
  int v8; // eax
  int v9; // r8d

  v1 = *(unsigned int **)a1;
  v2 = *(unsigned int *)(a1 + 24);
  v3 = *(unsigned int *)(a1 + 20);
  v4 = *(int **)(a1 + 8);
  v5 = *(unsigned int *)(a1 + 16);
  v6 = *(_QWORD *)a1 + 4 * v2;
  v7 = (int *)((char *)v4 + v5);
  if ( (_DWORD)v3 == 8 )
  {
    if ( (_DWORD)v5 )
      v9 = *v4;
    else
      v9 = v7[1];
    CopyPattern(v1, v2, v9, *v7);
  }
  else
  {
    while ( (unsigned __int64)v1 < v6 )
    {
      v8 = *v7++;
      *v1++ = v8;
      if ( v7 == (int *)((char *)v4 + v3) )
        v7 = v4;
    }
  }
}
