/*
 * XREFs of MiDeleteEnclavePage @ 0x1401F0108
 * Callers:
 *     MiDeleteEnclavePages @ 0x14065F3EC (MiDeleteEnclavePages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     KeRemoveEnclavePage @ 0x1406E60E0 (KeRemoveEnclavePage.c)
 */

void __fastcall MiDeleteEnclavePage(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rax
  ULONG_PTR v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = MI_READ_PTE_LOCK_FREE(a1);
  if ( v11 )
  {
    v4 = (__int64)(a1 << 25) >> 16;
    KeRemoveEnclavePage(v4);
    v5 = MI_READ_PTE_LOCK_FREE(&v11);
    *(_QWORD *)a1 = 0LL;
    v6 = (v5 >> 12) & 0xFFFFFFFFFLL;
    if ( MiPteInShadowRange(a1) )
      MiWritePteShadow(v7, 0LL);
    v8 = 48 * v6 - 0x58000000000LL;
    v9 = (unsigned __int8)MiLockPageInline(v8);
    *(_QWORD *)(v8 + 24) |= 0x4000000000000000uLL;
    *(_BYTE *)(v8 + 34) &= ~0x10u;
    v10 = *(_QWORD *)(v8 + 24);
    *(_WORD *)(v8 + 32) = 0;
    *(_QWORD *)(v8 + 24) = v10 ^ (v10 ^ (v10 - 1)) & 0x3FFFFFFFFFFFFFFFLL;
    MiInsertPageInFreeOrZeroedList(v6, 256);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v9);
    if ( a2 )
      MiInsertTbFlushEntry(a2, v4, 1LL, 0);
  }
}
