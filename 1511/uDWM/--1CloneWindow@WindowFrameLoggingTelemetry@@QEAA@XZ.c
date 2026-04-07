/*
 * XREFs of ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180010080
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18000F4D8 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 * Callees:
 *     ?ReportStopActivity@?$ActivityBase@$00$0A@$04@wil@@AEAAXJ@Z @ 0x18000FD84 (-ReportStopActivity@-$ActivityBase@$00$0A@$04@wil@@AEAAXJ@Z.c)
 *     ?LockExclusive@?$ActivityBase@$00$0A@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FE0C (-LockExclusive@-$ActivityBase@$00$0A@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage@U-$resourc.c)
 *     ??1ActivityData@?$ActivityBase@$00$0A@$04@wil@@QEAA@XZ @ 0x180010330 (--1ActivityData@-$ActivityBase@$00$0A@$04@wil@@QEAA@XZ.c)
 *     ?SetStopResult@ActivityData@?$ActivityBase@$00$0A@$04@wil@@QEAA_NJPEAJ@Z @ 0x180010384 (-SetStopResult@ActivityData@-$ActivityBase@$00$0A@$04@wil@@QEAA_NJPEAJ@Z.c)
 *     ?reset@?$shared_object@VActivityData@?$ActivityBase@$00$0A@$04@wil@@@details@wil@@QEAAXXZ @ 0x1800103C4 (-reset@-$shared_object@VActivityData@-$ActivityBase@$00$0A@$04@wil@@@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180010460 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall WindowFrameLoggingTelemetry::CloneWindow::~CloneWindow(WindowFrameLoggingTelemetry::CloneWindow *this)
{
  _QWORD *v1; // rdi
  bool v3; // zf
  char v4; // si
  _DWORD *v5; // rcx
  __int64 v6; // rdx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 312);
  v3 = *((_QWORD *)this + 39) == 0LL;
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::CloneWindow::`vftable';
  v4 = 1;
  if ( v3 )
    goto LABEL_2;
  wil::ActivityBase<1,0,5>::LockExclusive((__int64)this, &SRWLock);
  if ( !*v1 || *(_DWORD *)*v1 != 1 )
  {
    v4 = 0;
    wil::details::shared_object<wil::ActivityBase<1,0,5>::ActivityData>::reset(v1);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v4 )
  {
LABEL_2:
    v5 = (_DWORD *)*((_QWORD *)this + 6);
    if ( *v5 == 1 )
    {
      LODWORD(SRWLock) = v5[23];
      v6 = 2147942974LL;
      if ( (int)SRWLock < 0 )
        v6 = (unsigned int)SRWLock;
      wil::ActivityBase<1,0,5>::ActivityData::SetStopResult(v5, v6, &SRWLock);
      wil::ActivityBase<1,0,5>::ReportStopActivity(this, (int)SRWLock);
    }
  }
  wil::details::shared_object<wil::ActivityBase<1,0,5>::ActivityData>::reset(v1);
  wil::ActivityBase<1,0,5>::ActivityData::~ActivityData((char *)this + 56);
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((WindowFrameLoggingTelemetry::CloneWindow *)((char *)this + 8));
}
