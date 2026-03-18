/*
 * XREFs of ClipInitHandles @ 0x140147F98
 * Callers:
 *     ExInitLicenseData @ 0x1407B505C (ExInitLicenseData.c)
 * Callees:
 *     <none>
 */

__int64 ClipInitHandles()
{
  qword_140747338 = (__int64)ExIsAppLicensed;
  qword_140747340 = (__int64)ExIsAppLicensedProduct;
  qword_140747348 = (__int64)ExIsWindowsToGo;
  qword_140747350 = (__int64)sub_1404F587C;
  qword_140747430 = (__int64)&sub_1406ADEB8;
  qword_140747438 = (__int64)ExUpdateLicenseDataInternal;
  qword_140747440 = (__int64)ExQueryLicenseValueInternal;
  qword_140747448 = (__int64)sub_1406AE414;
  qword_140747450 = (__int64)ExReArmFastCache;
  qword_140747458 = (__int64)ExUpdateOsPfnInRegistry;
  qword_140747460 = (__int64)SeExports;
  return ClipSpInitialize_0();
}
