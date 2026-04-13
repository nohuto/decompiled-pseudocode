/*
 * XREFs of ?Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z @ 0x180044790
 * Callers:
 *     ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x180028290 (-ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventTy.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C50 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x180015708 (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ?SetUriParam@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@AEAAJPEBG0@Z @ 0x180044E10 (-SetUriParam@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@AEAAJPEBG0@Z.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x180044EC4 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser::Parse(
        CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser *this,
        unsigned __int16 *a2)
{
  int ActivationFactory; // eax
  unsigned int v4; // ebx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, _QWORD *); // rbx
  GUID **v6; // rax
  int v7; // eax
  int v8; // eax
  const WCHAR *StringRawBuffer; // rax
  __int64 v10; // rsi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  PCWSTR v15; // rax
  __int64 i; // rbx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  int v22; // eax
  const unsigned __int16 *v23; // rbx
  const unsigned __int16 *v24; // rax
  __int64 v25; // rcx
  _WORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 (__fastcall ***v32)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 (__fastcall ***v35)(_QWORD, GUID *, _QWORD *); // rcx
  char v37[8]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v38; // [rsp+38h] [rbp-41h] BYREF
  __int64 (__fastcall ***v39)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-39h] BYREF
  __int64 v40; // [rsp+48h] [rbp-31h] BYREF
  __int64 v41; // [rsp+50h] [rbp-29h] BYREF
  HSTRING v42; // [rsp+58h] [rbp-21h] BYREF
  HSTRING v43; // [rsp+60h] [rbp-19h] BYREF
  __int64 v44; // [rsp+68h] [rbp-11h] BYREF
  __int64 (__fastcall ***v45)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp-9h] BYREF
  __int64 v46; // [rsp+78h] [rbp-1h] BYREF
  HSTRING v47; // [rsp+80h] [rbp+7h] BYREF
  HSTRING v48; // [rsp+88h] [rbp+Fh] BYREF
  HSTRING v49; // [rsp+90h] [rbp+17h] BYREF
  HSTRING string; // [rsp+98h] [rbp+1Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v42 = (HSTRING)a2;
  v39 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Foundation.Uri", 0x16u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_44a9796f_723e_4fdf_a218_033e75b0c084, &v39);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x27,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_87;
  }
  v5 = v39;
  v41 = 0LL;
  v6 = (GUID **)Windows::Internal::StringReference::StringReference((__int64)&string, (const WCHAR **)&v42);
  v7 = (*v5)[6](v5, *v6, &v41);
  v4 = v7;
  if ( v7 >= 0 )
  {
    v49 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v41 + 136LL))(v41, &v49);
    v4 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x2D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_83;
    }
    StringRawBuffer = WindowsGetStringRawBuffer(v49, 0LL);
    v10 = -1LL;
    if ( CompareStringOrdinal(StringRawBuffer, -1, L"creative-ms", -1, 1) != 2 )
    {
      v4 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
        (const char *)0x80070057LL);
LABEL_83:
      if ( v49 )
        WindowsDeleteString(v49);
      goto LABEL_85;
    }
    v48 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v41 + 104LL))(v41, &v48);
    v4 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x32,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
        (const char *)(unsigned int)v11);
LABEL_81:
      if ( v48 )
        WindowsDeleteString(v48);
      goto LABEL_83;
    }
    v46 = 0LL;
    v12 = (**v39)(v39, &GUID_c1d432ba_c824_4452_a7fd_512bc3bbe9a1, &v46);
    v4 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x36,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
        (const char *)(unsigned int)v12);
LABEL_79:
      v33 = v46;
      if ( v46 )
      {
        v46 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      goto LABEL_81;
    }
    v47 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING *))(*(_QWORD *)v46 + 48LL))(v46, v48, &v47);
    v4 = v13;
    if ( v13 < 0 )
    {
      v14 = 56LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v14,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
        (const char *)(unsigned int)v13);
LABEL_77:
      if ( v47 )
        WindowsDeleteString(v47);
      goto LABEL_79;
    }
    v15 = WindowsGetStringRawBuffer(v47, 0LL);
    v13 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(this, v15);
    v4 = v13;
    if ( v13 < 0 )
    {
      v14 = 57LL;
      goto LABEL_19;
    }
    if ( *((_QWORD *)this + 1) == -1LL )
    {
      if ( *(_QWORD *)this )
      {
        do
          ++v10;
        while ( *(_WORD *)(*(_QWORD *)this + 2 * v10) );
      }
      else
      {
        v10 = 0LL;
      }
      *((_QWORD *)this + 1) = v10;
    }
    for ( i = *((_QWORD *)this + 1); i; --i )
    {
      if ( !wcschr(L"/", *(_WORD *)(*(_QWORD *)this + 2 * i - 2)) )
        break;
    }
    if ( i != *((_QWORD *)this + 1) )
    {
      *(_WORD *)(*(_QWORD *)this + 2 * i) = 0;
      *((_QWORD *)this + 1) = i;
    }
    v45 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v41 + 120LL))(
            v41,
            &v45);
    v4 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
        (const char *)(unsigned int)v17);
LABEL_75:
      v32 = v45;
      if ( v45 )
      {
        v45 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v32)[2])(v32);
      }
      goto LABEL_77;
    }
    v44 = 0LL;
    v18 = (**v45)(v45, &GUID_876be83b_7218_5bfb_a169_83152ef7e146, &v44);
    v4 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x40,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
        (const char *)(unsigned int)v18);
LABEL_73:
      v31 = v44;
      if ( v44 )
      {
        v44 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      goto LABEL_75;
    }
    v40 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v44 + 48LL))(v44, &v40);
    v4 = v19;
    if ( v19 >= 0 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v40 + 56LL))(v40, v37);
      v4 = v19;
      if ( v19 >= 0 )
      {
        while ( v37[0] )
        {
          v38 = 0LL;
          v21 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v40 + 48LL))(v40, &v38);
          v4 = v21;
          if ( v21 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x49,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
              (const char *)(unsigned int)v21);
            goto LABEL_66;
          }
          v42 = 0LL;
          v43 = 0LL;
          v22 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v38 + 48LL))(v38, &v42);
          v4 = v22;
          if ( v22 < 0 )
          {
            v27 = 77LL;
LABEL_61:
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)v27,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
              (const char *)(unsigned int)v22);
            if ( v43 )
              WindowsDeleteString(v43);
            if ( v42 )
              WindowsDeleteString(v42);
LABEL_66:
            v28 = v38;
            if ( v38 )
            {
              v38 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
            }
            goto LABEL_71;
          }
          v22 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v38 + 56LL))(v38, &v43);
          v4 = v22;
          if ( v22 < 0 )
          {
            v27 = 78LL;
            goto LABEL_61;
          }
          v23 = WindowsGetStringRawBuffer(v43, 0LL);
          v24 = WindowsGetStringRawBuffer(v42, 0LL);
          v22 = CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser::SetUriParam(this, v24, v23);
          v4 = v22;
          if ( v22 < 0 )
          {
            v27 = 79LL;
            goto LABEL_61;
          }
          v22 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v40 + 64LL))(v40, v37);
          v4 = v22;
          if ( v22 < 0 )
          {
            v27 = 81LL;
            goto LABEL_61;
          }
          if ( v43 )
            WindowsDeleteString(v43);
          if ( v42 )
            WindowsDeleteString(v42);
          v25 = v38;
          if ( v38 )
          {
            v38 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
          }
        }
        if ( *(_QWORD *)this && **(_WORD **)this )
        {
          v26 = (_WORD *)*((_QWORD *)this + 3);
          if ( v26 && *v26 )
          {
            v4 = 0;
            goto LABEL_71;
          }
          v29 = 86LL;
        }
        else
        {
          v29 = 85LL;
        }
        v4 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v29,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
          (const char *)0x80070057LL);
        goto LABEL_71;
      }
      v20 = 69LL;
    }
    else
    {
      v20 = 67LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v20,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
      (const char *)(unsigned int)v19);
LABEL_71:
    v30 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
    goto LABEL_73;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x2A,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
    (const char *)(unsigned int)v7);
LABEL_85:
  v34 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
LABEL_87:
  v35 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v35)[2])(v35);
  }
  return v4;
}
