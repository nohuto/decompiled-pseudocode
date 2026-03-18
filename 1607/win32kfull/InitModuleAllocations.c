/*
 * XREFs of InitModuleAllocations @ 0x1C0130E10
 * Callers:
 *     <none>
 * Callees:
 *     ?InitPostMortemLogging@@YAXXZ @ 0x1C0130E58 (-InitPostMortemLogging@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitModuleAllocations()
{
  __int64 result; // rax

  InitPostMortemLogging();
  FastGetProfileDwordW(0LL, 2LL, L"USERExtraInstrumentations", gdwExtraInstrumentations, gdwExtraInstrumentations, 0);
  result = gdwExtraInstrumentations;
  if ( (gdwExtraInstrumentations & 4) != 0 )
  {
    result = gfRecordPnpNotification;
    gfRecordPnpNotification = 1;
  }
  return result;
}
