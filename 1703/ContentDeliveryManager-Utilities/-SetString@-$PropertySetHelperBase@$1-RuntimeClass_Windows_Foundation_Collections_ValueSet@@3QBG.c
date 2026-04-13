/*
 * XREFs of ?SetString@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Triggers@CreativeFramework@@QEAAJPEBG0@Z @ 0x18002BF90
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x1800292B4 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 *     ?SetTriggerAsExecuted@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18004C874 (-SetTriggerAsExecuted@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsCont.c)
 *     ?SetStringValue@Internal@TargetedContent@Services@Windows@@YAXAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAUHSTRING__@@@Z @ 0x18004D454 (-SetStringValue@Internal@TargetedContent@Services@Windows@@YAXAEAVPropertySetHelper@Triggers@Cre.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001DF5C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&unsigned short const near * const RuntimeClass_Windows_Foundation_Collections_ValueSet>::SetString(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rbx
  HSTRING_HEADER *v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  HSTRING_HEADER *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _BYTE v17[8]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v18; // [rsp+40h] [rbp-31h] BYREF
  __int64 v19; // [rsp+48h] [rbp-29h] BYREF
  const WCHAR *v20; // [rsp+50h] [rbp-21h] BYREF
  const WCHAR *v21[2]; // [rsp+58h] [rbp-19h] BYREF
  HSTRING_HEADER v22; // [rsp+68h] [rbp-9h] BYREF
  __int64 v23; // [rsp+80h] [rbp+Fh]
  HSTRING_HEADER v24; // [rsp+88h] [rbp+17h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v21[1] = (const WCHAR *)-2LL;
  v20 = a3;
  v21[0] = a2;
  v4 = *(_DWORD *)(a1 + 16);
  if ( (v4 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x107,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)v4);
    return v4;
  }
  v18 = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, &v20);
  v7 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v5 + 144LL))(
         v5,
         v6[1].Reserved.Reserved1,
         &v18);
  v4 = v7;
  v23 = 0LL;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x10A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v7);
LABEL_5:
    v8 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return v4;
  }
  v17[0] = 0;
  v19 = 0LL;
  v9 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1)(
         *(_QWORD *)a1,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v19);
  v4 = v9;
  if ( v9 < 0 )
  {
    v10 = 270LL;
    goto LABEL_9;
  }
  v12 = v19;
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, v21);
  v9 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64, _BYTE *))(*(_QWORD *)v12 + 80LL))(
         v12,
         v13[1].Reserved.Reserved1,
         v18,
         v17);
  v4 = v9;
  v25 = 0LL;
  if ( v9 < 0 )
  {
    v10 = 271LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v9);
    v11 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_5;
  }
  v14 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return 0;
}
