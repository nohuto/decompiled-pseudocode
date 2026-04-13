/*
 * XREFs of _lambda_5d23f9c1406c8199f9216519884653b5_::operator() @ 0x18000D6B0
 * Callers:
 *     ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18000D410 (-LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU-$IAsyncOperation@_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C50 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x180015708 (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_5d23f9c1406c8199f9216519884653b5_::operator()(__int64 a1)
{
  int v2; // ebx
  int v3; // eax
  PCWSTR v4; // rcx
  PCWSTR v5; // rcx
  HSTRING v6; // rbx
  const WCHAR *v7; // rcx
  int ActivationFactory; // eax
  const WCHAR *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  int v12; // eax
  HSTRING v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  WCHAR *v21; // rcx
  PCWSTR StringRawBuffer; // [rsp+38h] [rbp-9h] BYREF
  WCHAR *v24; // [rsp+40h] [rbp-1h] BYREF
  __int64 v25; // [rsp+48h] [rbp+7h] BYREF
  __int64 v26; // [rsp+50h] [rbp+Fh] BYREF
  const WCHAR *v27; // [rsp+58h] [rbp+17h] BYREF
  _QWORD v28[2]; // [rsp+60h] [rbp+1Fh] BYREF
  HSTRING string; // [rsp+70h] [rbp+2Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v28[1] = -2LL;
  if ( WindowsIsStringEmpty(**(HSTRING **)a1) )
  {
    v2 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x211,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)0x80070057LL);
    return (unsigned int)v2;
  }
  v24 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.System.LauncherOptions", 0x1Eu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v24 = 0LL;
  v2 = RoActivateInstance(string, &StringRawBuffer);
  if ( v2 >= 0 )
  {
    if ( *(_QWORD *)&GUID_bafa21d8_b071_4cd8_853e_341203e557d3.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_bafa21d8_b071_4cd8_853e_341203e557d3.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      v24 = (WCHAR *)StringRawBuffer;
    }
    else
    {
      v2 = (**(__int64 (__fastcall ***)(PCWSTR, GUID *, WCHAR **))StringRawBuffer)(
             StringRawBuffer,
             &GUID_bafa21d8_b071_4cd8_853e_341203e557d3,
             &v24);
      (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)StringRawBuffer + 16LL))(StringRawBuffer);
    }
    if ( v2 >= 0 )
    {
      if ( !WindowsIsStringEmpty(**(HSTRING **)(a1 + 8)) )
      {
        StringRawBuffer = 0LL;
        v3 = (**(__int64 (__fastcall ***)(WCHAR *, GUID *, PCWSTR *))v24)(
               v24,
               &GUID_3ba08eb4_6e40_4dce_a1a3_2f53950afb49,
               &StringRawBuffer);
        v2 = v3;
        if ( v3 < 0
          || (v3 = (*(__int64 (__fastcall **)(PCWSTR, _QWORD))(*(_QWORD *)StringRawBuffer + 56LL))(
                     StringRawBuffer,
                     **(_QWORD **)(a1 + 8)),
              v2 = v3,
              v3 < 0) )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x211,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v3);
          v4 = StringRawBuffer;
          if ( !StringRawBuffer )
            goto LABEL_47;
          StringRawBuffer = 0LL;
          goto LABEL_16;
        }
        v5 = StringRawBuffer;
        if ( StringRawBuffer )
        {
          StringRawBuffer = 0LL;
          (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v5 + 16LL))(v5);
        }
      }
      v27 = 0LL;
      if ( WindowsCreateStringReference(L"Windows.Foundation.Uri", 0x16u, &hstringHeader, &string) < 0 )
        RaiseException(0xC000000D, 1u, 0, 0LL);
      v6 = string;
      v7 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v7 + 16LL))(v7);
      }
      ActivationFactory = RoGetActivationFactory(v6, &GUID_44a9796f_723e_4fdf_a218_033e75b0c084, &v27);
      v2 = ActivationFactory;
      if ( ActivationFactory >= 0 )
      {
        v26 = 0LL;
        StringRawBuffer = WindowsGetStringRawBuffer(**(HSTRING **)a1, 0LL);
        v9 = v27;
        v10 = v26;
        if ( v26 )
        {
          v26 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        v11 = (_QWORD *)Windows::Internal::StringReference::StringReference(&string, &StringRawBuffer);
        v12 = (*(__int64 (__fastcall **)(const WCHAR *, _QWORD, __int64 *))(*(_QWORD *)v9 + 48LL))(v9, *v11, &v26);
        v2 = v12;
        if ( v12 >= 0 )
        {
          v25 = 0LL;
          if ( WindowsCreateStringReference(L"Windows.System.Launcher", 0x17u, &hstringHeader, &string) < 0 )
            RaiseException(0xC000000D, 1u, 0, 0LL);
          v13 = string;
          v14 = v25;
          if ( v25 )
          {
            v25 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          }
          v15 = RoGetActivationFactory(v13, &GUID_277151c3_9e3e_42f6_91a4_5dfdeb232451, &v25);
          v2 = v15;
          if ( v15 >= 0 )
          {
            v28[0] = 0LL;
            v16 = (*(__int64 (__fastcall **)(__int64, __int64, WCHAR *, _QWORD *))(*(_QWORD *)v25 + 72LL))(
                    v25,
                    v26,
                    v24,
                    v28);
            v2 = v16;
            if ( v16 >= 0 )
            {
              v17 = v28[0];
              v28[0] = 0LL;
              ***(_QWORD ***)(a1 + 16) = v17;
              v2 = 0;
            }
            else
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x211,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                (const char *)(unsigned int)v16);
            }
            v18 = v28[0];
            if ( v28[0] )
            {
              v28[0] = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x211,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
              (const char *)(unsigned int)v15);
          }
          v19 = v25;
          if ( v25 )
          {
            v25 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x211,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v12);
        }
        v20 = v26;
        if ( v26 )
        {
          v26 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x211,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)ActivationFactory);
      }
      v4 = v27;
      if ( !v27 )
        goto LABEL_47;
      v27 = 0LL;
LABEL_16:
      (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v4 + 16LL))(v4);
      goto LABEL_47;
    }
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x211,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v2);
LABEL_47:
  v21 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(WCHAR *))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return (unsigned int)v2;
}
