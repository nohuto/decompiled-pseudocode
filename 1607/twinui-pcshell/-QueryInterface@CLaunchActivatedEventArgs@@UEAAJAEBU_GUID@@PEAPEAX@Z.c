/*
 * XREFs of ?QueryInterface@CLaunchActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028D90
 * Callers:
 *     ?QueryInterface@CLaunchActivatedEventArgs@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002A8E0 (-QueryInterface@CLaunchActivatedEventArgs@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002A9B0 (-QueryInterface@CLaunchActivatedEventArgs@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002AA70 (-QueryInterface@CLaunchActivatedEventArgs@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WMI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002AB90 (-QueryInterface@CLaunchActivatedEventArgs@@WMI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002AC80 (-QueryInterface@CLaunchActivatedEventArgs@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002ADE0 (-QueryInterface@CLaunchActivatedEventArgs@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002AF20 (-QueryInterface@CLaunchActivatedEventArgs@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WNA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002AFA0 (-QueryInterface@CLaunchActivatedEventArgs@@WNA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B080 (-QueryInterface@CLaunchActivatedEventArgs@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B170 (-QueryInterface@CLaunchActivatedEventArgs@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B280 (-QueryInterface@CLaunchActivatedEventArgs@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B310 (-QueryInterface@CLaunchActivatedEventArgs@@WNI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B410 (-QueryInterface@CLaunchActivatedEventArgs@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B4F0 (-QueryInterface@CLaunchActivatedEventArgs@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CLaunchActivatedEventArgs::QueryInterface(
        CLaunchActivatedEventArgs *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CActivatedEventArgsWithPrelaunchAndViewIdBase,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
