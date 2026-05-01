/*
 * XREFs of ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x180027744
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800102D4 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180008DD8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
        ExperienceManagerUtils *this,
        struct IServiceProvider *a2,
        struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **a3)
{
  int v4; // eax
  int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rbx
  HRESULT v9; // eax
  int v10; // eax
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD); // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, struct IServiceProvider *); // rcx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, struct IServiceProvider *); // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, _QWORD); // rcx
  __int64 v17; // rcx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, _QWORD); // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, struct IServiceProvider *); // [rsp+38h] [rbp-48h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v21[1] = -2LL;
  v21[0] = 0LL;
  v4 = (*(__int64 (__fastcall **)(ExperienceManagerUtils *, GUID *, GUID *, _QWORD *))(*(_QWORD *)this + 24LL))(
         this,
         &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
         &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
         v21);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    v7 = 321LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)v6);
    goto LABEL_24;
  }
  v8 = v21[0];
  v19 = 0LL;
  string = 0LL;
  v9 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.Host", 0x25u, &hstringHeader, &string);
  if ( v9 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
  v10 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v8 + 48LL))(v8, string, &v19);
  v5 = v10;
  string = 0LL;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14A,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v10);
LABEL_7:
    v11 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD)))(*v11)[2])(v11);
    }
    goto LABEL_20;
  }
  v20 = 0LL;
  v12 = (**v19)(v19, &GUID_2410129c_64a0_4b85_9e61_12caec38d6ef, &v20);
  v5 = v12;
  if ( v12 < 0 )
  {
    v13 = 332LL;
    goto LABEL_11;
  }
  v12 = (**v20)(v20, &GUID_fdae1e57_9570_4461_bab5_532c0f899149, a2);
  v5 = v12;
  if ( v12 < 0 )
  {
    v13 = 333LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v12);
    v14 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct IServiceProvider *)))(*v14)[2])(v14);
    }
    goto LABEL_7;
  }
  v15 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct IServiceProvider *)))(*v15)[2])(v15);
  }
  v16 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD)))(*v16)[2])(v16);
  }
  v5 = 0;
LABEL_20:
  if ( v5 < 0 )
  {
    v6 = (unsigned int)v5;
    v7 = 322LL;
    goto LABEL_22;
  }
  v5 = 0;
LABEL_24:
  v17 = v21[0];
  if ( v21[0] )
  {
    v21[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)v5;
}
