/*
 * XREFs of SeValidateImageHeader @ 0x1404AF16C
 * Callers:
 *     MiValidateSectionCreate @ 0x1404AEAF4 (MiValidateSectionCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepScheduleImageVerificationCallbacks @ 0x1404AF334 (SepScheduleImageVerificationCallbacks.c)
 */

__int64 __fastcall SeValidateImageHeader(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  if ( qword_1402DBDE0 )
  {
    if ( (a5 & 1) != 0 )
      _InterlockedCompareExchange(&dword_14031A500, 0, 0);
    return (unsigned int)((__int64 (__fastcall *)(__int64, __int64))qword_1402DBDE0)(a1, a2);
  }
  else
  {
    return (unsigned int)-1073740760;
  }
}
