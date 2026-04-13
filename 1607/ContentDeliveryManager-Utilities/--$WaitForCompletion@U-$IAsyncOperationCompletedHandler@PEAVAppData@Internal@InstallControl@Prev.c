/*
 * XREFs of ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180014124
 * Callers:
 *     ?GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@00EPEAPEAUIAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18000965C (-GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@00EPEAPEAUIAppData@Int.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003A1C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800120D0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058B88 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData *>,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData *>>(
        __int64 (__fastcall ***a1)(__int64, GUID *, __int64 *),
        HRESULT a2,
        __int64 a3)
{
  _DWORD *v4; // rbx
  HANDLE Event; // rax
  signed int LastError; // eax
  signed int v7; // esi
  __int64 v8; // rax
  char v9; // bl
  __int64 v10; // rcx
  __int64 (__fastcall **v11)(__int64, GUID *, __int64 *); // rbx
  __int64 *v12; // rax
  int v13; // eax
  __int64 (__fastcall **v14)(__int64, GUID *, __int64 *); // rbx
  __int64 *v15; // rax
  int v16; // eax
  unsigned int v17; // ebx
  HANDLE *v18; // rcx
  HANDLE pHandles[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v21; // [rsp+80h] [rbp+28h] BYREF
  HRESULT v22; // [rsp+88h] [rbp+30h] BYREF
  __int64 dwindex; // [rsp+90h] [rbp+38h] BYREF
  HANDLE *v24; // [rsp+98h] [rbp+40h]

  dwindex = a3;
  v22 = a2;
  if ( a1 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*a1)[1])(a1);
  v24 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    *(_QWORD *)v4 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v4 + 2));
    v4[9] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData *>'};
    *((_QWORD *)v4 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v4 = `WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData *>,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData *>>'::`2'::FTMEventDelegate::`vftable';
    *((_QWORD *)v4 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    v4[10] = 0;
    *((_QWORD *)v4 + 6) = 0LL;
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *((_QWORD *)v4 + 6) = Event;
    if ( Event )
    {
      v7 = 0;
    }
    else
    {
      LastError = GetLastError();
      v7 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v7 = LastError;
    }
    v8 = *(_QWORD *)v4;
    if ( v7 >= 0 )
    {
      (*(void (__fastcall **)(_DWORD *))(v8 + 8))(v4);
      v24 = (HANDLE *)v4;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
      v7 = 0;
    }
    else
    {
      (*(void (__fastcall **)(_DWORD *))(v8 + 16))(v4);
    }
    v22 = v7;
    if ( v7 >= 0 )
    {
      v22 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), HANDLE *))(*a1)[6])(a1, v24);
      if ( v22 >= 0 )
      {
        pHandles[0] = v24[6];
        pHandles[1] = 0LL;
        v9 = 0;
        v22 = CoWaitForMultipleHandles(8u, 0xFFFFFFFF, 1u, pHandles, (LPDWORD)&dwindex);
        if ( v22 >= 0 && (_DWORD)dwindex )
        {
          v22 = -2147023673;
          v9 = 1;
        }
        v10 = 0LL;
        v21 = 0LL;
        if ( v9 )
        {
          v11 = *a1;
          v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v21);
          v13 = (*v11)((__int64)a1, &GUID_00000036_0000_0000_c000_000000000046, v12);
          v10 = v21;
          if ( v13 >= 0 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 72LL))(v21);
            v10 = v21;
          }
        }
        if ( v22 >= 0 && *((_DWORD *)v24 + 10) != 1 )
        {
          if ( v10
            || (v14 = *a1,
                v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v21),
                v16 = (*v14)((__int64)a1, &GUID_00000036_0000_0000_c000_000000000046, v15),
                v10 = v21,
                v16 >= 0) )
          {
            (*(void (__fastcall **)(__int64, HRESULT *))(*(_QWORD *)v10 + 64LL))(v10, &v22);
            v10 = v21;
          }
        }
        if ( v10 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
    }
  }
  else
  {
    v22 = -2147024882;
  }
  v17 = v22;
  v18 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*((void (__fastcall **)(HANDLE *))*v18 + 2))(v18);
  }
  if ( a1 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*a1)[2])(a1);
  return v17;
}
