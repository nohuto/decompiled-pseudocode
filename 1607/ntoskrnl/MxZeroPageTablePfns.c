/*
 * XREFs of MxZeroPageTablePfns @ 0x1407B239C
 * Callers:
 *     MiInitializePfnsForValidMappings @ 0x14078F8AC (MiInitializePfnsForValidMappings.c)
 *     MxZeroPageTablePfns @ 0x1407B239C (MxZeroPageTablePfns.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetContainingPageTable @ 0x1401F241C (MiGetContainingPageTable.c)
 *     MxZeroPageTablePfns @ 0x1407B239C (MxZeroPageTablePfns.c)
 */

void __fastcall MxZeroPageTablePfns(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v6; // rdi
  char v7; // bl
  unsigned __int64 v8; // rax
  __int64 v9; // r10
  unsigned __int64 ContainingPageTable; // rax
  __int64 v11; // r10
  void *v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h]

  if ( a1 <= a2 )
  {
    v13 = a4;
    v6 = a1;
    do
    {
      v12 = (void *)MI_READ_PTE_LOCK_FREE(v6);
      v7 = (char)v12;
      if ( ((unsigned __int8)v12 & 1) != 0 )
      {
        v8 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v12);
        v12 = (void *)(v9 + 48 * v8);
        ContainingPageTable = MiGetContainingPageTable(v6);
        memset((void *)(v11 + 48 * ContainingPageTable), 0, 0x30uLL);
        if ( !a3 || v7 >= 0 )
        {
          memset(v12, 0, 0x30uLL);
          if ( v6 != 0xFFFFF6FB7DBEDF68uLL && a3 > 1 )
            MxZeroPageTablePfns((__int64)(v6 << 25) >> 16, ((__int64)(v6 << 25) >> 16) + 4088, a3 - 1, v13);
        }
      }
      v6 += 8LL;
    }
    while ( v6 <= a2 );
  }
}
