/*
 * XREFs of ndisIsPMProtocolOffloadSupported @ 0x1C0093464
 * Callers:
 *     ndisSourcePreAddProtocolOffload @ 0x1C009316C (ndisSourcePreAddProtocolOffload.c)
 *     ndisMiniportPreAddProtocolOffload @ 0x1C0093254 (ndisMiniportPreAddProtocolOffload.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C00C467C (ndisRejectUnsupportedPMOffloads.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIsPMProtocolOffloadSupported(int a1, __int64 a2)
{
  int v2; // ecx
  int v3; // ecx
  char v4; // al

  v2 = a1 - 1;
  if ( !v2 )
  {
    v4 = *(_BYTE *)(a2 + 1088);
    return v4 & 1;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    v4 = *(_BYTE *)(a2 + 1088) >> 1;
    return v4 & 1;
  }
  if ( v3 == 1 )
    return *(_BYTE *)(a2 + 1088) >> 7;
  else
    return 0;
}
