/*
 * XREFs of ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001BDE4
 * Callers:
 *     ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@@Z @ 0x18001BEA0 (-Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAUIResourceEnforcer@.c)
 * Callees:
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x180011100 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800151B8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAXPEAK@Z @ 0x18001B6A8 (-SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAXPEAK@Z.c)
 *     ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001B79C (-InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?Attach@?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionModel@@@Z @ 0x18001CA10 (-Attach@-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionM.c)
 *     RmpGetPoolSizesForDeviceTier @ 0x18001CA40 (RmpGetPoolSizesForDeviceTier.c)
 *     ??2@YAPEAX_K@Z @ 0x18001FB10 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::InitializePools(struct IUnknown **this)
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
    v3 = (ExecutionModel::BaseResourceSet *)operator new(0x558uLL);
    if ( v3 )
      v4 = ExecutionModel::BaseResourceSet::BaseResourceSet(v3);
    else
      v4 = 0LL;
    v5 = (char *)(this + 15);
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::Attach(this + 15, v4);
    if ( this[15] )
    {
      *(_DWORD *)(*(_QWORD *)v5 + 1352LL) = 2;
      *(_DWORD *)(*(_QWORD *)v5 + 16LL) = 1;
      *(_QWORD *)(*(_QWORD *)v5 + 24LL) = this;
      ExecutionModel::ResourceManager::SetMainPoolSizes((ExecutionModel::ResourceManager *)this, v6);
      if ( this[14] )
        ATL::AtlComPtrAssign(this + 14, 0LL);
      result = ExecutionModel::ResourceManager::InitResourcesFromRegisteredDlls((ExecutionModel::ResourceManager *)this);
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
