/*
 * XREFs of ?StartUINavigationControllerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x1800612E0
 * Callers:
 *     ?Initialize@WGIRawInputProvider@@AEAAJXZ @ 0x180060BF4 (-Initialize@WGIRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18004391C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?OnUINavigationControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIUINavigationController@Input@Gaming@Windows@@@Z @ 0x180060FC0 (-OnUINavigationControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIUINavigationCont.c)
 *     ??$Callback@U?$IEventHandler@PEAVUINavigationController@Input@Gaming@Windows@@@Foundation@Windows@@VWGIRawInputProvider@@PEAUIInspectable@@PEAUIUINavigationController@Input@Gaming@3@@WRL@Microsoft@@YA?AV?$ComPtr@U?$IEventHandler@PEAVUINavigationController@Input@Gaming@Windows@@@Foundation@Windows@@@01@PEAVWGIRawInputProvider@@P83@EAAJPEAUIInspectable@@PEAUIUINavigationController@Input@Gaming@Windows@@@Z@Z @ 0x180061A28 (--$Callback@U-$IEventHandler@PEAVUINavigationController@Input@Gaming@Windows@@@Foundation@Window.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall WGIRawInputProvider::StartUINavigationControllerWatcher(WGIRawInputProvider *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  HRESULT v3; // eax
  int ActivationFactory; // eax
  __int64 v5; // rcx
  HSTRING_HEADER *v6; // rax
  PVOID Reserved1; // rsi
  struct Windows::Gaming::Input::IUINavigationController *v8; // rcx
  HSTRING_HEADER *v9; // rax
  PVOID v10; // r14
  struct Windows::Gaming::Input::IUINavigationController *v11; // rcx
  int v12; // eax
  unsigned int v13; // edi
  int v14; // r9d
  unsigned int v15; // r15d
  int v16; // eax
  __int64 v17; // rcx
  struct Windows::Gaming::Input::IUINavigationController *v18; // rcx
  int v19; // r9d
  struct Windows::Gaming::Input::IUINavigationController *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct Windows::Gaming::Input::IUINavigationController *v24; // [rsp+38h] [rbp-39h] BYREF
  __int64 v25; // [rsp+40h] [rbp-31h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-29h] BYREF
  __int64 v27; // [rsp+50h] [rbp-21h] BYREF
  PVOID v28; // [rsp+58h] [rbp-19h]
  PVOID v29; // [rsp+60h] [rbp-11h]
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+68h] [rbp-9h]
  __int64 v31; // [rsp+70h] [rbp-1h]
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+7h] BYREF
  HSTRING string; // [rsp+90h] [rbp+1Fh] BYREF

  v31 = -2LL;
  v25 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 104);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v30 = v2;
  string = 0LL;
  v3 = WindowsCreateStringReference(L"Windows.Gaming.Input.UINavigationController", 0x2Bu, &hstringHeader, &string);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
  ActivationFactory = RoGetActivationFactory(string, &GUID_2f14930a_f6f8_4a48_8d89_94786cca0c2e, &v25);
  string = 0LL;
  if ( ActivationFactory < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v5, &MinInput_Warning_CheckResult, 0, 323, ActivationFactory);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  hstringHeader.Reserved.Reserved1 = WGIRawInputProvider::OnUINavigationControllerAdded;
  *(_DWORD *)&hstringHeader.Reserved.Reserved2[8] = 0;
  v6 = (HSTRING_HEADER *)Microsoft::WRL::Callback<Windows::Foundation::IEventHandler<Windows::Gaming::Input::UINavigationController *>,WGIRawInputProvider,IInspectable *,Windows::Gaming::Input::IUINavigationController *>(
                           &v24,
                           this,
                           &hstringHeader);
  Reserved1 = 0LL;
  if ( &hstringHeader != v6 )
  {
    Reserved1 = v6->Reserved.Reserved1;
    v6->Reserved.Reserved1 = 0LL;
  }
  v29 = Reserved1;
  v8 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(struct Windows::Gaming::Input::IUINavigationController *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  hstringHeader.Reserved.Reserved1 = WGIRawInputProvider::OnUINavigationControllerRemoved;
  *(_DWORD *)&hstringHeader.Reserved.Reserved2[8] = 0;
  v9 = (HSTRING_HEADER *)Microsoft::WRL::Callback<Windows::Foundation::IEventHandler<Windows::Gaming::Input::UINavigationController *>,WGIRawInputProvider,IInspectable *,Windows::Gaming::Input::IUINavigationController *>(
                           &v24,
                           this,
                           &hstringHeader);
  v10 = 0LL;
  if ( &hstringHeader != v9 )
  {
    v10 = v9->Reserved.Reserved1;
    v9->Reserved.Reserved1 = 0LL;
  }
  v28 = v10;
  v11 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(struct Windows::Gaming::Input::IUINavigationController *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( !Reserved1 )
  {
    LOBYTE(v12) = 14;
    v13 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_50;
    v14 = 331;
    goto LABEL_20;
  }
  if ( v10 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, PVOID, char *))(*(_QWORD *)v25 + 48LL))(v25, Reserved1, (char *)this + 64);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, PVOID, char *))(*(_QWORD *)v25 + 64LL))(v25, v10, (char *)this + 72);
      v13 = v12;
      if ( v12 >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 80LL))(v25, &v27);
        v13 = v12;
        if ( v12 >= 0 )
        {
          v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v27 + 56LL))(v27, &v26);
          v13 = v12;
          if ( v12 >= 0 )
          {
            v15 = 0;
            if ( v26 )
            {
              while ( 1 )
              {
                v24 = 0LL;
                v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Gaming::Input::IUINavigationController **))(*(_QWORD *)v27 + 48LL))(
                        v27,
                        v15,
                        &v24);
                v13 = v16;
                if ( v16 < 0 )
                  break;
                v16 = WGIRawInputProvider::OnUINavigationControllerAdded((struct IRawInputClient **)this, 0LL, v24);
                v13 = v16;
                if ( v16 < 0 )
                {
                  if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                    goto LABEL_48;
                  v19 = 353;
                  goto LABEL_47;
                }
                v18 = v24;
                if ( v24 )
                {
                  v24 = 0LL;
                  (*(void (__fastcall **)(struct Windows::Gaming::Input::IUINavigationController *))(*(_QWORD *)v18 + 16LL))(v18);
                }
                if ( ++v15 >= v26 )
                  goto LABEL_50;
              }
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                goto LABEL_48;
              v19 = 352;
LABEL_47:
              Template_qqq(v17, &MinInput_Warning_CheckResult, 0, v19, v16);
LABEL_48:
              v20 = v24;
              if ( v24 )
              {
                v24 = 0LL;
                (*(void (__fastcall **)(struct Windows::Gaming::Input::IUINavigationController *))(*(_QWORD *)v20 + 16LL))(v20);
              }
            }
          }
          else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v14 = 347;
            goto LABEL_20;
          }
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v14 = 346;
          goto LABEL_20;
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v14 = 340;
        goto LABEL_20;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v14 = 336;
      goto LABEL_20;
    }
  }
  else
  {
    LOBYTE(v12) = 14;
    v13 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v14 = 332;
LABEL_20:
      Template_qqq((__int64)v11, &MinInput_Warning_CheckResult, 0, v14, v12);
    }
  }
LABEL_50:
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    v30 = 0LL;
  }
  v21 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( v10 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( Reserved1 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Reserved1 + 16LL))(Reserved1);
  }
  v22 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return v13;
}
