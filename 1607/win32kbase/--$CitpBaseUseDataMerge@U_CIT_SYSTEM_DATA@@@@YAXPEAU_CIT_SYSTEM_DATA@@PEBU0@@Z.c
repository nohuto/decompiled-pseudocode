/*
 * XREFs of ??$CitpBaseUseDataMerge@U_CIT_SYSTEM_DATA@@@@YAXPEAU_CIT_SYSTEM_DATA@@PEBU0@@Z @ 0x1C00F5594
 * Callers:
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00F70F0 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0011A24 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpBitmapMerge@@YAXPEAU_CIT_BITMAP@@PEBU1@@Z @ 0x1C00F5F34 (-CitpBitmapMerge@@YAXPEAU_CIT_BITMAP@@PEBU1@@Z.c)
 */

void __fastcall CitpBaseUseDataMerge<_CIT_SYSTEM_DATA>(struct _CIT_BITMAP *a1, __int64 a2)
{
  __int64 v3; // rdi
  struct _CIT_BITMAP *v5; // r11
  __int64 v6; // rbp
  __int64 v7; // r11
  __int64 v8; // r9
  int *v9; // r10
  __int64 v10; // r11
  int v11; // eax
  int v12; // edx
  int v13; // r8d
  unsigned __int16 *v14; // rcx
  __int16 *v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // r10

  v3 = a2 - (_QWORD)a1;
  v5 = a1;
  v6 = 6LL;
  do
  {
    CitpBitmapMerge(v5, (struct _CIT_BITMAP *)((char *)v5 + v3));
    v5 = (struct _CIT_BITMAP *)(v7 + 16);
    --v6;
  }
  while ( v6 );
  v8 = a2 - (_QWORD)a1;
  v9 = (int *)((char *)a1 + 100);
  v10 = 11LL;
  do
  {
    v11 = -1;
    v12 = -1;
    v13 = *(int *)((char *)v9 + v8);
    if ( *(v9 - 1) + *(int *)((char *)v9 + v8 - 4) >= (unsigned int)*(v9 - 1) )
      v11 = *(v9 - 1) + *(int *)((char *)v9 + v8 - 4);
    *(v9 - 1) = v11;
    if ( *v9 + v13 >= (unsigned int)*v9 )
      v12 = *v9 + v13;
    *v9 = v12;
    v9 += 2;
    --v10;
  }
  while ( v10 );
  v14 = (unsigned __int16 *)((char *)a1 + 184);
  v15 = (__int16 *)(a2 + 184);
  do
  {
    CitpStatIncrement(v14, *v15);
    v14 = (unsigned __int16 *)(v16 + 2);
    v15 = (__int16 *)(v17 + 2);
  }
  while ( v18 != 1 );
}
