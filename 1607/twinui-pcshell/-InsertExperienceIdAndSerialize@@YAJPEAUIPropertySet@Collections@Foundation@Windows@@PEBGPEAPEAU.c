/*
 * XREFs of ?InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUIBuffer@Streams@Storage@4@@Z @ 0x180029314
 * Callers:
 *     ??$ActivateExperienceWithPropertySetCore@V_lambda_8bd04181e3f7733dc8d539cb679ff25f_@@@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@AEBV_lambda_8bd04181e3f7733dc8d539cb679ff25f_@@@Z @ 0x180029B20 (--$ActivateExperienceWithPropertySetCore@V_lambda_8bd04181e3f7733dc8d539cb679ff25f_@@@@YAJPEBGPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014EC4 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?SetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z @ 0x180028F88 (-SetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall InsertExperienceIdAndSerialize(
        struct Windows::Foundation::Collections::IPropertySet *a1,
        const unsigned __int16 *a2,
        struct Windows::Storage::Streams::IBuffer **a3)
{
  struct Windows::Foundation::Collections::IPropertySet *v6; // rbx
  HSTRING_HEADER *v7; // rbx
  HSTRING_HEADER *v8; // rax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-39h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v16; // [rsp+28h] [rbp-31h] BYREF
  const WCHAR *v17[2]; // [rsp+30h] [rbp-29h] BYREF
  HSTRING_HEADER v18; // [rsp+40h] [rbp-19h] BYREF
  HSTRING_HEADER v19; // [rsp+60h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v17[1] = (const WCHAR *)-2LL;
  v17[0] = a2;
  *a3 = 0LL;
  v6 = a1;
  v16 = a1;
  if ( a1 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a1 + 8LL))(a1);
  if ( a2 )
  {
    v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v18, v17);
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v19, (const WCHAR **)&off_1800342A0);
    v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetString(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v16,
           (HSTRING)v8[1].Reserved.Reserved1,
           (HSTRING)v7[1].Reserved.Reserved1);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x46,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
        (const char *)(unsigned int)v9);
      v6 = v16;
      goto LABEL_13;
    }
    v6 = v16;
  }
  v15 = 0LL;
  v11 = RoCreatePropertySetSerializer(&v15);
  v10 = v11;
  if ( v11 >= 0 )
  {
    v17[0] = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet *, struct Windows::Storage::Streams::IBuffer **))(*(_QWORD *)v15 + 48LL))(
            v15,
            a1,
            a3);
    v10 = v12;
    if ( v12 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
        (const char *)(unsigned int)v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v11);
  }
  v13 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
LABEL_13:
  if ( v6 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v6 + 16LL))(v6);
  return v10;
}
