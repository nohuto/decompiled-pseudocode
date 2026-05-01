/*
 * XREFs of ?Handle_ResSet_NotifyPendingTransition@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KK@Z @ 0x180047674
 * Callers:
 *     Srv_ResSet_NotifyPendingTransition @ 0x180046770 (Srv_ResSet_NotifyPendingTransition.c)
 * Callees:
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180004B88 (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?FindResourceSetById@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJ_KPEAPEAUIResourceSet@2@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@utl@@@Z @ 0x1800153E0 (-FindResourceSetById@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJ_KPEAPEAUIResourceSet@.c)
 *     ?ResourceSet_NotifyPendingResourceSetTransition@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@W4Enum@ResourceSetType@2@@Z @ 0x1800473F8 (-ResourceSet_NotifyPendingResourceSetTransition@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIR.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineServerProxy::Handle_ResSet_NotifyPendingTransition(
        ExecutionModel::ResourcePolicyEngineServerProxy *this,
        void *a2,
        __int64 a3,
        unsigned int a4)
{
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v4; // rsi
  int ResourceSetById; // edi
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  ExecutionModel::ResourceSetImpl *v10; // [rsp+48h] [rbp+10h] BYREF

  v4 = g_pResourcePolicyEngineServerProxy;
  v9 = 0LL;
  v10 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_pResourcePolicyEngineServerProxy + 16));
  if ( a3 )
  {
    if ( a4 - 57 <= 0xFFFFFFC5 )
    {
      ResourceSetById = ExecutionModel::ResourcePolicyEngineServerProxy::FindResourceSetById((__int64)v4, a3, &v10, &v9);
      if ( ResourceSetById >= 0 )
        ResourceSetById = ExecutionModel::ResourcePolicyEngine::ResourceSet_NotifyPendingResourceSetTransition(
                            *((struct _RTL_CRITICAL_SECTION **)v4 + 12),
                            (__int64)v10,
                            a4);
    }
    else
    {
      ResourceSetById = -2147024809;
    }
  }
  else
  {
    ResourceSetById = -2147467259;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 16));
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v10);
  return (unsigned int)ResourceSetById;
}
