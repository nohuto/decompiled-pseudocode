/*
 * XREFs of RIMInitialize @ 0x1C0051F80
 * Callers:
 *     DriverEntry @ 0x1C0154670 (DriverEntry.c)
 * Callees:
 *     RIMReadTTMRegistrySettings @ 0x1C0052094 (RIMReadTTMRegistrySettings.c)
 *     rimInitAllHidParseDelayLoads @ 0x1C00521EC (rimInitAllHidParseDelayLoads.c)
 *     rimLoadImage @ 0x1C00523E8 (rimLoadImage.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 RIMInitialize()
{
  gbRIMInitialized = 1;
  KeQueryPerformanceCounter(&gliQpcFreq);
  gDeadzoneLock = 0LL;
  qword_1C011E518 = 0LL;
  gObListLock = 0LL;
  qword_1C011E958 = 0LL;
  gWatchDogQPCLock = 0LL;
  qword_1C011E4F8 = 0LL;
  gObRimList.Blink = &gObRimList;
  gObRimList.Flink = &gObRimList;
  qword_1C011E4E8 = (__int64)&gObRimDevList;
  gObRimDevList = (__int64)&gObRimDevList;
  gObRimInputObserverList.Blink = &gObRimInputObserverList;
  gObRimInputObserverList.Flink = &gObRimInputObserverList;
  RawInputManagerObject::bTouchInputAllowed = 1;
  qword_1C011E538 = (__int64)&qword_1C011E530;
  qword_1C011E530 = (__int64)&qword_1C011E530;
  qword_1C011E548 = (__int64)&qword_1C011E540;
  qword_1C011E540 = (__int64)&qword_1C011E540;
  qword_1C011E528 = (__int64)&RawInputManagerObject::gHidRequestTable;
  RawInputManagerObject::gHidRequestTable = &RawInputManagerObject::gHidRequestTable;
  ghModHidParse = (void *)rimLoadImage();
  if ( ghModHidParse )
    rimInitAllHidParseDelayLoads();
  gInputObserverLock = 0LL;
  qword_1C011E508 = 0LL;
  RIMReadTTMRegistrySettings();
  return 0LL;
}
