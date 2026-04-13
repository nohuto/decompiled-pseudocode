/*
 * XREFs of ??$MakeAndInitialize@VCRemoteTask@ComTaskPool@Internal@Windows@@V1234@AEAPEAUIComPoolTask@34@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCRemoteTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@@012@AEAPEAUIComPoolTask@Internal@Windows@@@Z @ 0x1800185E4
 * Callers:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180008620 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 * Callees:
 *     ?Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180008564 (-Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ??$Make@VCRemoteReleaseStub@ComTaskPool@Internal@Windows@@AEAPEAUIComPoolTask@34@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCRemoteReleaseStub@ComTaskPool@Internal@Windows@@@12@AEAPEAUIComPoolTask@Internal@Windows@@@Z @ 0x1800184F4 (--$Make@VCRemoteReleaseStub@ComTaskPool@Internal@Windows@@AEAPEAUIComPoolTask@34@@Details@WRL@Mi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180027FA8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::ComTaskPool::CRemoteTask,Windows::Internal::ComTaskPool::CRemoteTask,Windows::Internal::IComPoolTask * &>(
        __int64 *a1,
        IUnknown **a2)
{
  __int64 v2; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  signed int v7; // esi
  bool v8; // zf
  char *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  char v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF
  IUnknown *v16; // [rsp+68h] [rbp+20h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *a1 = 0LL;
  v5 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    v8 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    *v5 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    *((_DWORD *)v5 + 3) = 1;
    if ( !v8 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *v5 = &Windows::Internal::ComTaskPool::CRemoteTask::`vftable';
    v5[2] = 0LL;
    v5[3] = 0LL;
    v16 = *a2;
    v9 = (char *)Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CRemoteReleaseStub,Windows::Internal::IComPoolTask * &>(
                   (__int64)&v15,
                   &v16);
    v10 = 0LL;
    if ( &v14 != v9 )
    {
      v10 = *(_QWORD *)v9;
      *(_QWORD *)v9 = 0LL;
    }
    v11 = v6[3];
    v6[3] = v10;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v11 + 16) + 16LL))(v11 + 16);
    v12 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v12 + 16) + 16LL))(v12 + 16);
    }
    v7 = v6[3] == 0LL ? 0x8007000E : 0;
    if ( v6[3]
      && (v7 = AgileGitPtr::Initialize(
                 (AgileGitPtr *)(v6 + 2),
                 &GUID_00000000_0000_0000_c000_000000000046,
                 (struct IUnknown *)(v6[3] + 16LL)),
          v7 >= 0) )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
      *a1 = (__int64)v6;
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      return 0;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
