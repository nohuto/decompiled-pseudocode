/*
 * XREFs of ??$Make@VCRemoteReleaseStub@ComTaskPool@Internal@Windows@@AEAPEAUIComPoolTask@34@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCRemoteReleaseStub@ComTaskPool@Internal@Windows@@@12@AEAPEAUIComPoolTask@Internal@Windows@@@Z @ 0x18001377C
 * Callers:
 *     ?s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z @ 0x180004484 (-s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F68C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CRemoteReleaseStub,Windows::Internal::IComPoolTask * &>(
        __int64 a1,
        IUnknown **a2)
{
  IUnknown **v4; // rbx
  IUnknown *v5; // rsi
  bool v6; // zf

  *(_QWORD *)a1 = 0LL;
  v4 = (IUnknown **)operator new(0x30uLL, (const struct std::nothrow_t *)&TLV::nothrow);
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
