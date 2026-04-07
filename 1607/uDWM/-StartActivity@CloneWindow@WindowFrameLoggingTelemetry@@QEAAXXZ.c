/*
 * XREFs of ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x18003D898
 * Callers:
 *     ??$?0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18003D9F4 (--$-0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18003D400 (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003D55C (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Instance@WindowFrameLogging@@KAPEAV1@XZ @ 0x18003DAA4 (-Instance@WindowFrameLogging@@KAPEAV1@XZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18004F1FC (-zInternalRelatedId@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 */

void __fastcall WindowFrameLoggingTelemetry::CloneWindow::StartActivity(WindowFrameLoggingTelemetry::CloneWindow *this)
{
  __int64 v2; // rdi
  RTL_SRWLOCK *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  DWORD v10; // [rsp+30h] [rbp-9h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-1h] BYREF
  _DWORD v12[2]; // [rsp+40h] [rbp+7h] BYREF
  __int64 v13; // [rsp+48h] [rbp+Fh]
  unsigned __int16 *v14; // [rsp+50h] [rbp+17h] BYREF
  int v15; // [rsp+58h] [rbp+1Fh]
  int v16; // [rsp+5Ch] [rbp+23h]
  void *v17; // [rsp+60h] [rbp+27h]
  int v18; // [rsp+68h] [rbp+2Fh]
  int v19; // [rsp+6Ch] [rbp+33h]
  DWORD *v20; // [rsp+70h] [rbp+37h]
  int v21; // [rsp+78h] [rbp+3Fh]
  int v22; // [rsp+7Ch] [rbp+43h]

  wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v2 = *((_QWORD *)this + 6);
  if ( **((_DWORD **)WindowFrameLogging::Instance() + 1) <= 5u )
    *(_QWORD *)(v2 + 8) = 0LL;
  else
    EtwEventActivityIdControl(3LL, v2 + 8);
  v3 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  v5 = *((_QWORD *)WindowFrameLogging::Instance() + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v22 = 0;
    v10 = CurrentThreadId;
    v20 = &v10;
    v21 = 4;
    v7 = wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    v13 = 0LL;
    v8 = *((_QWORD *)this + 6);
    v14 = *(unsigned __int16 **)(v5 + 8);
    v12[0] = ((unsigned int)&unk_1800A8095 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v12[1] = 261;
    v9 = *(_QWORD *)(v5 + 32);
    v15 = *v14;
    v17 = &unk_1800A80A0;
    v16 = 2;
    v18 = 39;
    v19 = 1;
    EtwEventWriteTransfer(v9, v12, v8 + 8, v7, 3, &v14);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching(
      (WindowFrameLoggingTelemetry::CloneWindow *)((char *)this + 8),
      v4);
}
