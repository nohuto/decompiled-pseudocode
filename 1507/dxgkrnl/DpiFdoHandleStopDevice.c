/*
 * XREFs of DpiFdoHandleStopDevice @ 0x1C0167D70
 * Callers:
 *     DpiFdoHandleRemoveDevice @ 0x1C0167A10 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C0167F30 (DpiFdoHandleSurpriseRemoval.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0005A48 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiFdoStopMiracastSession @ 0x1C00BC5D0 (DpiFdoStopMiracastSession.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ @ 0x1C00D83B4 (-StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ.c)
 *     DpiPnpEnableVga @ 0x1C00DEED0 (DpiPnpEnableVga.c)
 *     DpiFdoStopAdapter @ 0x1C0168634 (DpiFdoStopAdapter.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C016B640 (DpiEnableMsBddFallbackDriver.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C016FF18 (DpiLdaStopAllAdaptersInChain.c)
 */

__int64 __fastcall DpiFdoHandleStopDevice(struct _DEVICE_OBJECT *a1, PIRP Irp)
{
  PVOID DeviceExtension; // rbx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  bool v10; // r14
  void *v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGGLOBAL *Global; // rax
  int started; // r14d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  union _LARGE_INTEGER v22; // [rsp+40h] [rbp+8h] BYREF

  DeviceExtension = a1->DeviceExtension;
  v22.QuadPart = -300000000LL;
  v5 = 0;
  DpiFdoStopMiracastSession((__int64)a1, 1, &v22, 0x82u);
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 451) )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  v9 = *((_DWORD *)DeviceExtension + 60);
  v10 = v9 == 2;
  if ( *((_DWORD *)DeviceExtension + 118) )
  {
    DpiLdaStopAllAdaptersInChain(a1);
  }
  else if ( v9 == 2 )
  {
    DpiFdoStopAdapter(a1);
  }
  v11 = (void *)*((_QWORD *)DeviceExtension + 133);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *((_QWORD *)DeviceExtension + 133) = 0LL;
  }
  v12 = *((_DWORD *)DeviceExtension + 59);
  if ( v12 != 4 )
  {
    *((_DWORD *)DeviceExtension + 60) = v12;
    *((_DWORD *)DeviceExtension + 59) = 4;
  }
  v13 = WdLogNewEntry5_WdEvent(v11, v6, v7, v8);
  *(_QWORD *)(v13 + 24) = DpiFdoDispatchPnp;
  *(_QWORD *)(v13 + 32) = a1;
  WdLogEvent5_WdEvent(v13);
  if ( *((_BYTE *)DeviceExtension + 451) )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  if ( v10 && (unsigned int)(*((_DWORD *)DeviceExtension + 60) - 5) <= 1 )
  {
    Global = DXGGLOBAL::GetGlobal(v15, v14, v16, v17);
    started = DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)Global + 70));
    if ( *((_BYTE *)DeviceExtension + 1056) )
    {
      AcquireMiniportListMutex();
      if ( dword_1C0046F30 == 2 )
        DpiEnableMsBddFallbackDriver();
      if ( (struct _DEVICE_OBJECT *)qword_1C0046E80 == a1 )
        qword_1C0046E80 = 0LL;
      _InterlockedExchange64(&qword_1C0046C88, 0LL);
      KeReleaseMutex((PRKMUTEX)Mutex, 0);
    }
    DpiPnpEnableVga(1u, 0, started);
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MinorFunction == 4 )
  {
    ++Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
    Irp->IoStatus.Status = 0;
    return (unsigned int)IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  }
  return v5;
}
