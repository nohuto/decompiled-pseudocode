/*
 * XREFs of ndisPnPIrpCancelRemove @ 0x1C00D4114
 * Callers:
 *     ndisPnPDispatch @ 0x1C009DAC0 (ndisPnPDispatch.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C001A108 (ndisLogMiniportEvent.c)
 *     WPP_SF_qZ @ 0x1C0048BBC (WPP_SF_qZ.c)
 *     ndisPowerSaveClearStop @ 0x1C009C320 (ndisPowerSaveClearStop.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C00D2E68 (ndisPnPCancelRemoveDevice.c)
 */

__int64 __fastcall ndisPnPIrpCancelRemove(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, _BYTE *a5)
{
  __int64 v8; // rax
  int v9; // esi

  if ( (unsigned __int8)byte_1C00895D0 >= 4u )
    WPP_SF_qZ(0x24u, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, a2, *(unsigned __int16 **)(a2 + 3912));
  ndisLogMiniportEvent(a2, 0x22u);
  v8 = *(_QWORD *)(a3 + 184);
  *(_OWORD *)(v8 - 72) = *(_OWORD *)v8;
  *(_OWORD *)(v8 - 56) = *(_OWORD *)(v8 + 16);
  *(_OWORD *)(v8 - 40) = *(_OWORD *)(v8 + 32);
  *(_QWORD *)(v8 - 24) = *(_QWORD *)(v8 + 48);
  *(_BYTE *)(v8 - 69) = 0;
  v9 = IoSynchronousCallDriver(*(_QWORD *)(a2 + 3896), a3);
  if ( v9 >= 0 )
  {
    if ( *(_DWORD *)(a2 + 1520) == 4 )
      *(_DWORD *)(a2 + 1520) = *(_DWORD *)(a2 + 1524);
    ndisPnPCancelRemoveDevice((struct _NDIS_MINIPORT_BLOCK *)a2);
    ndisPowerSaveClearStop((struct _NDIS_MINIPORT_BLOCK *)a2, 1);
  }
  *a4 = 1;
  *a5 = 0;
  return (unsigned int)v9;
}
