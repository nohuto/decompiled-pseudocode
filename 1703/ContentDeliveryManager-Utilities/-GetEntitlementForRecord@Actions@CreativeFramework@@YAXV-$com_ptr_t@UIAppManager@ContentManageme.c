/*
 * XREFs of ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W1_N@Z @ 0x1800567F8
 * Callers:
 *     ?InstallApp@Actions@CreativeFramework@@YAXPEB_W0_N1@Z @ 0x180056C08 (-InstallApp@Actions@CreativeFramework@@YAXPEB_W0_N1@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003C90 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001DF5C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?IsMsaConnected@Actions@CreativeFramework@@YA_NXZ @ 0x180056334 (-IsMsaConnected@Actions@CreativeFramework@@YA_NXZ.c)
 *     ??$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NI@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEBQEB_W0AEA_N$$QEAI@Z @ 0x18005770C (--$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NI@ContentDeliveryManagerTelemetry@Back.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CreativeFramework::Actions::GetEntitlementForRecord(
        CreativeFramework::Actions *a1,
        const WCHAR **a2,
        const WCHAR **a3)
{
  const WCHAR **v3; // r15
  const WCHAR **v4; // r14
  CreativeFramework::Actions *v5; // rsi
  char IsMsaConnected; // al
  __int64 v7; // r12
  HRESULT v8; // eax
  HSTRING_HEADER *v9; // rbx
  PVOID v10; // r10
  int v11; // eax
  wil *v12; // rcx
  __int64 v13; // r12
  HRESULT v14; // eax
  HSTRING_HEADER *v15; // rbx
  PVOID Reserved1; // r10
  int v17; // eax
  wil *v18; // rcx
  __int64 result; // rax
  int v20; // [rsp+20h] [rbp-C8h]
  int v21; // [rsp+30h] [rbp-B8h] BYREF
  int v22; // [rsp+34h] [rbp-B4h] BYREF
  const WCHAR **v23; // [rsp+38h] [rbp-B0h]
  const WCHAR **v24; // [rsp+40h] [rbp-A8h]
  CreativeFramework::Actions *v25; // [rsp+48h] [rbp-A0h]
  __int64 v26; // [rsp+50h] [rbp-98h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-90h] BYREF
  HSTRING string; // [rsp+70h] [rbp-78h] BYREF
  HSTRING_HEADER v29; // [rsp+78h] [rbp-70h] BYREF
  HSTRING_HEADER v30; // [rsp+98h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v26 = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = a1;
  v25 = a1;
  v24 = a2;
  v23 = a3;
  if ( (dword_1800F4808 & 1) != 0 )
  {
    IsMsaConnected = byte_1800F480C;
  }
  else
  {
    dword_1800F4808 |= 1u;
    IsMsaConnected = CreativeFramework::Actions::IsMsaConnected(a1);
    byte_1800F480C = IsMsaConnected;
  }
  if ( !IsMsaConnected )
  {
    LOBYTE(v21) = 1;
LABEL_27:
    try
    {
      v13 = *(_QWORD *)v5;
      string = 0LL;
      v14 = WindowsCreateStringReference(&word_180091F08, 0, &hstringHeader, &string);
      if ( v14 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
      v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, v3);
      Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, v4)[1].Reserved.Reserved1;
      LOBYTE(v20) = v21;
      v17 = (*(__int64 (__fastcall **)(__int64, PVOID, PVOID, HSTRING, int))(*(_QWORD *)v13 + 48LL))(
              v13,
              Reserved1,
              v15[1].Reserved.Reserved1,
              string,
              v20);
      v18 = retaddr;
      if ( v17 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x80,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
          (const char *)(unsigned int)v17);
    }
    catch ( ... )
    {
      v22 = wil::ResultFromCaughtException(v18);
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportEntitlementAcquisitionState<wchar_t const * const &,wchar_t const * const &,bool &,unsigned int>(
        v24,
        v23,
        &v21,
        &v22);
      throw;
    }
    goto LABEL_17;
  }
  LOBYTE(v21) = 0;
  try
  {
    v7 = *(_QWORD *)v5;
    string = 0LL;
    v8 = WindowsCreateStringReference(&word_180091F08, 0, &hstringHeader, &string);
    if ( v8 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, v3);
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, v4)[1].Reserved.Reserved1;
    v11 = (*(__int64 (__fastcall **)(__int64, PVOID, PVOID, HSTRING, _BYTE))(*(_QWORD *)v7 + 48LL))(
            v7,
            v10,
            v9[1].Reserved.Reserved1,
            string,
            v21);
    v12 = retaddr;
    if ( v11 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x6D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
        (const char *)(unsigned int)v11);
  }
  catch ( ... )
  {
    v22 = wil::ResultFromCaughtException(v12);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportEntitlementAcquisitionState<wchar_t const * const &,wchar_t const * const &,bool &,unsigned int>(
      v24,
      v23,
      &v21,
      &v22);
    LOBYTE(v21) = 1;
    v5 = v25;
    v4 = v24;
    v3 = v23;
  }
  if ( (_BYTE)v21 )
    goto LABEL_27;
LABEL_17:
  v22 = 0;
  result = ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportEntitlementAcquisitionState<wchar_t const * const &,wchar_t const * const &,bool &,unsigned int>(
             v4,
             v3,
             &v21,
             &v22);
  if ( *(_QWORD *)v5 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 16LL))(*(_QWORD *)v5);
  return result;
}
