/*
 * XREFs of ?EnsureMrtResourceMapInitialized@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x180066948
 * Callers:
 *     ?ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800667CC (-ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x18000255C (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003C90 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CreativeFramework::NotificationManager::ToastHelpers::EnsureMrtResourceMapInitialized(
        CreativeFramework::NotificationManager::ToastHelpers *this)
{
  __int64 v2; // rdi
  int ActivationFactory; // eax
  __int64 v4; // rbx
  HRESULT StringReference; // eax
  int v6; // eax
  HRESULT v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  HRESULT v14; // eax
  LPVOID v15; // rbx
  PCWSTR StringRawBuffer; // rax
  int v17; // eax
  LPVOID v18; // rsi
  __int64 v19; // rcx
  int v20; // eax
  LPVOID v21; // rbx
  __int64 v22; // rcx
  int v23; // eax
  LPVOID ppv; // [rsp+38h] [rbp-29h] BYREF
  HSTRING v25; // [rsp+40h] [rbp-21h] BYREF
  __int64 v26; // [rsp+48h] [rbp-19h] BYREF
  __int64 v27; // [rsp+50h] [rbp-11h] BYREF
  __int64 v28; // [rsp+58h] [rbp-9h] BYREF
  int v29; // [rsp+60h] [rbp-1h] BYREF
  __int64 v30; // [rsp+68h] [rbp+7h] BYREF
  _QWORD v31[2]; // [rsp+70h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+80h] [rbp+1Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v31[1] = -2LL;
  v2 = (__int64)this + 56;
  if ( !*((_QWORD *)this + 7) )
  {
    v31[0] = 0LL;
    if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.PackageFamily", 0x2Eu, &hstringHeader, &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    ActivationFactory = RoGetActivationFactory(string, &GUID_86f5b0ee_9560_4d76_a06a_ca4c8bfe4426, v31);
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x168,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)ActivationFactory);
      __debugbreak();
    }
    v27 = 0LL;
    v4 = v31[0];
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
    StringReference = WindowsCreateStringReference(
                        L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy",
                        0x36u,
                        (HSTRING_HEADER *)&string,
                        (HSTRING *)&hstringHeader.Reserved.Reserved2[16]);
    if ( StringReference < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)StringReference);
    v27 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v4 + 128LL))(
           v4,
           *(_QWORD *)&hstringHeader.Reserved.Reserved2[16],
           &v27);
    if ( v6 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x16A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v6);
    v26 = 0LL;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
    v7 = WindowsCreateStringReference(
           L"Windows.Internal.StateRepository.Package",
           0x28u,
           (HSTRING_HEADER *)&string,
           (HSTRING *)&hstringHeader.Reserved.Reserved2[16]);
    if ( v7 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
    v26 = 0LL;
    v8 = RoGetActivationFactory(
           *(_QWORD *)&hstringHeader.Reserved.Reserved2[16],
           &GUID_a14c8099_29fd_4730_9c5f_7cd2abac36f1,
           &v26);
    if ( v8 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x16C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v8);
    v28 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v26 + 224LL))(v26, v27, &v28);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x16E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v28 + 56LL))(v28, &v29);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x171,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    if ( !v29 )
    {
      v2 = 2147943568LL;
      wil::details::OriginateError();
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x172,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)0x80070490LL);
    }
    v30 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v28 + 48LL))(v28, 0LL, &v30);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x174,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
    v12 = v30;
    WindowsDeleteString(0LL);
    v25 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v12 + 208LL))(v12, &v25);
    if ( v13 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x176,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v13);
    ppv = 0LL;
    v14 = CoCreateInstance(
            &GUID_dbce7e40_7345_439d_b12c_114a11819a09,
            0LL,
            1u,
            &GUID_130a2f65_2be7_4309_9a58_a9052ff2b61c,
            &ppv);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x17A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
    v15 = ppv;
    StringRawBuffer = WindowsGetStringRawBuffer(v25, 0LL);
    v17 = (*(__int64 (__fastcall **)(LPVOID, PCWSTR))(*(_QWORD *)v15 + 40LL))(v15, StringRawBuffer);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x17B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v17);
      __debugbreak();
    }
    v18 = ppv;
    v19 = *((_QWORD *)this + 8);
    if ( v19 )
    {
      *((_QWORD *)this + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = (*(__int64 (__fastcall **)(LPVOID, GUID *, char *))(*(_QWORD *)v18 + 72LL))(
            v18,
            &GUID_e3c22b30_8502_4b2f_9133_559674587e51,
            (char *)this + 64);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x17D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v20);
      __debugbreak();
    }
    v21 = ppv;
    v22 = *(_QWORD *)v2;
    if ( *(_QWORD *)v2 )
    {
      *(_QWORD *)v2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v23 = (*(__int64 (__fastcall **)(LPVOID, GUID *, __int64))(*(_QWORD *)v21 + 56LL))(
            v21,
            &GUID_6e21e72b_b9b0_42ae_a686_983cf784edcd,
            v2);
    if ( v23 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x17E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v23);
    if ( ppv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
    WindowsDeleteString(v25);
    v25 = 0LL;
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    if ( v31[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v31[0] + 16LL))(v31[0]);
  }
}
