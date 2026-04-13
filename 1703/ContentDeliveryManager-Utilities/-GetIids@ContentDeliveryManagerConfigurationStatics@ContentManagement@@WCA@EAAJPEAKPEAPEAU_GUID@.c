/*
 * XREFs of ?GetIids@ContentDeliveryManagerConfigurationStatics@ContentManagement@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180022670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContentDeliveryManagerConfigurationStatics::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::IContentDeliveryManagerConfiguration,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetIids(
           a1 - 32,
           a2,
           a3);
}
