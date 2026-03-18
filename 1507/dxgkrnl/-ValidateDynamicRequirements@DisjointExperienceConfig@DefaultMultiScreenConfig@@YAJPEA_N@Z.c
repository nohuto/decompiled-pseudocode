/*
 * XREFs of ?ValidateDynamicRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEA_N@Z @ 0x1C00206E0
 * Callers:
 *     ?DetermineMultiScreenCapabilities@DefaultMultiScreenConfig@@YAJPEAW4MultiScreenShellCapabilities@@@Z @ 0x1C002012C (-DetermineMultiScreenCapabilities@DefaultMultiScreenConfig@@YAJPEAW4MultiScreenShellCapabilities.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ?RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x1C002029C (-RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z.c)
 */

__int64 __fastcall DefaultMultiScreenConfig::DisjointExperienceConfig::ValidateDynamicRequirements(
        DefaultMultiScreenConfig::DisjointExperienceConfig *this,
        bool *a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 result; // rax
  unsigned int v6[4]; // [rsp+20h] [rbp-238h] BYREF
  wchar_t pszDest[264]; // [rsp+30h] [rbp-228h] BYREF

  *(_BYTE *)this = 0;
  result = DefaultMultiScreenConfig::DisjointExperienceConfig::RegQueryControllerInstallKey(
             pszDest,
             (unsigned __int16 *)a2,
             v6,
             a4);
  if ( (int)result >= 0 )
    *(_BYTE *)this = v6[0] != 0;
  return result;
}
