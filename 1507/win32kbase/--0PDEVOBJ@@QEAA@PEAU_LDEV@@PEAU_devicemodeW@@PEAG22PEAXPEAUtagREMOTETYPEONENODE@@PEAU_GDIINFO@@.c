/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00349B0
 * Callers:
 *     hdcOpenDCW @ 0x1C0053650 (hdcOpenDCW.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0063F40 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
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
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000BD98 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreSetPaletteOwner @ 0x1C000C180 (GreSetPaletteOwner.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C0017BA0 (-SETFLAG@@YAXHAECKK@Z.c)
 *     GreCreateSemaphoreInternal @ 0x1C002439C (GreCreateSemaphoreInternal.c)
 *     EngAllocMem @ 0x1C0024420 (EngAllocMem.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0034324 (-EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPE.c)
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C00343A8 (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C00343C4 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0034504 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C005AB10 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C005AB38 (--1EPALOBJ@@QEAA@XZ.c)
 *     GreDeleteSemaphore @ 0x1C005C6D0 (GreDeleteSemaphore.c)
 *     EngFreeMem @ 0x1C005C710 (EngFreeMem.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C005E7C4 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     ?bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z @ 0x1C007EC1C (-bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C00BFCCC (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
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
  __int64 v37; // r8
  int v38; // edx
  __int64 v39; // r8
  unsigned __int16 *v40; // rbx
  unsigned int *v41; // rdx
  unsigned int v42; // ecx
  unsigned int v43; // eax
  bool v44; // cc
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _DWORD *v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // edx
  int HalftoneBrushesWrap_0; // eax
  int v53; // ecx
  __int64 v54; // rdx
  __int64 v55; // r8
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
  __int64 v67; // r8
  _QWORD *v68; // rax
  struct _ERESOURCE *v69; // rcx
  unsigned int v71; // [rsp+28h] [rbp-D8h]
  unsigned int v72; // [rsp+38h] [rbp-C8h]
  unsigned __int16 *v73; // [rsp+60h] [rbp-A0h] BYREF
  void *v74; // [rsp+68h] [rbp-98h] BYREF
  __int64 v75; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v76; // [rsp+78h] [rbp-88h]
  struct _DRVFN *v77; // [rsp+80h] [rbp-80h]
  _DWORD *v78; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v79; // [rsp+90h] [rbp-70h]
  _BYTE v80[420]; // [rsp+A0h] [rbp-60h] BYREF

  v73 = a6;
  v74 = a7;
  v79 = a4;
  v16 = gdwDirectDrawContext + 3588;
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
  *(_DWORD *)(*(_QWORD *)this + 3552LL) = 0;
  v18 = *(_QWORD *)this;
  v19 = v18;
  v75 = *(_QWORD *)this;
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
      bFillFunctionTable(v77, v76, (__int64 (**)(void))(*(_QWORD *)this + 2720LL));
    }
  }
  else
  {
    memmove((void *)(v20 + 2720), (const void *)(v21 + 64), 0x338uLL);
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
  v78 = (_DWORD *)(v19 + 56);
  SETFLAG(a11, (volatile unsigned int *)(v19 + 56), 0x8000);
  if ( a11 )
    *(_QWORD *)(*(_QWORD *)this + 1824LL) = *((_QWORD *)a2 + 5);
  v30 = v74;
  *(_QWORD *)(*(_QWORD *)this + 1824LL) = PDEVOBJ::EnablePDEV(
                                            (PDEVOBJ *)&v75,
                                            a3,
                                            v79,
                                            *(_QWORD *)this + 2160LL,
                                            (HSURF *)(*(_QWORD *)this + 1488LL),
                                            v71,
                                            (struct _GDIINFO *)(*(_QWORD *)this + 2160LL),
                                            v72,
                                            (struct tagDEVINFO *)(*(_QWORD *)this + 1848LL),
                                            *(HDEV *)this,
                                            v73,
                                            v74);
  v31 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 1824LL) )
    goto LABEL_128;
  if ( *(_DWORD *)(*(_QWORD *)(v31 + 1816) + 24LL) == 6 )
    goto LABEL_125;
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
        *(_DWORD *)(v35 + 3552) = v36;
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
  if ( (*(_DWORD *)(*(_QWORD *)this + 2164LL) & 0xFFFFFFFB) != 0 )
    v38 = 28313;
  if ( *(_DWORD *)(*(_QWORD *)this + 2164LL) == 1 )
    v38 |= 0x1000u;
  if ( (*(_DWORD *)(v37 + 1848) & 0x80000) != 0 )
    v38 |= 0x100u;
  *(_DWORD *)(v37 + 2196) = v38;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v73, *(HPALETTE *)(*(_QWORD *)this + 2144LL));
  v40 = v73;
  if ( !v73 || (*((_DWORD *)v73 + 6) & 0x1000000) == 0 )
    goto LABEL_53;
  if ( !*((_DWORD *)v73 + 7) )
  {
    v41 = (unsigned int *)*((_QWORD *)v73 + 16);
    v42 = *v41;
    v43 = v41[1];
    v44 = v43 <= *v41;
    if ( v43 < *v41 )
    {
      v39 = v41[2];
      if ( v42 > (unsigned int)v39 )
      {
        v44 = v43 <= (unsigned int)v39;
        v45 = *(_QWORD *)this;
        *(_DWORD *)(v45 + 2392) = v44;
        goto LABEL_70;
      }
      v44 = v43 <= v42;
    }
    if ( v44 || (v39 = v41[2], v43 <= (unsigned int)v39) )
    {
      v44 = v42 <= v43;
      v47 = *(_QWORD *)this;
      if ( v44 )
        *(_DWORD *)(v47 + 2392) = 4;
      else
        *(_DWORD *)(v47 + 2392) = 5;
    }
    else
    {
      v46 = *(_QWORD *)this;
      if ( v42 <= (unsigned int)v39 )
        *(_DWORD *)(v46 + 2392) = 3;
      else
        *(_DWORD *)(v46 + 2392) = 2;
    }
  }
LABEL_70:
  v48 = *(_DWORD **)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 2196LL) & 0x100) != 0 )
  {
    if ( !a11 || *((_DWORD *)v40 + 7) == 256 )
    {
      if ( !(unsigned int)CreateSurfacePal(v40, 256LL, (unsigned int)v48[548], (unsigned int)v48[566]) )
      {
LABEL_53:
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v73);
        goto LABEL_128;
      }
    }
    else
    {
      v48[462] &= ~0x80000u;
      *(_DWORD *)(*(_QWORD *)this + 2196LL) &= ~0x100u;
    }
  }
  if ( a11 && !(unsigned int)GreSetPaletteOwner(*(struct _DEVOBJ_EXTENSION **)v40, 0LL, v39) )
    goto LABEL_53;
  v49 = *(_QWORD *)this;
  v73 = 0LL;
  *(_QWORD *)(v49 + 1832) = v40;
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v73);
  v50 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 1488LL)
    || (v51 = *(_DWORD *)(*(_QWORD *)(v50 + 1816) + 24LL), v51 == 1)
    || v51 == 4 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v50 + 1816) + 24LL) == 2 )
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
      v69 = *(struct _ERESOURCE **)(*(_QWORD *)this + 64LL);
      if ( v69 )
        GreDeleteSemaphore(v69);
      if ( *(_QWORD *)(*(_QWORD *)this + 1544LL) && (int)IsPDEVOBJ_bDisableHalftoneSupported_0() >= 0 )
        PDEVOBJ_bDisableHalftoneWrap_0();
      PDEVOBJ::vDeleteHTPATSIZEUSERAllocations(this);
      if ( *(_QWORD *)(*(_QWORD *)this + 1824LL) )
      {
        (*(void (**)(void))(v19 + 2736))();
        *(_QWORD *)(*(_QWORD *)this + 1824LL) = 0LL;
      }
      if ( a11 )
        EngFreeMem(*(PVOID *)this);
      else
        Win32FreePool();
      *(_QWORD *)this = 0LL;
      return this;
    }
  }
