/*
 * XREFs of ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002BD40
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@@Z @ 0x180028480 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180022CF8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x18002418C (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002D590 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgR.c)
 *     ?ReportStopActivity@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18002D62C (-ReportStopActivity@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

int __fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *this)
{
  __int64 v2; // rax
  int v3; // edi
  RTL_SRWLOCK *v4; // rcx
  int v5; // edi
  const struct _TlgProvider_t *v6; // rax
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  char *v9; // rbx
  void *v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rcx
  int v14; // [rsp+38h] [rbp-19h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  int *v17; // [rsp+68h] [rbp+17h]
  int v18; // [rsp+70h] [rbp+1Fh]
  int v19; // [rsp+74h] [rbp+23h]
  PSRWLOCK *p_SRWLock; // [rsp+78h] [rbp+27h]
  int v21; // [rsp+80h] [rbp+2Fh]
  int v22; // [rsp+84h] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

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
  *(_DWORD *)(v2 + 72) = v5;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v5 )
  {
    v6 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
    v7 = v6;
    if ( *(_DWORD *)v6 > 5u )
    {
      v14 = 0;
      v19 = 0;
      v17 = &v14;
      v18 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v22 = 0;
      LODWORD(SRWLock) = CurrentThreadId;
      p_SRWLock = &SRWLock;
      v21 = 4;
      LODWORD(v6) = TlgWrite(v7, &unk_1800DEB8D, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &pData);
    }
  }
  else
  {
    LODWORD(v6) = wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(this);
  }
  if ( *((_DWORD *)this + 8) )
  {
    v9 = (char *)this + 8;
    if ( *((_DWORD *)v9 + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v10, v11, (const char *)0x8007029CLL);
    v6 = *(const struct _TlgProvider_t **)v9;
    *((_DWORD *)v9 + 6) = 0;
    if ( *(_QWORD *)v6 )
    {
      while ( 1 )
      {
        v6 = *(const struct _TlgProvider_t **)v9;
        if ( **(char ***)v9 == v9 )
          break;
        v12 = (_QWORD *)(*(_QWORD *)v6 + 16LL);
        *(_QWORD *)v9 = v12;
        if ( !*v12 )
          goto LABEL_19;
      }
      v6 = (const struct _TlgProvider_t *)*((_QWORD *)v9 + 2);
      **(_QWORD **)v9 = v6;
    }
LABEL_19:
    *(_QWORD *)v9 = 0LL;
  }
  return (int)v6;
}
