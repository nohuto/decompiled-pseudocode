/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0
 * Callers:
 *     GreCreateBitmapFromDxSurface @ 0x1C0003FD8 (GreCreateBitmapFromDxSurface.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C0006034 (-iSetMapMode@DC@@QEAAHH@Z.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C000DCA4 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001928C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     GreDrawStream @ 0x1C0026AD0 (GreDrawStream.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C003FD1C (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreRealizeDefaultPalette @ 0x1C007B930 (GreRealizeDefaultPalette.c)
 *     NtGdiPatBlt @ 0x1C00868F0 (NtGdiPatBlt.c)
 *     GreExtTextOutRect @ 0x1C0098EB8 (GreExtTextOutRect.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0098F78 (GreCreateCompatibleBitmapInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C0099AD8 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C009A950 (GreSetDIBitsToDeviceInternal.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CC880 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00DEB20 (vAccNotifyDeleteSurfaceWrap.c)
 *     GreExtTextOutWInternal @ 0x1C00EA458 (GreExtTextOutWInternal.c)
 *     GreGetDIBColorTable @ 0x1C00ED910 (GreGetDIBColorTable.c)
 *     GreGetBoundsRect @ 0x1C00F45F0 (GreGetBoundsRect.c)
 *     NtGdiFrameRgn @ 0x1C0104C30 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C0105250 (NtGdiFillRgn.c)
 *     GreRealizePalette @ 0x1C0111C40 (GreRealizePalette.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C0140EC0 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     GrePolyTextOutW @ 0x1C015CE5C (GrePolyTextOutW.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C0263280 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C0263E74 (DxEngSyncPaletteTableWithDevice.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C02687B0 (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0269C70 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreDrawEscape @ 0x1C026A3B8 (GreDrawEscape.c)
 *     GreDeleteWnd @ 0x1C027CE10 (GreDeleteWnd.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0286B70 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0286D04 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C028E5F0 (-RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C028E7E0 (-RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRU.c)
 *     ?RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1C028EA80 (-RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z.c)
 *     ?RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C028EC10 (-RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXP.c)
 *     ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C028EE20 (-RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C028EFE0 (-RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_REC.c)
 *     ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C028F1C0 (-RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C028F3C0 (-RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_B.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C028F5D0 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     ?RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C028F840 (-RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C028FAB0 (-RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEA.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C028FD40 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C028FEB0 (-RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEA.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0290090 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0290280 (-RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C029124C (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02B0130 (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C02B074C (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     GreSetDIBColorTable @ 0x1C02B20C0 (GreSetDIBColorTable.c)
 *     GreSetSystemPaletteUse @ 0x1C02B2310 (GreSetSystemPaletteUse.c)
 *     NtGdiUpdateColors @ 0x1C02B29C0 (NtGdiUpdateColors.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02B4A74 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 *     GreDescribePixelFormat @ 0x1C02B4B34 (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C02B4C90 (NtGdiSetPixelFormat.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C000C01C (GreDereferenceObject.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C001BB50 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C001D740 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00DF1D4 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0112294 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C025E5C0 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C028E090 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02904B4 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C02B0114 (--0SURFREF@@QEAA@XZ.c)
 */

void __fastcall DEVLOCKOBJ::vDestructor(DEVLOCKOBJ *this)
{
  __int64 v1; // rbx
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  DCVISRGNSHARELOCK *v8; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  HSURF v19; // rbx
  char v20; // bl
  __int64 v21; // rax
  DCVISRGNSHARELOCK *v22; // rcx
  __int64 v23; // rax
  _BYTE v24[8]; // [rsp+30h] [rbp-98h] BYREF
  DC *v25[6]; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v26[32]; // [rsp+68h] [rbp-60h] BYREF
  HSURF *v27; // [rsp+88h] [rbp-40h]
  _BYTE v28[32]; // [rsp+90h] [rbp-38h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-18h]

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
      v7 = *((_QWORD *)this + 4);
      if ( v7 && (*(_DWORD *)(v7 + 36) & 0x200) != 0 && (*((_DWORD *)this + 6) & 0x1000) != 0 )
      {
        GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
        if ( !*((_QWORD *)this + 10) )
          DC::vClearRendering(*((DC **)this + 4));
        if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x4000) == 0 )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( ThreadWin32Thread )
          {
            v10 = *ThreadWin32Thread;
            if ( v10 )
              *(_BYTE *)(v10 + 328) = 0;
          }
        }
        DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v8);
      }
    }
    XDCOBJ::vUnlock((DEVLOCKOBJ *)((char *)this + 32));
    *((_QWORD *)this + 4) = 0LL;
  }
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x1000u;
    v11 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v11 )
    {
      v12 = *v11;
      if ( v12 )
      {
        *(_QWORD *)(v12 + 320) = 0LL;
        *(_QWORD *)(v12 + 312) = 0LL;
      }
    }
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
  v13 = *((_DWORD *)this + 6);
  if ( (v13 & 8) != 0 )
    *((_DWORD *)this + 6) = v13 & 0xFFFFFFF7;
  v14 = *((_QWORD *)this + 1);
  if ( v14 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v14);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  }
  if ( *((_QWORD *)this + 11) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v25, *((HDC *)this + 12));
    SURFREF::SURFREF((SURFREF *)v26);
    SURFREF::SURFREF((SURFREF *)v28);
    LOBYTE(v15) = 5;
    v16 = HmgShareLock(*((_QWORD *)this + 10), v15);
    v17 = *((_QWORD *)this + 11);
    LOBYTE(v18) = 5;
    v27 = (HSURF *)v16;
    v29 = HmgShareLock(v17, v18);
    v19 = *v27;
    *((_QWORD *)v25[0] + 64) = v29;
    DEC_SHARE_REF_CNT(v27);
    v27 = 0LL;
    DEC_SHARE_REF_CNT(v29);
    v29 = 0LL;
    GreDereferenceObject(v19, 1u);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    if ( this != (DEVLOCKOBJ *)-104LL )
      *((_DWORD *)v25[0] + 9) |= *((_DWORD *)this + 26);
    if ( (*((_DWORD *)v25[0] + 9) & 0x200) != 0 )
    {
      v20 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v20 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v24);
      v21 = HmgShareUnlockRemoveObject(*((_QWORD *)this + 11), 0LL, 0LL, 0LL, 5);
      if ( v21 )
        SURFACE::bDeleteSurface(v21, 0LL, 1LL);
      *((_QWORD *)v25[0] + 65) = 0LL;
      DC::vClearRendering(v25[0]);
      *((_QWORD *)this + 11) = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v22);
      if ( v20 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v23 = HmgShareUnlockRemoveObject(*((_QWORD *)this + 11), 0LL, 0LL, 0LL, 5);
      if ( v23 )
        SURFACE::bDeleteSurface(v23, 0LL, 1LL);
      *((_QWORD *)v25[0] + 65) = 0LL;
      *((_QWORD *)this + 11) = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v28);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v26);
    DCOBJ::~DCOBJ((DCOBJ *)v25);
  }
}
