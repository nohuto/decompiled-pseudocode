/*
 * XREFs of CcSetVacbInFreeList @ 0x140017E34
 * Callers:
 *     CcUnmapVacbArray @ 0x140017B40 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x1400182AC (CcGetVacbMiss.c)
 *     CcUnmapInactiveViews @ 0x140141F0C (CcUnmapInactiveViews.c)
 * Callees:
 *     CcDereferenceVacbArray @ 0x140017E94 (CcDereferenceVacbArray.c)
 *     CcSetVacbIntoList @ 0x1401B289C (CcSetVacbIntoList.c)
 */

__int64 __fastcall CcSetVacbInFreeList(_QWORD *a1, char a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // r8

  --CcNumberOfMappedVacbs;
  if ( a2 )
  {
    result = CcSetVacbIntoList(a1, &CcVacbFreeHighPriorityList, a1);
    *(_QWORD *)(v8 + 8) = 0LL;
    ++CcNumberOfFreeHighPriorityVacbs;
  }
  else
  {
    v3 = a1 + 2;
    v4 = CcVacbFreeList;
    v5 = &CcVacbFreeList;
    if ( *(__int64 **)(CcVacbFreeList + 8) != &CcVacbFreeList )
      __fastfail(3u);
    v3[1] = (__int64)&CcVacbFreeList;
    LOBYTE(v5) = 1;
    *v3 = v4;
    *(_QWORD *)(v4 + 8) = v3;
    CcVacbFreeList = (__int64)v3;
    v6 = a1[4];
    a1[1] = 0LL;
    result = CcDereferenceVacbArray(v6, v5);
    ++CcNumberOfFreeVacbs;
  }
  return result;
}
