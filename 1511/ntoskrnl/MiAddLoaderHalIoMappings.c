/*
 * XREFs of MiAddLoaderHalIoMappings @ 0x14074CB5C
 * Callers:
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     MiReferenceIoPages @ 0x1400C16A0 (MiReferenceIoPages.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiAddLoaderHalIoMappings(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 NextPageTable; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  ULONG_PTR v10; // r10
  int v11; // r9d
  int v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( v5 <= v6 )
  {
    LOBYTE(a4) = 17;
    NextPageTable = MiGetNextPageTable(v5, v6, 0LL, a4, 1, &v13);
    v5 = NextPageTable;
    if ( !NextPageTable )
      break;
    if ( v13 != 1 )
    {
      while ( 1 )
      {
        v14 = MI_READ_PTE_LOCK_FREE((__int64 *)v5);
        v8 = v14;
        if ( (v14 & 1) != 0 )
        {
          v9 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v14);
          if ( !MI_IS_PFN(v9) )
          {
            if ( ((v8 >> 4) & 1) != 0 || (v8 & 8) == 0 )
              v11 = ((v8 >> 4) & 1) == 0;
            else
              v11 = 2;
            MiReferenceIoPages(1, v10, 1LL, v11, 0LL, 0LL);
          }
        }
        v5 += 8LL;
        if ( v5 > v6 )
          return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        if ( (v5 & 0xFFF) == 0 )
          goto LABEL_14;
      }
    }
    v5 = (__int64)(((NextPageTable & 0xFFFFFFFFFFFFF000uLL) << 16) + 0x10000000) >> 16;
LABEL_14:
    ;
  }
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
