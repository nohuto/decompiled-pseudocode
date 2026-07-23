/*
 * XREFs of IopLiveDumpCorralProcessors @ 0x1403DAA8C
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1403DABEC (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400C8EB4 (KeSetSystemGroupAffinityThread.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     KeInsertQueueDpc @ 0x1400D6140 (KeInsertQueueDpc.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x1401CB32C (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x1403DB0C0 (IopLiveDumpInitiateCorralStateChange.c)
 *     IopLiveDumpLockPages @ 0x140627388 (IopLiveDumpLockPages.c)
 */

__int64 __fastcall IopLiveDumpCorralProcessors(char *DeferredContext)
{
  unsigned __int8 CurrentIrql; // al
  int v3; // esi
  __int64 result; // rax
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int16 *v6[2]; // [rsp+30h] [rbp-20h] BYREF
  __int16 v7; // [rsp+40h] [rbp-10h]
  int v8; // [rsp+80h] [rbp+30h] BYREF
  int v9; // [rsp+88h] [rbp+38h] BYREF

  *((_DWORD *)DeferredContext + 2) = 0;
  *((_DWORD *)DeferredContext + 3) = 0;
  *((_DWORD *)DeferredContext + 4) = 0;
  *((_DWORD *)DeferredContext + 5) = 0;
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_DWORD *)DeferredContext + 30) = 0;
  IopLiveDumpLockPages();
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
  Affinity.Mask = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, (PGROUP_AFFINITY)DeferredContext + 6);
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_DWORD *)DeferredContext + 3) = 1;
  IopLiveDumpTraceSystemQuiesceStart();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  DeferredContext[88] = CurrentIrql;
  KeInitializeDpc((PRKDPC)(DeferredContext + 24), (PKDEFERRED_ROUTINE)IopLiveDumpCorralDpc, DeferredContext);
  DeferredContext[25] = 2;
  v6[1] = (unsigned __int16 *)qword_1403AA618[0];
  v6[0] = (unsigned __int16 *)KeActiveProcessors;
  v7 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v8, v6) )
  {
    if ( v8 == *((_DWORD *)DeferredContext + 28) )
    {
      _InterlockedIncrement((volatile signed __int32 *)DeferredContext + 4);
    }
    else
    {
      v3 = *((_DWORD *)DeferredContext + 4);
      if ( !*((_QWORD *)DeferredContext + 10) )
        *((_WORD *)DeferredContext + 13) = v8 + 640;
      KeInsertQueueDpc((PRKDPC)(DeferredContext + 24), 0LL, 0LL);
      v9 = 0;
      while ( v3 == *((_DWORD *)DeferredContext + 4) )
        KeYieldProcessorEx(&v9);
    }
  }
  *((_DWORD *)DeferredContext + 5) = *((_DWORD *)DeferredContext + 4);
  IopLiveDumpInitiateCorralStateChange(DeferredContext, 2LL);
  PoAllProcIntrDisabled = 1;
  result = IopLiveDumpInitiateCorralStateChange(DeferredContext, 3LL);
  *((_DWORD *)DeferredContext + 2) |= 1u;
  return result;
}
