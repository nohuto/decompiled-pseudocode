/*
 * XREFs of ?ResourceSet_SetAutoRelease@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@_N@Z @ 0x1800194E8
 * Callers:
 *     ?Handle_ResSet_SetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ResourceSetPropertyType@@K@Z @ 0x1800150D0 (-Handle_ResSet_SetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_Resourc.c)
 * Callees:
 *     ?SetAutoRelease@ResourceSetImpl@ExecutionModel@@UEAAX_N@Z @ 0x180013A00 (-SetAutoRelease@ResourceSetImpl@ExecutionModel@@UEAAX_N@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngine::ResourceSet_SetAutoRelease(
        struct _RTL_CRITICAL_SECTION *this,
        struct ExecutionModel::IResourceSet *a2,
        char a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v6; // rdx
  void (__fastcall *v7)(ExecutionModel::ResourceSetImpl *, char); // rbp

  if ( !a2 )
    return 2147942487LL;
  v5 = this + 1;
  EnterCriticalSection(this + 1);
  v7 = *(void (__fastcall **)(ExecutionModel::ResourceSetImpl *, char))(*(_QWORD *)a2 + 128LL);
  if ( v7 == ExecutionModel::ResourceSetImpl::SetAutoRelease )
  {
    ExecutionModel::ResourceSetImpl::SetAutoRelease(a2, a3);
  }
  else
  {
    LOBYTE(v6) = a3;
    v7(a2, v6);
  }
  LeaveCriticalSection(v5);
  return 0LL;
}
