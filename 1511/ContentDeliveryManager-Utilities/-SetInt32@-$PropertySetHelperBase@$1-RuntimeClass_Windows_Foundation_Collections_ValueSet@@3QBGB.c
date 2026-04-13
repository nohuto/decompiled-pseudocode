/*
 * XREFs of ?SetInt32@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Triggers@CreativeFramework@@QEAAJPEBGH@Z @ 0x1800128C8
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x18000FBE4 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800025D4 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180002640 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&unsigned short const near * const RuntimeClass_Windows_Foundation_Collections_ValueSet>::SetInt32(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  HRESULT v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rdi
  _BYTE v15[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v16; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v17[1] = -2LL;
  v4 = *(_DWORD *)(a1 + 16);
  if ( (v4 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      125LL,
      (__int64)"shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)v4);
    return v4;
  }
  v16 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(a1 + 8) + 80LL))(
         *(_QWORD *)(a1 + 8),
         a3,
         &v16);
  v4 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      128LL,
      (__int64)"shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v5);
LABEL_5:
    v6 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return v4;
  }
  v15[0] = 0;
  v17[0] = 0LL;
  v7 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))a1)(
         *(_QWORD *)a1,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         v17);
  v4 = v7;
  if ( v7 < 0 )
  {
    v8 = 132LL;
    goto LABEL_9;
  }
  v10 = v17[0];
  string = 0LL;
  v11 = WindowsCreateStringReference(L"TriggerId", 9u, &hstringHeader, &string);
  if ( v11 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
  v7 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v10 + 80LL))(v10, string, v16, v15);
  v4 = v7;
  string = 0LL;
  if ( v7 < 0 )
  {
    v8 = 134LL;
LABEL_9:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v8,
      (__int64)"shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v7);
    v9 = v17[0];
    if ( v17[0] )
    {
      v17[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    goto LABEL_5;
  }
  v12 = v17[0];
  if ( v17[0] )
  {
    v17[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return 0;
}
