/*
 * XREFs of ?RuntimeClassInitialize@WGIController@@QEAAJPEAUIUINavigationController@Input@Gaming@Windows@@PEAUIRawInputClient@@PEAUIMessageSession@@@Z @ 0x180062030
 * Callers:
 *     ?OnUINavigationControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIUINavigationController@Input@Gaming@Windows@@@Z @ 0x180060FC0 (-OnUINavigationControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIUINavigationCont.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18004391C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall WGIController::RuntimeClassInitialize(
        WGIController *this,
        struct Windows::Gaming::Input::IUINavigationController *a2,
        struct IRawInputClient *a3,
        struct IMessageSession *a4)
{
  unsigned int v8; // ebx
  int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int ActivationFactory; // eax
  __int64 v14; // rcx
  int v15; // r9d
  HRESULT v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 (__fastcall ***v22)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v23; // rcx
  __int64 (__fastcall ***v24)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v26)(_QWORD, GUID *, char *); // [rsp+38h] [rbp-49h] BYREF
  __int64 v27; // [rsp+40h] [rbp-41h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-39h] BYREF
  __int64 v29; // [rsp+50h] [rbp-31h] BYREF
  __int64 v30; // [rsp+58h] [rbp-29h] BYREF
  __int64 v31; // [rsp+60h] [rbp-21h] BYREF
  __int64 v32; // [rsp+68h] [rbp-19h] BYREF
  _QWORD v33[3]; // [rsp+70h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+7h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+1Fh] BYREF

  v33[1] = -2LL;
  v28 = 0LL;
  v31 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v33[0] = 0LL;
  v32 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  if ( !a2 )
  {
    v8 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_55;
    v9 = 52;
    goto LABEL_4;
  }
  if ( !a3 )
  {
    v8 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 53;
LABEL_4:
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v9, 87);
      goto LABEL_55;
    }
    goto LABEL_55;
  }
  if ( a4 )
  {
    if ( *((struct Windows::Gaming::Input::IUINavigationController **)this + 9) != a2 )
    {
      (*(void (__fastcall **)(struct Windows::Gaming::Input::IUINavigationController *))(*(_QWORD *)a2 + 8LL))(a2);
      v10 = *((_QWORD *)this + 9);
      *((_QWORD *)this + 9) = a2;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)a3 + 8LL))(a3);
    v11 = *((_QWORD *)this + 11);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    *((_QWORD *)this + 11) = a3;
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)a4 + 8LL))(a4);
    v12 = *((_QWORD *)this + 12);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    *((_QWORD *)this + 12) = a4;
    ActivationFactory = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))this + 9))(
                          *((_QWORD *)this + 9),
                          &GUID_1baf6522_5f64_42c5_8267_b9fe2215bfbd,
                          &v28);
    if ( ActivationFactory >= 0 )
    {
      ActivationFactory = (**v28)(v28, &GUID_debcfefe_f763_4670_940b_57aae2b143ff, &v31);
      if ( ActivationFactory >= 0 )
      {
        ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v31 + 48LL))(
                              v31,
                              &v26);
        if ( ActivationFactory >= 0 )
        {
          ActivationFactory = (**v26)(v26, &GUID_c3542377_1ea7_4454_8deb_8aa6070db645, (char *)this + 64);
          if ( ActivationFactory >= 0 )
          {
            if ( (int)(**v26)(v26, &GUID_f6d99cef_3636_46f4_a0a9_00751df46bcb, (char *)&v27) < 0 )
            {
              if ( (int)(**v26)(v26, &GUID_075ddbfa_cc84_4137_8ce7_aa552fea8fe2, (char *)v33) >= 0
                || (int)(**v26)(v26, &GUID_ac104f57_79bd_4af3_9675_5e667484818b, (char *)&v32) >= 0 )
              {
                *((_DWORD *)this + 28) = 64;
              }
            }
            else
            {
              ActivationFactory = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v27 + 64LL))(
                                    v27,
                                    (char *)this + 104);
              if ( ActivationFactory < 0 )
              {
                if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                  goto LABEL_52;
                v15 = 75;
                goto LABEL_51;
              }
              *((_DWORD *)this + 28) = 196;
              ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 120LL))(v27, &v30);
              if ( ActivationFactory < 0 )
              {
                if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                  goto LABEL_52;
                v15 = 77;
                goto LABEL_51;
              }
              *(GUID *)&hstringHeader.Reserved.Reserved1 = GUID_GIP_MICROSOFT_XBOX_INPUT_IELITEGAMEPAD;
              ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING_HEADER *, char *))(*(_QWORD *)v30 + 120LL))(
                                    v30,
                                    &hstringHeader,
                                    (char *)this + 192);
              if ( ActivationFactory < 0 )
              {
                if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                  goto LABEL_52;
                v15 = 78;
                goto LABEL_51;
              }
            }
            string = 0LL;
            v16 = WindowsCreateStringReference(L"Windows.Gaming.Input.Gamepad", 0x1Cu, &hstringHeader, &string);
            if ( v16 < 0 )
            {
              Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
              __debugbreak();
            }
            ActivationFactory = RoGetActivationFactory(string, &GUID_42676dc5_0856_47c4_9213_b395504c3a3c, &v29);
            if ( ActivationFactory >= 0 )
            {
              ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v29 + 48LL))(
                                    v29,
                                    v28,
                                    (char *)this + 80);
              v8 = ActivationFactory;
              if ( ActivationFactory >= 0 )
                goto LABEL_55;
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              {
LABEL_52:
                if ( IsDebuggerPresent() )
                  __debugbreak();
                __fastfail(7u);
              }
              v15 = 95;
            }
            else
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                goto LABEL_52;
              v15 = 94;
            }
          }
          else
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              goto LABEL_52;
            v15 = 67;
          }
        }
        else
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_52;
          v15 = 66;
        }
      }
      else
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_52;
        v15 = 65;
      }
    }
    else
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_52;
      v15 = 64;
    }
LABEL_51:
    Template_qqq(v14, &MinInput_Warning_CheckResult, 0, v15, ActivationFactory);
    goto LABEL_52;
  }
  v8 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 54;
    goto LABEL_4;
  }
LABEL_55:
  v17 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v33[0];
  if ( v33[0] )
  {
    v33[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v26;
  if ( v26 )
  {
    v26 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v22)[2])(v22);
  }
  v23 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v24 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v24)[2])(v24);
  }
  return v8;
}
