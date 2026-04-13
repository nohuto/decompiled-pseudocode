/*
 * XREFs of ?SetString@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Triggers@CreativeFramework@@QEAAJPEBG0@Z @ 0x180024914
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x180020834 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180017038 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&unsigned short const near * const RuntimeClass_Windows_Foundation_Collections_ValueSet>::SetString(
        __int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rbx
  HSTRING_HEADER *v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  HSTRING_HEADER *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  _BYTE v15[8]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v16; // [rsp+40h] [rbp-21h] BYREF
  __int64 v17; // [rsp+48h] [rbp-19h] BYREF
  const WCHAR *v18; // [rsp+50h] [rbp-11h] BYREF
  const WCHAR *v19[2]; // [rsp+58h] [rbp-9h] BYREF
  HSTRING_HEADER v20; // [rsp+68h] [rbp+7h] BYREF
  __int64 v21; // [rsp+80h] [rbp+1Fh]
  HSTRING_HEADER v22; // [rsp+88h] [rbp+27h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v19[1] = (const WCHAR *)-2LL;
  v18 = L"ProcessTrigger";
  v19[0] = L"Request";
  v2 = *(_DWORD *)(a1 + 16);
  if ( (v2 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)v2);
    return v2;
  }
  v16 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, &v18);
  v5 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v3 + 144LL))(
         v3,
         v4[1].Reserved.Reserved1,
         &v16);
  v2 = v5;
  v21 = 0LL;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v5);
LABEL_5:
    v6 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return v2;
  }
  v15[0] = 0;
  v17 = 0LL;
  v7 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1)(
         *(_QWORD *)a1,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v17);
  v2 = v7;
  if ( v7 < 0 )
  {
    v8 = 232LL;
    goto LABEL_9;
  }
  v10 = v17;
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, v19);
  v7 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64, _BYTE *))(*(_QWORD *)v10 + 80LL))(
         v10,
         v11[1].Reserved.Reserved1,
         v16,
         v15);
  v2 = v7;
  v23 = 0LL;
  if ( v7 < 0 )
  {
    v8 = 233LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v7);
    v9 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    goto LABEL_5;
  }
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
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
