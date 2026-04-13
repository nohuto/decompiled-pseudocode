/*
 * XREFs of ??1RoVariant@@QEAA@XZ @ 0x18004C164
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::SetTriggerAsExecuted_::_1_::dtor$7 @ 0x180072FAB (_Windows--Services--TargetedContent--Internal--SetTriggerAsExecuted_--_1_--dtor$7.c)
 *     _CreativeFramework::Triggers::PropertySetHelperBase_&RuntimeClass_Windows_Foundation_Collections_PropertySet_::SetCompositeValue_::_1_::dtor$1 @ 0x180073149 (_CreativeFramework--Triggers--PropertySetHelperBase_-RuntimeClass_Windows_Foundatio_ea_180073149.c)
 *     _Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_f0651c15f0b053a524abcb6a15370925____::_1_::dtor$7 @ 0x1800731B5 (_Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer_ea_1800731B5.c)
 *     _Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_32632dfdfd926559a6510a11dedcbccd____::_1_::dtor$7 @ 0x180073269 (_Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer_ea_180073269.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RoVariant::~RoVariant(RoVariant *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    if ( ((*((_DWORD *)this + 2) - 3) & 0xFFFFFFFB) == 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
