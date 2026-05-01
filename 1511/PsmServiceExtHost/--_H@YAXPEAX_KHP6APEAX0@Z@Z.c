/*
 * XREFs of ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1800200F0
 * Callers:
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180003708 (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18000CCD0 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 *     ??0ResourceManager@ExecutionModel@@QEAA@XZ @ 0x18002390C (--0ResourceManager@ExecutionModel@@QEAA@XZ.c)
 *     ??0_RM_POLICY_REQUEST_BUFFER@@QEAA@XZ @ 0x18002A84C (--0_RM_POLICY_REQUEST_BUFFER@@QEAA@XZ.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800365C8 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?ResetExternalResourcePriorities@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x18004EDC0 (-ResetExternalResourcePriorities@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x18000F0C0 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
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
      ExecutionModel::_ResourceInfo::_ResourceInfo(this);
    else
      a4(this);
    this = (ExecutionModel::_ResourceInfo *)((char *)this + a2);
  }
}
