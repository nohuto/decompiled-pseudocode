/*
 * XREFs of ?StartActivity@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x18008E924
 * Callers:
 *     ??$Start@AEAPEB_WW4TraceDriverType@@AEAU_GUID@@@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@SA?AV01@AEAPEB_W$$QEAW4TraceDriverType@@AEAU_GUID@@@Z @ 0x18008C880 (--$Start@AEAPEB_WW4TraceDriverType@@AEAU_GUID@@@TelemetryOpenHolographicDevice@HolographicDriver.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180004988 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180091A44 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180091C50 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

int __fastcall HolographicDriverClientTrace::TelemetryOpenHolographicDevice::StartActivity(
        __int64 a1,
        void *a2,
        int a3,
        __int64 a4)
{
  __int64 v8; // rdi
  __int64 v9; // r8
  RTL_SRWLOCK *v10; // rcx
  struct HolographicDriverClientTrace *Local; // rax
  __int64 v12; // rcx
  const struct _TlgProvider_t *v13; // rdi
  DWORD CurrentThreadId; // eax
  const char *v15; // rax
  __int64 v16; // rcx
  void *v17; // rcx
  __int64 v18; // r8
  const GUID *v19; // r9
  struct HolographicDriverClientTrace **v20; // rbx
  struct HolographicDriverClientTrace *v21; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-49h] BYREF
  PSRWLOCK *v25; // [rsp+68h] [rbp-29h]
  __int64 v26; // [rsp+70h] [rbp-21h]
  const char *v27; // [rsp+78h] [rbp-19h]
  int v28; // [rsp+80h] [rbp-11h]
  int v29; // [rsp+84h] [rbp-Dh]
  void *v30; // [rsp+88h] [rbp-9h]
  int v31; // [rsp+90h] [rbp-1h]
  int v32; // [rsp+94h] [rbp+3h]
  __int64 v33; // [rsp+98h] [rbp+7h]
  __int64 v34; // [rsp+A0h] [rbp+Fh]

  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    SRWLock);
  v8 = *(_QWORD *)(a1 + 48);
  v9 = *((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v9 > 5u
    && (*(_QWORD *)(v9 + 16) & 0x400000000000LL) != 0
    && (*(_QWORD *)(v9 + 24) & 0x400000000000LL) == *(_QWORD *)(v9 + 24) )
  {
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  }
  else
  {
    *(_QWORD *)(v8 + 8) = 0LL;
  }
  v10 = SRWLock[0];
  *(_DWORD *)v8 = 1;
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  Local = HolographicDriverClientTrace::Instance();
  v13 = (const struct _TlgProvider_t *)*((_QWORD *)Local + 1);
  if ( *(_DWORD *)v13 > 5u && (*((_QWORD *)v13 + 2) & 0x400000000000LL) != 0 )
  {
    Local = (struct HolographicDriverClientTrace *)(*((_QWORD *)v13 + 3) & 0x400000000000LL);
    if ( Local == *((struct HolographicDriverClientTrace **)v13 + 3) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v26 = 4LL;
      LODWORD(SRWLock[0]) = CurrentThreadId;
      v25 = SRWLock;
      if ( a3 )
      {
        if ( a3 == 1 )
          v15 = "SpatialGraph";
        else
          v15 = "(unknown)";
      }
      else
      {
        v15 = "Display";
      }
      v16 = -1LL;
      do
        ++v16;
      while ( v15[v16] );
      v27 = v15;
      v28 = v16 + 1;
      LODWORD(v15) = 0;
      v29 = 0;
      v17 = &unk_1800AE6CC;
      if ( a2 )
      {
        v17 = a2;
        v15 = (const char *)-1LL;
        do
          ++v15;
        while ( *((_WORD *)a2 + (_QWORD)v15) );
      }
      v30 = v17;
      v31 = 2 * (_DWORD)v15 + 2;
      v32 = 0;
      v33 = a4;
      v34 = 16LL;
      v18 = *(_QWORD *)(a1 + 48);
      if ( !*(_BYTE *)(v18 + 4)
        || (v19 = (const GUID *)(v18 + 24), !*(_DWORD *)(v18 + 24))
        && !*(_DWORD *)(v18 + 28)
        && !*(_DWORD *)(v18 + 32)
        && !*(_DWORD *)(v18 + 36) )
      {
        v19 = 0LL;
      }
      LODWORD(Local) = TlgWrite(v13, &unk_1800BAE40, (LPCGUID)(v18 + 8), v19, 6u, &pData);
    }
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v20 = (struct HolographicDriverClientTrace **)(a1 + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
    {
      Local = (struct HolographicDriverClientTrace *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                                                       v12,
                                                       1);
      v21 = Local;
    }
    else
    {
      v21 = 0LL;
    }
    *v20 = v21;
    if ( v21 )
    {
      *(_QWORD *)(a1 + 24) = *(_QWORD *)v21;
      *(_QWORD *)v21 = v20;
      LODWORD(Local) = GetCurrentThreadId();
      *(_DWORD *)(a1 + 32) = (_DWORD)Local;
    }
  }
  return (int)Local;
}
