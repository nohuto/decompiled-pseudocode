/*
 * XREFs of ?GetIids@CLaunchActivatedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180028D80
 * Callers:
 *     ?GetIids@CLaunchActivatedEventArgs@@WHA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18002A830 (-GetIids@CLaunchActivatedEventArgs@@WHA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WLA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18002A970 (-GetIids@CLaunchActivatedEventArgs@@WLA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WNA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18002A9E0 (-GetIids@CLaunchActivatedEventArgs@@WNA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18002AAC0 (-GetIids@CLaunchActivatedEventArgs@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WHI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18002ABF0 (-GetIids@CLaunchActivatedEventArgs@@WHI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WLI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18002ACF0 (-GetIids@CLaunchActivatedEventArgs@@WLI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WNI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18002AD60 (-GetIids@CLaunchActivatedEventArgs@@WNI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18002AE70 (-GetIids@CLaunchActivatedEventArgs@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WIA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18002B000 (-GetIids@CLaunchActivatedEventArgs@@WIA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18002B190 (-GetIids@CLaunchActivatedEventArgs@@W7EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WGI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18002B350 (-GetIids@CLaunchActivatedEventArgs@@WGI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18002B520 (-GetIids@CLaunchActivatedEventArgs@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CLaunchActivatedEventArgs::GetIids(
        CLaunchActivatedEventArgs *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CActivatedEventArgsWithPrelaunchAndViewIdBase,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
