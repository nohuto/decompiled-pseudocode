/*
 * XREFs of MmFreeAccessPfnBuffer @ 0x1400FAAA8
 * Callers:
 *     MiEmptyPageAccessLog @ 0x14006DE20 (MiEmptyPageAccessLog.c)
 *     MiReturnCcAccessLog @ 0x1400A6FC0 (MiReturnCcAccessLog.c)
 *     MiQueuePageAccessLog @ 0x1400F152C (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x1400FAC6C (PfpReturnAccessBuffer.c)
 *     PfTAccessTracingCleanup @ 0x1403A57AC (PfTAccessTracingCleanup.c)
 *     PfpFlushBuffers @ 0x1404D35C0 (PfpFlushBuffers.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14007DFD0 (ObDereferenceObjectDeferDeleteWithTag.c)
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
        ObfDereferenceObject(v3);
    }
  }
  ExFreePoolWithTag((PVOID)a1, 0);
}
