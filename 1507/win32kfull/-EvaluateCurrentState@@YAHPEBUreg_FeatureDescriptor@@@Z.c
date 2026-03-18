/*
 * XREFs of ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C01D1870
 * Callers:
 *     ?rbc_InitializeFeatureStaging@@YAJXZ @ 0x1C01D1CCC (-rbc_InitializeFeatureStaging@@YAJXZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025D318 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     ?CleanupPvtData@@YAXPEAVPFF@@@Z @ 0x1C02B3ED0 (-CleanupPvtData@@YAXPEAVPFF@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall EvaluateCurrentState(int **a1)
{
  unsigned int v1; // r9d
  __int64 v2; // rdx
  int v3; // ecx

  v1 = *((_DWORD *)a1 + 2);
  v2 = *((unsigned int *)a1 + 3);
  v3 = **a1;
  if ( v3 )
    return v3 != 1;
  else
    return EvaluateCurrentStateFromRegistry(v1, v2);
}
