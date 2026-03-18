/*
 * XREFs of rbc_InitializeFeatureStaging @ 0x1C004BE60
 * Callers:
 *     DriverEntry @ 0x1C00263A0 (DriverEntry.c)
 * Callees:
 *     EvaluateCurrentState @ 0x1C004A82C (EvaluateCurrentState.c)
 *     reg_FeatureDescriptors_SkipPadding @ 0x1C004BE90 (reg_FeatureDescriptors_SkipPadding.c)
 */

__int64 rbc_InitializeFeatureStaging()
{
  void *i; // rcx
  int **v1; // rax
  int **v2; // rbx

  for ( i = &reg_FeatureDescriptors_z; ; i = v2 + 2 )
  {
    v1 = (int **)reg_FeatureDescriptors_SkipPadding(i);
    v2 = v1;
    if ( !v1 )
      break;
    EvaluateCurrentState(v1);
  }
  return 0LL;
}
