/*
 * XREFs of ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180031DA8
 * Callers:
 *     ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180032330 (-Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180005420 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x1800094B8 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18002C8B0 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?GetInstance@ControllerNavigationManager@@SAPEAV1@XZ @ 0x18003088C (-GetInstance@ControllerNavigationManager@@SAPEAV1@XZ.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x180030938 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?GetDisplayInformation@ControllerProcessor@@AEAAJXZ @ 0x1800328EC (-GetDisplayInformation@ControllerProcessor@@AEAAJXZ.c)
 *     ?RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x1800355CC (-RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096358 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@K@Z @ 0x180096804 (-Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@K@Z.c)
 *     ?EndManipulationInternal@ManipulationInjector@@AEAAX_N@Z @ 0x180097098 (-EndManipulationInternal@ManipulationInjector@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::Initialize(ControllerProcessor *this)
{
  int ChildInputProcessor; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // r9d
  int DisplayInformation; // eax
  __int64 v7; // rcx
  int v8; // r9d
  HMONITOR v9; // rdx
  unsigned int v10; // r9d
  unsigned int v11; // eax
  unsigned int v12; // r8d
  ControllerNavigationManager *Instance; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v17; // [rsp+28h] [rbp-19h]
  __int64 v18; // [rsp+40h] [rbp-1h] BYREF
  __int128 v19; // [rsp+48h] [rbp+7h] BYREF
  __int128 v20; // [rsp+58h] [rbp+17h]
  int v21; // [rsp+68h] [rbp+27h]
  char v22; // [rsp+6Ch] [rbp+2Bh]
  __int64 v23; // [rsp+78h] [rbp+37h]
  struct tagRECT v24; // [rsp+80h] [rbp+3Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v23 = -2LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = -1;
  v22 = 1;
  ChildInputProcessor = CoreUICreate(&v18);
  v4 = ChildInputProcessor;
  if ( ChildInputProcessor < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_39;
    v5 = 224;
    goto LABEL_4;
  }
  ChildInputProcessor = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(ControllerProcessor *), ControllerProcessor *, char *))(*(_QWORD *)v18 + 120LL))(
                          v18,
                          ControllerProcessor::OnAutoRepeatTimerStatic,
                          this,
                          (char *)this + 280);
  v4 = ChildInputProcessor;
  if ( ChildInputProcessor < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 229;
LABEL_4:
      Template_qqq(v3, &MinInput_Warning_CheckResult, 12, v5, ChildInputProcessor);
      goto LABEL_39;
    }
    goto LABEL_39;
  }
  *(_DWORD *)(*((_QWORD *)this + 4) + 4LL) |= 0x86u;
  *(_QWORD *)&v19 = *((_QWORD *)this + 4);
  *(_QWORD *)&v20 = this;
  *((_QWORD *)&v19 + 1) = *((_QWORD *)this + 3);
  ChildInputProcessor = CreateChildInputProcessor(4, (__int64)&v19, (__int64)this + 240);
  v4 = ChildInputProcessor;
  if ( ChildInputProcessor >= 0 )
  {
    ChildInputProcessor = CreateChildInputProcessor(128, (__int64)&v19, (__int64)this + 248);
    v4 = ChildInputProcessor;
    if ( ChildInputProcessor < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v5 = 250;
        goto LABEL_4;
      }
      goto LABEL_39;
    }
    DisplayInformation = ControllerProcessor::GetDisplayInformation(this);
    if ( DisplayInformation < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_18;
      v8 = 252;
      goto LABEL_17;
    }
    *((_DWORD *)this + 304) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 32LL))(*((_QWORD *)this + 3));
    *((_DWORD *)this + 305) = 8;
    v24.left = 0;
    v24.top = 0;
    v24.right = *((_DWORD *)this + 81);
    v24.bottom = *((_DWORD *)this + 82);
    if ( *((_DWORD *)this + 98) != 5 )
    {
      ManipulationInjector::EndManipulationInternal((ControllerProcessor *)((char *)this + 392), 0);
      *((_DWORD *)this + 98) = 5;
    }
    if ( *((_DWORD *)this + 120) )
    {
      v11 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0x5A8, v12, (const char *)v11, v17);
      __debugbreak();
    }
    *((_DWORD *)this + 99) = 2;
    ManipulationInjector::Initialize((ControllerProcessor *)((char *)this + 392), v9, &v24, v10);
    *((_QWORD *)this + 146) = ((unsigned __int64)this + 56) & -(__int64)(this != 0LL);
    *((_DWORD *)this + 79) = *((_DWORD *)this + 81) / 2;
    *((_DWORD *)this + 80) = *((_DWORD *)this + 82) / 2;
    DisplayInformation = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), ControllerProcessor *, char *))(*(_QWORD *)v18 + 120LL))(
                           v18,
                           ControllerProcessor::OnSendGamepadAsPointerAndManipulationStatic,
                           this,
                           (char *)this + 288);
    if ( DisplayInformation >= 0 )
    {
      DisplayInformation = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(ControllerProcessor *), ControllerProcessor *, char *))(*(_QWORD *)v18 + 120LL))(
                             v18,
                             lambda_15ea3a2abe3961ddadc7c53ec6d6daa1_::_lambda_invoker_cdecl_,
                             this,
                             (char *)this + 1440);
      if ( DisplayInformation >= 0 )
      {
        DisplayInformation = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), ControllerProcessor *, char *))(*(_QWORD *)v18 + 120LL))(
                               v18,
                               lambda_9e3b67bfe06f1aa7e93951d645f6530a_::_lambda_invoker_cdecl_,
                               this,
                               (char *)this + 1448);
        v4 = DisplayInformation;
        if ( DisplayInformation >= 0 )
        {
          Instance = ControllerNavigationManager::GetInstance();
          if ( !Instance
            || (DisplayInformation = ControllerNavigationManager::RegisterControllerProcessor(
                                       Instance,
                                       **((_DWORD **)this + 4),
                                       this),
                v4 = DisplayInformation,
                DisplayInformation >= 0) )
          {
            ControllerProcessor::RefreshCursorMagnetismRegistrySettings(this);
            RegistryWatcher::Create(
              v14,
              L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
              this,
              lambda_828562b8234057b7c70d01bfff3fe312_::_lambda_invoker_cdecl_,
              (struct RegistryWatcher **)this + 188);
            goto LABEL_39;
          }
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v8 = 294;
            goto LABEL_17;
          }
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v8 = 289;
          goto LABEL_17;
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v8 = 281;
        goto LABEL_17;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 273;
LABEL_17:
      Template_qqq(v7, &MinInput_Warning_CheckResult, 12, v8, DisplayInformation);
    }
LABEL_18:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v5 = 245;
    goto LABEL_4;
  }
LABEL_39:
  v15 = v18;
  v18 = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v4;
}
