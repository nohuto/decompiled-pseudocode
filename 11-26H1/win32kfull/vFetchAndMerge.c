/*
 * XREFs of vFetchAndMerge @ 0x1401DCAEC
 * Callers:
 *     ?vPatXorRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1401DC5E0 (-vPatXorRow8@@YAXPEAU_PATBLTFRAME@@JH@Z.c)
 *     ?vPatXorRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1401DC7D0 (-vPatXorRect8@@YAXPEAU_PATBLTFRAME@@@Z.c)
 * Callees:
 *     ?MergePattern@@YAXPEAKJJJ@Z @ 0x140296200 (-MergePattern@@YAXPEAKJJJ@Z.c)
 */

void __fastcall vFetchAndMerge(__int64 a1)
{
  unsigned int *v1; // r10
  __int64 v2; // rdx
  __int64 v3; // rax
  int *v4; // r9
  __int64 v5; // r11
  unsigned __int64 v6; // r8
  int *v7; // rcx
  int *v8; // rdx
  int *v9; // rax
  int *v10; // r8

  v1 = *(unsigned int **)a1;
  v2 = *(unsigned int *)(a1 + 24);
  v3 = *(unsigned int *)(a1 + 20);
  v4 = *(int **)(a1 + 8);
  v5 = *(unsigned int *)(a1 + 16);
  v6 = *(_QWORD *)a1 + 4 * v2;
  v7 = (int *)((char *)v4 + v5);
  if ( (_DWORD)v3 == 8 )
  {
    v10 = v7 + 1;
    if ( (_DWORD)v5 )
      v10 = v4;
    MergePattern(v1, v2, *v10, *v7);
  }
  else
  {
    v8 = (int *)((char *)v4 + v3);
    while ( (unsigned __int64)v1 < v6 )
    {
      *v1 ^= *v7;
      v9 = v7 + 1;
      ++v1;
      v7 = v4;
      if ( v9 != v8 )
        v7 = v9;
    }
  }
}
