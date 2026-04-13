/*
 * XREFs of ?QueryInterface@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001FEF0
 * Callers:
 *     ?QueryInterface@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022720 (-QueryInterface@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@W7EAAJAEBU.c)
 *     ?QueryInterface@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800228C0 (-QueryInterface@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@WBA@EAAJAE.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::QueryInterface(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
