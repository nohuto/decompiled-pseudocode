/*
 * XREFs of RIMInitialize @ 0x1C007AFC0
 * Callers:
 *     DriverEntry @ 0x1C01372C0 (DriverEntry.c)
 * Callees:
 *     rimInitAllHidParseDelayLoads @ 0x1C007B128 (rimInitAllHidParseDelayLoads.c)
 *     rimLoadImage @ 0x1C007B310 (rimLoadImage.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     WppInitKm @ 0x1C0125310 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C01253A4 (WppLoadTracingSupport.c)
 */

__int64 __fastcall RIMInitialize(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_RIMTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm(a1, a2);
  gbRIMInitialized = 1;
  KeQueryPerformanceCounter(&gliQpcFreq);
  gObListLock = 0LL;
  gObRimList.Blink = &gObRimList;
  gObRimList.Flink = &gObRimList;
  qword_1C0101F78 = 0LL;
  gObRimDevList.Blink = &gObRimDevList;
  gObRimDevList.Flink = &gObRimDevList;
  gWatchDogQPCLock = 0LL;
  gObRimInputObserverList.Blink = &gObRimInputObserverList;
  gObRimInputObserverList.Flink = &gObRimInputObserverList;
  qword_1C0101F68 = 0LL;
  RawInputManagerObject::bTouchInputAllowed = 1;
  qword_1C0106538 = (__int64)&qword_1C0106530;
  qword_1C0106530 = (__int64)&qword_1C0106530;
  qword_1C0106548 = (__int64)&qword_1C0106540;
  qword_1C0106540 = (__int64)&qword_1C0106540;
  qword_1C0106528 = (__int64)&RawInputManagerObject::gHidRequestTable;
  RawInputManagerObject::gHidRequestTable = &RawInputManagerObject::gHidRequestTable;
  ghModHidParse = (void *)rimLoadImage();
  if ( ghModHidParse )
    rimInitAllHidParseDelayLoads();
  result = 0LL;
  gInputObserverLock = 0LL;
  qword_1C0106518 = 0LL;
  return result;
}
