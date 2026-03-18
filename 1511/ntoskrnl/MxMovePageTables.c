/*
 * XREFs of MxMovePageTables @ 0x140747B78
 * Callers:
 *     MxRelocatePageTables @ 0x140745ED8 (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x140747B78 (MxMovePageTables.c)
 * Callees:
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MxMovePageTables @ 0x140747B78 (MxMovePageTables.c)
 *     MiIsRegularMemory @ 0x140748108 (MiIsRegularMemory.c)
 *     MxSwapPages @ 0x14074817C (MxSwapPages.c)
 */

__int64 __fastcall MxMovePageTables(__int64 *a1, unsigned __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rbx
  unsigned __int64 v8; // rsi
  __int64 result; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rbp
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp+10h]
  __int64 v17; // [rsp+68h] [rbp+20h]

  v17 = a4;
  v16 = a2;
  v5 = a1;
  v15 = MI_READ_PTE_LOCK_FREE((__int64 *)((((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL));
  v8 = MI_READ_PTE_LOCK_FREE(&v15);
  result = 0xFFFFFFFFFLL;
  v10 = (v8 >> 12) & 0xFFFFFFFFFLL;
  if ( (unsigned __int64)v5 <= a2 )
  {
    v11 = a5;
    while ( 1 )
    {
      if ( ((unsigned __int16)v5 & 0xFFF) == 0 )
      {
        v15 = MI_READ_PTE_LOCK_FREE((__int64 *)((((unsigned __int64)v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL));
        v10 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v15);
      }
      result = MI_READ_PTE_LOCK_FREE(v5);
      v15 = result;
      if ( (result & 1) == 0 || v5 == (__int64 *)0xFFFFF6FB7DBEDF68LL || a3 == 1 && (result & 0x80u) != 0LL )
        goto LABEL_13;
      v12 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v15);
      if ( a3 )
        break;
      result = MiIsRegularMemory(v17, v12);
      if ( (_DWORD)result )
        goto LABEL_12;
LABEL_13:
      if ( (unsigned __int64)++v5 > v16 )
        return result;
    }
    MxSwapPages(v11, v5);
    MxMovePageTables((__int64)((_QWORD)v5 << 25) >> 16, ((__int64)((_QWORD)v5 << 25) >> 16) + 4088, a3 - 1, v17, v11);
    v15 = MI_READ_PTE_LOCK_FREE(v5);
    v13 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v15);
LABEL_12:
    v14 = 48 * v13 - 0x58000000000LL;
    result = (*(_QWORD *)(v14 + 40) ^ v10) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v14 + 40) ^= result;
    goto LABEL_13;
  }
  return result;
}
