/*
 * XREFs of ??1EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18000F9F8
 * Callers:
 *     _CActionCenterExperienceManager::Launch_::_1_::dtor$0 @ 0x1800310C4 (_CActionCenterExperienceManager--Launch_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180014390 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::~EM_LaunchActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
