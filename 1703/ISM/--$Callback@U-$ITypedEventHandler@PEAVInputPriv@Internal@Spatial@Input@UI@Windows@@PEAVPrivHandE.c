/*
 * XREFs of ??$Callback@U?$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAVPrivHandEventArgs@23456@@Foundation@Windows@@VSpectrumListener@@PEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUIPrivHandEventArgs@67893@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAVPrivHandEventArgs@23456@@Foundation@Windows@@@01@PEAVSpectrumListener@@P83@EAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivHandEventArgs@56789@@Z@Z @ 0x1800558E0
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@K@Z @ 0x180054F3C (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@K@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::Internal::InputPriv_____ptr64_Windows::UI::Input::Spatial::Internal::PrivHandEventArgs_____ptr64___lambda_1988f8bb9bb9d35258d8d1f46a025ae4__2_1___lambda_1988f8bb9bb9d35258d8d1f46a025ae4___ @ 0x180055B60 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--InvokeHelper_Windows--Founda_ea_180055B60.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivHandEventArgs *>,SpectrumListener,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivHandEventArgs *>(
        _QWORD *a1,
        __int64 a2,
        __int128 *a3)
{
  __int128 v3; // xmm0
  __int64 *v5; // rax
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h]
  volatile signed __int32 *v11; // [rsp+58h] [rbp+10h] BYREF

  v3 = *a3;
  v9 = a2;
  v10 = v3;
  v5 = (__int64 *)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::Internal::InputPriv_____ptr64_Windows::UI::Input::Spatial::Internal::PrivHandEventArgs_____ptr64___lambda_1988f8bb9bb9d35258d8d1f46a025ae4__2_1___lambda_1988f8bb9bb9d35258d8d1f46a025ae4___(
                    &v11,
                    &v9);
  v6 = *v5;
  *v5 = 0LL;
  v7 = v11;
  *a1 = v6;
  if ( v7 )
  {
    v11 = 0LL;
    if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 32LL))(v7, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return a1;
}
