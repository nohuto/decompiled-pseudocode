/*
 * XREFs of vFetchNotAndCopy @ 0x140237D9C
 * Callers:
 *     ?vPatNotRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x140237A90 (-vPatNotRect8@@YAXPEAU_PATBLTFRAME@@@Z.c)
 *     ?vPatNotRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1403396E0 (-vPatNotRow8@@YAXPEAU_PATBLTFRAME@@JH@Z.c)
 * Callees:
 *     ?CopyPattern@@YAXPEAKJJJ@Z @ 0x140199BA0 (-CopyPattern@@YAXPEAKJJJ@Z.c)
 */

void __fastcall vFetchNotAndCopy(__int64 a1)
{
  _DWORD *v1; // r11
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned int *v4; // r10
  __int64 v5; // rdx
  int *v6; // r8
  unsigned __int64 v7; // rcx
  int *v8; // rdx
  int *v9; // rax
  int v10; // r9d
  _DWORD *v11; // r8
  unsigned int v12; // r9d

  v1 = *(_DWORD **)(a1 + 8);
  v2 = *(unsigned int *)(a1 + 16);
  v3 = *(unsigned int *)(a1 + 20);
  v4 = *(unsigned int **)a1;
  v5 = *(unsigned int *)(a1 + 24);
  v6 = (_DWORD *)((char *)v1 + v2);
  v7 = *(_QWORD *)a1 + 4 * v5;
  if ( (_DWORD)v3 == 8 )
  {
    v10 = *v6;
    v11 = v6 + 1;
    v12 = ~v10;
    if ( (_DWORD)v2 )
      v11 = v1;
    CopyPattern(v4, v5, ~*v11, v12);
  }
  else
  {
    v8 = (_DWORD *)((char *)v1 + v3);
    while ( (unsigned __int64)v4 < v7 )
    {
      *v4 = ~*v6;
      v9 = v6 + 1;
      ++v4;
      v6 = v1;
      if ( v9 != v8 )
        v6 = v9;
    }
  }
}
