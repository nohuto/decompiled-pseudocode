/*
 * XREFs of ?rbc_InitializeFeatureStaging@@YAJXZ @ 0x1C0049460
 * Callers:
 *     DriverEntry @ 0x1C01023B0 (DriverEntry.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0048E9C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?reg_FeatureDescriptors_SkipPadding@@YAPEBUreg_FeatureDescriptor@@_K@Z @ 0x1C0049490 (-reg_FeatureDescriptors_SkipPadding@@YAPEBUreg_FeatureDescriptor@@_K@Z.c)
 */

__int64 rbc_InitializeFeatureStaging(void)
{
  void *i; // rcx
  int **v1; // rax
  int **v2; // rbx

  for ( i = &reg_FeatureDescriptors_z; ; i = v2 + 2 )
  {
    v1 = (int **)reg_FeatureDescriptors_SkipPadding((unsigned __int64)i);
    v2 = v1;
    if ( !v1 )
      break;
    EvaluateCurrentState(v1);
  }
  return 0LL;
}
