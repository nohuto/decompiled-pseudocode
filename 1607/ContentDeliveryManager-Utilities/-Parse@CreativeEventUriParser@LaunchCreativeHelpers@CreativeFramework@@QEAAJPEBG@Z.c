/*
 * XREFs of ?Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z @ 0x18003A1D4
 * Callers:
 *     ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18001FF60 (-ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventTy.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x180024834 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800298AC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ?SetUriParam@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@AEAAJPEBG0@Z @ 0x18003A83C (-SetUriParam@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@AEAAJPEBG0@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
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
  __int64 v9; // r9
  __int64 v10; // rdx
  const WCHAR *StringRawBuffer; // rax
  __int64 v12; // rsi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  PCWSTR v17; // rax
  __int64 i; // rbx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rdx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  const unsigned __int16 *v27; // rbx
  const unsigned __int16 *v28; // rax
  __int64 v29; // rcx
  _WORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 (__fastcall ***v35)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 (__fastcall ***v38)(_QWORD, GUID *, _QWORD *); // rcx
  char v40[8]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v41; // [rsp+38h] [rbp-41h] BYREF
  __int64 (__fastcall ***v42)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-39h] BYREF
  __int64 v43; // [rsp+48h] [rbp-31h] BYREF
  __int64 v44; // [rsp+50h] [rbp-29h] BYREF
  HSTRING v45; // [rsp+58h] [rbp-21h] BYREF
  HSTRING v46; // [rsp+60h] [rbp-19h] BYREF
  __int64 v47; // [rsp+68h] [rbp-11h] BYREF
  __int64 (__fastcall ***v48)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp-9h] BYREF
  __int64 v49; // [rsp+78h] [rbp-1h] BYREF
  HSTRING v50; // [rsp+80h] [rbp+7h] BYREF
  HSTRING v51; // [rsp+88h] [rbp+Fh] BYREF
  HSTRING v52; // [rsp+90h] [rbp+17h] BYREF
  HSTRING string; // [rsp+98h] [rbp+1Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v45 = (HSTRING)a2;
  v42 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Foundation.Uri", 0x16u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_44a9796f_723e_4fdf_a218_033e75b0c084, &v42);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_88;
  }
  v5 = v42;
  v44 = 0LL;
  v6 = (GUID **)Windows::Internal::StringReference::StringReference((__int64)&string, (const WCHAR **)&v45);
  v7 = (*v5)[6](v5, *v6, &v44);
  v4 = v7;
  if ( v7 >= 0 )
  {
    v52 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v44 + 136LL))(v44, &v52);
    v4 = v8;
    if ( v8 < 0 )
    {
      v9 = (unsigned int)v8;
      v10 = 45LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
        (const char *)v9);
LABEL_84:
      if ( v52 )
        WindowsDeleteString(v52);
      goto LABEL_86;
    }
    StringRawBuffer = WindowsGetStringRawBuffer(v52, 0LL);
    v12 = -1LL;
    if ( CompareStringOrdinal(StringRawBuffer, -1, L"creative-ms", -1, 1) != 2 )
    {
      v4 = -2147024809;
      v10 = 46LL;
      v9 = 2147942487LL;
      goto LABEL_11;
    }
    v51 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v44 + 104LL))(v44, &v51);
    v4 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
        (const char *)(unsigned int)v13);
LABEL_82:
      if ( v51 )
        WindowsDeleteString(v51);
      goto LABEL_84;
    }
    v49 = 0LL;
    v14 = (**v42)(v42, &GUID_c1d432ba_c824_4452_a7fd_512bc3bbe9a1, &v49);
    v4 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
        (const char *)(unsigned int)v14);
LABEL_80:
      v36 = v49;
      if ( v49 )
      {
        v49 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      }
      goto LABEL_82;
    }
    v50 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING *))(*(_QWORD *)v49 + 48LL))(v49, v51, &v50);
    v4 = v15;
    if ( v15 >= 0 )
    {
      v17 = WindowsGetStringRawBuffer(v50, 0LL);
      v15 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
              (__int64)this,
              (__int64)v17);
      v4 = v15;
      if ( v15 >= 0 )
      {
        if ( *((_QWORD *)this + 1) == -1LL )
        {
          if ( *(_QWORD *)this )
          {
            do
              ++v12;
            while ( *(_WORD *)(*(_QWORD *)this + 2 * v12) );
          }
          else
          {
            v12 = 0LL;
          }
          *((_QWORD *)this + 1) = v12;
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
        v48 = 0LL;
        v19 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v44 + 120LL))(
                v44,
                &v48);
        v4 = v19;
        if ( v19 >= 0 )
        {
          v47 = 0LL;
          v20 = (**v48)(v48, &GUID_876be83b_7218_5bfb_a169_83152ef7e146, &v47);
          v4 = v20;
          if ( v20 >= 0 )
          {
            v43 = 0LL;
            v21 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v47 + 48LL))(v47, &v43);
            v4 = v21;
            if ( v21 >= 0 )
            {
              v24 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v43 + 56LL))(v43, v40);
              v4 = v24;
              if ( v24 >= 0 )
              {
                while ( v40[0] )
                {
                  v41 = 0LL;
                  v25 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v43 + 48LL))(v43, &v41);
                  v4 = v25;
                  if ( v25 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x49,
                      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
                      (const char *)(unsigned int)v25);
                    goto LABEL_66;
                  }
                  v45 = 0LL;
                  v46 = 0LL;
                  v26 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v41 + 48LL))(v41, &v45);
                  v4 = v26;
                  if ( v26 < 0 )
                  {
                    v31 = 77LL;
LABEL_61:
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v31,
                      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
                      (const char *)(unsigned int)v26);
                    if ( v46 )
                      WindowsDeleteString(v46);
                    if ( v45 )
                      WindowsDeleteString(v45);
LABEL_66:
                    v32 = v41;
                    if ( v41 )
                    {
                      v41 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
                    }
                    goto LABEL_72;
                  }
                  v26 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v41 + 56LL))(v41, &v46);
                  v4 = v26;
                  if ( v26 < 0 )
                  {
                    v31 = 78LL;
                    goto LABEL_61;
                  }
                  v27 = WindowsGetStringRawBuffer(v46, 0LL);
                  v28 = WindowsGetStringRawBuffer(v45, 0LL);
                  v26 = CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser::SetUriParam(this, v28, v27);
                  v4 = v26;
                  if ( v26 < 0 )
                  {
                    v31 = 79LL;
                    goto LABEL_61;
                  }
                  v26 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v43 + 64LL))(v43, v40);
                  v4 = v26;
                  if ( v26 < 0 )
                  {
                    v31 = 81LL;
                    goto LABEL_61;
                  }
                  if ( v46 )
                    WindowsDeleteString(v46);
                  if ( v45 )
                    WindowsDeleteString(v45);
                  v29 = v41;
                  if ( v41 )
                  {
                    v41 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
                  }
                }
                if ( *(_QWORD *)this && **(_WORD **)this )
                {
                  v30 = (_WORD *)*((_QWORD *)this + 3);
                  if ( v30 && *v30 )
                  {
                    v4 = 0;
                    goto LABEL_72;
                  }
                  v23 = 86LL;
                }
                else
                {
                  v23 = 85LL;
                }
                v4 = -2147024809;
                v22 = 2147942487LL;
              }
              else
              {
                v22 = (unsigned int)v24;
                v23 = 69LL;
              }
            }
            else
            {
              v22 = (unsigned int)v21;
              v23 = 67LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v23,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
              (const char *)v22);
LABEL_72:
            v33 = v43;
            if ( v43 )
            {
              v43 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x40,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
              (const char *)(unsigned int)v20);
          }
          v34 = v47;
          if ( v47 )
          {
            v47 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3E,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
            (const char *)(unsigned int)v19);
        }
        v35 = v48;
        if ( v48 )
        {
          v48 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v35)[2])(v35);
        }
        goto LABEL_78;
      }
      v16 = 57LL;
    }
    else
    {
      v16 = 56LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
      (const char *)(unsigned int)v15);
LABEL_78:
    if ( v50 )
      WindowsDeleteString(v50);
    goto LABEL_80;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2A,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
    (const char *)(unsigned int)v7);
LABEL_86:
  v37 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
LABEL_88:
  v38 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v38)[2])(v38);
  }
  return v4;
}
