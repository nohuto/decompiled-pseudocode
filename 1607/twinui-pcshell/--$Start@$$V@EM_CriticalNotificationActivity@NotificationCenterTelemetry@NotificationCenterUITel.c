/*
 * XREFs of ??$Start@$$V@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@XZ @ 0x180014BD4
 * Callers:
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180010CC0 (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?StartActivity@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18000F4E4 (-StartActivity@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUIT.c)
 *     memset @ 0x18002F32C (memset.c)
 */

NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity *__fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity::Start<>(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity *this)
{
  char *v1; // rbx
  _QWORD *v3; // rcx

  *((_QWORD *)this + 2) = this;
  v1 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  v3 = (_QWORD *)((char *)this + 136);
  *(_DWORD *)v1 = 0;
  v1[4] = 0;
  v1[64] = 0;
  *((_DWORD *)v1 + 10) = 0;
  *((_QWORD *)v1 + 6) = "EM_CriticalNotificationActivity";
  *((_QWORD *)v1 + 7) = 0LL;
  *((_QWORD *)v1 + 9) = 1LL;
  v3[18] = 0LL;
  v3[19] = 0LL;
  memset(v3, 0, 0x90uLL);
  *((_QWORD *)v1 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity::StartActivity(this);
  return this;
}
