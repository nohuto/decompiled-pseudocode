/*
 * XREFs of ?Stop@?$ActivityBase@$00$0A@$04@wil@@QEAAXJ@Z @ 0x18000FEC0
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18000F4D8 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 * Callees:
 *     ?ReportStopActivity@?$ActivityBase@$00$0A@$04@wil@@AEAAXJ@Z @ 0x18000FD84 (-ReportStopActivity@-$ActivityBase@$00$0A@$04@wil@@AEAAXJ@Z.c)
 *     ?LockExclusive@?$ActivityBase@$00$0A@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FE0C (-LockExclusive@-$ActivityBase@$00$0A@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage@U-$resourc.c)
 *     ?SetStopResult@ActivityData@?$ActivityBase@$00$0A@$04@wil@@QEAA_NJPEAJ@Z @ 0x180010384 (-SetStopResult@ActivityData@-$ActivityBase@$00$0A@$04@wil@@QEAA_NJPEAJ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180010460 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x18003E74C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

void __fastcall wil::ActivityBase<1,0,5>::Stop(__int64 a1, unsigned int a2)
{
  char v4; // di
  const struct _TlgProvider_t *v5; // rdi
  DWORD CurrentThreadId; // eax
  unsigned int v7; // [rsp+38h] [rbp-9h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  int *v10; // [rsp+68h] [rbp+27h]
  int v11; // [rsp+70h] [rbp+2Fh]
  int v12; // [rsp+74h] [rbp+33h]
  PSRWLOCK *p_SRWLock; // [rsp+78h] [rbp+37h]
  int v14; // [rsp+80h] [rbp+3Fh]
  int v15; // [rsp+84h] [rbp+43h]

  wil::ActivityBase<1,0,5>::LockExclusive(a1, &SRWLock);
  v4 = wil::ActivityBase<1,0,5>::ActivityData::SetStopResult(*(_QWORD *)(a1 + 48), a2, &v7);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v4 )
  {
    wil::ActivityBase<1,0,5>::ReportStopActivity((WindowFrameLoggingTelemetry::CloneWindow *)a1, v7);
  }
  else
  {
    v5 = *(const struct _TlgProvider_t **)(*(_QWORD *)(a1 + 48) + 40LL);
    if ( *(_DWORD *)v5 > 5u )
    {
      v12 = 0;
      v7 = a2;
      v11 = 4;
      v10 = (int *)&v7;
      CurrentThreadId = GetCurrentThreadId();
      v15 = 0;
      LODWORD(SRWLock) = CurrentThreadId;
      p_SRWLock = &SRWLock;
      v14 = 4;
      TlgWrite(v5, &unk_1800A9566, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
