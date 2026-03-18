/*
 * XREFs of ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0056E20
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0054368 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0055974 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 * Callees:
 *     IsPDEVOBJ_vProfileDriverSupported_0 @ 0x1C00016E8 (IsPDEVOBJ_vProfileDriverSupported_0.c)
 *     PDEVOBJ_vProfileDriverWrap_0 @ 0x1C00016F0 (PDEVOBJ_vProfileDriverWrap_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0037DF4 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0037F14 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038000 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00380C0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0038390 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0038E50 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0049310 (HmgShareLockCheck.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C0057FB4 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z @ 0x1C00580D4 (-DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C005BCB0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ldevUnloadImage @ 0x1C005C300 (ldevUnloadImage.c)
 *     ldevLoadDriver @ 0x1C005C400 (ldevLoadDriver.c)
 *     ldevLoadInternal @ 0x1C005CC50 (ldevLoadInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0077EF0 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C007CFA0 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C0087564 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     memcmp @ 0x1C0088C80 (memcmp.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00B58C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 */

struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *__fastcall hCreateHDEV(
        struct tagGRAPHICS_DEVICE *a1,
        struct _DRV_NAMES *a2,
        struct _devicemodeW *a3,
        struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        unsigned int a9,
        HDEV *a10)
{
  struct _DRV_NAMES *v12; // r14
  _QWORD *v14; // rax
  __int64 v15; // r10
  __int64 v16; // r9
  HDEV v17; // rcx
  HDEV v18; // rsi
  HDEV v19; // rbx
  BOOL v20; // r15d
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v21; // rdi
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v22; // r14
  struct tagGRAPHICS_DEVICE *v23; // rcx
  int v24; // eax
  const struct _devicemodeW *v25; // rdx
  int v26; // ecx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  _QWORD *v31; // rdi
  __int64 v32; // rcx
  char *v33; // rbx
  struct _LDEV *Internal; // rax
  struct _LDEV *v35; // r14
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v40; // rax
  int v41; // ecx
  struct BRUSH *v42; // rbx
  __int64 v43; // rcx
  bool v44; // zf
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v45; // rcx
  void *v46; // rax
  void *v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rax
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v50; // [rsp+70h] [rbp-10h] BYREF
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v51; // [rsp+C0h] [rbp+40h] BYREF
  struct _DRV_NAMES *v52; // [rsp+C8h] [rbp+48h]
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v53; // [rsp+D8h] [rbp+58h] BYREF

  v53 = a4;
  v52 = a2;
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
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  *a10 = 0LL;
  if ( a1 != (struct tagGRAPHICS_DEVICE *)-4LL )
  {
    if ( !a3 )
      goto LABEL_72;
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    v21 = WPP_MAIN_CB.DeviceQueue.1;
    if ( WPP_MAIN_CB.DeviceQueue.1 )
    {
      v22 = v53;
      while ( 1 )
      {
        v23 = *(struct tagGRAPHICS_DEVICE **)(*(_QWORD *)&v21 + 2600LL);
        v51 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)v21;
        if ( (((unsigned __int64)v23 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && a1 == v23 )
          break;
        v21 = *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)(*(_QWORD *)&v21 + 24LL);
LABEL_39:
        if ( !*(_QWORD *)&v21 )
        {
          v12 = v52;
          goto LABEL_41;
        }
      }
      ++*(_DWORD *)(*(_QWORD *)&v21 + 32LL);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
      GreReleaseSemaphoreInternal(ghsemDriverMgmt);
      EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      EngAcquireSemaphore(*(HSEMAPHORE *)(*(_QWORD *)&v21 + 64LL));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(*(_QWORD *)&v21 + 64LL), 11LL);
      v50 = 0LL;
      v24 = PDEVOBJ::bLddmDriver((PDEVOBJ *)&v51);
      v25 = *(const struct _devicemodeW **)(*(_QWORD *)&v21 + 2616LL);
      if ( v24 )
        v26 = DevmodeEqualEx(a3, v25);
      else
        v26 = memcmp(a3, v25, 0xDCuLL) == 0;
      if ( (*((_DWORD *)a1 + 40) & 0x20000000) == 0 || !gbInvalidateDualView || gbDeferredInvalidateDualView || a7 == 1 )
      {
        v27 = *(_DWORD *)(*(_QWORD *)&v21 + 56LL);
        if ( (v27 & 0x80000) == 0
          && *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C **)(*(_QWORD *)&v21 + 2592LL) == v22
          && *(_DWORD *)(*(_QWORD *)&v21 + 2632LL) == a5
          && *(_DWORD *)(*(_QWORD *)&v21 + 2636LL) == a6
          && v26
          && !a8 )
        {
          if ( v19 )
          {
            if ( (v27 & 0x400) != 0 )
            {
LABEL_27:
              EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()");
              GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(*(_QWORD *)&v21 + 64LL));
              if ( v18 )
              {
                if ( gbDeferredInvalidateDualView )
                {
                  gbDeferredInvalidateDualView = 0;
                  gbInvalidateDualView = 1;
                  v20 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
                }
                EngAcquireSemaphore(*((HSEMAPHORE *)v18 + 8));
                EtwTraceGreLockAcquireSemaphoreExclusive(L"poDisable.hsemDevLock()", *((_QWORD *)v18 + 8), 11LL);
                if ( ((_DWORD)v18[14] & 0x400) == 0 )
                {
                  if ( (unsigned int)DrvDisableDisplay(v18, 0) )
                    *a10 = v18;
                  else
                    v20 = 1;
                }
                EtwTraceGreLockReleaseSemaphore(L"poDisable.hsemDevLock()");
                GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)v18 + 8));
              }
              EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
              GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
              EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
              EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
              v18 = 0LL;
              if ( v50 )
                PDEVOBJ::vUnreferencePdev(&v50, 0);
              v21 = *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)(*(_QWORD *)&v21 + 24LL);
              PDEVOBJ::vUnreferencePdev(&v51, 0);
              goto LABEL_39;
            }
            v18 = v19;
            v50 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)v19;
          }
          PDEVOBJ::vReferencePdev((PDEVOBJ *)&v51);
          v19 = (HDEV)v21;
          goto LABEL_27;
        }
        if ( a7 == 1 )
        {
          v20 = 1;
          goto LABEL_27;
        }
      }
      v18 = (HDEV)v21;
      goto LABEL_27;
    }
