/*
 * XREFs of ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18004DF88
 * Callers:
 *     ?SetTriggerAsExecuted@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18004C874 (-SetTriggerAsExecuted@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsCont.c)
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18004D4A8 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18004C09C (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ??IRoVariant@@QEAA?AVOutRef@0@XZ @ 0x18004C194 (--IRoVariant@@QEAA-AVOutRef@0@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetCompositeValue(
        _QWORD *a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, _QWORD *))
{
  int v5; // eax
  int v6; // ebx
  _QWORD *v7; // rax
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD v14[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  int v16; // [rsp+48h] [rbp-18h]
  _QWORD v17[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  char v19; // [rsp+90h] [rbp+30h] BYREF
  __int64 v20; // [rsp+98h] [rbp+38h] BYREF

  v14[1] = -2LL;
  v14[0] = 0LL;
  v5 = (**a3)(a3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xA9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v5);
    goto LABEL_16;
  }
  v15 = 0LL;
  v16 = 0;
  v7 = RoVariant::operator&((__int64)&v15, v17);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v8 + 152LL))(v8, v14[0], v7 + 1);
  RoVariant::OutRef::~OutRef((RoVariant::OutRef *)v17);
  if ( v6 >= 0 )
  {
    v20 = 0LL;
    v9 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
           &v20);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, char *))(*(_QWORD *)v20 + 80LL))(v20, a2, v15, &v19);
      v6 = v9;
      if ( v9 >= 0 )
      {
        v6 = 0;
LABEL_11:
        v11 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        goto LABEL_13;
      }
      v10 = 175LL;
    }
    else
    {
      v10 = 173LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v9);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xAB,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
    (const char *)(unsigned int)v6);
LABEL_13:
  if ( v15 && ((v16 - 3) & 0xFFFFFFFB) == 0 )
    (*(void (**)(void))(*(_QWORD *)v15 + 16LL))();
LABEL_16:
  v12 = v14[0];
  if ( v14[0] )
  {
    v14[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)v6;
}
