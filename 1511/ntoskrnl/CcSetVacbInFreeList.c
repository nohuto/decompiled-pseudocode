/*
 * XREFs of CcSetVacbInFreeList @ 0x1400B21E0
 * Callers:
 *     CcGetVacbMiss @ 0x1400AEA80 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x1400B1DF0 (CcUnmapVacbArray.c)
 *     CcUnmapInactiveViews @ 0x140138B9C (CcUnmapInactiveViews.c)
 * Callees:
 *     CcDereferenceVacbArray @ 0x1400B2240 (CcDereferenceVacbArray.c)
 *     CcSetVacbIntoList @ 0x1401A9B58 (CcSetVacbIntoList.c)
 */

__int64 __fastcall CcSetVacbInFreeList(_QWORD *a1, char a2)
{
  _QWORD *v3; // rax
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
    *v3 = CcVacbFreeList;
    v3[1] = &CcVacbFreeList;
    if ( *(__int64 **)(v4 + 8) != &CcVacbFreeList )
      __fastfail(3u);
    *(_QWORD *)(v4 + 8) = v3;
    LOBYTE(v5) = 1;
    CcVacbFreeList = (__int64)v3;
    v6 = a1[4];
    a1[1] = 0LL;
    result = CcDereferenceVacbArray(v6, v5);
    ++CcNumberOfFreeVacbs;
  }
  return result;
}
