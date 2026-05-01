/*
 * XREFs of ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180013364
 * Callers:
 *     ?ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ @ 0x1800013D8 (-ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z @ 0x18000F7D8 (-SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180010080 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@PEAV12@PEAPEAV12@@Z @ 0x180010DF0 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 *     ?RmpActivityHostApplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800140A0 (-RmpActivityHostApplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAXPEAK@Z @ 0x18001D7A0 (-SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAXPEAK@Z.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001DEB8 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@@Z @ 0x18001DF7C (-Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnfo.c)
 *     ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4_RM_REVOKE_REASON_INTERNAL@@W4_RM_REVOKE_POLICY@@W4Enum@Priority@ExecutionModel@@PEAVResourceSet@7@@Z @ 0x180033820 (-RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV-$list@V-$CComPtr@VBaseResourceSet@ExecutionM.c)
 * Callees:
 *     ?Release@ResourceSetCallbackThunk@@UEAAKXZ @ 0x1800041B0 (-Release@ResourceSetCallbackThunk@@UEAAKXZ.c)
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000EFB0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000F280 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@RmpRpsResourceSetCallback@@UEAAKXZ @ 0x180014360 (-Release@RmpRpsResourceSetCallback@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

struct IUnknown *__fastcall ATL::AtlComPtrAssign(struct IUnknown **a1, struct IUnknown *a2)
{
  ULONG (__stdcall *AddRef)(IUnknown *); // rax
  RmpRpsResourceSetCallback *v5; // rcx
  void (*v7)(void); // rax

  if ( !a1 )
    return 0LL;
  if ( a2 )
  {
    AddRef = a2->lpVtbl->AddRef;
    if ( (char *)AddRef == (char *)ExecutionModel::BaseResourceSet::AddRef )
      ExecutionModel::BaseResourceSet::AddRef((ExecutionModel::BaseResourceSet *)a2);
    else
      ((void (__fastcall *)(struct IUnknown *))AddRef)(a2);
  }
  v5 = (RmpRpsResourceSetCallback *)*a1;
  if ( *a1 )
  {
    v7 = *(void (**)(void))(*(_QWORD *)v5 + 16LL);
    if ( (char *)v7 == (char *)RmpRpsResourceSetCallback::Release )
    {
      RmpRpsResourceSetCallback::Release(v5);
    }
    else if ( (char *)v7 == (char *)ExecutionModel::ResourceSet::Release )
    {
      ExecutionModel::ResourceSet::Release(v5);
    }
    else if ( (char *)v7 == (char *)ResourceSetCallbackThunk::Release )
    {
      ResourceSetCallbackThunk::Release(v5);
    }
    else
    {
      v7();
    }
  }
  *a1 = a2;
  return a2;
}
