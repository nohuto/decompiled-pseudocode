/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180003D2C
 * Callers:
 *     _ContentManagement::ContentManagementService::SendAppServiceMessage_::_1_::dtor$6 @ 0x18005A67A (_ContentManagement--ContentManagementService--SendAppServiceMessage_--_1_--dtor$6.c)
 *     _CreativeFramework::Triggers::PropertySetHelperBase_&RuntimeClass_Windows_Foundation_Collections_ValueSet_::SetString_::_1_::dtor$3 @ 0x18005A8A2 (_CreativeFramework--Triggers--PropertySetHelperBase_-RuntimeClass_Windows_Foundatio_ea_18005A8A2.c)
 *     _CreativeFramework::Triggers::PropertySetHelperBase_&RuntimeClass_Windows_Foundation_Collections_ValueSet_::SetString_::_1_::dtor$2 @ 0x18005A8BA (_CreativeFramework--Triggers--PropertySetHelperBase_-RuntimeClass_Windows_Foundatio_ea_18005A8BA.c)
 *     _ContentManagement::TargetedContent::ProcessCreativeEvent_::_1_::dtor$1 @ 0x18005C2E2 (_ContentManagement--TargetedContent--ProcessCreativeEvent_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
