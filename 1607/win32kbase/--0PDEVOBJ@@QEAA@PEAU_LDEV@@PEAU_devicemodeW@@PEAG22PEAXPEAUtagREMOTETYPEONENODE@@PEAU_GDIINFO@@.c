/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0032010
 * Callers:
 *     hdcOpenDCW @ 0x1C0020120 (hdcOpenDCW.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0068660 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     IsPanningGetFunctionTableSupported_0 @ 0x1C0001130 (IsPanningGetFunctionTableSupported_0.c)
 *     PanningGetFunctionTable_0 @ 0x1C0001138 (PanningGetFunctionTable_0.c)
 *     IsPDEVOBJ_bCreateHalftoneBrushesSupported_0 @ 0x1C0001140 (IsPDEVOBJ_bCreateHalftoneBrushesSupported_0.c)
 *     PDEVOBJ_bCreateHalftoneBrushesWrap_0 @ 0x1C0001148 (PDEVOBJ_bCreateHalftoneBrushesWrap_0.c)
 *     IsPDEVOBJ_bCreateDefaultBrushesSupported_0 @ 0x1C0001150 (IsPDEVOBJ_bCreateDefaultBrushesSupported_0.c)
 *     PDEVOBJ_bCreateDefaultBrushesWrap_0 @ 0x1C0001158 (PDEVOBJ_bCreateDefaultBrushesWrap_0.c)
 *     IsGetgbFinishDefGUIFontInitSupported_0 @ 0x1C0001160 (IsGetgbFinishDefGUIFontInitSupported_0.c)
 *     GetgbFinishDefGUIFontInit_0 @ 0x1C0001168 (GetgbFinishDefGUIFontInit_0.c)
 *     IsFinishStockFontInitSupported_0 @ 0x1C0001170 (IsFinishStockFontInitSupported_0.c)
 *     FinishStockFontInit_0 @ 0x1C0001178 (FinishStockFontInit_0.c)
 *     IsvConvertLogFontWSupported_0 @ 0x1C0001180 (IsvConvertLogFontWSupported_0.c)
 *     vConvertLogFontW_0 @ 0x1C0001188 (vConvertLogFontW_0.c)
 *     IshfontCreateSupported_0 @ 0x1C0001190 (IshfontCreateSupported_0.c)
 *     hfontCreate_0 @ 0x1C0001198 (hfontCreate_0.c)
 *     IsGreSetLFONTOwnerSupported_0 @ 0x1C00011A0 (IsGreSetLFONTOwnerSupported_0.c)
 *     GreSetLFONTOwner_0 @ 0x1C00011A8 (GreSetLFONTOwner_0.c)
 *     bDeleteFont_0 @ 0x1C00011B0 (bDeleteFont_0.c)
 *     IsPDEVOBJ_bDisableHalftoneSupported_0 @ 0x1C00011B8 (IsPDEVOBJ_bDisableHalftoneSupported_0.c)
 *     PDEVOBJ_bDisableHalftoneWrap_0 @ 0x1C00011C0 (PDEVOBJ_bDisableHalftoneWrap_0.c)
 *     GreCreateSemaphoreInternal @ 0x1C000D92C (GreCreateSemaphoreInternal.c)
 *     EngAllocMem @ 0x1C000D9B0 (EngAllocMem.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     ?EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0031948 (-EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPE.c)
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C00319CC (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C00319E8 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0031B2C (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C005CB68 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C005CB90 (--1EPALOBJ@@QEAA@XZ.c)
 *     GreSetPaletteOwner @ 0x1C005CF80 (GreSetPaletteOwner.c)
 *     GreDeleteSemaphore @ 0x1C006A130 (GreDeleteSemaphore.c)
 *     EngFreeMem @ 0x1C006A170 (EngFreeMem.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C006C2B4 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     ?bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z @ 0x1C006CC6C (-bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0074AF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C007EDB8 (-SETFLAG@@YAXHAECKK@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C00CD460 (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 */

PDEVOBJ *__fastcall PDEVOBJ::PDEVOBJ(
        PDEVOBJ *this,
        struct _LDEV *a2,
        struct _devicemodeW *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6,
        void *a7,
        struct tagREMOTETYPEONENODE *a8,
        struct _GDIINFO *a9,
        struct tagDEVINFO *a10,
        int a11,
        unsigned int a12,
        unsigned int a13)
{
  size_t v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rdx
  struct _GDIINFO *v22; // rcx
  _OWORD *v23; // rax
  __int64 v24; // rdx
  __int128 v25; // xmm1
  __int64 v26; // rdx
  _OWORD *v28; // rcx
  __int128 v29; // xmm1
  void *v30; // r15
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // r8
  int v34; // ecx
  __int64 v35; // rcx
  int v36; // edx
  __int64 v37; // rdx
  int v38; // ecx
  int v39; // eax
  unsigned __int16 *v40; // rbx
  unsigned int *v41; // rdx
  unsigned int v42; // ecx
  unsigned int v43; // eax
  bool v44; // cc
  unsigned int v45; // r8d
  __int64 v46; // rax
  unsigned int v47; // r8d
  __int64 v48; // rax
  __int64 v49; // rax
  _DWORD *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  int v53; // edx
  int HalftoneBrushesWrap_0; // eax
  int v55; // ecx
  __int64 v56; // rdx
  signed __int32 v57; // ett
  __int64 v58; // rdi
  unsigned int v59; // ebx
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  struct _ERESOURCE *v66; // rcx
  void *v67; // rcx
  unsigned int v69; // [rsp+28h] [rbp-D8h]
  unsigned int v70; // [rsp+38h] [rbp-C8h]
  unsigned __int16 *v71; // [rsp+60h] [rbp-A0h] BYREF
  void *v72; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v73; // [rsp+70h] [rbp-90h]
  _QWORD v74[2]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int16 *v75; // [rsp+88h] [rbp-78h]
  _DWORD *v76; // [rsp+90h] [rbp-70h]
  _BYTE v77[420]; // [rsp+A0h] [rbp-60h] BYREF

  v71 = a6;
  v72 = a7;
  v75 = a4;
  v16 = gdwDirectDrawContext + 3580;
  if ( (unsigned int)v16 <= gdwDirectDrawContext )
    return this;
  v17 = a11 ? EngAllocMem(1u, v16, 0x76654447u) : (_QWORD *)PALLOCMEM2(v16);
  *(_QWORD *)this = v17;
  if ( !v17 )
    return this;
  v17[5] = v17;
  *(_QWORD *)(*(_QWORD *)this + 1816LL) = a2;
  *(_DWORD *)(*(_QWORD *)this + 1808LL) = 1348756854;
  *(_DWORD *)(*(_QWORD *)this + 2632LL) = a12;
  *(_DWORD *)(*(_QWORD *)this + 2636LL) = a13;
  *(_DWORD *)(*(_QWORD *)this + 3544LL) = 0;
  v18 = *(_QWORD *)this;
  v19 = v18;
  v74[0] = *(_QWORD *)this;
  if ( *(_DWORD *)(*(_QWORD *)(v18 + 1816) + 24LL) != 6 )
  {
    *(_QWORD *)(*(_QWORD *)this + 64LL) = GreCreateSemaphoreInternal();
    v18 = *(_QWORD *)this;
    if ( !*(_QWORD *)(*(_QWORD *)this + 64LL) )
      goto LABEL_128;
  }
  if ( (a12 & 1) != 0 )
    *(_DWORD *)(v18 + 2636) = 5;
  v20 = *(_QWORD *)this;
  v21 = *(_QWORD *)(*(_QWORD *)this + 1816LL);
  if ( *(_DWORD *)(v21 + 24) == 1 && *(_DWORD *)(v20 + 2636) == 5 )
  {
    if ( (int)IsPanningGetFunctionTableSupported_0() >= 0 )
    {
      PanningGetFunctionTable_0();
      bFillFunctionTable((struct _DRVFN *)v74[1], v73, (__int64 (**)(void))(*(_QWORD *)this + 2712LL));
    }
  }
  else
  {
    memmove((void *)(v20 + 2712), (const void *)(v21 + 64), 0x338uLL);
  }
  *(_QWORD *)(*(_QWORD *)this + 1736LL) = a8;
  *(_QWORD *)(*(_QWORD *)this + 1536LL) = a5;
  v22 = a9;
  if ( a9 )
  {
    v23 = (_OWORD *)(*(_QWORD *)this + 2160LL);
    v24 = 2LL;
    do
    {
      *v23 = *(_OWORD *)&v22->ulVersion;
      v23[1] = *(_OWORD *)&v22->ulHorzRes;
      v23[2] = *(_OWORD *)&v22->ulNumColors;
      v23[3] = *(_OWORD *)&v22->flTextCaps;
      v23[4] = *(_OWORD *)&v22->ulAspectX;
      v23[5] = *(_OWORD *)&v22->yStyleStep;
      v23[6] = *(_OWORD *)&v22->szlPhysSize.cx;
      v23 += 8;
      v25 = *(_OWORD *)&v22->ciDevice.Red.y;
      v22 = (struct _GDIINFO *)((char *)v22 + 128);
      *(v23 - 1) = v25;
      --v24;
    }
    while ( v24 );
    v26 = 2LL;
    *v23 = *(_OWORD *)&v22->ulVersion;
    v23[1] = *(_OWORD *)&v22->ulHorzRes;
    v23[2] = *(_OWORD *)&v22->ulNumColors;
    v23[3] = *(_OWORD *)&v22->flTextCaps;
    v28 = (_OWORD *)(*(_QWORD *)this + 1848LL);
    do
    {
      *v28 = *(_OWORD *)a10;
      v28[1] = *((_OWORD *)a10 + 1);
      v28[2] = *((_OWORD *)a10 + 2);
      v28[3] = *((_OWORD *)a10 + 3);
      v28[4] = *((_OWORD *)a10 + 4);
      v28[5] = *((_OWORD *)a10 + 5);
      v28[6] = *((_OWORD *)a10 + 6);
      v28 += 8;
      v29 = *((_OWORD *)a10 + 7);
      a10 = (struct tagDEVINFO *)((char *)a10 + 128);
      *(v28 - 1) = v29;
      --v26;
    }
    while ( v26 );
    *v28 = *(_OWORD *)a10;
    v28[1] = *((_OWORD *)a10 + 1);
    v28[2] = *((_OWORD *)a10 + 2);
    *((_QWORD *)v28 + 6) = *((_QWORD *)a10 + 6);
  }
  v76 = (_DWORD *)(v19 + 56);
  SETFLAG(a11, (volatile unsigned int *)(v19 + 56), 0x8000u);
  if ( a11 )
    *(_QWORD *)(*(_QWORD *)this + 1824LL) = *((_QWORD *)a2 + 5);
  v30 = v72;
  *(_QWORD *)(*(_QWORD *)this + 1824LL) = PDEVOBJ::EnablePDEV(
                                            (PDEVOBJ *)v74,
                                            a3,
                                            v75,
                                            *(_QWORD *)this + 2160LL,
                                            (HSURF *)(*(_QWORD *)this + 1488LL),
                                            v69,
                                            (struct _GDIINFO *)(*(_QWORD *)this + 2160LL),
                                            v70,
                                            (struct tagDEVINFO *)(*(_QWORD *)this + 1848LL),
                                            *(HDEV *)this,
                                            v71,
                                            v72);
  v31 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 1824LL) )
    goto LABEL_128;
  if ( *(_DWORD *)(*(_QWORD *)(v31 + 1816) + 24LL) != 6 )
  {
    v32 = *(_DWORD *)(v31 + 2168);
    if ( v32 > 0 )
    {
      *(_DWORD *)(v31 + 2168) = 1000 * v32;
    }
    else if ( v32 )
    {
      *(_DWORD *)(v31 + 2168) = -v32;
    }
    else
    {
      *(_DWORD *)(v31 + 2168) = 25400 * (unsigned __int64)*(unsigned int *)(v31 + 2176) / 0x60;
    }
    v33 = *(_QWORD *)this;
    v34 = *(_DWORD *)(*(_QWORD *)this + 2172LL);
    if ( v34 > 0 )
    {
      *(_DWORD *)(v33 + 2172) = 1000 * v34;
    }
    else if ( v34 )
    {
      *(_DWORD *)(v33 + 2172) = -v34;
    }
    else
    {
      *(_DWORD *)(v33 + 2172) = 25400 * (unsigned __int64)*(unsigned int *)(v33 + 2180) / 0x60;
    }
    if ( !a11 )
    {
      v35 = *(_QWORD *)this;
      v36 = *(_DWORD *)(*(_QWORD *)this + 2204LL);
      if ( *(_DWORD *)(*(_QWORD *)this + 2200LL) != v36 )
      {
        if ( (unsigned int)*(unsigned __int16 *)(v35 + 2206) - 100 <= 0x190 )
        {
          *(_DWORD *)(v35 + 3544) = v36;
          *(_DWORD *)(*(_QWORD *)this + 2204LL) = *(_DWORD *)(*(_QWORD *)this + 2200LL);
        }
        else
        {
          *(_DWORD *)(v35 + 2204) = 0;
          *(_DWORD *)(*(_QWORD *)this + 2200LL) = 0;
        }
      }
    }
    if ( !*(_DWORD *)(*(_QWORD *)this + 2200LL) )
      *(_DWORD *)(*(_QWORD *)this + 2200LL) = 96;
    if ( !*(_DWORD *)(*(_QWORD *)this + 2204LL) )
      *(_DWORD *)(*(_QWORD *)this + 2204LL) = 96;
    if ( *(_DWORD *)(*(_QWORD *)this + 2164LL) == 1 )
    {
      *(_DWORD *)(*(_QWORD *)this + 2236LL) = 1;
      *(_DWORD *)(*(_QWORD *)this + 2240LL) = 1;
      *(_DWORD *)(*(_QWORD *)this + 2244LL) = 3;
    }
    v37 = *(_QWORD *)this;
    v38 = 17424;
    v39 = *(_DWORD *)(*(_QWORD *)this + 2164LL);
    if ( (v39 & 0xFFFFFFFB) != 0 )
      v38 = 28313;
    if ( v39 == 1 )
      v38 |= 0x1000u;
    if ( (*(_DWORD *)(v37 + 1848) & 0x80000) != 0 )
      v38 |= 0x100u;
    *(_DWORD *)(v37 + 2196) = v38;
    EPALOBJ::EPALOBJ((EPALOBJ *)&v71, *(HPALETTE *)(*(_QWORD *)this + 2144LL));
    v40 = v71;
    if ( !v71 || (*((_DWORD *)v71 + 6) & 0x1000000) == 0 )
      goto LABEL_53;
    if ( !*((_DWORD *)v71 + 7) )
    {
      v41 = (unsigned int *)*((_QWORD *)v71 + 15);
      v42 = *v41;
      v43 = v41[1];
      v44 = v43 <= *v41;
      if ( v43 < *v41 )
      {
        v45 = v41[2];
        if ( v42 > v45 )
        {
          v44 = v43 <= v45;
          v46 = *(_QWORD *)this;
          *(_DWORD *)(v46 + 2392) = v44;
          goto LABEL_70;
        }
        v44 = v43 <= v42;
      }
      if ( v44 || (v47 = v41[2], v43 <= v47) )
      {
        v44 = v42 <= v43;
        v49 = *(_QWORD *)this;
        if ( v44 )
          *(_DWORD *)(v49 + 2392) = 4;
        else
          *(_DWORD *)(v49 + 2392) = 5;
      }
      else
      {
        v48 = *(_QWORD *)this;
        if ( v42 <= v47 )
          *(_DWORD *)(v48 + 2392) = 3;
        else
          *(_DWORD *)(v48 + 2392) = 2;
      }
    }
LABEL_70:
    v50 = *(_DWORD **)this;
    if ( (*(_DWORD *)(*(_QWORD *)this + 2196LL) & 0x100) != 0 )
    {
      if ( !a11 || *((_DWORD *)v40 + 7) == 256 )
      {
        if ( !(unsigned int)CreateSurfacePal(v40, 256LL, (unsigned int)v50[548], (unsigned int)v50[566]) )
          goto LABEL_53;
      }
      else
      {
        v50[462] &= ~0x80000u;
        *(_DWORD *)(*(_QWORD *)this + 2196LL) &= ~0x100u;
      }
    }
    if ( !a11 || (unsigned int)GreSetPaletteOwner(*(_QWORD *)v40, 0LL) )
    {
      v51 = *(_QWORD *)this;
      v71 = 0LL;
      *(_QWORD *)(v51 + 1832) = v40;
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v71);
      v52 = *(_QWORD *)this;
      if ( !*(_QWORD *)(*(_QWORD *)this + 1488LL)
        || (v53 = *(_DWORD *)(*(_QWORD *)(v52 + 1816) + 24LL), v53 == 1)
        || v53 == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v52 + 1816) + 24LL) == 2 )
        {
          if ( (int)IsPDEVOBJ_bCreateHalftoneBrushesSupported_0() >= 0 )
          {
            HalftoneBrushesWrap_0 = PDEVOBJ_bCreateHalftoneBrushesWrap_0();
            goto LABEL_85;
          }
        }
        else if ( (int)IsPDEVOBJ_bCreateDefaultBrushesSupported_0() >= 0 )
        {
          HalftoneBrushesWrap_0 = PDEVOBJ_bCreateDefaultBrushesWrap_0();
LABEL_85:
          if ( HalftoneBrushesWrap_0 )
            goto LABEL_86;
LABEL_128:
          v66 = *(struct _ERESOURCE **)(*(_QWORD *)this + 64LL);
          if ( v66 )
            GreDeleteSemaphore(v66);
          if ( *(_QWORD *)(*(_QWORD *)this + 1544LL) && (int)IsPDEVOBJ_bDisableHalftoneSupported_0() >= 0 )
            PDEVOBJ_bDisableHalftoneWrap_0();
          PDEVOBJ::vDeleteHTPATSIZEUSERAllocations(this);
          if ( *(_QWORD *)(*(_QWORD *)this + 1824LL) )
          {
            (*(void (**)(void))(v19 + 2728))();
            *(_QWORD *)(*(_QWORD *)this + 1824LL) = 0LL;
          }
          v67 = *(void **)this;
          if ( a11 )
            EngFreeMem(v67);
          else
            Win32FreePool(v67);
          *(_QWORD *)this = 0LL;
          return this;
        }
      }
LABEL_86:
      *(_QWORD *)(*(_QWORD *)this + 2584LL) = v30;
      v55 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1816LL) + 24LL);
      if ( ((v55 - 1) & 0xFFFFFFFC) == 0 && v55 != 2 )
      {
        *(_QWORD *)(*(_QWORD *)this + 1760LL) = *(_QWORD *)(v19 + 2952);
        *(_QWORD *)(*(_QWORD *)this + 1752LL) = *(_QWORD *)(v19 + 2944);
        v72 = ghsemDriverMgmt;
        EngAcquireSemaphore(ghsemDriverMgmt);
        *(_QWORD *)(*(_QWORD *)this + 72LL) = GreCreateSemaphoreInternal();
        if ( !*(_QWORD *)(*(_QWORD *)this + 72LL) )
        {
          SEMOBJ::vUnlock((SEMOBJ *)&v72);
          goto LABEL_128;
        }
        *(_DWORD *)(*(_QWORD *)this + 56LL) |= 1u;
        SEMOBJ::vUnlock((SEMOBJ *)&v72);
      }
      *(_QWORD *)(*(_QWORD *)this + 1792LL) = *(_QWORD *)(v19 + 2888);
      *(_QWORD *)(*(_QWORD *)this + 1776LL) = *(_QWORD *)(v19 + 3016);
      *(_QWORD *)(*(_QWORD *)this + 1784LL) = *(_QWORD *)(v19 + 3416);
      *(_QWORD *)(*(_QWORD *)this + 1800LL) = *(_QWORD *)(v19 + 3408);
      if ( (int)IsGetgbFinishDefGUIFontInitSupported_0() >= 0 )
      {
        pgbFinishDefGUIFontInit = (int *)GetgbFinishDefGUIFontInit_0();
        if ( *pgbFinishDefGUIFontInit )
        {
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1816LL) + 24LL) == 1 )
          {
            if ( (int)IsFinishStockFontInitSupported_0() >= 0 )
              FinishStockFontInit_0();
            *pgbFinishDefGUIFontInit = 0;
          }
        }
      }
      v56 = *(_QWORD *)this;
      _m_prefetchw((const void *)(*(_QWORD *)this + 56LL));
      do
        v57 = *(_DWORD *)(v56 + 56);
      while ( v57 != _InterlockedCompareExchange((volatile signed __int32 *)(v56 + 56), v57 & 0xFFFFFFBF, v57) );
      *(_DWORD *)(*(_QWORD *)this + 3568LL) = 0;
      v58 = *(_QWORD *)this;
      v59 = 12 * *(_DWORD *)(*(_QWORD *)this + 2204LL) / 0x48u;
      memset(v77, 0, sizeof(v77));
      if ( !*(_DWORD *)(v58 + 1852) )
        *(_DWORD *)(v58 + 1852) = v59;
      if ( !*(_DWORD *)(*(_QWORD *)this + 1944LL) )
        *(_DWORD *)(*(_QWORD *)this + 1944LL) = v59;
      if ( !*(_DWORD *)(*(_QWORD *)this + 2036LL) )
        *(_DWORD *)(*(_QWORD *)this + 2036LL) = v59;
      if ( (int)IsvConvertLogFontWSupported_0() >= 0 )
        vConvertLogFontW_0();
      v60 = *(_QWORD *)this;
      if ( *(_DWORD *)(*(_QWORD *)this + 2164LL) != 1 )
      {
        if ( (int)IshfontCreateSupported_0() < 0
          || (v61 = hfontCreate_0(), (*(_QWORD *)(*(_QWORD *)this + 1464LL) = v61) != 0LL) )
        {
          if ( (int)IsGreSetLFONTOwnerSupported_0() < 0 || (unsigned int)GreSetLFONTOwner_0() )
            goto LABEL_115;
          bDeleteFont_0();
        }
        v60 = *(_QWORD *)this;
      }
      *(_QWORD *)(v60 + 1464) = gahStockObjects[13];
