/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0038390
 * Callers:
 *     hdcOpenDCW @ 0x1C0042710 (hdcOpenDCW.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0056E20 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
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
 *     GreCreateSemaphoreInternal @ 0x1C0012318 (GreCreateSemaphoreInternal.c)
 *     EngAllocMem @ 0x1C00123A0 (EngAllocMem.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ?EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0037D34 (-EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPE.c)
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C0037DB8 (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C0037DD4 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0037F14 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00461F0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00492E4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     GreDeleteSemaphore @ 0x1C0059DB0 (GreDeleteSemaphore.c)
 *     EngFreeMem @ 0x1C0059DF0 (EngFreeMem.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C005BC64 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     ?bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z @ 0x1C005CDFC (-bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z.c)
 *     GreSetPaletteOwner @ 0x1C005CFA0 (GreSetPaletteOwner.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C006E380 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C007ADE4 (-SETFLAG@@YAXHAECKK@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C00C06DC (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
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
  size_t v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdx
  struct _GDIINFO *v23; // rcx
  _OWORD *v24; // rax
  __int64 v25; // rdx
  __int128 v26; // xmm1
  __int64 v27; // rdx
  _OWORD *v29; // rcx
  __int128 v30; // xmm1
  int v31; // ecx
  void *v32; // r15
  __int64 v33; // r8
  int v34; // eax
  __int64 v35; // r8
  int v36; // ecx
  __int64 v37; // rcx
  int v38; // edx
  __int64 v39; // r8
  int v40; // edx
  unsigned int *v41; // rdx
  unsigned __int16 *v42; // rbx
  unsigned int v43; // ecx
  unsigned int v44; // eax
  bool v45; // cc
  unsigned int v46; // r8d
  __int64 v47; // rax
  unsigned int v48; // r8d
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  int v53; // edx
  int HalftoneBrushesWrap_0; // eax
  int v55; // ecx
  __int64 v56; // rdx
  signed __int32 v57; // ett
  __int64 v58; // rdi
  unsigned int v59; // ebx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  struct _ERESOURCE *v68; // rcx
  unsigned int v70; // [rsp+28h] [rbp-D8h]
  unsigned int v71; // [rsp+38h] [rbp-C8h]
  unsigned __int16 *v72; // [rsp+60h] [rbp-A0h] BYREF
  void *v73; // [rsp+68h] [rbp-98h] BYREF
  __int64 v74; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v75; // [rsp+78h] [rbp-88h]
  struct _DRVFN *v76; // [rsp+80h] [rbp-80h]
  _DWORD *v77; // [rsp+88h] [rbp-78h]
  _BYTE v78[420]; // [rsp+90h] [rbp-70h] BYREF

  v72 = a6;
  v73 = a7;
  v17 = gdwDirectDrawContext + 3580;
  if ( (unsigned int)v17 <= gdwDirectDrawContext )
    return this;
  v18 = a11 ? EngAllocMem(1u, v17, 0x76654447u) : PALLOCMEM2(v17, 1986348103LL, 1);
  *(_QWORD *)this = v18;
  if ( !v18 )
    return this;
  v18[5] = v18;
  *(_QWORD *)(*(_QWORD *)this + 1816LL) = a2;
  *(_DWORD *)(*(_QWORD *)this + 1808LL) = 1348756854;
  *(_DWORD *)(*(_QWORD *)this + 2632LL) = a12;
  *(_DWORD *)(*(_QWORD *)this + 2636LL) = a13;
  *(_DWORD *)(*(_QWORD *)this + 3552LL) = 0;
  v19 = *(_QWORD *)this;
  v20 = v19;
  v74 = *(_QWORD *)this;
  if ( *(_DWORD *)(*(_QWORD *)(v19 + 1816) + 24LL) != 6 )
  {
    *(_QWORD *)(*(_QWORD *)this + 64LL) = GreCreateSemaphoreInternal();
    v19 = *(_QWORD *)this;
    if ( !*(_QWORD *)(*(_QWORD *)this + 64LL) )
      goto LABEL_124;
  }
  if ( (a12 & 1) != 0 )
    *(_DWORD *)(v19 + 2636) = 5;
  v21 = *(_QWORD *)this;
  v22 = *(_QWORD *)(*(_QWORD *)this + 1816LL);
  if ( *(_DWORD *)(v22 + 24) == 1 && *(_DWORD *)(v21 + 2636) == 5 )
  {
    if ( (int)IsPanningGetFunctionTableSupported_0() >= 0 )
    {
      PanningGetFunctionTable_0();
      bFillFunctionTable(v76, v75, (__int64 (**)(void))(*(_QWORD *)this + 2720LL));
    }
  }
  else
  {
    memmove((void *)(v21 + 2720), (const void *)(v22 + 64), 0x338uLL);
  }
  *(_QWORD *)(*(_QWORD *)this + 1736LL) = a8;
  *(_QWORD *)(*(_QWORD *)this + 1536LL) = a5;
  v23 = a9;
  if ( a9 )
  {
    v24 = (_OWORD *)(*(_QWORD *)this + 2160LL);
    v25 = 2LL;
    do
    {
      *v24 = *(_OWORD *)&v23->ulVersion;
      v24[1] = *(_OWORD *)&v23->ulHorzRes;
      v24[2] = *(_OWORD *)&v23->ulNumColors;
      v24[3] = *(_OWORD *)&v23->flTextCaps;
      v24[4] = *(_OWORD *)&v23->ulAspectX;
      v24[5] = *(_OWORD *)&v23->yStyleStep;
      v24[6] = *(_OWORD *)&v23->szlPhysSize.cx;
      v24 += 8;
      v26 = *(_OWORD *)&v23->ciDevice.Red.y;
      v23 = (struct _GDIINFO *)((char *)v23 + 128);
      *(v24 - 1) = v26;
      --v25;
    }
    while ( v25 );
    v27 = 2LL;
    *v24 = *(_OWORD *)&v23->ulVersion;
    v24[1] = *(_OWORD *)&v23->ulHorzRes;
    v24[2] = *(_OWORD *)&v23->ulNumColors;
    v24[3] = *(_OWORD *)&v23->flTextCaps;
    v29 = (_OWORD *)(*(_QWORD *)this + 1848LL);
    do
    {
      *v29 = *(_OWORD *)a10;
      v29[1] = *((_OWORD *)a10 + 1);
      v29[2] = *((_OWORD *)a10 + 2);
      v29[3] = *((_OWORD *)a10 + 3);
      v29[4] = *((_OWORD *)a10 + 4);
      v29[5] = *((_OWORD *)a10 + 5);
      v29[6] = *((_OWORD *)a10 + 6);
      v29 += 8;
      v30 = *((_OWORD *)a10 + 7);
      a10 = (struct tagDEVINFO *)((char *)a10 + 128);
      *(v29 - 1) = v30;
      --v27;
    }
    while ( v27 );
    *v29 = *(_OWORD *)a10;
    v29[1] = *((_OWORD *)a10 + 1);
    v29[2] = *((_OWORD *)a10 + 2);
    *((_QWORD *)v29 + 6) = *((_QWORD *)a10 + 6);
  }
  v77 = (_DWORD *)(v20 + 56);
  SETFLAG(a11, (volatile unsigned int *)(v20 + 56), 0x8000u);
  if ( v31 )
    *(_QWORD *)(*(_QWORD *)this + 1824LL) = *((_QWORD *)a2 + 5);
  v32 = v73;
  *(_QWORD *)(*(_QWORD *)this + 1824LL) = PDEVOBJ::EnablePDEV(
                                            (PDEVOBJ *)&v74,
                                            a3,
                                            a4,
                                            *(_QWORD *)this + 2160LL,
                                            (HSURF *)(*(_QWORD *)this + 1488LL),
                                            v70,
                                            (struct _GDIINFO *)(*(_QWORD *)this + 2160LL),
                                            v71,
                                            (struct tagDEVINFO *)(*(_QWORD *)this + 1848LL),
                                            *(HDEV *)this,
                                            v72,
                                            v73);
  v33 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 1824LL) )
    goto LABEL_124;
  if ( *(_DWORD *)(*(_QWORD *)(v33 + 1816) + 24LL) == 6 )
    goto LABEL_121;
  v34 = *(_DWORD *)(v33 + 2168);
  if ( v34 > 0 )
  {
    *(_DWORD *)(v33 + 2168) = 1000 * v34;
  }
  else if ( v34 )
  {
    *(_DWORD *)(v33 + 2168) = -v34;
  }
  else
  {
    *(_DWORD *)(v33 + 2168) = 25400 * (unsigned __int64)*(unsigned int *)(v33 + 2176) / 0x60;
  }
  v35 = *(_QWORD *)this;
  v36 = *(_DWORD *)(*(_QWORD *)this + 2172LL);
  if ( v36 > 0 )
  {
    *(_DWORD *)(v35 + 2172) = 1000 * v36;
  }
  else if ( v36 )
  {
    *(_DWORD *)(v35 + 2172) = -v36;
  }
  else
  {
    *(_DWORD *)(v35 + 2172) = 25400 * (unsigned __int64)*(unsigned int *)(v35 + 2180) / 0x60;
  }
  if ( !a11 )
  {
    v37 = *(_QWORD *)this;
    v38 = *(_DWORD *)(*(_QWORD *)this + 2204LL);
    if ( *(_DWORD *)(*(_QWORD *)this + 2200LL) != v38 )
    {
      if ( (unsigned int)*(unsigned __int16 *)(v37 + 2206) - 100 <= 0x190 )
      {
        *(_DWORD *)(v37 + 3552) = v38;
        *(_DWORD *)(*(_QWORD *)this + 2204LL) = *(_DWORD *)(*(_QWORD *)this + 2200LL);
      }
      else
      {
        *(_DWORD *)(v37 + 2204) = 0;
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
  v39 = *(_QWORD *)this;
  v40 = 17424;
  if ( (*(_DWORD *)(*(_QWORD *)this + 2164LL) & 0xFFFFFFFB) != 0 )
    v40 = 28313;
  if ( *(_DWORD *)(*(_QWORD *)this + 2164LL) == 1 )
    v40 |= 0x1000u;
  if ( (*(_DWORD *)(v39 + 1848) & 0x80000) != 0 )
    v40 |= 0x100u;
  *(_DWORD *)(v39 + 2196) = v40;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v72, *(HPALETTE *)(*(_QWORD *)this + 2144LL));
  v42 = v72;
  if ( !v72 )
    goto LABEL_53;
  if ( !*((_DWORD *)v72 + 7) )
  {
    v41 = (unsigned int *)*((_QWORD *)v72 + 16);
    v43 = *v41;
    v44 = v41[1];
    v45 = v44 <= *v41;
    if ( v44 < *v41 )
    {
      v46 = v41[2];
      if ( v43 > v46 )
      {
        v45 = v44 <= v46;
        v47 = *(_QWORD *)this;
        *(_DWORD *)(v47 + 2392) = v45;
        goto LABEL_69;
      }
      v45 = v44 <= v43;
    }
    if ( v45 || (v48 = v41[2], v44 <= v48) )
    {
      v45 = v43 <= v44;
      v50 = *(_QWORD *)this;
      if ( v45 )
        *(_DWORD *)(v50 + 2392) = 4;
      else
        *(_DWORD *)(v50 + 2392) = 5;
    }
    else
    {
      v49 = *(_QWORD *)this;
      if ( v43 <= v48 )
        *(_DWORD *)(v49 + 2392) = 3;
      else
        *(_DWORD *)(v49 + 2392) = 2;
    }
  }
LABEL_69:
  if ( (*(_DWORD *)(*(_QWORD *)this + 2196LL) & 0x100) != 0
    && !(unsigned int)CreateSurfacePal(
                        v42,
                        v41,
                        *(unsigned int *)(*(_QWORD *)this + 2192LL),
                        *(unsigned int *)(*(_QWORD *)this + 2264LL))
    || a11 && !(unsigned int)GreSetPaletteOwner(*(_QWORD *)v42, 0LL) )
  {
LABEL_53:
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v72);
LABEL_124:
    v68 = *(struct _ERESOURCE **)(*(_QWORD *)this + 64LL);
    if ( v68 )
      GreDeleteSemaphore(v68);
    if ( *(_QWORD *)(*(_QWORD *)this + 1544LL) && (int)IsPDEVOBJ_bDisableHalftoneSupported_0() >= 0 )
      PDEVOBJ_bDisableHalftoneWrap_0();
    PDEVOBJ::vDeleteHTPATSIZEUSERAllocations(this);
    if ( *(_QWORD *)(*(_QWORD *)this + 1824LL) )
    {
      (*(void (**)(void))(v20 + 2736))();
      *(_QWORD *)(*(_QWORD *)this + 1824LL) = 0LL;
    }
    if ( a11 )
      EngFreeMem(*(PVOID *)this);
    else
      Win32FreePool();
    *(_QWORD *)this = 0LL;
    return this;
  }
  v51 = *(_QWORD *)this;
  v72 = 0LL;
  *(_QWORD *)(v51 + 1832) = v42;
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v72);
  v52 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 1488LL)
    || (v53 = *(_DWORD *)(*(_QWORD *)(v52 + 1816) + 24LL), v53 == 1)
    || v53 == 4 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v52 + 1816) + 24LL) == 2 )
    {
      if ( (int)IsPDEVOBJ_bCreateHalftoneBrushesSupported_0() < 0 )
        goto LABEL_82;
      HalftoneBrushesWrap_0 = PDEVOBJ_bCreateHalftoneBrushesWrap_0();
    }
    else
    {
      if ( (int)IsPDEVOBJ_bCreateDefaultBrushesSupported_0() < 0 )
        goto LABEL_82;
      HalftoneBrushesWrap_0 = PDEVOBJ_bCreateDefaultBrushesWrap_0();
    }
    if ( !HalftoneBrushesWrap_0 )
      goto LABEL_124;
  }
