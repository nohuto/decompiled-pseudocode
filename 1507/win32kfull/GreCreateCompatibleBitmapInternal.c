/*
 * XREFs of GreCreateCompatibleBitmapInternal @ 0x1C0098F78
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C000DDF8 (CreateOrGetRedirectionBitmap.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C001A330 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     _DrawIconEx @ 0x1C005137C (_DrawIconEx.c)
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C0055E40 (-CreateDPIBitmapStrip@@YAHH@Z.c)
 *     _InternalGetIconInfo @ 0x1C0095874 (_InternalGetIconInfo.c)
 *     NtGdiCreateCompatibleBitmap @ 0x1C00E86A0 (NtGdiCreateCompatibleBitmap.c)
 *     CreateSpb @ 0x1C00FF068 (CreateSpb.c)
 *     CreateCaptionStrip @ 0x1C00FFA60 (CreateCaptionStrip.c)
 *     RecolorDeskPattern @ 0x1C01011B0 (RecolorDeskPattern.c)
 *     CreateFade @ 0x1C010E24C (CreateFade.c)
 *     xxxSnapWindow @ 0x1C0120278 (xxxSnapWindow.c)
 *     GreCreateDIBitmapComp @ 0x1C0121C2C (GreCreateDIBitmapComp.c)
 *     CreateCompatiblePublicDC @ 0x1C0126D64 (CreateCompatiblePublicDC.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01F0178 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 *     MNCreateAnimationBitmap @ 0x1C01FCF0C (MNCreateAnimationBitmap.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C022779C (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0019AB4 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     hsurfCreateCompatibleSurface @ 0x1C009921C (hsurfCreateCompatibleSurface.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C025FFC0 (--0DCOBJ@@QEAA@XZ.c)
 *     ?vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z @ 0x1C027F528 (-vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z.c)
 */

__int64 __fastcall GreCreateCompatibleBitmapInternal(HDC a1, int a2, int a3, int a4, struct _LUID *a5)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v8; // r14
  __int64 v10; // rsi
  BOOL v11; // r13d
  __int64 v12; // rdi
  struct SURFACE *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r10d
  __int64 *v17; // rax
  __int64 CompatibleSurface; // rdi
  struct SURFACE *v20; // rax
  __int64 v21; // rdx
  int v22; // edx
  __int64 *v23; // rax
  BOOL v24; // [rsp+80h] [rbp-80h]
  _BYTE v25[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v26; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v27[7]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v28; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v29; // [rsp+E0h] [rbp-20h]
  int v30; // [rsp+E8h] [rbp-18h]
  _QWORD v31[16]; // [rsp+F0h] [rbp-10h] BYREF
  int v32; // [rsp+188h] [rbp+88h]
  BOOL v33; // [rsp+198h] [rbp+98h]

  v5 = 0LL;
  v6 = a2;
  v8 = a3;
  v32 = 0;
  LODWORD(v10) = 0;
  v24 = (a4 & 0x1000000) == 0;
  if ( (a4 & 0x2000000) != 0 )
  {
    if ( (a4 & 0x1000000) != 0 )
      v32 = 1;
    else
      DbgPrint("GreCreateCompatibleBitmap: got CCB_KMSECTIONVIEW without CCB_NOVIDEOMEMORY...ignoring CCB_KMSECTIONVIEW\n");
  }
  v11 = (a4 & 0x4000000) != 0;
  v33 = (a4 & 0x8000000) != 0;
  if ( (int)v6 <= 0 || (int)v8 <= 0 || (unsigned __int64)(v8 * v6) > 0x3FFFFFFF )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    if ( a1 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v27, a1);
      if ( !v27[0] )
      {
LABEL_21:
        DCOBJ::~DCOBJ((DCOBJ *)v27);
        return v5;
      }
      v12 = *(_QWORD *)(v27[0] + 48LL);
      v26 = v12;
      if ( (*(_DWORD *)(v12 + 56) & 0x8000) == 0 )
      {
        GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        v13 = *(struct SURFACE **)(v27[0] + 512LL);
        if ( !v13 )
          v13 = SURFACE::pdibDefault;
        NEEDGRELOCK::vLock((NEEDGRELOCK *)v25, (struct XDCOBJ *)v27);
        DCOBJ::DCOBJ((DCOBJ *)v31);
        v31[7] = 0LL;
        v28 = 0LL;
        v31[6] = 0LL;
        v31[0] = 0LL;
        v30 = 1;
        if ( (*(_DWORD *)(v12 + 56) & 1) != 0 )
        {
          *(_QWORD *)&v28 = *(_QWORD *)(v12 + 64);
          v29 = v12;
          GreAcquireSemaphore(v28);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v28, 11LL);
        }
        v14 = v27[0];
        LODWORD(v15) = 0;
        if ( *(_DWORD *)(v27[0] + 32LL) == 1 )
        {
          v17 = (__int64 *)*((_QWORD *)v13 + 15);
          v16 = *((_DWORD *)v13 + 24);
          if ( !v17 )
          {
LABEL_16:
            if ( v11 && (*(_DWORD *)(v12 + 56) & 0x4000000) != 0 && a5 )
            {
              PDEVOBJ::vDeviceBitmapAdapterHint((PDEVOBJ *)&v26, a5);
              v14 = v27[0];
            }
            CompatibleSurface = hsurfCreateCompatibleSurface(
                                  *(_QWORD *)(v14 + 48),
                                  v16,
                                  v15,
                                  v6,
                                  v8,
                                  v24,
                                  v32,
                                  v11,
                                  0,
                                  0,
                                  0,
                                  v33,
                                  0,
                                  0,
                                  0LL);
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v28);
            DCOBJ::~DCOBJ((DCOBJ *)v31);
            NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v25);
            EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
            GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
            goto LABEL_18;
          }
        }
        else
        {
          v16 = *(_DWORD *)(v12 + 2132);
          if ( (*(_DWORD *)(v12 + 2196) & 0x100) != 0 )
            goto LABEL_16;
          v17 = *(__int64 **)(v12 + 1832);
        }
        v15 = *v17;
        goto LABEL_16;
      }
      v20 = XDCOBJ::pSurfaceEff((XDCOBJ *)v27);
      if ( *(_DWORD *)(v21 + 32) == 1 )
      {
        v22 = *((_DWORD *)v20 + 24);
        v23 = (__int64 *)*((_QWORD *)v20 + 15);
        if ( !v23 )
          goto LABEL_36;
      }
      else
      {
        v22 = *(_DWORD *)(v12 + 2132);
        if ( (*(_DWORD *)(v12 + 2196) & 0x100) != 0 )
        {
LABEL_36:
          CompatibleSurface = hsurfCreateCompatibleSurface(
                                v12,
                                v22,
                                v10,
                                v6,
                                v8,
                                v24,
                                v32,
                                v11,
                                0,
                                0,
                                0,
                                v33,
                                0,
                                0,
                                0LL);
LABEL_18:
          if ( !(unsigned int)GreSetBitmapOwner(CompatibleSurface, 2147483650LL) )
          {
            bDeleteSurface(CompatibleSurface);
            CompatibleSurface = 0LL;
          }
          v5 = CompatibleSurface;
          goto LABEL_21;
        }
        v23 = *(__int64 **)(v12 + 1832);
      }
      v10 = *v23;
      goto LABEL_36;
    }
    return GreCreateBitmap((unsigned int)v6, (unsigned int)v8, 1LL, 1LL, 0LL);
  }
}
