/*
 * XREFs of ?QueryInterface@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180040B60
 * Callers:
 *     ?QueryInterface@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044680 (-QueryInterface@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@W7EAAJAE.c)
 *     ?QueryInterface@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044760 (-QueryInterface@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@WCA@EAAJ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::QueryInterface(
        Windows::Services::TargetedContent::Internal::TargetedContentActionStatics *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::QueryInterface(
           this,
           a2,
           a3);
}
