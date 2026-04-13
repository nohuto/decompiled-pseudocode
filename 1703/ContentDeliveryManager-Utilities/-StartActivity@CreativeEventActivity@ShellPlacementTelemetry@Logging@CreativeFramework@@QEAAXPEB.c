/*
 * XREFs of ?StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG0I@Z @ 0x180024868
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@@Z @ 0x180028480 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180011DCC (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x18002418C (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002D590 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgR.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4)
{
  __int64 v7; // rbx
  RTL_SRWLOCK *v8; // rcx
  __int64 v9; // rcx
  const struct _TlgProvider_t *v10; // rbx
  DWORD CurrentThreadId; // eax
  const WCHAR *v12; // rdx
  const WCHAR *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
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
  const WCHAR *v27; // [rsp+80h] [rbp-9h]
  int v28; // [rsp+88h] [rbp-1h]
  int v29; // [rsp+8Ch] [rbp+3h]
  int *v30; // [rsp+90h] [rbp+7h]
  __int64 v31; // [rsp+98h] [rbp+Fh]
  int v32; // [rsp+108h] [rbp+7Fh] BYREF

  v32 = a4;
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    SRWLock);
  v7 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)CreativeFramework::Logging::ShellPlacementLogging::Provider() <= 5u )
    *(_QWORD *)(v7 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v7 + 8));
  v8 = SRWLock[0];
  *(_DWORD *)v7 = 1;
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  v10 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  if ( *(_DWORD *)v10 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v23 = 4LL;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v22 = SRWLock;
    v12 = &word_180091F08;
    v13 = &word_180091F08;
    LODWORD(v14) = 0;
    if ( a2 )
    {
      v13 = a2;
      v14 = -1LL;
      do
        ++v14;
      while ( a2[v14] );
    }
    v24 = v13;
    v25 = 2 * v14 + 2;
    LODWORD(v15) = 0;
    v26 = 0;
    if ( a3 )
    {
      v12 = a3;
      v15 = -1LL;
      do
        ++v15;
      while ( a3[v15] );
    }
    v27 = v12;
    v28 = 2 * v15 + 2;
    v30 = &v32;
    v29 = 0;
    v31 = 4LL;
    v16 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v16 + 4)
      || (v17 = (const GUID *)(v16 + 24), !*(_DWORD *)(v16 + 24))
      && !*(_DWORD *)(v16 + 28)
      && !*(_DWORD *)(v16 + 32)
      && !*(_DWORD *)(v16 + 36) )
    {
      v17 = 0LL;
    }
    TlgWrite(v10, &unk_1800DF104, (LPCGUID)(v16 + 8), v17, 6u, &pData);
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
