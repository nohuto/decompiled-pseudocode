/*
 * XREFs of ExpLicUpdateChecksum @ 0x14008606C
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x140496474 (ExUpdateLicenseDataInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x140497450 (ExpGenuinePolicyCacheProvider.c)
 *     ExGetLicenseTamperState @ 0x1406ADC34 (ExGetLicenseTamperState.c)
 *     ExReArmFastCache @ 0x1406AE05C (ExReArmFastCache.c)
 *     ExSetLicenseTamperState @ 0x1406AE220 (ExSetLicenseTamperState.c)
 *     sub_1406AE414 @ 0x1406AE414 (sub_1406AE414.c)
 *     sub_1406AF850 @ 0x1406AF850 (sub_1406AF850.c)
 *     sub_1406AF9A8 @ 0x1406AF9A8 (sub_1406AF9A8.c)
 *     ExpInitFastCache @ 0x1407B5348 (ExpInitFastCache.c)
 *     sub_1407D22C0 @ 0x1407D22C0 (sub_1407D22C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpLicUpdateChecksum(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 || !a3 )
    return 3221225485LL;
  *a3 = 0LL;
  return result;
}
