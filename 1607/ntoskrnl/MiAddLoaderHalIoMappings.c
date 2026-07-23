/*
 * XREFs of MiAddLoaderHalIoMappings @ 0x1407A3F38
 * Callers:
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiGetNextPageTable @ 0x140043470 (MiGetNextPageTable.c)
 *     MiReferenceIoPages @ 0x14009BB00 (MiReferenceIoPages.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiAddLoaderHalIoMappings(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 NextPageTable; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // r9d
  unsigned int v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  NextPageTable = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( NextPageTable <= v6 )
  {
    LOBYTE(a4) = 17;
    NextPageTable = MiGetNextPageTable(NextPageTable, v6, 0LL, a4, 1, &v13);
    if ( !NextPageTable )
      break;
    if ( !v13 )
    {
      while ( 1 )
      {
        v14 = MI_READ_PTE_LOCK_FREE(NextPageTable);
        a4 = v14;
        if ( (v14 & 1) != 0 )
        {
          v9 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v14);
          if ( !MiIsPfnInline(v9) )
          {
            if ( ((a4 >> 4) & 1) != 0 || (a4 & 8) == 0 )
              v11 = ((a4 >> 4) & 1) == 0;
            else
              v11 = 2;
            MiReferenceIoPages(1, v10, 1LL, v11, 0LL, 0LL);
          }
        }
        NextPageTable += 8LL;
        if ( NextPageTable > v6 )
          return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        if ( (NextPageTable & 0xFFF) == 0 )
          goto LABEL_19;
      }
    }
    v7 = v13;
    do
    {
      NextPageTable = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v7;
    }
    while ( v7 );
    NextPageTable += 8LL;
    if ( v13 )
    {
      v8 = v13;
      do
      {
        NextPageTable = (__int64)(NextPageTable << 25) >> 16;
        --v8;
      }
      while ( v8 );
    }
LABEL_19:
    ;
  }
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
