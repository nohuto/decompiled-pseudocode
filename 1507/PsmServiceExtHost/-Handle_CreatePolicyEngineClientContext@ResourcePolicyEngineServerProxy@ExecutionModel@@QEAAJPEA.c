/*
 * XREFs of ?Handle_CreatePolicyEngineClientContext@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAU_WNF_STATE_NAME@@PEAPEAX@Z @ 0x18002119C
 * Callers:
 *     Srv_CreatePolicyEngineClientContext @ 0x180020F90 (Srv_CreatePolicyEngineClientContext.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x180004C70 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?CreateRegistrationForWnfStateName@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAU_WNF_STATE_NAME@@PEAPEAUIUnknown@@@Z @ 0x180021044 (-CreateRegistrationForWnfStateName@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAU_WNF.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineServerProxy::Handle_CreatePolicyEngineClientContext(
        ExecutionModel::ResourcePolicyEngineServerProxy *this,
        void *a2,
        struct IUnknownVtbl **a3,
        struct IUnknown **a4)
{
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v4; // rbx
  ExecutionModel::ResourcePolicyEngineServerProxy *v7; // rcx
  int v8; // edi
  struct IUnknown *v9; // rcx
  struct IUnknown *v11; // [rsp+38h] [rbp+10h] BYREF

  v4 = g_pResourcePolicyEngineServerProxy;
  v11 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_pResourcePolicyEngineServerProxy + 16));
  if ( a3 && a4 )
  {
    v8 = ExecutionModel::ResourcePolicyEngineServerProxy::CreateRegistrationForWnfStateName(v7, a3, &v11);
    if ( v8 >= 0 )
    {
      v9 = v11;
      v11 = 0LL;
      *a4 = v9;
    }
  }
  else
  {
    v8 = -2147024809;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 16));
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((ExecutionModel::HostResourceInfo **)&v11);
  return (unsigned int)v8;
}
