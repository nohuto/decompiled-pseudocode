/*
 * XREFs of ?Invoke@?$GitInvokeHelper@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@UEAAJPEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@4@@Z @ 0x18000D3E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIRestrictedErrorInfo@@@WRL@Microsoft@@IEAAKXZ @ 0x18000D308 (-InternalRelease@-$ComPtr@UIRestrictedErrorInfo@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Localize@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000D480 (-Localize@-$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Windows::Internal::GitPtr,2>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IRestrictedErrorInfo>::InternalRelease(&v8);
  v6 = Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Localize(
         a1 + 40,
         &GUID_6030e7c3_f93f_5e9c_9ba2_9a018d2b09c0,
         &v8);
  if ( v6 >= 0 )
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, a2, a3);
  Microsoft::WRL::ComPtr<IRestrictedErrorInfo>::InternalRelease(&v8);
  return (unsigned int)v6;
}
