/*
 * XREFs of ?rbc_InitializeFeatureStaging@@YAJXZ @ 0x1C01CBA80
 * Callers:
 *     InitializeWin32CrossSessionGlobals @ 0x1C00BD290 (InitializeWin32CrossSessionGlobals.c)
 * Callees:
 *     ?EvaluateFeature@@YAXPEBUreg_FeatureDescriptor@@@Z @ 0x1C01CB59C (-EvaluateFeature@@YAXPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?reg_FeatureDescriptors_SkipPadding@@YAPEBUreg_FeatureDescriptor@@_K@Z @ 0x1C01CBAB0 (-reg_FeatureDescriptors_SkipPadding@@YAPEBUreg_FeatureDescriptor@@_K@Z.c)
 */

__int64 rbc_InitializeFeatureStaging(void)
{
  _UNKNOWN **i; // rcx
  const struct reg_FeatureDescriptor *v1; // rax
  const struct reg_FeatureDescriptor *v2; // rbx

  for ( i = &reg_FeatureDescriptors_a; ; i = (_UNKNOWN **)((char *)v2 + 40) )
  {
    v1 = reg_FeatureDescriptors_SkipPadding((unsigned __int64)i);
    v2 = v1;
    if ( !v1 )
      break;
    EvaluateFeature(v1);
  }
  return 0LL;
}
