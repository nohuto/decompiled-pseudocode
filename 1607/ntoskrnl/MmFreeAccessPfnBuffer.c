/*
 * XREFs of MmFreeAccessPfnBuffer @ 0x140006874
 * Callers:
 *     MiEmptyPageAccessLog @ 0x1400271C0 (MiEmptyPageAccessLog.c)
 *     MiQueuePageAccessLog @ 0x140088894 (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x1400AEA04 (PfpReturnAccessBuffer.c)
 *     MiReturnCcAccessLog @ 0x1400CC664 (MiReturnCcAccessLog.c)
 *     PfTAccessTracingCleanup @ 0x1403C82C0 (PfTAccessTracingCleanup.c)
 *     PfpFlushBuffers @ 0x1403E9660 (PfpFlushBuffers.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14005D6F0 (ObDereferenceObjectDeferDelete.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
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
        ObDereferenceObjectDeferDelete(v3);
      else
        ObfDereferenceObjectWithTag(v3, 0x746C6644u);
    }
  }
  ExFreePoolWithTag((PVOID)a1, 0);
}
