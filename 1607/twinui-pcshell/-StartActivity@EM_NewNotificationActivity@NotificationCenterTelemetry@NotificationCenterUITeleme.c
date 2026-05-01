/*
 * XREFs of ?StartActivity@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXI@Z @ 0x18000D974
 * Callers:
 *     ??$Start@I@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@$$QEAI@Z @ 0x180014C84 (--$Start@I@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 * Callees:
 *     _TlgWrite @ 0x180001134 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x1800045AC (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18000D2AC (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180014AFC (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0I.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity::StartActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity *this,
        int a2)
{
  __int64 v3; // rbx
  RTL_SRWLOCK *v4; // rcx
  __int64 v5; // rcx
  const struct _TlgProvider_t *v6; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v8; // r8
  const GUID *v9; // r9
  _QWORD *v10; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  PSRWLOCK *v14; // [rsp+68h] [rbp+27h]
  int v15; // [rsp+70h] [rbp+2Fh]
  int v16; // [rsp+74h] [rbp+33h]
  int *v17; // [rsp+78h] [rbp+37h]
  int v18; // [rsp+80h] [rbp+3Fh]
  int v19; // [rsp+84h] [rbp+43h]
  int v20; // [rsp+B0h] [rbp+6Fh] BYREF

  v20 = a2;
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    SRWLock);
  v3 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)NotificationCenterLogging::Provider() <= 5u )
    *(_QWORD *)(v3 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v3 + 8));
  v4 = SRWLock[0];
  *(_DWORD *)v3 = 1;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v6 = NotificationCenterLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v16 = 0;
    v19 = 0;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v14 = SRWLock;
    v17 = &v20;
    v15 = 4;
    v18 = 4;
    v8 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v8 + 4)
      || (v9 = (const GUID *)(v8 + 24), !*(_DWORD *)(v8 + 24))
      && !*(_DWORD *)(v8 + 28)
      && !*(_DWORD *)(v8 + 32)
      && !*(_DWORD *)(v8 + 36) )
    {
      v9 = 0LL;
    }
    TlgWrite(v6, &unk_1800429CD, (LPCGUID)(v8 + 8), v9, 4u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v10 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v5,
                          1);
    else
      Local = 0LL;
    *v10 = Local;
    if ( Local )
    {
      *((_QWORD *)this + 3) = *Local;
      *Local = v10;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
}
