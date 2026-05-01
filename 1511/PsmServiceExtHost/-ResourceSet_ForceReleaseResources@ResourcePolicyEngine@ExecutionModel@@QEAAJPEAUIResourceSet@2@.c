/*
 * XREFs of ?ResourceSet_ForceReleaseResources@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x18004CBAC
 * Callers:
 *     ?Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ReleaseResourcesType@@@Z @ 0x180015190 (-Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_Re.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngine::ResourceSet_ForceReleaseResources(
        struct _RTL_CRITICAL_SECTION *this,
        struct ExecutionModel::IResourceSet *a2)
{
  struct IUnknown *v2; // rbx
  int v4; // esi
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  unsigned int v6; // edx
  struct IUnknown *v8; // [rsp+48h] [rbp+10h] BYREF
  struct IUnknown *v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  v8 = 0LL;
  if ( a2 )
  {
    v5 = this + 1;
    EnterCriticalSection(this + 1);
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      &v9,
      (__int64)a2);
    v6 = (unsigned int)v9;
    if ( v9 )
    {
      ATL::AtlComPtrAssign(&v8, v9);
      v2 = v8;
    }
    ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(
      (ExecutionModel::ResourceSetImpl **)&v9,
      v6);
    v4 = (*(__int64 (__fastcall **)(struct ExecutionModel::IResourceSet *))(*(_QWORD *)a2 + 160LL))(a2);
    if ( v4 >= 0 && v2[21].lpVtbl )
      ATL::AtlComPtrAssign((struct IUnknown **)&v2[21], 0LL);
    LeaveCriticalSection(v5);
  }
  else
  {
    v4 = -2147024809;
  }
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(
    (ExecutionModel::ResourceSetImpl **)&v8,
    (unsigned int)a2);
  return (unsigned int)v4;
}
