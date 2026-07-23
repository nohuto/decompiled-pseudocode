/*
 * XREFs of LpcExitProcess @ 0x14045FDF4
 * Callers:
 *     PspProcessDelete @ 0x14045F6F8 (PspProcessDelete.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1400276FC (PsReturnProcessPagedPoolQuota.c)
 */

__int64 __fastcall LpcExitProcess(ULONG_PTR a1)
{
  if ( *(_QWORD *)(a1 + 1640) )
  {
    PsReturnProcessPagedPoolQuota(a1, *(_QWORD *)(a1 + 1640));
    *(_QWORD *)(a1 + 1640) = 0LL;
  }
  return AlpcpCleanupProcessViews(a1);
}
