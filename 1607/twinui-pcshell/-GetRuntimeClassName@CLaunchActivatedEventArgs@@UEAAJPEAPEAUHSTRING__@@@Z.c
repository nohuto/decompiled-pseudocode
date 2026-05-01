/*
 * XREFs of ?GetRuntimeClassName@CLaunchActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180028D50
 * Callers:
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WHA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18002A7D0 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WHA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WLA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18002A8C0 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WLA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WNA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18002A950 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WNA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18002AA80 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WHI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18002ABB0 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WHI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WLI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18002AC60 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WLI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WNI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18002ACD0 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WNI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18002AE00 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WCA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WIA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18002AFE0 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WIA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x18002B120 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@W7EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WGI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18002B2C0 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WGI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18002B4B0 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CLaunchActivatedEventArgs::GetRuntimeClassName(CLaunchActivatedEventArgs *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.ApplicationModel.Activation.LaunchActivatedEventArgs", 0x3Cu, a2);
}
