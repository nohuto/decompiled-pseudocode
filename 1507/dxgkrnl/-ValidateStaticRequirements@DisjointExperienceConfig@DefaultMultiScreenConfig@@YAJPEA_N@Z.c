/*
 * XREFs of ?ValidateStaticRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEA_N@Z @ 0x1C0020744
 * Callers:
 *     ?DetermineMultiScreenCapabilities@DefaultMultiScreenConfig@@YAJPEAW4MultiScreenShellCapabilities@@@Z @ 0x1C002012C (-DetermineMultiScreenCapabilities@DefaultMultiScreenConfig@@YAJPEAW4MultiScreenShellCapabilities.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ?RegQuerySoCName@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x1C002057C (-RegQuerySoCName@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z.c)
 */

__int64 __fastcall DefaultMultiScreenConfig::DisjointExperienceConfig::ValidateStaticRequirements(
        DefaultMultiScreenConfig::DisjointExperienceConfig *this,
        bool *a2)
{
  unsigned __int16 *v3; // rdx
  NTSTATUS SoCName; // edi
  unsigned int *v5; // r9
  SIZE_T v6; // rbx
  unsigned int v8[4]; // [rsp+30h] [rbp-278h] BYREF
  _BYTE SystemInformation[8]; // [rsp+40h] [rbp-268h] BYREF
  int v10; // [rsp+48h] [rbp-260h]
  int v11; // [rsp+4Ch] [rbp-25Ch]
  WCHAR String1[264]; // [rsp+80h] [rbp-228h] BYREF

  *(_BYTE *)this = 0;
  SoCName = ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( SoCName >= 0 && (unsigned int)((((unsigned __int64)(unsigned int)(v11 * v10) >> 20) + 256) >> 10) >= 2 )
  {
    SoCName = DefaultMultiScreenConfig::DisjointExperienceConfig::RegQuerySoCName(String1, v3, v8, v5);
    if ( SoCName >= 0 )
    {
      v6 = (int)v8[0];
      if ( !RtlCompareUnicodeStrings(String1, (int)v8[0], L"8992", 4uLL, 1u)
        || !RtlCompareUnicodeStrings(String1, v6, L"8994", 4uLL, 1u) )
      {
        *(_BYTE *)this = 1;
      }
    }
  }
  return (unsigned int)SoCName;
}
