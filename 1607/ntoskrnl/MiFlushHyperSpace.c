/*
 * XREFs of MiFlushHyperSpace @ 0x14009E1E8
 * Callers:
 *     MiFlushCacheForAttributeChange @ 0x14001D8F4 (MiFlushCacheForAttributeChange.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001DBA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiDecrementAndInsertStandbyPages @ 0x140035C70 (MiDecrementAndInsertStandbyPages.c)
 *     MiPfnShareCountIsZero @ 0x1400666E0 (MiPfnShareCountIsZero.c)
 *     MiAllocateHyperSpace @ 0x14009E16C (MiAllocateHyperSpace.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1400E0240 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400E0490 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

__int64 MiFlushHyperSpace()
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v4; // [rsp+24h] [rbp-D4h]
  __int64 v5; // [rsp+28h] [rbp-D0h]
  __int64 v6; // [rsp+30h] [rbp-C8h]
  __int64 v7; // [rsp+38h] [rbp-C0h]

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = (unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL;
  v5 = 20LL;
  v3 = 0;
  v4 = 1;
  v6 = 0LL;
  v7 = 0LL;
  MiInsertTbFlushEntry(&v3, v1, 64LL);
  result = MiFlushTbList(&v3);
  CurrentPrcb->HyperPte = (void *)v1;
  return result;
}
