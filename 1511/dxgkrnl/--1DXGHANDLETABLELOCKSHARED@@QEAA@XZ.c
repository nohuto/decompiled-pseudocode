/*
 * XREFs of ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C0001750
 * Callers:
 *     DxgkShareObjects @ 0x1C00621B0 (DxgkShareObjects.c)
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0088FD0 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C00B4110 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00B4EBC (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00EA248 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED(DXGHANDLETABLELOCKSHARED *this)
{
  int v1; // eax
  __int64 v2; // rcx

  v1 = *((_DWORD *)this + 4);
  if ( v1 == 1 )
  {
    *((_DWORD *)this + 4) = 0;
    ExReleasePushLockSharedEx(*((_QWORD *)this + 1), 0LL);
  }
  else
  {
    if ( v1 != 2 )
      return;
    *((_DWORD *)this + 4) = 0;
    v2 = *((_QWORD *)this + 1);
    *(_QWORD *)(v2 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
  }
  KeLeaveCriticalRegion();
}
