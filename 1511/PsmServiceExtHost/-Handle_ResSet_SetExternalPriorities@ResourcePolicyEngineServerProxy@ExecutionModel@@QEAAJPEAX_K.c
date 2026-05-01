/*
 * XREFs of ?Handle_ResSet_SetExternalPriorities@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_SetExternalResourcePrioritiesType@@KQEAU_ResourceInfo@2@@Z @ 0x180015588
 * Callers:
 *     Srv_ResSet_SetExternalPriorities @ 0x1800203A0 (Srv_ResSet_SetExternalPriorities.c)
 * Callees:
 *     ?FindResourceSetById@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJ_KPEAPEAUIResourceSet@2@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@utl@@@Z @ 0x180014620 (-FindResourceSetById@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJ_KPEAPEAUIResourceSet@.c)
 *     ?ResourceSet_ReduceExternalResourcePriorities@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@KQEAU_ResourceInfo@2@@Z @ 0x180019458 (-ResourceSet_ReduceExternalResourcePriorities@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIRes.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?ResourceSet_ResetExternalResourcePriorities@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x18004CF40 (-ResourceSet_ResetExternalResourcePriorities@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIReso.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineServerProxy::Handle_ResSet_SetExternalPriorities(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        struct ExecutionModel::_ResourceInfo *a6)
{
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v6; // rsi
  int ResourceSetById; // edi
  int v10; // eax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  struct ExecutionModel::IResourceSet *v13; // [rsp+48h] [rbp+10h] BYREF

  v6 = g_pResourcePolicyEngineServerProxy;
  v12 = 0LL;
  v13 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_pResourcePolicyEngineServerProxy + 16));
  if ( !a3 || a4 >= 2 )
    goto LABEL_9;
  ResourceSetById = ExecutionModel::ResourcePolicyEngineServerProxy::FindResourceSetById((__int64)v6, a3, &v13, &v12);
  if ( ResourceSetById >= 0 )
  {
    if ( a4 == 1 )
    {
      if ( !a5 && !a6 )
      {
        v10 = ExecutionModel::ResourcePolicyEngine::ResourceSet_ResetExternalResourcePriorities(
                *((ExecutionModel::ResourcePolicyEngine **)v6 + 12),
                v13);
        goto LABEL_7;
      }
    }
    else if ( a5 < 0x2D )
    {
      v10 = ExecutionModel::ResourcePolicyEngine::ResourceSet_ReduceExternalResourcePriorities(
              *((ExecutionModel::ResourcePolicyEngine **)v6 + 12),
              v13,
              a5,
              a6);
LABEL_7:
      ResourceSetById = v10;
      goto LABEL_8;
    }
LABEL_9:
    ResourceSetById = -2147467259;
  }
LABEL_8:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 16));
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v13);
  return (unsigned int)ResourceSetById;
}
