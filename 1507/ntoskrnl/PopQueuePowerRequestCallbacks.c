/*
 * XREFs of PopQueuePowerRequestCallbacks @ 0x1400D129C
 * Callers:
 *     PopQueuePowerRequestCallback @ 0x1400D09B4 (PopQueuePowerRequestCallback.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400D0F1C (PopProcessPowerRequestOverrideQueryResponse.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 */

void __fastcall PopQueuePowerRequestCallbacks(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  if ( !*(_BYTE *)(a1 + 77) )
  {
    v4 = 0LL;
    while ( !*(_BYTE *)(a1 + v4 + 72) )
    {
      if ( ++v4 >= 5 )
        return;
    }
    ObfReferenceObjectWithTag((PVOID)a1, 0x746C6644u);
    v5 = PopPowerRequestCallbacks;
    *(_QWORD *)(a1 + 56) = PopPowerRequestCallbacks;
    *(_QWORD *)(a1 + 64) = &PopPowerRequestCallbacks;
    if ( *(__int64 **)(v5 + 8) != &PopPowerRequestCallbacks )
      __fastfail(3u);
    *(_QWORD *)(v5 + 8) = a1 + 56;
    PopPowerRequestCallbacks = a1 + 56;
    *(_BYTE *)(a1 + 77) = 1;
    if ( a2 )
    {
      if ( !PopCallbackWorkItemScheduled )
      {
        PopCallbackWorkItemScheduled = 1;
        ExQueueWorkItem(&PopCallbackWorkItem, CriticalWorkQueue);
      }
    }
  }
}
