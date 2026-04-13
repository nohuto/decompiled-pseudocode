/*
 * XREFs of ?HasKey@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEA_N@Z @ 0x18004DE7C
 * Callers:
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x18004C6CC (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VISettingsContai.c)
 *     ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x18004CEA8 (-GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@Cr.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_f0651c15f0b053a524abcb6a15370925___ @ 0x18004E128 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__lambda_f0651.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_32632dfdfd926559a6510a11dedcbccd___ @ 0x18004F110 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__lambda_32632.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001DF5C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::HasKey(
        _QWORD *a1,
        const WCHAR *a2,
        bool *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  HSTRING_HEADER *v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  _BYTE v11[8]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v12; // [rsp+28h] [rbp-50h] BYREF
  const WCHAR *v13[3]; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v14; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v13[1] = (const WCHAR *)-2LL;
  v13[0] = a2;
  *a3 = 0;
  v12 = 0LL;
  v4 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
         *a1,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v12);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v13[2] = 0LL;
    v6 = v12;
    v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v14, v13);
    v8 = (*(__int64 (__fastcall **)(__int64, PVOID, _BYTE *))(*(_QWORD *)v6 + 64LL))(v6, v7[1].Reserved.Reserved1, v11);
    v5 = v8;
    if ( v8 >= 0 )
    {
      *a3 = v11[0] != 0;
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xBB,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
        (const char *)(unsigned int)v8);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xB8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v4);
  }
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v5;
}
