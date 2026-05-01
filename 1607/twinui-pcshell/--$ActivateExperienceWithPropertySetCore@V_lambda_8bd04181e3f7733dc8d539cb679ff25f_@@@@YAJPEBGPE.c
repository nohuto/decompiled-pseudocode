/*
 * XREFs of ??$ActivateExperienceWithPropertySetCore@V_lambda_8bd04181e3f7733dc8d539cb679ff25f_@@@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@AEBV_lambda_8bd04181e3f7733dc8d539cb679ff25f_@@@Z @ 0x180029B20
 * Callers:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x180029488 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180008DD8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z @ 0x18000CEAC (-SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180014E14 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014EC4 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CoCreateActivationManagerAndSetProperties@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIApplicationActivationManagerPriv@@@Z @ 0x180029230 (-CoCreateActivationManagerAndSetProperties@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIAppl.c)
 *     ?InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUIBuffer@Streams@Storage@4@@Z @ 0x180029314 (-InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAU.c)
 *     ??$Make@VCImmersiveWindowFactory@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveWindowFactory@@@12@XZ @ 0x18002A1D8 (--$Make@VCImmersiveWindowFactory@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCImmersiveWindowFactory.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ActivateExperienceWithPropertySetCore<_lambda_8bd04181e3f7733dc8d539cb679ff25f_>(
        unsigned __int16 *a1,
        __int64 a2,
        char a3,
        __int64 a4)
{
  HRESULT v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  __int64 v12; // r14
  int inserted; // eax
  int v14; // eax
  struct IApplicationActivationManagerPriv *v15; // r12
  int v16; // esi
  char *v17; // rdi
  HSTRING_HEADER *v18; // rbx
  HSTRING_HEADER *v19; // rax
  int v20; // eax
  int v21; // edi
  struct Windows::Storage::Streams::IBuffer *v22; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v23; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v24; // rcx
  struct Windows::Storage::Streams::IBuffer *v26; // [rsp+48h] [rbp-59h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v27; // [rsp+50h] [rbp-51h] BYREF
  struct IApplicationActivationManagerPriv *v28; // [rsp+58h] [rbp-49h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v29; // [rsp+60h] [rbp-41h] BYREF
  __int64 v30; // [rsp+68h] [rbp-39h] BYREF
  char v31; // [rsp+70h] [rbp-31h] BYREF
  __int64 v32; // [rsp+78h] [rbp-29h]
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-21h] BYREF
  HSTRING string; // [rsp+98h] [rbp-9h] BYREF
  HSTRING_HEADER v35; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v36; // [rsp+B8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v32 = -2LL;
  v27 = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v7 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
  v8 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         (__int64)string,
         (__int64 *)&v27);
  v9 = v8;
  string = 0LL;
  if ( v8 >= 0 )
  {
    v29 = v27;
    if ( v27 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v27 + 8LL))(v27);
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_180034298);
    v11 = Windows::Internal::ShellHelpers::PropertySetHelper::SetBoolean(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
            (HSTRING)v10[1].Reserved.Reserved1,
            a3 & 1);
    v9 = v11;
    string = 0LL;
    if ( v11 >= 0 )
    {
      Microsoft::WRL::Details::Make<CImmersiveWindowFactory>(&v30);
      v12 = v30;
      if ( v30 )
      {
        *(_BYTE *)(v30 + 73) = a3 & 1;
        v26 = 0LL;
        inserted = InsertExperienceIdAndSerialize(v27, a1, &v26);
        v9 = inserted;
        if ( inserted >= 0 )
        {
          v28 = 0LL;
          v14 = CoCreateActivationManagerAndSetProperties(v26, &v28);
          v9 = v14;
          v15 = v28;
          if ( v14 >= 0 )
          {
            v16 = 16777222;
            if ( (a3 & 2) != 0 )
              v16 = 16908294;
            if ( (a3 & 4) != 0 )
              v16 |= 0x8000000u;
            if ( (a3 & 8) != 0 )
              v16 &= ~4u;
            v17 = &v31;
            if ( *(_QWORD *)(a4 + 24) )
              v17 = *(char **)(a4 + 24);
            v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v35, (const WCHAR **)(a4 + 8));
            v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)a4);
            v20 = (*(__int64 (__fastcall **)(struct IApplicationActivationManagerPriv *, PVOID, __int64, PVOID, _QWORD, int, char *))(*(_QWORD *)v15 + 32LL))(
                    v15,
                    v19[1].Reserved.Reserved1,
                    v12,
                    v18[1].Reserved.Reserved1,
                    *(_QWORD *)(a4 + 16),
                    v16,
                    v17);
            v21 = v20;
            string = 0LL;
            v36 = 0LL;
            if ( v20 < 0 )
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xE0,
                (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
                (const char *)(unsigned int)v20);
            v9 = -2144927150;
            if ( v21 != -2144927150 )
            {
              v9 = -2144927149;
              if ( v21 != -2144927149 )
              {
                if ( v21 < 0 )
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x97,
                    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
                    (const char *)(unsigned int)v21);
                v9 = v21;
              }
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x7A,
              (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
              (const char *)(unsigned int)v14);
          }
          if ( v15 )
          {
            v28 = 0LL;
            (*(void (__fastcall **)(struct IApplicationActivationManagerPriv *))(*(_QWORD *)v15 + 16LL))(v15);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x77,
            (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
            (const char *)(unsigned int)inserted);
        }
        v22 = v26;
        if ( v26 )
        {
          v26 = 0LL;
          (*(void (__fastcall **)(struct Windows::Storage::Streams::IBuffer *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
      else
      {
        v9 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x73,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
          (const char *)0x8007000ELL);
      }
      if ( v12 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6F,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
        (const char *)(unsigned int)v11);
    }
    v23 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v8);
  }
  v24 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v24 + 16LL))(v24);
  }
  return v9;
}
