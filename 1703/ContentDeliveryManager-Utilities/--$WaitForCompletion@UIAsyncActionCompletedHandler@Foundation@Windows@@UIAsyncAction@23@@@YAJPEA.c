/*
 * XREFs of ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180013AFC
 * Callers:
 *     ?EnableContextualSuggestions@ContentManagement@@YAJE@Z @ 0x18000AD18 (-EnableContextualSuggestions@ContentManagement@@YAJE@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003D14 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x180006680 (-SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800181BC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F68C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>(
        __int64 (__fastcall ***a1)(__int64, GUID *, __int64),
        int a2,
        char *a3)
{
  char *v4; // rax
  char *v5; // rbx
  signed int v6; // edi
  _QWORD *v7; // rdi
  HANDLE Event; // rax
  signed int LastError; // eax
  __int64 v10; // rax
  DWORD v11; // r9d
  int v12; // eax
  __int64 v13; // rcx
  __int64 (__fastcall **v14)(__int64, GUID *, __int64); // rbx
  __int64 v15; // rax
  int v16; // eax
  char *v17; // rcx
  APTTYPE v19; // [rsp+20h] [rbp-38h]
  APTTYPEQUALIFIER v20; // [rsp+28h] [rbp-30h]
  void *v21[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v22; // [rsp+80h] [rbp+28h] BYREF
  int v23; // [rsp+88h] [rbp+30h] BYREF
  char *v24; // [rsp+90h] [rbp+38h]
  __int64 (__fastcall ***v25)(__int64, GUID *, __int64); // [rsp+98h] [rbp+40h]

  v24 = a3;
  v23 = a2;
  v25 = a1;
  if ( a1 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64)))(*a1)[1])(a1);
  v24 = 0LL;
  v4 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v7 = v4 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v4 + 8));
    *((_DWORD *)v5 + 9) = 1;
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Windows::Foundation::IAsyncActionCompletedHandler'};
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v5 = off_180077818;
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    *((_DWORD *)v5 + 10) = 0;
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
    v10 = *(_QWORD *)v5;
    if ( v6 >= 0 )
    {
      (*(void (__fastcall **)(char *))(v10 + 8))(v5);
      v24 = v5;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 16LL))(v5);
      v6 = 0;
    }
    else
    {
      (*(void (__fastcall **)(char *))(v10 + 16))(v5);
    }
    v23 = v6;
    if ( v6 >= 0 )
    {
      v6 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64), char *))(*a1)[6])(a1, v24);
      v23 = v6;
      if ( v6 >= 0 )
      {
        v21[0] = *((void **)v24 + 6);
        v21[1] = 0LL;
        v12 = SHProcessMessagesUntilEventsEx((HWND)v21[0], v21, 1u, v11, v19, v20);
        v6 = v23;
        if ( v12 == -1 )
          v6 = -2147467259;
        v23 = v6;
        v13 = 0LL;
        v22 = 0LL;
        if ( v6 >= 0 && *((_DWORD *)v24 + 10) != 1 )
        {
          v14 = *a1;
          v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v22);
          v16 = (*v14)((__int64)a1, &GUID_00000036_0000_0000_c000_000000000046, v15);
          v13 = v22;
          if ( v16 >= 0 )
          {
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 64LL))(v22, &v23);
            v13 = v22;
          }
          v6 = v23;
        }
        if ( v13 )
        {
          v22 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          v6 = v23;
        }
      }
    }
  }
  else
  {
    v6 = -2147024882;
    v23 = -2147024882;
  }
  v17 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( a1 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64)))(*a1)[2])(a1);
  return (unsigned int)v6;
}
