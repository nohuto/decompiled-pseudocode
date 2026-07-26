/*
 * XREFs of NdisRegisterTdiCallBack @ 0x1C00B0960
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 */

void __stdcall NdisRegisterTdiCallBack(TDI_REGISTER_CALLBACK RegisterCallback, TDI_PNP_HANDLER PnPHandler)
{
  char v4; // al

  v4 = byte_1C00895D4;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
  {
    WPP_SF_(0x32u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids);
    v4 = byte_1C00895D4;
  }
  if ( !ndisTdiRegisterCallback )
    ndisTdiRegisterCallback = RegisterCallback;
  if ( !ndisTdiPnPHandler )
    ndisTdiPnPHandler = PnPHandler;
  if ( (unsigned __int8)v4 >= 4u )
    WPP_SF_(0x33u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids);
}
