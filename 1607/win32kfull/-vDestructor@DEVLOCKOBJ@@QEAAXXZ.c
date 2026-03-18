/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990
 * Callers:
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C0005F74 (-iSetMapMode@DC@@QEAAHH@Z.c)
 *     GreCreateBitmapFromDxSurface @ 0x1C0009B98 (GreCreateBitmapFromDxSurface.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0014BC0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C0029B78 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00341DC (GreSetDIBitsToDeviceInternal.c)
 *     GreExtTextOutRect @ 0x1C0039588 (GreExtTextOutRect.c)
 *     GreExtTextOutWInternal @ 0x1C00399F8 (GreExtTextOutWInternal.c)
 *     GreDrawStream @ 0x1C0039BA8 (GreDrawStream.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0041BD0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0048970 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C0064F58 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     NtGdiPatBlt @ 0x1C00942F0 (NtGdiPatBlt.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00B39E8 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreStretchDIBitsInternal @ 0x1C00BDAD8 (GreStretchDIBitsInternal.c)
 *     GreGetDIBColorTable @ 0x1C00F03D0 (GreGetDIBColorTable.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00F05D8 (GreCreateCompatibleBitmapInternal.c)
 *     GreRealizeDefaultPalette @ 0x1C01008B0 (GreRealizeDefaultPalette.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C0101540 (vAccNotifyDeleteSurfaceWrap.c)
 *     GreGetBoundsRect @ 0x1C011EC10 (GreGetBoundsRect.c)
 *     NtGdiFrameRgn @ 0x1C0139550 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C0139B60 (NtGdiFillRgn.c)
 *     GreRealizePalette @ 0x1C01458E0 (GreRealizePalette.c)
 *     GrePolyTextOutW @ 0x1C0159D40 (GrePolyTextOutW.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C025F3CC (GreSpDwmSyncCaptureSurfaceBits.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C025FFE0 (DxEngSyncPaletteTableWithDevice.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C026514C (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0266BC0 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreDrawEscape @ 0x1C02672B8 (GreDrawEscape.c)
 *     GreDeleteWnd @ 0x1C027A5A0 (GreDeleteWnd.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C02856C4 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0285858 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C028D050 (-RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C028D240 (-RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRU.c)
 *     ?RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1C028D4E0 (-RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z.c)
 *     ?RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C028D670 (-RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXP.c)
 *     ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C028D880 (-RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C028DA40 (-RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_REC.c)
 *     ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C028DC20 (-RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C028DE20 (-RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_B.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C028E030 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     ?RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C028E2A0 (-RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C028E510 (-RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEA.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C028E7A0 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C028E910 (-RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEA.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C028EAF0 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C028ECE0 (-RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C028FD68 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02B1D1C (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C02B2338 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     GreSetDIBColorTable @ 0x1C02B41F0 (GreSetDIBColorTable.c)
 *     GreSetSystemPaletteUse @ 0x1C02B443C (GreSetSystemPaletteUse.c)
 *     NtGdiUpdateColors @ 0x1C02B4B20 (NtGdiUpdateColors.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02B6B74 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 *     GreDescribePixelFormat @ 0x1C02B6C34 (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C02B6D90 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048594 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C004A9B8 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C004FFEC (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     GreDereferenceObject @ 0x1C00D7D48 (GreDereferenceObject.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C011327C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C01132B8 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0257CE4 (--0SURFREF@@QEAA@XZ.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C025B528 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C028CAF8 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C028EF14 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

void __fastcall DEVLOCKOBJ::vDestructor(DEVLOCKOBJ *this)
{
  __int64 v1; // rbx
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  HSURF v18; // rbx
  char v19; // bl
  __int64 v20; // rax
  DCVISRGNSHARELOCK *v21; // rcx
  __int64 v22; // rax
  _BYTE v23[8]; // [rsp+30h] [rbp-98h] BYREF
  DC *v24[6]; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v25[32]; // [rsp+68h] [rbp-60h] BYREF
  HSURF *v26; // [rsp+88h] [rbp-40h]
  _BYTE v27[32]; // [rsp+90h] [rbp-38h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-18h]

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
  {
    v3 = *((_DWORD *)this + 6);
    v4 = *(_QWORD *)(v1 + 48);
    if ( (v3 & 0x1000) != 0 )
    {
      if ( (v3 & 0x400) != 0 )
      {
        bUnHookRedir((DEVLOCKOBJ *)((char *)this + 32));
        *((_DWORD *)this + 6) &= ~0x400u;
      }
      if ( (*((_DWORD *)this + 6) & 0x2000) != 0 )
      {
        bUnHookBmpDrv((DEVLOCKOBJ *)((char *)this + 32));
        *((_DWORD *)this + 6) &= ~0x2000u;
      }
      v5 = *((_QWORD *)this + 4);
      if ( v5 && (*((_DWORD *)this + 6) & 0x1000) != 0 )
      {
        if ( (*(_DWORD *)(v5 + 44) & 1) == 0 )
          SURFACE::bUnMap(*(SURFACE **)(v5 + 512), this, *((struct DC **)this + 4));
        *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) &= ~1u;
        v6 = *((_QWORD *)this + 4);
        if ( (*(_DWORD *)(v6 + 36) & 0x4000) != 0 && *(_QWORD *)(v6 + 488) && *(_DWORD *)(v6 + 504) )
          GreUpdateSpriteDevLockEnd((DEVLOCKOBJ *)((char *)this + 32), *((_DWORD *)this + 6) & 0x400000);
      }
      if ( (*((_DWORD *)this + 6) & 0x10) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)this + 4) + 36LL) &= ~0x4000u;
        *(_QWORD *)(*((_QWORD *)this + 4) + 512LL) = *(_QWORD *)(v4 + 2576);
      }
      DEVLOCKOBJ::vClearRenderState(this);
    }
    XDCOBJ::vUnlock((DEVLOCKOBJ *)((char *)this + 32));
    *((_QWORD *)this + 4) = 0LL;
  }
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x1000u;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v7, v8, v9);
    if ( ThreadWin32Thread )
    {
      v11 = *ThreadWin32Thread;
      if ( v11 )
      {
        *(_QWORD *)(v11 + 320) = 0LL;
        *(_QWORD *)(v11 + 312) = 0LL;
      }
    }
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
  v12 = *((_DWORD *)this + 6);
  if ( (v12 & 8) != 0 )
    *((_DWORD *)this + 6) = v12 & 0xFFFFFFF7;
  v13 = *((_QWORD *)this + 1);
  if ( v13 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v13);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  }
  if ( *((_QWORD *)this + 11) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v24, *((HDC *)this + 12));
    SURFREF::SURFREF((SURFREF *)v25);
    SURFREF::SURFREF((SURFREF *)v27);
    LOBYTE(v14) = 5;
    v15 = HmgShareLock(*((_QWORD *)this + 10), v14);
    v16 = *((_QWORD *)this + 11);
    LOBYTE(v17) = 5;
    v26 = (HSURF *)v15;
    v28 = HmgShareLock(v16, v17);
    v18 = *v26;
    *((_QWORD *)v24[0] + 64) = v28;
    DEC_SHARE_REF_CNT(v26);
    v26 = 0LL;
    DEC_SHARE_REF_CNT(v28);
    v28 = 0LL;
    GreDereferenceObject(v18);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    if ( this != (DEVLOCKOBJ *)-104LL )
      *((_DWORD *)v24[0] + 9) |= *((_DWORD *)this + 26);
    if ( (*((_DWORD *)v24[0] + 9) & 0x200) != 0 )
    {
      v19 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v19 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v23);
      v20 = HmgShareUnlockRemoveObject(*((_QWORD *)this + 11), 0LL, 0LL, 0LL, 5);
      if ( v20 )
        SURFACE::bDeleteSurface(v20, 0LL, 1LL);
      *((_QWORD *)v24[0] + 65) = 0LL;
      DC::vClearRendering(v24[0]);
      *((_QWORD *)this + 11) = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v21);
      if ( v19 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v22 = HmgShareUnlockRemoveObject(*((_QWORD *)this + 11), 0LL, 0LL, 0LL, 5);
      if ( v22 )
        SURFACE::bDeleteSurface(v22, 0LL, 1LL);
      *((_QWORD *)v24[0] + 65) = 0LL;
      *((_QWORD *)this + 11) = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v27);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v25);
    DCOBJ::~DCOBJ((DCOBJ *)v24);
  }
}
