/*
 * XREFs of _ContentManagement::TargetedContent::SendAppServiceMessageAndWaitForResponse_::_1_::dtor$1 @ 0x18005BB5D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIUriRuntimeClass@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180003FF0 (--1-$ComPtr@UIUriRuntimeClass@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall ContentManagement::TargetedContent::SendAppServiceMessageAndWaitForResponse_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 72) &= ~1u;
    Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClass>::~ComPtr<Windows::Foundation::IUriRuntimeClass>(*(__int64 **)(a2 + 104));
  }
}
