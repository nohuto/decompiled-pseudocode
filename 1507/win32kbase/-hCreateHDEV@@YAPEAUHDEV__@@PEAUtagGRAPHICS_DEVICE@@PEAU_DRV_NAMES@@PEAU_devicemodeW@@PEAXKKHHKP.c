/*
 * XREFs of ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0063F40
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0062A9C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 * Callees:
 *     IsPDEVOBJ_vProfileDriverSupported_0 @ 0x1C0001748 (IsPDEVOBJ_vProfileDriverSupported_0.c)
 *     PDEVOBJ_vProfileDriverWrap_0 @ 0x1C0001750 (PDEVOBJ_vProfileDriverWrap_0.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00343E4 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0034504 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00345F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00346B0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00349B0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0035490 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C00393F0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     HmgShareLockCheck @ 0x1C003AFC0 (HmgShareLockCheck.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     ldevUnloadImage @ 0x1C005E930 (ldevUnloadImage.c)
 *     ldevLoadDriver @ 0x1C005EA30 (ldevLoadDriver.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C0065134 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z @ 0x1C0065254 (-DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C00652A0 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     bSetDeviceSessionUsage @ 0x1C0066360 (bSetDeviceSessionUsage.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0066760 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C006F8F0 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ldevLoadInternal @ 0x1C007EA70 (ldevLoadInternal.c)
 *     memcmp @ 0x1C00859F0 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00B77B8 (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1C00B783C (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 */

__int64 __fastcall hCreateHDEV(
        struct tagGRAPHICS_DEVICE *a1,
        struct _DRV_NAMES *a2,
        struct _devicemodeW *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        unsigned int a9,
        HDEV *a10)
{
  struct _DRV_NAMES *v12; // rdi
  _QWORD *v14; // rax
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // rdx
  HDEV v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r15
  HDEV v21; // rbx
  BOOL v22; // r12d
  __int64 v23; // r8
  struct PDEV *v24; // rdi
  struct tagGRAPHICS_DEVICE *v25; // rcx
  HDEV v26; // r14
  int v27; // eax
  const struct _devicemodeW *v28; // rdx
  int v29; // ecx
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v43; // r8
  _QWORD *v44; // rbx
  unsigned int v45; // r14d
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  int v49; // r8d
  char *v50; // rdi
  __int64 Driver; // rax
  struct _LDEV *v52; // r15
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  int v60; // ecx
  __int64 v61; // rax
  __int64 v62; // rax
  bool v63; // zf
  __int64 v64; // rcx
  void *v65; // rax
  void *v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rax
  __int64 v71; // [rsp+78h] [rbp-29h] BYREF
  __int64 v72[11]; // [rsp+80h] [rbp-21h] BYREF
  struct PDEV *v73; // [rsp+E8h] [rbp+47h] BYREF
  struct _DRV_NAMES *v74; // [rsp+F0h] [rbp+4Fh]
  __int64 v75; // [rsp+100h] [rbp+5Fh] BYREF

  v75 = a4;
  v74 = a2;
  v12 = a2;
  v14 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v15 = a5;
  v16 = a6;
  v14[7] = a9;
  v14[3] = a1;
  v14[4] = a4;
  v14[5] = v15;
  v14[6] = v16;
  WdLogEvent5_WdEvent(v14);
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0;
  *a10 = 0LL;
  if ( a1 == (struct tagGRAPHICS_DEVICE *)-4LL )
    goto LABEL_49;
  if ( !a3 )
    goto LABEL_79;
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  v24 = gppdevList;
  while ( v24 )
  {
    v25 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v24 + 325);
    v73 = v24;
    if ( (((unsigned __int64)v25 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && a1 == v25 )
    {
      ++*((_DWORD *)v24 + 8);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v23);
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
      EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
      EngAcquireSemaphore(*((HSEMAPHORE *)v24 + 8));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *((_QWORD *)v24 + 8), 11);
      v26 = 0LL;
      v27 = PDEVOBJ::bLddmDriver((PDEVOBJ *)&v73);
      v28 = (const struct _devicemodeW *)*((_QWORD *)v24 + 327);
      if ( v27 )
        v29 = DevmodeEqualEx(a3, v28);
      else
        v29 = memcmp(a3, v28, 0xDCuLL) == 0;
      if ( (*((_DWORD *)a1 + 40) & 0x20000000) != 0 && gbInvalidateDualView && !gbDeferredInvalidateDualView && a7 != 1 )
        goto LABEL_25;
      v31 = *((_DWORD *)v24 + 14);
      if ( (v31 & 0x80000) != 0
        || *((_QWORD *)v24 + 324) != v75
        || *((_DWORD *)v24 + 658) != a5
        || *((_DWORD *)v24 + 659) != a6
        || !v29
        || a8 )
      {
        if ( a7 == 1 )
        {
          v22 = 1;
          goto LABEL_26;
        }
LABEL_25:
        v26 = (HDEV)v24;
        goto LABEL_26;
      }
      if ( v21 )
      {
        if ( (v31 & 0x400) != 0 )
          goto LABEL_26;
        v26 = v21;
        v20 = (__int64)v21;
      }
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v73);
      v21 = (HDEV)v24;
LABEL_26:
      EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *((_QWORD *)v24 + 8), v30);
      GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)v24 + 8));
      if ( v26 )
      {
        if ( gbDeferredInvalidateDualView )
        {
          gbDeferredInvalidateDualView = 0;
          gbInvalidateDualView = 1;
          v22 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
        }
        EngAcquireSemaphore(*((HSEMAPHORE *)v26 + 8));
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poDisable.hsemDevLock()", *((_QWORD *)v26 + 8), 11);
        if ( ((_DWORD)v26[14] & 0x400) == 0 )
        {
          if ( (unsigned int)DrvDisableDisplay(v26, 0) )
            *a10 = v26;
          else
            v22 = 1;
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"poDisable.hsemDevLock()", *((_QWORD *)v26 + 8), v33);
        GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)v26 + 8));
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v32);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
      if ( v20 )
      {
        v71 = v20;
        PDEVOBJ::vUnreferencePdev(&v71, 0);
      }
      v24 = (struct PDEV *)*((_QWORD *)v24 + 3);
      PDEVOBJ::vUnreferencePdev((__int64 *)&v73, 0);
      v20 = 0LL;
    }
    else
    {
      v24 = (struct PDEV *)*((_QWORD *)v24 + 3);
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v23);
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  if ( v22 )
  {
    if ( v21 )
    {
      v75 = (__int64)v21;
      PDEVOBJ::vUnreferencePdev(&v75, 0);
    }
    goto LABEL_79;
  }
  if ( v21 )
  {
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    *((_QWORD *)v21 + 6) = 0LL;
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v34);
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
    EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
    EngAcquireSemaphore(*((HSEMAPHORE *)v21 + 8));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *((_QWORD *)v21 + 8), 11);
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    ++*((_DWORD *)v21 + 9);
    if ( ((_DWORD)v21[14] & 0x400) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v35);
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
      DrvEnableDisplay(v21);
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v35);
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
    EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *((_QWORD *)v21 + 8), v36);
    GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)v21 + 8));
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v37);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    v41 = WdLogNewEntry5_WdTrace(v39, v38, v40);
    *(_QWORD *)(v41 + 24) = v21;
    WdLogEvent5_WdTrace(v41);
    return (__int64)v21;
  }
  if ( gbDeferredInvalidateDualView )
  {
    gbDeferredInvalidateDualView = 0;
    gbInvalidateDualView = 1;
    EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
    v22 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v43);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    if ( v22 )
      goto LABEL_75;
  }
  v12 = v74;
