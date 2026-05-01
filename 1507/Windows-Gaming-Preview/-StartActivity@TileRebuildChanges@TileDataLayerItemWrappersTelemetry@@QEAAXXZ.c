/*
 * XREFs of ?StartActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@QEAAXXZ @ 0x180021774
 * Callers:
 *     _lambda_baa2029db22e8b1694aee1901adb8c93_::operator() @ 0x180023260 (_lambda_baa2029db22e8b1694aee1901adb8c93_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x1800010DC (_TlgWrite.c)
 *     ?GetLocal@?$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@23@_N@Z @ 0x180007C14 (-GetLocal@-$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAAPE.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180007DBC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?LockExclusive@?$ActivityBase@$0A@$0A@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180024018 (-LockExclusive@-$ActivityBase@$0A@$0A@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage@U-$resour.c)
 *     __security_check_cookie @ 0x180025B30 (__security_check_cookie.c)
 */

void __fastcall TileDataLayerItemWrappersTelemetry::TileRebuildChanges::StartActivity(
        TileDataLayerItemWrappersTelemetry::TileRebuildChanges *this)
{
  const char *v2; // r9
  __int64 v3; // rdi
  RTL_SRWLOCK *v4; // rcx
  const struct _TlgProvider_t *v5; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  const GUID *v8; // r9
  char *v9; // rbx
  _QWORD *Local; // rax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  PSRWLOCK *p_SRWLock; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+60h] [rbp-18h]
  int v15; // [rsp+64h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  wil::ActivityBase<0,0,5>::LockExclusive(this, &SRWLock);
  v3 = *((_QWORD *)this + 6);
  if ( **(_DWORD **)(v3 + 40) <= 5u )
    *(_QWORD *)(v3 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v3 + 8));
  v4 = SRWLock;
  *(_DWORD *)v3 = 1;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v5 = *(const struct _TlgProvider_t **)(*((_QWORD *)this + 6) + 40LL);
  if ( *(_DWORD *)v5 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v15 = 0;
    LODWORD(SRWLock) = CurrentThreadId;
    p_SRWLock = &SRWLock;
    v14 = 4;
    v7 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v7 + 4)
      || (v8 = (const GUID *)(v7 + 24), !*(_DWORD *)(v7 + 24))
      && !*(_DWORD *)(v7 + 28)
      && !*(_DWORD *)(v7 + 32)
      && !*(_DWORD *)(v7 + 36) )
    {
      v8 = 0LL;
    }
    TlgWrite(v5, &unk_1800309F3, (LPCGUID)(v7 + 8), v8, 3u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v9 = (char *)this + 8;
    if ( *((_DWORD *)v9 + 6) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x759,
        (__int64)"internal\\sdk\\inc\\wil\\result.h",
        v2);
      JUMPOUT(0x1800218B7LL);
    }
    Local = wil::details::ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>::GetLocal((__int64)v4, 1);
    *(_QWORD *)v9 = Local;
    if ( Local )
    {
      *((_QWORD *)v9 + 2) = *Local;
      *Local = v9;
      *((_DWORD *)v9 + 6) = GetCurrentThreadId();
    }
  }
}
