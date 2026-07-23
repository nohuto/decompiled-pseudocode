/*
 * XREFs of CmpRemoveFromSecurityCache @ 0x1404BCDEC
 * Callers:
 *     CmpRemoveSecurityCellList @ 0x1400A9B6C (CmpRemoveSecurityCellList.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1403FCE20 (CmpFindSecurityCellCacheIndex.c)
 */

char __fastcall CmpRemoveFromSecurityCache(__int64 a1, int a2)
{
  char result; // al
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 **v7; // rax
  __int64 *v8; // rcx
  __int64 *v9; // rdx
  unsigned int v10; // [rsp+40h] [rbp+18h] BYREF

  result = CmpFindSecurityCellCacheIndex(a1, a2, &v10);
  if ( result )
  {
    v4 = v10;
    v5 = 16LL * v10;
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 3056) + v5 + 8);
    v7 = *(__int64 ***)(v6 + 16);
    v8 = (__int64 *)(v6 + 8);
    v9 = (__int64 *)*v8;
    if ( *(__int64 **)(*v8 + 8) != v8 || *v7 != v8 )
      __fastfail(3u);
    *v7 = v9;
    v9[1] = (__int64)v7;
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 3056) + v5 + 8), 0x63534D43u);
    result = (unsigned __int8)memmove(
                                (void *)(v5 + *(_QWORD *)(a1 + 3056)),
                                (const void *)(*(_QWORD *)(a1 + 3056) + 16LL * (v4 + 1)),
                                16LL * (*(_DWORD *)(a1 + 3040) - v4 - 1));
    --*(_DWORD *)(a1 + 3040);
  }
  return result;
}
