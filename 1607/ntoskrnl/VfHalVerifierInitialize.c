/*
 * XREFs of VfHalVerifierInitialize @ 0x140707BAC
 * Callers:
 *     VfInitVerifierComponents @ 0x140703330 (VfInitVerifierComponents.c)
 * Callees:
 *     XdvExInitializePagedLookasideListInternal @ 0x1406FE394 (XdvExInitializePagedLookasideListInternal.c)
 */

__int64 VfHalVerifierInitialize()
{
  Lock = 0LL;
  qword_14072C1D8 = 0LL;
  ViAdapterList.Blink = &ViAdapterList;
  ViAdapterList.Flink = &ViAdapterList;
  qword_14072C1D0 = (__int64)&ViDomainCommonBufferList;
  ViDomainCommonBufferList = (__int64)&ViDomainCommonBufferList;
  pXdvExInitializeNPagedLookasideList(
    (unsigned int)&ViHalWaitBlockLookaside,
    0,
    (unsigned int)VfUtilFreePoolCheckIRQL,
    512,
    152,
    1449943368,
    16,
    VfInitializedWithoutReboot,
    (__int64)ExInitializeNPagedLookasideListInternal);
  return ViHalApplySettings();
}