LABEL_41:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
    if ( v20 )
    {
      if ( v19 )
      {
        v53 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)v19;
        PDEVOBJ::vUnreferencePdev(&v53, 0);
      }
      goto LABEL_72;
    }
    if ( v19 )
    {
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      *((_QWORD *)v19 + 6) = 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
      GreReleaseSemaphoreInternal(ghsemDriverMgmt);
      EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      EngAcquireSemaphore(*((HSEMAPHORE *)v19 + 8));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *((_QWORD *)v19 + 8), 11LL);
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      ++*((_DWORD *)v19 + 9);
      if ( ((_DWORD)v19[14] & 0x400) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
        GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        DrvEnableDisplay(v19);
        EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
      GreReleaseSemaphoreInternal(ghsemDriverMgmt);
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()");
      GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)v19 + 8));
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      v29 = WdLogNewEntry5_WdTrace(v28);
      *(_QWORD *)(v29 + 24) = v19;
      WdLogEvent5_WdTrace(v29);
      return (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)v19;
    }
    if ( gbDeferredInvalidateDualView )
    {
      gbDeferredInvalidateDualView = 0;
      gbInvalidateDualView = 1;
      EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      v20 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      if ( v20 )
        goto LABEL_68;
    }
  }
  v31 = PALLOCMEM2(0x9D8uLL, 1886221383LL, 1);
  if ( !v31 )
    goto LABEL_68;
  if ( !*(_DWORD *)v12 )
    goto LABEL_67;
  while ( a9 != 1 )
  {
    if ( a9 == 2 )
    {
      v33 = (char *)v12 + 16 * (unsigned int)v18;
      Internal = (struct _LDEV *)ldevLoadInternal(*((_QWORD *)v33 + 2), 3LL);
      goto LABEL_58;
    }
    v32 = a9 - 3;
    if ( a9 == 4 )
      break;
LABEL_60:
    v36 = WdLogNewEntry5_WdTrace(v32);
    WdLogEvent5_WdTrace(v36);
LABEL_66:
    LODWORD(v18) = (_DWORD)v18 + 1;
    if ( (unsigned int)v18 >= *(_DWORD *)v12 )
      goto LABEL_67;
  }
  v33 = (char *)v12 + 16 * (unsigned int)v18;
  Internal = (struct _LDEV *)ldevLoadDriver(*((PCWSTR *)v33 + 2));
