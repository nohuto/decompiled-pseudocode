/*
 * XREFs of ?Handle_ResSet_GetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ResourceSetPropertyType@@PEAK@Z @ 0x180047568
 * Callers:
 *     Srv_ResSet_GetProperty @ 0x180046740 (Srv_ResSet_GetProperty.c)
 * Callees:
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180004B88 (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?FindResourceSetById@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJ_KPEAPEAUIResourceSet@2@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@utl@@@Z @ 0x1800153E0 (-FindResourceSetById@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJ_KPEAPEAUIResourceSet@.c)
 *     ?ResourceSet_GetPid@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@PEAK@Z @ 0x180047198 (-ResourceSet_GetPid@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@PEAK@Z.c)
 *     ?ResourceSet_IsApplied@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@PEAK@Z @ 0x180047210 (-ResourceSet_IsApplied@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@PEAK@Z.c)
 *     ?ResourceSet_IsReleased@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@PEAK@Z @ 0x18004728C (-ResourceSet_IsReleased@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@PEAK@Z.c)
 *     ?ResourceSet_IsValid@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@PEAK@Z @ 0x180047308 (-ResourceSet_IsValid@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@PEAK@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineServerProxy::Handle_ResSet_GetProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int *a5)
{
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v5; // r14
  int ResourceSetById; // edi
  int Pid; // eax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  struct ExecutionModel::IResourceSet *v12; // [rsp+48h] [rbp+10h] BYREF

  v5 = g_pResourcePolicyEngineServerProxy;
  v11 = 0LL;
  v12 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_pResourcePolicyEngineServerProxy + 16));
  if ( a3 && a5 && (unsigned int)(a4 - 1) <= 4 )
  {
    ResourceSetById = ExecutionModel::ResourcePolicyEngineServerProxy::FindResourceSetById((__int64)v5, a3, &v12, &v11);
    if ( ResourceSetById >= 0 )
    {
      switch ( a4 )
      {
        case 1:
          Pid = ExecutionModel::ResourcePolicyEngine::ResourceSet_GetPid(
                  *((struct _RTL_CRITICAL_SECTION **)v5 + 12),
                  v12,
                  a5);
          break;
        case 2:
          Pid = ExecutionModel::ResourcePolicyEngine::ResourceSet_IsReleased(
                  *((struct _RTL_CRITICAL_SECTION **)v5 + 12),
                  v12,
                  a5);
          break;
        case 3:
          Pid = ExecutionModel::ResourcePolicyEngine::ResourceSet_IsValid(
                  *((struct _RTL_CRITICAL_SECTION **)v5 + 12),
                  v12,
                  a5);
          break;
        case 4:
          Pid = ExecutionModel::ResourcePolicyEngine::ResourceSet_IsApplied(
                  *((struct _RTL_CRITICAL_SECTION **)v5 + 12),
                  v12,
                  a5);
          break;
        default:
          ResourceSetById = -2147418113;
          goto LABEL_16;
      }
      ResourceSetById = Pid;
    }
  }
  else
  {
    ResourceSetById = -2147467259;
  }
LABEL_16:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 16));
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v12);
  return (unsigned int)ResourceSetById;
}
