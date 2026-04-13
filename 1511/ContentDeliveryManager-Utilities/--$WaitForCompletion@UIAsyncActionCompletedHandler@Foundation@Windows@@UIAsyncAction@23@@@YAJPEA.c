/*
 * XREFs of ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180004F04
 * Callers:
 *     ?EnableContextualSuggestions@ContentManagement@@YAJE@Z @ 0x180003228 (-EnableContextualSuggestions@ContentManagement@@YAJE@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x180002B68 (-SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180005540 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180027FA8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>(
        int (__fastcall ***a1)(__int64, GUID *, __int64),
        int a2,
        __int64 a3)
{
  char *v4; // rdi
  char *v5; // rax
  char *v6; // rbx
  signed int v7; // r14d
  _QWORD *v8; // rsi
  HANDLE Event; // rax
  signed int LastError; // eax
  __int64 v11; // rax
  HWND v12; // rcx
  DWORD v13; // r9d
  int v14; // eax
  __int64 v15; // rsi
  int (__fastcall **v16)(__int64, GUID *, __int64); // rbx
  __int64 v17; // rsi
  APTTYPE v19; // [rsp+20h] [rbp-38h]
  APTTYPEQUALIFIER v20; // [rsp+28h] [rbp-30h]
  void *v21[4]; // [rsp+38h] [rbp-20h] BYREF
  int v22; // [rsp+98h] [rbp+40h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+48h] BYREF
  int (__fastcall ***v24)(__int64, GUID *, __int64); // [rsp+A8h] [rbp+50h]

  v23 = a3;
  v22 = a2;
  v24 = a1;
  if ( a1 )
    ((void (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64)))(*a1)[1])(a1);
  v4 = 0LL;
  v5 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    v8 = v5 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 8));
    *((_DWORD *)v6 + 9) = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Windows::Foundation::IAsyncActionCompletedHandler'};
    *v8 = `WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>'::`2'::FTMEventDelegate::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v4 = 0LL;
    }
    *(_QWORD *)v6 = `WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>'::`2'::FTMEventDelegate::`vftable';
    *v8 = `WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>'::`2'::FTMEventDelegate::`vftable';
    *((_DWORD *)v6 + 10) = 0;
    *((_QWORD *)v6 + 6) = 0LL;
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *((_QWORD *)v6 + 6) = Event;
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
    v11 = *(_QWORD *)v6;
    if ( v7 >= 0 )
    {
      (*(void (__fastcall **)(char *))(v11 + 8))(v6);
      v4 = v6;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 16LL))(v6);
      v7 = 0;
    }
    else
    {
      (*(void (__fastcall **)(char *))(v11 + 16))(v6);
    }
    v22 = v7;
    if ( v7 >= 0 )
    {
      v7 = ((__int64 (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64), char *))(*a1)[6])(a1, v4);
      v22 = v7;
      if ( v7 >= 0 )
      {
        v21[0] = *((void **)v4 + 6);
        v21[1] = 0LL;
        v14 = SHProcessMessagesUntilEventsEx(v12, v21, 1u, v13, v19, v20);
        v7 = v22;
        if ( v14 == -1 )
          v7 = -2147467259;
        v22 = v7;
        v15 = 0LL;
        v23 = 0LL;
        if ( v7 >= 0 && *((_DWORD *)v4 + 10) != 1 )
        {
          v16 = *a1;
          v17 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v23);
          if ( (*v16)((__int64)a1, &GUID_00000036_0000_0000_c000_000000000046, v17) >= 0 )
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 64LL))(v23, &v22);
          v15 = v23;
          v7 = v22;
        }
        if ( v15 )
        {
          v23 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          v7 = v22;
        }
      }
    }
  }
  else
  {
    v7 = -2147024882;
    v22 = -2147024882;
  }
  if ( v4 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( a1 )
    ((void (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64)))(*a1)[2])(a1);
  return (unsigned int)v7;
}
