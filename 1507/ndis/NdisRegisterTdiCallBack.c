/*
 * XREFs of NdisRegisterTdiCallBack @ 0x1C00B21B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 */

void __stdcall NdisRegisterTdiCallBack(TDI_REGISTER_CALLBACK RegisterCallback, TDI_PNP_HANDLER PnPHandler)
{
  char v4; // al

  v4 = byte_1C0085314;
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
  {
    WPP_SF_(0x32u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids);
    v4 = byte_1C0085314;
  }
  if ( !ndisTdiRegisterCallback )
    ndisTdiRegisterCallback = RegisterCallback;
  if ( !ndisTdiPnPHandler )
    ndisTdiPnPHandler = PnPHandler;
  if ( (unsigned __int8)v4 >= 4u )
    WPP_SF_(0x33u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids);
}
