/*
 * XREFs of DpiFdoHandleStopDevice @ 0x1C01950D0
 * Callers:
 *     DpiFdoHandleRemoveDevice @ 0x1C0194D60 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C0195330 (DpiFdoHandleSurpriseRemoval.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000BB0C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00DF204 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiFdoStopMiracastSession @ 0x1C00E02B0 (DpiFdoStopMiracastSession.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ @ 0x1C00FAC28 (-StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ.c)
 *     DpiPnpEnableVga @ 0x1C00FC574 (DpiPnpEnableVga.c)
 *     DpiFdoStopAdapter @ 0x1C0195AFC (DpiFdoStopAdapter.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C0196380 (DpiEnableMsBddFallbackDriver.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C019E14C (DpiLdaStopAllAdaptersInChain.c)
 */

__int64 __fastcall DpiFdoHandleStopDevice(struct _DEVICE_OBJECT *a1, PIRP Irp)
{
  unsigned int v4; // edi
  PVOID DeviceExtension; // rbx
  int v6; // eax
  bool v7; // r14
  void *v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  struct DXGGLOBAL *Global; // rax
  int started; // r14d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  union _LARGE_INTEGER v16[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v17[8]; // [rsp+30h] [rbp-68h] BYREF

  memset(v17, 0, sizeof(v17));
  EtwActivityIdControl(3u, (LPGUID)&v17[1]);
  v4 = 0;
  DeviceExtension = a1->DeviceExtension;
  v17[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v17[3]) = 5;
  v16[0].QuadPart = -300000000LL;
  DpiFdoStopMiracastSession((__int64)a1, 1, v16, 0x82u);
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 483) )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  v6 = *((_DWORD *)DeviceExtension + 60);
  v7 = v6 == 2;
  if ( *((_DWORD *)DeviceExtension + 126) )
  {
    DpiLdaStopAllAdaptersInChain(a1);
  }
  else if ( v6 == 2 )
  {
    DpiFdoStopAdapter(a1);
  }
  v8 = (void *)*((_QWORD *)DeviceExtension + 144);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *((_QWORD *)DeviceExtension + 144) = 0LL;
  }
  if ( *((_DWORD *)DeviceExtension + 59) != 4 )
  {
    v8 = (void *)(*((_DWORD *)DeviceExtension + 69) & 7);
    *((_DWORD *)DeviceExtension + (_QWORD)v8 + 61) = *((_DWORD *)DeviceExtension + 60);
    v9 = *((_DWORD *)DeviceExtension + 59);
    ++*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 60) = v9;
    *((_DWORD *)DeviceExtension + 59) = 4;
  }
  v10 = WdLogNewEntry5_WdEvent(v8);
  *(_QWORD *)(v10 + 24) = a1;
  WdLogEvent5_WdEvent(v10);
  if ( *((_BYTE *)DeviceExtension + 483) )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  if ( v7 && (unsigned int)(*((_DWORD *)DeviceExtension + 60) - 5) <= 1 )
  {
    Global = DXGGLOBAL::GetGlobal(v11);
    started = DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)Global + 69));
    if ( *((_BYTE *)DeviceExtension + 1136) )
    {
      AcquireMiniportListMutex();
      if ( dword_1C0057170 == 2 )
        DpiEnableMsBddFallbackDriver(v17);
      if ( (struct _DEVICE_OBJECT *)qword_1C00570C0 == a1 )
        qword_1C00570C0 = 0LL;
      _InterlockedExchange64(&qword_1C0056EC8, 0LL);
      KeReleaseMutex(Mutex, 0);
    }
    DpiPnpEnableVga(1u, 0, started, (__int64)v17);
  }
  DxgkMiracastQueryMiracastSupportInternal(0LL);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MinorFunction == 4 )
  {
    ++Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
    Irp->IoStatus.Status = 0;
    return (unsigned int)IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  }
  return v4;
}
