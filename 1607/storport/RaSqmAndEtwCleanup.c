/*
 * XREFs of RaSqmAndEtwCleanup @ 0x1C005E9D4
 * Callers:
 *     RaDeleteDriver @ 0x1C005E900 (RaDeleteDriver.c)
 * Callees:
 *     McGenEventUnregister @ 0x1C002B600 (McGenEventUnregister.c)
 *     StorSqmCleanup @ 0x1C0044D7C (StorSqmCleanup.c)
 *     StorpUnRegisterTraceLogging @ 0x1C005FBE8 (StorpUnRegisterTraceLogging.c)
 */

__int64 __fastcall RaSqmAndEtwCleanup(ULONGLONG *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(&g_RaidSQMAndETWRefCount, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    if ( g_RaidSQMInitialized == 1 )
    {
      KeCancelTimer((PKTIMER)&WPP_MAIN_CB.Reserved);
      StorSqmCleanup();
      g_RaidSQMInitialized = 0;
    }
    McGenEventUnregister(a1);
    return StorpUnRegisterTraceLogging();
  }
  return result;
}
