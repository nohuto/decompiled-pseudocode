/*
 * XREFs of SeValidateImageHeader @ 0x14051B2B0
 * Callers:
 *     MiValidateSectionCreate @ 0x14051B38C (MiValidateSectionCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SepScheduleImageVerificationCallbacks @ 0x1405810DC (SepScheduleImageVerificationCallbacks.c)
 */

__int64 __fastcall SeValidateImageHeader(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  if ( qword_14032C140 )
  {
    if ( (a5 & 1) != 0 )
      _InterlockedCompareExchange(&dword_14036A864, 0, 0);
    return (unsigned int)((__int64 (__fastcall *)(__int64, __int64))qword_14032C140)(a1, a2);
  }
  else
  {
    return (unsigned int)-1073740760;
  }
}
