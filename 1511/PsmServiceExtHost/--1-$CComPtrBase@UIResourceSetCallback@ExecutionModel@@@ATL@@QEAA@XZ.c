/*
 * XREFs of ??1?$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180006290
 * Callers:
 *     ?RecvCallback@ResourceSetImpl@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x180003BB0 (-RecvCallback@ResourceSetImpl@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@.c)
 *     ?CreateInstance@ResourceSetServerProxy@ExecutionModel@@SAJPEAVResourcePolicyEngineServerProxy@2@PEAXPEAPEAXPEAPEAV12@@Z @ 0x1800061B0 (-CreateInstance@ResourceSetServerProxy@ExecutionModel@@SAJPEAVResourcePolicyEngineServerProxy@2@.c)
 *     ?Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ReleaseResourcesType@@@Z @ 0x180015190 (-Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_Re.c)
 *     ?Handle_ResSet_CreateTerminalResourceSet@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KPEA_K@Z @ 0x180015640 (-Handle_ResSet_CreateTerminalResourceSet@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPE.c)
 *     ?AddResourceSetProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAUIResourceSet@2@PEAVResourceSetServerProxy@2@PEA_K@Z @ 0x180036508 (-AddResourceSetProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAUIResourceSet@2@PEA.c)
 *     ??$_DeleteNode@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@?$_ContainerBase@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@V?$allocator@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@2@@utl@@IEAAXPEAU?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@1@@Z @ 0x180036E64 (--$_DeleteNode@U-$_HashNode@U-$pair@$$CB_KV-$CComImplPtr@UIResourceSetCallback@ExecutionModel@@V.c)
 *     ?OnRelease@ResourceSet@ExecutionModel@@UEAAJW4_RM_REVOKE_REASON@@@Z @ 0x180045910 (-OnRelease@ResourceSet@ExecutionModel@@UEAAJW4_RM_REVOKE_REASON@@@Z.c)
 * Callees:
 *     ?Release@ResourceSetServerProxy@ExecutionModel@@UEAAKXZ @ 0x180015C60 (-Release@ResourceSetServerProxy@ExecutionModel@@UEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

unsigned int __fastcall ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::~CComPtrBase<ExecutionModel::IResourceSetCallback>(
        ExecutionModel::ResourceSetServerProxy **a1)
{
  unsigned int (__fastcall *v1)(ExecutionModel::ResourceSetServerProxy *__hidden); // rdi
  unsigned int result; // eax

  if ( *a1 )
  {
    v1 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSetServerProxy *__hidden))(*(_QWORD *)*a1 + 16LL);
    if ( v1 == ExecutionModel::ResourceSetServerProxy::Release )
      return ExecutionModel::ResourceSetServerProxy::Release(*a1);
    else
      return v1(*a1);
  }
  return result;
}
