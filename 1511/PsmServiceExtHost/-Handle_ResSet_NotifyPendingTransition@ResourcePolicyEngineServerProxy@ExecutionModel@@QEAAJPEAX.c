/*
 * XREFs of ?Handle_ResSet_NotifyPendingTransition@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KK@Z @ 0x18004D2D0
 * Callers:
 *     Srv_ResSet_NotifyPendingTransition @ 0x18004BE70 (Srv_ResSet_NotifyPendingTransition.c)
 * Callees:
 *     ?FindResourceSetById@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJ_KPEAPEAUIResourceSet@2@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@utl@@@Z @ 0x180014620 (-FindResourceSetById@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJ_KPEAPEAUIResourceSet@.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?ResourceSet_NotifyPendingResourceSetTransition@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@W4Enum@ResourceSetType@2@@Z @ 0x18004CEC8 (-ResourceSet_NotifyPendingResourceSetTransition@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIR.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineServerProxy::Handle_ResSet_NotifyPendingTransition(
        ExecutionModel::ResourcePolicyEngineServerProxy *this,
        void *a2,
        __int64 a3,
        unsigned int a4)
{
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v4; // rsi
  int ResourceSetById; // edi
  unsigned int v8; // edx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  ExecutionModel::ResourceSetImpl *v11; // [rsp+48h] [rbp+10h] BYREF

  v4 = g_pResourcePolicyEngineServerProxy;
  v10 = 0LL;
  v11 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_pResourcePolicyEngineServerProxy + 16));
  if ( a3 )
  {
    if ( a4 - 57 <= 0xFFFFFFC5 )
    {
      ResourceSetById = ExecutionModel::ResourcePolicyEngineServerProxy::FindResourceSetById(
                          (__int64)v4,
                          a3,
                          &v11,
                          &v10);
      if ( ResourceSetById >= 0 )
        ResourceSetById = ExecutionModel::ResourcePolicyEngine::ResourceSet_NotifyPendingResourceSetTransition(
                            *((struct _RTL_CRITICAL_SECTION **)v4 + 12),
                            (__int64)v11,
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
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v11, v8);
  return (unsigned int)ResourceSetById;
}
