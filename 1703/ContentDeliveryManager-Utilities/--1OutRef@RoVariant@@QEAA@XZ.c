/*
 * XREFs of ??1OutRef@RoVariant@@QEAA@XZ @ 0x18004C09C
 * Callers:
 *     ?SetTriggerAsExecuted@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18004C874 (-SetTriggerAsExecuted@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsCont.c)
 *     ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18004DF88 (-SetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_f0651c15f0b053a524abcb6a15370925___ @ 0x18004E128 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__lambda_f0651.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_32632dfdfd926559a6510a11dedcbccd___ @ 0x18004F110 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__lambda_32632.c)
 *     _Windows::Services::TargetedContent::Internal::SetTriggerAsExecuted_::_1_::dtor$8 @ 0x180072FB7 (_Windows--Services--TargetedContent--Internal--SetTriggerAsExecuted_--_1_--dtor$8.c)
 *     _CreativeFramework::Triggers::PropertySetHelperBase_&RuntimeClass_Windows_Foundation_Collections_PropertySet_::SetCompositeValue_::_1_::dtor$2 @ 0x180073155 (_CreativeFramework--Triggers--PropertySetHelperBase_-RuntimeClass_Windows_Foundatio_ea_180073155.c)
 *     _Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_f0651c15f0b053a524abcb6a15370925____::_1_::dtor$8 @ 0x1800731C1 (_Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer_ea_1800731C1.c)
 *     _Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_32632dfdfd926559a6510a11dedcbccd____::_1_::dtor$8 @ 0x180073275 (_Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer_ea_180073275.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RoVariant::OutRef::~OutRef(RoVariant::OutRef *this)
{
  __int64 v1; // rbx
  __int64 *v2; // r14
  __int64 v3; // rsi
  int v4; // edi
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 1);
  v2 = *(__int64 **)this;
  if ( v1 )
  {
    v5 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v1)(
           *((_QWORD *)this + 1),
           &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
           &v8);
    v4 = v5;
    if ( v5 < 0 )
    {
      if ( v5 == -2147467262 )
      {
        v3 = v1;
        v4 = 3;
      }
      else
      {
        v3 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
      }
    }
    else
    {
      v3 = v8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
      v4 = 7;
    }
  }
  else
  {
    v3 = 0LL;
    v4 = 0;
  }
  v6 = *v2;
  *v2 = v3;
  v7 = *((_DWORD *)v2 + 2);
  *((_DWORD *)v2 + 2) = v4;
  if ( v6 )
  {
    if ( ((v7 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
