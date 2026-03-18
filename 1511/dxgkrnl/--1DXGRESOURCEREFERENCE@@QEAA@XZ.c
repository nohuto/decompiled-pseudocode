/*
 * XREFs of ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0065E00
 * Callers:
 *     DxgkShareObjects @ 0x1C00621B0 (DxgkShareObjects.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C0064390 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0064CC0 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0065370 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C006D220 (-ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C006F7B0 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z.c)
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z @ 0x1C006FFD0 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z.c)
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C0070604 (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGRESOURCE@@PEAE@Z @ 0x1C0073410 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C012A050 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1C01333A4 (-SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z.c)
 *     DxgkGetResourcePresentPrivateDriverData @ 0x1C0133D40 (DxgkGetResourcePresentPrivateDriverData.c)
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0138A7C (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C0139024 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 *     ?UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C013BA6C (-UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgEnumHandleChildrenCB @ 0x1C013BF30 (DxgEnumHandleChildrenCB.c)
 *     DxgGetHandleDataCB @ 0x1C013C290 (DxgGetHandleDataCB.c)
 *     DxgkPinDirectFlipResources @ 0x1C013D310 (DxgkPinDirectFlipResources.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C015842C (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(struct _EX_RUNDOWN_REF **this)
{
  struct _EX_RUNDOWN_REF *v1; // rcx
  __int64 v2; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  int CurrentProcessSessionId; // edi
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  struct _KTHREAD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // edi
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rbx
  _QWORD *v18; // rax

  v1 = *this;
  if ( v1 )
    ExReleaseRundownProtection(v1 + 9);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 231) )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v4 = WdLogNewEntry5_WdAssertion(v2);
      *(_QWORD *)(v4 + 24) = 92LL;
      WdLogEvent5_WdAssertion(v4);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( !ThreadWin32Thread )
        return;
      v8 = *ThreadWin32Thread;
      if ( !v8 )
        return;
      v9 = *(_QWORD *)(v8 + 80);
    }
    else
    {
      v9 = 0LL;
    }
    if ( v9 )
    {
      v10 = KeGetCurrentThread();
      if ( !v10 )
      {
        v11 = WdLogNewEntry5_WdAssertion(v5);
        *(_QWORD *)(v11 + 24) = 92LL;
        WdLogEvent5_WdAssertion(v11);
      }
      v14 = PsGetCurrentProcessSessionId();
      if ( v14
        && (unsigned int)PsGetThreadSessionId(v10) == v14
        && (v16 = PsGetThreadWin32Thread(v10)) != 0
        && *(_QWORD *)v16 )
      {
        v17 = *(_QWORD *)(*(_QWORD *)v16 + 80LL);
      }
      else
      {
        v17 = 0LL;
      }
      if ( *(_DWORD *)(v17 + 136) )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12, v15);
        v18[3] = 275LL;
        v18[4] = 25LL;
        v18[5] = *(int *)(v17 + 136);
        v18[6] = 0LL;
        v18[7] = 0LL;
        WdLogEvent5_WdCriticalError(v18);
      }
    }
  }
}
