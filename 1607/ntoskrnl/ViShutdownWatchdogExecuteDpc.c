/*
 * XREFs of ViShutdownWatchdogExecuteDpc @ 0x1407119FC
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilDbgPrint @ 0x140222478 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorStoreTriageInformation @ 0x14070EB60 (VfErrorStoreTriageInformation.c)
 */

void __fastcall ViShutdownWatchdogExecuteDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned int v4; // eax

  v4 = ++ViShutdownTimeoutCount;
  if ( VfZeroAllPagesRunning != 1 || v4 >= 4 )
  {
    if ( !EtwpStopTraceCount || EtwpStopTraceCount == ViEtwLastStopTraceCount )
    {
      if ( v4 <= 1 )
      {
        if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
        {
          VfErrorStoreTriageInformation(196LL, 277LL, *(__int64 *)&VfShutdownThread, 0LL, 0LL);
          VfUtilDbgPrint(
            "\n"
            "Driver Verifier detected that this system didn't finish shutting down\n"
            "in more than 20 minutes. To display information about the thread that is\n"
            "responsible for shutting down, use these debugger commands:\n"
            "\n"
            "dp nt!VfShutdownThread l1;!thread @$p\n"
            "\n");
          __debugbreak();
        }
        VerifierBugCheckIfAppropriate(0xC4u, 0x115uLL, *(ULONG_PTR *)&VfShutdownThread, 0LL, 0LL);
      }
      else
      {
        _InterlockedAnd(&MmVerifierData, 0xFFFFFFFD);
      }
    }
    else
    {
      ViEtwLastStopTraceCount = EtwpStopTraceCount;
    }
  }
  ViShutdownScheduleWatchdog();
}
