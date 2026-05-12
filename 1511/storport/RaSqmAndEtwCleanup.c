/*
 * XREFs of RaSqmAndEtwCleanup @ 0x1C005766C
 * Callers:
 *     RaDeleteDriver @ 0x1C0057598 (RaDeleteDriver.c)
 * Callees:
 *     McGenEventUnregister @ 0x1C0027F80 (McGenEventUnregister.c)
 *     StorSqmCleanup @ 0x1C003E01C (StorSqmCleanup.c)
 *     StorpUnRegisterTraceLogging @ 0x1C0058888 (StorpUnRegisterTraceLogging.c)
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
