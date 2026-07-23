/*
 * XREFs of MxMovePageTables @ 0x1407978A8
 * Callers:
 *     MxRelocatePageTables @ 0x14078F670 (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x1407978A8 (MxMovePageTables.c)
 * Callees:
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MxMovePageTables @ 0x1407978A8 (MxMovePageTables.c)
 *     MiIsRegularMemory @ 0x140797D00 (MiIsRegularMemory.c)
 *     MxSwapPages @ 0x140797EAC (MxSwapPages.c)
 */

__int64 __fastcall MxMovePageTables(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r10
  __int64 v10; // r11
  __int64 result; // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // r10
  __int64 v16; // rcx
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+20h]

  v18 = a4;
  v5 = a1;
  v17 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17);
  result = 0xFFFFFFFFFLL;
  v12 = (v8 >> 12) & 0xFFFFFFFFFLL;
  while ( v5 <= a2 )
  {
    if ( (v5 & 0xFFF) == 0 )
    {
      v17 = MI_READ_PTE_LOCK_FREE(v9 + (v10 & (v5 >> 9)));
      v12 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v17);
    }
    result = MI_READ_PTE_LOCK_FREE(v5);
    v17 = result;
    if ( (result & 1) != 0 && v5 != v9 + (v10 & 0x7FFFFB7DBEDF68LL) && (!a3 || (result & 0x80u) == 0LL) )
    {
      v13 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v17);
      if ( a3 )
      {
        MxSwapPages(a5, v5);
        MxMovePageTables((__int64)(v5 << 25) >> 16, ((__int64)(v5 << 25) >> 16) + 4088, a3 - 1, v18, a5);
        v17 = MI_READ_PTE_LOCK_FREE(v5);
        v15 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v17);
        v10 = 0x7FFFFFFFF8LL;
        goto LABEL_11;
      }
      result = MiIsRegularMemory(v14, v13);
      if ( (_DWORD)result )
      {
LABEL_11:
        v16 = 48 * v15 - 0x58000000000LL;
        result = (*(_QWORD *)(v16 + 40) ^ v12) & 0xFFFFFFFFFLL;
        *(_QWORD *)(v16 + 40) ^= result;
      }
      v9 = 0xFFFFF68000000000uLL;
    }
    v5 += 8LL;
  }
  return result;
}
