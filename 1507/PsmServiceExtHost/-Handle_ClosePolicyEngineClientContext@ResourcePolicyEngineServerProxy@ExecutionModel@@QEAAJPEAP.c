/*
 * XREFs of ?Handle_ClosePolicyEngineClientContext@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAPEAX@Z @ 0x180019648
 * Callers:
 *     Srv_ClosePolicyEngineClientContext @ 0x1800196D0 (Srv_ClosePolicyEngineClientContext.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x180004C70 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Cleanup@WnfStateRegistration@ExecutionModel@@QEAAXXZ @ 0x180019578 (-Cleanup@WnfStateRegistration@ExecutionModel@@QEAAXXZ.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineServerProxy::Handle_ClosePolicyEngineClientContext(
        ExecutionModel::ResourcePolicyEngineServerProxy *this,
        ExecutionModel::HostResourceInfo **a2)
{
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v2; // rbx
  unsigned int v3; // edi
  ExecutionModel::WnfStateRegistration *v5; // rcx
  ExecutionModel::HostResourceInfo *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = g_pResourcePolicyEngineServerProxy;
  v3 = 0;
  v7 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_pResourcePolicyEngineServerProxy + 16));
  if ( a2 && (v5 = *a2) != 0LL )
  {
    v7 = *a2;
    ExecutionModel::WnfStateRegistration::Cleanup(v5);
    *a2 = 0LL;
  }
  else
  {
    v3 = -2147024809;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v2 + 16));
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v7);
  return v3;
}
