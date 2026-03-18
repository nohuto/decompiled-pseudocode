/*
 * XREFs of ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0068660
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0065BC0 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00671D4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 * Callees:
 *     IsPDEVOBJ_vProfileDriverSupported_0 @ 0x1C0001758 (IsPDEVOBJ_vProfileDriverSupported_0.c)
 *     PDEVOBJ_vProfileDriverWrap_0 @ 0x1C0001760 (PDEVOBJ_vProfileDriverWrap_0.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C0025670 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     HmgShareLockCheck @ 0x1C0029900 (HmgShareLockCheck.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0031A08 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0031B2C (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031C50 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0031D10 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0032010 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0032B30 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C0069844 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z @ 0x1C0069964 (-DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C0069AC0 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ldevUnloadImage @ 0x1C006C2D0 (ldevUnloadImage.c)
 *     ldevLoadDriver @ 0x1C006C3D0 (ldevLoadDriver.c)
 *     ldevLoadInternal @ 0x1C006CAC0 (ldevLoadInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C007E4B8 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C0088628 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     memcmp @ 0x1C0089C20 (memcmp.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00C536C (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1C00C53F0 (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 */

struct _LIST_ENTRY *__fastcall hCreateHDEV(
        struct tagGRAPHICS_DEVICE *a1,
        struct _DRV_NAMES *a2,
        struct _devicemodeW *a3,
        struct _LIST_ENTRY *a4,
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
  unsigned int v18; // edi
  HDEV v19; // rbx
  BOOL v20; // r15d
  struct _LIST_ENTRY *Blink; // rdi
  struct _LIST_ENTRY *v22; // r14
  struct tagGRAPHICS_DEVICE *v23; // rcx
  HDEV v24; // rsi
  int v25; // eax
  const struct _devicemodeW *v26; // rdx
  int v27; // ecx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  _QWORD *v32; // rsi
  __int64 v33; // rcx
  char *v34; // rbx
  struct _LDEV *Internal; // rax
  struct _LDEV *v36; // r14
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  struct _LIST_ENTRY *v41; // rax
  unsigned int v42; // ecx
  __int64 v43; // rax
  __int64 v44; // rax
  bool v45; // zf
  struct _LIST_ENTRY *v46; // rcx
  struct _LIST_ENTRY *v47; // rax
  struct _LIST_ENTRY *v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  void *v51; // [rsp+38h] [rbp-69h]
  struct _LIST_ENTRY *v52; // [rsp+78h] [rbp-29h] BYREF
  __int64 v53[11]; // [rsp+80h] [rbp-21h] BYREF
  struct _LIST_ENTRY *v54; // [rsp+E8h] [rbp+47h] BYREF
  struct _DRV_NAMES *v55; // [rsp+F0h] [rbp+4Fh]
  struct _LIST_ENTRY *v56; // [rsp+100h] [rbp+5Fh] BYREF

  v56 = a4;
  v55 = a2;
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
  v18 = 0;
  v19 = 0LL;
  v20 = 0;
  *a10 = 0LL;
  if ( a1 != (struct tagGRAPHICS_DEVICE *)-4LL )
  {
    if ( !a3 )
      goto LABEL_72;
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    Blink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
    if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink )
    {
      v22 = v56;
      while ( 1 )
      {
        v23 = (struct tagGRAPHICS_DEVICE *)Blink[162].Blink;
        v54 = Blink;
        if ( (((unsigned __int64)v23 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && a1 == v23 )
          break;
        Blink = Blink[1].Blink;
LABEL_39:
        if ( !Blink )
        {
          v12 = v55;
          goto LABEL_41;
        }
      }
      ++LODWORD(Blink[2].Flink);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
      EngAcquireSemaphore(ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      EngAcquireSemaphore((HSEMAPHORE)Blink[4].Flink);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", Blink[4].Flink, 11LL);
      v52 = 0LL;
      v24 = 0LL;
      v25 = PDEVOBJ::bLddmDriver((PDEVOBJ *)&v54);
      v26 = (const struct _devicemodeW *)Blink[163].Blink;
      if ( v25 )
        v27 = DevmodeEqualEx(a3, v26);
      else
        v27 = memcmp(a3, v26, 0xDCuLL) == 0;
      if ( (*((_DWORD *)a1 + 40) & 0x20000000) == 0 || !gbInvalidateDualView || gbDeferredInvalidateDualView || a7 == 1 )
      {
        v28 = (int)Blink[3].Blink;
        if ( (v28 & 0x80000) == 0
          && Blink[162].Flink == v22
          && LODWORD(Blink[164].Blink) == a5
          && HIDWORD(Blink[164].Blink) == a6
          && v27
          && !a8 )
        {
          if ( v19 )
          {
            if ( (v28 & 0x400) != 0 )
            {
LABEL_27:
              EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()");
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)Blink[4].Flink);
              if ( v24 )
              {
                if ( gbDeferredInvalidateDualView )
                {
                  gbDeferredInvalidateDualView = 0;
                  gbInvalidateDualView = 1;
                  v20 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
                }
                EngAcquireSemaphore(*((HSEMAPHORE *)v24 + 8));
                EtwTraceGreLockAcquireSemaphoreExclusive(L"poDisable.hsemDevLock()", *((_QWORD *)v24 + 8), 11LL);
                if ( ((_DWORD)v24[14] & 0x400) == 0 )
                {
                  if ( (unsigned int)DrvDisableDisplay(v24, 0) )
                    *a10 = v24;
                  else
                    v20 = 1;
                }
                EtwTraceGreLockReleaseSemaphore(L"poDisable.hsemDevLock()");
                GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)v24 + 8));
              }
              EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDynamicModeChange);
              EngAcquireSemaphore(ghsemDriverMgmt);
              EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
              if ( v52 )
                PDEVOBJ::vUnreferencePdev(&v52, 0);
              Blink = Blink[1].Blink;
              PDEVOBJ::vUnreferencePdev(&v54, 0);
              goto LABEL_39;
            }
            v24 = v19;
            v52 = (struct _LIST_ENTRY *)v19;
          }
          PDEVOBJ::vReferencePdev((PDEVOBJ *)&v54);
          v19 = (HDEV)Blink;
          goto LABEL_27;
        }
        if ( a7 == 1 )
        {
          v20 = 1;
          goto LABEL_27;
        }
      }
      v24 = (HDEV)Blink;
      goto LABEL_27;
    }
