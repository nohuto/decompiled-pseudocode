/*
 * XREFs of ?Stop@?$ActivityBase@$00$0IAAAAAAAAAAA@$04@wil@@QEAAXJ@Z @ 0x180012B68
 * Callers:
 *     _lambda_31b30073c32c2d01143855768ac2b990_::operator() @ 0x18000E860 (_lambda_31b30073c32c2d01143855768ac2b990_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x1800011EC (_TlgWrite.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180008354 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?StopActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ @ 0x18000B9A0 (-StopActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180014DEC (-LockExclusive@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

void __fastcall wil::ActivityBase<1,140737488355328,5>::Stop(
        CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *this)
{
  __int64 v2; // rdx
  int v3; // eax
  RTL_SRWLOCK *v4; // rcx
  int v5; // eax
  bool v6; // di
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  char *v9; // rbx
  void *v10; // rdx
  __int64 v11; // r8
  __int64 *i; // rax
  __int64 v13; // rax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-9h] BYREF
  int v15; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  int *v17; // [rsp+60h] [rbp+27h]
  int v18; // [rsp+68h] [rbp+2Fh]
  int v19; // [rsp+6Ch] [rbp+33h]
  PSRWLOCK *p_SRWLock; // [rsp+70h] [rbp+37h]
  int v21; // [rsp+78h] [rbp+3Fh]
  int v22; // [rsp+7Ch] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  wil::ActivityBase<1,35184372088832,5>::LockExclusive(this, &SRWLock);
  v2 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v2 + 80);
  if ( v3 < 1 )
    __fastfail(7u);
  if ( *(int *)(v2 + 84) >= 0 )
    *(_DWORD *)(v2 + 84) = 0;
  v4 = SRWLock;
  v5 = v3 - 1;
  *(_DWORD *)(v2 + 80) = v5;
  v6 = v5 == 0;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v6 )
  {
    CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StopActivity(this);
  }
  else
  {
    v7 = *(const struct _TlgProvider_t **)(*((_QWORD *)this + 6) + 40LL);
    if ( *(_DWORD *)v7 > 5u )
    {
      v15 = 0;
      v19 = 0;
      v17 = &v15;
      v18 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v22 = 0;
      LODWORD(SRWLock) = CurrentThreadId;
      p_SRWLock = &SRWLock;
      v21 = 4;
      TlgWrite(v7, &unk_1800353C5, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &pData);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v9 = (char *)this + 8;
    if ( *((_DWORD *)v9 + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v10, v11, (const char *)0x8007029CLL);
    *((_DWORD *)v9 + 6) = 0;
    for ( i = *(__int64 **)v9; *i; *(_QWORD *)v9 = i )
    {
      v13 = **(_QWORD **)v9;
      if ( (char *)v13 == v9 )
      {
        **(_QWORD **)v9 = *((_QWORD *)v9 + 2);
        break;
      }
      i = (__int64 *)(v13 + 16);
    }
    *(_QWORD *)v9 = 0LL;
  }
}
