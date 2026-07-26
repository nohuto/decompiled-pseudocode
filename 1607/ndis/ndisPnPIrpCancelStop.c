/*
 * XREFs of ndisPnPIrpCancelStop @ 0x1C00D41E8
 * Callers:
 *     ndisPnPDispatch @ 0x1C009DAC0 (ndisPnPDispatch.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C001A108 (ndisLogMiniportEvent.c)
 *     WPP_SF_qZ @ 0x1C0048BBC (WPP_SF_qZ.c)
 *     ndisPowerSaveClearStop @ 0x1C009C320 (ndisPowerSaveClearStop.c)
 *     ndisPnPCancelStopDevice @ 0x1C00D2EFC (ndisPnPCancelStopDevice.c)
 */

__int64 __fastcall ndisPnPIrpCancelStop(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, _BYTE *a5)
{
  __int64 v8; // rax
  int v9; // esi
  __int64 result; // rax

  if ( (unsigned __int8)byte_1C00895D0 >= 4u )
    WPP_SF_qZ(0x2Bu, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, a2, *(unsigned __int16 **)(a2 + 3912));
  ndisLogMiniportEvent(a2, 0x26u);
  v8 = *(_QWORD *)(a3 + 184);
  *(_OWORD *)(v8 - 72) = *(_OWORD *)v8;
  *(_OWORD *)(v8 - 56) = *(_OWORD *)(v8 + 16);
  *(_OWORD *)(v8 - 40) = *(_OWORD *)(v8 + 32);
  *(_QWORD *)(v8 - 24) = *(_QWORD *)(v8 + 48);
  *(_BYTE *)(v8 - 69) = 0;
  v9 = IoSynchronousCallDriver(*(_QWORD *)(a2 + 3896), a3);
  if ( v9 >= 0 )
  {
    ndisPnPCancelStopDevice((struct _NDIS_MINIPORT_BLOCK *)a2);
    *(_DWORD *)(a2 + 1520) = *(_DWORD *)(a2 + 1524);
    ndisPowerSaveClearStop((struct _NDIS_MINIPORT_BLOCK *)a2, 4);
  }
  result = (unsigned int)v9;
  *a4 = 1;
  *a5 = 0;
  return result;
}
