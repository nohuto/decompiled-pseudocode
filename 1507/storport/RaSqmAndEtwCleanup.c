/*
 * XREFs of RaSqmAndEtwCleanup @ 0x1C0053730
 * Callers:
 *     RaDeleteDriver @ 0x1C005365C (RaDeleteDriver.c)
 * Callees:
 *     McGenEventUnregister @ 0x1C0025FE8 (McGenEventUnregister.c)
 *     StorSqmCleanup @ 0x1C003B64C (StorSqmCleanup.c)
 *     StorpUnRegisterTraceLogging @ 0x1C0054948 (StorpUnRegisterTraceLogging.c)
 */

__int64 __fastcall RaSqmAndEtwCleanup(ULONGLONG *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(&g_RaidSQMAndETWRefCount, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    if ( g_RaidSQMInitialized == 1 )
    {
      KeCancelTimer((PKTIMER)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      StorSqmCleanup();
      g_RaidSQMInitialized = 0;
    }
    McGenEventUnregister(a1);
    return StorpUnRegisterTraceLogging();
  }
  return result;
}
