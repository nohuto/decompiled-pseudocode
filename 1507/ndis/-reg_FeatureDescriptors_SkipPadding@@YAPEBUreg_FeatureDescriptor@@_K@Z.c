/*
 * XREFs of ?reg_FeatureDescriptors_SkipPadding@@YAPEBUreg_FeatureDescriptor@@_K@Z @ 0x1C0049490
 * Callers:
 *     ?rbc_InitializeFeatureStaging@@YAJXZ @ 0x1C0049460 (-rbc_InitializeFeatureStaging@@YAJXZ.c)
 * Callees:
 *     <none>
 */

const struct reg_FeatureDescriptor *__fastcall reg_FeatureDescriptors_SkipPadding(_QWORD *a1)
{
  while ( 1 )
  {
    if ( a1 >= reg_FeatureDescriptors_z )
      return 0LL;
    if ( *a1 )
      break;
    ++a1;
  }
  return (const struct reg_FeatureDescriptor *)a1;
}
