/*
 * XREFs of _ContentManagement::TargetedContent::CreateAppServiceConnection_::_1_::dtor$1 @ 0x18005BAEF
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIUriRuntimeClass@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180003FF0 (--1-$ComPtr@UIUriRuntimeClass@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall ContentManagement::TargetedContent::CreateAppServiceConnection_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 56) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 56) &= ~1u;
    Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClass>::~ComPtr<Windows::Foundation::IUriRuntimeClass>(*(__int64 **)(a2 + 88));
  }
}
