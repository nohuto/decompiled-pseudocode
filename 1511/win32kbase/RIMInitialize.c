/*
 * XREFs of RIMInitialize @ 0x1C0067120
 * Callers:
 *     DriverEntry @ 0x1C013B110 (DriverEntry.c)
 * Callees:
 *     rimInitAllHidParseDelayLoads @ 0x1C0067220 (rimInitAllHidParseDelayLoads.c)
 *     rimLoadImage @ 0x1C006741C (rimLoadImage.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 RIMInitialize()
{
  gbRIMInitialized = 1;
  KeQueryPerformanceCounter(&gliQpcFreq);
  gObListLock = 0LL;
  qword_1C0107518 = 0LL;
  gWatchDogQPCLock = 0LL;
  qword_1C01074F8 = 0LL;
  gObRimList.Blink = &gObRimList;
  gObRimList.Flink = &gObRimList;
  gObRimDevList.Blink = &gObRimDevList;
  gObRimDevList.Flink = &gObRimDevList;
  gObRimInputObserverList.Blink = &gObRimInputObserverList;
  gObRimInputObserverList.Flink = &gObRimInputObserverList;
  RawInputManagerObject::bTouchInputAllowed = 1;
  qword_1C01070E8 = (__int64)&qword_1C01070E0;
  qword_1C01070E0 = (__int64)&qword_1C01070E0;
  qword_1C01070F8 = (__int64)&qword_1C01070F0;
  qword_1C01070F0 = (__int64)&qword_1C01070F0;
  qword_1C01070D8 = (__int64)&RawInputManagerObject::gHidRequestTable;
  RawInputManagerObject::gHidRequestTable = &RawInputManagerObject::gHidRequestTable;
  ghModHidParse = (void *)rimLoadImage();
  if ( ghModHidParse )
    rimInitAllHidParseDelayLoads();
  gInputObserverLock = 0LL;
  qword_1C0107508 = 0LL;
  return 0LL;
}
