/*
 * XREFs of rbc_InitializeFeatureStaging @ 0x1C004C4C8
 * Callers:
 *     DriverEntry @ 0x1C0026384 (DriverEntry.c)
 * Callees:
 *     EvaluateFeature @ 0x1C004ADF8 (EvaluateFeature.c)
 *     reg_FeatureDescriptors_SkipPadding @ 0x1C004C4F8 (reg_FeatureDescriptors_SkipPadding.c)
 */

__int64 rbc_InitializeFeatureStaging()
{
  void *i; // rcx
  unsigned int **v1; // rax
  unsigned int **v2; // rbx

  for ( i = &reg_FeatureDescriptors_z; ; i = v2 + 5 )
  {
    v1 = (unsigned int **)reg_FeatureDescriptors_SkipPadding(i);
    v2 = v1;
    if ( !v1 )
      break;
    EvaluateFeature(v1);
  }
  return 0LL;
}
