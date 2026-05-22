/*
 * XREFs of ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x180055E28
 * Callers:
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x180054370 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18003BC5C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003BC8C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpeechRuntimeListener::InitializeCoreMessaging(SpeechRuntimeListener *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int Descriptor; // eax
  __int64 v5; // rsi
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v15; // [rsp+38h] [rbp-20h] BYREF
  char v16; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v15 = 0LL;
  v16 = 0;
  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = CoreUICreate(this);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x49,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  Descriptor = InputSecurityDescriptor::QueryDescriptor(
                 (__int64)&v15,
                 8u,
                 (__int64)L"System\\SpeechRuntimeListenerPort");
  if ( Descriptor < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x4D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)Descriptor);
    __debugbreak();
  }
  v5 = *(_QWORD *)this;
  v6 = (_QWORD *)((char *)this + 16);
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
  {
    *v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(*(_QWORD *)v5 + 48LL))(
         v5,
         v15,
         L"System\\SpeechRuntimeListenerPort",
         (char *)this + 16);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x52,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, int (*)(void *, const void *, int), SpeechRuntimeListener *, _QWORD, char *))(**(_QWORD **)this + 80LL))(
         *(_QWORD *)this,
         SpeechRuntimeListener::OnMessageCallbackStatic,
         this,
         *v6,
         (char *)this + 24);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x58,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = *(_QWORD *)this;
  v11 = *((_QWORD *)this + 1);
  if ( v11 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 24LL))(v10, (char *)this + 8);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x5A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, __int64))(**((_QWORD **)this + 1) + 40LL))(
          *((_QWORD *)this + 1),
          L"System\\SpeechRuntimeListener",
          *((unsigned int *)this + 6),
          1LL);
  if ( v13 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x5F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v13);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v15);
  return 0LL;
}
