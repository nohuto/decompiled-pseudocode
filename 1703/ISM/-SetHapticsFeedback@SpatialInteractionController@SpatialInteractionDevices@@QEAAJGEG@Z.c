/*
 * XREFs of ?SetHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJGEG@Z @ 0x18009AD5C
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x180071350 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OpenSpatialInteractionDevice@@YAJPEB_WPEAPEAUISpatialInteractionDevice@@@Z @ 0x1800649B0 (-OpenSpatialInteractionDevice@@YAJPEB_WPEAPEAUISpatialInteractionDevice@@@Z.c)
 *     wil::details::ScopeExitFn__lambda_b55778b92a26814f5af4ddd6b8404138___::_ScopeExitFn__lambda_b55778b92a26814f5af4ddd6b8404138___ @ 0x18009B164 (wil--details--ScopeExitFn__lambda_b55778b92a26814f5af4ddd6b8404138___--_ScopeExitFn__lambda_b557.c)
 *     wil::ScopeExit__lambda_b55778b92a26814f5af4ddd6b8404138___ @ 0x18009B598 (wil--ScopeExit__lambda_b55778b92a26814f5af4ddd6b8404138___.c)
 *     Microsoft::WRL::Callback_SpatialInteractionDevices::IHapticsTimerCallback__lambda_77dca828cc74180f62f751716ffcfc7f___ @ 0x18009B5B8 (Microsoft--WRL--Callback_SpatialInteractionDevices--IHapticsTimerCallback__lambda_77dca828cc7418.c)
 *     ??$MakeAndInitialize@VSimpleTimeProvider@?A0x9e3f2d27@@UIHapticsTimerProvider@SpatialInteractionDevices@@@Details@WRL@Microsoft@@YAJPEAPEAUIHapticsTimerProvider@SpatialInteractionDevices@@@Z @ 0x18009B628 (--$MakeAndInitialize@VSimpleTimeProvider@-A0x9e3f2d27@@UIHapticsTimerProvider@SpatialInteraction.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInteractionDevices::SpatialInteractionController::SetHapticsFeedback(
        HSTRING *this,
        unsigned __int16 a2,
        char a3,
        unsigned __int16 a4)
{
  unsigned __int16 v5; // r9
  __int16 v6; // r8
  unsigned int v7; // ebx
  _QWORD *v8; // r14
  wchar_t *StringRawBuffer; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int16 v13; // ax
  _QWORD *v14; // rsi
  SpatialInteractionDevices::SpatialInteractionController **v15; // rax
  SpatialInteractionDevices::SpatialInteractionController *v16; // rdx
  HSTRING v17; // rcx
  __int64 v18; // rcx
  int v20; // [rsp+28h] [rbp-59h] BYREF
  SpatialInteractionDevices::SpatialInteractionController *v21; // [rsp+30h] [rbp-51h] BYREF
  __int64 v22; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v23[6]; // [rsp+40h] [rbp-41h] BYREF
  _BYTE v24[104]; // [rsp+70h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  __int64 v26; // [rsp+E8h] [rbp+67h] BYREF
  unsigned __int16 v27; // [rsp+F0h] [rbp+6Fh] BYREF
  char v28; // [rsp+F8h] [rbp+77h] BYREF
  unsigned __int16 v29; // [rsp+100h] [rbp+7Fh] BYREF

  v29 = a4;
  v28 = a3;
  v27 = a2;
  v23[5] = -2LL;
  v20 = 0;
  v23[0] = &v20;
  v23[1] = this;
  v23[2] = &v27;
  v23[3] = &v28;
  v23[4] = &v29;
  wil::ScopeExit__lambda_b55778b92a26814f5af4ddd6b8404138___(v24, v23, a2);
  if ( v6 == 4100 )
  {
    v8 = this + 71;
    if ( !this[71] )
    {
      StringRawBuffer = (wchar_t *)WindowsGetStringRawBuffer(this[68], 0LL);
      v10 = OpenSpatialInteractionDevice(StringRawBuffer, (struct ISpatialInteractionDevice **)this + 71);
      v7 = v10;
      v20 = v10;
      if ( v10 < 0 )
      {
        v11 = 678LL;
LABEL_31:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v11,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
          (const char *)(unsigned int)v10);
        goto LABEL_33;
      }
      v5 = v29;
    }
    if ( v5 )
      goto LABEL_14;
    this[72] = 0LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v8 + 104LL))(*v8, &v26);
    v7 = v10;
    if ( v10 < 0 )
    {
      v11 = 685LL;
      goto LABEL_31;
    }
    if ( (_WORD)v26 )
    {
      v13 = v29;
    }
    else
    {
      v13 = -5536;
      v29 = -5536;
    }
    if ( v13 )
    {
LABEL_14:
      v14 = this + 73;
      if ( !this[73] )
      {
        v10 = Microsoft::WRL::Details::MakeAndInitialize<`anonymous namespace'::SimpleTimeProvider,SpatialInteractionDevices::IHapticsTimerProvider>(this + 73);
        v7 = v10;
        v20 = v10;
        if ( v10 < 0 )
        {
          v11 = 696LL;
          goto LABEL_31;
        }
        v21 = (SpatialInteractionDevices::SpatialInteractionController *)this;
        v15 = (SpatialInteractionDevices::SpatialInteractionController **)Microsoft::WRL::Callback_SpatialInteractionDevices::IHapticsTimerCallback__lambda_77dca828cc74180f62f751716ffcfc7f___(
                                                                            &v26,
                                                                            &v21);
        v16 = 0LL;
        if ( &v21 != v15 )
        {
          v16 = *v15;
          *v15 = 0LL;
        }
        v17 = this[74];
        this[74] = (HSTRING)v16;
        if ( v17 )
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v17 + 16LL))(v17);
        v18 = v26;
        if ( v26 )
        {
          v26 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        v10 = (*(__int64 (__fastcall **)(_QWORD, HSTRING))(*(_QWORD *)*v14 + 56LL))(*v14, this[74]);
        v7 = v10;
        v20 = v10;
        if ( v10 < 0 )
        {
          v11 = 706LL;
          goto LABEL_31;
        }
      }
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v14 + 48LL))(*v14, &v22);
      v7 = v10;
      if ( v10 < 0 )
      {
        v11 = 709LL;
        goto LABEL_31;
      }
      this[72] = (HSTRING)(v22 + v29);
      v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 64LL))(*v14);
      v7 = v10;
      if ( v10 < 0 )
      {
        v11 = 711LL;
        goto LABEL_31;
      }
    }
    LOBYTE(v12) = v28;
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v8 + 88LL))(*v8, v12);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v7 = 0;
      goto LABEL_33;
    }
    v11 = 713LL;
    goto LABEL_31;
  }
  v7 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2A2,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
    (const char *)0x80070057LL);
LABEL_33:
  wil::details::ScopeExitFn__lambda_b55778b92a26814f5af4ddd6b8404138___::_ScopeExitFn__lambda_b55778b92a26814f5af4ddd6b8404138___(v24);
  return v7;
}
