/*
 * XREFs of ?ResourceSet_LegacyApply@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@K@Z @ 0x18004CE54
 * Callers:
 *     ?Handle_ResSet_Apply@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KKW4_ApplyResourcesType@@@Z @ 0x180014EE0 (-Handle_ResSet_Apply@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KKW4_ApplyResourc.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngine::ResourceSet_LegacyApply(
        struct _RTL_CRITICAL_SECTION *this,
        struct ExecutionModel::IResourceSet *a2,
        unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  unsigned int v7; // edi

  if ( !a2 )
    return 2147942487LL;
  v6 = this + 1;
  EnterCriticalSection(this + 1);
  v7 = (*(__int64 (__fastcall **)(struct ExecutionModel::IResourceSet *, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, a3);
  LeaveCriticalSection(v6);
  return v7;
}
