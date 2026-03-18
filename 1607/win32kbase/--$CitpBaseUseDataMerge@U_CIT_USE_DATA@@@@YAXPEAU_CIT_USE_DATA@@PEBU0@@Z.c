/*
 * XREFs of ??$CitpBaseUseDataMerge@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEBU0@@Z @ 0x1C00F565C
 * Callers:
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C00F63E4 (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00F70F0 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0011A24 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpBitmapMerge@@YAXPEAU_CIT_BITMAP@@PEBU1@@Z @ 0x1C00F5F34 (-CitpBitmapMerge@@YAXPEAU_CIT_BITMAP@@PEBU1@@Z.c)
 */

void __fastcall CitpBaseUseDataMerge<_CIT_USE_DATA>(struct _CIT_BITMAP *a1, const struct _CIT_BITMAP *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r10
  int *v6; // r9
  __int64 v7; // r11
  int v8; // eax
  int v9; // r8d
  int v10; // edx
  unsigned __int16 *v11; // rcx
  __int16 *v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r10

  CitpBitmapMerge(a1, a2);
  v5 = v4 - (_QWORD)a1;
  v6 = (int *)((char *)a1 + 20);
  v7 = 6LL;
  do
  {
    v8 = -1;
    v9 = *(int *)((char *)v6 + v5);
    if ( *(v6 - 1) + *(int *)((char *)v6 + v5 - 4) >= (unsigned int)*(v6 - 1) )
      v8 = *(v6 - 1) + *(int *)((char *)v6 + v5 - 4);
    v10 = -1;
    *(v6 - 1) = v8;
    if ( *v6 + v9 >= (unsigned int)*v6 )
      v10 = *v6 + v9;
    *v6 = v10;
    v6 += 2;
    --v7;
  }
  while ( v7 );
  v11 = (unsigned __int16 *)((char *)a1 + 64);
  v12 = (__int16 *)((char *)a2 + 64);
  do
  {
    CitpStatIncrement(v11, *v12);
    v11 = (unsigned __int16 *)(v13 + 2);
    v12 = (__int16 *)(v14 + 2);
  }
  while ( v15 != 1 );
}
