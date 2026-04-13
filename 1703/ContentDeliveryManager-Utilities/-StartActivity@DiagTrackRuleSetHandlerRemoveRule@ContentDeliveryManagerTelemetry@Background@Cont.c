/*
 * XREFs of ?StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_WIPEBD@Z @ 0x180051B54
 * Callers:
 *     ??$Start@PEB_WIPEBD@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@$$QEAPEB_W$$QEAI$$QEAPEBD@Z @ 0x180053C20 (--$Start@PEB_WIPEBD@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180011DCC (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x180026114 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002D590 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgR.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *this,
        const wchar_t *a2,
        int a3,
        const char *a4)
{
  __int64 v7; // rbx
  RTL_SRWLOCK *v8; // rcx
  __int64 v9; // rcx
  const struct _TlgProvider_t *v10; // rbx
  DWORD CurrentThreadId; // eax
  const WCHAR *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  const unsigned __int16 *v15; // rcx
  __int64 v16; // r8
  const GUID *v17; // r9
  _QWORD *v18; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  PSRWLOCK *v22; // [rsp+60h] [rbp-29h]
  __int64 v23; // [rsp+68h] [rbp-21h]
  const WCHAR *v24; // [rsp+70h] [rbp-19h]
  int v25; // [rsp+78h] [rbp-11h]
  int v26; // [rsp+7Ch] [rbp-Dh]
  int *v27; // [rsp+80h] [rbp-9h]
  __int64 v28; // [rsp+88h] [rbp-1h]
  const unsigned __int16 *v29; // [rsp+90h] [rbp+7h]
  int v30; // [rsp+98h] [rbp+Fh]
  int v31; // [rsp+9Ch] [rbp+13h]
  int v32; // [rsp+100h] [rbp+77h] BYREF

  v32 = a3;
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v7 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider() <= 5u )
    *(_QWORD *)(v7 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v7 + 8));
  v8 = SRWLock[0];
  *(_DWORD *)v7 = 1;
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  v10 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v10 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v23 = 4LL;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v22 = SRWLock;
    v12 = &word_180091F08;
    LODWORD(v13) = 0;
    if ( a2 )
    {
      v12 = a2;
      v13 = -1LL;
      do
        ++v13;
      while ( a2[v13] );
    }
    v24 = v12;
    v25 = 2 * v13 + 2;
    v27 = &v32;
    LODWORD(v14) = 0;
    v26 = 0;
    v15 = &word_180091EF8;
    v28 = 4LL;
    if ( a4 )
    {
      v15 = (const unsigned __int16 *)a4;
      v14 = -1LL;
      do
        ++v14;
      while ( a4[v14] );
    }
    v29 = v15;
    v30 = v14 + 1;
    v31 = 0;
    v16 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v16 + 4)
      || (v17 = (const GUID *)(v16 + 24), !*(_DWORD *)(v16 + 24))
      && !*(_DWORD *)(v16 + 28)
      && !*(_DWORD *)(v16 + 32)
      && !*(_DWORD *)(v16 + 36) )
    {
      v17 = 0LL;
    }
    TlgWrite(v10, &unk_1800DFD08, (LPCGUID)(v16 + 8), v17, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v18 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v9,
                          1);
    else
      Local = 0LL;
    *v18 = Local;
    if ( Local )
    {
      *((_QWORD *)this + 3) = *Local;
      *Local = v18;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
}
