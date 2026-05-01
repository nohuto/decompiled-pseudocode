/*
 * XREFs of ?ResourceSet_ForceReleaseResources@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x1800470DC
 * Callers:
 *     ?Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ReleaseResourcesType@@@Z @ 0x180016020 (-Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_Re.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180004B88 (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngine::ResourceSet_ForceReleaseResources(
        struct _RTL_CRITICAL_SECTION *this,
        struct ExecutionModel::IResourceSet *a2)
{
  struct IUnknown *v2; // rbx
  int v4; // esi
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  struct IUnknown *v7; // [rsp+48h] [rbp+10h] BYREF
  struct IUnknown *v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  v7 = 0LL;
  if ( a2 )
  {
    v5 = this + 1;
    EnterCriticalSection(this + 1);
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      &v8,
      (__int64)a2);
    if ( v8 )
    {
      ATL::AtlComPtrAssign(&v7, v8);
      v2 = v7;
    }
    ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>((ExecutionModel::ResourceSetImpl **)&v8);
    v4 = (*(__int64 (__fastcall **)(struct ExecutionModel::IResourceSet *))(*(_QWORD *)a2 + 160LL))(a2);
    if ( v4 >= 0 && v2[20].lpVtbl )
      ATL::AtlComPtrAssign((struct IUnknown **)&v2[20], 0LL);
    LeaveCriticalSection(v5);
  }
  else
  {
    v4 = -2147024809;
  }
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>((ExecutionModel::ResourceSetImpl **)&v7);
  return (unsigned int)v4;
}
