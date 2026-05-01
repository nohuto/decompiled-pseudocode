/*
 * XREFs of ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x180018654
 * Callers:
 *     _StartLayout::RegionHelpers::GetCurrentRegionCode_::_1_::dtor$2 @ 0x1800314E1 (_StartLayout--RegionHelpers--GetCurrentRegionCode_--_1_--dtor$2.c)
 *     _CSingleViewShellExperience::_CSingleViewShellExperience_::_1_::dtor$0 @ 0x1800315BE (_CSingleViewShellExperience--_CSingleViewShellExperience_--_1_--dtor$0.c)
 *     _CSingleViewShellExperience::_CSingleViewShellExperience_::_1_::dtor$1 @ 0x1800315CA (_CSingleViewShellExperience--_CSingleViewShellExperience_--_1_--dtor$1.c)
 *     _CSingleViewShellExperience::_CSingleViewShellExperience_::_1_::dtor$2 @ 0x1800315DA (_CSingleViewShellExperience--_CSingleViewShellExperience_--_1_--dtor$2.c)
 *     _CSingleViewShellExperience::_CSingleViewShellExperience_::_1_::dtor$11 @ 0x18003166D (_CSingleViewShellExperience--_CSingleViewShellExperience_--_1_--dtor$11.c)
 *     _CSingleViewShellExperience::Launch_::_1_::dtor$2 @ 0x1800316FE (_CSingleViewShellExperience--Launch_--_1_--dtor$2.c)
 *     _CSingleViewShellExperience::OnViewStateChanged_::_1_::dtor$2 @ 0x18003175E (_CSingleViewShellExperience--OnViewStateChanged_--_1_--dtor$2.c)
 *     _CSingleViewShellExperience::OnEventQueued_::_1_::dtor$1 @ 0x180031806 (_CSingleViewShellExperience--OnEventQueued_--_1_--dtor$1.c)
 *     _ExperienceManagerUtils::RaiseReactivatedEvent_::_1_::dtor$1 @ 0x18003195C (_ExperienceManagerUtils--RaiseReactivatedEvent_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ExperienceManagerUtils::CopyableHString::~CopyableHString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
