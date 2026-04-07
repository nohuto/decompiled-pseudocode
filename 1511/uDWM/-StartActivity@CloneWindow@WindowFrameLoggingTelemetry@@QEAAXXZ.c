/*
 * XREFs of ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x1800100F8
 * Callers:
 *     ??$?0$$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800101F0 (--$-0$$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@$00$0A@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FE0C (-LockExclusive@-$ActivityBase@$00$0A@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage@U-$resourc.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180010404 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x18003E74C (_TlgWrite.c)
 *     ?zInternalRelatedId@?$ActivityBase@$00$0A@$04@wil@@QEBAPEBU_GUID@@XZ @ 0x18004EB9C (-zInternalRelatedId@-$ActivityBase@$00$0A@$04@wil@@QEBAPEBU_GUID@@XZ.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

void __fastcall WindowFrameLoggingTelemetry::CloneWindow::StartActivity(WindowFrameLoggingTelemetry::CloneWindow *this)
{
  __int64 v2; // rdi
  RTL_SRWLOCK *v3; // rcx
  const struct _TlgProvider_t *v4; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v6; // rax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  PSRWLOCK *p_SRWLock; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  wil::ActivityBase<1,0,5>::LockExclusive((__int64)this, &SRWLock);
  v2 = *((_QWORD *)this + 6);
  if ( **(_DWORD **)(v2 + 40) <= 5u )
    *(_QWORD *)(v2 + 8) = 0LL;
  else
    EtwEventActivityIdControl(3LL, v2 + 8);
  v3 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  v4 = *(const struct _TlgProvider_t **)(*((_QWORD *)this + 6) + 40LL);
  if ( *(_DWORD *)v4 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v11 = 0;
    LODWORD(SRWLock) = CurrentThreadId;
    p_SRWLock = &SRWLock;
    v10 = 4;
    v6 = (const GUID *)wil::ActivityBase<1,0,5>::zInternalRelatedId(this);
    TlgWrite(v4, &unk_1800A9AB5, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v6, 3u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((WindowFrameLoggingTelemetry::CloneWindow *)((char *)this + 8));
}
