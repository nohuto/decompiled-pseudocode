/*
 * XREFs of PopTransitionToSleep @ 0x14039E084
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     PopDiagTraceEventNoPayload @ 0x1400F07C8 (PopDiagTraceEventNoPayload.c)
 *     MmFlushAllPages @ 0x140118BBC (MmFlushAllPages.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x1401D87EC (MmTrimFilePagesFromWorkingSets.c)
 *     MmDuplicateMemory @ 0x14039E1A0 (MmDuplicateMemory.c)
 *     PopInvokeSystemStateHandler @ 0x1403A0370 (PopInvokeSystemStateHandler.c)
 *     PopEnlargeHiberFile @ 0x1404F6A34 (PopEnlargeHiberFile.c)
 */

void __fastcall PopTransitionToSleep(struct _KEVENT *StartContext)
{
  unsigned int Lock; // ebx
  int v3; // eax
  char v4; // cl
  LONG v5; // eax
  LONG v6; // ecx
  _QWORD v7[6]; // [rsp+30h] [rbp-30h] BYREF
  char v8; // [rsp+70h] [rbp+10h] BYREF

  memset(v7, 0, 40);
  Lock = StartContext[3].Header.Lock;
  qword_1402DE3B0 = (__int64)KeGetCurrentThread();
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
    v5 = PopInvokeSystemStateHandler(Lock, qword_1402DE0C0);
  }
  v6 = v5;
  qword_1402DE718 = __rdtsc();
  StartContext[3].Header.SignalState = v6;
  KeSetEvent(StartContext + 2, 0, 0);
}
