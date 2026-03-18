/*
 * XREFs of HmgShareLockCheck @ 0x1C003AFC0
 * Callers:
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00251EC (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C003A938 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     GreSetBitmapOwnerEx @ 0x1C00447D8 (GreSetBitmapOwnerEx.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C005A9B8 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C005AB10 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     GreDCSelectBrush @ 0x1C005B010 (GreDCSelectBrush.c)
 *     GreDCSelectPen @ 0x1C005B290 (GreDCSelectPen.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0063F40 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?vAltCheckLock@XEPALOBJ2@@QEAAXPEAUHPALETTE__@@@Z @ 0x1C00B1920 (-vAltCheckLock@XEPALOBJ2@@QEAAXPEAUHPALETTE__@@@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00B72F0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00B8D18 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00BE150 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgShareLockCheck(int a1, char a2)
{
  __int64 v2; // rsi
  __int16 v4; // r15d^2
  __int64 v5; // rbx
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
  v5 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  v6 = 3LL * (unsigned __int16)a1;
  v7 = (unsigned __int16)a1;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v15);
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v9 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
    v10 = *(_QWORD *)(v9 + 72);
  else
    v10 = 0LL;
LABEL_6:
  _m_prefetchw((const void *)(v5 + 8 * v6 + 8));
  v11 = *(_DWORD *)(v5 + 8 * v6 + 8);
  v12 = v11 & 0xFFFFFFFE;
  if ( ((v11 & 0xFFFFFFFE) == (v15 & 0xFFFFFFFC) || !v12 || v10 && v12 == *(_DWORD *)(v10 + 8))
    && (*(_BYTE *)(v5 + 8 * v6 + 15) & 0x20) == 0 )
  {
    while ( (*(_BYTE *)(v5 + 8 * v6 + 15) & 0x40) == 0 )
    {
      if ( (v11 & 1) != 0 )
      {
        KeDelayExecutionThread(0, 0, gpLockShortDelay);
        goto LABEL_6;
      }
      if ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8 * v6 + 8), v11 | 1, v11)
        || (*(_BYTE *)(v5 + 8 * v6 + 15) & 0x40) != 0 )
      {
        goto LABEL_6;
      }
      *((_QWORD *)gpentPushLock + v7) = 0LL;
      *(_BYTE *)(v5 + 8 * v6 + 15) |= 0x40u;
      _m_prefetchw((const void *)(v5 + 8 * v6 + 8));
      v14 = *(_DWORD *)(v5 + 8 * v6 + 8) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)(v5 + 8 * v6 + 8), v14);
      v11 = v14;
    }
    ExAcquirePushLockExclusiveEx((char *)gpentPushLock + 8 * v7, 0LL);
    if ( *(_BYTE *)(v5 + 8 * v6 + 14) == a2 && *(_WORD *)(v5 + 8 * v6 + 12) == v4 )
    {
      v2 = *(_QWORD *)(v5 + 8 * v6);
      ++*(_DWORD *)(v2 + 8);
    }
    if ( (*(_BYTE *)(v5 + 8 * v6 + 15) & 0x40) != 0 )
    {
      ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * v7, 0LL);
    }
    else
    {
      _m_prefetchw((const void *)(v5 + 8 * v6 + 8));
      _InterlockedExchange((volatile __int32 *)(v5 + 8 * v6 + 8), *(_DWORD *)(v5 + 8 * v6 + 8) & 0xFFFFFFFE);
    }
  }
  KeLeaveCriticalRegion();
  return v2;
}
