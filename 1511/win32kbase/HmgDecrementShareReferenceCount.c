/*
 * XREFs of HmgDecrementShareReferenceCount @ 0x1C0031AF0
 * Callers:
 *     GreCreateBitmap @ 0x1C00227F0 (GreCreateBitmap.c)
 *     GreSetBitmapOwnerEx @ 0x1C00229D8 (GreSetBitmapOwnerEx.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0022AE0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C00237D8 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     GreSelectVisRgn @ 0x1C0023950 (GreSelectVisRgn.c)
 *     GreSetBitmapOwner @ 0x1C0023A30 (GreSetBitmapOwner.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0024220 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C00266A0 (NtGdiDeleteObjectApp.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002D9A0 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0030EE4 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0031AC8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00361E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     bDeleteSurface @ 0x1C0037780 (bDeleteSurface.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C00380F0 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0038E50 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C004562C (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00456B0 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00461F0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C004918C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00494B8 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00494F4 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     bDeletePalette @ 0x1C004B470 (bDeletePalette.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00599A0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     bDynamicModeChange @ 0x1C0059E84 (bDynamicModeChange.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C005AF20 (vDynamicConvertNewSurfaceDCs.c)
 *     bMigrateSurfaceForConversion @ 0x1C005B360 (bMigrateSurfaceForConversion.c)
 *     GreCreatePatternBrushInternal @ 0x1C005CFD0 (GreCreatePatternBrushInternal.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C005D180 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C005DC98 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C006C134 (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C006FEE0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     EngModifySurface @ 0x1C0075FE0 (EngModifySurface.c)
 *     EngAssociateSurface @ 0x1C00771E0 (EngAssociateSurface.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C0083F20 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C00A8A80 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00A8AD0 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00B2E80 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00B2FAC (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00B4580 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00B7210 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00B9798 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C00BC434 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 *     bInitPALOBJ @ 0x1C013A6D4 (bInitPALOBJ.c)
 *     bInitBMOBJ @ 0x1C013AE60 (bInitBMOBJ.c)
 * Callees:
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00B5C24 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

__int64 __fastcall HmgDecrementShareReferenceCount(_DWORD *a1)
{
  _DWORD *SystemArgument2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rdi
  signed __int32 v5; // eax
  __int64 v7; // r14
  unsigned int v8; // esi
  unsigned int v9; // [rsp+2Ch] [rbp-2Ch]
  char v10; // [rsp+60h] [rbp+8h] BYREF

  SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
  v3 = (unsigned __int16)*a1;
  v4 = 3 * v3;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v10);
  _m_prefetchw(&SystemArgument2[6 * v3 + 2]);
  v5 = SystemArgument2[6 * v3 + 2];
  if ( (SystemArgument2[6 * v3 + 3] & 0x20000000) != 0 )
  {
LABEL_9:
    KeLeaveCriticalRegion();
    return 0LL;
  }
  while ( (SystemArgument2[6 * v3 + 3] & 0x40000000) == 0 )
  {
    if ( (v5 & 1) != 0 )
    {
      KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_8:
      _m_prefetchw(&SystemArgument2[6 * v3 + 2]);
      v5 = SystemArgument2[6 * v3 + 2];
      if ( (SystemArgument2[6 * v3 + 3] & 0x20000000) != 0 )
        goto LABEL_9;
    }
    else
    {
      if ( v5 != _InterlockedCompareExchange(&SystemArgument2[6 * v3 + 2], v5 | 1, v5)
        || (SystemArgument2[6 * v3 + 3] & 0x40000000) != 0 )
      {
        goto LABEL_8;
      }
      *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v3) = 0LL;
      HIBYTE(SystemArgument2[6 * v3 + 3]) |= 0x40u;
      _m_prefetchw(&SystemArgument2[6 * v3 + 2]);
      v9 = SystemArgument2[6 * v3 + 2] & 0xFFFFFFFE;
      _InterlockedExchange(&SystemArgument2[6 * v3 + 2], v9);
      v5 = v9;
    }
  }
  v7 = 8 * v3;
  ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v3, 0LL);
  if ( *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*a1 + 14) == 5
    && HIDWORD(WPP_MAIN_CB.SecurityDescriptor)
    && gpentHmgrAltStacks )
  {
    RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*a1);
  }
  v8 = a1[2];
  a1[2] = v8 - 1;
  if ( (SystemArgument2[2 * v4 + 3] & 0x40000000) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v7);
  }
  else
  {
    _m_prefetchw(&SystemArgument2[2 * v4 + 2]);
    _InterlockedExchange(&SystemArgument2[2 * v4 + 2], SystemArgument2[2 * v4 + 2] & 0xFFFFFFFE);
  }
  KeLeaveCriticalRegion();
  return v8;
}
