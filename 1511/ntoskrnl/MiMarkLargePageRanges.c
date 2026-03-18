/*
 * XREFs of MiMarkLargePageRanges @ 0x140749388
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     RtlSetBitsEx @ 0x1400B4BC4 (RtlSetBitsEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMarkLargePageRanges(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 NextPageTable; // rbx
  __int64 *v7; // rbx
  unsigned __int64 v8; // rax
  int v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0xFFFFF6C000000000uLL;
  --CurrentThread->SpecialApcDisable;
  do
  {
    LOBYTE(a4) = 17;
    NextPageTable = MiGetNextPageTable(v5, 0xFFFFF6FFFFFFFFF8uLL, 0LL, a4, 3, &v10);
    if ( !NextPageTable )
      break;
    v7 = (__int64 *)(((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( v10 == 1 )
    {
      v11 = MI_READ_PTE_LOCK_FREE(v7);
      v8 = MI_READ_PTE_LOCK_FREE(&v11);
      if ( MI_IS_PFN((v8 >> 12) & 0xFFFFFFFFFLL) )
        RtlSetBitsEx((__int64)&qword_1402FF6E0, a4 >> 9, 1uLL);
    }
    v5 = (((_QWORD)v7 << 25) + 0x10000000LL) >> 16;
  }
  while ( v5 <= 0xFFFFF6FFFFFFFFF8uLL );
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
