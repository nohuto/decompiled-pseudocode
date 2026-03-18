/*
 * XREFs of DpiFdoHandleStopDevice @ 0x1C016C440
 * Callers:
 *     DpiFdoHandleRemoveDevice @ 0x1C016C0C0 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C016C620 (DpiFdoHandleSurpriseRemoval.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B77C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000B7B0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiFdoStopMiracastSession @ 0x1C00CA870 (DpiFdoStopMiracastSession.c)
 *     DpiPnpEnableVga @ 0x1C00CE504 (DpiPnpEnableVga.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ @ 0x1C00CE904 (-StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ.c)
 *     DpiFdoStopAdapter @ 0x1C016CD64 (DpiFdoStopAdapter.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C016FE50 (DpiEnableMsBddFallbackDriver.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C0174748 (DpiLdaStopAllAdaptersInChain.c)
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
  __int64 v14; // rcx
  struct DXGGLOBAL *Global; // rax
  int started; // r14d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  union _LARGE_INTEGER v19; // [rsp+40h] [rbp+8h] BYREF

  DeviceExtension = a1->DeviceExtension;
  v19.QuadPart = -300000000LL;
  v5 = 0;
  DpiFdoStopMiracastSession((__int64)a1, 1, &v19, 0x82u);
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 483) )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  v9 = *((_DWORD *)DeviceExtension + 60);
  v10 = v9 == 2;
  if ( *((_DWORD *)DeviceExtension + 126) )
  {
    DpiLdaStopAllAdaptersInChain(a1);
  }
  else if ( v9 == 2 )
  {
    DpiFdoStopAdapter(a1);
  }
  v11 = (void *)*((_QWORD *)DeviceExtension + 138);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *((_QWORD *)DeviceExtension + 138) = 0LL;
  }
  if ( *((_DWORD *)DeviceExtension + 59) != 4 )
  {
    v11 = (void *)(*((_DWORD *)DeviceExtension + 69) & 7);
    *((_DWORD *)DeviceExtension + (_QWORD)v11 + 61) = *((_DWORD *)DeviceExtension + 60);
    v12 = *((_DWORD *)DeviceExtension + 59);
    ++*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 60) = v12;
    *((_DWORD *)DeviceExtension + 59) = 4;
  }
  v13 = WdLogNewEntry5_WdEvent(v11, v6, v7, v8);
  *(_QWORD *)(v13 + 24) = DpiFdoDispatchPnp;
  *(_QWORD *)(v13 + 32) = a1;
  WdLogEvent5_WdEvent(v13);
  if ( *((_BYTE *)DeviceExtension + 483) )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  if ( v10 && (unsigned int)(*((_DWORD *)DeviceExtension + 60) - 5) <= 1 )
  {
    Global = DXGGLOBAL::GetGlobal(v14);
    started = DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)Global + 88));
    if ( *((_BYTE *)DeviceExtension + 1088) )
    {
      AcquireMiniportListMutex();
      if ( dword_1C0046FB0 == 2 )
        DpiEnableMsBddFallbackDriver();
      if ( (struct _DEVICE_OBJECT *)qword_1C0046F00 == a1 )
        qword_1C0046F00 = 0LL;
      _InterlockedExchange64(&qword_1C0046D08, 0LL);
      KeReleaseMutex(Mutex, 0);
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
