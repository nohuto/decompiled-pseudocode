/*
 * XREFs of MmFreeAccessPfnBuffer @ 0x1400D79C8
 * Callers:
 *     MiEmptyPageAccessLog @ 0x1400D71E0 (MiEmptyPageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x1400D7BDC (PfpReturnAccessBuffer.c)
 *     MiReturnCcAccessLog @ 0x140119F80 (MiReturnCcAccessLog.c)
 *     MiQueuePageAccessLog @ 0x140119FD0 (MiQueuePageAccessLog.c)
 *     PfTAccessTracingCleanup @ 0x1403EBF78 (PfTAccessTracingCleanup.c)
 *     PfpFlushBuffers @ 0x1404F7BD0 (PfpFlushBuffers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall MmFreeAccessPfnBuffer(__int64 a1, char a2)
{
  void *v3; // rcx

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v3 = *(void **)(a1 + 56);
    if ( (unsigned __int64)v3 > 1 )
    {
      if ( a2 )
        ObDereferenceObjectDeferDeleteWithTag(v3, 0x746C6644u);
      else
        ObfDereferenceObjectWithTag(v3, 0x746C6644u);
    }
  }
  ExFreePoolWithTag((PVOID)a1, 0);
}
