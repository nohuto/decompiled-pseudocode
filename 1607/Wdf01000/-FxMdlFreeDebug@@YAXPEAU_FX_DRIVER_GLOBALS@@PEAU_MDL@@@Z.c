/*
 * XREFs of ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C007E690
 * Callers:
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00033A0 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0004280 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C00066C0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEAD@Z @ 0x1C00073B0 (-Release@FxRequest@@UEAAKPEAXJPEAD@Z.c)
 *     ??_GFxRequest@@UEAAPEAXI@Z @ 0x1C0007890 (--_GFxRequest@@UEAAPEAXI@Z.c)
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C0007960 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEAD@Z @ 0x1C0007B90 (-Release@FxObject@@UEAAKPEAXJPEAD@Z.c)
 *     ?SelfDestruct@FxObject@@MEAAXXZ @ 0x1C00087E0 (-SelfDestruct@FxObject@@MEAAXXZ.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C0008F40 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000B380 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000BFD0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?Dispose@FxRequestBase@@MEAAEXZ @ 0x1C000CCD0 (-Dispose@FxRequestBase@@MEAAEXZ.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C000CFF0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1C000EFA0 (--_GFxIoContext@@UEAAPEAXI@Z.c)
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C000FF80 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     FxIoTargetSendIoctl @ 0x1C0029020 (FxIoTargetSendIoctl.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C00296B8 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C002A610 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     imp_WdfObjectDereferenceActual @ 0x1C0032AE0 (imp_WdfObjectDereferenceActual.c)
 *     ?ReleaseAndRestore@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C003A000 (-ReleaseAndRestore@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?FxMdlFree@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003B6E0 (-FxMdlFree@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C0063208 (--1FxRequestBase@@MEAA@XZ.c)
 *     ??1FxIoContext@@UEAA@XZ @ 0x1C0064058 (--1FxIoContext@@UEAA@XZ.c)
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C0077C40 (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C0077EBC (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C007A3DC (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ??1FxRequestMemory@@UEAA@XZ @ 0x1C007B2FC (--1FxRequestMemory@@UEAA@XZ.c)
 *     ?ReleaseAndRestore@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C008C2B0 (-ReleaseAndRestore@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxMdlFreeDebug(_FX_DRIVER_GLOBALS *FxDriverGlobals, _MDL *Mdl)
{
  FxDriverGlobalsDebugExtension *DebugExtension; // rax
  unsigned __int64 *p_AllocatedMdlsLock; // r12
  char v6; // bp
  FxAllocatedMdls *p_AllocatedMdls; // r15
  FxAllocatedMdls *v8; // rbx
  FxAllocatedMdls **p_Next; // r14
  KIRQL v10; // r13
  __int64 v11; // rcx
  _MDL **v12; // rdx
  __int64 v13; // rdx
  bool v14; // zf

  DebugExtension = FxDriverGlobals->DebugExtension;
  if ( DebugExtension )
  {
    p_AllocatedMdlsLock = &DebugExtension->AllocatedMdlsLock;
    v6 = 0;
    p_AllocatedMdls = &DebugExtension->AllocatedMdls;
    v8 = &DebugExtension->AllocatedMdls;
    p_Next = 0LL;
    v10 = KeAcquireSpinLockRaiseToDpc(&DebugExtension->AllocatedMdlsLock);
    if ( p_AllocatedMdls )
    {
      while ( 2 )
      {
        v11 = 0LL;
        v12 = (_MDL **)v8;
        do
        {
          if ( *v12 == Mdl )
          {
            v13 = v11;
            v8->Info[v13].Mdl = 0LL;
            v8->Info[v13].Owner = 0LL;
            v8->Info[v13].Caller = 0LL;
            v14 = v8->Count-- == 1;
            if ( v14 && v8 != p_AllocatedMdls )
            {
              *p_Next = v8->Next;
              ExFreePoolWithTag(v8, 0);
            }
            IoFreeMdl(Mdl);
            v6 = 1;
            goto LABEL_13;
          }
          v11 = (unsigned int)(v11 + 1);
          v12 += 3;
        }
        while ( (unsigned int)v11 < 0x10 );
        p_Next = &v8->Next;
        v8 = v8->Next;
        if ( v8 )
          continue;
        break;
      }
    }
LABEL_13:
    KeReleaseSpinLock(p_AllocatedMdlsLock, v10);
    if ( !v6 )
      FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  else
  {
    IoFreeMdl(Mdl);
  }
}
