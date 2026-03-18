/*
 * XREFs of MiDeleteEnclavePage @ 0x1401DFA64
 * Callers:
 *     MiDeleteEnclavePages @ 0x140629B8C (MiDeleteEnclavePages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     KeRemoveEnclavePage @ 0x14069F04C (KeRemoveEnclavePage.c)
 */

void __fastcall MiDeleteEnclavePage(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rax
  ULONG_PTR v6; // r14
  __int64 v7; // rsi
  unsigned __int8 v8; // al
  __int64 v9; // r8
  unsigned __int64 v10; // rdi
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = MI_READ_PTE_LOCK_FREE((__int64 *)a1);
  if ( v11 )
  {
    v4 = a1 << 25 >> 16;
    KeRemoveEnclavePage(v4);
    v5 = MI_READ_PTE_LOCK_FREE(&v11);
    *(_QWORD *)a1 = 0LL;
    v6 = (v5 >> 12) & 0xFFFFFFFFFLL;
    if ( MiPteInShadowRange(a1) )
      MiWritePteShadow(a1, 0LL);
    v7 = 48 * v6 - 0x58000000000LL;
    v8 = MiLockPageInline(v7);
    v9 = *(_QWORD *)(v7 + 24);
    *(_BYTE *)(v7 + 34) &= ~0x10u;
    v10 = v8;
    *(_WORD *)(v7 + 32) = 0;
    *(_QWORD *)(v7 + 24) = (v9 | 0x4000000000000000LL) ^ ((v9 | 0x4000000000000000LL) ^ ((v9 | 0x4000000000000000LL) - 1)) & 0x3FFFFFFFFFFFFFFFLL;
    MiInsertPageInFreeOrZeroedList(v6, 0x100uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v10);
    if ( a2 )
      MiInsertTbFlushEntry(a2, v4, 1LL, 0);
  }
}
