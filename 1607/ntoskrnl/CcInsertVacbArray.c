/*
 * XREFs of CcInsertVacbArray @ 0x140136844
 * Callers:
 *     CcGetVirtualAddress @ 0x140032F40 (CcGetVirtualAddress.c)
 *     CcInitializeVacbs @ 0x1407B499C (CcInitializeVacbs.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

_QWORD *__fastcall CcInsertVacbArray(_DWORD *a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rax
  bool v3; // cc
  unsigned int v4; // edx
  _QWORD *result; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx

  if ( (unsigned int)CcVacbArraysAllocated > 0x500 )
    KeBugCheckEx(0x34u, 0x18AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v1 = 0LL;
  v2 = (_QWORD *)CcVacbArrays;
  while ( *v2 )
  {
    v1 = (unsigned int)(v1 + 1);
    ++v2;
    if ( (unsigned int)v1 >= 0x500 )
      goto LABEL_6;
  }
  v3 = (unsigned int)v1 <= CcVacbArraysHighestUsedIndex;
  *(_QWORD *)(CcVacbArrays + 8 * v1) = a1;
  *a1 = v1;
  if ( !v3 )
    CcVacbArraysHighestUsedIndex = v1;
LABEL_6:
  if ( (_DWORD)v1 == 1280 )
    KeBugCheckEx(0x34u, 0x1A7uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = 0;
  result = a1 + 8;
  do
  {
    if ( *(result - 2) )
    {
      v7 = (_QWORD *)qword_140322F38;
      if ( *(__int64 **)qword_140322F38 != &CcVacbFreeHighPriorityList )
        __fastfail(3u);
      *result = &CcVacbFreeHighPriorityList;
      result[1] = v7;
      *v7 = result;
      ++CcNumberOfFreeHighPriorityVacbs;
      qword_140322F38 = (__int64)result;
    }
    else
    {
      v6 = (_QWORD *)qword_140322F28;
      if ( *(__int64 **)qword_140322F28 != &CcVacbFreeList )
        __fastfail(3u);
      *result = &CcVacbFreeList;
      result[1] = v6;
      *v6 = result;
      ++CcNumberOfFreeVacbs;
      qword_140322F28 = (__int64)result;
    }
    ++v4;
    result += 5;
  }
  while ( v4 < 0xCCC );
  return result;
}
