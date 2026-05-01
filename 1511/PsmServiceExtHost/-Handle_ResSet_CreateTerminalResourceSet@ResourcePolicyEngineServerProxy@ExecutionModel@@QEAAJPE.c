/*
 * XREFs of ?Handle_ResSet_CreateTerminalResourceSet@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KPEA_K@Z @ 0x180015640
 * Callers:
 *     Srv_ResSet_CreateTerminalResourceSet @ 0x1800205F0 (Srv_ResSet_CreateTerminalResourceSet.c)
 * Callees:
 *     ?Attach@?$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAAXPEAUIResourceSetCallback@ExecutionModel@@@Z @ 0x1800046B4 (-Attach@-$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAAXPEAUIResourceSetCallback@.c)
 *     ?CreateInstance@ResourceSetServerProxy@ExecutionModel@@SAJPEAVResourcePolicyEngineServerProxy@2@PEAXPEAPEAXPEAPEAV12@@Z @ 0x1800061B0 (-CreateInstance@ResourceSetServerProxy@ExecutionModel@@SAJPEAVResourcePolicyEngineServerProxy@2@.c)
 *     ??1?$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180006290 (--1-$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?FindResourceSetById@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJ_KPEAPEAUIResourceSet@2@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@utl@@@Z @ 0x180014620 (-FindResourceSetById@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJ_KPEAPEAUIResourceSet@.c)
 *     ?ResourceSet_CreateTerminalResourceSet@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@PEAPEAU32@@Z @ 0x1800193D8 (-ResourceSet_CreateTerminalResourceSet@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSe.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?AddResourceSetProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAUIResourceSet@2@PEAVResourceSetServerProxy@2@PEA_K@Z @ 0x180036508 (-AddResourceSetProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAUIResourceSet@2@PEA.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineServerProxy::Handle_ResSet_CreateTerminalResourceSet(
        ExecutionModel::ResourcePolicyEngineServerProxy *this,
        struct IUnknown *a2,
        __int64 a3,
        struct IUnknown **a4)
{
  ExecutionModel::ResourcePolicyEngine **v4; // rdi
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  int ResourceSetById; // eax
  struct ExecutionModel::IResourceSet *v9; // rbx
  int Instance; // r15d
  struct IUnknown *v11; // rax
  struct IUnknown *v12; // rdx
  struct ExecutionModel::IResourceSet *v13; // r12
  struct IUnknown *v14; // rbx
  struct _RTL_CRITICAL_SECTION *v16; // rdi
  struct ExecutionModel::IResourceSet *v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+28h] [rbp-18h] BYREF
  struct ResourceSetServerProxy *v19; // [rsp+30h] [rbp-10h] BYREF
  struct IUnknown *v20; // [rsp+38h] [rbp-8h] BYREF
  struct ExecutionModel::IResourceSet *v21; // [rsp+80h] [rbp+40h] BYREF
  struct IUnknown *v22; // [rsp+88h] [rbp+48h] BYREF
  struct ResourceSetServerProxy *v23; // [rsp+90h] [rbp+50h] BYREF

  v22 = a2;
  v4 = (ExecutionModel::ResourcePolicyEngine **)g_pResourcePolicyEngineServerProxy;
  v18 = 0LL;
  v20 = 0LL;
  v17 = 0LL;
  v21 = 0LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)g_pResourcePolicyEngineServerProxy + 16);
  v23 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_pResourcePolicyEngineServerProxy + 16));
  if ( !a3 )
  {
    Instance = -2147467259;
    goto LABEL_10;
  }
  ResourceSetById = ExecutionModel::ResourcePolicyEngineServerProxy::FindResourceSetById((__int64)v4, a3, &v17, &v18);
  v9 = v17;
  Instance = ResourceSetById;
  if ( ResourceSetById >= 0 )
  {
    v11 = 0LL;
    v19 = 0LL;
    v22 = 0LL;
    v12 = *(struct IUnknown **)(v18 + 32);
    if ( v12 )
    {
      ATL::AtlComPtrAssign(&v22, v12);
      v11 = v22;
    }
    Instance = ExecutionModel::ResourceSetServerProxy::CreateInstance(
                 (struct ExecutionModel::ResourcePolicyEngineServerProxy *)v4,
                 v11[4].lpVtbl,
                 0LL,
                 (struct IUnknown **)&v19);
    if ( Instance < 0 )
    {
      ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::~CComPtrBase<ExecutionModel::IResourceSetCallback>((ExecutionModel::ResourceSetServerProxy **)&v22);
      goto LABEL_15;
    }
    ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::Attach(&v23, (__int64)v19);
    ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::~CComPtrBase<ExecutionModel::IResourceSetCallback>((ExecutionModel::ResourceSetServerProxy **)&v22);
    Instance = ExecutionModel::ResourcePolicyEngine::ResourceSet_CreateTerminalResourceSet(v4[12], v9, &v21);
    if ( Instance >= 0 )
    {
      Instance = ExecutionModel::ResourcePolicyEngineServerProxy::AddResourceSetProxy(
                   (ExecutionModel::ResourcePolicyEngineServerProxy *)v4,
                   v21,
                   v23,
                   (unsigned __int64 *)&v20);
      if ( Instance >= 0 )
      {
        *a4 = v20;
LABEL_15:
        if ( Instance >= 0 )
          goto LABEL_10;
      }
    }
  }
  if ( v9 )
  {
    v13 = v21;
    v14 = 0LL;
    v22 = 0LL;
    if ( v21 )
    {
      v16 = (struct _RTL_CRITICAL_SECTION *)v4[12];
      EnterCriticalSection(v16 + 1);
      ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
        &v20,
        (__int64)v13);
      if ( v20 )
      {
        ATL::AtlComPtrAssign(&v22, v20);
        v14 = v22;
      }
      ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v20);
      if ( (*(int (__fastcall **)(struct ExecutionModel::IResourceSet *))(*(_QWORD *)v13 + 120LL))(v13) >= 0
        && v14[21].lpVtbl )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)&v14[21], 0LL);
      }
      LeaveCriticalSection(v16 + 1);
    }
    ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v22);
  }
LABEL_10:
  LeaveCriticalSection(v7);
  ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::~CComPtrBase<ExecutionModel::IResourceSetCallback>(&v23);
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v21);
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v17);
  return (unsigned int)Instance;
}
