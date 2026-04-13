/*
 * XREFs of ?ActivateHelper@NotificationsTargetedContentClient@ToastNotification@@AEAAJPEBG0@Z @ 0x18003F8E0
 * Callers:
 *     ?Activate@NotificationsTargetedContentClient@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x18003F8B0 (-Activate@NotificationsTargetedContentClient@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001DF5C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x18002C240 (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K@Z @ 0x18002C3CC (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KPEBG_K@Z.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18002EA70 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x18002FD9C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ??$GetActivationFactory@UITargetedContentContainerStatics@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentContainerStatics@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004001C (--$GetActivationFactory@UITargetedContentContainerStatics@TargetedContent@Services@Windows@@@wil.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180040424 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180040758 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall ToastNotification::NotificationsTargetedContentClient::ActivateHelper(
        ToastNotification::NotificationsTargetedContentClient *this,
        const unsigned __int16 *a2,
        char *a3)
{
  unsigned __int64 v4; // r8
  void **v5; // rbx
  void **v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rsi
  const WCHAR *v9; // rax
  HSTRING_HEADER *v10; // rbx
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rdi
  const WCHAR *v14; // rax
  __int64 v15; // rbx
  HSTRING_HEADER *v16; // rdi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  int v23[2]; // [rsp+28h] [rbp-99h] BYREF
  __int64 v24; // [rsp+30h] [rbp-91h] BYREF
  __int64 v25; // [rsp+38h] [rbp-89h] BYREF
  __int64 v26; // [rsp+40h] [rbp-81h] BYREF
  __int64 v27; // [rsp+48h] [rbp-79h] BYREF
  __int64 v28; // [rsp+50h] [rbp-71h] BYREF
  const WCHAR *v29; // [rsp+58h] [rbp-69h] BYREF
  _QWORD v30[3]; // [rsp+60h] [rbp-61h] BYREF
  void *v31[2]; // [rsp+78h] [rbp-49h] BYREF
  __int64 v32; // [rsp+88h] [rbp-39h]
  unsigned __int64 v33; // [rsp+90h] [rbp-31h]
  void *v34[2]; // [rsp+98h] [rbp-29h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-19h]
  unsigned __int64 v36; // [rsp+B0h] [rbp-11h]
  void *v37[3]; // [rsp+B8h] [rbp-9h] BYREF
  unsigned __int64 v38; // [rsp+D0h] [rbp+Fh]
  HSTRING_HEADER v39; // [rsp+D8h] [rbp+17h] BYREF
  unsigned __int64 v40; // [rsp+F0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v30[1] = -2LL;
  v36 = 7LL;
  v35 = 0LL;
  LOWORD(v34[0]) = 0;
  v33 = 7LL;
  v32 = 0LL;
  LOWORD(v31[0]) = 0;
  v38 = 7LL;
  v37[2] = 0LL;
  LOWORD(v37[0]) = 0;
  if ( *(_WORD *)a3 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *(_WORD *)&a3[2 * v4] );
  }
  else
  {
    v4 = 0LL;
  }
  std::wstring::assign(v37, a3, v4);
  std::wstring::find((char *)v37, L"cId=");
  std::wstring::find((char *)v37, L"path=");
  v5 = (void **)std::wstring::substr((__int64)v37, &v39);
  if ( v31 != v5 )
  {
    v33 = 7LL;
    v32 = 0LL;
    LOWORD(v31[0]) = 0;
    std::wstring::_Assign_rv(v31, v5);
  }
  if ( v40 >= 8 )
    operator delete(v39.Reserved.Reserved1);
  v6 = (void **)std::wstring::substr((__int64)v37, &v39);
  if ( v34 != v6 )
  {
    if ( v36 >= 8 )
      operator delete(v34[0]);
    v36 = 7LL;
    v35 = 0LL;
    LOWORD(v34[0]) = 0;
    std::wstring::_Assign_rv(v34, v6);
  }
  if ( v40 >= 8 )
    operator delete(v39.Reserved.Reserved1);
  if ( v38 >= 8 )
    operator delete(v37[0]);
  v7 = (__int64 *)wil::GetActivationFactory<Windows::Services::TargetedContent::ITargetedContentContainerStatics>(v30);
  v8 = *v7;
  *v7 = 0LL;
  v30[2] = v8;
  if ( v30[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v30[0] + 16LL))(v30[0]);
  v24 = 0LL;
  v9 = (const WCHAR *)v31;
  if ( v33 >= 8 )
    v9 = (const WCHAR *)v31[0];
  v29 = v9;
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v39, &v29);
  v24 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v8 + 48LL))(
          v8,
          v10[1].Reserved.Reserved1,
          &v24);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_51;
  }
  v28 = 0LL;
  v13 = v24;
  v12 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer *> *>(v24);
  if ( v12 >= 0 )
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 64LL))(v13, &v28);
  if ( v12 >= 0 )
  {
    *(_QWORD *)v23 = 0LL;
    v14 = (const WCHAR *)v34;
    if ( v36 >= 8 )
      v14 = (const WCHAR *)v34[0];
    v29 = v14;
    v15 = v28;
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v39, &v29);
    *(_QWORD *)v23 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64, PVOID, int *))(*(_QWORD *)v15 + 80LL))(
            v15,
            v16[1].Reserved.Reserved1,
            v23);
    v12 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x31,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v17);
LABEL_47:
      if ( *(_QWORD *)v23 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v23 + 16LL))(*(_QWORD *)v23);
      goto LABEL_49;
    }
    v27 = 0LL;
    v18 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)v23 + 72LL))(*(_QWORD *)v23, &v27);
    v12 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x34,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v18);
LABEL_45:
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      goto LABEL_47;
    }
    v26 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 112LL))(v27, &v26);
    v12 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x37,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v19);
LABEL_43:
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      goto LABEL_45;
    }
    v25 = 0LL;
    v20 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 48LL))(v26, &v25);
    v12 = v20;
    if ( v20 >= 0 )
    {
      v20 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v25);
      v12 = v20;
      if ( v20 >= 0 )
      {
        v12 = 0;
LABEL_41:
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        goto LABEL_43;
      }
      v21 = 59LL;
    }
    else
    {
      v21 = 58LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v21,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v20);
    goto LABEL_41;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x2E,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
    (const char *)(unsigned int)v12);
LABEL_49:
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
LABEL_51:
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v33 >= 8 )
    operator delete(v31[0]);
  v33 = 7LL;
  v32 = 0LL;
  LOWORD(v31[0]) = 0;
  if ( v36 >= 8 )
    operator delete(v34[0]);
  return (unsigned int)v12;
}
