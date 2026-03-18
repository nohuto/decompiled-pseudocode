/*
 * XREFs of MiUnlockPagedAddress @ 0x1400F3224
 * Callers:
 *     MiFreeClonePool @ 0x1400F31C4 (MiFreeClonePool.c)
 *     MiInsertNewCombineBlocks @ 0x14012B8A4 (MiInsertNewCombineBlocks.c)
 *     MiFreeCombinePool @ 0x14012F9E0 (MiFreeCombinePool.c)
 *     MiBuildNewCloneDescriptor @ 0x140460EE0 (MiBuildNewCloneDescriptor.c)
 *     MiFreeCloneDescriptor @ 0x14062CD38 (MiFreeCloneDescriptor.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiUnlockPagedAddress(unsigned __int64 a1)
{
  __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v1 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v4) - 0x58000000000LL;
  v2 = (unsigned __int8)MiLockPageInline(v1);
  MiRemoveLockedPageChargeAndDecRef(v1);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v2);
  return result;
}
