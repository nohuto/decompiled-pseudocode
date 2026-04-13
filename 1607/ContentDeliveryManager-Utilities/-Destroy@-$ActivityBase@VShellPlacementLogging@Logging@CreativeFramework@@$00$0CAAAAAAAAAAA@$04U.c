/*
 * XREFs of ?Destroy@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800236C8
 * Callers:
 *     ??1LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x18001D85C (--1LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ??1SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x18001DE4C (--1SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     _lambda_d1d6df3afd909720884b15ba4832b47d_::operator() @ 0x18001F970 (_lambda_d1d6df3afd909720884b15ba4832b47d_--operator().c)
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x180020834 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ??1?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18001E0E0 (--1-$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorT_ea_18001E0E0.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180025E88 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgR.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        _QWORD *a1)
{
  char v2; // si
  volatile signed __int32 *v3; // rax
  void *v4; // rdi
  _DWORD *v5; // rdx
  int v6; // eax
  int v7; // r8d
  PSRWLOCK SRWLock[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 1;
  if ( !a1[38] )
    goto LABEL_12;
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    SRWLock);
  v3 = (volatile signed __int32 *)a1[38];
  if ( !v3 || *v3 != 1 )
  {
    v2 = 0;
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd(v3, 0xFFFFFFFF) == 1 )
      {
        v4 = (void *)a1[38];
        if ( v4 )
        {
          wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v4 + 8);
          operator delete(v4);
        }
      }
      a1[38] = 0LL;
    }
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  if ( v2 )
  {
LABEL_12:
    v5 = (_DWORD *)a1[6];
    if ( *v5 == 1 )
    {
      v6 = -2147024322;
      v7 = v5[18];
      if ( (int)v5[21] < 0 )
        v6 = v5[21];
      if ( v7 < 1 )
        __fastfail(7u);
      if ( (int)v5[19] >= 0 )
        v5[19] = v6;
      v5[18] = v7 - 1;
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    }
  }
}
