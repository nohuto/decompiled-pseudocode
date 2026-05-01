/*
 * XREFs of ??$Start@II@EM_TransitionToStateActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@$$QEAI0@Z @ 0x1800150F0
 * Callers:
 *     ?TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x180012040 (-TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 * Callees:
 *     ?StartActivity@EM_TransitionToStateActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXII@Z @ 0x18000E484 (-StartActivity@EM_TransitionToStateActivity@NotificationCenterTelemetry@NotificationCenterUITele.c)
 *     memset @ 0x18002F32C (memset.c)
 */

NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_TransitionToStateActivity *__fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_TransitionToStateActivity::Start<unsigned int,unsigned int>(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_TransitionToStateActivity *this,
        int *a2,
        int *a3)
{
  char *v3; // rbx
  _QWORD *v7; // rcx

  *((_QWORD *)this + 2) = this;
  v3 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  v7 = (_QWORD *)((char *)this + 136);
  v3[4] = 0;
  v3[64] = 0;
  *((_DWORD *)v3 + 10) = 0;
  *((_QWORD *)v3 + 6) = "EM_TransitionToStateActivity";
  *((_QWORD *)v3 + 7) = 0LL;
  *((_QWORD *)v3 + 9) = 1LL;
  v7[18] = 0LL;
  v7[19] = 0LL;
  memset(v7, 0, 0x90uLL);
  *((_QWORD *)v3 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_TransitionToStateActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_TransitionToStateActivity::StartActivity(
    this,
    *a2,
    *a3);
  return this;
}
