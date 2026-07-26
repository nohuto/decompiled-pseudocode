/*
 * XREFs of ndisPnPCancelStopDevice @ 0x1C00D2EFC
 * Callers:
 *     ndisPnPIrpCancelStop @ 0x1C00D41E8 (ndisPnPIrpCancelStop.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C00D2E68 (ndisPnPCancelRemoveDevice.c)
 */

void __fastcall ndisPnPCancelStopDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_(0x4Du, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids);
  ndisPnPCancelRemoveDevice(a1);
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_(0x4Eu, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids);
}
