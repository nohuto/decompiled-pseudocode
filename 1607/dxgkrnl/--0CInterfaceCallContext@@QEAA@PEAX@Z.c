/*
 * XREFs of ??0CInterfaceCallContext@@QEAA@PEAX@Z @ 0x1C002A200
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C002A314 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?DpiSriovAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C002A3D0 (-DpiSriovAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?DpiSriovDetach@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C002A488 (-DpiSriovDetach@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiSriovEventComplete@@YAJPEAU_DEVICE_OBJECT@@PEAXK@Z @ 0x1C002A5B0 (-DpiSriovEventComplete@@YAJPEAU_DEVICE_OBJECT@@PEAXK@Z.c)
 *     ?DpiSriovNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXKPEA_K@Z @ 0x1C002A674 (-DpiSriovNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXKPEA_K@Z.c)
 *     ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1C002ED70 (-DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z.c)
 *     ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C002EDE0 (-DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x1C002EE60 (-DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z.c)
 *     ?DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z @ 0x1C002EEC0 (-DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z.c)
 *     ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x1C002EF20 (-DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z @ 0x1C002EF90 (-DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C002F010 (-DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiDdiResetVirtualFunction@@YAJPEAXG@Z @ 0x1C002F090 (-DpiDdiResetVirtualFunction@@YAJPEAXG@Z.c)
 *     ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x1C002F0F0 (-DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z @ 0x1C002F170 (-DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C002F1F0 (-DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x1C002F270 (-DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z.c)
 *     ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x1C002F2D0 (-DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z.c)
 *     DpiFdoDispatchIoctl @ 0x1C0193CE0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 */

CInterfaceCallContext *__fastcall CInterfaceCallContext::CInterfaceCallContext(CInterfaceCallContext *this, _QWORD *a2)
{
  struct _IO_REMOVE_LOCK *v2; // rdx
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax

  *(_QWORD *)this = a2;
  v2 = (struct _IO_REMOVE_LOCK *)a2[8];
  *((_WORD *)this + 10) = 0;
  *((_QWORD *)this + 1) = v2;
  v4 = IoAcquireRemoveLockEx(v2 + 2, v2, &File, 1u, 0x20u);
  *((_DWORD *)this + 4) = v4;
  if ( v4 >= 0 )
  {
    *((_BYTE *)this + 20) = 1;
    KeEnterCriticalRegion();
    v7 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v7 + 483) )
      DpiCheckForOutstandingD3Requests(v7);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*((_QWORD *)this + 1) + 168LL), 1u);
    v8 = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)this, 0LL);
    *((_DWORD *)this + 4) = v8;
    if ( v8 >= 0 )
      *((_BYTE *)this + 21) = 1;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v6 + 24) = *((int *)this + 4);
    WdLogEvent5_WdError(v6);
  }
  return this;
}
