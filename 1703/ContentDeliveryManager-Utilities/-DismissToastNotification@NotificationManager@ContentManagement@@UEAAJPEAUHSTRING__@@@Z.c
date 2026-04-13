/*
 * XREFs of ?DismissToastNotification@NotificationManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18000D220
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003C90 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::NotificationManager::DismissToastNotification(
        ContentManagement::NotificationManager *this,
        HSTRING a2)
{
  HRESULT v3; // eax
  int ActivationFactory; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rbx
  HRESULT v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v14[1] = -2LL;
  v13 = 0LL;
  string = 0LL;
  v3 = WindowsCreateStringReference(
         L"Windows.UI.Notifications.ToastNotificationManager",
         0x31u,
         &hstringHeader,
         &string);
  if ( v3 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_7ab93c52_0e48_4750_ba9d_1a4113981847, &v13);
  v5 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v14[0] = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 48LL))(v13, v14);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v7 = v14[0];
      string = 0LL;
      v8 = WindowsCreateStringReference(L"Windows.SystemToast.Suggested", 0x1Du, &hstringHeader, &string);
      if ( v8 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
      v9 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, HSTRING))(*(_QWORD *)v7 + 64LL))(v7, a2, a2, string);
      if ( v9 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x1E5,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v9);
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1E2,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v6);
    }
    v10 = v14[0];
    if ( v14[0] )
    {
      v14[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1DF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)ActivationFactory);
  }
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v5;
}
