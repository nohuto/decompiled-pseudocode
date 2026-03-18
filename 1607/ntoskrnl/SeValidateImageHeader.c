/*
 * XREFs of SeValidateImageHeader @ 0x140527544
 * Callers:
 *     MiValidateSectionCreate @ 0x140526D8C (MiValidateSectionCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SepScheduleImageVerificationCallbacks @ 0x140527870 (SepScheduleImageVerificationCallbacks.c)
 */

__int64 __fastcall SeValidateImageHeader(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  if ( qword_140301140 )
  {
    if ( (a6 & 1) != 0 )
      _InterlockedCompareExchange(&dword_14033E224, 0, 0);
    return (unsigned int)((__int64 (__fastcall *)(__int64, __int64))qword_140301140)(a1, a2);
  }
  else
  {
    return (unsigned int)-1073740760;
  }
}
