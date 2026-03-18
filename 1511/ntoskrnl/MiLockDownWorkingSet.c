/*
 * XREFs of MiLockDownWorkingSet @ 0x14009A59C
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14046100C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MiAddLockedPageCharge @ 0x1400AA108 (MiAddLockedPageCharge.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiLockDownWorkingSet(ULONG_PTR a1, int a2)
{
  volatile LONG *v3; // rbp
  __int64 *v4; // rdi
  KIRQL v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  _BYTE v13[48]; // [rsp+20h] [rbp-68h] BYREF

  v3 = (volatile LONG *)(a1 + 1280);
  v4 = (__int64 *)MEMORY[0xFFFFF580108041F0];
  KiStackAttachProcess(a1);
  v5 = ExAcquireSpinLockExclusive(v3);
  v6 = 5LL;
  do
  {
    v7 = *v4;
    if ( (*v4 & 0x800000000000LL) != 0 )
      v8 = v7 | 0xFFFF000000000000uLL;
    else
      v8 = v7 & 0xFFFFFFFFFFFFLL;
    v9 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) - 0x58000000000LL;
    MiLockPageAtDpcInline(v9);
    if ( a2 == 1 )
      MiAddLockedPageCharge(v9, 1LL);
    else
      MiRemoveLockedPageChargeAndDecRef(v9);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v4 = (__int64 *)((char *)v4 + MEMORY[0xFFFFF58010804040]);
    --v6;
  }
  while ( v6 );
  LOBYTE(v10) = v5;
  MiUnlockWorkingSetExclusive((__int64)v3, v10, v11);
  return KiUnstackDetachProcess(v13, 0LL);
}
