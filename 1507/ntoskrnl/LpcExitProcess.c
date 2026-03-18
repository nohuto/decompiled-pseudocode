/*
 * XREFs of LpcExitProcess @ 0x140504574
 * Callers:
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     PspProcessDelete @ 0x140503E8C (PspProcessDelete.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1400EFD68 (PsReturnProcessPagedPoolQuota.c)
 */

__int64 __fastcall LpcExitProcess(ULONG_PTR a1)
{
  if ( *(_QWORD *)(a1 + 1616) )
  {
    PsReturnProcessPagedPoolQuota(a1, *(_QWORD *)(a1 + 1616));
    *(_QWORD *)(a1 + 1616) = 0LL;
  }
  return AlpcpCleanupProcessViews(a1);
}
