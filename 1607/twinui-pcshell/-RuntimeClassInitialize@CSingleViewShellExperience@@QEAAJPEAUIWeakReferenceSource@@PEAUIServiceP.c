/*
 * XREFs of ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18001B8D4
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800102D4 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180008DD8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180014E14 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z @ 0x18001BD40 (-RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z.c)
 *     ?RegisterSessionIdleDetector@CSingleViewShellExperience@@AEAAJPEAK@Z @ 0x18001BEE0 (-RegisterSessionIdleDetector@CSingleViewShellExperience@@AEAAJPEAK@Z.c)
 *     ?RegisterForImmersiveWindowMessages@CSingleViewShellExperience@@AEAAJPEAK@Z @ 0x18001C138 (-RegisterForImmersiveWindowMessages@CSingleViewShellExperience@@AEAAJPEAK@Z.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::RuntimeClassInitialize(
        HSTRING *newString,
        struct IWeakReferenceSource *a2,
        struct IServiceProvider *a3,
        HSTRING a4,
        HSTRING string)
{
  HSTRING *v9; // r15
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rdx
  unsigned __int64 v13; // r9
  HSTRING *v15; // rbx
  HRESULT v16; // eax
  unsigned int v17; // esi
  HSTRING v18; // rbx
  HSTRING v19; // rcx
  __int64 v20; // rcx
  HSTRING v21; // rcx
  HSTRING v22; // rdx
  HSTRING v23; // rbx
  HSTRING v24; // rcx
  __int64 v25; // rcx
  HRESULT v26; // eax
  HSTRING *v27; // rsi
  HSTRING v28; // rcx
  int v29; // eax
  wil::details::in1diag3 *v30; // rcx
  __int64 v31; // rdx
  HSTRING v32; // rcx
  HSTRING v33; // rcx
  HSTRING v34; // rcx
  HSTRING v35; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v36[2]; // [rsp+38h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-30h] BYREF
  HSTRING v38; // [rsp+60h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]

  v36[1] = -2LL;
  v9 = newString + 1;
  if ( !a4 || a4 != *v9 )
  {
    WindowsDeleteString(*v9);
    *v9 = 0LL;
    v10 = WindowsDuplicateString(a4, v9);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 71LL;
LABEL_5:
      v13 = (unsigned int)v10;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)v13);
      return (unsigned int)v11;
    }
  }
  v15 = newString + 2;
  if ( !string || string != *v15 )
  {
    WindowsDeleteString(*v15);
    *v15 = 0LL;
    v16 = WindowsDuplicateString(string, newString + 2);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x48,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v16);
      return v17;
    }
  }
  v18 = *v15;
  if ( !v18 || v18 != *newString )
  {
    WindowsDeleteString(*newString);
    *newString = 0LL;
    v10 = WindowsDuplicateString(v18, newString);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 73LL;
      goto LABEL_5;
    }
  }
  v19 = newString[12];
  newString[12] = 0LL;
  if ( v19 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v19 + 16LL))(v19);
  v36[0] = 0LL;
  v11 = ((__int64 (__fastcall *)(struct IWeakReferenceSource *, GUID *, _QWORD *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_00000038_0000_0000_c000_000000000046,
          v36);
  v20 = v36[0];
  if ( v11 < 0 )
    goto LABEL_18;
  v35 = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, HSTRING *))(*(_QWORD *)v36[0] + 24LL))(v36[0], &v35);
  if ( v11 < 0 )
  {
    v21 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v20 = v36[0];
LABEL_18:
    if ( v20 )
    {
      v36[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    goto LABEL_33;
  }
  v22 = v35;
  v23 = v35;
  if ( v35 )
  {
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v35 + 8LL))(v35);
    v22 = v35;
  }
  v24 = newString[12];
  newString[12] = v23;
  if ( v24 )
  {
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v24 + 16LL))(v24);
    v22 = v35;
  }
  if ( v22 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v25 = v36[0];
  if ( v36[0] )
  {
    v36[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v11 = 0;
LABEL_33:
  if ( v11 < 0 )
  {
    v13 = (unsigned int)v11;
    v12 = 75LL;
    goto LABEL_6;
  }
  v38 = 0LL;
  v26 = WindowsCreateStringReference(L"Windows.Foundation.Collections.PropertySet", 0x2Au, &hstringHeader, &v38);
  if ( v26 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v26);
    __debugbreak();
  }
  v10 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
          (__int64)v38,
          (__int64 *)newString + 5);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 78LL;
    goto LABEL_5;
  }
  v27 = newString + 13;
  v28 = newString[13];
  if ( v28 )
  {
    *v27 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v28 + 16LL))(v28);
  }
  v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, HSTRING *))a3->lpVtbl->QueryService)(
          a3,
          &GUID_be47f3f2_56c0_40dd_a5ad_ba88325ea0ce,
          &GUID_69bb2711_c5f2_41da_8d6d_448a336a24c5,
          newString + 13);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 80LL;
    goto LABEL_5;
  }
  v10 = CSingleViewShellExperience::RegisterAumid(
          (CSingleViewShellExperience *)newString,
          *v9,
          (struct EventRegistrationToken *)newString + 16);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 82LL;
    goto LABEL_5;
  }
  if ( (*((_BYTE *)newString + 156) & 4) == 0 )
    goto LABEL_53;
  v35 = 0LL;
  v29 = (**(__int64 (__fastcall ***)(HSTRING, GUID *, HSTRING *))*v27)(
          *v27,
          &GUID_b18447e2_209d_43d3_add5_a3434f4d558b,
          &v35);
  v30 = retaddr;
  if ( v29 >= 0 )
  {
    v29 = (*(__int64 (__fastcall **)(HSTRING, HSTRING))(*(_QWORD *)v35 + 48LL))(v35, newString[16]);
    v30 = retaddr;
    if ( v29 >= 0 )
      goto LABEL_51;
    v31 = 91LL;
  }
  else
  {
    v31 = 89LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v30,
    (void *)v31,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v29);
LABEL_51:
  v32 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v32 + 16LL))(v32);
  }
LABEL_53:
  if ( (*((_BYTE *)newString + 156) & 1) != 0 )
  {
    v33 = newString[14];
    if ( v33 )
    {
      newString[14] = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v33 + 16LL))(v33);
    }
    v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, HSTRING *))a3->lpVtbl->QueryService)(
            a3,
            &IID_IImmersiveSessionIdleDetector,
            &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
            newString + 14);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 99LL;
      goto LABEL_5;
    }
    v10 = CSingleViewShellExperience::RegisterSessionIdleDetector(
            (CSingleViewShellExperience *)newString,
            (unsigned int *)newString + 36);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 100LL;
      goto LABEL_5;
    }
  }
  v34 = newString[15];
  if ( v34 )
  {
    newString[15] = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v34 + 16LL))(v34);
  }
  v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, HSTRING *))a3->lpVtbl->QueryService)(
          a3,
          &IID_IImmersiveWindowMessageService,
          &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
          newString + 15);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 103LL;
    goto LABEL_5;
  }
  v10 = CSingleViewShellExperience::RegisterForImmersiveWindowMessages(
          (CSingleViewShellExperience *)newString,
          (unsigned int *)newString + 37);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 104LL;
    goto LABEL_5;
  }
  return 0LL;
}
