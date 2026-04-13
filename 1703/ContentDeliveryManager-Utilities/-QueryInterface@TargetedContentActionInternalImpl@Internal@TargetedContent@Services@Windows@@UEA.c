/*
 * XREFs of ?QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180040BB0
 * Callers:
 *     ?QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800446C0 (-QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WCA.c)
 *     ?QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044710 (-QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@W7E.c)
 *     ?QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044720 (-QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WCI.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::QueryInterface(
        Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
