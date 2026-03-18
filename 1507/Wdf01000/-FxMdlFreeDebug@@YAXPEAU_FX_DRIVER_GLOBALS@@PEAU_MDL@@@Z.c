/*
 * XREFs of ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C00326D4
 * Callers:
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C0004580 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1C0010230 (--_GFxIoContext@@UEAAPEAXI@Z.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C00168C4 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     FxIoTargetSendIoctl @ 0x1C00169F0 (FxIoTargetSendIoctl.c)
 *     ??_GFxRequest@@UEAAPEAXI@Z @ 0x1C0020800 (--_GFxRequest@@UEAAPEAXI@Z.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C005C624 (--1FxRequestBase@@MEAA@XZ.c)
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C00742C0 (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C0074580 (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C0077068 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ??1FxRequestMemory@@UEAA@XZ @ 0x1C007878C (--1FxRequestMemory@@UEAA@XZ.c)
 *     FxIoTargetSendIo @ 0x1C0081388 (FxIoTargetSendIo.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x1C008C380 (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 *     ?ReleaseAndRestore@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C008CE30 (-ReleaseAndRestore@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C008E8F0 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 *     ?ReleaseAndRestore@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0091620 (-ReleaseAndRestore@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
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
  int v15; // [rsp+60h] [rbp+8h] BYREF

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
    {
      v15 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        FxDriverGlobals->Public.DriverName,
        (const char *)&v15,
        FxDriverGlobals->Public.DriverName,
        (const char *)&v15);
      if ( FxDriverGlobals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
    }
  }
  else
  {
    IoFreeMdl(Mdl);
  }
}
