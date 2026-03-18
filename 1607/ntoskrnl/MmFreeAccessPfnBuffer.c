/*
 * XREFs of MmFreeAccessPfnBuffer @ 0x140006704
 * Callers:
 *     MiEmptyPageAccessLog @ 0x140027640 (MiEmptyPageAccessLog.c)
 *     MiQueuePageAccessLog @ 0x140086FA4 (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x1400B0994 (PfpReturnAccessBuffer.c)
 *     MiReturnCcAccessLog @ 0x1400CE7C4 (MiReturnCcAccessLog.c)
 *     PfTAccessTracingCleanup @ 0x1403C82C0 (PfTAccessTracingCleanup.c)
 *     PfpFlushBuffers @ 0x1403E8030 (PfpFlushBuffers.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14005DB70 (ObDereferenceObjectDeferDelete.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
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
