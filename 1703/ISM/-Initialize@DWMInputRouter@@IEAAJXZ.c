/*
 * XREFs of ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001248C
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180004214 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800840A8 (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Create@GestureTargetingComponent@@SAJPEAPEAUIInputTargetingComponent@@@Z @ 0x18000D858 (-Create@GestureTargetingComponent@@SAJPEAPEAUIInputTargetingComponent@@@Z.c)
 *     ?GetDisplayBindingFromId@DWMInputRouter@@IEAAJIPEAPEAVDisplayBinding@@@Z @ 0x180016D7C (-GetDisplayBindingFromId@DWMInputRouter@@IEAAJIPEAPEAVDisplayBinding@@@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z@std@@@Z @ 0x180017B10 (-Initialize@-$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSess.c)
 *     ??I?$unique_com_token@UIMessageSession@@I$$A6AXPEAU1@I@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX0I@Z$0A@@wil@@QEAAPEAIXZ @ 0x180017EB8 (--I-$unique_com_token@UIMessageSession@@I$$A6AXPEAU1@I@Z$1-IMessageSessionCloseEndpointFunction@.c)
 *     ?associate@?$unique_com_token@UIMessageSession@@I$$A6AXPEAU1@I@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX0I@Z$0A@@wil@@QEAAXPEAUIMessageSession@@@Z @ 0x180017F44 (-associate@-$unique_com_token@UIMessageSession@@I$$A6AXPEAU1@I@Z$1-IMessageSessionCloseEndpointF.c)
 *     ?Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z @ 0x18001B2DC (-Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z.c)
 *     ?SetInputDisplay@DisplayBinding@@QEAAJPEAUIInputDisplay@@@Z @ 0x18001C6A4 (-SetInputDisplay@DisplayBinding@@QEAAJPEAUIInputDisplay@@@Z.c)
 *     ?Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z @ 0x18001DF74 (-Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z.c)
 *     ?Create@EdgeGestureComponent@@SAJPEAUIDWMInputProxy@@PEAUIInputDisplay@@PEAPEAUIInputTargetingComponent@@@Z @ 0x180022984 (-Create@EdgeGestureComponent@@SAJPEAUIDWMInputProxy@@PEAUIInputDisplay@@PEAPEAUIInputTargetingCo.c)
 *     ?Create@InputServiceComponent@@SAJPEAPEAUIInputTargetingComponent@@@Z @ 0x180025184 (-Create@InputServiceComponent@@SAJPEAPEAUIInputTargetingComponent@@@Z.c)
 *     ?Create@MobileCursorBroker@@SAJPEAPEAUICursorBroker@@@Z @ 0x180025C08 (-Create@MobileCursorBroker@@SAJPEAPEAUICursorBroker@@@Z.c)
 *     ?Get@PropertyDefinitions@@SAJPEAPEAV1@@Z @ 0x180029490 (-Get@PropertyDefinitions@@SAJPEAPEAV1@@Z.c)
 *     ?ProcessInit@PropertyDefinitions@@SAJXZ @ 0x180029524 (-ProcessInit@PropertyDefinitions@@SAJXZ.c)
 *     ?DefineProperty@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBG0K@Z @ 0x180029B28 (-DefineProperty@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBG0K@Z.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18003BC5C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003BC8C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?Create@InputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIInputDeliveryServer@@@Z @ 0x1800685FC (-Create@InputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIInputDeli.c)
 *     ?Create@TargetingArbitrationComponent@@SAJPEAPEAUIInputTargetingComponent@@@Z @ 0x18007F680 (-Create@TargetingArbitrationComponent@@SAJPEAPEAUIInputTargetingComponent@@@Z.c)
 *     ?AddTargetingComponent@TargetingArbitrationComponent@@QEAAJPEAUIInputTargetingComponent@@@Z @ 0x18008027C (-AddTargetingComponent@TargetingArbitrationComponent@@QEAAJPEAUIInputTargetingComponent@@@Z.c)
 *     ?Create@MagnifierComponent@@SAJPEAPEAUIInputTargetingComponent@@@Z @ 0x180080FC8 (-Create@MagnifierComponent@@SAJPEAPEAUIInputTargetingComponent@@@Z.c)
 *     ?Create@InputRedirectionComponent@@SAJPEAUIInputDeviceInfoStore@@PEAPEAUIInputTargetingComponent@@@Z @ 0x180082920 (-Create@InputRedirectionComponent@@SAJPEAUIInputDeviceInfoStore@@PEAPEAUIInputTargetingComponent.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall DWMInputRouter::Initialize(DWMInputRouter *this)
{
  TargetingArbitrationComponent *v1; // rbx
  struct IInputTargetingComponent *v2; // r12
  struct IInputTargetingComponent *v3; // r15
  struct IInputTargetingComponent *v4; // r14
  struct IInputTargetingComponent *v5; // rdi
  struct IInputTargetingComponent *v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  int v9; // r9d
  unsigned __int16 *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // r13d
  unsigned __int16 **v14; // rcx
  __int64 v15; // rcx
  int DisplayBindingFromId; // eax
  __int64 v17; // rcx
  int v18; // r9d
  struct IInputDisplay *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  struct DisplayBinding **v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  DWMInputRouter *v28; // r13
  int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned __int16 *v38; // r13
  __int64 v39; // rcx
  unsigned __int16 *v40; // rcx
  unsigned __int16 **v41; // r13
  DisplayBinding *v42; // r13
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  unsigned __int16 *v46; // rcx
  DWMInputRouter *v47; // r13
  struct PropertyDefinitions *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  LPDWORD pdwType; // [rsp+28h] [rbp-E0h]
  struct IInputDisplay *v54; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v55; // [rsp+58h] [rbp-B0h] BYREF
  struct IInputDisplay *v56; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int16 **v57; // [rsp+68h] [rbp-A0h]
  __int64 v58; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int16 *Src; // [rsp+78h] [rbp-90h]
  struct PropertyDefinitions *v60[2]; // [rsp+88h] [rbp-80h] BYREF
  DWORD pcbData; // [rsp+98h] [rbp-70h] BYREF
  int pvData; // [rsp+9Ch] [rbp-6Ch] BYREF
  TargetingArbitrationComponent *v63; // [rsp+A0h] [rbp-68h] BYREF
  struct IInputTargetingComponent *v64; // [rsp+A8h] [rbp-60h] BYREF
  struct IInputTargetingComponent *v65; // [rsp+B0h] [rbp-58h] BYREF
  struct IInputTargetingComponent *v66; // [rsp+B8h] [rbp-50h] BYREF
  struct IInputTargetingComponent *v67; // [rsp+C0h] [rbp-48h] BYREF
  struct IInputTargetingComponent *v68; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v69; // [rsp+D0h] [rbp-38h] BYREF
  char v70; // [rsp+D8h] [rbp-30h]
  __int64 v71; // [rsp+E0h] [rbp-28h] BYREF
  char v72; // [rsp+E8h] [rbp-20h]
  __int64 v73; // [rsp+F0h] [rbp-18h] BYREF
  char v74; // [rsp+F8h] [rbp-10h]
  __int64 v75; // [rsp+100h] [rbp-8h]
  _QWORD v76[8]; // [rsp+108h] [rbp+0h] BYREF
  struct _GUID v77; // [rsp+148h] [rbp+40h] BYREF
  __int128 v78; // [rsp+158h] [rbp+50h] BYREF
  const wchar_t *v79; // [rsp+168h] [rbp+60h] BYREF
  __int128 v80; // [rsp+170h] [rbp+68h]
  __int128 v81; // [rsp+180h] [rbp+78h]
  const wchar_t *v82; // [rsp+190h] [rbp+88h]
  struct _GUID v83; // [rsp+198h] [rbp+90h]
  __int128 v84; // [rsp+1A8h] [rbp+A0h]
  const wchar_t *v85; // [rsp+1B8h] [rbp+B0h]
  struct _GUID v86; // [rsp+1C0h] [rbp+B8h]
  __int128 v87; // [rsp+1D0h] [rbp+C8h]
  const wchar_t *v88; // [rsp+1E0h] [rbp+D8h]
  __int128 v89; // [rsp+1E8h] [rbp+E0h]
  __int128 v90; // [rsp+1F8h] [rbp+F0h]
  const wchar_t *v91; // [rsp+208h] [rbp+100h]
  __int128 v92; // [rsp+210h] [rbp+108h]
  __int128 v93; // [rsp+220h] [rbp+118h]
  const wchar_t *v94; // [rsp+230h] [rbp+128h]
  struct _GUID v95; // [rsp+238h] [rbp+130h]
  __int128 v96; // [rsp+248h] [rbp+140h]
  const wchar_t *v97; // [rsp+258h] [rbp+150h]

  v75 = -2LL;
  v73 = 0LL;
  v74 = 0;
  v71 = 0LL;
  v72 = 0;
  v69 = 0LL;
  v70 = 0;
  LODWORD(v55) = 0;
  v1 = 0LL;
  v63 = 0LL;
  v2 = 0LL;
  v64 = 0LL;
  v3 = 0LL;
  v67 = 0LL;
  v4 = 0LL;
  v65 = 0LL;
  v5 = 0LL;
  v66 = 0LL;
  v6 = 0LL;
  v68 = 0LL;
  v58 = 0LL;
  v57 = (unsigned __int16 **)((char *)this + 136);
  v7 = CoreUICreate((char *)this + 136);
  if ( v7 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_5;
    v9 = 133;
    goto LABEL_4;
  }
  v54 = (DWMInputRouter *)((char *)this + 144);
  v7 = CoreUIFactoryCreate((char *)this + 144);
  if ( v7 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 139;
LABEL_4:
      Template_qqq(v8, &MinInput_Warning_CheckResult, 0, v9, v7);
      goto LABEL_5;
    }
    goto LABEL_5;
  }
  v7 = InputSecurityDescriptor::QueryDescriptor(&v73, 8LL, c_wszMessagePortNames);
  if ( v7 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 146;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v7 = (*(__int64 (__fastcall **)(unsigned __int16 *, __int64, char *))(*(_QWORD *)*v57 + 56LL))(
         *v57,
         v73,
         (char *)this + 152);
  if ( v7 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 150;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v7 = InputSecurityDescriptor::QueryDescriptor(&v71, 8LL, c_wszMessagePortNames);
  if ( v7 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 159;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v10 = *v57;
  v56 = (DWMInputRouter *)((char *)this + 160);
  v7 = (*(__int64 (__fastcall **)(unsigned __int16 *, __int64, char *))(*(_QWORD *)v10 + 56LL))(
         v10,
         v71,
         (char *)this + 160);
  if ( v7 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 163;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**(_QWORD **)v54 + 24LL))(
         *(_QWORD *)v54,
         &GUID_2c69163a_7c54_4b7e_9bb0_9205dcbdf300,
         &v55);
  if ( v7 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 171;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, const wchar_t *, _QWORD, char *))(**(_QWORD **)v54
                                                                                                  + 32LL))(
         *(_QWORD *)v54,
         ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
         0LL,
         (unsigned int)v55,
         L"IInputDisplayDeviceBindingApi",
         *(_QWORD *)v56,
         (char *)this + 176);
  if ( v7 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 179;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**(_QWORD **)v54 + 24LL))(
         *(_QWORD *)v54,
         &GUID_f61d2579_c998_4734_9f88_0b4bc8bcf062,
         &v55);
  if ( v7 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 187;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, const wchar_t *, _QWORD, char *))(**(_QWORD **)v54
                                                                                                  + 32LL))(
         *(_QWORD *)v54,
         ((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
         0LL,
         (unsigned int)v55,
         L"IRemoteViewHitTestApi",
         *(_QWORD *)v56,
         (char *)this + 704);
  if ( v7 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 195;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**(_QWORD **)v54 + 24LL))(
         *(_QWORD *)v54,
         &GUID_adcbf490_e8c4_4bfa_8754_f40fc58292fc,
         &v55);
  if ( v7 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 203;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  pdwType = (LPDWORD)L"IRemoteViewHitTestRequestApi";
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)v54 + 32LL))(
         *(_QWORD *)v54,
         ((unsigned __int64)this + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
         0LL,
         (unsigned int)v55);
  if ( v7 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 211;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v77 = DISPLAYBINDING_MONITORS;
  v78 = PROPTYPE_VECTOR;
  v79 = L"DisplayBinding.Monitors";
  v80 = DISPLAYBINDING_MONITOR_ENTRY;
  v81 = PROPTYPE_UINT64;
  v82 = L"DisplayBinding.MonitorEntry";
  v83 = DISPLAYBINDING_INPUTDISPLAY_BOUNDS_WIDTH;
  v84 = PROPTYPE_INT32;
  v85 = L"DisplayBinding.InputDisplay.Bounds.Width";
  v86 = DISPLAYBINDING_INPUTDISPLAY_BOUNDS_HEIGHT;
  v87 = PROPTYPE_INT32;
  v88 = L"DisplayBinding.InputDisplay.Bounds.Height";
  v89 = INPUTTARGET_ROUTETOMT;
  v90 = PROPTYPE_BOOLEAN;
  v91 = L"InputTarget.routeToMT";
  v92 = INPUTTARGET_HITTESTEDINTERACTION;
  v93 = PROPTYPE_UINT32;
  v94 = L"InputTarget.hitTestedInteraction";
  v95 = DISPLAYBINDING_ORIENTATION;
  v96 = PROPTYPE_UINT32;
  v97 = L"DisplayBinding.Orientation";
  v11 = PropertyDefinitions::ProcessInit();
  v13 = v11;
  if ( v11 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v12, &MinInput_Warning_CheckResult, 0, 234, v11);
    goto LABEL_163;
  }
  LODWORD(v54) = 0;
  v14 = (unsigned __int16 **)&v79;
  v56 = (struct IInputDisplay *)&v79;
  do
  {
    Src = *v14;
    v13 = PropertyDefinitions::Get(v60);
    if ( v13 >= 0 )
      v13 = PropertyDefinitions::DefineProperty(
              v60[0],
              (struct _GUID *)((char *)&v77 + 40 * (int)v54),
              Src,
              (const struct _GUID *)((char *)&v78 + 40 * (int)v54),
              (unsigned int)pdwType);
    if ( v13 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v15, &MinInput_Warning_CheckResult, 0, 244, v13);
      goto LABEL_163;
    }
    LODWORD(v54) = (_DWORD)v54 + 1;
    v14 = (unsigned __int16 **)((char *)v56 + 40);
    v56 = (struct IInputDisplay *)((char *)v56 + 40);
  }
  while ( (unsigned int)v54 < 7 );
  v54 = 0LL;
  DisplayBindingFromId = DWMInputDisplay::Create(0LL, &v54);
  if ( DisplayBindingFromId < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v18 = 253;
      goto LABEL_52;
    }
    goto LABEL_53;
  }
  *(_OWORD *)v60 = DWM_COMPOSITOR_ID;
  v20 = (*(__int64 (__fastcall **)(char *, __int64, struct PropertyDefinitions **))(*((_QWORD *)this + 6) + 40LL))(
          (char *)this + 48,
          1LL,
          v60);
  v13 = v20;
  if ( v20 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v21, &MinInput_Warning_CheckResult, 0, 261, v20);
    v19 = v54;
    goto LABEL_57;
  }
  v22 = (struct DisplayBinding **)((char *)this + 808);
  Src = (unsigned __int16 *)((char *)this + 808);
  v23 = *((_QWORD *)this + 101);
  if ( v23 )
  {
    *v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    v22 = (struct DisplayBinding **)((char *)this + 808);
  }
  DisplayBindingFromId = DWMInputRouter::GetDisplayBindingFromId(this, 1u, v22);
  if ( DisplayBindingFromId < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v18 = 266;
LABEL_52:
      Template_qqq(v17, &MinInput_Warning_CheckResult, 0, v18, DisplayBindingFromId);
    }
LABEL_53:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v56 = v54;
  v24 = DisplayBinding::SetInputDisplay(*(DisplayBinding **)Src, v54);
  v13 = v24;
  if ( v24 >= 0 )
  {
    if ( v56 )
      (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v56 + 16LL))(v56);
    v26 = TargetingArbitrationComponent::Create(&v63);
    if ( v26 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v27, &MinInput_Warning_CheckResult, 0, 280, v26);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v1 = v63;
    v28 = this;
    if ( ((1LL << gdwDeviceFamily) & 0x1DB5) != 0 )
    {
      v29 = EdgeGestureComponent::Create(
              *((struct IDWMInputProxy **)this + 23),
              (struct IInputDisplay *)((*(_QWORD *)Src + 8LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)Src >> 64)),
              &v64);
      v2 = v64;
      if ( v29 >= 0 )
      {
        v7 = TargetingArbitrationComponent::AddTargetingComponent(v1, v64);
        if ( v7 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v9 = 292;
            goto LABEL_4;
          }
          goto LABEL_5;
        }
        v28 = this;
      }
    }
    if ( ((1LL << gdwDeviceFamily) & 0x1DB5) == 0 )
      goto LABEL_95;
    v30 = InputRedirectionComponent::Create(
            (struct IInputDeviceInfoStore *)(((unsigned __int64)v28 + 40) & -(__int64)(v28 != 0LL)),
            &v65);
    if ( v30 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v31, &MinInput_Warning_CheckResult, 0, 310, v30);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v4 = v65;
    v7 = TargetingArbitrationComponent::AddTargetingComponent(v1, v65);
    if ( v7 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v9 = 311;
        goto LABEL_4;
      }
    }
    else
    {
LABEL_95:
      v32 = InputServiceComponent::Create(&v66);
      if ( v32 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v33, &MinInput_Warning_CheckResult, 0, 318, v32);
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      v5 = v66;
      v7 = TargetingArbitrationComponent::AddTargetingComponent(v1, v66);
      if ( v7 >= 0 )
      {
        if ( ((1LL << gdwDeviceFamily) & 0x1DB5) != 0
          && (v34 = MagnifierComponent::Create(&v67), v3 = v67, v34 >= 0)
          && (v7 = TargetingArbitrationComponent::AddTargetingComponent(v1, v67), v7 < 0) )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v9 = 331;
            goto LABEL_4;
          }
        }
        else
        {
          if ( ((1LL << gdwDeviceFamily) & 0x1DB5) == 0 )
            goto LABEL_119;
          v35 = GestureTargetingComponent::Create(&v68);
          if ( v35 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              Template_qqq(v36, &MinInput_Warning_CheckResult, 0, 349, v35);
            if ( IsDebuggerPresent() )
              __debugbreak();
            __fastfail(7u);
          }
          v6 = v68;
          v7 = TargetingArbitrationComponent::AddTargetingComponent(v1, v68);
          if ( v7 >= 0 )
          {
LABEL_119:
            if ( v1 )
              (*(void (__fastcall **)(TargetingArbitrationComponent *))(*(_QWORD *)v1 + 8LL))(v1);
            v37 = *((_QWORD *)this + 27);
            if ( v37 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
            *((_QWORD *)this + 27) = v1;
            pcbData = 4;
            if ( RegGetValueW(
                   HKEY_LOCAL_MACHINE,
                   L"Software\\Microsoft\\Shell\\CShellUseCoreShell",
                   L"Enabled",
                   0x10u,
                   0LL,
                   &pvData,
                   &pcbData)
              || !pvData )
            {
              if ( (int)MobileCursorBroker::Create((struct ICursorBroker **)this + 28) < 0 )
              {
                v7 = DWMCursorBroker::Create(this, (struct ICursorBroker **)this + 28);
                if ( v7 < 0 )
                {
                  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                  {
                    v9 = 380;
                    goto LABEL_4;
                  }
                  goto LABEL_5;
                }
              }
            }
            else
            {
              v7 = DWMCursorBroker::Create(this, (struct ICursorBroker **)this + 28);
              if ( v7 < 0 )
              {
                if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                {
                  v9 = 373;
                  goto LABEL_4;
                }
                goto LABEL_5;
              }
            }
            v38 = *v57;
            v39 = v58;
            if ( v58 )
            {
              v58 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
            }
            v7 = (*(__int64 (__fastcall **)(unsigned __int16 *, __int64 *))(*(_QWORD *)v38 + 24LL))(v38, &v58);
            if ( v7 >= 0 )
            {
              v7 = InputSecurityDescriptor::QueryDescriptor(&v69, 8LL, L"Input\\Service.AlpcPort\\Server");
              if ( v7 >= 0 )
              {
                v40 = *v57;
                v60[0] = (DWMInputRouter *)((char *)this + 168);
                v7 = (*(__int64 (__fastcall **)(unsigned __int16 *, __int64, char *))(*(_QWORD *)v40 + 56LL))(
                       v40,
                       v69,
                       (char *)this + 168);
                if ( v7 >= 0 )
                {
                  v41 = v57;
                  wil::unique_com_token<IMessageSession,unsigned int,void (IMessageSession *,unsigned int),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned int),0>::associate(
                    (char *)this + 952,
                    *v57);
                  Src = *v41;
                  v60[0] = *(struct PropertyDefinitions **)v60[0];
                  v42 = *(DisplayBinding **)Src;
                  v43 = wil::unique_com_token<IMessageSession,unsigned int,void (IMessageSession *,unsigned int),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned int),0>::operator&((char *)this + 952);
                  v7 = (*((__int64 (__fastcall **)(unsigned __int16 *, __int64 (__fastcall *)(void *, const void *, int), DWMInputRouter *, struct PropertyDefinitions *, __int64))v42
                        + 10))(
                         Src,
                         DWMInputRouter::OnFocusedThreadChangedStatic,
                         this,
                         v60[0],
                         v43);
                  if ( v7 >= 0 )
                  {
                    v7 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v58 + 40LL))(
                           v58,
                           L"System\\Input\\InputFocusEndpoint",
                           *((unsigned int *)this + 240),
                           1LL);
                    if ( v7 >= 0 )
                    {
                      if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 && (gdwMitConfig & 7) != 0 )
                      {
                        v46 = *v57;
                        v56 = (struct IInputDisplay *)v46;
                        if ( v46 )
                          (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v46 + 8LL))(v46);
                        v47 = this;
                        v60[0] = this;
                        v76[0] = off_1800A4450;
                        v76[1] = this;
                        v76[7] = v76;
                        KernelInputConnection<_MIT_INPUT_FOCUS_MESSAGE>::Initialize((char *)this + 824, &v56, v45, v76);
                        if ( v56 )
                          (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v56 + 16LL))(v56);
                      }
                      else
                      {
                        v47 = this;
                      }
                      v48 = (struct PropertyDefinitions *)(((unsigned __int64)v47 + 56) & -(__int64)(v47 != 0LL));
                      v60[0] = v48;
                      v49 = *((_QWORD *)v47 + 102);
                      if ( v49 )
                      {
                        *((_QWORD *)v47 + 102) = 0LL;
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
                        v48 = v60[0];
                      }
                      v7 = InputDeliveryServer::Create(v48, v44, v45, (char *)v47 + 816);
                      v13 = v7;
                      if ( v7 >= 0 )
                        goto LABEL_163;
                      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                      {
                        v9 = 434;
                        goto LABEL_4;
                      }
                    }
                    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                    {
                      v9 = 409;
                      goto LABEL_4;
                    }
                  }
                  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                  {
                    v9 = 404;
                    goto LABEL_4;
                  }
                }
                else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                {
                  v9 = 396;
                  goto LABEL_4;
                }
              }
              else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              {
                v9 = 392;
                goto LABEL_4;
              }
            }
            else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              v9 = 389;
              goto LABEL_4;
            }
            goto LABEL_5;
          }
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v9 = 350;
            goto LABEL_4;
          }
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v9 = 319;
        goto LABEL_4;
      }
    }
LABEL_5:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v25, &MinInput_Warning_CheckResult, 0, 268, v24);
  v19 = v56;
LABEL_57:
  if ( v19 )
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v19 + 16LL))(v19);
LABEL_163:
  v50 = v58;
  if ( v58 )
  {
    v58 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct IInputTargetingComponent *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v5 )
    (*(void (__fastcall **)(struct IInputTargetingComponent *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v4 )
    (*(void (__fastcall **)(struct IInputTargetingComponent *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v3 )
    (*(void (__fastcall **)(struct IInputTargetingComponent *))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v2 )
    (*(void (__fastcall **)(struct IInputTargetingComponent *))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v1 )
    (*(void (__fastcall **)(TargetingArbitrationComponent *))(*(_QWORD *)v1 + 16LL))(v1);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v69);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v71);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v73);
  return (unsigned int)v13;
}
