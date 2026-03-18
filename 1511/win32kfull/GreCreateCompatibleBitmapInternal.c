/*
 * XREFs of GreCreateCompatibleBitmapInternal @ 0x1C0040968
 * Callers:
 *     _DrawIconEx @ 0x1C00150EC (_DrawIconEx.c)
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C0017A20 (-CreateDPIBitmapStrip@@YAHH@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0031BA0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     _InternalGetIconInfo @ 0x1C0049C9C (_InternalGetIconInfo.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C007C3E0 (CreateOrGetRedirectionBitmap.c)
 *     CreateCompatiblePublicDC @ 0x1C00CCE28 (CreateCompatiblePublicDC.c)
 *     NtGdiCreateCompatibleBitmap @ 0x1C00EE610 (NtGdiCreateCompatibleBitmap.c)
 *     CreateSpb @ 0x1C010B97C (CreateSpb.c)
 *     CreateCaptionStrip @ 0x1C010BF40 (CreateCaptionStrip.c)
 *     RecolorDeskPattern @ 0x1C01141B0 (RecolorDeskPattern.c)
 *     CreateFade @ 0x1C0139CBC (CreateFade.c)
 *     xxxSnapWindow @ 0x1C01499F0 (xxxSnapWindow.c)
 *     GreCreateDIBitmapComp @ 0x1C014B9F0 (GreCreateDIBitmapComp.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01F00DC (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 *     MNCreateAnimationBitmap @ 0x1C01FD3AC (MNCreateAnimationBitmap.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C0227AF8 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002D6BC (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002DAD0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     hsurfCreateCompatibleSurface @ 0x1C0040E24 (hsurfCreateCompatibleSurface.c)
 *     ?vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z @ 0x1C027EEE4 (-vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z.c)
 */

