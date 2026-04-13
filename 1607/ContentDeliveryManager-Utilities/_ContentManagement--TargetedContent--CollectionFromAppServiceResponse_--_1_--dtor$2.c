/*
 * XREFs of _ContentManagement::TargetedContent::CollectionFromAppServiceResponse_::_1_::dtor$2 @ 0x18005BBA1
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIUriRuntimeClass@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180003FF0 (--1-$ComPtr@UIUriRuntimeClass@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall ContentManagement::TargetedContent::CollectionFromAppServiceResponse_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~1u;
    Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClass>::~ComPtr<Windows::Foundation::IUriRuntimeClass>(*(__int64 **)(a2 + 168));
  }
}