LABEL_41:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
    v18 = 0;
    if ( v20 )
    {
      if ( v19 )
      {
        v56 = (struct _LIST_ENTRY *)v19;
        PDEVOBJ::vUnreferencePdev(&v56, 0);
      }
      goto LABEL_72;
    }
    if ( v19 )
    {
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      *((_QWORD *)v19 + 6) = 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
      EngAcquireSemaphore(ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      EngAcquireSemaphore(*((HSEMAPHORE *)v19 + 8));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *((_QWORD *)v19 + 8), 11LL);
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      ++*((_DWORD *)v19 + 9);
      if ( ((_DWORD)v19[14] & 0x400) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
        GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
        DrvEnableDisplay(v19);
        EngAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()");
      GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)v19 + 8));
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDynamicModeChange);
      v30 = WdLogNewEntry5_WdTrace(v29);
      *(_QWORD *)(v30 + 24) = v19;
      WdLogEvent5_WdTrace(v30);
      return (struct _LIST_ENTRY *)v19;
    }
    if ( gbDeferredInvalidateDualView )
    {
      gbDeferredInvalidateDualView = 0;
      gbInvalidateDualView = 1;
      EngAcquireSemaphore(ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      v20 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDynamicModeChange);
      if ( v20 )
        goto LABEL_68;
    }
  }
  v32 = PALLOCMEM2(0x9F8uLL, 1886221383LL, 1);
  if ( !v32 )
    goto LABEL_68;
  if ( !*(_DWORD *)v12 )
    goto LABEL_67;
  while ( a9 != 1 )
  {
    if ( a9 == 2 )
    {
      v34 = (char *)v12 + 16 * v18;
      Internal = (struct _LDEV *)ldevLoadInternal(*((_QWORD *)v34 + 2), 3LL);
      goto LABEL_58;
    }
    v33 = a9 - 3;
    if ( a9 == 4 )
      break;
LABEL_60:
    v37 = WdLogNewEntry5_WdTrace(v33);
    WdLogEvent5_WdTrace(v37);
LABEL_66:
    if ( ++v18 >= *(_DWORD *)v12 )
      goto LABEL_67;
  }
  v34 = (char *)v12 + 16 * v18;
  Internal = (struct _LDEV *)ldevLoadDriver(*((PCWSTR *)v34 + 2));
