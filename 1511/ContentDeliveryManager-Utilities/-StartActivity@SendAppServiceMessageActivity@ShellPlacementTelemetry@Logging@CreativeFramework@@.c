/*
 * XREFs of ?StartActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXW4TriggerId@Triggers@4@@Z @ 0x18000CAF0
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x18000FBE4 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     _TlgWrite @ 0x1800011EC (_TlgWrite.c)
 *     ?GetLocal@?$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@23@_N@Z @ 0x180003EFC (-GetLocal@-$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAAPE.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800083FC (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?LockExclusive@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180014DEC (-LockExclusive@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

int __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::SendAppServiceMessageActivity::StartActivity(
        __int64 a1,
        int a2)
{
  void *v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rcx
  RTL_SRWLOCK *v9; // rcx
  __int64 Local; // rax
  const struct _TlgProvider_t *v11; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v13; // r8
  const GUID *v14; // r9
  __int64 v15; // rbx
  _QWORD *v16; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-19h] BYREF
  DWORD v19; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  DWORD *v21; // [rsp+60h] [rbp+17h]
  int v22; // [rsp+68h] [rbp+1Fh]
  int v23; // [rsp+6Ch] [rbp+23h]
  PSRWLOCK *p_SRWLock; // [rsp+70h] [rbp+27h]
  int v25; // [rsp+78h] [rbp+2Fh]
  int v26; // [rsp+7Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  wil::ActivityBase<1,35184372088832,5>::LockExclusive(a1, &SRWLock);
  v7 = *(_QWORD *)(a1 + 48);
  v8 = *(_QWORD *)(v7 + 40);
  if ( *(_DWORD *)v8 > 5u
    && (*(_QWORD *)(v8 + 16) & 0x200000000000LL) != 0
    && (*(_QWORD *)(v8 + 24) & 0x200000000000LL) == *(_QWORD *)(v8 + 24) )
  {
    EventActivityIdControl(3u, (LPGUID)(v7 + 8));
  }
  else
  {
    *(_QWORD *)(v7 + 8) = 0LL;
  }
  v9 = SRWLock;
  *(_DWORD *)v7 = 1;
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  Local = *(_QWORD *)(a1 + 48);
  v11 = *(const struct _TlgProvider_t **)(Local + 40);
  if ( *(_DWORD *)v11 > 5u && (*((_QWORD *)v11 + 2) & 0x200000000000LL) != 0 )
  {
    Local = *((_QWORD *)v11 + 3) & 0x200000000000LL;
    if ( Local == *((_QWORD *)v11 + 3) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v23 = 0;
      v26 = 0;
      v19 = CurrentThreadId;
      v21 = &v19;
      p_SRWLock = &SRWLock;
      v22 = 4;
      LODWORD(SRWLock) = a2;
      v25 = 4;
      v13 = *(_QWORD *)(a1 + 48);
      if ( !*(_BYTE *)(v13 + 4)
        || (v14 = (const GUID *)(v13 + 24), !*(_DWORD *)(v13 + 24))
        && !*(_DWORD *)(v13 + 28)
        && !*(_DWORD *)(v13 + 32)
        && !*(_DWORD *)(v13 + 36) )
      {
        v14 = 0LL;
      }
      LODWORD(Local) = TlgWrite(v11, &unk_180035712, (LPCGUID)(v13 + 8), v14, 4u, &pData);
    }
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v15 = a1 + 8;
    if ( *(_DWORD *)(v15 + 24) )
    {
      wil::details::in1diag3::FailFast_Unexpected(retaddr, v4, v5, v6);
      JUMPOUT(0x18000CC90LL);
    }
    if ( wil::details::g_pThreadFailureCallbacks )
    {
      Local = (__int64)wil::details::ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>::GetLocal(
                         (__int64)v9,
                         1);
      v16 = (_QWORD *)Local;
    }
    else
    {
      v16 = 0LL;
    }
    *(_QWORD *)v15 = v16;
    if ( v16 )
    {
      *(_QWORD *)(v15 + 16) = *v16;
      *v16 = v15;
      LODWORD(Local) = GetCurrentThreadId();
      *(_DWORD *)(v15 + 24) = Local;
    }
  }
  return Local;
}
