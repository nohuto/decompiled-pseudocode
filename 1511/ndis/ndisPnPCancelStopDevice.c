/*
 * XREFs of ndisPnPCancelStopDevice @ 0x1C00CD1CC
 * Callers:
 *     ndisPnPIrpCancelStop @ 0x1C00CE228 (ndisPnPIrpCancelStop.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C00CD138 (ndisPnPCancelRemoveDevice.c)
 */

void __fastcall ndisPnPCancelStopDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_(0x4Du, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids);
  ndisPnPCancelRemoveDevice(a1);
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_(0x4Eu, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids);
}
