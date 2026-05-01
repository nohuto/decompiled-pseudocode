/*
 * XREFs of ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x180003424
 * Callers:
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x180002FC4 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAX4_NKW46PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x1800030DC (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet.c)
 *     ?ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180044660 (-ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJK@Z.c)
 * Callees:
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x180003050 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z @ 0x180003554 (-ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z.c)
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000B3D0 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE10 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?erase@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18001FD2C (-erase@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x180036460 (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 */

void __fastcall ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(
        ExecutionModel::BaseResourceSet *this)
{
  int v1; // eax
  int v3; // ebx
  _QWORD *v4; // rdi
  ExecutionModel::BaseResourceSet *v5; // rbx
  _QWORD *v6; // r14
  _QWORD *v7; // rdi
  _QWORD *v8; // r8
  unsigned int (__fastcall *v9)(ExecutionModel::BaseResourceSet *__hidden); // rdi
  PTP_WORK *v10; // rcx
  ExecutionModel::BaseResourceSet *v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 338);
  if ( v1 )
  {
    if ( v1 == 2 )
    {
      v3 = 0;
      v4 = (_QWORD *)((char *)this + 200);
      do
      {
        if ( *v4 )
        {
          ExecutionModel::BaseResourceSet::ReturnResourceToParent(this, (unsigned int)v3);
          *v4 = 0LL;
        }
        ++v3;
        v4 += 3;
      }
      while ( v3 < 48 );
    }
    *((_DWORD *)this + 338) = 0;
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      &v11,
      this);
    v5 = v11;
    v6 = (_QWORD *)(*((_QWORD *)this + 23) + 160LL);
    v7 = (_QWORD *)*v6;
    while ( v7 != v6 )
    {
      if ( (ExecutionModel::BaseResourceSet *)v7[2] == v5 )
      {
        v8 = v7;
        v7 = (_QWORD *)*v7;
        utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::erase(
          v6,
          &v11,
          v8);
      }
      else
      {
        v7 = (_QWORD *)*v7;
      }
    }
    if ( v5 )
    {
      v9 = *(unsigned int (__fastcall **)(ExecutionModel::BaseResourceSet *__hidden))(*(_QWORD *)v5 + 16LL);
      if ( v9 == ExecutionModel::ResourceSet::Release )
      {
        ExecutionModel::ResourceSet::Release(v5);
      }
      else if ( v9 == ExecutionModel::BaseResourceSet::Release )
      {
        ExecutionModel::BaseResourceSet::Release(v5);
      }
      else if ( v9 == ExecutionModel::ExternalResourceSet::Release )
      {
        ExecutionModel::ExternalResourceSet::Release(v5);
      }
      else
      {
        v9(v5);
      }
    }
    v10 = (PTP_WORK *)*((_QWORD *)this + 3);
    if ( *((_DWORD *)this + 4) == 1 )
      ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync((ExecutionModel::ResourceManager *)v10);
    else
      SubmitThreadpoolWork(v10[34]);
  }
}
