/*
 * XREFs of ?RegisterForImmersiveWindowMessages@CSingleViewShellExperience@@AEAAJPEAK@Z @ 0x18001C138
 * Callers:
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18001B8D4 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISelectionDataParser@StartLayout@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800164F0 (-Release@-$RuntimeClass@U-$InterfaceList@UISelectionDataParser@StartLayout@@VNil@Details@WRL@Mic.c)
 *     ??$MakeImmersiveWindowMessageHandler@V_lambda_1e4f247a89265aed21ef611c1eede965_@@@@YA?AV?$ComPtr@V?$ImmersiveWindowMessageHandler@V_lambda_1e4f247a89265aed21ef611c1eede965_@@@@@WRL@Microsoft@@V_lambda_1e4f247a89265aed21ef611c1eede965_@@@Z @ 0x18001F2C0 (--$MakeImmersiveWindowMessageHandler@V_lambda_1e4f247a89265aed21ef611c1eede965_@@@@YA-AV-$ComPtr.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSingleViewShellExperience::RegisterForImmersiveWindowMessages(
        CSingleViewShellExperience *this,
        unsigned int *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  _QWORD *ImmersiveWindowMessage; // rax
  int v7; // edi
  volatile signed __int32 *v8; // rcx
  _QWORD v10[6]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  volatile signed __int32 *v12; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+80h] [rbp+18h]

  v4 = *((_QWORD *)this + 12);
  v13 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)this + 15);
  v10[0] = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v10[1] = this;
  ImmersiveWindowMessage = (_QWORD *)MakeImmersiveWindowMessageHandler<_lambda_1e4f247a89265aed21ef611c1eede965_>(
                                       &v12,
                                       v10);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)v5 + 24LL))(
         v5,
         0LL,
         *ImmersiveWindowMessage,
         a2);
  v8 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<StartLayout::ISelectionDataParser,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v8);
  }
  if ( v7 >= 0 )
    v7 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x119,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v7);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v7;
}
