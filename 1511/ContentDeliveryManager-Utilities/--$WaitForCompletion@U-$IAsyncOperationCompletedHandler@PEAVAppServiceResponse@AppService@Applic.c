/*
 * XREFs of ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18001AC14
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x18000FBE4 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x180002B68 (-SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180005540 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180027FA8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponse *>>(
        int (__fastcall ***a1)(__int64, GUID *, __int64 *),
        int a2,
        __int64 a3)
{
  void **v4; // rdi
  _DWORD *v5; // rbx
  signed int v6; // r14d
  HANDLE Event; // rax
  signed int LastError; // eax
  __int64 v9; // rax
  HWND v10; // rcx
  DWORD v11; // r9d
  int v12; // eax
  __int64 v13; // rsi
  int (__fastcall **v14)(__int64, GUID *, __int64 *); // rbx
  __int64 *v15; // rsi
  APTTYPE v17; // [rsp+20h] [rbp-38h]
  APTTYPEQUALIFIER v18; // [rsp+28h] [rbp-30h]
  void *v19[4]; // [rsp+38h] [rbp-20h] BYREF
  int v20; // [rsp+98h] [rbp+40h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+48h] BYREF
  int (__fastcall ***v22)(__int64, GUID *, __int64 *); // [rsp+A8h] [rbp+50h]

  v21 = a3;
  v20 = a2;
  v22 = a1;
  if ( a1 )
    ((void (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *)))(*a1)[1])(a1);
  v4 = 0LL;
  v5 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    *(_QWORD *)v5 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 2));
    v5[9] = 1;
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>'};
    *((_QWORD *)v5 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v4 = 0LL;
    }
    *(_QWORD *)v5 = `WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponse *>>'::`2'::FTMEventDelegate::`vftable';
    *((_QWORD *)v5 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    v5[10] = 0;
    *((_QWORD *)v5 + 6) = 0LL;
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *((_QWORD *)v5 + 6) = Event;
    if ( Event )
    {
      v6 = 0;
    }
    else
    {
      LastError = GetLastError();
      v6 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v6 = LastError;
    }
    v9 = *(_QWORD *)v5;
    if ( v6 >= 0 )
    {
      (*(void (__fastcall **)(_DWORD *))(v9 + 8))(v5);
      v4 = (void **)v5;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
      v6 = 0;
    }
    else
    {
      (*(void (__fastcall **)(_DWORD *))(v9 + 16))(v5);
    }
    v20 = v6;
    if ( v6 >= 0 )
    {
      v6 = ((__int64 (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *), void **))(*a1)[6])(a1, v4);
      v20 = v6;
      if ( v6 >= 0 )
      {
        v19[0] = v4[6];
        v19[1] = 0LL;
        v12 = SHProcessMessagesUntilEventsEx(v10, v19, 1u, v11, v17, v18);
        v6 = v20;
        if ( v12 == -1 )
          v6 = -2147467259;
        v20 = v6;
        v13 = 0LL;
        v21 = 0LL;
        if ( v6 >= 0 && *((_DWORD *)v4 + 10) != 1 )
        {
          v14 = *a1;
          v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v21);
          if ( (*v14)((__int64)a1, &GUID_00000036_0000_0000_c000_000000000046, v15) >= 0 )
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 64LL))(v21, &v20);
          v13 = v21;
          v6 = v20;
        }
        if ( v13 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          v6 = v20;
        }
      }
    }
  }
  else
  {
    v6 = -2147024882;
    v20 = -2147024882;
  }
  if ( v4 )
    (*((void (__fastcall **)(void **))*v4 + 2))(v4);
  if ( a1 )
    ((void (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *)))(*a1)[2])(a1);
  return (unsigned int)v6;
}
