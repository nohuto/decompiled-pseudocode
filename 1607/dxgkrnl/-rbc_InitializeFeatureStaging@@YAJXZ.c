/*
 * XREFs of ?rbc_InitializeFeatureStaging@@YAJXZ @ 0x1C0022D94
 * Callers:
 *     DriverEntry @ 0x1C01B7018 (DriverEntry.c)
 * Callees:
 *     ?EvaluateFeature@@YAXPEBUreg_FeatureDescriptor@@@Z @ 0x1C0021424 (-EvaluateFeature@@YAXPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?reg_FeatureDescriptors_SkipPadding@@YAPEBUreg_FeatureDescriptor@@_K@Z @ 0x1C0022DC4 (-reg_FeatureDescriptors_SkipPadding@@YAPEBUreg_FeatureDescriptor@@_K@Z.c)
 */

__int64 rbc_InitializeFeatureStaging(void)
{
  _UNKNOWN **i; // rcx
  const struct reg_FeatureDescriptor *v1; // rax
  const struct reg_FeatureDescriptor *v2; // rbx

  for ( i = &g_Feature_387928376_59283803_FeatureDescriptorDetails; ; i = (_UNKNOWN **)((char *)v2 + 40) )
  {
    v1 = reg_FeatureDescriptors_SkipPadding((unsigned __int64)i);
    v2 = v1;
    if ( !v1 )
      break;
    EvaluateFeature(v1);
  }
  return 0LL;
}
