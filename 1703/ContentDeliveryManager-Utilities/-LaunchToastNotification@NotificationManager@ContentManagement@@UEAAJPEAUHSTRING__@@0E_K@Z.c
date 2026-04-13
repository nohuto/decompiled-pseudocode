/*
 * XREFs of ?LaunchToastNotification@NotificationManager@ContentManagement@@UEAAJPEAUHSTRING__@@0E_K@Z @ 0x18000CB50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003C90 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall ContentManagement::NotificationManager::LaunchToastNotification(
        ContentManagement::NotificationManager *this,
        HSTRING a2,
        HSTRING a3,
        char a4,
        GUID *a5)
{
  HRESULT v8; // eax
  int v9; // ebx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, _QWORD *); // rcx
  int v11; // eax
  __int64 v12; // rdx
  HRESULT v13; // eax
  HSTRING v14; // rbx
  __int64 v15; // rcx
  int ActivationFactory; // eax
  int v17; // eax
  HRESULT v18; // eax
  HSTRING v19; // rbx
  __int64 (__fastcall ***v20)(_QWORD, GUID *, _QWORD *); // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 (__fastcall ***v23)(_QWORD, GUID *, _QWORD *); // rbx
  __int64 (__fastcall ***v24)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 (__fastcall ***v27)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v28)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v29; // rcx
  __int64 (__fastcall ***v30)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v31)(_QWORD, GUID *, _QWORD *); // rcx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rdx
  HRESULT v35; // eax
  HSTRING v36; // rbx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rbx
  HRESULT v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 (__fastcall ***v49)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v51)(_QWORD, GUID *, _QWORD *); // [rsp+28h] [rbp-51h] BYREF
  __int64 (__fastcall ***v52)(_QWORD, GUID *, _QWORD *); // [rsp+30h] [rbp-49h] BYREF
  __int64 v53; // [rsp+38h] [rbp-41h] BYREF
  __int64 (__fastcall ***v54)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-39h] BYREF
  __int64 v55; // [rsp+48h] [rbp-31h] BYREF
  __int64 v56; // [rsp+50h] [rbp-29h] BYREF
  __int64 (__fastcall ***v57)(_QWORD, GUID *, _QWORD *); // [rsp+58h] [rbp-21h] BYREF
  __int64 v58; // [rsp+60h] [rbp-19h] BYREF
  __int64 v59; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v60[2]; // [rsp+70h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp+7h] BYREF
  HSTRING string; // [rsp+98h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+57h]

  v60[1] = -2LL;
  v52 = 0LL;
  string = 0LL;
  v8 = WindowsCreateStringReference(L"Windows.Data.Xml.Dom.XmlDocument", 0x20u, &hstringHeader, &string);
  if ( v8 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
    __debugbreak();
  }
  v52 = 0LL;
  v9 = RoActivateInstance(string, &v51);
  if ( v9 < 0
    || (*(_QWORD *)&GUID_f7f3a506_1e87_42d6_bcfb_b8c809fa5494.Data1 != *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
     || *(_QWORD *)GUID_f7f3a506_1e87_42d6_bcfb_b8c809fa5494.Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      ? (v9 = (**v51)(v51, &GUID_f7f3a506_1e87_42d6_bcfb_b8c809fa5494, &v52),
         ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v51)[2])(v51),
         v10 = v52)
      : (v10 = v51, v52 = v51),
        v9 < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1AB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_90;
  }
  v60[0] = 0LL;
  v11 = (**v10)(v10, &GUID_6cd0e74e_ee65_4489_9ebf_ca43e87ba637, v60);
  v9 = v11;
  if ( v11 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, HSTRING))(*(_QWORD *)v60[0] + 48LL))(v60[0], a2);
    v9 = v11;
    if ( v11 < 0 )
    {
      v12 = 431LL;
      goto LABEL_13;
    }
    v59 = 0LL;
    string = 0LL;
    v13 = WindowsCreateStringReference(L"Windows.UI.Notifications.ToastNotification", 0x2Au, &hstringHeader, &string);
    if ( v13 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
      __debugbreak();
    }
    v14 = string;
    v15 = v59;
    if ( v59 )
    {
      v59 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    ActivationFactory = RoGetActivationFactory(v14, &GUID_04124b20_82c6_4229_b109_fd9ed4662b53, &v59);
    v9 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1B2,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)ActivationFactory);
LABEL_85:
      v47 = v59;
      if ( v59 )
      {
        v59 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
      }
      goto LABEL_87;
    }
    v58 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v59 + 48LL))(v59, v52, &v58);
    v9 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1B5,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v17);
      goto LABEL_83;
    }
    if ( a5 )
    {
      v51 = 0LL;
      v54 = 0LL;
      v53 = 0LL;
      string = 0LL;
      v18 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
      if ( v18 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18);
        __debugbreak();
      }
      v19 = string;
      v20 = v51;
      if ( v51 )
      {
        v51 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v20)[2])(v20);
      }
      v21 = RoGetActivationFactory(v19, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v51);
      v9 = v21;
      if ( v21 < 0 )
      {
        v22 = 447LL;
LABEL_39:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v22,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v21);
        v26 = v53;
        if ( v53 )
        {
          v53 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        v27 = v54;
        if ( v54 )
        {
          v54 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v27)[2])(v27);
        }
        v28 = v51;
        if ( !v51 )
          goto LABEL_83;
        v51 = 0LL;
        goto LABEL_82;
      }
      v23 = v51;
      v24 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v24)[2])(v24);
      }
      v21 = (*v23)[21](v23, a5, &v54);
      v9 = v21;
      if ( v21 < 0 )
      {
        v22 = 448LL;
        goto LABEL_39;
      }
      v25 = v53;
      if ( v53 )
      {
        v53 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
      v21 = (**v54)(v54, &GUID_5541d8a7_497c_5aa4_86fc_7713adbf2a2c, &v53);
      v9 = v21;
      if ( v21 < 0 )
      {
        v22 = 449LL;
        goto LABEL_39;
      }
      v21 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v58 + 56LL))(v58, v53);
      v9 = v21;
      if ( v21 < 0 )
      {
        v22 = 450LL;
        goto LABEL_39;
      }
      v29 = v53;
      if ( v53 )
      {
        v53 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
      v30 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v30)[2])(v30);
      }
      v31 = v51;
      if ( v51 )
      {
        v51 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v31)[2])(v31);
      }
    }
    v57 = 0LL;
    v32 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v58)(
            v58,
            &GUID_9dfb9fd1_143a_490e_90bf_b9fba7132de7,
            &v57);
    v9 = v32;
    if ( v32 < 0 )
    {
      v33 = 454LL;
LABEL_59:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v33,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v32);
LABEL_80:
      v28 = v57;
      if ( !v57 )
        goto LABEL_83;
      v57 = 0LL;
LABEL_82:
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v28)[2])(v28);
LABEL_83:
      v46 = v58;
      if ( v58 )
      {
        v58 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
      }
      goto LABEL_85;
    }
    v32 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), HSTRING))(*v57)[6])(v57, a3);
    v9 = v32;
    if ( v32 < 0 )
    {
      v33 = 457LL;
      goto LABEL_59;
    }
    v32 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), HSTRING))(*v57)[8])(v57, a3);
    v9 = v32;
    if ( v32 < 0 )
    {
      v33 = 461LL;
      goto LABEL_59;
    }
    LOBYTE(v34) = a4;
    v32 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64))(*v57)[10])(v57, v34);
    v9 = v32;
    if ( v32 < 0 )
    {
      v33 = 463LL;
      goto LABEL_59;
    }
    v56 = 0LL;
    string = 0LL;
    v35 = WindowsCreateStringReference(
            L"Windows.UI.Notifications.ToastNotificationManager",
            0x31u,
            &hstringHeader,
            &string);
    if ( v35 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v35);
      __debugbreak();
    }
    v36 = string;
    v37 = v56;
    if ( v56 )
    {
      v56 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
    v38 = RoGetActivationFactory(v36, &GUID_50ac103f_d235_4598_bbef_98fe4d1a3ad4, &v56);
    v9 = v38;
    if ( v38 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1D2,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v38);
LABEL_78:
      v45 = v56;
      if ( v56 )
      {
        v56 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
      }
      goto LABEL_80;
    }
    v55 = 0LL;
    v39 = v56;
    string = 0LL;
    v40 = WindowsCreateStringReference(L"Windows.SystemToast.Suggested", 0x1Du, &hstringHeader, &string);
    if ( v40 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v40);
    v41 = v55;
    if ( v55 )
    {
      v55 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    }
    v42 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v39 + 56LL))(v39, string, &v55);
    v9 = v42;
    if ( v42 >= 0 )
    {
      v42 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v55 + 48LL))(v55, v58);
      v9 = v42;
      if ( v42 >= 0 )
      {
        v9 = 0;
LABEL_76:
        v44 = v55;
        if ( v55 )
        {
          v55 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
        }
        goto LABEL_78;
      }
      v43 = 471LL;
    }
    else
    {
      v43 = 469LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v43,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v42);
    goto LABEL_76;
  }
  v12 = 430LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v12,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v11);
LABEL_87:
  v48 = v60[0];
  if ( v60[0] )
  {
    v60[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  }
LABEL_90:
  v49 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v49)[2])(v49);
  }
  return (unsigned int)v9;
}
