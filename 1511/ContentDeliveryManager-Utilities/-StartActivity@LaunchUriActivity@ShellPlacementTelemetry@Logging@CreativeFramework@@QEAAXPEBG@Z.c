/*
 * XREFs of ?StartActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG@Z @ 0x18000C4F0
 * Callers:
 *     _lambda_31b30073c32c2d01143855768ac2b990_::operator() @ 0x18000E860 (_lambda_31b30073c32c2d01143855768ac2b990_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x1800011EC (_TlgWrite.c)
 *     ?GetLocal@?$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@23@_N@Z @ 0x180003EFC (-GetLocal@-$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAAPE.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800083FC (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?LockExclusive@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180014DEC (-LockExclusive@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity::StartActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity *this,
        const unsigned __int16 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  RTL_SRWLOCK *v6; // rcx
  const struct _TlgProvider_t *v7; // rbx
  const unsigned __int16 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  const GUID *v11; // r9
  _QWORD *v12; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  PSRWLOCK *v16; // [rsp+60h] [rbp-48h]
  __int64 v17; // [rsp+68h] [rbp-40h]
  const unsigned __int16 *v18; // [rsp+70h] [rbp-38h]
  int v19; // [rsp+78h] [rbp-30h]
  int v20; // [rsp+7Ch] [rbp-2Ch]

  wil::ActivityBase<1,35184372088832,5>::LockExclusive(this, SRWLock);
  v4 = *((_QWORD *)this + 6);
  v5 = *(_QWORD *)(v4 + 40);
  if ( *(_DWORD *)v5 > 5u
    && (*(_QWORD *)(v5 + 16) & 0x200000000000LL) != 0
    && (*(_QWORD *)(v5 + 24) & 0x200000000000LL) == *(_QWORD *)(v5 + 24) )
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
  v7 = *(const struct _TlgProvider_t **)(*((_QWORD *)this + 6) + 40LL);
  if ( *(_DWORD *)v7 > 5u
    && (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
  {
    LODWORD(SRWLock[0]) = GetCurrentThreadId();
    v8 = (const unsigned __int16 *)&unk_18002D640;
    v16 = SRWLock;
    LODWORD(v9) = 0;
    v17 = 4LL;
    if ( a2 )
    {
      v8 = a2;
      v9 = -1LL;
      do
        ++v9;
      while ( a2[v9] );
    }
    v18 = v8;
    v19 = 2 * v9 + 2;
    v20 = 0;
    v10 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v10 + 4)
      || (v11 = (const GUID *)(v10 + 24), !*(_DWORD *)(v10 + 24))
      && !*(_DWORD *)(v10 + 28)
      && !*(_DWORD *)(v10 + 32)
      && !*(_DWORD *)(v10 + 36) )
    {
      v11 = 0LL;
    }
    TlgWrite(v7, &unk_180035F5B, (LPCGUID)(v10 + 8), v11, 4u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v12 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = wil::details::ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>::GetLocal((__int64)v6, 1);
    else
      Local = 0LL;
    *v12 = Local;
    if ( Local )
    {
      *((_QWORD *)this + 3) = *Local;
      *Local = v12;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
}
