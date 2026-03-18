/*
 * XREFs of ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00013C8
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0067C40 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00682F4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C0068F10 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkRender @ 0x1C00763F0 (DxgkRender.c)
 *     DxgkUnlock @ 0x1C0077510 (DxgkUnlock.c)
 *     DxgkOfferAllocations @ 0x1C00777F0 (DxgkOfferAllocations.c)
 *     DxgkLock @ 0x1C0077AF0 (DxgkLock.c)
 *     DxgkReclaimAllocations @ 0x1C0077F00 (DxgkReclaimAllocations.c)
 *     DxgkCreateAllocation @ 0x1C00A2D80 (DxgkCreateAllocation.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C012EF70 (DxgkMapGpuVirtualAddress.c)
 *     DxgkReclaimAllocations2 @ 0x1C012F8C0 (DxgkReclaimAllocations2.c)
 *     DxgkInvalidateCache @ 0x1C0131000 (DxgkInvalidateCache.c)
 *     DxgkLock2 @ 0x1C0140DB0 (DxgkLock2.c)
 *     DxgkUnlock2 @ 0x1C0141150 (DxgkUnlock2.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C0144B48 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C0145110 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL *this)
{
  bool v1; // zf
  __int64 v2; // rcx

  v1 = *((_DWORD *)this + 2) == 0;
  v2 = *(_QWORD *)this;
  if ( v1 )
    ExReleaseResourceLite(*(PERESOURCE *)(v2 + 80));
  else
    ExReleasePushLockSharedEx(v2 + 88, 0LL);
  KeLeaveCriticalRegion();
}
