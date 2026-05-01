/*
 * XREFs of ?ResourceSet_ResetExternalResourcePriorities@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x18004CF40
 * Callers:
 *     ?Handle_ResSet_SetExternalPriorities@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_SetExternalResourcePrioritiesType@@KQEAU_ResourceInfo@2@@Z @ 0x180015588 (-Handle_ResSet_SetExternalPriorities@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_K.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngine::ResourceSet_ResetExternalResourcePriorities(
        struct _RTL_CRITICAL_SECTION *this,
        struct ExecutionModel::IResourceSet *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi

  if ( !a2 )
    return 2147942487LL;
  v4 = this + 1;
  EnterCriticalSection(this + 1);
  v5 = (*(__int64 (__fastcall **)(struct ExecutionModel::IResourceSet *))(*(_QWORD *)a2 + 104LL))(a2);
  LeaveCriticalSection(v4);
  return v5;
}
