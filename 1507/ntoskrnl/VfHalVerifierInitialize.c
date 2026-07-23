/*
 * XREFs of VfHalVerifierInitialize @ 0x14073C4EC
 * Callers:
 *     VfInitVerifierComponents @ 0x140736E40 (VfInitVerifierComponents.c)
 * Callees:
 *     XdvExInitializePagedLookasideListInternal @ 0x140732628 (XdvExInitializePagedLookasideListInternal.c)
 */

__int64 VfHalVerifierInitialize()
{
  Lock = 0LL;
  qword_1407631F8 = 0LL;
  ViAdapterList.Blink = &ViAdapterList;
  ViAdapterList.Flink = &ViAdapterList;
  qword_1407631F0 = (__int64)&ViDomainCommonBufferList;
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