LABEL_58:
  v33 = 0LL;
  v36 = Internal;
  if ( !Internal )
  {
    v12 = v55;
    goto LABEL_60;
  }
  PDEVOBJ::PDEVOBJ(
    (PDEVOBJ *)&v54,
    Internal,
    a3,
    0LL,
    0LL,
    *((unsigned __int16 **)v34 + 2),
    *((void **)v34 + 1),
    0LL,
    0LL,
    0LL,
    0,
    a5,
    a6);
  if ( !v54 )
  {
    v39 = WdLogNewEntry5_WdTrace(v38);
    WdLogEvent5_WdTrace(v39);
    ldevUnloadImage(v36);
LABEL_65:
    v12 = v55;
    goto LABEL_66;
  }
  v54[162].Blink = (struct _LIST_ENTRY *)a1;
  if ( !(unsigned int)PDEVOBJ::bMakeSurface((PDEVOBJ *)&v54, 0LL) )
  {
    PDEVOBJ::vUnreferencePdev(&v54, 0);
    goto LABEL_65;
  }
  v41 = v54;
  v42 = (unsigned int)ghbrGrayPattern;
  v54[100].Blink = 0LL;
  v41[99].Flink = 0LL;
  LODWORD(v41[99].Blink) = 0;
  v43 = HmgShareLockCheck(v42, 16);
  HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>(v53, v43);
  v32[10] = v32 + 67;
  *((_DWORD *)v32 + 144) = 0;
  LODWORD(v51) = 1;
  *(_DWORD *)(v32[10] + 32LL) = 0xFFFFFF;
  v44 = v32[10];
  *((_DWORD *)v32 + 28) = 0;
  *(_QWORD *)(v44 + 112) = 0LL;
  EBRUSHOBJ::vInitBrush(
    (unsigned int *)&v54[98].Blink,
    (__int64)v32,
    v53[0],
    *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1,
    v54[161].Flink[7].Blink,
    v54[161].Flink,
    v51);
  HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>(v53);
  if ( !*((_QWORD *)SURFACE::pdibDefault + 6) )
    *((_QWORD *)SURFACE::pdibDefault + 6) = v54;
  v45 = a9 == 2;
  v46 = v56;
  v54[162].Blink = (struct _LIST_ENTRY *)a1;
  v54[162].Flink = v46;
  if ( !v45 )
  {
    v47 = (struct _LIST_ENTRY *)PALLOCMEM2(a3->dmSize + (unsigned int)a3->dmDriverExtra, 1986356295LL, 0);
    v54[163].Blink = v47;
    v48 = v54[163].Blink;
    if ( v48 )
    {
      memmove(v48, a3, a3->dmSize + a3->dmDriverExtra);
      LODWORD(v54[163].Blink[4].Blink) |= 0x20u;
      DrvUpdateAttachFlag(a1, 1u);
    }
    else
    {
      v20 = 1;
    }
  }
  PDEVOBJ::bDisabled((PDEVOBJ *)&v54, 0);
  if ( ((__int64)v54[3].Blink & 0x20000) == 0 )
  {
    if ( ((__int64)v54[162].Blink[10].Flink & 0x800000) != 0 )
    {
      HIDWORD(v54[3].Blink) |= 4u;
    }
    else if ( (int)IsPDEVOBJ_vProfileDriverSupported_0() >= 0 )
    {
      PDEVOBJ_vProfileDriverWrap_0();
    }
  }
  if ( v20 )
  {
    PDEVOBJ::vUnreferencePdev(&v54, 0);
LABEL_67:
    Win32FreePool();
LABEL_68:
    v17 = *a10;
    if ( *a10 && ((*((_DWORD *)a1 + 40) & 0x20000000) == 0 || !gbInvalidateDualView) )
      DrvEnableDisplay(v17);
LABEL_72:
    v40 = WdLogNewEntry5_WdTrace(v17);
    WdLogEvent5_WdTrace(v40);
    return 0LL;
  }
  else
  {
    Win32FreePool();
    v50 = WdLogNewEntry5_WdTrace(v49);
    *(_QWORD *)(v50 + 24) = v54;
    WdLogEvent5_WdTrace(v50);
    return v54;
  }
}
