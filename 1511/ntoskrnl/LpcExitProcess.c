/*
 * XREFs of LpcExitProcess @ 0x1403E6C50
 * Callers:
 *     PspProcessDelete @ 0x1403E3968 (PspProcessDelete.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x14006DCC4 (PsReturnProcessPagedPoolQuota.c)
 */

__int64 __fastcall LpcExitProcess(struct _KPROCESS *a1)
{
  if ( a1[2].Affinity.Bitmap[10] )
  {
    PsReturnProcessPagedPoolQuota(a1, a1[2].Affinity.Bitmap[10]);
    a1[2].Affinity.Bitmap[10] = 0LL;
  }
  return AlpcpCleanupProcessViews(a1);
}
