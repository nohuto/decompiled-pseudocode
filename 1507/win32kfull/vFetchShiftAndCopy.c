/*
 * XREFs of vFetchShiftAndCopy @ 0x1C02D1EB8
 * Callers:
 *     ?vPatCpyRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C00025C0 (-vPatCpyRow8@@YAXPEAU_PATBLTFRAME@@JH@Z.c)
 *     ?vPatCpyRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C00D5080 (-vPatCpyRect8@@YAXPEAU_PATBLTFRAME@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vFetchShiftAndCopy(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r10
  unsigned int v3; // r9d
  unsigned int *v4; // r11
  __int64 v5; // rdx
  unsigned int *v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // r10

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(unsigned int *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 20);
  v4 = *(unsigned int **)a1;
  v5 = *(unsigned int *)(a1 + 24);
  v6 = (unsigned int *)(v1 + v2);
  v7 = *(_QWORD *)a1 + 4 * v5;
  if ( v3 == 8 )
  {
    v8 = (unsigned int)(v2 + 4);
    if ( (unsigned int)v8 >= 8 )
      v8 = (unsigned int)(v8 - 8);
    CopyPattern(v4, v5, *(_DWORD *)(v8 + v1), *v6);
  }
  else
  {
    while ( (unsigned __int64)v4 < v7 )
    {
      LODWORD(v2) = v2 + 4;
      *v4++ = *v6;
      if ( (unsigned int)v2 >= v3 )
        LODWORD(v2) = v2 - v3;
      v6 = (unsigned int *)(v1 + (unsigned int)v2);
    }
  }
}
