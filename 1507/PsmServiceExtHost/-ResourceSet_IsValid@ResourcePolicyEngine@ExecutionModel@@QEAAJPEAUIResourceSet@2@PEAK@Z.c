/*
 * XREFs of ?ResourceSet_IsValid@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@PEAK@Z @ 0x180047308
 * Callers:
 *     ?Handle_ResSet_GetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ResourceSetPropertyType@@PEAK@Z @ 0x180047568 (-Handle_ResSet_GetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_Resourc.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngine::ResourceSet_IsValid(
        struct _RTL_CRITICAL_SECTION *this,
        struct ExecutionModel::IResourceSet *a2,
        unsigned int *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx

  if ( !a2 || !a3 )
    return 2147942487LL;
  v5 = this + 1;
  EnterCriticalSection(this + 1);
  *a3 = (*(unsigned __int8 (__fastcall **)(struct ExecutionModel::IResourceSet *))(*(_QWORD *)a2 + 80LL))(a2);
  LeaveCriticalSection(v5);
  return 0LL;
}
