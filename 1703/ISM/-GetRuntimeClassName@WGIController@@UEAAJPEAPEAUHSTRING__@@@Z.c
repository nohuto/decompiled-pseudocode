/*
 * XREFs of ?GetRuntimeClassName@WGIController@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180061D10
 * Callers:
 *     ?GetRuntimeClassName@WGIController@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180063C90 (-GetRuntimeClassName@WGIController@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@WGIController@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180063D40 (-GetRuntimeClassName@WGIController@@WCA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@WGIController@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180063E10 (-GetRuntimeClassName@WGIController@@WCI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@WGIController@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180063ED0 (-GetRuntimeClassName@WGIController@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WGIController::GetRuntimeClassName(WGIController *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"WGIController", 0xDu, a2);
}
