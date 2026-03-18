/*
 * XREFs of LpcExitProcess @ 0x140460F24
 * Callers:
 *     PspProcessDelete @ 0x140460828 (PspProcessDelete.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140027B7C (PsReturnProcessPagedPoolQuota.c)
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
