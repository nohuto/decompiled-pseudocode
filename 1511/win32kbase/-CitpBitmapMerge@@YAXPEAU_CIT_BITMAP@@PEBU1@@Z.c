/*
 * XREFs of ?CitpBitmapMerge@@YAXPEAU_CIT_BITMAP@@PEBU1@@Z @ 0x1C00E3FAC
 * Callers:
 *     ??$CitpBaseUseDataMerge@U_CIT_SYSTEM_DATA@@@@YAXPEAU_CIT_SYSTEM_DATA@@PEBU0@@Z @ 0x1C00E3774 (--$CitpBaseUseDataMerge@U_CIT_SYSTEM_DATA@@@@YAXPEAU_CIT_SYSTEM_DATA@@PEBU0@@Z.c)
 *     ??$CitpBaseUseDataMerge@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEBU0@@Z @ 0x1C00E383C (--$CitpBaseUseDataMerge@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEBU0@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpBitmapMerge(struct _CIT_BITMAP *a1, const struct _CIT_BITMAP *a2)
{
  unsigned __int64 v2; // r9
  _QWORD *v3; // r8
  char *v4; // r10
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  signed __int64 v7; // r10

  v2 = *((_QWORD *)a2 + 1);
  v3 = *(_QWORD **)a1;
  if ( *((_QWORD *)a1 + 1) < v2 )
    v2 = *((_QWORD *)a1 + 1);
  v4 = *(char **)a2;
  if ( v2 > 8 )
  {
    v5 = ((v2 - 9) >> 3) + 1;
    v2 += -8LL * v5;
    do
    {
      v6 = *(_QWORD *)v4;
      v4 += 8;
      *v3++ |= v6;
      --v5;
    }
    while ( v5 );
  }
  if ( v2 )
  {
    v7 = v4 - (char *)v3;
    do
    {
      *(_BYTE *)v3 |= *((_BYTE *)v3 + v7);
      v3 = (_QWORD *)((char *)v3 + 1);
      --v2;
    }
    while ( v2 );
  }
}