LABEL_115:
      if ( (int)IsvConvertLogFontWSupported_0() >= 0 )
        vConvertLogFontW_0();
      v62 = hfontCreate_0();
      *(_QWORD *)(*(_QWORD *)this + 1472LL) = v62;
      if ( v62 )
      {
        if ( !(unsigned int)GreSetLFONTOwner_0() )
        {
          bDeleteFont_0();
          *(_QWORD *)(*(_QWORD *)this + 1472LL) = gahStockObjects[13];
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)this + 1472LL) = gahStockObjects[13];
      }
      vConvertLogFontW_0();
      v63 = hfontCreate_0();
      *(_QWORD *)(*(_QWORD *)this + 1480LL) = v63;
      if ( v63 )
      {
        if ( !(unsigned int)GreSetLFONTOwner_0() )
        {
          bDeleteFont_0();
          *(_QWORD *)(*(_QWORD *)this + 1480LL) = gahStockObjects[16];
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)this + 1480LL) = gahStockObjects[16];
      }
      goto LABEL_125;
    }
LABEL_53:
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v71);
    goto LABEL_128;
  }
LABEL_125:
  *(_DWORD *)(*(_QWORD *)this + 32LL) = 1;
  *(_DWORD *)(*(_QWORD *)this + 36LL) = 1;
  if ( (*v76 & 1) != 0 )
  {
    PDEVOBJ::bDisabled((PDEVOBJ *)v74, 1);
    vResetSurfacePalette(*(HDEV *)this);
  }
  v64 = (_QWORD *)(*(_QWORD *)this + 2648LL);
  v64[1] = v64;
  *v64 = v64;
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
  *(_QWORD *)(*(_QWORD *)this + 24LL) = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
  WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = *(struct _LIST_ENTRY **)this;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  PDEVOBJ::CompletePDEV((PDEVOBJ *)v74, *(struct DHPDEV__ **)(*(_QWORD *)this + 1824LL), *(HDEV *)this);
  v65 = (_QWORD *)(*(_QWORD *)this + 3552LL);
  v65[1] = v65;
  *v65 = v65;
  return this;
}