LABEL_86:
  *(_QWORD *)(*(_QWORD *)this + 2584LL) = v30;
  v53 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1816LL) + 24LL);
  if ( ((v53 - 1) & 0xFFFFFFFC) == 0 && v53 != 2 )
  {
    *(_QWORD *)(*(_QWORD *)this + 1760LL) = *(_QWORD *)(v19 + 2960);
    *(_QWORD *)(*(_QWORD *)this + 1752LL) = *(_QWORD *)(v19 + 2952);
    v74 = ghsemDriverMgmt;
    EngAcquireSemaphore(ghsemDriverMgmt);
    *(_QWORD *)(*(_QWORD *)this + 72LL) = GreCreateSemaphoreInternal();
    if ( !*(_QWORD *)(*(_QWORD *)this + 72LL) )
    {
      SEMOBJ::vUnlock((SEMOBJ *)&v74, v54, v55);
      goto LABEL_128;
    }
    *(_DWORD *)(*(_QWORD *)this + 56LL) |= 1u;
    SEMOBJ::vUnlock((SEMOBJ *)&v74, v54, v55);
  }
  *(_QWORD *)(*(_QWORD *)this + 1792LL) = *(_QWORD *)(v19 + 2896);
  *(_QWORD *)(*(_QWORD *)this + 1776LL) = *(_QWORD *)(v19 + 3024);
  *(_QWORD *)(*(_QWORD *)this + 1784LL) = *(_QWORD *)(v19 + 3424);
  *(_QWORD *)(*(_QWORD *)this + 1800LL) = *(_QWORD *)(v19 + 3416);
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
  *(_DWORD *)(*(_QWORD *)this + 3576LL) = 0;
  v58 = *(_QWORD *)this;
  v59 = 12 * *(_DWORD *)(*(_QWORD *)this + 2204LL) / 0x48u;
  memset(v80, 0, sizeof(v80));
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
    goto LABEL_114;
  if ( (int)IshfontCreateSupported_0() >= 0 )
  {
    v61 = hfontCreate_0();
    *(_QWORD *)(*(_QWORD *)this + 1464LL) = v61;
    if ( !v61 )
    {
LABEL_113:
      v60 = *(_QWORD *)this;
LABEL_114:
      *(_QWORD *)(v60 + 1464) = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
      goto LABEL_115;
    }
  }
  if ( (int)IsGreSetLFONTOwnerSupported_0() >= 0 && !(unsigned int)GreSetLFONTOwner_0() )
  {
    bDeleteFont_0();
    goto LABEL_113;
  }
