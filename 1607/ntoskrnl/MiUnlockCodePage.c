/*
 * XREFs of MiUnlockCodePage @ 0x140081D40
 * Callers:
 *     MiLockCode @ 0x140015170 (MiLockCode.c)
 *     MiUnlockImageSection @ 0x140081C64 (MiUnlockImageSection.c)
 *     MiHandleDriverNonPagedSections @ 0x14047D840 (MiHandleDriverNonPagedSections.c)
 *     PopFreeHiberContext @ 0x14052EF94 (PopFreeHiberContext.c)
 *     MiUnlockDriverCode @ 0x140544D4C (MiUnlockDriverCode.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiUnlockCodePage(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v10; // r10
  int v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  if ( a1 <= a2 )
  {
    v3 = a1;
    do
    {
      v12 = MI_READ_PTE_LOCK_FREE(v3);
      v4 = MI_READ_PTE_LOCK_FREE(&v12);
      v8 = 48 * (v7 & (v4 >> 12)) - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v10);
      v11 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v11);
        while ( (*(_QWORD *)(v8 + 24) & 0x8000000000000000uLL) != 0 );
      }
      MiRemoveLockedPageChargeAndDecRef(v8, v5, v6, v7);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      v3 += 8LL;
    }
    while ( v3 <= a2 );
  }
}
