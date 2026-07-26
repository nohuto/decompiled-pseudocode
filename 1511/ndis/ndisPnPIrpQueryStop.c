/*
 * XREFs of ndisPnPIrpQueryStop @ 0x1C00CE484
 * Callers:
 *     ndisPnPDispatch @ 0x1C00A8060 (ndisPnPDispatch.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C00194EC (ndisLogMiniportEvent.c)
 *     WPP_SF_qZ @ 0x1C004B56C (WPP_SF_qZ.c)
 *     ndisPowerSaveStop @ 0x1C0099100 (ndisPowerSaveStop.c)
 *     ndisPnPQueryStopDevice @ 0x1C00EE8B8 (ndisPnPQueryStopDevice.c)
 */

__int64 __fastcall ndisPnPIrpQueryStop(__int64 a1, __int64 a2, __int64 a3, __int64 a4, bool *a5)
{
  int v7; // ecx

  if ( (unsigned __int8)byte_1C0083710 >= 4u )
    WPP_SF_qZ(0x2Au, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, a2, *(__int64 **)(a2 + 3912));
  ndisLogMiniportEvent(a2, 0x25u);
  if ( *(_DWORD *)(a2 + 3504) )
  {
    v7 = -1073741823;
  }
  else
  {
    ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a2, 4);
    *(_DWORD *)(a2 + 1524) = *(_DWORD *)(a2 + 1520);
    *(_DWORD *)(a2 + 1520) = 2;
    v7 = ndisPnPQueryStopDevice((struct _NDIS_MINIPORT_BLOCK *)a2);
  }
  *(_DWORD *)(a3 + 48) = v7;
  *a5 = v7 >= 0;
  return (unsigned int)v7;
}
