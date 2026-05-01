/*
 * XREFs of ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x180011440
 * Callers:
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x180003F40 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x1800041DC (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180011700 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJK@Z @ 0x1800370F0 (-ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJK@Z.c)
 * Callees:
 *     ?AddRef@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800041D0 (-AddRef@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x180004270 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?CheckPendingExternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18000FC80 (-CheckPendingExternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z @ 0x180011590 (-ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z.c)
 *     ?AddRef@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011680 (-AddRef@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ??$remove_if@V_lambda_4a96282eb34af91833354b43e8ed5ac2_@@@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXV_lambda_4a96282eb34af91833354b43e8ed5ac2_@@@Z @ 0x180015100 (--$remove_if@V_lambda_4a96282eb34af91833354b43e8ed5ac2_@@@-$list@V-$CComPtr@VBaseResourceSet@Exe.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(
        ExecutionModel::BaseResourceSet *this)
{
  int v1; // eax
  int v3; // ebx
  _QWORD *v4; // rdi
  unsigned int (__fastcall *v5)(ExecutionModel::ResourceSet *__hidden); // rax
  void (*v6)(void); // rax
  __int64 v7; // rcx
  int v8; // eax
  ExecutionModel::ExternalResourceSet *v9; // [rsp+30h] [rbp+8h] BYREF

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
          ExecutionModel::BaseResourceSet::ReturnResourceToParent(this, (unsigned int)v3, *v4);
          *v4 = 0LL;
        }
        ++v3;
        v4 += 3;
      }
      while ( v3 < 48 );
    }
    *((_DWORD *)this + 338) = 0;
    v9 = this;
    v5 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)this + 8LL);
    if ( v5 == ExecutionModel::ResourceSet::AddRef )
    {
      ExecutionModel::ResourceSet::AddRef(this);
    }
    else if ( v5 == ExecutionModel::ExternalResourceSet::AddRef )
    {
      ExecutionModel::ExternalResourceSet::AddRef(this);
    }
    else
    {
      v5(this);
    }
    utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::remove_if<_lambda_4a96282eb34af91833354b43e8ed5ac2_>(
      *((_QWORD *)this + 23) + 160LL,
      &v9);
    if ( v9 )
    {
      v6 = *(void (**)(void))(*(_QWORD *)v9 + 16LL);
      if ( (char *)v6 == (char *)ExecutionModel::ResourceSet::Release )
      {
        ExecutionModel::ResourceSet::Release(v9);
      }
      else if ( (char *)v6 == (char *)ExecutionModel::ExternalResourceSet::Release )
      {
        ExecutionModel::ExternalResourceSet::Release(v9);
      }
      else
      {
        v6();
      }
    }
    v7 = *((_QWORD *)this + 3);
    if ( *((_DWORD *)this + 4) == 1 )
    {
      v8 = *(_DWORD *)(v7 + 256);
      if ( (v8 & 3) == 0 )
      {
        *(_DWORD *)(v7 + 256) = v8 | 1;
        TpPostWork(*(_QWORD *)(v7 + 240));
      }
    }
    else
    {
      ExecutionModel::ResourceManager::CheckPendingExternalResourceRequestsAsync((ExecutionModel::ResourceManager *)v7);
    }
  }
}
