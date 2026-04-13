/*
 * XREFs of ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180040424
 * Callers:
 *     ?ActivateHelper@NotificationsTargetedContentClient@ToastNotification@@AEAAJPEBG0@Z @ 0x18003F8E0 (-ActivateHelper@NotificationsTargetedContentClient@ToastNotification@@AEAAJPEBG0@Z.c)
 *     _lambda_54b1615c74727b96cfd9244fd3177ed2_::operator() @ 0x180052CFC (_lambda_54b1615c74727b96cfd9244fd3177ed2_--operator().c)
 *     ?Invoke@SwapStartTileService@Actions@CreativeFramework@@UEAAXXZ @ 0x180058FC0 (-Invoke@SwapStartTileService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C50 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003D14 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800181BC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEB_WPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x18003FF6C (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F68C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(
        void (__fastcall ***a1)(__int64, GUID *, __int64 *),
        DWORD a2,
        int a3)
{
  char *v4; // rax
  char *v5; // rbx
  int v6; // edi
  _QWORD *v7; // rdi
  bool v8; // zf
  int v9; // eax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  HRESULT v12; // eax
  void (__fastcall **v13)(__int64, GUID *, __int64 *); // rbx
  __int64 *v14; // rax
  __int64 v15; // rcx
  char *v16; // rcx
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  HANDLE pHandles; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  DWORD dwindex; // [rsp+68h] [rbp+28h] BYREF
  int v22; // [rsp+70h] [rbp+30h] BYREF
  char *v23; // [rsp+78h] [rbp+38h]

  v22 = a3;
  dwindex = a2;
  v23 = 0LL;
  v4 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v5 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_9:
    v10 = (unsigned int)v6;
    v11 = 1405LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)v10);
    goto LABEL_20;
  }
  v7 = v4 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v4 + 8));
  v8 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Windows::Foundation::IAsyncActionCompletedHandler'};
  *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_DWORD *)v5 + 9) = 1;
  if ( !v8 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  *(_QWORD *)v5 = off_18007C0F8;
  *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_DWORD *)v5 + 10) = 0;
  *((_QWORD *)v5 + 6) = 0LL;
  v9 = wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create((void **)v5 + 6);
  v6 = v9;
  if ( v9 >= 0 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
    v23 = v5;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x560,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v9);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v6 < 0 )
    goto LABEL_9;
  v12 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *), char *))(*a1)[6])(a1, v23);
  v6 = v12;
  if ( v12 < 0 )
  {
    v11 = 1406LL;
LABEL_14:
    v10 = (unsigned int)v12;
    goto LABEL_15;
  }
  pHandles = (HANDLE)*((_QWORD *)v23 + 6);
  v12 = CoWaitForMultipleHandles(8u, 0xFFFFFFFF, 1u, &pHandles, &dwindex);
  v6 = v12;
  if ( v12 < 0 )
  {
    v11 = 1418LL;
    goto LABEL_14;
  }
  if ( *((_DWORD *)v23 + 10) == 1 )
  {
    v6 = 0;
  }
  else
  {
    v18 = 0LL;
    v13 = *a1;
    v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v18);
    (*v13)((__int64)a1, &GUID_00000036_0000_0000_c000_000000000046, v14);
    v22 = -2147418113;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 64LL))(v18, &v22);
    v15 = v18;
    v6 = v22;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
LABEL_20:
  v16 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return (unsigned int)v6;
}
