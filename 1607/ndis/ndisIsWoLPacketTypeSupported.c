/*
 * XREFs of ndisIsWoLPacketTypeSupported @ 0x1C00B12C4
 * Callers:
 *     ndisSourcePreAddWoLPattern @ 0x1C00B0B60 (ndisSourcePreAddWoLPattern.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C00B0E54 (ndisMiniportPreAddWoLPattern.c)
 *     ndisRejectUnsupportedWoLPatterns @ 0x1C00CA220 (ndisRejectUnsupportedWoLPatterns.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIsWoLPacketTypeSupported(int a1, __int64 a2)
{
  int v2; // ecx
  int v3; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  v2 = a1 - 1;
  if ( !v2 )
  {
    LOBYTE(v3) = *(_BYTE *)(a2 + 1068);
    return v3 & 1;
  }
  v5 = v2 - 1;
  if ( !v5 )
  {
    LOBYTE(v3) = *(_BYTE *)(a2 + 1068) >> 1;
    return v3 & 1;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    LOBYTE(v3) = *(_BYTE *)(a2 + 1068) >> 2;
    return v3 & 1;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    LOBYTE(v3) = *(_BYTE *)(a2 + 1068) >> 3;
    return v3 & 1;
  }
  if ( v7 == 1 )
  {
    v3 = HIWORD(*(_DWORD *)(a2 + 1068));
    return v3 & 1;
  }
  return 0;
}
