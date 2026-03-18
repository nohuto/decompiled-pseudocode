/*
 * XREFs of HmgShareLockCheck @ 0x1C0049310
 * Callers:
 *     GreCreateBitmap @ 0x1C00227F0 (GreCreateBitmap.c)
 *     GreSetBitmapOwnerEx @ 0x1C00229D8 (GreSetBitmapOwnerEx.c)
 *     hbmSelectBitmap @ 0x1C002DCA0 (hbmSelectBitmap.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0038E50 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00456B0 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     GreDCSelectPen @ 0x1C0048F10 (GreDCSelectPen.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C004918C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00492E4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00494B8 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0056E20 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     bMigrateSurfaceForConversion @ 0x1C005B360 (bMigrateSurfaceForConversion.c)
 *     GreCreatePatternBrushInternal @ 0x1C005CFD0 (GreCreatePatternBrushInternal.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C006C134 (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 *     GreDCSelectBrush @ 0x1C006E4B0 (GreDCSelectBrush.c)
 *     ?vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C00A8C28 (-vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00B2E80 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00B2FAC (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00BAC28 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     bInitBMOBJ @ 0x1C013AE60 (bInitBMOBJ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgShareLockCheck(int a1, char a2)
{
  __int64 v2; // rsi
  __int16 v4; // r15d^2
  _DWORD *SystemArgument2; // rbx
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v9; // rax
  __int64 v10; // rbp
  signed __int32 v11; // eax
  unsigned int v12; // edx
  unsigned int v14; // [rsp+2Ch] [rbp-3Ch]
  int v15; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0LL;
  v4 = HIWORD(a1);
  if ( (unsigned __int16)a1 >= (unsigned int)gcMaxHmgr )
    return 0LL;
  SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
  v6 = 3LL * (unsigned __int16)a1;
  v7 = (unsigned __int16)a1;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v15);
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v9 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
    v10 = *(_QWORD *)(v9 + 72);
  else
    v10 = 0LL;
LABEL_6:
  _m_prefetchw(&SystemArgument2[2 * v6 + 2]);
  v11 = SystemArgument2[2 * v6 + 2];
  v12 = v11 & 0xFFFFFFFE;
  if ( ((v11 & 0xFFFFFFFE) == (v15 & 0xFFFFFFFC) || !v12 || v10 && v12 == *(_DWORD *)(v10 + 8))
    && (SystemArgument2[2 * v6 + 3] & 0x20000000) == 0 )
  {
    while ( (SystemArgument2[2 * v6 + 3] & 0x40000000) == 0 )
    {
      if ( (v11 & 1) != 0 )
      {
        KeDelayExecutionThread(0, 0, gpLockShortDelay);
        goto LABEL_6;
      }
      if ( v11 != _InterlockedCompareExchange(&SystemArgument2[2 * v6 + 2], v11 | 1, v11)
        || (SystemArgument2[2 * v6 + 3] & 0x40000000) != 0 )
      {
        goto LABEL_6;
      }
      *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v7) = 0LL;
      HIBYTE(SystemArgument2[2 * v6 + 3]) |= 0x40u;
      _m_prefetchw(&SystemArgument2[2 * v6 + 2]);
      v14 = SystemArgument2[2 * v6 + 2] & 0xFFFFFFFE;
      _InterlockedExchange(&SystemArgument2[2 * v6 + 2], v14);
      v11 = v14;
    }
    ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v7, 0LL);
    if ( BYTE2(SystemArgument2[2 * v6 + 3]) == a2 && LOWORD(SystemArgument2[2 * v6 + 3]) == v4 )
    {
      v2 = *(_QWORD *)&SystemArgument2[2 * v6];
      ++*(_DWORD *)(v2 + 8);
    }
    if ( (SystemArgument2[2 * v6 + 3] & 0x40000000) != 0 )
    {
      ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v7);
    }
    else
    {
      _m_prefetchw(&SystemArgument2[2 * v6 + 2]);
      _InterlockedExchange(&SystemArgument2[2 * v6 + 2], SystemArgument2[2 * v6 + 2] & 0xFFFFFFFE);
    }
  }
  KeLeaveCriticalRegion();
  return v2;
}
