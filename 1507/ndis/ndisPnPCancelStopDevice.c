/*
 * XREFs of ndisPnPCancelStopDevice @ 0x1C00D3A3C
 * Callers:
 *     ndisPnPIrpCancelStop @ 0x1C00D4A98 (ndisPnPIrpCancelStop.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C00D39A8 (ndisPnPCancelRemoveDevice.c)
 */

void __fastcall ndisPnPCancelStopDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_(0x4Du, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids);
  ndisPnPCancelRemoveDevice(a1);
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_(0x4Eu, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids);
}
