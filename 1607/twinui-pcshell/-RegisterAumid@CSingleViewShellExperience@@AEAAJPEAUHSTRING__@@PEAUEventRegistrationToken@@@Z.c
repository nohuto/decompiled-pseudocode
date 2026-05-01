/*
 * XREFs of ?RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z @ 0x18001BD40
 * Callers:
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18001B8D4 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18001C220 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180008DD8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAVShellExperienceDispatcher@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewStateChangedEventArgs@2345@@Foundation@Windows@@V_lambda_587ab2033dc5b1aed1eae36cec5be19f_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVShellExperienceDispatcher@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewStateChangedEventArgs@2345@@Foundation@Windows@@@01@V_lambda_587ab2033dc5b1aed1eae36cec5be19f_@@@Z @ 0x18001F180 (--$Callback@U-$ITypedEventHandler@PEAVShellExperienceDispatcher@Experience@Shell@Internal@Window.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSingleViewShellExperience::RegisterAumid(
        CSingleViewShellExperience *this,
        HSTRING a2,
        struct EventRegistrationToken *a3)
{
  char v6; // si
  __int64 v7; // rbx
  HRESULT v8; // eax
  HSTRING v9; // rax
  HSTRING v10; // r14
  int v11; // esi
  __int64 v12; // r15
  _QWORD *v13; // rax
  int v14; // edi
  __int64 v15; // rcx
  __int64 v17; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v18[4]; // [rsp+50h] [rbp-21h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-1h] BYREF
  HSTRING string; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v18[2] = -2LL;
  v6 = 0;
  LODWORD(v17) = 0;
  v7 = *((_QWORD *)this + 12);
  v18[3] = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  if ( (*((_BYTE *)this + 156) & 2) != 0 )
  {
    string = 0LL;
    v8 = WindowsCreateStringReference(L"ShellExperience", 0xFu, &hstringHeader, &string);
    if ( v8 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
      __debugbreak();
    }
    v6 = 1;
    v9 = string;
    v10 = string;
  }
  else
  {
    v10 = 0LL;
    v9 = string;
  }
  if ( (v6 & 1) != 0 )
    v9 = 0LL;
  string = v9;
  v11 = (*((_DWORD *)this + 39) >> 3) & 1;
  v12 = *((_QWORD *)this + 13);
  v18[0] = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v18[1] = this;
  v13 = (_QWORD *)Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ShellExperienceDispatcher *,Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *>,_lambda_587ab2033dc5b1aed1eae36cec5be19f_>(
                    &v17,
                    v18);
  v14 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, _QWORD, int, _QWORD, struct EventRegistrationToken *))(*(_QWORD *)v12 + 48LL))(
          v12,
          a2,
          v10,
          *((_QWORD *)this + 2),
          v11,
          *v13,
          a3);
  v15 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( v14 >= 0 )
    v14 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x85,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v14);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v14;
}
