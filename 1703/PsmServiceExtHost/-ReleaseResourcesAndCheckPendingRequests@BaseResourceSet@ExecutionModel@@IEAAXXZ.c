/*
 * XREFs of ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x18000EE70
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180010080 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x180019204 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x1800194BC (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     ?ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180035200 (-ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJK@Z.c)
 * Callees:
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000E440 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z @ 0x18000EE50 (-ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z.c)
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000EFB0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000F280 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     sub_180010C80 @ 0x180010C80 (sub_180010C80.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(
        ExecutionModel::BaseResourceSet *this)
{
  int v1; // eax
  signed int v3; // ebx
  unsigned __int64 *v4; // rdi
  unsigned int (__fastcall *v5)(ExecutionModel::BaseResourceSet *__hidden); // rax
  void (*v6)(void); // rax
  __int64 v7; // rcx
  ExecutionModel::BaseResourceSet *v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 338);
  if ( v1 )
  {
    if ( v1 == 2 )
    {
      v3 = 0;
      v4 = (unsigned __int64 *)((char *)this + 200);
      do
      {
        if ( *v4 )
        {
          ExecutionModel::BaseResourceSet::ReturnResourceToParent((__int64)this, v3, *v4);
          *v4 = 0LL;
        }
        ++v3;
        v4 += 3;
      }
      while ( v3 < 48 );
    }
    *((_DWORD *)this + 338) = 0;
    v8 = this;
    v5 = *(unsigned int (__fastcall **)(ExecutionModel::BaseResourceSet *__hidden))(*(_QWORD *)this + 8LL);
    if ( v5 == ExecutionModel::BaseResourceSet::AddRef )
      ExecutionModel::BaseResourceSet::AddRef(this);
    else
      v5(this);
    sub_180010C80(*((_QWORD *)this + 23) + 160LL, &v8);
    if ( v8 )
    {
      v6 = *(void (**)(void))(*(_QWORD *)v8 + 16LL);
      if ( (char *)v6 == (char *)ExecutionModel::ResourceSet::Release )
      {
        ExecutionModel::ResourceSet::Release(v8);
      }
      else if ( (char *)v6 == (char *)ExecutionModel::BaseResourceSet::Release )
      {
        ExecutionModel::BaseResourceSet::Release(v8);
      }
      else
      {
        v6();
      }
    }
    v7 = *((_QWORD *)this + 3);
    if ( *((_DWORD *)this + 4) == 1 )
    {
      ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync((ExecutionModel::ResourceManager *)v7);
    }
    else if ( (*(_BYTE *)(v7 + 240) & 2) == 0 )
    {
      TpPostWork(*(_QWORD *)(v7 + 232));
    }
  }
}
