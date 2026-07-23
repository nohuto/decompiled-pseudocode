/*
 * XREFs of CcRemoveVacbArray @ 0x1401B2798
 * Callers:
 *     CcDereferenceVacbArray @ 0x140017E94 (CcDereferenceVacbArray.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

_QWORD *__fastcall CcRemoveVacbArray(unsigned int *a1)
{
  unsigned int v1; // edx
  __int64 v2; // r10
  int v3; // r8d
  _QWORD *v4; // r9
  int v5; // eax
  _QWORD *result; // rax
  __int64 v7; // r8
  _QWORD *v8; // rcx

  v1 = 0;
  if ( a1[1] )
    KeBugCheckEx(0x34u, 0x1E4uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v2 = *a1;
  if ( *(unsigned int **)(CcVacbArrays + 8 * v2) != a1 )
    KeBugCheckEx(0x34u, 0x1EAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v3 = CcVacbArraysHighestUsedIndex;
  if ( (_DWORD)v2 == CcVacbArraysHighestUsedIndex && CcVacbArraysHighestUsedIndex )
  {
    v4 = (_QWORD *)(CcVacbArrays + 8LL * (unsigned int)CcVacbArraysHighestUsedIndex);
    while ( !*v4 )
    {
      --v4;
      if ( !--v3 )
        goto LABEL_10;
    }
    CcVacbArraysHighestUsedIndex = v3;
  }
LABEL_10:
  v5 = CcVacbArraysAllocated;
  *(_QWORD *)(CcVacbArrays + 8 * v2) = 0LL;
  if ( !v5 )
    KeBugCheckEx(0x34u, 0x206uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcVacbArraysAllocated = v5 - 1;
  result = a1 + 8;
  do
  {
    v7 = *result;
    v8 = (_QWORD *)result[1];
    if ( *(_QWORD **)(*result + 8LL) != result || (_QWORD *)*v8 != result )
      __fastfail(3u);
    ++v1;
    *v8 = v7;
    result += 5;
    *(_QWORD *)(v7 + 8) = v8;
  }
  while ( v1 < 0xCCC );
  CcNumberOfFreeVacbs -= 3276;
  return result;
}
