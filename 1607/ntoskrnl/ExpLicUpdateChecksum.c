/*
 * XREFs of ExpLicUpdateChecksum @ 0x14008795C
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x140496F04 (ExUpdateLicenseDataInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x140497EE0 (ExpGenuinePolicyCacheProvider.c)
 *     ExGetLicenseTamperState @ 0x1406ADD6C (ExGetLicenseTamperState.c)
 *     ExReArmFastCache @ 0x1406AE194 (ExReArmFastCache.c)
 *     ExSetLicenseTamperState @ 0x1406AE358 (ExSetLicenseTamperState.c)
 *     sub_1406AE54C @ 0x1406AE54C (sub_1406AE54C.c)
 *     sub_1406AF988 @ 0x1406AF988 (sub_1406AF988.c)
 *     sub_1406AFAE0 @ 0x1406AFAE0 (sub_1406AFAE0.c)
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
