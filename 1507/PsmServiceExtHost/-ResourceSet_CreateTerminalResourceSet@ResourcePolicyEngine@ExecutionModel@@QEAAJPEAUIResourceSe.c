/*
 * XREFs of ?ResourceSet_CreateTerminalResourceSet@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@PEAPEAU32@@Z @ 0x180017508
 * Callers:
 *     ?Handle_ResSet_CreateTerminalResourceSet@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KPEA_K@Z @ 0x1800164E0 (-Handle_ResSet_CreateTerminalResourceSet@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPE.c)
 * Callees:
 *     ?CreateTerminalResourceSet@ResourceSetImpl@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x180014CC0 (-CreateTerminalResourceSet@ResourceSetImpl@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngine::ResourceSet_CreateTerminalResourceSet(
        struct _RTL_CRITICAL_SECTION *this,
        struct ExecutionModel::IResourceSet *a2,
        struct ExecutionModel::IResourceSet **a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 (__fastcall *v6)(ExecutionModel::ResourceSetImpl *, struct ExecutionModel::IResourceSet **); // rsi
  unsigned int TerminalResourceSet; // eax
  unsigned int v8; // edi

  if ( !a2 )
    return 2147942487LL;
  v5 = this + 1;
  EnterCriticalSection(this + 1);
  v6 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *, struct ExecutionModel::IResourceSet **))(*(_QWORD *)a2 + 48LL);
  if ( v6 == ExecutionModel::ResourceSetImpl::CreateTerminalResourceSet )
    TerminalResourceSet = ExecutionModel::ResourceSetImpl::CreateTerminalResourceSet(a2, a3);
  else
    TerminalResourceSet = v6(a2, a3);
  v8 = TerminalResourceSet;
  LeaveCriticalSection(v5);
  return v8;
}
