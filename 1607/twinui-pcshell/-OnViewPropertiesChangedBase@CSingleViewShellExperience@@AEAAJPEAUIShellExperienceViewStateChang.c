/*
 * XREFs of ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18001D120
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18001C808 (-OnViewStateChanged@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180008DD8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18000CCAC (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ??IRoVariant@@QEAA?AVOutRef@0@XZ @ 0x18000CDB0 (--IRoVariant@@QEAA-AVOutRef@0@XZ.c)
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18001D86C (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSingleViewShellExperience::OnViewPropertiesChangedBase(
        CSingleViewShellExperience *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rbx
  _QWORD *v11; // rsi
  HRESULT v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // esi
  int v16; // eax
  __int64 v17; // rbx
  _QWORD *v18; // r15
  HRESULT v19; // eax
  int v20; // eax
  int v21; // ebx
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD v26[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v27; // [rsp+30h] [rbp-50h] BYREF
  __int64 v28; // [rsp+38h] [rbp-48h] BYREF
  int v29; // [rsp+40h] [rbp-40h]
  __int64 v30; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v30 = -2LL;
  v26[0] = 0LL;
  v3 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, _QWORD *))(*(_QWORD *)a2 + 72LL))(
         a2,
         v26);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = (unsigned int)v3;
    v6 = 708LL;
    goto LABEL_5;
  }
  if ( !v26[0] )
  {
    v4 = -2147467259;
    v5 = 2147500037LL;
    v6 = 710LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v5);
    v7 = v26[0];
    if ( v26[0] )
    {
      v26[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return v4;
  }
  v8 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = v26[0];
  if ( v8 )
  {
    v26[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v27 = 0LL;
  v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 5))(
         *((_QWORD *)this + 5),
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v27);
  v4 = v9;
  if ( v9 >= 0 )
  {
    v28 = 0LL;
    v29 = 0;
    *((_DWORD *)this + 13) = 0;
    *((_DWORD *)this + 14) = 0;
    v10 = v27;
    v11 = RoVariant::operator&((__int64)&v28, v26);
    string = 0LL;
    v12 = WindowsCreateStringReference(L"desiredSize", 0xBu, &hstringHeader, &string);
    if ( v12 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
    v13 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD *))(*(_QWORD *)v10 + 48LL))(v10, string, v11 + 1);
    v14 = v13;
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2D2,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v13);
    string = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)v26);
    v15 = -2147467261;
    if ( v14 >= 0 )
    {
      if ( this == (CSingleViewShellExperience *)-52LL )
      {
        v16 = -2147467261;
      }
      else
      {
        v26[0] = 0LL;
        *(_QWORD *)((char *)this + 52) = 0LL;
        if ( v29 == 7 )
        {
          v16 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v28 + 192LL))(v28, (char *)this + 52);
        }
        else
        {
          v16 = -2147316576;
          if ( v29 < 0 )
            v16 = v29;
        }
      }
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2D4,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v16);
    }
    *((_BYTE *)this + 60) = 0;
    v17 = v27;
    v18 = RoVariant::operator&((__int64)&v28, v26);
    string = 0LL;
    v19 = WindowsCreateStringReference(L"fullScreen", 0xAu, &hstringHeader, &string);
    if ( v19 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v19);
    v20 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD *))(*(_QWORD *)v17 + 48LL))(v17, string, v18 + 1);
    v21 = v20;
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2D8,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v20);
    string = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)v26);
    if ( v21 >= 0 )
    {
      if ( this != (CSingleViewShellExperience *)-60LL )
      {
        *((_BYTE *)this + 60) = 0;
        if ( v29 == 7 )
        {
          v15 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v28 + 144LL))(v28, (char *)this + 60);
        }
        else
        {
          v15 = -2147316576;
          if ( v29 < 0 )
            v15 = v29;
        }
      }
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2DA,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v15);
    }
    (*(void (__fastcall **)(_QWORD, CSingleViewShellExperience *))(**((_QWORD **)this + 11) + 16LL))(
      *((_QWORD *)this + 11),
      this);
    if ( !*((_DWORD *)this + 12) && *((_QWORD *)this + 4) )
    {
      *((_DWORD *)this + 12) = 1;
      v22 = *((_DWORD *)this + 18);
      v23 = (*((_BYTE *)this + 76) & 1) != 0;
      if ( (*((_BYTE *)this + 76) & 2) != 0 )
        v23 = (unsigned int)v23 | 2;
      if ( (*((_BYTE *)this + 76) & 4) != 0 )
        v23 = (unsigned int)v23 | 4;
      *((_QWORD *)this + 9) = 0LL;
      if ( v22 == 1 )
        CSingleViewShellExperience::ShowViewAsync(this, v23);
    }
    v4 = 0;
    if ( v28 && ((v29 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v28 + 16LL))();
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CB,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v9);
  }
  v24 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  return v4;
}
