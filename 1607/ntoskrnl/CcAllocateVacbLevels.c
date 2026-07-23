/*
 * XREFs of CcAllocateVacbLevels @ 0x14006D490
 * Callers:
 *     CcSetVacbLargeOffset @ 0x14006C770 (CcSetVacbLargeOffset.c)
 *     CcExtendVacbArray @ 0x14006CA98 (CcExtendVacbArray.c)
 *     CcReferenceFileOffset @ 0x1401B26F4 (CcReferenceFileOffset.c)
 * Callees:
 *     CcFreeUnusedVacbLevels @ 0x14006CEC4 (CcFreeUnusedVacbLevels.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14006FA30 (ExAllocateFromNPagedLookasideList.c)
 */

char __fastcall CcAllocateVacbLevels(unsigned int a1, char a2, __int64 a3)
{
  char v3; // di
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  PVOID v9; // rax

  v3 = 0;
  if ( a1 > *(_DWORD *)(a3 + 24) )
  {
    do
    {
      v7 = ExAllocateFromNPagedLookasideList(&CcVacbLevelLookasideList);
      if ( !v7 )
        goto LABEL_10;
      v8 = *(_QWORD **)(a3 + 8);
      if ( *v8 != a3 )
        __fastfail(3u);
      *v7 = a3;
      v7[1] = v8;
      *v8 = v7;
      *(_QWORD *)(a3 + 8) = v7;
    }
    while ( a1 > ++*(_DWORD *)(a3 + 24) );
  }
  if ( a2 )
  {
    if ( !*(_QWORD *)(a3 + 16) )
    {
      v9 = ExAllocateFromNPagedLookasideList(&CcVacbLevelWithBcbListHeadsLookasideList);
      *(_QWORD *)(a3 + 16) = v9;
      if ( !v9 )
      {
LABEL_10:
        CcFreeUnusedVacbLevels(a3);
        return v3;
      }
    }
  }
  return 1;
}
