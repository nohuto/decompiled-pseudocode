/*
 * XREFs of ?DetermineMultiScreenCapabilities@DefaultMultiScreenConfig@@YAJPEAW4MultiScreenShellCapabilities@@@Z @ 0x1C0026860
 * Callers:
 *     ?GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z @ 0x1C00269A0 (-GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z.c)
 * Callees:
 *     ?ValidateDynamicRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEA_N@Z @ 0x1C00270C8 (-ValidateDynamicRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEA_N@Z.c)
 *     ?ValidateStaticRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEA_N@Z @ 0x1C0027150 (-ValidateStaticRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEA_N@Z.c)
 */

__int64 __fastcall DefaultMultiScreenConfig::DetermineMultiScreenCapabilities(
        DefaultMultiScreenConfig *this,
        enum MultiScreenShellCapabilities *a2)
{
  signed __int32 v3; // eax
  int v4; // eax
  bool *v5; // rdx
  __int32 v6; // edi
  bool *v7; // rdx
  __int64 result; // rax
  char v9; // [rsp+40h] [rbp+8h] BYREF
  char v10; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)this = 0;
  v3 = _InterlockedCompareExchange(
         &`DefaultMultiScreenConfig::DetermineMultiScreenCapabilities'::`2'::s_calculatedCapabilities,
         0,
         0);
  if ( v3 )
    goto LABEL_14;
  v4 = _InterlockedCompareExchange(
         &`DefaultMultiScreenConfig::DetermineMultiScreenCapabilities'::`2'::s_calcComputeState,
         2,
         2);
  v5 = (bool *)(unsigned int)v4;
  if ( v4 < 2 )
  {
    v6 = 318767110;
    _InterlockedCompareExchange(
      &`DefaultMultiScreenConfig::DetermineMultiScreenCapabilities'::`2'::s_defaultCapabilities,
      318767110,
      0);
    if ( v4 >= 1 )
      goto LABEL_8;
    if ( (unsigned __int8)RtlIsMultiSessionSku() )
      goto LABEL_5;
    v6 = 553844742;
    _InterlockedExchange(
      &`DefaultMultiScreenConfig::DetermineMultiScreenCapabilities'::`2'::s_defaultCapabilities,
      553844742);
    v9 = 0;
    result = DefaultMultiScreenConfig::DisjointExperienceConfig::ValidateStaticRequirements(
               (DefaultMultiScreenConfig::DisjointExperienceConfig *)&v9,
               v7);
    if ( (int)result < 0 )
      return result;
    if ( !v9 )
    {
LABEL_5:
      _InterlockedExchange(
        &`DefaultMultiScreenConfig::DetermineMultiScreenCapabilities'::`2'::s_calculatedCapabilities,
        v6);
    }
    else
    {
LABEL_8:
      _InterlockedCompareExchange(
        &`DefaultMultiScreenConfig::DetermineMultiScreenCapabilities'::`2'::s_calcComputeState,
        1,
        0);
      v10 = 0;
      result = DefaultMultiScreenConfig::DisjointExperienceConfig::ValidateDynamicRequirements(
                 (DefaultMultiScreenConfig::DisjointExperienceConfig *)&v10,
                 v5);
      if ( (int)result < 0 )
        return result;
      if ( !v10 )
        goto LABEL_12;
      _InterlockedExchange(
        &`DefaultMultiScreenConfig::DetermineMultiScreenCapabilities'::`2'::s_calculatedCapabilities,
        620953606);
    }
    _InterlockedExchange(&`DefaultMultiScreenConfig::DetermineMultiScreenCapabilities'::`2'::s_calcComputeState, 2);
  }
LABEL_12:
  v3 = _InterlockedCompareExchange(
         &`DefaultMultiScreenConfig::DetermineMultiScreenCapabilities'::`2'::s_calculatedCapabilities,
         0,
         0);
  if ( !v3 )
    v3 = _InterlockedCompareExchange(
           &`DefaultMultiScreenConfig::DetermineMultiScreenCapabilities'::`2'::s_defaultCapabilities,
           0,
           0);
LABEL_14:
  *(_DWORD *)this = v3;
  return 0LL;
}
