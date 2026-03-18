/*
 * XREFs of CcInsertVacbArray @ 0x140166950
 * Callers:
 *     CcGetVirtualAddress @ 0x1400501E0 (CcGetVirtualAddress.c)
 *     CcInitializeVacbs @ 0x1407DB71C (CcInitializeVacbs.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 *__fastcall CcInsertVacbArray(_DWORD *a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rax
  bool v3; // cc
  unsigned int v4; // edx
  __int64 *result; // rax
  __int64 **v6; // rcx
  __int64 **v7; // rcx

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
  result = (__int64 *)(a1 + 8);
  do
  {
    if ( *(result - 2) )
    {
      v7 = (__int64 **)qword_14034DD78;
      *result = (__int64)&CcVacbFreeHighPriorityList;
      result[1] = (__int64)v7;
      if ( *v7 != &CcVacbFreeHighPriorityList )
        __fastfail(3u);
      *v7 = result;
      ++CcNumberOfFreeHighPriorityVacbs;
      qword_14034DD78 = (__int64)result;
    }
    else
    {
      v6 = (__int64 **)qword_14034DD68;
      *result = (__int64)&CcVacbFreeList;
      result[1] = (__int64)v6;
      if ( *v6 != &CcVacbFreeList )
        __fastfail(3u);
      *v6 = result;
      ++CcNumberOfFreeVacbs;
      qword_14034DD68 = (__int64)result;
    }
    ++v4;
    result += 5;
  }
  while ( v4 < 0xCCC );
  return result;
}