LABEL_49:
  v44 = PALLOCMEM2(0x9F8uLL, 1886221383LL, 1);
  if ( !v44 )
    goto LABEL_75;
  v45 = 0;
  if ( !*(_DWORD *)v12 )
    goto LABEL_74;
  v46 = 3LL;
  while ( 2 )
  {
    if ( a9 == 1 )
    {
      v49 = 1;
      if ( (*((_DWORD *)a1 + 40) & 0x4000000) != 0 )
        v49 = 3;
      v48 = 1LL;
LABEL_60:
      v50 = (char *)v12 + 16 * v45;
      Driver = ldevLoadDriver(*((PCWSTR *)v50 + 2), v48, v49);
    }
    else
    {
      if ( a9 != 2 )
      {
        v47 = a9 - 3;
        if ( a9 == 4 )
        {
          v48 = 4LL;
          v49 = 1;
          goto LABEL_60;
        }
LABEL_63:
        v53 = WdLogNewEntry5_WdTrace(v47, v46, v19);
        WdLogEvent5_WdTrace(v53);
LABEL_73:
        ++v45;
        v46 = 3LL;
        if ( v45 >= *(_DWORD *)v12 )
          goto LABEL_74;
        continue;
      }
      v50 = (char *)v12 + 16 * v45;
      Driver = ldevLoadInternal(*((_QWORD *)v50 + 2), 3LL);
    }
    break;
  }
  v52 = (struct _LDEV *)Driver;
  if ( !Driver )
  {
    v12 = v74;
    goto LABEL_63;
  }
  bSetDeviceSessionUsage(a1, 1LL);
  if ( a1 != (struct tagGRAPHICS_DEVICE *)-4LL && (*((_DWORD *)a1 + 40) & 0x800000) != 0 && a8 )
    ((void (__fastcall *)(char *, _QWORD, __int64))qword_1C01013C8)((char *)a1 + 264, *((unsigned int *)a1 + 68), 1LL);
  PDEVOBJ::PDEVOBJ(
    (PDEVOBJ *)&v73,
    v52,
    a3,
    0LL,
    0LL,
    *((unsigned __int16 **)v50 + 2),
    *((void **)v50 + 1),
    0LL,
    0LL,
    0LL,
    0,
    a5,
    a6);
  if ( !v73 )
  {
    v57 = WdLogNewEntry5_WdTrace(v55, v54, v56);
    WdLogEvent5_WdTrace(v57);
    bSetDeviceSessionUsage(a1, 0LL);
    ldevUnloadImage((__int64)v52);
LABEL_72:
    v12 = v74;
    goto LABEL_73;
  }
  *((_QWORD *)v73 + 325) = a1;
  if ( !(unsigned int)PDEVOBJ::bMakeSurface((PDEVOBJ *)&v73, 0LL) )
  {
    bSetDeviceSessionUsage(a1, 0LL);
    PDEVOBJ::vUnreferencePdev((__int64 *)&v73, 0);
    goto LABEL_72;
  }
  v59 = (__int64)v73;
  v60 = (int)ghbrGrayPattern;
  *((_QWORD *)v73 + 201) = 0LL;
  *(_QWORD *)(v59 + 1584) = 0LL;
  *(_DWORD *)(v59 + 1592) = 0;
  v61 = HmgShareLockCheck(v60, 16);
  HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>(v72, v61);
  v44[10] = v44 + 67;
  *((_DWORD *)v44 + 144) = 0;
  *(_DWORD *)(v44[10] + 32LL) = 0xFFFFFF;
  v62 = v44[10];
  *((_DWORD *)v44 + 28) = 0;
  *(_QWORD *)(v62 + 112) = 0LL;
  EBRUSHOBJ::vInitBrush(
    (unsigned int *)v73 + 394,
    (__int64)v44,
    v72[0],
    (__int64)ppalDefault,
    *(_QWORD *)(*((_QWORD *)v73 + 322) + 120LL),
    *((_QWORD *)v73 + 322),
    1u);
  HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>(v72);
  if ( !*((_QWORD *)SURFACE::pdibDefault + 6) )
    *((_QWORD *)SURFACE::pdibDefault + 6) = v73;
  v63 = a9 == 2;
  v64 = v75;
  *((_QWORD *)v73 + 325) = a1;
  *((_QWORD *)v73 + 324) = v64;
  if ( !v63 )
  {
    v65 = PALLOCMEM2(a3->dmSize + (unsigned int)a3->dmDriverExtra, 1986356295LL, 0);
    *((_QWORD *)v73 + 327) = v65;
    v66 = (void *)*((_QWORD *)v73 + 327);
    if ( v66 )
    {
      memmove(v66, a3, a3->dmSize + a3->dmDriverExtra);
      *(_DWORD *)(*((_QWORD *)v73 + 327) + 72LL) |= 0x20u;
      DrvUpdateAttachFlag(a1, 1u);
    }
    else
    {
      v22 = 1;
    }
  }
  PDEVOBJ::bDisabled((PDEVOBJ *)&v73, 0);
  if ( (*((_DWORD *)v73 + 14) & 0x20000) == 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v73 + 325) + 160LL) & 0x800000) != 0 )
    {
      *((_DWORD *)v73 + 15) |= 4u;
    }
    else if ( (int)IsPDEVOBJ_vProfileDriverSupported_0() >= 0 )
    {
      PDEVOBJ_vProfileDriverWrap_0();
    }
  }
  if ( v22 )
  {
    PDEVOBJ::vUnreferencePdev((__int64 *)&v73, 0);
LABEL_74:
    Win32FreePool();
LABEL_75:
    v18 = *a10;
    if ( *a10 && ((*((_DWORD *)a1 + 40) & 0x20000000) == 0 || !gbInvalidateDualView) )
      DrvEnableDisplay(v18);
LABEL_79:
    v58 = WdLogNewEntry5_WdTrace(v18, v17, v19);
    WdLogEvent5_WdTrace(v58);
    return 0LL;
  }
  else
  {
    Win32FreePool();
    v70 = WdLogNewEntry5_WdTrace(v68, v67, v69);
    *(_QWORD *)(v70 + 24) = v73;
    WdLogEvent5_WdTrace(v70);
    return (__int64)v73;
  }
}
