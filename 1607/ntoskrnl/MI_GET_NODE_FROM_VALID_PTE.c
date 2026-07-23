/*
 * XREFs of MI_GET_NODE_FROM_VALID_PTE @ 0x1401F2340
 * Callers:
 *     MmGrowKernelStackEx @ 0x140136A80 (MmGrowKernelStackEx.c)
 * Callees:
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MI_GET_NODE_FROM_VALID_PTE(__int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = MI_READ_PTE_LOCK_FREE(a1);
  return (unsigned __int8)HIBYTE(*(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v2) - 0x57FFFFFFFD8LL)) >> 2;
}
