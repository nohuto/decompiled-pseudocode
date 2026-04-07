/*
 * XREFs of ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x1800073F8
 * Callers:
 *     ??$?0$$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800074F0 (--$-0$$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180004560 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@$00$0A@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180007030 (-LockExclusive@-$ActivityBase@$00$0A@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage@U-$resourc.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800071D0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@$00$0A@$04@wil@@QEBAPEBU_GUID@@XZ @ 0x18004853C (-zInternalRelatedId@-$ActivityBase@$00$0A@$04@wil@@QEBAPEBU_GUID@@XZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

void __fastcall WindowFrameLoggingTelemetry::CloneWindow::StartActivity(WindowFrameLoggingTelemetry::CloneWindow *this)
{
  void *v2; // rdx
  unsigned int v3; // r8d
  const char *v4; // r9
  __int64 v5; // rdi
  RTL_SRWLOCK *v6; // rcx
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v9; // rax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  PSRWLOCK *p_SRWLock; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+60h] [rbp-18h]
  int v14; // [rsp+64h] [rbp-14h]

  wil::ActivityBase<1,0,5>::LockExclusive((__int64)this, &SRWLock);
  v5 = *((_QWORD *)this + 6);
  if ( **(_DWORD **)(v5 + 40) <= 5u )
    *(_QWORD *)(v5 + 8) = 0LL;
  else
    EtwEventActivityIdControl(3LL, v5 + 8);
  v6 = SRWLock;
  *(_DWORD *)v5 = 1;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v7 = *(const struct _TlgProvider_t **)(*((_QWORD *)this + 6) + 40LL);
  if ( *(_DWORD *)v7 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v14 = 0;
    LODWORD(SRWLock) = CurrentThreadId;
    p_SRWLock = &SRWLock;
    v13 = 4;
    v9 = (const GUID *)wil::ActivityBase<1,0,5>::zInternalRelatedId(this);
    TlgWrite(v7, &unk_1800A7675, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v9, 3u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching(
      (WindowFrameLoggingTelemetry::CloneWindow *)((char *)this + 8),
      v2,
      v3,
      v4);
}
