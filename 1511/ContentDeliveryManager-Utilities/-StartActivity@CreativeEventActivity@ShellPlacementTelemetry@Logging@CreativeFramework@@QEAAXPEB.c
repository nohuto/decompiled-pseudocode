/*
 * XREFs of ?StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG0I@Z @ 0x18000BEAC
 * Callers:
 *     _lambda_31b30073c32c2d01143855768ac2b990_::operator() @ 0x18000E860 (_lambda_31b30073c32c2d01143855768ac2b990_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x1800011EC (_TlgWrite.c)
 *     ?GetLocal@?$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@23@_N@Z @ 0x180003EFC (-GetLocal@-$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAAPE.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800083FC (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?LockExclusive@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180014DEC (-LockExclusive@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4)
{
  __int64 v7; // rbx
  __int64 v8; // r9
  RTL_SRWLOCK *v9; // rcx
  const struct _TlgProvider_t *v10; // rbx
  const unsigned __int16 *v11; // rcx
  __int64 v12; // rax
  const unsigned __int16 *v13; // rdx
  __int64 v14; // r8
  const GUID *v15; // r9
  _QWORD *v16; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  PSRWLOCK *v20; // [rsp+68h] [rbp-19h]
  __int64 v21; // [rsp+70h] [rbp-11h]
  const unsigned __int16 *v22; // [rsp+78h] [rbp-9h]
  int v23; // [rsp+80h] [rbp-1h]
  int v24; // [rsp+84h] [rbp+3h]
  const unsigned __int16 *v25; // [rsp+88h] [rbp+7h]
  int v26; // [rsp+90h] [rbp+Fh]
  int v27; // [rsp+94h] [rbp+13h]
  int *v28; // [rsp+98h] [rbp+17h]
  __int64 v29; // [rsp+A0h] [rbp+1Fh]
  int v30; // [rsp+100h] [rbp+7Fh] BYREF

  v30 = a4;
  wil::ActivityBase<1,35184372088832,5>::LockExclusive(this, SRWLock);
  v7 = *((_QWORD *)this + 6);
  v8 = *(_QWORD *)(v7 + 40);
  if ( *(_DWORD *)v8 > 5u
    && (*(_QWORD *)(v8 + 16) & 0x800000000000LL) != 0
    && (*(_QWORD *)(v8 + 24) & 0x800000000000LL) == *(_QWORD *)(v8 + 24) )
  {
    EventActivityIdControl(3u, (LPGUID)(v7 + 8));
  }
  else
  {
    *(_QWORD *)(v7 + 8) = 0LL;
  }
  v9 = SRWLock[0];
  *(_DWORD *)v7 = 1;
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  v10 = *(const struct _TlgProvider_t **)(*((_QWORD *)this + 6) + 40LL);
  if ( *(_DWORD *)v10 > 5u
    && (*((_QWORD *)v10 + 2) & 0x800000000000LL) != 0
    && (*((_QWORD *)v10 + 3) & 0x800000000000LL) == *((_QWORD *)v10 + 3) )
  {
    LODWORD(v12) = GetCurrentThreadId();
    v21 = 4LL;
    LODWORD(SRWLock[0]) = v12;
    v20 = SRWLock;
    v11 = (const unsigned __int16 *)&unk_18002D640;
    LODWORD(v12) = 0;
    v13 = (const unsigned __int16 *)&unk_18002D640;
    if ( a2 )
    {
      v13 = a2;
      v12 = -1LL;
      do
        ++v12;
      while ( a2[v12] );
    }
    v22 = v13;
    v23 = 2 * v12 + 2;
    LODWORD(v12) = 0;
    v24 = 0;
    if ( a3 )
    {
      v11 = a3;
      v12 = -1LL;
      do
        ++v12;
      while ( a3[v12] );
    }
    v25 = v11;
    v26 = 2 * v12 + 2;
    v28 = &v30;
    v27 = 0;
    v29 = 4LL;
    v14 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v14 + 4)
      || (v15 = (const GUID *)(v14 + 24), !*(_DWORD *)(v14 + 24))
      && !*(_DWORD *)(v14 + 28)
      && !*(_DWORD *)(v14 + 32)
      && !*(_DWORD *)(v14 + 36) )
    {
      v15 = 0LL;
    }
    TlgWrite(v10, &unk_180035DED, (LPCGUID)(v14 + 8), v15, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v16 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = wil::details::ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>::GetLocal((__int64)v9, 1);
    else
      Local = 0LL;
    *v16 = Local;
    if ( Local )
    {
      *((_QWORD *)this + 3) = *Local;
      *Local = v16;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
}
