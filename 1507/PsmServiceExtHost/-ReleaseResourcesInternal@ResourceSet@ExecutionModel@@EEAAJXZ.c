/*
 * XREFs of ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@EEAAJXZ @ 0x180010550
 * Callers:
 *     ?ReleaseResources@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180010690 (-ReleaseResources@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     RmpActivityHostFinalCleanup @ 0x180009EAC (RmpActivityHostFinalCleanup.c)
 *     RmpFreeHeap @ 0x18000A4A4 (RmpFreeHeap.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?SetTransitionalResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@W4Enum@Priority@2@@Z @ 0x180010F54 (-SetTransitionalResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@W4En.c)
 *     ?CanRelease@BaseResourceSet@ExecutionModel@@IEAA_NXZ @ 0x180023848 (-CanRelease@BaseResourceSet@ExecutionModel@@IEAA_NXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?RemoveResourceSet@ResourceManager@ExecutionModel@@QEAAXV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@Z @ 0x180037C2C (-RemoveResourceSet@ResourceManager@ExecutionModel@@QEAAXV-$CComPtr@VResourceSet@ExecutionModel@@.c)
 *     ?ReleaseChargedResources@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x180040C3C (-ReleaseChargedResources@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ReleaseResourcesInternal(ExecutionModel::ResourceSet *this)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  char *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 175);
  if ( v1 )
    _InterlockedIncrement((volatile signed __int32 *)(v1 + 16));
  if ( !*((_DWORD *)this + 338) )
    goto LABEL_14;
  v3 = *((_QWORD *)this + 175);
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 40) != 1 )
    {
      v4 = (char *)this + 1368;
      if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 171) + 88LL))((char *)this + 1368) )
      {
        if ( *((_QWORD *)this + 28) + *((_QWORD *)this + 230)
          || (*((_BYTE *)this + 1912) & 2) == 0 && (int)ExecutionModel::ResourceSet::PerformReleaseResources(this) < 0 )
        {
          v5 = *((_QWORD *)this + 3);
          *((_BYTE *)this + 1912) |= 4u;
          ExecutionModel::ResourceManager::SetTransitionalResourceSetPriority(v5, v4, 2LL);
          ExecutionModel::ResourceSet::ReleaseChargedResources(this);
          ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
            &v9,
            (__int64)this);
          ExecutionModel::ResourceManager::RemoveResourceSet(v6, &v9);
        }
        goto LABEL_14;
      }
    }
  }
  if ( ExecutionModel::BaseResourceSet::CanRelease(this) )
  {
    v7 = ExecutionModel::ResourceSet::PerformReleaseResources(this);
    if ( v7 >= 0 )
LABEL_14:
      v7 = 0;
  }
  else
  {
    v7 = -2147220221;
  }
  if ( v1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 16), 0xFFFFFFFF) == 1 )
  {
    if ( *(_DWORD *)(v1 + 32) == 1 )
      RmpActivityHostFinalCleanup(v1);
    RmpFreeHeap((PVOID)v1);
  }
  return (unsigned int)v7;
}
