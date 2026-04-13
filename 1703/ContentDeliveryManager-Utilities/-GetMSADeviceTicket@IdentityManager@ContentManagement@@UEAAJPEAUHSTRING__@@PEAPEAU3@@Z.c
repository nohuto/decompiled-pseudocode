/*
 * XREFs of ?GetMSADeviceTicket@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU3@@Z @ 0x18000E760
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C50 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003C90 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$Make@V?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@AEBU?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@2345@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@@12@AEBU?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@Windows@@$$QEAUpermission@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@5678@@Z @ 0x180015B1C (--$Make@V-$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U-$.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18001ADCC (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVUserHostIdentity@WebAuthentication@S.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ContentManagement::IdentityManager::GetMSADeviceTicket(
        ContentManagement::IdentityManager *this,
        HSTRING a2,
        HSTRING *a3)
{
  HRESULT v5; // eax
  int v6; // esi
  HRESULT v7; // eax
  HSTRING v8; // rbx
  __int64 v9; // rcx
  int ActivationFactory; // eax
  __int64 v11; // rbx
  HRESULT v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  unsigned __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v37; // [rsp+38h] [rbp-49h] BYREF
  __int64 v38; // [rsp+40h] [rbp-41h] BYREF
  __int64 v39; // [rsp+48h] [rbp-39h] BYREF
  __int64 v40; // [rsp+50h] [rbp-31h] BYREF
  __int64 v41; // [rsp+58h] [rbp-29h] BYREF
  int v42; // [rsp+60h] [rbp-21h] BYREF
  __int64 v43; // [rsp+68h] [rbp-19h] BYREF
  __int64 v44; // [rsp+70h] [rbp-11h] BYREF
  _QWORD v45[2]; // [rsp+78h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+7h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v45[1] = -2LL;
  *a3 = 0LL;
  v37 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(
         L"Windows.Internal.Security.WebAuthentication.AuthenticationManager",
         0x41u,
         &hstringHeader,
         &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    __debugbreak();
  }
  v37 = 0LL;
  v6 = RoActivateInstance(string, &v41);
  if ( v6 < 0 )
    goto LABEL_63;
  if ( *(_QWORD *)&GUID_eb2c0c45_76f9_4a0a_bb73_fcf47d73a4eb.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
    && *(_QWORD *)GUID_eb2c0c45_76f9_4a0a_bb73_fcf47d73a4eb.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
  {
    v37 = v41;
  }
  else
  {
    v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v41)(
           v41,
           &GUID_eb2c0c45_76f9_4a0a_bb73_fcf47d73a4eb,
           &v37);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  }
  if ( v6 < 0 )
  {
LABEL_63:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2A9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_64;
  }
  v40 = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(
         L"Windows.Security.Authentication.OnlineId.OnlineIdServiceTicketRequest",
         0x45u,
         &hstringHeader,
         &string);
  if ( v7 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = string;
  v9 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  ActivationFactory = RoGetActivationFactory(v8, &GUID_bebb0a08_9e73_4077_9614_08614c0bc245, &v40);
  v6 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v39 = 0LL;
    v11 = v40;
    string = 0LL;
    v12 = WindowsCreateStringReference(L"MBI_SSL", 7u, &hstringHeader, &string);
    if ( v12 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
    v13 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, __int64 *))(*(_QWORD *)v11 + 48LL))(
            v11,
            a2,
            string,
            &v39);
    v6 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x2B4,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v14);
LABEL_59:
      v33 = v39;
      if ( v39 )
      {
        v39 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      goto LABEL_61;
    }
    v15 = 0LL;
    Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *> const &,Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::permission>(&v41);
    v16 = v41;
    if ( !v41 )
    {
      v6 = -2147024882;
      v18 = 2147942414LL;
      v19 = 695LL;
      goto LABEL_56;
    }
    v15 = v41;
    v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 104LL))(v41, v39);
    v6 = v17;
    if ( v17 < 0 )
    {
      v18 = (unsigned int)v17;
      v19 = 696LL;
LABEL_56:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v19,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)v18);
LABEL_57:
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      goto LABEL_59;
    }
    v45[0] = 0LL;
    v38 = 0LL;
    v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v37 + 64LL))(
            v37,
            (v16 + 16) & -(__int64)(v16 != 0),
            v45);
    v6 = v20;
    if ( v20 < 0 )
    {
      v21 = (unsigned int)v20;
      v22 = 701LL;
LABEL_50:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v22,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)v21);
      goto LABEL_51;
    }
    v23 = v45[0];
    v24 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    v6 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>,Windows::Foundation::IAsyncOperation<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>>(v23);
    if ( v6 < 0 || (v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 64LL))(v23, &v38), v6 < 0) )
    {
      v21 = (unsigned int)v6;
      v22 = 702LL;
      goto LABEL_50;
    }
    if ( !v38 )
    {
      v6 = -2147023728;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2BF,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)0x80070490LL);
LABEL_51:
      v31 = v38;
      if ( v38 )
      {
        v38 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      v32 = v45[0];
      if ( v45[0] )
      {
        v45[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
      goto LABEL_57;
    }
    v44 = 0LL;
    v25 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v38 + 48LL))(v38, &v44);
    v6 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x2C3,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v25);
LABEL_47:
      v30 = v44;
      if ( v44 )
      {
        v44 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      }
      goto LABEL_51;
    }
    v43 = 0LL;
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v44 + 48LL))(v44, 0LL, &v43);
    v6 = v26;
    if ( v26 >= 0 )
    {
      v42 = 0;
      v26 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v43 + 64LL))(v43, &v42);
      v6 = v26;
      if ( v26 >= 0 )
      {
        v6 = v42;
        if ( v42 < 0 )
        {
          v28 = (unsigned int)v42;
          v27 = 714LL;
LABEL_43:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v27,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)v28);
          goto LABEL_45;
        }
        v26 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v43 + 48LL))(v43, a3);
        v6 = v26;
        if ( v26 >= 0 )
        {
          v6 = 0;
LABEL_45:
          v29 = v43;
          if ( v43 )
          {
            v43 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          }
          goto LABEL_47;
        }
        v27 = 715LL;
      }
      else
      {
        v27 = 713LL;
      }
    }
    else
    {
      v27 = 710LL;
    }
    v28 = (unsigned int)v26;
    goto LABEL_43;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x2AE,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_61:
  v34 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
LABEL_64:
  v35 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  return (unsigned int)v6;
}
