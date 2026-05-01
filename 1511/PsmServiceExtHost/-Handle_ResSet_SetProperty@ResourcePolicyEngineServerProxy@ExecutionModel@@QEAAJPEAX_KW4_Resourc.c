/*
 * XREFs of ?Handle_ResSet_SetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ResourceSetPropertyType@@K@Z @ 0x1800150D0
 * Callers:
 *     Srv_ResSet_SetProperty @ 0x180020240 (Srv_ResSet_SetProperty.c)
 * Callees:
 *     ?FindResourceSetById@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJ_KPEAPEAUIResourceSet@2@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@utl@@@Z @ 0x180014620 (-FindResourceSetById@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJ_KPEAPEAUIResourceSet@.c)
 *     ?ResourceSet_SetAutoRelease@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@_N@Z @ 0x1800194E8 (-ResourceSet_SetAutoRelease@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@_N@Z.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineServerProxy::Handle_ResSet_SetProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v5; // rbp
  int ResourceSetById; // edi
  unsigned int v9; // esi
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  struct ExecutionModel::IResourceSet *v12; // [rsp+48h] [rbp+10h] BYREF

  v5 = g_pResourcePolicyEngineServerProxy;
  ResourceSetById = 0;
  v11 = 0LL;
  v12 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_pResourcePolicyEngineServerProxy + 16));
  if ( !a3 )
    goto LABEL_7;
  if ( a4 )
    goto LABEL_6;
  v9 = a5;
  if ( a5 >= 2 )
  {
LABEL_7:
    ResourceSetById = -2147467259;
    goto LABEL_6;
  }
  ResourceSetById = ExecutionModel::ResourcePolicyEngineServerProxy::FindResourceSetById((__int64)v5, a3, &v12, &v11);
  if ( ResourceSetById >= 0 )
    ResourceSetById = ExecutionModel::ResourcePolicyEngine::ResourceSet_SetAutoRelease(
                        *((ExecutionModel::ResourcePolicyEngine **)v5 + 12),
                        v12,
                        v9 != 0);
LABEL_6:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 16));
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v12);
  return (unsigned int)ResourceSetById;
}
