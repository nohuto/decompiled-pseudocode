/*
 * XREFs of ?rbc_InitializeFeatureStaging@@YAJXZ @ 0x1C01D1CCC
 * Callers:
 *     InitializeWin32CrossSessionGlobals @ 0x1C0156350 (InitializeWin32CrossSessionGlobals.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C01D1870 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?reg_FeatureDescriptors_SkipPadding@@YAPEBUreg_FeatureDescriptor@@_K@Z @ 0x1C01D1CFC (-reg_FeatureDescriptors_SkipPadding@@YAPEBUreg_FeatureDescriptor@@_K@Z.c)
 */

__int64 rbc_InitializeFeatureStaging(void)
{
  _UNKNOWN **i; // rcx
  int **v1; // rax
  int **v2; // rbx

  for ( i = &g_Feature_2056571192_57604928_FeatureDescriptorDetails; ; i = (_UNKNOWN **)(v2 + 2) )
  {
    v1 = (int **)reg_FeatureDescriptors_SkipPadding((unsigned __int64)i);
    v2 = v1;
    if ( !v1 )
      break;
    EvaluateCurrentState(v1);
  }
  return 0LL;
}
