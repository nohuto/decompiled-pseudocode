/*
 * XREFs of ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031C50
 * Callers:
 *     hdcOpenDCW @ 0x1C0020120 (hdcOpenDCW.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032CE0 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     hdevEnumerate @ 0x1C0034350 (hdevEnumerate.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0068660 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvDestroyMDEV @ 0x1C0069344 (DrvDestroyMDEV.c)
 *     bDynamicModeChange @ 0x1C006A204 (bDynamicModeChange.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C006C980 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C006E598 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     ?MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C00C25A0 (-MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00C2620 (-MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00C6660 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00C68F8 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00C7020 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C00CA318 (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 *     EngDeleteDriverObj @ 0x1C00CBCF0 (EngDeleteDriverObj.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0069C90 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

void __fastcall PDEVOBJ::vUnreferencePdev(struct _LIST_ENTRY **a1, int a2)
{
  struct _LIST_ENTRY *v4; // rax
  bool v5; // zf
  int v6; // edi
  struct _LIST_ENTRY *v7; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v9; // rdx
  struct _LIST_ENTRY *v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]
  int v12; // [rsp+2Ch] [rbp-Ch]

  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
  v4 = *a1;
  v5 = LODWORD((*a1)[2].Flink) == 1;
  v6 = --LODWORD(v4[2].Flink);
  if ( v5 )
  {
    v7 = *a1;
    Blink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
    if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink == *a1 )
    {
      WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = v7[1].Blink;
    }
    else if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink )
    {
      while ( 1 )
      {
        v9 = Blink[1].Blink;
        if ( v9 == v7 )
          break;
        Blink = Blink[1].Blink;
        if ( !v9 )
          goto LABEL_2;
      }
      Blink[1].Blink = v7[1].Blink;
    }
  }
LABEL_2:
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  if ( !v6 )
  {
    v10 = *a1;
    v11 = a2;
    v12 = 1;
    vUnreferencePdevWorker((struct tagUNREFDATA *)&v10);
  }
}
