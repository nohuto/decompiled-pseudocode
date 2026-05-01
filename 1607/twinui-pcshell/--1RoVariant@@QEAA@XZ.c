/*
 * XREFs of ??1RoVariant@@QEAA@XZ @ 0x18000CD7C
 * Callers:
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$1 @ 0x180031159 (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$1.c)
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$4 @ 0x18003117D (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$4.c)
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$7 @ 0x1800311A1 (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$7.c)
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$10 @ 0x1800311C5 (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$10.c)
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$13 @ 0x1800311E9 (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$13.c)
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$16 @ 0x18003120D (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$16.c)
 *     _CSingleViewShellExperience::OnViewPropertiesChangedBase_::_1_::dtor$2 @ 0x18003179A (_CSingleViewShellExperience--OnViewPropertiesChangedBase_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
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
