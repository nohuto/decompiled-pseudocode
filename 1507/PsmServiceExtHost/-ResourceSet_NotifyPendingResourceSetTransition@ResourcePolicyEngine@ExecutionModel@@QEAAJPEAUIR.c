/*
 * XREFs of ?ResourceSet_NotifyPendingResourceSetTransition@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@W4Enum@ResourceSetType@2@@Z @ 0x1800473F8
 * Callers:
 *     ?Handle_ResSet_NotifyPendingTransition@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KK@Z @ 0x180047674 (-Handle_ResSet_NotifyPendingTransition@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngine::ResourceSet_NotifyPendingResourceSetTransition(
        struct _RTL_CRITICAL_SECTION *a1,
        __int64 a2,
        unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  unsigned int v7; // edi

  if ( !a2 )
    return 2147942487LL;
  v6 = a1 + 1;
  EnterCriticalSection(a1 + 1);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 152LL))(a2, a3);
  LeaveCriticalSection(v6);
  return v7;
}
