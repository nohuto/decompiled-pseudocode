/*
 * XREFs of ?ReleaseResourcesForceOptionally@ResourceSet@ExecutionModel@@AEAAJ_N@Z @ 0x180010120
 * Callers:
 *     ?RecvCallback@TerminalResourceSetCallback@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x18003DF10 (-RecvCallback@TerminalResourceSetCallback@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackTy.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?SetTransitionalResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@W4Enum@Priority@2@@Z @ 0x180010F54 (-SetTransitionalResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@W4En.c)
 *     ?CanRelease@BaseResourceSet@ExecutionModel@@IEAA_NXZ @ 0x180023848 (-CanRelease@BaseResourceSet@ExecutionModel@@IEAA_NXZ.c)
 *     ?IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ @ 0x180023A90 (-IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?RemoveResourceSet@ResourceManager@ExecutionModel@@QEAAXV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@Z @ 0x180037C2C (-RemoveResourceSet@ResourceManager@ExecutionModel@@QEAAXV-$CComPtr@VResourceSet@ExecutionModel@@.c)
 *     ?ReleaseChargedResources@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x180040C3C (-ReleaseChargedResources@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ReleaseResourcesForceOptionally(
        ExecutionModel::ResourceSet *this,
        char a2)
{
  volatile signed __int32 *v2; // rsi
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 175);
  if ( v2 )
    _InterlockedIncrement(v2 + 4);
  if ( !*((_DWORD *)this + 338) )
    goto LABEL_14;
  if ( !ExecutionModel::ResourceSet::IsLegacy(this) )
  {
    v6 = v5 + 1368;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v5 + 1368) + 88LL))(v5 + 1368) )
    {
      if ( *((_QWORD *)this + 28) + *((_QWORD *)this + 230)
        || (*((_BYTE *)this + 1912) & 2) == 0 && (int)ExecutionModel::ResourceSet::PerformReleaseResources(this) < 0 )
      {
        v7 = *((_QWORD *)this + 3);
        *((_BYTE *)this + 1912) |= 4u;
        ExecutionModel::ResourceManager::SetTransitionalResourceSetPriority(v7, v6, 2LL);
        ExecutionModel::ResourceSet::ReleaseChargedResources(this);
        ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
          &v11,
          (__int64)this);
        ExecutionModel::ResourceManager::RemoveResourceSet(v8, &v11);
      }
LABEL_14:
      v9 = 0;
      goto LABEL_15;
    }
  }
  if ( !a2 && !ExecutionModel::BaseResourceSet::CanRelease(this) )
  {
    v9 = -2147220221;
    goto LABEL_15;
  }
  v9 = ExecutionModel::ResourceSet::PerformReleaseResources(this);
  if ( v9 >= 0 )
    goto LABEL_14;
LABEL_15:
  if ( v2 )
    RmpObjectRelease(v2);
  return (unsigned int)v9;
}