LABEL_82:
  *(_QWORD *)(*(_QWORD *)this + 2584LL) = v32;
  v55 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1816LL) + 24LL);
  if ( ((v55 - 1) & 0xFFFFFFFC) == 0 && v55 != 2 )
  {
    *(_QWORD *)(*(_QWORD *)this + 1760LL) = *(_QWORD *)(v20 + 2960);
    *(_QWORD *)(*(_QWORD *)this + 1752LL) = *(_QWORD *)(v20 + 2952);
    v73 = ghsemDriverMgmt;
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    *(_QWORD *)(*(_QWORD *)this + 72LL) = GreCreateSemaphoreInternal();
    if ( !*(_QWORD *)(*(_QWORD *)this + 72LL) )
    {
      SEMOBJ::vUnlock((SEMOBJ *)&v73);
      goto LABEL_124;
    }
    *(_DWORD *)(*(_QWORD *)this + 56LL) |= 1u;
    SEMOBJ::vUnlock((SEMOBJ *)&v73);
  }
  *(_QWORD *)(*(_QWORD *)this + 1792LL) = *(_QWORD *)(v20 + 2896);
  *(_QWORD *)(*(_QWORD *)this + 1776LL) = *(_QWORD *)(v20 + 3024);
  *(_QWORD *)(*(_QWORD *)this + 1784LL) = *(_QWORD *)(v20 + 3424);
  *(_QWORD *)(*(_QWORD *)this + 1800LL) = *(_QWORD *)(v20 + 3416);
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
  v58 = *(_QWORD *)this;
  v59 = 12 * *(_DWORD *)(*(_QWORD *)this + 2204LL) / 0x48u;
  memset(v78, 0, sizeof(v78));
  if ( !*(_DWORD *)(v58 + 1852) )
    *(_DWORD *)(v58 + 1852) = v59;
  if ( !*(_DWORD *)(*(_QWORD *)this + 1944LL) )
    *(_DWORD *)(*(_QWORD *)this + 1944LL) = v59;
  if ( !*(_DWORD *)(*(_QWORD *)this + 2036LL) )
    *(_DWORD *)(*(_QWORD *)this + 2036LL) = v59;
  if ( (int)IsvConvertLogFontWSupported_0() >= 0 )
    vConvertLogFontW_0();
  v60 = *(_QWORD *)this;
  if ( *(_DWORD *)(*(_QWORD *)this + 2164LL) == 1 )
    goto LABEL_110;
  if ( (int)IshfontCreateSupported_0() >= 0 )
  {
    v61 = hfontCreate_0();
    *(_QWORD *)(*(_QWORD *)this + 1464LL) = v61;
    if ( !v61 )
    {
LABEL_109:
      v60 = *(_QWORD *)this;
LABEL_110:
      *(_QWORD *)(v60 + 1464) = qword_1C0103E58;
      goto LABEL_111;
    }
  }
  if ( (int)IsGreSetLFONTOwnerSupported_0() >= 0 && !(unsigned int)GreSetLFONTOwner_0() )
  {
    bDeleteFont_0();
    goto LABEL_109;
  }
