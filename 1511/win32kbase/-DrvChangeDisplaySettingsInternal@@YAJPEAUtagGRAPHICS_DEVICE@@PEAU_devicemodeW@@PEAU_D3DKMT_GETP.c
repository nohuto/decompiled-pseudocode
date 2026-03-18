/*
 * XREFs of ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0054368
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C0050464 (DrvChangeDisplaySettings.c)
 *     sub_1C0053ED0 @ 0x1C0053ED0 (sub_1C0053ED0.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C007DDE8 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 * Callees:
 *     GreHideSprites_0 @ 0x1C0001250 (GreHideSprites_0.c)
 *     DrvRealizeHalftonePaletteWrap_0 @ 0x1C00016D0 (DrvRealizeHalftonePaletteWrap_0.c)
 *     IsDrvRealizeHalftonePaletteSupported_0 @ 0x1C00016D8 (IsDrvRealizeHalftonePaletteSupported_0.c)
 *     IsGreHideSpritesSupported_0 @ 0x1C0001730 (IsGreHideSpritesSupported_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C00237D8 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C0037DB8 (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0037DF4 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0037F14 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0053820 (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C0055628 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C00556B0 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0055974 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0056AE4 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C0056BCC (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C0056BF8 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0056C9C (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0056E20 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C0057A30 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     DrvDestroyMDEV @ 0x1C0057AB4 (DrvDestroyMDEV.c)
 *     DrvEnableMDEV @ 0x1C0057B68 (DrvEnableMDEV.c)
 *     DrvDisableMDEV @ 0x1C0057DC0 (DrvDisableMDEV.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z @ 0x1C0058474 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z.c)
 *     bDynamicModeChange @ 0x1C0059E84 (bDynamicModeChange.c)
 *     bDynamicRemoveAllDriverRealizations @ 0x1C005AFC0 (bDynamicRemoveAllDriverRealizations.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C00614C4 (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     GreUpdateSharedDevCaps @ 0x1C0061FE4 (GreUpdateSharedDevCaps.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00718F0 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0077EF0 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C007828C (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?DrvEnableDirectDrawForModeChange@@YAXPEAPEAUHDEV__@@H@Z @ 0x1C007C2B8 (-DrvEnableDirectDrawForModeChange@@YAXPEAPEAUHDEV__@@H@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C0085B60 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     sub_1C00A8C64 @ 0x1C00A8C64 (sub_1C00A8C64.c)
 *     TemplateEventDescriptor @ 0x1C00ACD18 (TemplateEventDescriptor.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00BA990 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00BAC28 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C00BB1EC (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C00BB268 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00BB31C (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00BB414 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall DrvChangeDisplaySettingsInternal(
        __int64 a1,
        struct _devicemodeW *a2,
        HSEMAPHORE a3,
        void *a4,
        int a5,
        int a6,
        struct _MDEV *a7,
        struct _MDEV **a8,
        unsigned int a9,
        int a10,
        int a11,
        int a12,
        char a13)
{
  unsigned int v14; // ebx
  __int64 v15; // rcx
  int v16; // r15d
  struct _UNICODE_STRING *p_DestinationString; // r13
  int v19; // r14d
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  struct _MDEV *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  struct _devicemodeW *v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct _devicemodeW *v33; // r12
  int updated; // eax
  struct _MDEV *v35; // rsi
  int v36; // eax
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rax
  struct _MDEV **v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  struct _MDEV *v44; // rax
  unsigned int v45; // r13d
  unsigned int v46; // r9d
  unsigned int v47; // r8d
  char *v48; // rdx
  signed __int64 v49; // r10
  __int64 v50; // rax
  __int64 v51; // rcx
  struct _MDEV *MDEV; // rax
  int v53; // r12d
  HDEV v54; // rbx
  HDEV v55; // r15
  MULTIDEVLOCKOBJ *v56; // rax
  MULTIDEVLOCKOBJ *v57; // rax
  __int64 i; // rdx
  HDEV v59; // r8
  unsigned int v60; // r9d
  MULTIDEVLOCKOBJ *v61; // r13
  __int64 v62; // rcx
  HSEMAPHORE v63; // rax
  int v64; // eax
  unsigned int v65; // edx
  unsigned int v66; // r13d
  HDEV v67; // rcx
  HDEV CloneHDEV; // rax
  unsigned int v69; // r13d
  HSEMAPHORE v70; // r13
  __int64 v71; // rdx
  __int64 v72; // rcx
  int v73; // r8d
  HDEV v74; // rax
  int v75; // eax
  HDEV v76; // rdx
  int v77; // eax
  int v78; // eax
  unsigned int v79; // r9d
  __int64 v80; // r13
  __int64 v81; // rdx
  void *v82; // r9
  HDEV v83; // rax
  struct _ERESOURCE *v84; // r13
  __int64 v85; // rdx
  __int64 v86; // rcx
  int v87; // r8d
  HDEV v88; // rdx
  int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // rcx
  int v93; // eax
  __int64 v94; // rax
  signed __int32 v95; // ett
  signed __int32 v96; // ett
  struct _ERESOURCE *v97; // rbx
  __int64 v98; // rbx
  HDEV v99; // rax
  struct _ERESOURCE *v100; // rbx
  __int64 v101; // rax
  __int64 v102; // rcx
  wchar_t *j; // rax
  __int64 k; // r9
  __int64 v105; // rax
  int v106; // ecx
  int v107; // r10d
  unsigned int m; // ebx
  HDEV v109; // rcx
  __int64 v110; // r9
  unsigned int v111; // r8d
  unsigned int n; // edx
  __int64 v113; // rax
  __int64 v114; // rax
  struct _devicemodeW *v116; // [rsp+40h] [rbp-C0h]
  int v117[2]; // [rsp+60h] [rbp-A0h] BYREF
  HSEMAPHORE hsem; // [rsp+68h] [rbp-98h]
  struct _MDEV **v119; // [rsp+70h] [rbp-90h]
  struct _devicemodeW *v120; // [rsp+78h] [rbp-88h] BYREF
  int v121[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v122; // [rsp+88h] [rbp-78h] BYREF
  MULTIDEVLOCKOBJ *v123; // [rsp+90h] [rbp-70h]
  void *v124; // [rsp+98h] [rbp-68h]
  int v125; // [rsp+A0h] [rbp-60h] BYREF
  MULTIDEVLOCKOBJ *v126; // [rsp+A8h] [rbp-58h]
  __int64 v127; // [rsp+B0h] [rbp-50h] BYREF
  struct _ERESOURCE *v128; // [rsp+B8h] [rbp-48h]
  HDEV *v129; // [rsp+C0h] [rbp-40h]
  HDEV v130; // [rsp+C8h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-30h] BYREF
  HDEV v132; // [rsp+E0h] [rbp-20h] BYREF
  int v133; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v134; // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v135)(unsigned int, unsigned int, struct tagDRVENABLEDATA *); // [rsp+F8h] [rbp-8h]
  HDEV v136[7]; // [rsp+100h] [rbp+0h] BYREF

  v14 = a9;
  v15 = 0LL;
  v16 = a10;
  v119 = a8;
  p_DestinationString = 0LL;
  v19 = 0;
  v117[0] = a12;
  v124 = a4;
  v121[0] = a9 != 0;
  hsem = a3;
  LODWORD(v122) = a9;
  v120 = 0LL;
  v125 = 0;
  v123 = 0LL;
  v126 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    TemplateEventDescriptor(0LL, &DrvChangeDisplaySettingsStart, 0LL);
  v20 = (_QWORD *)WdLogNewEntry5_WdEvent(v15, a2);
  v20[3] = a1;
  v20[4] = a6;
  v20[5] = a5;
  v20[6] = a9;
  v20[7] = a10;
  WdLogEvent5_WdEvent(v20);
  v24 = 0LL;
  if ( a2 )
  {
    if ( !a1 )
    {
      v25 = WdLogNewEntry5_WdAssertion(0LL, v21, v22, v23);
      WdLogEvent5_WdAssertion(v25);
      v24 = 0LL;
    }
    if ( hsem )
    {
      v26 = WdLogNewEntry5_WdAssertion(0LL, v21, v22, v23);
      WdLogEvent5_WdAssertion(v26);
      v24 = 0LL;
    }
  }
  gbInvalidateDualView = 0;
  gbDeferredInvalidateDualView = 0;
  gbDeferredOrgMdev = 0LL;
  *v119 = 0LL;
  if ( a1 )
  {
    if ( a9 == -1 )
      v121[0] = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)a1);
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 64));
    v24 = 0LL;
    p_DestinationString = &DestinationString;
    if ( a2 )
    {
      if ( (int)DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)a1,
                  &v120,
                  &v125,
                  0LL,
                  a2,
                  0,
                  v121[0],
                  a10,
                  0,
                  v117[0],
                  0LL) < 0 )
      {
        v28 = v120;
        if ( v120 )
          Win32FreePool();
        v29 = WdLogNewEntry5_WdTrace(v28);
        WdLogEvent5_WdTrace(v29);
        DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL, 0LL);
        v19 = -2;
        goto LABEL_227;
      }
      if ( !a2->dmFields )
        v16 = 1;
      v30 = (_QWORD *)WdLogNewEntry5_WdEvent(v27, 0LL);
      v30[3] = PsGetCurrentProcess(v32, v31);
      v30[4] = a2->dmPelsWidth;
      v30[5] = a2->dmPelsHeight;
      v30[6] = a2->dmBitsPerPel;
      v30[7] = a2->dmDisplayOrientation;
      WdLogEvent5_WdEvent(v30);
      v14 = v122;
      v24 = 0LL;
    }
    else
    {
      v16 = 1;
    }
  }
  if ( a5 && a1 && a2 )
  {
    v33 = v120;
    if ( gProtocolType != -1 )
    {
      updated = DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)a1, v120, v125, 1, 0);
      v24 = 0LL;
      if ( updated < 0 )
      {
        v19 = -2;
        if ( updated == -1073741582 )
          v19 = -5;
        v24 = 0LL;
      }
    }
  }
  else
  {
    v33 = v120;
  }
  if ( !a6 || v19 )
    goto LABEL_216;
  DrvAcquireChangeDisplaySettingLocks();
  v19 = -1;
  v35 = 0LL;
  if ( !a7 )
  {
    CheckAndNotifyDualView(p_DestinationString, 0LL);
    gbInvalidateDualView = 1;
    MDEV = DrvCreateMDEV(
             p_DestinationString,
             v33,
             v124,
             a11 != 0 ? 4 : 0,
             0LL,
             v14,
             v16,
             v117[0],
             v116,
             (struct _D3DKMT_GETPATHSMODALITY *)hsem);
    v45 = 0;
    v35 = MDEV;
    if ( MDEV )
      v19 = 0;
LABEL_63:
    v53 = 0;
    v121[0] = 0;
    v54 = 0LL;
    LODWORD(v122) = 0;
    v55 = 0LL;
    *v119 = v35;
    if ( v19 )
    {
      if ( v19 == 2 )
      {
        *(_QWORD *)v35 = *(_QWORD *)a7;
        *((_QWORD *)v35 + 1) = *((_QWORD *)a7 + 1);
        if ( *((_DWORD *)v35 + 5) > 1u )
        {
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
          v113 = *(_QWORD *)v35;
          ++*(_DWORD *)(v113 + 36);
          ++*(_DWORD *)(v113 + 32);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        }
      }
      goto LABEL_193;
    }
    v129 = 0LL;
    v128 = 0LL;
    hsem = 0LL;
    v124 = 0LL;
    v56 = (MULTIDEVLOCKOBJ *)Win32AllocPool();
    v123 = v56;
    if ( v56 )
    {
      *(_QWORD *)v56 = 1LL;
      *((_QWORD *)v56 + 1) = 0LL;
      *((_QWORD *)v56 + 2) = 0LL;
    }
    else
    {
      v56 = 0LL;
      v123 = 0LL;
    }
    if ( !v56 )
    {
LABEL_216:
      v40 = v119;
      goto LABEL_217;
    }
    v57 = (MULTIDEVLOCKOBJ *)Win32AllocPool();
    v126 = v57;
    if ( v57 )
    {
      *(_QWORD *)v57 = 1LL;
      *((_QWORD *)v57 + 1) = 0LL;
      *((_QWORD *)v57 + 2) = 0LL;
    }
    else
    {
      v57 = 0LL;
      v126 = 0LL;
    }
    if ( !v57 )
    {
LABEL_208:
      if ( v123 )
        MULTIDEVLOCKOBJ::`scalar deleting destructor'(v123, i);
      goto LABEL_216;
    }
    if ( *((_DWORD *)v35 + 5) )
    {
      do
        DrvUpdatePDevForWDDMDevice(*((_QWORD *)v35 + 4 * ++v45));
      while ( v45 < *((_DWORD *)v35 + 5) );
      v55 = 0LL;
    }
    if ( !a7 )
      goto LABEL_134;
    v129 = DrvDisableDirectDrawForModeChange(a7, v35, v136, v60);
    if ( !v129 )
    {
LABEL_137:
      v53 = 1;
      goto LABEL_147;
    }
    v61 = v126;
    MULTIDEVLOCKOBJ::vInit(v126, a7);
    MULTIDEVLOCKOBJ::vInit(v123, v35);
    v62 = 1LL;
    if ( (*(_DWORD *)v123 & 1) == 0 || (*(_DWORD *)v61 & 1) == 0 )
    {
      v53 = 1;
      goto LABEL_106;
    }
    v63 = *(HSEMAPHORE *)(*(_QWORD *)a7 + 72LL);
    hsem = *(HSEMAPHORE *)(*(_QWORD *)a7 + 64LL);
    v124 = v63;
    EngAcquireSemaphore(v63);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemOrgMdevPointer", v124, 4LL);
    EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
    EngAcquireSemaphore(ghsemHT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemHT", ghsemHT, 6LL);
    EngAcquireSemaphore(hsem);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemOrgMdevDevLock", hsem, 11LL);
    MULTIDEVLOCKOBJ::vLock(v61);
    MULTIDEVLOCKOBJ::vLock(v123);
    v64 = IsGreHideSpritesSupported_0();
    v59 = 0LL;
    if ( v64 >= 0 )
    {
      GreHideSprites_0();
      v59 = 0LL;
    }
    v62 = *((unsigned int *)v35 + 5);
    if ( (_DWORD)v62 == 1 )
    {
      v65 = *((_DWORD *)a7 + 5);
      if ( v65 == 1 )
        goto LABEL_101;
      v66 = 0;
      if ( !v65 )
        goto LABEL_101;
      v67 = (HDEV)*((_QWORD *)v35 + 4);
      while ( *((HDEV *)a7 + 4 * v66 + 4) != v67 )
      {
        if ( ++v66 >= v65 )
          goto LABEL_101;
      }
      CloneHDEV = DrvCreateCloneHDEV(v67, v65);
      v54 = CloneHDEV;
      if ( CloneHDEV )
      {
        i = 32LL * v66;
        *(_QWORD *)((char *)a7 + i + 32) = CloneHDEV;
        v62 = *((_QWORD *)v35 + 4);
        *(_QWORD *)((char *)a7 + i + 40) = v62;
        v55 = (HDEV)*((_QWORD *)v35 + 4);
      }
      else
      {
        v53 = 1;
      }
    }
    else
    {
      if ( *((_DWORD *)a7 + 5) != 1 )
        goto LABEL_101;
      v69 = 0;
      if ( (_DWORD)v62 )
      {
        i = *((_QWORD *)a7 + 4);
        while ( *((_QWORD *)v35 + 4 * v69 + 4) != i )
        {
          if ( ++v69 >= (unsigned int)v62 )
            goto LABEL_97;
        }
        v74 = DrvCreateCloneHDEV(*((HDEV *)a7 + 4), i);
        v54 = v74;
        if ( !v74 )
        {
          v53 = 1;
          goto LABEL_147;
        }
        v62 = 32LL * v69;
        LODWORD(v122) = 1;
        *(_QWORD *)((char *)v35 + v62 + 32) = v74;
        *(_QWORD *)((char *)v35 + v62 + 40) = *((_QWORD *)a7 + 4);
        v55 = (HDEV)*((_QWORD *)a7 + 4);
      }
LABEL_97:
      v121[0] = 1;
    }
    if ( v54 )
    {
      v128 = (struct _ERESOURCE *)*((_QWORD *)v54 + 8);
      v70 = (HSEMAPHORE)v128;
      EngAcquireSemaphore((HSEMAPHORE)v128);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemCloneHdevDevLock", v70, 11LL);
    }
    if ( v53 )
    {
LABEL_106:
      if ( v55 )
      {
        v130 = v55;
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v130) )
        {
          v62 = (unsigned int)-((unsigned int)bDynamicRemoveAllDriverRealizations(v55) != 0);
          v53 &= v62;
        }
      }
      if ( v53 )
      {
LABEL_147:
        if ( a7 )
        {
          if ( !v53 && v54 && v55 )
          {
            *(_QWORD *)v121 = v54;
            v127 = (__int64)v55;
            if ( (_DWORD)v122 )
            {
              v94 = *((_QWORD *)v55 + 322);
              *((_QWORD *)v54 + 322) = v94;
              if ( v94 )
                *(_QWORD *)(v94 + 48) = v54;
              *((_QWORD *)v54 + 228) = *((_QWORD *)v55 + 228);
              DrvTransferGdiObjects(v54, v55, (unsigned int)v59);
              *((_QWORD *)v55 + 322) = 0LL;
              *((_QWORD *)v55 + 228) = 0LL;
              _m_prefetchw(v55 + 14);
              do
                v95 = *((_DWORD *)v55 + 14);
              while ( v95 != _InterlockedCompareExchange((volatile signed __int32 *)v55 + 14, v95 | 0x80000, v95) );
              _m_prefetchw(v54 + 14);
              do
                v96 = *((_DWORD *)v54 + 14);
              while ( v96 != _InterlockedCompareExchange((volatile signed __int32 *)v54 + 14, v96 & 0xFFF7FFFF, v96) );
              PDEVOBJ::bDisabled((PDEVOBJ *)&v127, 1);
              PDEVOBJ::CompletePDEV((PDEVOBJ *)v121, *((struct DHPDEV__ **)v54 + 228), v54);
            }
            else
            {
              *((_QWORD *)v54 + 322) = 0LL;
              PDEVOBJ::bDisabled((PDEVOBJ *)v121, 1);
            }
          }
          v122 = *(_QWORD *)a7;
          if ( (*(_DWORD *)(v122 + 56) & 0x20000) != 0 )
            PDEVOBJ::bDisabled((PDEVOBJ *)&v122, 1);
          if ( (int)IsGreHideSpritesSupported_0() >= 0 )
            GreHideSprites_0();
          v97 = v128;
          if ( v128 )
          {
            EtwTraceGreLockReleaseSemaphore(L"hsemCloneHdevDevLock");
            GreReleaseSemaphoreInternal(v97);
          }
          MULTIDEVLOCKOBJ::vUnlock(v123);
          MULTIDEVLOCKOBJ::vUnlock(v126);
        }
        if ( v53 )
          goto LABEL_173;
        goto LABEL_168;
      }
      v75 = *((_DWORD *)v35 + 5);
      if ( v75 != 1 )
      {
        if ( *((_DWORD *)a7 + 5) != 1 )
        {
          i = 0LL;
          v117[0] = 0;
          if ( v75 )
          {
            do
            {
              v79 = *((_DWORD *)a7 + 5);
              v62 = 0LL;
              if ( v79 )
              {
                v127 = 32 * ((unsigned int)i + 1LL);
                v59 = *(HDEV *)((char *)v35 + v127);
                while ( *((_QWORD *)v59 + 325) != *(_QWORD *)(*((_QWORD *)a7 + 4 * (unsigned int)v62 + 4) + 2600LL) )
                {
                  v62 = (unsigned int)(v62 + 1);
                  if ( (unsigned int)v62 >= v79 )
                    goto LABEL_130;
                }
                v80 = 32 * ((unsigned int)v62 + 1LL);
                v62 = *(_QWORD *)((char *)a7 + v80);
                if ( v59 != (HDEV)v62 )
                {
                  if ( (unsigned int)bDynamicModeChange((HDEV)v62, v59) == 1 )
                  {
                    v81 = v127;
                    v62 = *(_QWORD *)((char *)a7 + v80);
                    *(_QWORD *)((char *)a7 + v80) = *(_QWORD *)((char *)v35 + v127);
                    *(_QWORD *)((char *)v35 + v81) = v62;
                  }
                  else
                  {
                    v53 = 1;
                  }
                  LODWORD(i) = v117[0];
                }
              }
LABEL_130:
              i = (unsigned int)(i + 1);
              v117[0] = i;
            }
            while ( (unsigned int)i < *((_DWORD *)v35 + 5) );
          }
        }
        goto LABEL_131;
      }
      v76 = (HDEV)*((_QWORD *)v35 + 4);
      if ( *((_DWORD *)a7 + 5) == 1 )
      {
        v77 = bDynamicModeChange(*((HDEV *)a7 + 4), v76);
        v62 = 1LL;
        if ( v77 == 1 )
        {
          v62 = *((_QWORD *)a7 + 4);
          *((_QWORD *)a7 + 4) = *((_QWORD *)v35 + 4);
          *((_QWORD *)v35 + 4) = v62;
LABEL_131:
          GreReleaseHmgrSemaphore(v62, i, (__int64)v59);
          EtwTraceGreLockReleaseSemaphore(L"ghsemRFONTList");
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemRFONTList);
          EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT");
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPublicPFT);
          EtwTraceGreLockReleaseSemaphore(L"ghsemPalette");
          GreReleaseSemaphoreInternal(ghsemPalette);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState");
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDwmState);
          if ( v53 )
            goto LABEL_147;
          if ( *((_DWORD *)a7 + 5) == 1 )
          {
            *(_QWORD *)a7 = *((_QWORD *)a7 + 4);
            *((_QWORD *)a7 + 1) = *((_QWORD *)a7 + 5);
          }
LABEL_134:
          if ( *((_DWORD *)v35 + 5) == 1 )
          {
            *(_QWORD *)v35 = *((_QWORD *)v35 + 4);
            *((_QWORD *)v35 + 1) = *((_QWORD *)v35 + 5);
            goto LABEL_147;
          }
          v82 = (void *)*((_QWORD *)v35 + 3);
          v135 = MulEnableDriver;
          v133 = 1;
          v134 = 0LL;
          v83 = hCreateHDEV(
                  (struct tagGRAPHICS_DEVICE *)0xFFFFFFFFFFFFFFFCLL,
                  (struct _DRV_NAMES *)&v133,
                  (struct _devicemodeW *)v35,
                  v82,
                  0,
                  0,
                  1,
                  0,
                  2u,
                  &v132);
          *(_QWORD *)v35 = v83;
          if ( !v83 )
            goto LABEL_137;
          if ( !a7 )
          {
LABEL_168:
            v98 = *(_QWORD *)v35;
            if ( *((_DWORD *)v35 + 5) == 1 )
            {
              *(_QWORD *)v117 = *(_QWORD *)(v98 + 1832);
              if ( *(_QWORD *)(v98 + 40) != v98 )
                *(_QWORD *)(v98 + 40) = v98;
              *(_QWORD *)(v98 + 1792) = *(_QWORD *)(v98 + 2896);
              XEPALOBJ::apalResetColorTable((XEPALOBJ *)v117);
            }
            else
            {
              DrvSetSharedDevLock(v35);
              v99 = DrvSetSharedPalette(v35);
              if ( (*(_DWORD *)(v98 + 2196) & 0x100) == 0 && v99 && (int)IsDrvRealizeHalftonePaletteSupported_0() >= 0 )
                DrvRealizeHalftonePaletteWrap_0();
            }
LABEL_173:
            v100 = (struct _ERESOURCE *)hsem;
            if ( hsem )
            {
              EtwTraceGreLockReleaseSemaphore(L"hsemOrgMdevDevLock");
              GreReleaseSemaphoreInternal(v100);
              EtwTraceGreLockReleaseSemaphore(L"ghsemHT");
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemHT);
              EtwTraceGreLockReleaseSemaphore(L"ghsemSprite");
              GreReleaseSemaphoreInternal(ghsemSprite);
              EtwTraceGreLockReleaseSemaphore(L"hsemOrgMdevPointer");
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)v124);
            }
            if ( v129 )
              DrvEnableDirectDrawForModeChange(v129, v129 != v136);
            if ( v53 )
            {
              DrvBackoutMDEV(v35, i);
              Win32FreePool();
              *v119 = 0LL;
              if ( a7 )
                DrvEnableMDEV(a7, 0LL, 0LL);
              ++gcFailedModeChanges;
              v19 = 1;
            }
            else
            {
              if ( a7 )
              {
                for ( i = 0LL; (unsigned int)i < *((_DWORD *)a7 + 5); *(_DWORD *)(v102 + 160) &= ~1u )
                {
                  v101 = (unsigned int)i;
                  i = (unsigned int)(i + 1);
                  v102 = *(_QWORD *)(*((_QWORD *)a7 + 4 * v101 + 4) + 2600LL);
                }
              }
              for ( j = gpGraphicsDeviceList; j; j = (wchar_t *)*((_QWORD *)j + 16) )
                *((_DWORD *)j + 40) &= ~4u;
              for ( k = 0LL; (unsigned int)k < *((_DWORD *)v35 + 5); k = (unsigned int)(k + 1) )
              {
                v59 = (HDEV)(32LL * (unsigned int)k);
                v105 = *(_QWORD *)((char *)v35 + (_QWORD)v59 + 32);
                i = *(_QWORD *)(v105 + 2616);
                *(_DWORD *)(*(_QWORD *)(v105 + 2600) + 160LL) |= 1u;
                v106 = *(_DWORD *)((char *)v35 + (_QWORD)v59 + 48);
                *(_DWORD *)(i + 76) = v106;
                v107 = *(_DWORD *)((char *)v35 + (_QWORD)v59 + 52);
                *(_DWORD *)(i + 80) = v107;
                if ( !v106 && !v107 )
                  *(_DWORD *)(*(_QWORD *)(v105 + 2600) + 160LL) |= 4u;
              }
              GreUpdateSharedDevCaps(*(_QWORD *)v35, i, v59, k);
            }
LABEL_193:
            if ( a7 && (v19 & 0xFFFFFFFD) == 0 )
            {
              DrvEnableMDEV(v35, 0LL, 0LL);
              if ( !v19 )
              {
                for ( m = 0; m < *((_DWORD *)a7 + 5); ++m )
                {
                  v109 = (HDEV)*((_QWORD *)a7 + 4 * m + 4);
                  v110 = *((_QWORD *)v109 + 325);
                  if ( (*(_DWORD *)(v110 + 160) & 0x20000000) == 0 || !gbInvalidateDualView )
                  {
                    v111 = *((_DWORD *)v35 + 5);
                    for ( n = 0; n < v111; ++n )
                    {
                      if ( v110 == *(_QWORD *)(*((_QWORD *)v35 + 4 * n + 4) + 2600LL) )
                        break;
                    }
                    if ( n == v111 )
                      DrvDisableDisplay(v109, 1);
                  }
                }
              }
              DrvDestroyMDEV(a7);
            }
            DrvReleaseChangeDisplaySettingLocks();
            if ( v126 )
              MULTIDEVLOCKOBJ::`scalar deleting destructor'(v126, i);
            goto LABEL_208;
          }
          v84 = (struct _ERESOURCE *)*((_QWORD *)v83 + 8);
          EngAcquireSemaphore((HSEMAPHORE)v84);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemParentDevLock", v84, 11LL);
          EngAcquireSemaphore(ghsemDwmState);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
          EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPalette", ghsemPalette, 13LL);
          EngAcquireSemaphore(ghsemPublicPFT);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
          EngAcquireSemaphore(ghsemRFONTList);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemRFONTList", ghsemRFONTList, 15LL);
          GreAcquireHmgrSemaphore(v86, v85, v87);
          v88 = *(HDEV *)v35;
          if ( v121[0] )
          {
            v89 = bDynamicModeChange(*((HDEV *)a7 + 4), v88);
            v92 = 1LL;
            if ( v89 == 1 )
            {
              v92 = *(_QWORD *)v35;
              *(_QWORD *)v35 = *((_QWORD *)a7 + 4);
              *(_QWORD *)a7 = v92;
              *((_QWORD *)a7 + 4) = v92;
              if ( v54 )
                v55 = (HDEV)v92;
              goto LABEL_146;
            }
          }
          else
          {
            v93 = bDynamicModeChange(*(HDEV *)a7, v88);
            v92 = 1LL;
            if ( v93 == 1 )
            {
              v92 = *(_QWORD *)a7;
              *(_QWORD *)a7 = *(_QWORD *)v35;
              *(_QWORD *)v35 = v92;
LABEL_146:
              GreReleaseHmgrSemaphore(v92, v90, v91);
              EtwTraceGreLockReleaseSemaphore(L"ghsemRFONTList");
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemRFONTList);
              EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT");
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPublicPFT);
              EtwTraceGreLockReleaseSemaphore(L"ghsemPalette");
              GreReleaseSemaphoreInternal(ghsemPalette);
              EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
              GreReleaseSemaphoreInternal(ghsemDriverMgmt);
              EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState");
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDwmState);
              EtwTraceGreLockReleaseSemaphore(L"hsemParentDevLock");
              GreReleaseSemaphoreInternal(v84);
              goto LABEL_147;
            }
          }
          v53 = 1;
          goto LABEL_146;
        }
      }
      else
      {
        v78 = bDynamicModeChange(*(HDEV *)a7, v76);
        v62 = 1LL;
        if ( v78 == 1 )
        {
          v62 = *(_QWORD *)a7;
          *(_QWORD *)a7 = *((_QWORD *)v35 + 4);
          *((_QWORD *)v35 + 4) = v62;
          if ( v54 )
            v55 = (HDEV)v62;
          goto LABEL_131;
        }
      }
      v53 = 1;
      goto LABEL_131;
    }
LABEL_101:
    EngAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPalette", ghsemPalette, 12LL);
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
    EngAcquireSemaphore(ghsemRFONTList);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemRFONTList", ghsemRFONTList, 15LL);
    GreAcquireHmgrSemaphore(v72, v71, v73);
    goto LABEL_106;
  }
  v36 = CheckAndNotifyDualView(p_DestinationString, a7);
  if ( !v36 )
    goto LABEL_40;
  v37 = v36 - 1;
  if ( v37 )
  {
    if ( v37 != 1 )
    {
      DrvReleaseChangeDisplaySettingLocks();
      if ( v33 )
        Win32FreePool();
      v39 = WdLogNewEntry5_WdTrace(v38);
      WdLogEvent5_WdTrace(v39);
      v19 = -6;
      goto LABEL_227;
    }
    gbDeferredOrgMdev = a7;
    gbDeferredInvalidateDualView = 1;
    v16 = 1;
LABEL_40:
    gbInvalidateDualView = 0;
    goto LABEL_41;
  }
  gbInvalidateDualView = 1;
  v16 = 1;
LABEL_41:
  if ( (a13 & 1) == 0 || !DrvUpdateDisplayModeInMdev(a7, (struct _D3DKMT_GETPATHSMODALITY *)hsem) )
  {
    if ( (unsigned int)DrvDisableMDEV(a7) )
    {
      LODWORD(v122) = gdmLogPixels;
      v44 = DrvCreateMDEV(
              p_DestinationString,
              v120,
              v124,
              a11 != 0 ? 4 : 0,
              a7,
              v14,
              v16,
              v117[0],
              v116,
              (struct _D3DKMT_GETPATHSMODALITY *)hsem);
      v45 = 0;
      v35 = v44;
      if ( v44 )
      {
        v46 = *((_DWORD *)v44 + 5);
        v19 = 2;
        if ( v46 == *((_DWORD *)a7 + 5) && (_DWORD)v122 == gdmLogPixels )
        {
          v47 = 0;
          if ( v46 )
          {
            v48 = (char *)v44 + 32;
            v49 = a7 - v44;
            do
            {
              v50 = *(_QWORD *)&v48[v49];
              if ( *(_QWORD *)v48 != v50
                || *(_DWORD *)(*(_QWORD *)v48 + 2488LL) != *(_DWORD *)(v50 + 2488)
                || (v51 = 32LL * v47, *(_QWORD *)((char *)v35 + v51 + 48) != *(_QWORD *)((char *)a7 + v51 + 48))
                || *(_QWORD *)((char *)v35 + v51 + 56) != *(_QWORD *)((char *)a7 + v51 + 56) )
              {
                v19 = 0;
              }
              ++v47;
              v48 += 32;
            }
            while ( v47 < v46 );
          }
        }
        else
        {
          v19 = 0;
        }
      }
      else
      {
        DrvEnableMDEV(a7, 0LL, 0LL);
      }
    }
    else
    {
      v45 = 0;
    }
    goto LABEL_63;
  }
  v40 = v119;
  *v119 = a7;
  DrvReleaseChangeDisplaySettingLocks();
  v19 = 3;
  v43 = WdLogNewEntry5_WdEvent(v42, v41);
  WdLogEvent5_WdEvent(v43);
LABEL_217:
  if ( v120 )
    Win32FreePool();
  if ( !a6 || v19 )
  {
    if ( v19 == 2 )
    {
      v24 = *v40;
      if ( *v40 )
      {
        Win32FreePool();
        *v40 = 0LL;
      }
    }
  }
  else if ( a7 )
  {
    Win32FreePool();
  }
  v114 = WdLogNewEntry5_WdTrace(v24);
  *(_QWORD *)(v114 + 24) = v19;
  WdLogEvent5_WdTrace(v114);
  gbInvalidateDualView = 0;
  gbDeferredInvalidateDualView = 0;
  gbDeferredOrgMdev = 0LL;
LABEL_227:
  sub_1C00A8C64();
  return (unsigned int)v19;
}