__int64 __fastcall GreCreateCompatibleBitmapInternal(__int64 a1, int a2, int a3, int a4, struct _LUID *a5)
{
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v10; // rsi
  BOOL v11; // r13d
  BOOL v12; // r12d
  __int64 v13; // r8
  __int64 v14; // rbx
  struct SURFACE *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r10d
  __int64 *v19; // rax
  __int64 CompatibleSurface; // rbx
  struct SURFACE *v22; // rax
  __int64 v23; // r8
  int v24; // edx
  __int64 *v25; // rax
  __int64 v26; // [rsp+80h] [rbp-51h] BYREF
  _BYTE v27[8]; // [rsp+88h] [rbp-49h] BYREF
  _QWORD v28[2]; // [rsp+90h] [rbp-41h] BYREF
  __int128 v29; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-21h]
  int v31; // [rsp+B8h] [rbp-19h]
  __int64 v32; // [rsp+C0h] [rbp-11h]
  __int64 v33; // [rsp+C8h] [rbp-9h]
  __int64 v34; // [rsp+D0h] [rbp-1h]
  __int64 v35; // [rsp+D8h] [rbp+7h]
  int v36; // [rsp+138h] [rbp+67h]
  BOOL v37; // [rsp+148h] [rbp+77h]

  v5 = a2;
  v6 = 0LL;
  v7 = a3;
  v36 = 0;
  LODWORD(v10) = 0;
  v11 = (a4 & 0x1000000) == 0;
  if ( (a4 & 0x2000000) != 0 )
  {
    if ( (a4 & 0x1000000) != 0 )
    {
      v36 = 1;
    }
    else
    {
      DbgPrint("GreCreateCompatibleBitmap: got CCB_KMSECTIONVIEW without CCB_NOVIDEOMEMORY...ignoring CCB_KMSECTIONVIEW\n");
      v6 = 0LL;
    }
  }
  v12 = (a4 & 0x4000000) != 0;
  v37 = (a4 & 0x8000000) != 0;
  if ( (int)v5 <= 0 || (int)v7 <= 0 || (unsigned __int64)(v7 * v5) > 0x3FFFFFFF )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  if ( !a1 )
    return GreCreateBitmap((unsigned int)v5, (unsigned int)v7, 1LL, 1LL, 0LL);
  LOBYTE(v6) = 1;
  v28[1] = 0LL;
  v28[0] = HmgLockEx(a1, v6, 0LL);
  v13 = v28[0];
  if ( v28[0] )
  {
    if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v28) )
    {
      v13 = v28[0];
    }
    else
    {
      v13 = 0LL;
      _InterlockedDecrement((volatile signed __int32 *)(v28[0] + 12LL));
      v28[0] = 0LL;
    }
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 48);
      v26 = v14;
      if ( (*(_DWORD *)(v14 + 56) & 0x8000) == 0 )
      {
        GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        v15 = *(struct SURFACE **)(v28[0] + 512LL);
        if ( !v15 )
          v15 = SURFACE::pdibDefault;
        NEEDGRELOCK::vLock((NEEDGRELOCK *)v27, (struct XDCOBJ *)v28);
        v33 = 0LL;
        v29 = 0LL;
        v35 = 0LL;
        v34 = 0LL;
        v32 = 0LL;
        v31 = 1;
        if ( (*(_DWORD *)(v14 + 56) & 1) != 0 )
        {
          *(_QWORD *)&v29 = *(_QWORD *)(v14 + 64);
          v30 = v14;
          GreAcquireSemaphore(v29);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v29, 11LL);
        }
        v16 = v28[0];
        LODWORD(v17) = 0;
        if ( *(_DWORD *)(v28[0] + 32LL) == 1 )
        {
          v19 = (__int64 *)*((_QWORD *)v15 + 15);
          v18 = *((_DWORD *)v15 + 24);
          if ( !v19 )
          {
LABEL_19:
            if ( v12 && (*(_DWORD *)(v14 + 56) & 0x4000000) != 0 && a5 )
            {
              PDEVOBJ::vDeviceBitmapAdapterHint((PDEVOBJ *)&v26, a5);
              v16 = v28[0];
            }
            CompatibleSurface = hsurfCreateCompatibleSurface(
                                  *(_QWORD *)(v16 + 48),
                                  v18,
                                  v17,
                                  v5,
                                  v7,
                                  v11,
                                  v36,
                                  v12,
                                  0,
                                  0,
                                  0,
                                  v37,
                                  0,
                                  0,
                                  0LL);
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v29);
            NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v27);
            EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
            GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
            goto LABEL_21;
          }
        }
        else
        {
          v18 = *(_DWORD *)(v14 + 2132);
          if ( (*(_DWORD *)(v14 + 2196) & 0x100) != 0 )
            goto LABEL_19;
          v19 = *(__int64 **)(v14 + 1832);
        }
        v17 = *v19;
        goto LABEL_19;
      }
      v22 = XDCOBJ::pSurfaceEff((XDCOBJ *)v28);
      if ( *(_DWORD *)(v23 + 32) == 1 )
      {
        v24 = *((_DWORD *)v22 + 24);
        v25 = (__int64 *)*((_QWORD *)v22 + 15);
        if ( !v25 )
          goto LABEL_43;
      }
      else
      {
        v24 = *(_DWORD *)(v14 + 2132);
        if ( (*(_DWORD *)(v14 + 2196) & 0x100) != 0 )
        {
LABEL_43:
          CompatibleSurface = hsurfCreateCompatibleSurface(
                                v14,
                                v24,
                                v10,
                                v5,
                                v7,
                                v11,
                                v36,
                                v12,
                                0,
                                0,
                                0,
                                v37,
                                0,
                                0,
                                0LL);
LABEL_21:
          if ( !(unsigned int)GreSetBitmapOwner(CompatibleSurface, 2147483650LL) )
          {
            bDeleteSurface(CompatibleSurface);
            CompatibleSurface = 0LL;
          }
          v13 = v28[0];
          goto LABEL_24;
        }
        v25 = *(__int64 **)(v14 + 1832);
      }
      v10 = *v25;
      goto LABEL_43;
    }
  }
  CompatibleSurface = 0LL;
LABEL_24:
  if ( v13 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)v28);
    _InterlockedDecrement((volatile signed __int32 *)(v28[0] + 12LL));
  }
  return CompatibleSurface;
}