LABEL_115:
  if ( (int)IsvConvertLogFontWSupported_0() >= 0 )
    vConvertLogFontW_0();
  v62 = hfontCreate_0();
  *(_QWORD *)(*(_QWORD *)this + 1472LL) = v62;
  v63 = *(_QWORD *)this;
  if ( !v62 )
    goto LABEL_120;
  if ( !(unsigned int)GreSetLFONTOwner_0() )
  {
    bDeleteFont_0();
    v63 = *(_QWORD *)this;
LABEL_120:
    *(_QWORD *)(v63 + 1472) = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
  }
  vConvertLogFontW_0();
  v64 = hfontCreate_0();
  *(_QWORD *)(*(_QWORD *)this + 1480LL) = v64;
  v65 = *(_QWORD *)this;
  if ( !v64 )
  {
LABEL_124:
    *(_QWORD *)(v65 + 1480) = WPP_MAIN_CB.Reserved;
    goto LABEL_125;
  }
  if ( !(unsigned int)GreSetLFONTOwner_0() )
  {
    bDeleteFont_0();
    v65 = *(_QWORD *)this;
    goto LABEL_124;
  }
LABEL_125:
  *(_DWORD *)(*(_QWORD *)this + 32LL) = 1;
  *(_DWORD *)(*(_QWORD *)this + 36LL) = 1;
  if ( (*v78 & 1) != 0 )
  {
    PDEVOBJ::bDisabled((PDEVOBJ *)&v75, 1);
    vResetSurfacePalette(*(HDEV *)this);
  }
  v66 = (_QWORD *)(*(_QWORD *)this + 2648LL);
  v66[1] = v66;
  *v66 = v66;
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  *(_QWORD *)(*(_QWORD *)this + 24LL) = gppdevList;
  gppdevList = *(struct PDEV **)this;
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v67);
  GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  PDEVOBJ::CompletePDEV((PDEVOBJ *)&v75, *(struct DHPDEV__ **)(*(_QWORD *)this + 1824LL), *(HDEV *)this);
  v68 = (_QWORD *)(*(_QWORD *)this + 3560LL);
  v68[1] = v68;
  *v68 = v68;
  return this;
}
