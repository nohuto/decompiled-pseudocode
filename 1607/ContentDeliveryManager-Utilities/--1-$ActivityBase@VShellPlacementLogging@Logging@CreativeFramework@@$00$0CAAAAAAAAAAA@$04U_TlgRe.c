/*
 * XREFs of ??1?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18001E020
 * Callers:
 *     ??1LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x18001D85C (--1LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ??1SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x18001DE4C (--1SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     _lambda_d1d6df3afd909720884b15ba4832b47d_::operator() @ 0x18001F970 (_lambda_d1d6df3afd909720884b15ba4832b47d_--operator().c)
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x180020834 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18001B73C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18001E0E0 (--1-$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorT_ea_18001E0E0.c)
 */

_QWORD *__fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  volatile signed __int32 *v2; // rcx
  char *v3; // rdi
  _QWORD *result; // rax
  __int64 v5; // rbx
  void *v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(volatile signed __int32 **)(a1 + 304);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *(char **)(a1 + 304);
      if ( v3 )
      {
        wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>(v3 + 8);
        operator delete(v3);
      }
    }
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  result = (_QWORD *)wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  v5 = a1 + 8;
  if ( *(_DWORD *)(v5 + 24) )
  {
    if ( *(_DWORD *)(v5 + 24) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v6, v7, (const char *)0x8007029CLL);
    result = *(_QWORD **)v5;
    *(_DWORD *)(v5 + 24) = 0;
    if ( *result )
    {
      while ( 1 )
      {
        result = *(_QWORD **)v5;
        if ( **(_QWORD **)v5 == v5 )
          break;
        v8 = (_QWORD *)(*result + 16LL);
        *(_QWORD *)v5 = v8;
        if ( !*v8 )
          goto LABEL_14;
      }
      result = *(_QWORD **)(v5 + 16);
      **(_QWORD **)v5 = result;
    }
LABEL_14:
    *(_QWORD *)v5 = 0LL;
  }
  return result;
}
