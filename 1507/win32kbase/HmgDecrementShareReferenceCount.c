/*
 * XREFs of HmgDecrementShareReferenceCount @ 0x1C003BE20
 * Callers:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C000C0A0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C000C498 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00251C0 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00251EC (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0026110 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C00346E0 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C003A070 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C003A8E0 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003A914 (--1SURFREF@@QEAA@XZ.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C003AF74 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C003B168 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003BBD8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C003DDD0 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C003DF50 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C00417F0 (NtGdiDeleteObjectApp.c)
 *     GreSetBitmapOwner @ 0x1C0044330 (GreSetBitmapOwner.c)
 *     GreSelectVisRgn @ 0x1C0044570 (GreSelectVisRgn.c)
 *     GreDeleteObject @ 0x1C00446F0 (GreDeleteObject.c)
 *     GreSetBitmapOwnerEx @ 0x1C00447D8 (GreSetBitmapOwnerEx.c)
 *     GreIsRendering @ 0x1C00546A0 (GreIsRendering.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C005A9B8 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C005AB38 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C005AC00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C005BD90 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C005D870 (vDynamicConvertNewSurfaceDCs.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C0069690 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C007BC6C (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00B0BA0 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00B4BE0 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00B78B0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C00BAC04 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 * Callees:
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00B3150 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

__int64 __fastcall HmgDecrementShareReferenceCount(_DWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rdi
  signed __int32 v5; // eax
  __int64 v7; // r14
  unsigned int v8; // esi
  unsigned int v9; // [rsp+2Ch] [rbp-2Ch]
  char v10; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  v3 = (unsigned __int16)*a1;
  v4 = 3 * v3;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v10);
  _m_prefetchw((const void *)(v2 + 24 * v3 + 8));
  v5 = *(_DWORD *)(v2 + 24 * v3 + 8);
  if ( (*(_BYTE *)(v2 + 24 * v3 + 15) & 0x20) != 0 )
  {
LABEL_9:
    KeLeaveCriticalRegion();
    return 0LL;
  }
  while ( (*(_BYTE *)(v2 + 24 * v3 + 15) & 0x40) == 0 )
  {
    if ( (v5 & 1) != 0 )
    {
      KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_8:
      _m_prefetchw((const void *)(v2 + 24 * v3 + 8));
      v5 = *(_DWORD *)(v2 + 24 * v3 + 8);
      if ( (*(_BYTE *)(v2 + 24 * v3 + 15) & 0x20) != 0 )
        goto LABEL_9;
    }
    else
    {
      if ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 24 * v3 + 8), v5 | 1, v5)
        || (*(_BYTE *)(v2 + 24 * v3 + 15) & 0x40) != 0 )
      {
        goto LABEL_8;
      }
      *((_QWORD *)gpentPushLock + v3) = 0LL;
      *(_BYTE *)(v2 + 24 * v3 + 15) |= 0x40u;
      _m_prefetchw((const void *)(v2 + 24 * v3 + 8));
      v9 = *(_DWORD *)(v2 + 24 * v3 + 8) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)(v2 + 24 * v3 + 8), v9);
      v5 = v9;
    }
  }
  v7 = 8 * v3;
  ExAcquirePushLockExclusiveEx((char *)gpentPushLock + 8 * v3, 0LL);
  if ( *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*a1 + 14) == 5
    && *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1)
    && gpentHmgrAltStacks )
  {
    RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*a1);
  }
  v8 = a1[2];
  a1[2] = v8 - 1;
  if ( (*(_BYTE *)(v2 + 8 * v4 + 15) & 0x40) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)gpentPushLock + v7, 0LL);
  }
  else
  {
    _m_prefetchw((const void *)(v2 + 8 * v4 + 8));
    _InterlockedExchange((volatile __int32 *)(v2 + 8 * v4 + 8), *(_DWORD *)(v2 + 8 * v4 + 8) & 0xFFFFFFFE);
  }
  KeLeaveCriticalRegion();
  return v8;
}