LABEL_111:
  if ( (int)IsvConvertLogFontWSupported_0() >= 0 )
    vConvertLogFontW_0();
  v62 = hfontCreate_0();
  *(_QWORD *)(*(_QWORD *)this + 1472LL) = v62;
  v63 = *(_QWORD *)this;
  if ( !v62 )
    goto LABEL_116;
  if ( !(unsigned int)GreSetLFONTOwner_0() )
  {
    bDeleteFont_0();
    v63 = *(_QWORD *)this;
LABEL_116:
    *(_QWORD *)(v63 + 1472) = qword_1C0103E58;
  }
  vConvertLogFontW_0();
  v64 = hfontCreate_0();
  *(_QWORD *)(*(_QWORD *)this + 1480LL) = v64;
  v65 = *(_QWORD *)this;
  if ( !v64 )
  {
LABEL_120:
    *(_QWORD *)(v65 + 1480) = qword_1C0103E70;
    goto LABEL_121;
  }
  if ( !(unsigned int)GreSetLFONTOwner_0() )
  {
    bDeleteFont_0();
    v65 = *(_QWORD *)this;
    goto LABEL_120;
  }
LABEL_121:
  *(_DWORD *)(*(_QWORD *)this + 32LL) = 1;
  *(_DWORD *)(*(_QWORD *)this + 36LL) = 1;
  if ( (*v77 & 1) != 0 )
  {
    PDEVOBJ::bDisabled((PDEVOBJ *)&v74, 1);
    vResetSurfacePalette(*(HDEV *)this);
  }
  v66 = (_QWORD *)(*(_QWORD *)this + 2648LL);
  v66[1] = v66;
  *v66 = v66;
  EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
  *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)(*(_QWORD *)this + 24LL) = WPP_MAIN_CB.DeviceQueue.1;
  WPP_MAIN_CB.DeviceQueue.1 = *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)this;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
  GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  PDEVOBJ::CompletePDEV((PDEVOBJ *)&v74, *(struct DHPDEV__ **)(*(_QWORD *)this + 1824LL), *(HDEV *)this);
  v67 = (_QWORD *)(*(_QWORD *)this + 3560LL);
  v67[1] = v67;
  *v67 = v67;
  return this;
}
