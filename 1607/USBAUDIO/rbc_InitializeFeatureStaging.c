/*
 * XREFs of rbc_InitializeFeatureStaging @ 0x1C0001AD8
 * Callers:
 *     DriverEntry @ 0x1C00147A0 (DriverEntry.c)
 * Callees:
 *     EvaluateFeature @ 0x1C0001A68 (EvaluateFeature.c)
 */

__int64 rbc_InitializeFeatureStaging()
{
  unsigned int **i; // rbx

  for ( i = (unsigned int **)&reg_FeatureDescriptors_z; i < (unsigned int **)&reg_FeatureDescriptors_z; ++i )
  {
    if ( *i )
    {
LABEL_10:
      if ( i )
      {
        EvaluateFeature(i);
        for ( i += 5; i < (unsigned int **)&reg_FeatureDescriptors_z; ++i )
        {
          if ( *i )
            goto LABEL_10;
        }
      }
      return 0LL;
    }
  }
  return 0LL;
}
