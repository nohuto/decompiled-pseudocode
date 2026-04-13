/*
 * XREFs of CreativeFramework::Triggers::PropertySetHelperBase_&RuntimeClass_Windows_Foundation_Collections_PropertySet_::GetValue_HSTRING_______ptr64__lambda_1c1defa02a02766d33552de44ddbb30d___lambda_cc2d649c88b5efb424e949cbd08ec0ce___ @ 0x18004F674
 * Callers:
 *     ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x18004CEA8 (-GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@Cr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C50 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001DF5C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase__RuntimeClass_Windows_Foundation_Collections_PropertySet_::GetValue_HSTRING_______ptr64__lambda_1c1defa02a02766d33552de44ddbb30d___lambda_cc2d649c88b5efb424e949cbd08ec0ce___(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // ebx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  HSTRING_HEADER *v10; // rsi
  int v11; // eax
  __int64 v12; // rdx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-50h] BYREF
  __int64 v21; // [rsp+28h] [rbp-48h] BYREF
  __int64 v22; // [rsp+30h] [rbp-40h] BYREF
  const WCHAR *v23[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER v24; // [rsp+48h] [rbp-28h] BYREF
  __int64 v25; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v23[1] = (const WCHAR *)-2LL;
  v5 = *(_DWORD *)(a1 + 16);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x117,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v23[0] = a2;
  v22 = 0LL;
  v21 = 0LL;
  v7 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1)(
         *(_QWORD *)a1,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v21);
  v5 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xC5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v7);
LABEL_6:
    v8 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    goto LABEL_19;
  }
  v20 = 0LL;
  v9 = v21;
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, v23);
  v11 = (*(__int64 (__fastcall **)(__int64, PVOID, _QWORD))(*(_QWORD *)v9 + 48LL))(v9, v10[1].Reserved.Reserved1, &v20);
  v5 = v11;
  v25 = 0LL;
  if ( v11 < 0 )
  {
    v12 = 199LL;
    goto LABEL_10;
  }
  v11 = (**v20)(v20, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v22);
  v5 = v11;
  if ( v11 < 0 )
  {
    v12 = 200LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v12,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v11);
    v13 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v13)[2])(v13);
    }
    goto LABEL_6;
  }
  v14 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v14)[2])(v14);
  }
  v15 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v5 = 0;
LABEL_19:
  if ( v5 < 0 )
  {
    v16 = 294LL;
    goto LABEL_23;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 152LL))(v22, a4);
  v5 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v17);
    v16 = 295LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v16,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v5);
    v18 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    return (unsigned int)v5;
  }
  v19 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return 0LL;
}
