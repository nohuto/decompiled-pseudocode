/*
 * XREFs of vFetchShiftNotAndCopy @ 0x1C02D1F78
 * Callers:
 *     ?vPatNotRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C02BFC20 (-vPatNotRect8@@YAXPEAU_PATBLTFRAME@@@Z.c)
 *     ?vPatNotRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02BFF20 (-vPatNotRow8@@YAXPEAU_PATBLTFRAME@@JH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vFetchShiftNotAndCopy(__int64 a1)
{
  __int64 v1; // r11
  __int64 v2; // r8
  unsigned int v3; // edx
  unsigned int *v4; // r10
  __int64 v5; // rbx
  _DWORD *v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // r8

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(unsigned int *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 20);
  v4 = *(unsigned int **)a1;
  v5 = *(unsigned int *)(a1 + 24);
  v6 = (_DWORD *)(v1 + v2);
  v7 = *(_QWORD *)a1 + 4 * v5;
  if ( v3 == 8 )
  {
    v8 = (unsigned int)(v2 + 4);
    if ( (unsigned int)v8 >= 8 )
      v8 = (unsigned int)(v8 - 8);
    CopyPattern(v4, v5, ~*(_DWORD *)(v8 + v1), ~*v6);
  }
  else
  {
    while ( (unsigned __int64)v4 < v7 )
    {
      LODWORD(v2) = v2 + 4;
      *v4++ = ~*v6;
      if ( (unsigned int)v2 >= v3 )
        LODWORD(v2) = v2 - v3;
      v6 = (_DWORD *)(v1 + (unsigned int)v2);
    }
  }
}
