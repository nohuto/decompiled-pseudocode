/*
 * XREFs of ndisIsPMProtocolOffloadSupported @ 0x1C00C8398
 * Callers:
 *     ndisMiniportPreAddProtocolOffload @ 0x1C00C83E4 (ndisMiniportPreAddProtocolOffload.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C00CA02C (ndisRejectUnsupportedPMOffloads.c)
 *     ndisSourcePreAddProtocolOffload @ 0x1C00CAE04 (ndisSourcePreAddProtocolOffload.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIsPMProtocolOffloadSupported(int a1, __int64 a2)
{
  int v2; // ecx
  int v3; // ecx
  char v5; // al

  v2 = a1 - 1;
  if ( !v2 )
  {
    v5 = *(_BYTE *)(a2 + 1088);
    return v5 & 1;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    v5 = *(_BYTE *)(a2 + 1088) >> 1;
    return v5 & 1;
  }
  if ( v3 == 1 )
    return *(_BYTE *)(a2 + 1088) >> 7;
  else
    return 0;
}
