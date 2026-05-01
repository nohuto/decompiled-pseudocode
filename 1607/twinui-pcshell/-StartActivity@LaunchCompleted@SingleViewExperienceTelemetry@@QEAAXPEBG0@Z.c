/*
 * XREFs of ?StartActivity@LaunchCompleted@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180022038
 * Callers:
 *     ??$Start@PEBGPEBG@LaunchCompleted@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0@Z @ 0x18001F3D8 (--$Start@PEBGPEBG@LaunchCompleted@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPEBG0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001134 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x1800045AC (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180014AFC (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0I.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180026C94 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::LaunchCompleted::StartActivity(
        SingleViewExperienceTelemetry::LaunchCompleted *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  __int64 v6; // rbx
  RTL_SRWLOCK *v7; // rcx
  __int64 v8; // rcx
  const struct _TlgProvider_t *v9; // rbx
  DWORD CurrentThreadId; // eax
  const unsigned __int16 *v11; // rdx
  const unsigned __int16 *v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  const GUID *v16; // r9
  _QWORD *v17; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  PSRWLOCK *v21; // [rsp+68h] [rbp+7h]
  __int64 v22; // [rsp+70h] [rbp+Fh]
  const unsigned __int16 *v23; // [rsp+78h] [rbp+17h]
  int v24; // [rsp+80h] [rbp+1Fh]
  int v25; // [rsp+84h] [rbp+23h]
  const unsigned __int16 *v26; // [rsp+88h] [rbp+27h]
  int v27; // [rsp+90h] [rbp+2Fh]
  int v28; // [rsp+94h] [rbp+33h]

  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v6 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)SingleViewExperienceLogging::Provider() <= 5u )
    *(_QWORD *)(v6 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v6 + 8));
  v7 = SRWLock[0];
  *(_DWORD *)v6 = 1;
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  v9 = SingleViewExperienceLogging::Provider();
  if ( *(_DWORD *)v9 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v22 = 4LL;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v21 = SRWLock;
    v11 = (const unsigned __int16 *)&unk_1800359D8;
    v12 = (const unsigned __int16 *)&unk_1800359D8;
    LODWORD(v13) = 0;
    if ( a2 )
    {
      v12 = a2;
      v13 = -1LL;
      do
        ++v13;
      while ( a2[v13] );
    }
    v23 = v12;
    v24 = 2 * v13 + 2;
    LODWORD(v14) = 0;
    v25 = 0;
    if ( a3 )
    {
      v11 = a3;
      v14 = -1LL;
      do
        ++v14;
      while ( a3[v14] );
    }
    v26 = v11;
    v27 = 2 * v14 + 2;
    v28 = 0;
    v15 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v15 + 4)
      || (v16 = (const GUID *)(v15 + 24), !*(_DWORD *)(v15 + 24))
      && !*(_DWORD *)(v15 + 28)
      && !*(_DWORD *)(v15 + 32)
      && !*(_DWORD *)(v15 + 36) )
    {
      v16 = 0LL;
    }
    TlgWrite(v9, &unk_18004317D, (LPCGUID)(v15 + 8), v16, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v17 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v8,
                          1);
    else
      Local = 0LL;
    *v17 = Local;
    if ( Local )
    {
      *((_QWORD *)this + 3) = *Local;
      *Local = v17;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
}
