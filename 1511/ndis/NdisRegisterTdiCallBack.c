/*
 * XREFs of NdisRegisterTdiCallBack @ 0x1C00ACEE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 */

void __stdcall NdisRegisterTdiCallBack(TDI_REGISTER_CALLBACK RegisterCallback, TDI_PNP_HANDLER PnPHandler)
{
  char v4; // al

  v4 = byte_1C0083714;
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
  {
    WPP_SF_(0x32u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids);
    v4 = byte_1C0083714;
  }
  if ( !ndisTdiRegisterCallback )
    ndisTdiRegisterCallback = RegisterCallback;
  if ( !ndisTdiPnPHandler )
    ndisTdiPnPHandler = PnPHandler;
  if ( (unsigned __int8)v4 >= 4u )
    WPP_SF_(0x33u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids);
}
