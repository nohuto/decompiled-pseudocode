/*
 * XREFs of MiUnlockCodePage @ 0x1400A1DD0
 * Callers:
 *     MiLockCode @ 0x1400B7B30 (MiLockCode.c)
 *     MiUnlockImageSection @ 0x1400D25F0 (MiUnlockImageSection.c)
 *     MmUnlockPreChargedPagedPool @ 0x140117C20 (MmUnlockPreChargedPagedPool.c)
 *     MiHandleDriverNonPagedSections @ 0x1403CD42C (MiHandleDriverNonPagedSections.c)
 *     MiUnlockDriverCode @ 0x1404C32F0 (MiUnlockDriverCode.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiUnlockCodePage(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 <= a2 )
  {
    v3 = a1;
    do
    {
      v6 = MI_READ_PTE_LOCK_FREE(v3);
      v4 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v6) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      MiLockPageAtDpcInline(v4);
      MiRemoveLockedPageChargeAndDecRef(v4);
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      v3 += 8LL;
    }
    while ( v3 <= a2 );
  }
}
