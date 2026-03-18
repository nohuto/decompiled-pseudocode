/*
 * XREFs of MiUnlockPagedAddress @ 0x1400B4854
 * Callers:
 *     MiFreeClonePool @ 0x1400B47F4 (MiFreeClonePool.c)
 *     MiFreeCombinePool @ 0x1401F9DBC (MiFreeCombinePool.c)
 *     MiInsertNewCombineBlocks @ 0x1401F9E44 (MiInsertNewCombineBlocks.c)
 *     MiBuildNewCloneDescriptor @ 0x140527744 (MiBuildNewCloneDescriptor.c)
 *     MiFreeCloneDescriptor @ 0x14066323C (MiFreeCloneDescriptor.c)
 * Callees:
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E740 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F2550 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiUnlockPagedAddress(unsigned __int64 a1)
{
  __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v1 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v7) - 0x58000000000LL;
  v2 = (unsigned __int8)MiLockPageInline(v1);
  MiRemoveLockedPageChargeAndDecRef(v1, v3, v4, v5);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v2);
  return result;
}
