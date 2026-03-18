/*
 * XREFs of ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0010CC0
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0064CC0 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0065370 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C006F7B0 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z.c)
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z @ 0x1C006FFD0 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z.c)
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C0070604 (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 *     ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1C01333A4 (-SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z.c)
 *     DxgkGetResourcePresentPrivateDriverData @ 0x1C0133D40 (DxgkGetResourcePresentPrivateDriverData.c)
 *     DxgkPinDirectFlipResources @ 0x1C013D310 (DxgkPinDirectFlipResources.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0065F40 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

DXGRESOURCEREFERENCE *__fastcall DXGPROCESS::GetResourceSafe(__int64 a1, DXGRESOURCEREFERENCE *a2, unsigned int a3)
{
  __int64 v3; // rbp
  unsigned int v7; // r9d
  __int64 v8; // r8
  int v9; // ecx
  struct DXGRESOURCE *v10; // rdx

  v3 = a1 + 192;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 192));
  v7 = (a3 >> 6) & 0xFFFFFF;
  if ( v7 < *(_DWORD *)(a1 + 232)
    && (v8 = *(_QWORD *)(a1 + 216),
        v9 = *(_DWORD *)(v8 + 16LL * v7 + 8),
        ((a3 >> 26) & 0x30) == (*(_BYTE *)(v8 + 16LL * v7 + 8) & 0x30))
    && (v9 & 0x1000) == 0
    && (v9 & 0xF) != 0
    && (*(_BYTE *)(v8 + 16LL * v7 + 8) & 0xF) == 4 )
  {
    v10 = *(struct DXGRESOURCE **)(v8 + 16LL * v7);
  }
  else
  {
    v10 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(a2, v10);
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return a2;
}
