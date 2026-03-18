/*
 * XREFs of EvaluateCurrentState @ 0x1C004A82C
 * Callers:
 *     rbc_InitializeFeatureStaging @ 0x1C004BE60 (rbc_InitializeFeatureStaging.c)
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
