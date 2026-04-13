/*
 * XREFs of ??$Make@VCRemoteReleaseStub@ComTaskPool@Internal@Windows@@AEAPEAUIComPoolTask@34@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCRemoteReleaseStub@ComTaskPool@Internal@Windows@@@12@AEAPEAUIComPoolTask@Internal@Windows@@@Z @ 0x1800184F4
 * Callers:
 *     ??$MakeAndInitialize@VCRemoteTask@ComTaskPool@Internal@Windows@@V1234@AEAPEAUIComPoolTask@34@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCRemoteTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@@012@AEAPEAUIComPoolTask@Internal@Windows@@@Z @ 0x1800185E4 (--$MakeAndInitialize@VCRemoteTask@ComTaskPool@Internal@Windows@@V1234@AEAPEAUIComPoolTask@34@@De.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180027FA8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CRemoteReleaseStub,Windows::Internal::IComPoolTask * &>(
        __int64 a1,
        IUnknown **a2)
{
  IUnknown **v4; // rbx
  IUnknown *v5; // rsi
  bool v6; // zf

  *(_QWORD *)a1 = 0LL;
  v4 = (IUnknown **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = *a2;
    *v4 = (IUnknown *)&CThreadRefTaker::`vftable';
    SHGetThreadRef(v4 + 1);
    v6 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    v4[2] = (IUnknown *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    *((_DWORD *)v4 + 7) = 1;
    if ( !v6 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *v4 = (IUnknown *)&Windows::Internal::ComTaskPool::CRemoteReleaseStub::`vftable'{for `CThreadRefTaker'};
    v4[2] = (IUnknown *)&Windows::Internal::ComTaskPool::CRemoteReleaseStub::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    v4[4] = v5;
    if ( v5 )
      ((void (__fastcall *)(IUnknown *))v5->lpVtbl->AddRef)(v5);
    *((_BYTE *)v4 + 40) = 0;
    if ( *(_QWORD *)a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 16LL))(*(_QWORD *)a1 + 16LL);
    *(_QWORD *)a1 = v4;
  }
  return a1;
}
