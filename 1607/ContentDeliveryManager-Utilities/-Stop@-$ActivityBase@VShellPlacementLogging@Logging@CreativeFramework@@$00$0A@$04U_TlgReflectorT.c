/*
 * XREFs of ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800245D8
 * Callers:
 *     _lambda_d1d6df3afd909720884b15ba4832b47d_::operator() @ 0x18001F970 (_lambda_d1d6df3afd909720884b15ba4832b47d_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x1800011F0 (_TlgWrite.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18001B73C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x18001CB74 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180025E88 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgR.c)
 *     ?ReportStopActivity@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180025F28 (-ReportStopActivity@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

int __fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *this)
{
  __int64 v2; // r8
  int v3; // eax
  RTL_SRWLOCK *v4; // rcx
  int v5; // eax
  bool v6; // di
  const struct _TlgProvider_t *v7; // rax
  const struct _TlgProvider_t *v8; // rdi
  DWORD CurrentThreadId; // eax
  char *v10; // rbx
  void *v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // rcx
  int v15; // [rsp+38h] [rbp-9h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  int *v18; // [rsp+68h] [rbp+27h]
  int v19; // [rsp+70h] [rbp+2Fh]
  int v20; // [rsp+74h] [rbp+33h]
  PSRWLOCK *p_SRWLock; // [rsp+78h] [rbp+37h]
  int v22; // [rsp+80h] [rbp+3Fh]
  int v23; // [rsp+84h] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    &SRWLock);
  v2 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v2 + 72);
  if ( v3 < 1 )
    __fastfail(7u);
  if ( *(int *)(v2 + 76) >= 0 )
    *(_DWORD *)(v2 + 76) = 0;
  v4 = SRWLock;
  v5 = v3 - 1;
  v6 = v5 == 0;
  *(_DWORD *)(v2 + 72) = v5;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v6 )
  {
    LODWORD(v7) = wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(this);
  }
  else
  {
    v7 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
    v8 = v7;
    if ( *(_DWORD *)v7 > 5u )
    {
      v15 = 0;
      v20 = 0;
      v18 = &v15;
      v19 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v23 = 0;
      LODWORD(SRWLock) = CurrentThreadId;
      p_SRWLock = &SRWLock;
      v22 = 4;
      LODWORD(v7) = TlgWrite(v8, &unk_18007BFB3, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &pData);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v10 = (char *)this + 8;
    if ( *((_DWORD *)v10 + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v11, v12, (const char *)0x8007029CLL);
    v7 = *(const struct _TlgProvider_t **)v10;
    *((_DWORD *)v10 + 6) = 0;
    if ( *(_QWORD *)v7 )
    {
      while ( 1 )
      {
        v7 = *(const struct _TlgProvider_t **)v10;
        if ( **(char ***)v10 == v10 )
          break;
        v13 = (_QWORD *)(*(_QWORD *)v7 + 16LL);
        *(_QWORD *)v10 = v13;
        if ( !*v13 )
          goto LABEL_19;
      }
      v7 = (const struct _TlgProvider_t *)*((_QWORD *)v10 + 2);
      **(_QWORD **)v10 = v7;
    }
LABEL_19:
    *(_QWORD *)v10 = 0LL;
  }
  return (int)v7;
}
