/*
 * XREFs of ?GetId@ResourceSet@ExecutionModel@@UEBA_KXZ @ 0x180012490
 * Callers:
 *     ?RmSrvResourceSetCreateTerminalSet@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_K@Z @ 0x180001864 (-RmSrvResourceSetCreateTerminalSet@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_K@Z.c)
 *     ?LogPendingBegin@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180011D28 (-LogPendingBegin@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180011F20 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 *     ?LogPendingEnd@ResourceSet@ExecutionModel@@IEAAXXZ @ 0x180012328 (-LogPendingEnd@ResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInfo@2@W4Enum@PendType@2@PEA_NPEAV12@@Z @ 0x180012DB0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInf.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK5PEAU_RM_ACTIVATOR@@PEA_NPEA_K@Z @ 0x1800136B0 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18001A274 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV-$list@V-$CC.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExecutionModel::ResourceSet::GetId(ExecutionModel::ResourceSet *this)
{
  return *((_QWORD *)this + 62);
}
