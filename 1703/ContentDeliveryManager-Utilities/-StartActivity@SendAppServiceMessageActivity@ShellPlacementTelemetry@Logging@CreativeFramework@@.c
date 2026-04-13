/*
 * XREFs of ?StartActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXW4TriggerId@Triggers@4@@Z @ 0x1800254E8
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x1800292B4 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180011DCC (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x18002418C (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002D590 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgR.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

int __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::SendAppServiceMessageActivity::StartActivity(
        __int64 a1,
        int a2)
{
  __int64 v4; // rbx
  const struct _TlgProvider_t *v5; // rax
  RTL_SRWLOCK *v6; // rcx
  const struct _TlgProvider_t *Local; // rax
  __int64 v8; // rcx
  const struct _TlgProvider_t *v9; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v11; // r8
  const GUID *v12; // r9
  const struct _TlgProvider_t **v13; // rbx
  const struct _TlgProvider_t *v14; // rcx
  DWORD v16; // [rsp+30h] [rbp-29h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  DWORD *v19; // [rsp+60h] [rbp+7h]
  int v20; // [rsp+68h] [rbp+Fh]
  int v21; // [rsp+6Ch] [rbp+13h]
  PSRWLOCK *p_SRWLock; // [rsp+70h] [rbp+17h]
  int v23; // [rsp+78h] [rbp+1Fh]
  int v24; // [rsp+7Ch] [rbp+23h]

  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v4 = *(_QWORD *)(a1 + 48);
  v5 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  if ( *(_DWORD *)v5 > 5u
    && (*((_QWORD *)v5 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v5 + 3) & 0x200000000000LL) == *((_QWORD *)v5 + 3) )
  {
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  }
  else
  {
    *(_QWORD *)(v4 + 8) = 0LL;
  }
  v6 = SRWLock;
  *(_DWORD *)v4 = 1;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  Local = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  v9 = Local;
  if ( *(_DWORD *)Local > 5u && (*((_QWORD *)Local + 2) & 0x200000000000LL) != 0 )
  {
    v8 = *((_QWORD *)Local + 3) & 0x200000000000LL;
    if ( v8 == *((_QWORD *)Local + 3) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v21 = 0;
      v24 = 0;
      v16 = CurrentThreadId;
      v19 = &v16;
      p_SRWLock = &SRWLock;
      v20 = 4;
      LODWORD(SRWLock) = a2;
      v23 = 4;
      v11 = *(_QWORD *)(a1 + 48);
      if ( !*(_BYTE *)(v11 + 4)
        || (v12 = (const GUID *)(v11 + 24), !*(_DWORD *)(v11 + 24))
        && !*(_DWORD *)(v11 + 28)
        && !*(_DWORD *)(v11 + 32)
        && !*(_DWORD *)(v11 + 36) )
      {
        v12 = 0LL;
      }
      LODWORD(Local) = TlgWrite(v9, &unk_1800DE86A, (LPCGUID)(v11 + 8), v12, 4u, &pData);
    }
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v13 = (const struct _TlgProvider_t **)(a1 + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
    {
      Local = (const struct _TlgProvider_t *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                                               v8,
                                               1);
      v14 = Local;
    }
    else
    {
      v14 = 0LL;
    }
    *v13 = v14;
    if ( v14 )
    {
      *(_QWORD *)(a1 + 24) = *(_QWORD *)v14;
      *(_QWORD *)v14 = v13;
      LODWORD(Local) = GetCurrentThreadId();
      *(_DWORD *)(a1 + 32) = (_DWORD)Local;
    }
  }
  return (int)Local;
}
