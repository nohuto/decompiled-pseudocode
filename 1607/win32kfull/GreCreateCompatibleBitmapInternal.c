/*
 * XREFs of GreCreateCompatibleBitmapInternal @ 0x1C00F05D8
 * Callers:
 *     _InternalGetIconInfo @ 0x1C003C054 (_InternalGetIconInfo.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0044F30 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C0060E84 (-CreateDPIBitmapStrip@@YAHH@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C00637B4 (CreateOrGetRedirectionBitmap.c)
 *     _DrawIconEx @ 0x1C00B0C5C (_DrawIconEx.c)
 *     CreateCompatiblePublicDC @ 0x1C00B966C (CreateCompatiblePublicDC.c)
 *     NtGdiCreateCompatibleBitmap @ 0x1C010D730 (NtGdiCreateCompatibleBitmap.c)
 *     CreateSpb @ 0x1C012210C (CreateSpb.c)
 *     CreateCaptionStrip @ 0x1C012D450 (CreateCaptionStrip.c)
 *     RecolorDeskPattern @ 0x1C01355A0 (RecolorDeskPattern.c)
 *     CreateFade @ 0x1C013FE3C (CreateFade.c)
 *     xxxSnapWindow @ 0x1C014F320 (xxxSnapWindow.c)
 *     GreCreateDIBitmapComp @ 0x1C0151D78 (GreCreateDIBitmapComp.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01E5E1C (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 *     MNCreateAnimationBitmap @ 0x1C01F463C (MNCreateAnimationBitmap.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C0227754 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0049064 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C004A0C0 (--0DCOBJ@@QEAA@XZ.c)
 *     hsurfCreateCompatibleSurface @ 0x1C00F0964 (hsurfCreateCompatibleSurface.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C025B160 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025B464 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z @ 0x1C027D360 (-vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z.c)
 */

__int64 __fastcall GreCreateCompatibleBitmapInternal(HDC a1, int a2, int a3, int a4, struct _LUID *a5)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v10; // rsi
  BOOL v11; // r13d
  __int64 v13; // rdi
  struct SURFACE *v14; // rax
  __int64 v15; // rdx
  int v16; // edx
  __int64 *v17; // rax
  __int64 CompatibleSurface; // rdi
  struct SURFACE *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 *v22; // rax
  int v23; // r10d
  BOOL v24; // [rsp+80h] [rbp-80h]
  _QWORD v25[2]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v26[32]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v28[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v29; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v30; // [rsp+E0h] [rbp-20h]
  int v31; // [rsp+E8h] [rbp-18h]
  _QWORD v32[16]; // [rsp+F0h] [rbp-10h] BYREF
  int v33; // [rsp+188h] [rbp+88h]
  BOOL v34; // [rsp+198h] [rbp+98h]

  v5 = 0LL;
  v6 = a2;
  v7 = a3;
  v33 = 0;
  LODWORD(v10) = 0;
  v24 = (a4 & 0x1000000) == 0;
  if ( (a4 & 0x2000000) != 0 )
  {
    if ( (a4 & 0x1000000) != 0 )
      v33 = 1;
    else
      DbgPrint("GreCreateCompatibleBitmap: got CCB_KMSECTIONVIEW without CCB_NOVIDEOMEMORY...ignoring CCB_KMSECTIONVIEW\n");
  }
  v11 = (a4 & 0x4000000) != 0;
  v34 = (a4 & 0x8000000) != 0;
  if ( (int)v6 > 0 && (int)v7 > 0 && (unsigned __int64)(v7 * v6) <= 0x3FFFFFFF )
  {
    if ( !a1 )
      return GreCreateBitmap((unsigned int)v6, (unsigned int)v7, 1LL, 1LL, 0LL);
    v25[0] = 0LL;
    v25[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v26);
    XDCOBJ::vLock((XDCOBJ *)v25, a1);
    if ( !v25[0] )
      goto LABEL_37;
    v13 = *(_QWORD *)(v25[0] + 48LL);
    v27 = v13;
    if ( (*(_DWORD *)(v13 + 56) & 0x8000) != 0 )
    {
      v14 = XDCOBJ::pSurfaceEff((XDCOBJ *)v25);
      if ( *(_DWORD *)(v15 + 32) == 1 )
      {
        v16 = *((_DWORD *)v14 + 24);
        v17 = (__int64 *)*((_QWORD *)v14 + 15);
        if ( v17 )
          goto LABEL_17;
      }
      else
      {
        v16 = *(_DWORD *)(v13 + 2132);
        if ( (*(_DWORD *)(v13 + 2196) & 0x100) == 0 )
        {
          v17 = *(__int64 **)(v13 + 1832);
LABEL_17:
          v10 = *v17;
        }
      }
      CompatibleSurface = hsurfCreateCompatibleSurface(v13, v16, v10, v6, v7, v24, v33, v11, 0, 0, 0, v34, 0, 0, 0LL);
LABEL_34:
      if ( !(unsigned int)GreSetBitmapOwner(CompatibleSurface, 2147483650LL) )
      {
        bDeleteSurface(CompatibleSurface);
        CompatibleSurface = 0LL;
      }
      v5 = CompatibleSurface;
LABEL_37:
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v25);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v26);
      return v5;
    }
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    v19 = *(struct SURFACE **)(v25[0] + 512LL);
    if ( !v19 )
      v19 = SURFACE::pdibDefault;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v28, (struct XDCOBJ *)v25);
    DCOBJ::DCOBJ((DCOBJ *)v32);
    v32[7] = 0LL;
    v29 = 0LL;
    v32[6] = 0LL;
    v32[0] = 0LL;
    v31 = 1;
    if ( (*(_DWORD *)(v13 + 56) & 1) != 0 )
    {
      *(_QWORD *)&v29 = *(_QWORD *)(v13 + 64);
      v30 = v13;
      GreAcquireSemaphore(v29);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v29, 11LL);
    }
    v20 = v25[0];
    LODWORD(v21) = 0;
    if ( *(_DWORD *)(v25[0] + 32LL) == 1 )
    {
      v22 = (__int64 *)*((_QWORD *)v19 + 15);
      v23 = *((_DWORD *)v19 + 24);
      if ( !v22 )
        goto LABEL_29;
    }
    else
    {
      v23 = *(_DWORD *)(v13 + 2132);
      if ( (*(_DWORD *)(v13 + 2196) & 0x100) != 0 )
        goto LABEL_29;
      v22 = *(__int64 **)(v13 + 1832);
    }
    v21 = *v22;
LABEL_29:
    if ( v11 && (*(_DWORD *)(v13 + 56) & 0x4000000) != 0 && a5 )
    {
      PDEVOBJ::vDeviceBitmapAdapterHint((PDEVOBJ *)&v27, a5);
      v20 = v25[0];
    }
    CompatibleSurface = hsurfCreateCompatibleSurface(
                          *(_QWORD *)(v20 + 48),
                          v23,
                          v21,
                          v6,
                          v7,
                          v24,
                          v33,
                          v11,
                          0,
                          0,
                          0,
                          v34,
                          0,
                          0,
                          0LL);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v29);
    DCOBJ::~DCOBJ((DCOBJ *)v32);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v28);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    goto LABEL_34;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
