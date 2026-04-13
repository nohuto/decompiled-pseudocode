/*
 * XREFs of ?GetIids@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180040BA0
 * Callers:
 *     ?GetIids@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180044690 (-GetIids@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WCI@EAAJPE.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::GetIids(
        Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
