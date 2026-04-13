/*
 * XREFs of ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800058CC
 * Callers:
 *     ?GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@00EPEAPEAUIAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x1800037B8 (-GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@00EPEAPEAUIAppData@Int.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180005540 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180027FA8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData *>,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData *>>(
        int (__fastcall ***a1)(__int64, GUID *, __int64 *),
        HRESULT a2,
        __int64 a3)
{
  HANDLE *v4; // rdi
  _DWORD *v5; // rbx
  HANDLE Event; // rax
  signed int LastError; // eax
  signed int v8; // r15d
  __int64 v9; // rax
  char v10; // bl
  __int64 v11; // rsi
  int (__fastcall **v12)(__int64, GUID *, __int64 *); // rbx
  __int64 *v13; // rsi
  __int64 (__fastcall **v14)(__int64, GUID *, __int64 *); // rbx
  __int64 *v15; // rax
  int v16; // eax
  unsigned int v17; // esi
  HANDLE pHandles[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v20; // [rsp+90h] [rbp+38h] BYREF
  HRESULT v21; // [rsp+98h] [rbp+40h] BYREF
  __int64 dwindex; // [rsp+A0h] [rbp+48h] BYREF
  HANDLE *v23; // [rsp+A8h] [rbp+50h]

  dwindex = a3;
  v21 = a2;
  if ( a1 )
    ((void (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *)))(*a1)[1])(a1);
  v4 = 0LL;
  v23 = 0LL;
  v5 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    *(_QWORD *)v5 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 2));
    v5[9] = 1;
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData *>'};
    *((_QWORD *)v5 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v4 = v23;
    }
    *(_QWORD *)v5 = `WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData *>,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData *>>'::`2'::FTMEventDelegate::`vftable';
    *((_QWORD *)v5 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    v5[10] = 0;
    *((_QWORD *)v5 + 6) = 0LL;
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *((_QWORD *)v5 + 6) = Event;
    if ( Event )
    {
      v8 = 0;
    }
    else
    {
      LastError = GetLastError();
      v8 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v8 = LastError;
    }
    v9 = *(_QWORD *)v5;
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(_DWORD *))(v9 + 8))(v5);
      v4 = (HANDLE *)v5;
      v23 = (HANDLE *)v5;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
      v8 = 0;
    }
    else
    {
      (*(void (__fastcall **)(_DWORD *))(v9 + 16))(v5);
    }
    v21 = v8;
    if ( v8 >= 0 )
    {
      v21 = ((__int64 (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *), HANDLE *))(*a1)[6])(a1, v4);
      if ( v21 >= 0 )
      {
        pHandles[0] = v4[6];
        pHandles[1] = 0LL;
        v10 = 0;
        v21 = CoWaitForMultipleHandles(8u, 0xFFFFFFFF, 1u, pHandles, (LPDWORD)&dwindex);
        if ( v21 >= 0 && (_DWORD)dwindex )
        {
          v21 = -2147023673;
          v10 = 1;
        }
        v11 = 0LL;
        v20 = 0LL;
        if ( v10 )
        {
          v12 = *a1;
          v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v20);
          if ( (*v12)((__int64)a1, &GUID_00000036_0000_0000_c000_000000000046, v13) >= 0 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 72LL))(v20);
          v11 = v20;
        }
        if ( v21 >= 0 && *((_DWORD *)v4 + 10) != 1 )
        {
          if ( v11
            || (v14 = (__int64 (__fastcall **)(__int64, GUID *, __int64 *))*a1,
                v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v20),
                v16 = (*v14)((__int64)a1, &GUID_00000036_0000_0000_c000_000000000046, v15),
                v11 = v20,
                v16 >= 0) )
          {
            (*(void (__fastcall **)(__int64, HRESULT *))(*(_QWORD *)v11 + 64LL))(v11, &v21);
            v11 = v20;
          }
        }
        if ( v11 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
  }
  else
  {
    v21 = -2147024882;
  }
  v17 = v21;
  if ( v4 )
    (*((void (__fastcall **)(HANDLE *))*v4 + 2))(v4);
  if ( a1 )
    ((void (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *)))(*a1)[2])(a1);
  return v17;
}
