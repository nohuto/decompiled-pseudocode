/*
 * XREFs of ??1ValueSetHelper@Triggers@CreativeFramework@@QEAA@XZ @ 0x180029C08
 * Callers:
 *     _ContentManagement::ContentManagementService::SendAppServiceMessage_::_1_::dtor$3 @ 0x1800713E2 (_ContentManagement--ContentManagementService--SendAppServiceMessage_--_1_--dtor$3.c)
 *     _Windows::Services::TargetedContent::Internal::SetTriggerAsExecuted_::_1_::dtor$5 @ 0x180072FCF (_Windows--Services--TargetedContent--Internal--SetTriggerAsExecuted_--_1_--dtor$5.c)
 *     _Windows::Services::TargetedContent::Internal::SetTriggerRegistration_::_1_::dtor$4 @ 0x1800730A7 (_Windows--Services--TargetedContent--Internal--SetTriggerRegistration_--_1_--dtor$4.c)
 *     _Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_f0651c15f0b053a524abcb6a15370925____::_1_::dtor$10 @ 0x1800731D9 (_Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer_ea_1800731D9.c)
 *     _Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_32632dfdfd926559a6510a11dedcbccd____::_1_::dtor$10 @ 0x18007328D (_Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer_ea_18007328D.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CreativeFramework::Triggers::ValueSetHelper::~ValueSetHelper(
        CreativeFramework::Triggers::ValueSetHelper *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