LABEL_58:
  v32 = 0LL;
  v35 = Internal;
  if ( !Internal )
  {
    v12 = v52;
    goto LABEL_60;
  }
  PDEVOBJ::PDEVOBJ(
    (PDEVOBJ *)&v51,
    Internal,
    a3,
    0LL,
    0LL,
    *((unsigned __int16 **)v33 + 2),
    *((void **)v33 + 1),
    0LL,
    0LL,
    0LL,
    0,
    a5,
    a6);
  if ( !v51 )
  {
    v38 = WdLogNewEntry5_WdTrace(v37);
    WdLogEvent5_WdTrace(v38);
    ldevUnloadImage(v35);
LABEL_65:
    v12 = v52;
    goto LABEL_66;
  }
  v51[325] = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)a1;
  if ( !(unsigned int)PDEVOBJ::bMakeSurface((PDEVOBJ *)&v51, 0LL) )
  {
    PDEVOBJ::vUnreferencePdev(&v51, 0);
    goto LABEL_65;
  }
  v40 = v51;
  v41 = (int)ghbrGrayPattern;
  v51[201] = 0LL;
  v40[198] = 0LL;
  *(_DWORD *)&v40[199] = 0;
  v42 = (struct BRUSH *)HmgShareLockCheck(v41, 16);
  v31[10] = v31 + 67;
  *((_DWORD *)v31 + 144) = 0;
  *(_DWORD *)(v31[10] + 32LL) = 0xFFFFFF;
  v43 = v31[10];
  *((_DWORD *)v31 + 28) = 0;
  *(_QWORD *)(v43 + 112) = 0LL;
  EBRUSHOBJ::vInitBrush(
    &v51[197],
    v31,
    v42,
    WPP_MAIN_CB.Dpc.DpcListEntry.Next,
    *(_QWORD *)(*(_QWORD *)&v51[322] + 120LL),
    *(_QWORD *)&v51[322],
    1);
  DEC_SHARE_REF_CNT_LAZY0(v42);
  if ( !*((_QWORD *)SURFACE::pdibDefault + 6) )
    *((_QWORD *)SURFACE::pdibDefault + 6) = v51;
  v44 = a9 == 2;
  v45 = v53;
  v51[325] = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)a1;
  v51[324] = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)v45;
  if ( !v44 )
  {
    v46 = PALLOCMEM2(a3->dmSize + (unsigned int)a3->dmDriverExtra, 1986356295LL, 0);
    v51[327] = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)v46;
    v47 = (void *)v51[327];
    if ( v47 )
    {
      memmove(v47, a3, a3->dmSize + a3->dmDriverExtra);
      *(_DWORD *)(*(_QWORD *)&v51[327] + 72LL) |= 0x20u;
      DrvUpdateAttachFlag(a1, 1u);
    }
    else
    {
      v20 = 1;
    }
  }
  PDEVOBJ::bDisabled((PDEVOBJ *)&v51, 0);
  if ( (*(_DWORD *)&v51[7] & 0x20000) == 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)&v51[325] + 160LL) & 0x800000) != 0 )
    {
      *((_DWORD *)&v51[7] + 1) |= 4u;
    }
    else if ( (int)IsPDEVOBJ_vProfileDriverSupported_0() >= 0 )
    {
      PDEVOBJ_vProfileDriverWrap_0();
    }
  }
  if ( v20 )
  {
    PDEVOBJ::vUnreferencePdev(&v51, 0);
LABEL_67:
    Win32FreePool();
LABEL_68:
    v17 = *a10;
    if ( *a10 && ((*((_DWORD *)a1 + 40) & 0x20000000) == 0 || !gbInvalidateDualView) )
      DrvEnableDisplay(v17);
LABEL_72:
    v39 = WdLogNewEntry5_WdTrace(v17);
    WdLogEvent5_WdTrace(v39);
    return 0LL;
  }
  else
  {
    Win32FreePool();
    v49 = WdLogNewEntry5_WdTrace(v48);
    *(_QWORD *)(v49 + 24) = v51;
    WdLogEvent5_WdTrace(v49);
    return v51;
  }
}
