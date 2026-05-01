/*
 * XREFs of ?ResourceSet_ReduceExternalResourcePriorities@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@KQEAU_ResourceInfo@2@@Z @ 0x180017588
 * Callers:
 *     ?Handle_ResSet_SetExternalPriorities@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_SetExternalResourcePrioritiesType@@KQEAU_ResourceInfo@2@@Z @ 0x180016428 (-Handle_ResSet_SetExternalPriorities@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_K.c)
 * Callees:
 *     ?ReduceExternalResourcePriorities@ResourceSetImpl@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z @ 0x180014B60 (-ReduceExternalResourcePriorities@ResourceSetImpl@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngine::ResourceSet_ReduceExternalResourcePriorities(
        struct _RTL_CRITICAL_SECTION *this,
        ExecutionModel::ResourceSet **a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *const a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  __int64 (__fastcall *v8)(ExecutionModel::ResourceSet **, unsigned int, struct ExecutionModel::_ResourceInfo *const); // rsi
  unsigned int v9; // eax
  unsigned int v10; // edi

  if ( !a2 )
    return 2147942487LL;
  v7 = this + 1;
  EnterCriticalSection(this + 1);
  v8 = (__int64 (__fastcall *)(ExecutionModel::ResourceSet **, unsigned int, struct ExecutionModel::_ResourceInfo *const))*((_QWORD *)*a2 + 12);
  if ( v8 == ExecutionModel::ResourceSetImpl::ReduceExternalResourcePriorities )
    v9 = ExecutionModel::ResourceSetImpl::ReduceExternalResourcePriorities(a2, a3, a4);
  else
    v9 = v8(a2, a3, a4);
  v10 = v9;
  LeaveCriticalSection(v7);
  return v10;
}
