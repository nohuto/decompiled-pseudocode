/*
 * XREFs of ?OnViewStateChanged@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18001C808
 * Callers:
 *     ?Invoke@?$InvokeHelper@U?$ITypedEventHandler@PEAVShellExperienceDispatcher@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewStateChangedEventArgs@2345@@Foundation@Windows@@V_lambda_587ab2033dc5b1aed1eae36cec5be19f_@@$01@Details@WRL@Microsoft@@UEAAJPEAUIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewStateChangedEventArgs@6789@@Z @ 0x180020720 (-Invoke@-$InvokeHelper@U-$ITypedEventHandler@PEAVShellExperienceDispatcher@Experience@Shell@Inte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x18001CC24 (-OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV-$ComPtr@UIViewWrapper@ViewManagerInte.c)
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x18001D074 (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18001D120 (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 *     ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18001D678 (-OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Ex.c)
 *     ??$Start@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0@Z @ 0x18001F4A8 (--$Start@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPEBG0@Z.c)
 *     ??$Created@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z @ 0x18001F578 (--$Created@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z.c)
 *     ??$PropertiesChanged@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z @ 0x18001F69C (--$PropertiesChanged@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z.c)
 *     ??$EventQueued@PEBGPEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG00@Z @ 0x18001F7C0 (--$EventQueued@PEBGPEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG00@Z.c)
 *     ??$Destroyed@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z @ 0x18001F928 (--$Destroyed@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z.c)
 *     ??$VisibilityRevokedChanged@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z @ 0x18001FA4C (--$VisibilityRevokedChanged@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEA.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180025CC8 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800262A8 (--1-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026D5C (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSingleViewShellExperience::OnViewStateChanged(
        HSTRING *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  HSTRING v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // r9
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+28h] [rbp-E0h] BYREF
  HSTRING string; // [rsp+30h] [rbp-D8h] BYREF
  PCWSTR StringRawBuffer; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  PCWSTR v20; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v21[2]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v22[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v21[1] = -2LL;
  string = (HSTRING)WindowsGetStringRawBuffer(this[2], 0LL);
  StringRawBuffer = WindowsGetStringRawBuffer(this[1], 0LL);
  SingleViewExperienceTelemetry::OnPropertyChanged::Start<unsigned short const *,unsigned short const *>((SingleViewExperienceTelemetry::OnPropertyChanged *)v22);
  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, __int64 *))(*(_QWORD *)a2 + 56LL))(
         a2,
         &v18);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C3,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_32;
  }
  v19 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, __int64 *))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v19);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 454LL;
LABEL_27:
    v10 = (unsigned int)v6;
    goto LABEL_28;
  }
  if ( (_DWORD)v18 )
  {
    v8 = this[4];
    if ( v8 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v19 + 72LL))(v19, v8, &v15);
      v5 = v6;
      if ( v6 < 0 )
      {
        v7 = 471LL;
        goto LABEL_27;
      }
      if ( (_BYTE)v15 )
      {
        switch ( (_DWORD)v18 )
        {
          case 1:
            v21[0] = WindowsGetStringRawBuffer(this[2], 0LL);
            v20 = WindowsGetStringRawBuffer(this[1], 0LL);
            SingleViewExperienceTelemetry::OnPropertyChanged::PropertiesChanged<unsigned short const *,unsigned short const *>(
              v22,
              &v20,
              v21);
            v6 = CSingleViewShellExperience::OnViewPropertiesChangedBase((CSingleViewShellExperience *)this, a2);
            v5 = v6;
            if ( v6 < 0 )
            {
              v7 = 478LL;
              goto LABEL_27;
            }
            break;
          case 2:
            string = 0LL;
            WindowsDeleteString(0LL);
            string = 0LL;
            v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, HSTRING *))(*(_QWORD *)a2 + 64LL))(
                    a2,
                    &string);
            if ( v11 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1E5,
                (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
                (const char *)(unsigned int)v11);
            StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
            v20 = WindowsGetStringRawBuffer(this[2], 0LL);
            v21[0] = WindowsGetStringRawBuffer(this[1], 0LL);
            SingleViewExperienceTelemetry::OnPropertyChanged::EventQueued<unsigned short const *,unsigned short const *,unsigned short const *>(
              v22,
              v21,
              &v20,
              &StringRawBuffer);
            v12 = CSingleViewShellExperience::OnEventQueued((CSingleViewShellExperience *)this, a2);
            v5 = v12;
            if ( v12 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1E7,
                (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
                (const char *)(unsigned int)v12);
              WindowsDeleteString(string);
              goto LABEL_30;
            }
            WindowsDeleteString(string);
            break;
          case 3:
            StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
            string = (HSTRING)WindowsGetStringRawBuffer(this[1], 0LL);
            SingleViewExperienceTelemetry::OnPropertyChanged::Destroyed<unsigned short const *,unsigned short const *>(
              v22,
              &string,
              &StringRawBuffer);
            v6 = CSingleViewShellExperience::OnViewDestroyedBase((CSingleViewShellExperience *)this);
            v5 = v6;
            if ( v6 < 0 )
            {
              v7 = 493LL;
              goto LABEL_27;
            }
            break;
          case 4:
            StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
            string = (HSTRING)WindowsGetStringRawBuffer(this[1], 0LL);
            SingleViewExperienceTelemetry::OnPropertyChanged::VisibilityRevokedChanged<unsigned short const *,unsigned short const *>(
              v22,
              &string,
              &StringRawBuffer);
            v9 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)this[11] + 64LL))(this[11], this);
            v5 = v9;
            if ( v9 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x2BC,
                (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
                (const char *)(unsigned int)v9);
              v10 = v5;
              v7 = 498LL;
LABEL_28:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v7,
                (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
                (const char *)v10);
              goto LABEL_30;
            }
            break;
        }
      }
    }
  }
  else
  {
    StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
    string = (HSTRING)WindowsGetStringRawBuffer(this[1], 0LL);
    SingleViewExperienceTelemetry::OnPropertyChanged::Created<unsigned short const *,unsigned short const *>(
      v22,
      &string,
      &StringRawBuffer);
    v6 = CSingleViewShellExperience::OnViewCreatedBase((CSingleViewShellExperience *)this);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 460LL;
      goto LABEL_27;
    }
  }
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v22);
  v5 = 0;
LABEL_30:
  v13 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
LABEL_32:
  v22[0] = &SingleViewExperienceTelemetry::OnPropertyChanged::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v22);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v22);
  return v5;
}
