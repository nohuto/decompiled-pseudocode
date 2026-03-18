/*
 * XREFs of ACPIComputeDeviceIdMutiStringLength @ 0x1C00578F4
 * Callers:
 *     ACPIEmQueryFailDeviceResetOnOpenHandles @ 0x1C0057974 (ACPIEmQueryFailDeviceResetOnOpenHandles.c)
 *     ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule @ 0x1C00A1530 (ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIComputeDeviceIdMutiStringLength(_WORD *a1)
{
  _WORD *v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( !a1 )
    return 0LL;
  v3 = a1;
  v4 = 0LL;
  if ( !*a1 )
    goto LABEL_8;
  do
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v3[v5] );
    v4 += (unsigned int)(v5 + 1);
    v3 = &a1[v4];
  }
  while ( *v3 );
  if ( !v4 )
LABEL_8:
    v4 = 1LL;
  return v4 + 1;
}
