/*
 * XREFs of ndisFilterIndicateWoLPatternReject @ 0x1C00444F4
 * Callers:
 *     ndisFIndicateStatusInternal @ 0x1C0014710 (ndisFIndicateStatusInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0016C08 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ndisDeletePatternEntry @ 0x1C000E4A8 (ndisDeletePatternEntry.c)
 */

char __fastcall ndisFilterIndicateWoLPatternReject(__int64 a1, __int64 a2)
{
  char v3; // di
  int v4; // edx

  v3 = 1;
  if ( *(_DWORD *)(a2 + 56) >= 4u )
  {
    v4 = **(_DWORD **)(a2 + 48);
    if ( *(_DWORD *)(a2 + 96) )
    {
      if ( ndisDeletePatternEntry((_DWORD *)(a1 + 856), v4) )
        --*(_DWORD *)(a2 + 96);
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
