/*
 * XREFs of MiFlushHyperSpace @ 0x140010528
 * Callers:
 *     MiDecrementAndInsertStandbyPages @ 0x14000FBD0 (MiDecrementAndInsertStandbyPages.c)
 *     MiAllocateHyperSpace @ 0x14001242C (MiAllocateHyperSpace.c)
 *     MiDeleteBatch @ 0x14003D3A0 (MiDeleteBatch.c)
 *     MiDeletePteRun @ 0x14004FE20 (MiDeletePteRun.c)
 *     MiPfnShareCountIsZero @ 0x14006A920 (MiPfnShareCountIsZero.c)
 *     MiReplaceTransitionPage @ 0x1400714A0 (MiReplaceTransitionPage.c)
 *     MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE @ 0x1400A9904 (MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 * Callees:
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 MiFlushHyperSpace()
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v6; // [rsp+24h] [rbp-D4h]
  __int64 v7; // [rsp+28h] [rbp-D0h]
  __int64 v8; // [rsp+30h] [rbp-C8h]
  __int64 v9; // [rsp+38h] [rbp-C0h]

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = (unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL;
  v7 = 20LL;
  v5 = 0;
  v6 = 1;
  v8 = 0LL;
  v9 = 0LL;
  MiInsertTbFlushEntry(&v5, v1, 64LL, 0LL);
  result = MiFlushTbList(&v5, v2, v3);
  CurrentPrcb->HyperPte = (void *)v1;
  return result;
}
