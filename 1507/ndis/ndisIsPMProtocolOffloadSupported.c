/*
 * XREFs of ndisIsPMProtocolOffloadSupported @ 0x1C009A4E0
 * Callers:
 *     ndisSourcePreAddProtocolOffload @ 0x1C00999F0 (ndisSourcePreAddProtocolOffload.c)
 *     ndisMiniportPreAddProtocolOffload @ 0x1C0099AD8 (ndisMiniportPreAddProtocolOffload.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C00CB25C (ndisRejectUnsupportedPMOffloads.c)
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
