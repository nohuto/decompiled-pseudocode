/*
 * XREFs of PopTransitionToSleep @ 0x1403C9804
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     PopDiagTraceEventNoPayload @ 0x1400AE73C (PopDiagTraceEventNoPayload.c)
 *     MmFlushAllPages @ 0x1401136F0 (MmFlushAllPages.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x1401EA32C (MmTrimFilePagesFromWorkingSets.c)
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 *     PopInvokeSystemStateHandler @ 0x1403CC110 (PopInvokeSystemStateHandler.c)
 *     PopEnlargeHiberFile @ 0x14052F674 (PopEnlargeHiberFile.c)
 */

void __fastcall PopTransitionToSleep(struct _KEVENT *StartContext)
{
  unsigned int Lock; // ebx
  int v3; // eax
  char v4; // cl
  LONG v5; // eax
  LONG v6; // ecx
  _QWORD v7[7]; // [rsp+30h] [rbp-38h] BYREF
  char v8; // [rsp+70h] [rbp+8h] BYREF

  memset(v7, 0, 0x28uLL);
  Lock = StartContext[3].Header.Lock;
  qword_140303590 = (__int64)KeGetCurrentThread();
  v8 = 0;
  if ( Lock == 3 || Lock == 6 )
  {
    v3 = PopEnlargeHiberFile(&v8);
    v4 = v8;
    v7[0] = xHalPciEarlyRestore;
    if ( v3 < 0 )
      v4 = 1;
    v7[3] = 0LL;
    v7[1] = PopEndMirroring;
    v7[2] = PopMirrorPhysicalMemory;
    if ( Lock == 6 || v4 )
    {
      LODWORD(v7[4]) = 17;
      MmTrimFilePagesFromWorkingSets();
    }
    else
    {
      LODWORD(v7[4]) = 20;
    }
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHALLPAGES);
    if ( Lock == 3 )
      MmFlushAllPages();
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHALLPAGES_END);
    PopHibernatePowerStateHandlerType = Lock;
    PopSleeperHandoff = StartContext;
    v5 = MmDuplicateMemory(v7);
    PopSleeperHandoff = 0LL;
    PopHibernatePowerStateHandlerType = 7;
  }
  else
  {
    KeSetEvent(StartContext, 0, 1u);
    KeWaitForSingleObject(&StartContext[1], Executive, 0, 0, 0LL);
    v5 = PopInvokeSystemStateHandler(Lock, qword_1403033E0);
  }
  v6 = v5;
  qword_1403038F8 = __rdtsc();
  StartContext[3].Header.SignalState = v6;
  KeSetEvent(StartContext + 2, 0, 0);
}
