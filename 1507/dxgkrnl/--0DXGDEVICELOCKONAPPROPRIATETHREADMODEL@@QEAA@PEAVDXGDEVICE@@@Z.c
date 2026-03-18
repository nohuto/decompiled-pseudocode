/*
 * XREFs of ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00013F8
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0067C40 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00682F4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C0068F10 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C012EF70 (DxgkMapGpuVirtualAddress.c)
 *     DxgkReclaimAllocations2 @ 0x1C012F8C0 (DxgkReclaimAllocations2.c)
 *     DxgkInvalidateCache @ 0x1C0131000 (DxgkInvalidateCache.c)
 *     DxgkLock2 @ 0x1C0140DB0 (DxgkLock2.c)
 *     DxgkUnlock2 @ 0x1C0141150 (DxgkUnlock2.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C0144B48 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C0145110 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0002670 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01260D8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

DXGDEVICELOCKONAPPROPRIATETHREADMODEL *__fastcall DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL *this,
        struct DXGDEVICE *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v7; // rbx
  void *v8; // rcx
  unsigned __int8 v9; // al
  __int64 v10; // r8
  unsigned __int8 v11; // si
  __int64 v12; // rax
  unsigned __int8 v13; // bl

  *(_QWORD *)this = a2;
  v3 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( *(int *)(v3 + 1648) >= 0x2000 || *(_BYTE *)(v3 + 1932) )
    *((_DWORD *)this + 2) = *((_DWORD *)DXGGLOBAL::GetGlobal() + 195);
  else
    *((_DWORD *)this + 2) = 0;
  v4 = *(_QWORD *)(*(_QWORD *)this + 16LL);
  if ( *(_DWORD *)(*(_QWORD *)this + 280LL) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v4 + 80)) )
      goto LABEL_5;
    v8 = (void *)(v4 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v4 + 56)) )
      goto LABEL_5;
    v8 = (void *)(v4 + 56);
  }
  KeWaitForSingleObject(v8, Executive, 0, 0, 0LL);
LABEL_5:
  if ( !*((_DWORD *)this + 2) )
  {
    v7 = *(_QWORD *)this;
    KeEnterCriticalRegion();
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v7 + 80), 0) )
      return this;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL) + 80LL));
    v9 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v7 + 16) + 16LL));
    v11 = v9;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v10, 40LL);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v7 + 80), 1u);
    if ( v11 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v7 + 16) + 16LL));
    v12 = *(_QWORD *)(v7 + 16);
LABEL_25:
    ExReleasePushLockSharedEx(*(_QWORD *)(v12 + 16) + 80LL, 0LL);
    KeLeaveCriticalRegion();
    return this;
  }
  v5 = *(_QWORD *)this;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v5 + 88, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 16LL) + 80LL));
    v13 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v5 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v5 + 88));
    if ( v13 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v5 + 16) + 16LL));
    v12 = *(_QWORD *)(v5 + 16);
    goto LABEL_25;
  }
  return this;
}
