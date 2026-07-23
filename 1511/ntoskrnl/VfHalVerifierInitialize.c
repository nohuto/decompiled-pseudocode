/*
 * XREFs of VfHalVerifierInitialize @ 0x1406BBB08
 * Callers:
 *     VfInitVerifierComponents @ 0x1406B6B50 (VfInitVerifierComponents.c)
 * Callees:
 *     XdvExInitializePagedLookasideListInternal @ 0x1406B2618 (XdvExInitializePagedLookasideListInternal.c)
 */

__int64 VfHalVerifierInitialize()
{
  Lock = 0LL;
  qword_1406E01F8 = 0LL;
  ViAdapterList.Blink = &ViAdapterList;
  ViAdapterList.Flink = &ViAdapterList;
  qword_1406E01F0 = (__int64)&ViDomainCommonBufferList;
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
