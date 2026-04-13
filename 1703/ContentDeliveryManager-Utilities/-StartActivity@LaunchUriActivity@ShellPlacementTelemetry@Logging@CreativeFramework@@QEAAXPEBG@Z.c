/*
 * XREFs of ?StartActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG@Z @ 0x180024EA8
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@@Z @ 0x180028480 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180011DCC (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x18002418C (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002D590 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgR.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity::StartActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity *this,
        const unsigned __int16 *a2)
{
  __int64 v4; // rbx
  const struct _TlgProvider_t *v5; // rax
  RTL_SRWLOCK *v6; // rcx
  const struct _TlgProvider_t *v7; // rax
  __int64 v8; // rcx
  const struct _TlgProvider_t *v9; // rbx
  const WCHAR *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  const GUID *v13; // r9
  _QWORD *v14; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-78h] BYREF
  PSRWLOCK *v18; // [rsp+60h] [rbp-58h]
  __int64 v19; // [rsp+68h] [rbp-50h]
  const WCHAR *v20; // [rsp+70h] [rbp-48h]
  int v21; // [rsp+78h] [rbp-40h]
  int v22; // [rsp+7Ch] [rbp-3Ch]

  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    SRWLock);
  v4 = *((_QWORD *)this + 6);
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
  v6 = SRWLock[0];
  *(_DWORD *)v4 = 1;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v7 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  v9 = v7;
  if ( *(_DWORD *)v7 > 5u && (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0 )
  {
    v8 = *((_QWORD *)v7 + 3) & 0x200000000000LL;
    if ( v8 == *((_QWORD *)v7 + 3) )
    {
      LODWORD(SRWLock[0]) = GetCurrentThreadId();
      v10 = &word_180091F08;
      v18 = SRWLock;
      LODWORD(v11) = 0;
      v19 = 4LL;
      if ( a2 )
      {
        v10 = a2;
        v11 = -1LL;
        do
          ++v11;
        while ( a2[v11] );
      }
      v20 = v10;
      v21 = 2 * v11 + 2;
      v22 = 0;
      v12 = *((_QWORD *)this + 6);
      if ( !*(_BYTE *)(v12 + 4)
        || (v13 = (const GUID *)(v12 + 24), !*(_DWORD *)(v12 + 24))
        && !*(_DWORD *)(v12 + 28)
        && !*(_DWORD *)(v12 + 32)
        && !*(_DWORD *)(v12 + 36) )
      {
        v13 = 0LL;
      }
      TlgWrite(v9, &unk_1800DF031, (LPCGUID)(v12 + 8), v13, 4u, &pData);
    }
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v14 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v8,
                          1);
    else
      Local = 0LL;
    *v14 = Local;
    if ( Local )
    {
      *((_QWORD *)this + 3) = *Local;
      *Local = v14;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
}
