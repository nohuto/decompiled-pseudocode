/*
 * XREFs of CcGetVacbFromFreeList @ 0x1400181EC
 * Callers:
 *     CcGetVacbMiss @ 0x1400182AC (CcGetVacbMiss.c)
 * Callees:
 *     CcReferenceVacbArray @ 0x1400181B8 (CcReferenceVacbArray.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

_QWORD *__fastcall CcGetVacbFromFreeList(char a1)
{
  _QWORD *v1; // rbx
  __int64 *v2; // rax
  int *v3; // r8
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx

  v1 = 0LL;
  if ( a1 )
  {
    v2 = &CcVacbFreeHighPriorityList;
    v3 = &CcNumberOfFreeHighPriorityVacbs;
  }
  else
  {
    v2 = &CcVacbFreeList;
    v3 = &CcNumberOfFreeVacbs;
  }
  v4 = (_QWORD *)*v2;
  if ( (__int64 *)*v2 != v2 )
  {
    ++CcNumberOfMappedVacbs;
    v1 = v4 - 2;
    v5 = v4;
    v6 = *v4;
    v7 = (_QWORD *)v4[1];
    if ( *(_QWORD **)(v6 + 8) != v5 || (_QWORD *)*v7 != v5 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    if ( !*v3 )
      KeBugCheckEx(0x34u, 0x316uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    --*v3;
    v8 = v1[4];
    v9 = ((__int64)v1 - v8 - 16) / 40;
    if ( (unsigned int)v9 > *(_DWORD *)(v8 + 8) )
      *(_DWORD *)(v8 + 8) = v9;
    if ( !*v1 )
      CcReferenceVacbArray(*(_DWORD *)v1[4]);
    v1[1] = -1LL;
  }
  return v1;
}
