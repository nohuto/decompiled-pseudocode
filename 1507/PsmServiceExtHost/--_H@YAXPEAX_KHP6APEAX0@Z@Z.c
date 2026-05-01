/*
 * XREFs of ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x18002048C
 * Callers:
 *     ??0ResourceManager@ExecutionModel@@QEAA@XZ @ 0x180020158 (--0ResourceManager@ExecutionModel@@QEAA@XZ.c)
 *     ??0_RM_POLICY_REQUEST_BUFFER@@QEAA@XZ @ 0x180020440 (--0_RM_POLICY_REQUEST_BUFFER@@QEAA@XZ.c)
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18002E4FC (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18002ED58 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?ResetExternalResourcePriorities@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180047E20 (-ResetExternalResourcePriorities@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x180010E40 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??0?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180020500 (--0-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

void __fastcall `vector constructor iterator'(
        ExecutionModel::_ResourceInfo *this,
        __int64 a2,
        int a3,
        ExecutionModel::_ResourceInfo *(__fastcall *a4)(ExecutionModel::_ResourceInfo *this))
{
  while ( --a3 >= 0 )
  {
    if ( a4 == ExecutionModel::_ResourceInfo::_ResourceInfo )
    {
      ExecutionModel::_ResourceInfo::_ResourceInfo(this);
    }
    else if ( (char *)a4 == (char *)ATL::CComPtr<ExecutionModel::BaseResourceSet>::CComPtr<ExecutionModel::BaseResourceSet> )
    {
      ATL::CComPtr<ExecutionModel::BaseResourceSet>::CComPtr<ExecutionModel::BaseResourceSet>(this);
    }
    else
    {
      a4(this);
    }
    this = (ExecutionModel::_ResourceInfo *)((char *)this + a2);
  }
}
