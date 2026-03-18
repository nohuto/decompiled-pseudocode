/*
 * XREFs of ?ValidateStaticRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEA_N@Z @ 0x1C0027150
 * Callers:
 *     ?DetermineMultiScreenCapabilities@DefaultMultiScreenConfig@@YAJPEAW4MultiScreenShellCapabilities@@@Z @ 0x1C0026860 (-DetermineMultiScreenCapabilities@DefaultMultiScreenConfig@@YAJPEAW4MultiScreenShellCapabilities.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ?CompareUnicodeStrings@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEBG_K01_N@Z @ 0x1C002684C (-CompareUnicodeStrings@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEBG_K01_N@Z.c)
 *     ?RegQueryEnabledForTest@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAK@Z @ 0x1C0026D28 (-RegQueryEnabledForTest@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAK@Z.c)
 *     ?RegQuerySoCName@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x1C0026F68 (-RegQuerySoCName@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z.c)
 */

__int64 __fastcall DefaultMultiScreenConfig::DisjointExperienceConfig::ValidateStaticRequirements(
        DefaultMultiScreenConfig::DisjointExperienceConfig *this,
        bool *a2)
{
  unsigned int *v3; // rdx
  NTSTATUS SoCName; // edi
  unsigned __int64 v5; // rbx
  unsigned __int16 *v6; // rdx
  unsigned int *v7; // r9
  const unsigned __int16 *v8; // rbp
  const WCHAR **v9; // rsi
  unsigned int v10; // ebx
  char v12; // [rsp+20h] [rbp-298h]
  bool v13; // [rsp+28h] [rbp-290h]
  unsigned int v14[4]; // [rsp+30h] [rbp-288h] BYREF
  _BYTE SystemInformation[8]; // [rsp+40h] [rbp-278h] BYREF
  int v16; // [rsp+48h] [rbp-270h]
  int v17; // [rsp+4Ch] [rbp-26Ch]
  wchar_t pszDest[264]; // [rsp+80h] [rbp-238h] BYREF

  *(_BYTE *)this = 0;
  SoCName = ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( SoCName >= 0 )
  {
    v5 = (((unsigned __int64)(unsigned int)(v17 * v16) >> 20) + 256) >> 10;
    v14[0] = 0;
    if ( (int)DefaultMultiScreenConfig::DisjointExperienceConfig::RegQueryEnabledForTest(
                (DefaultMultiScreenConfig::DisjointExperienceConfig *)v14,
                v3) >= 0
      && v14[0] )
    {
      *(_BYTE *)this = 1;
    }
    if ( (unsigned int)v5 >= 2 )
    {
      SoCName = DefaultMultiScreenConfig::DisjointExperienceConfig::RegQuerySoCName(pszDest, v6, v14, v7);
      if ( SoCName >= 0 )
      {
        v8 = (const unsigned __int16 *)v14[0];
        v9 = (const WCHAR **)&off_1C0037B50;
        v10 = 0;
        while ( DefaultMultiScreenConfig::DisjointExperienceConfig::CompareUnicodeStrings(
                  pszDest,
                  v8,
                  *v9,
                  (const unsigned __int16 *)*((unsigned int *)v9 + 2),
                  v12,
                  v13) )
        {
          ++v10;
          v9 += 2;
          if ( v10 >= 6 )
            return (unsigned int)SoCName;
        }
        *(_BYTE *)this = 1;
      }
    }
  }
  return (unsigned int)SoCName;
}
