/*
 * XREFs of ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180004214
 * Callers:
 *     CreateSystemInputHost @ 0x180003E90 (CreateSystemInputHost.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z @ 0x180005A28 (--0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z.c)
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180005DF8 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x18000AD58 (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 *     ??0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x180011898 (--0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001248C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?CreateAndInitialize@InputProviderManager@@QEAAJPEAUIRawInputClient@@@Z @ 0x18002C3EC (-CreateAndInitialize@InputProviderManager@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800840A8 (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x18009E614 (IsGetMPCInputPostProcessorPresent.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall OneCoreUAPInputHost::Initialize(OneCoreUAPInputHost *this, struct IDWMInputProxy *a2)
{
  struct ISystemInputRouter **v3; // r13
  struct ISystemInputRouter **v4; // r12
  char MPCInputPostProcessorPresent; // al
  __int64 v6; // rcx
  int v7; // r14d
  int v8; // eax
  int v9; // ebx
  int v10; // esi
  DWMInputRouter *v11; // rax
  DWMInputRouter *v12; // rbx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  OneCoreUAPInputHost *v17; // rcx
  __int64 v18; // rcx
  struct ISystemInputRouter *v19; // r15
  struct IRawInputClient **v20; // rsi
  InputStateManager *v21; // rax
  InputStateManager *v22; // rbx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int128 v29; // [rsp+48h] [rbp-19h] BYREF
  _QWORD v30[7]; // [rsp+58h] [rbp-9h] BYREF
  _QWORD *v31; // [rsp+90h] [rbp+2Fh]
  OneCoreUAPInputHost *v32; // [rsp+C8h] [rbp+67h] BYREF

  v32 = this;
  v3 = (struct ISystemInputRouter **)OneCoreUAPInputHost::s_pInputHost;
  if ( (gdwMitConfig & 7) != 0 )
    MITSetInputCallbacks(
      Win32kInterop::s_DeviceNotificationsCallback,
      &Win32kInterop::s_PostInputMessage,
      &Win32kInterop::s_NonMinUserCallback,
      Win32kInterop::s_MsgRoutingInfoCallback,
      Win32kInterop::s_FireViewHitTestCallback,
      &Win32kInterop::s_QMsgCallback,
      -2LL);
  v4 = v3 + 5;
  v3[5] = 0LL;
  MPCInputPostProcessorPresent = IsGetMPCInputPostProcessorPresent();
  v6 = 2147942487LL;
  LOBYTE(v7) = 14;
  if ( MPCInputPostProcessorPresent )
  {
    v8 = MPCInputRouter::Create(
           a2,
           (struct IInputFocusListener *)((unsigned __int64)(v3 + 1) & -(__int64)(v3 != 0LL)),
           v3 + 5);
    v9 = v8;
    if ( v8 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v6, &MinInput_Warning_CheckResult, 0, 22, v8);
    goto LABEL_26;
  }
  if ( !a2 )
  {
    v10 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(2147942487LL, &MinInput_Warning_CheckResult, 0, 454, 87);
      v9 = -2147024809;
      goto LABEL_24;
    }
LABEL_23:
    v9 = v10;
    if ( v10 >= 0 )
      goto LABEL_26;
    goto LABEL_24;
  }
  v11 = (DWMInputRouter *)malloc(0x3C8uLL);
  v12 = v11;
  if ( v11 )
    memset(v11, 0, 0x3C8uLL);
  v32 = v12;
  if ( v12 )
    v12 = DWMInputRouter::DWMInputRouter(
            v12,
            a2,
            (struct IInputFocusListener *)((unsigned __int64)(v3 + 1) & -(__int64)(v3 != 0LL)));
  if ( v12 )
  {
    v13 = DWMInputRouter::Initialize(v12);
    v10 = v13;
    if ( v13 >= 0 )
    {
      *v4 = v12;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v6, &MinInput_Warning_CheckResult, 0, 466, v13);
    }
    if ( v10 < 0 )
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v12 + 8) + 24LL))((__int64)v12 + 64, 1LL);
    goto LABEL_23;
  }
  v10 = -2147024882;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
    goto LABEL_23;
  Template_qqq(v6, &MinInput_Warning_CheckResult, 0, 463, 14);
  v9 = -2147024882;
LABEL_24:
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v6, &MinInput_Warning_CheckResult, 0, 26, v10);
LABEL_26:
  if ( v9 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v6, &MinInput_Warning_CheckResult, 0, 92, v9);
    goto LABEL_65;
  }
  v32 = 0LL;
  if ( (**(int (__fastcall ***)(struct ISystemInputRouter *, GUID *, OneCoreUAPInputHost **))*v4)(
         *v4,
         &GUID_fb9e888a_e52b_424f_8fab_f05676d1b357,
         &v32) < 0 )
    goto LABEL_37;
  v29 = DWM_COMPOSITOR_ID;
  v31 = 0LL;
  if ( &DWMInputRouter::s_HitTestHandler )
  {
    v30[0] = &std::_Func_impl<long (*)(IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *),std::allocator<int>,long,IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *>::`vftable';
    v30[1] = &DWMInputRouter::s_HitTestHandler;
    v31 = v30;
  }
  v14 = (*(__int64 (__fastcall **)(OneCoreUAPInputHost *, __int128 *, _QWORD *))(*(_QWORD *)v32 + 24LL))(v32, &v29, v30);
  v16 = v14;
  if ( v14 >= 0 )
  {
LABEL_37:
    v18 = (__int64)v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = *v4;
    v20 = v3 + 6;
    if ( !*v4 || v3 == (struct ISystemInputRouter **)-48LL )
    {
      LOBYTE(v7) = 87;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v18, &MinInput_Warning_CheckResult, 1, 187, 87);
    }
    else
    {
      v21 = (InputStateManager *)malloc(0x2078uLL);
      v22 = v21;
      if ( v21 )
        memset(v21, 0, 0x2078uLL);
      v32 = v22;
      if ( v22 )
        v22 = InputStateManager::InputStateManager(v22, v19);
      if ( v22 )
      {
        v23 = InputStateManager::Initialize(v22);
        v7 = v23;
        if ( v23 >= 0 )
        {
          *v20 = v22;
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          Template_qqq(v18, &MinInput_Warning_CheckResult, 1, 197, v23);
        }
        if ( v7 >= 0 )
        {
          v24 = InputProviderManager::CreateAndInitialize((InputProviderManager *)(v3 + 7), *v20);
          v16 = v24;
          if ( v24 >= 0 )
          {
            if ( (gdwMitConfig & 6) == 0 && (gdwMitConfig & 1) == 0 )
              return v16;
            v26 = Win32kInterop::Create(*v20, *v4, v3 + 10);
            v16 = v26;
            if ( v26 >= 0 )
              return v16;
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              Template_qqq(v27, &MinInput_Warning_CheckResult, 0, 110, v26);
          }
          else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            Template_qqq(v25, &MinInput_Warning_CheckResult, 0, 106, v24);
          }
LABEL_65:
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        Template_qqq(v18, &MinInput_Warning_CheckResult, 1, 194, 14);
      }
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v18, &MinInput_Warning_CheckResult, 0, 104, v7);
    goto LABEL_65;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v15, &MinInput_Warning_CheckResult, 0, 100, v14);
  v17 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(OneCoreUAPInputHost *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v16;
}
