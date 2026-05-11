/*
 * XREFs of rbc_InitializeFeatureStaging @ 0x1C00019D8
 * Callers:
 *     DriverEntry @ 0x1C00147A0 (DriverEntry.c)
 * Callees:
 *     EvaluateCurrentState @ 0x1C00019B4 (EvaluateCurrentState.c)
 */

__int64 rbc_InitializeFeatureStaging()
{
  int **i; // rbx

  for ( i = (int **)&reg_FeatureDescriptors_z; i < (int **)&reg_FeatureDescriptors_z; ++i )
  {
    if ( *i )
    {
LABEL_10:
      if ( i )
      {
        EvaluateCurrentState(i);
        for ( i += 2; i < (int **)&reg_FeatureDescriptors_z; ++i )
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
