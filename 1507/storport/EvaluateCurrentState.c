/*
 * XREFs of EvaluateCurrentState @ 0x1C002F194
 * Callers:
 *     RaValidateProtocolCommandIoctl @ 0x1C002FD3C (RaValidateProtocolCommandIoctl.c)
 *     rbc_InitializeFeatureStaging @ 0x1C0034788 (rbc_InitializeFeatureStaging.c)
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
