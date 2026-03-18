/*
 * XREFs of MxZeroPageTablePfns @ 0x140748700
 * Callers:
 *     MiInitializePfnsForValidMappings @ 0x140745E40 (MiInitializePfnsForValidMappings.c)
 *     MxZeroPageTablePfns @ 0x140748700 (MxZeroPageTablePfns.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MxZeroPageTablePfns @ 0x140748700 (MxZeroPageTablePfns.c)
 */

void __fastcall MxZeroPageTablePfns(__int64 *a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 *v6; // rdi
  char v7; // bl
  unsigned __int64 v8; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  void *v10; // [rsp+48h] [rbp+10h]
  __int64 v11; // [rsp+58h] [rbp+20h]

  if ( (unsigned __int64)a1 <= a2 )
  {
    v11 = a4;
    v6 = a1;
    do
    {
      v9 = MI_READ_PTE_LOCK_FREE(v6);
      v7 = v9;
      if ( (v9 & 1) != 0 )
      {
        v10 = (void *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v9) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        v9 = MI_READ_PTE_LOCK_FREE((__int64 *)((((unsigned __int64)v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL));
        v8 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v9);
        memset((void *)(48 * v8 - 0x58000000000LL), 0, 0x30uLL);
        if ( a3 != 1 || v7 >= 0 )
        {
          memset(v10, 0, 0x30uLL);
          if ( v6 != (__int64 *)0xFFFFF6FB7DBEDF68LL && a3 > 1 )
            MxZeroPageTablePfns(
              (__int64)((_QWORD)v6 << 25) >> 16,
              ((__int64)((_QWORD)v6 << 25) >> 16) + 4088,
              a3 - 1,
              v11);
        }
      }
      ++v6;
    }
    while ( (unsigned __int64)v6 <= a2 );
  }
}
