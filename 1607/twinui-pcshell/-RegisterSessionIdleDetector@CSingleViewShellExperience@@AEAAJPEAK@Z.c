/*
 * XREFs of ?RegisterSessionIdleDetector@CSingleViewShellExperience@@AEAAJPEAK@Z @ 0x18001BEE0
 * Callers:
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18001B8D4 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIOleWindow@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180007F40 (-Release@-$RuntimeClass@U-$InterfaceList@UIOleWindow@@VNil@Details@WRL@Microsoft@@@Details@WRL@M.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnSessionIdleStateChanged@CSingleViewShellExperience@@AEAAJH@Z @ 0x18001C008 (-OnSessionIdleStateChanged@CSingleViewShellExperience@@AEAAJH@Z.c)
 *     ??$MakeSessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@YA?AV?$ComPtr@V?$SessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@@WRL@Microsoft@@V_lambda_d51462a882575f844d514d7510b2bd27_@@@Z @ 0x18001F1E8 (--$MakeSessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@YA-AV-$ComPtr@V-$Sessio.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSingleViewShellExperience::RegisterSessionIdleDetector(
        CSingleViewShellExperience *this,
        unsigned int *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  _QWORD *SessionIdle; // rax
  int v7; // esi
  volatile signed __int32 *v8; // rcx
  int v9; // eax
  _QWORD v11[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v13; // [rsp+60h] [rbp+8h] BYREF
  volatile signed __int32 *v14; // [rsp+70h] [rbp+18h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h]

  v4 = *((_QWORD *)this + 12);
  v15 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)this + 14);
  v11[0] = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v11[1] = this;
  SessionIdle = (_QWORD *)MakeSessionIdleCallback<_lambda_d51462a882575f844d514d7510b2bd27_>(&v14, v11);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v5 + 32LL))(v5, *SessionIdle, a2);
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IOleWindow,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v8);
  }
  if ( v7 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 14) + 24LL))(*((_QWORD *)this + 14), &v13);
    if ( v9 >= 0 )
      CSingleViewShellExperience::OnSessionIdleStateChanged(this, v13);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC2,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v9);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v7);
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v7;
}
