/*
 * XREFs of ?EvaluateFeature@@YAXPEBUreg_FeatureDescriptor@@@Z @ 0x180004AA0
 * Callers:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x180004B1C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 * Callees:
 *     ?EvaluateCurrentStateFromRegistry@@YAHIHW4reg_FeatureStage@@EPEAE@Z @ 0x1800048D4 (-EvaluateCurrentStateFromRegistry@@YAHIHW4reg_FeatureStage@@EPEAE@Z.c)
 */

void __fastcall EvaluateFeature(const struct reg_FeatureDescriptor *a1)
{
  const struct reg_FeatureDescriptor *v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1;
  if ( !*(_DWORD *)g_Feature_2566179129_57566008_FeatureDescriptorDetails
    && g_Feature_2566179129_cachedvariant == 0x80000000 )
  {
    LOBYTE(v1) = 0;
    _InterlockedCompareExchange(
      (volatile signed __int32 *)g_Feature_2566179129_57566008_FeatureDescriptorDetails,
      EvaluateCurrentStateFromRegistry(57566008, 0, 2, 0, &v1) + 1,
      0);
    _InterlockedCompareExchange(&g_Feature_2566179129_cachedvariant, (unsigned __int8)v1, 0x80000000);
  }
}
