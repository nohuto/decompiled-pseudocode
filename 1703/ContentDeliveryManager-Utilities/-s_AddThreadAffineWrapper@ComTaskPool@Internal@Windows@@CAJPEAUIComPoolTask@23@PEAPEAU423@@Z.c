/*
 * XREFs of ?s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z @ 0x180004484
 * Callers:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180004288 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 * Callees:
 *     ?Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180004134 (-Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ??$Make@VCRemoteReleaseStub@ComTaskPool@Internal@Windows@@AEAPEAUIComPoolTask@34@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCRemoteReleaseStub@ComTaskPool@Internal@Windows@@@12@AEAPEAUIComPoolTask@Internal@Windows@@@Z @ 0x18001377C (--$Make@VCRemoteReleaseStub@ComTaskPool@Internal@Windows@@AEAPEAUIComPoolTask@34@@Details@WRL@Mi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F68C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::s_AddThreadAffineWrapper(
        struct Windows::Internal::IComPoolTask *a1,
        struct Windows::Internal::IComPoolTask **a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  signed int v6; // edi
  struct Windows::Internal::IComPoolTask *v7; // rcx
  bool v9; // zf
  char *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  char v16; // [rsp+20h] [rbp-10h] BYREF
  struct Windows::Internal::IComPoolTask *v17; // [rsp+68h] [rbp+38h]
  __int64 v18; // [rsp+70h] [rbp+40h] BYREF
  struct Windows::Internal::IComPoolTask *v19; // [rsp+78h] [rbp+48h] BYREF

  *a2 = 0LL;
  v17 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v5 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_3:
    v7 = v17;
    goto LABEL_4;
  }
  v9 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  *v4 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *((_DWORD *)v4 + 3) = 1;
  if ( !v9 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  v19 = a1;
  *v4 = &Windows::Internal::ComTaskPool::CRemoteTask::`vftable';
  v4[2] = 0LL;
  v4[3] = 0LL;
  v10 = (char *)Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CRemoteReleaseStub,Windows::Internal::IComPoolTask * &>(
                  &v18,
                  &v19);
  v11 = 0LL;
  if ( &v16 != v10 )
  {
    v11 = *(_QWORD *)v10;
    *(_QWORD *)v10 = 0LL;
  }
  v12 = v5[3];
  v5[3] = v11;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v12 + 16) + 16LL))(v12 + 16);
  v13 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v13 + 16) + 16LL))(v13 + 16);
  }
  v14 = v5[3];
  v6 = v14 == 0 ? 0x8007000E : 0;
  if ( v14 )
    v6 = AgileGitPtr::Initialize(
           (AgileGitPtr *)(v5 + 2),
           &GUID_00000000_0000_0000_c000_000000000046,
           (struct IUnknown *)((v14 + 16) & -(__int64)(v14 != 0)));
  v15 = *v5;
  if ( v6 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD *))(v15 + 8))(v5);
    v17 = (struct Windows::Internal::IComPoolTask *)v5;
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    v6 = 0;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *))(v15 + 16))(v5);
  }
  if ( v6 < 0 )
    goto LABEL_3;
  v7 = 0LL;
  *a2 = v17;
LABEL_4:
  if ( v7 )
    (*(void (__fastcall **)(struct Windows::Internal::IComPoolTask *))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v6;
}
