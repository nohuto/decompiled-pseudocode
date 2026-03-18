/*
 * XREFs of ACPIComputeDeviceIdMutiStringLength @ 0x1C0001588
 * Callers:
 *     ACPIEmQueryIgnoreOpenHandlesOnDeviceReset @ 0x1C0040EC0 (ACPIEmQueryIgnoreOpenHandlesOnDeviceReset.c)
 *     ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule @ 0x1C0065290 (ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIComputeDeviceIdMutiStringLength(_WORD *a1)
{
  _WORD *v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rax

  if ( !a1 )
    return 0LL;
  v2 = a1;
  v3 = 0LL;
  if ( !*a1 )
    goto LABEL_9;
  do
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v2[v4] );
    v3 += (unsigned int)(v4 + 1);
    v2 = &a1[v3];
  }
  while ( *v2 );
  if ( !v3 )
LABEL_9:
    v3 = 1LL;
  return v3 + 1;
}
