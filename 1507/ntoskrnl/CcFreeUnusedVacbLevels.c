/*
 * XREFs of CcFreeUnusedVacbLevels @ 0x140078A30
 * Callers:
 *     CcExtendVacbArray @ 0x140078038 (CcExtendVacbArray.c)
 *     CcSetVacbLargeOffset @ 0x140078680 (CcSetVacbLargeOffset.c)
 *     CcAllocateVacbLevels @ 0x140078A84 (CcAllocateVacbLevels.c)
 *     CcReferenceFileOffset @ 0x1401DE144 (CcReferenceFileOffset.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall CcFreeUnusedVacbLevels(__int64 a1)
{
  __int64 *v2; // rdx
  void *v3; // rdx
  __int64 v4; // rax

  while ( 1 )
  {
    v2 = *(__int64 **)a1;
    if ( *(_QWORD *)a1 == a1 )
      break;
    v4 = *v2;
    if ( v2[1] != a1 || *(__int64 **)(v4 + 8) != v2 )
      __fastfail(3u);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(v4 + 8) = a1;
    ExFreeToNPagedLookasideList(&CcVacbLevelLookasideList, v2);
    --*(_DWORD *)(a1 + 24);
  }
  v3 = *(void **)(a1 + 16);
  if ( v3 )
  {
    ExFreeToNPagedLookasideList(&CcVacbLevelLookasideList, v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
