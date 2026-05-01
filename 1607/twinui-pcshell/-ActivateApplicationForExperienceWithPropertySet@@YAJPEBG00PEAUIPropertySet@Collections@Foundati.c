/*
 * XREFs of ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x180029488
 * Callers:
 *     ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x18001C338 (-LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014EC4 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180018128 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??$ActivateExperienceWithPropertySetCore@V_lambda_8bd04181e3f7733dc8d539cb679ff25f_@@@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@AEBV_lambda_8bd04181e3f7733dc8d539cb679ff25f_@@@Z @ 0x180029B20 (--$ActivateExperienceWithPropertySetCore@V_lambda_8bd04181e3f7733dc8d539cb679ff25f_@@@@YAJPEBGPE.c)
 *     ??$WrapWithTask@V_lambda_5d878536394a9e5d6c15e6b3f5940618_@@@ComTaskPool@Internal@Windows@@SA?AV?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@$$QEAV_lambda_5d878536394a9e5d6c15e6b3f5940618_@@@Z @ 0x18002A514 (--$WrapWithTask@V_lambda_5d878536394a9e5d6c15e6b3f5940618_@@@ComTaskPool@Internal@Windows@@SA-AV.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x18002D35C (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ActivateApplicationForExperienceWithPropertySet(
        const unsigned __int16 *a1,
        const WCHAR *a2,
        unsigned __int16 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // eax
  const WCHAR *v9; // rcx
  int *v10; // rcx
  bool v11; // al
  unsigned int v12; // ebx
  IUnknown **v13; // rax
  __int64 v14; // r9
  int v15; // edi
  const WCHAR *v16; // rcx
  const WCHAR *v17; // rcx
  const WCHAR *v18; // rbx
  __int64 v19; // rdx
  int v20; // eax
  int *v21; // rcx
  const WCHAR *v23; // [rsp+30h] [rbp-D0h] BYREF
  int *v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  const WCHAR *v26; // [rsp+48h] [rbp-B8h] BYREF
  APTTYPE pAptType; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID pv[3]; // [rsp+58h] [rbp-A8h] BYREF
  const unsigned __int16 *v29; // [rsp+70h] [rbp-90h] BYREF
  const WCHAR **v30; // [rsp+78h] [rbp-88h]
  int *v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  APTTYPEQUALIFIER pAptQualifier; // [rsp+90h] [rbp-70h] BYREF
  PVOID v34; // [rsp+98h] [rbp-68h] BYREF
  PVOID Reserved1; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v36[4]; // [rsp+A8h] [rbp-58h] BYREF
  HSTRING_HEADER v37; // [rsp+C8h] [rbp-38h] BYREF
  HSTRING_HEADER v38; // [rsp+E8h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v36[2] = -2LL;
  v23 = a2;
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  v8 = ParseAppUserModelId(a1, 0LL, (unsigned __int16 **)pv);
  v9 = a1;
  if ( v8 >= 0 )
    v9 = (const WCHAR *)pv[0];
  v26 = v9;
  v24 = 0LL;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v37, &v26)[1].Reserved.Reserved1;
  v34 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v38, &v23)[1].Reserved.Reserved1;
  v10 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(int *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v36[0] = &v34;
  v36[1] = &Reserved1;
  v24 = 0LL;
  v11 = CoGetApartmentType(&pAptType, &pAptQualifier) >= 0 && (pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA);
  v12 = (v11 ? 64 : 32) | 1;
  v25 = 0;
  v23 = 0LL;
  v29 = (const unsigned __int16 *)v36;
  v30 = &v23;
  v31 = &v25;
  v13 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask<_lambda_5d878536394a9e5d6c15e6b3f5940618_>(&v26, &v29);
  v15 = Windows::Internal::ComTaskPool::RunTask(1, v12, 0, v14, *v13);
  v16 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( v15 < 0 )
    goto LABEL_21;
  v15 = v25;
  if ( v25 < 0 )
    goto LABEL_21;
  v17 = v23;
  v18 = v23;
  v36[3] = v23;
  if ( v23 )
  {
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v23 + 8LL))(v23);
    v17 = v23;
  }
  if ( v18 )
  {
    v15 = (*(__int64 (__fastcall **)(const WCHAR *, GUID *, int **))(*(_QWORD *)v18 + 24LL))(
            v18,
            &GUID_cf651713_cd08_4fd8_b697_a281b6544e2e,
            &v24);
    v17 = v23;
  }
  else
  {
    v24 = 0LL;
    v15 = -2147024809;
  }
  if ( v18 )
  {
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v18 + 16LL))(v18);
LABEL_21:
    v17 = v23;
  }
  if ( v17 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( v15 >= 0 )
  {
    v29 = a1;
    v30 = (const WCHAR **)L"Windows.Launch";
    v31 = v24;
    v32 = a6;
    v20 = ActivateExperienceWithPropertySetCore<_lambda_8bd04181e3f7733dc8d539cb679ff25f_>(a3);
    v15 = v20;
    if ( v20 >= 0 )
      goto LABEL_29;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE0,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v20);
    v19 = 194LL;
  }
  else
  {
    v19 = 185LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
    (const char *)(unsigned int)v15);
LABEL_29:
  v21 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(int *))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return (unsigned int)v15;
}
