/*
 * XREFs of ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18002370C
 * Callers:
 *     ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@2@@Z @ 0x1800237D0 (-Initialize@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceEnforcer@@PEAUIModernResourceEnfor.c)
 * Callees:
 *     ?Attach@?$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAAXPEAUIResourceSetCallback@ExecutionModel@@@Z @ 0x1800046B4 (-Attach@-$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAAXPEAUIResourceSetCallback@.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18000CCD0 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 *     ?SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAXPEAK@Z @ 0x180022F74 (-SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAXPEAK@Z.c)
 *     ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800230A4 (-InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     RmpGetPoolSizesForDeviceTier @ 0x180023C10 (RmpGetPoolSizesForDeviceTier.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::InitializePools(ExecutionModel::ResourceManager *this)
{
  __int64 result; // rax
  ExecutionModel::BaseResourceSet *v3; // rax
  ExecutionModel::BaseResourceSet *v4; // rax
  char *v5; // rdi
  unsigned int v6[6]; // [rsp+20h] [rbp-18h] BYREF

  result = RmpGetPoolSizesForDeviceTier(v6);
  if ( (_DWORD)result )
  {
    if ( (int)result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  else
  {
    v3 = (ExecutionModel::BaseResourceSet *)malloc(0x558uLL);
    if ( v3 )
      v4 = ExecutionModel::BaseResourceSet::BaseResourceSet(v3);
    else
      v4 = 0LL;
    v5 = (char *)this + 184;
    ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::Attach((_QWORD *)this + 23, (__int64)v4);
    if ( *((_QWORD *)this + 23) )
    {
      *(_DWORD *)(*(_QWORD *)v5 + 1352LL) = 2;
      *(_DWORD *)(*(_QWORD *)v5 + 16LL) = 1;
      *(_QWORD *)(*(_QWORD *)v5 + 24LL) = this;
      ExecutionModel::ResourceManager::SetMainPoolSizes(this, v6);
      if ( *((_QWORD *)this + 22) )
        ATL::AtlComPtrAssign((struct IUnknown **)this + 22, 0LL);
      result = ExecutionModel::ResourceManager::InitResourcesFromRegisteredDlls(this);
      if ( (int)result >= 0 )
        return 0LL;
    }
    else
    {
      return 2147942414LL;
    }
  }
  return result;
}
