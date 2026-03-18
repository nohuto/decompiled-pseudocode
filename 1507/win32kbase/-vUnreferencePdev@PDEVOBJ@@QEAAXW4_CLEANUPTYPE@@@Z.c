/*
 * XREFs of ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00345F0
 * Callers:
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C0019300 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     hdevEnumerate @ 0x1C0034180 (hdevEnumerate.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0038890 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     hdcOpenDCW @ 0x1C0053650 (hdcOpenDCW.c)
 *     bDynamicModeChange @ 0x1C005C7A4 (bDynamicModeChange.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0063F40 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvDestroyMDEV @ 0x1C0064C34 (DrvDestroyMDEV.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C006CE2C (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     ?MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C00B4A40 (-MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00B4AC0 (-MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00B8A80 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00B8D18 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00B9908 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C00BCF68 (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 *     EngDeleteDriverObj @ 0x1C00BE530 (EngDeleteDriverObj.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C005AC00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 */

void __fastcall PDEVOBJ::vUnreferencePdev(__int64 *a1, int a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  bool v6; // zf
  int v7; // edi
  __int64 v8; // rax
  struct PDEV *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]
  int v13; // [rsp+2Ch] [rbp-Ch]

  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  v5 = *a1;
  v6 = *(_DWORD *)(*a1 + 32) == 1;
  v7 = --*(_DWORD *)(v5 + 32);
  if ( v6 )
  {
    v8 = *a1;
    v9 = gppdevList;
    if ( gppdevList == (struct PDEV *)*a1 )
    {
      gppdevList = *(struct PDEV **)(v8 + 24);
    }
    else if ( gppdevList )
    {
      while ( 1 )
      {
        v10 = *((_QWORD *)v9 + 3);
        if ( v10 == v8 )
          break;
        v9 = (struct PDEV *)*((_QWORD *)v9 + 3);
        if ( !v10 )
          goto LABEL_2;
      }
      *((_QWORD *)v9 + 3) = *(_QWORD *)(v8 + 24);
    }
  }
LABEL_2:
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v4);
  GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  if ( !v7 )
  {
    v11 = *a1;
    v12 = a2;
    v13 = 1;
    vUnreferencePdevWorker((struct tagUNREFDATA *)&v11);
  }
}
