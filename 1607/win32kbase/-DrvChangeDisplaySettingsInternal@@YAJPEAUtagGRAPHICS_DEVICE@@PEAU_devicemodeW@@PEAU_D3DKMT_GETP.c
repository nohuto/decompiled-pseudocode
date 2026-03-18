/*
 * XREFs of ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0065BC0
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C0062064 (DrvChangeDisplaySettings.c)
 *     ApplyPathsModality @ 0x1C0065594 (ApplyPathsModality.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C0081838 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 * Callees:
 *     GreHideSprites_0 @ 0x1C0001250 (GreHideSprites_0.c)
 *     DrvRealizeHalftonePaletteWrap_0 @ 0x1C0001740 (DrvRealizeHalftonePaletteWrap_0.c)
 *     IsDrvRealizeHalftonePaletteSupported_0 @ 0x1C0001748 (IsDrvRealizeHalftonePaletteSupported_0.c)
 *     IsGreHideSpritesSupported_0 @ 0x1C00017A0 (IsGreHideSpritesSupported_0.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C0027280 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C00319CC (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0031A08 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0031B2C (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C005F344 (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C005FDC0 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z @ 0x1C00601F0 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0064CA0 (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C0065330 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C0066E88 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C0066F10 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00671D4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0068320 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C0068408 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C00684AC (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C0068580 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0068660 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C00692C0 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     DrvDestroyMDEV @ 0x1C0069344 (DrvDestroyMDEV.c)
 *     DrvEnableMDEV @ 0x1C00693F8 (DrvEnableMDEV.c)
 *     DrvDisableMDEV @ 0x1C0069650 (DrvDisableMDEV.c)
 *     bDynamicModeChange @ 0x1C006A204 (bDynamicModeChange.c)
 *     bDynamicRemoveAllDriverRealizations @ 0x1C006B2F0 (bDynamicRemoveAllDriverRealizations.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     GreUpdateSharedDevCaps @ 0x1C007C8D8 (GreUpdateSharedDevCaps.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C007E4B8 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvEnableDirectDrawForModeChange@@YAXPEAPEAUHDEV__@@H@Z @ 0x1C0080208 (-DrvEnableDirectDrawForModeChange@@YAXPEAPEAUHDEV__@@H@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00882D0 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _DrvChangeDisplaySettingsInternal_::_2_::ETW_PROFILE_EVENT::_ETW_PROFILE_EVENT @ 0x1C00B1494 (_DrvChangeDisplaySettingsInternal_--_2_--ETW_PROFILE_EVENT--_ETW_PROFILE_EVENT.c)
 *     TemplateEventDescriptor @ 0x1C00B64B8 (TemplateEventDescriptor.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00C6660 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00C68F8 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C00C6ECC (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C00C6F48 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00C7020 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00C7118 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall DrvChangeDisplaySettingsInternal(
        __int64 a1,
        struct _devicemodeW *a2,
        struct _D3DKMT_GETPATHSMODALITY *a3,
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
  __int64 v14; // rcx
  int v15; // r15d
  struct _UNICODE_STRING *p_DestinationString; // rbx
  int v18; // r14d
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _MDEV *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  struct _devicemodeW *v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rbx
  __int64 v30; // rcx
  struct _devicemodeW *v31; // r12
  int updated; // eax
  struct _MDEV *v33; // rsi
  int v34; // eax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  struct _D3DKMT_GETPATHSMODALITY *v38; // r12
  struct _MDEV **v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  struct _MDEV *v43; // rax
  unsigned int v44; // r12d
  unsigned int v45; // r9d
  unsigned int v46; // r8d
  char *v47; // rdx
  signed __int64 v48; // r10
  __int64 v49; // rax
  __int64 v50; // rcx
  struct _MDEV *MDEV; // rax
  int v52; // r13d
  HDEV v53; // rbx
  HDEV v54; // r15
  MULTIDEVLOCKOBJ *v55; // rax
  MULTIDEVLOCKOBJ *v56; // rax
  __int64 i; // rdx
  __int64 v58; // r8
  MULTIDEVLOCKOBJ *v59; // r12
  __int64 v60; // rcx
  HSEMAPHORE v61; // rax
  int v62; // eax
  unsigned int v63; // edx
  unsigned int v64; // r12d
  HDEV v65; // rcx
  HDEV CloneHDEV; // rax
  unsigned int v67; // r12d
  HSEMAPHORE v68; // r12
  int v69; // edx
  __int64 v70; // rcx
  int v71; // r8d
  HDEV v72; // rax
  int v73; // eax
  HDEV v74; // rdx
  int v75; // eax
  int v76; // eax
  unsigned int v77; // edx
  unsigned int v78; // r9d
  HDEV v79; // r8
  __int64 v80; // r12
  __int64 v81; // rdx
  void *v82; // r9
  HDEV v83; // rax
  struct _ERESOURCE *v84; // r12
  int v85; // edx
  __int64 v86; // rcx
  int v87; // r8d
  HDEV v88; // rdx
  int v89; // eax
  __int64 v90; // rcx
  int v91; // eax
  __int64 v92; // rax
  signed __int32 v93; // ett
  signed __int32 v94; // ett
  struct _ERESOURCE *v95; // rbx
  __int64 v96; // rbx
  HDEV v97; // rax
  struct _ERESOURCE *v98; // rbx
  __int64 v99; // rax
  __int64 v100; // rcx
  wchar_t *j; // rax
  __int64 k; // r9
  __int64 v103; // rax
  int v104; // ecx
  int v105; // r10d
  unsigned int m; // ebx
  HDEV v107; // rcx
  __int64 v108; // r9
  unsigned int v109; // r8d
  unsigned int n; // edx
  __int64 v111; // rax
  unsigned int v112; // edx
  __int64 v113; // rax
  __int64 v114; // rax
  struct _devicemodeW *v116; // [rsp+40h] [rbp-C0h]
  int v117[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v118; // [rsp+68h] [rbp-98h] BYREF
  struct _MDEV **v119; // [rsp+70h] [rbp-90h]
  struct _devicemodeW *v120; // [rsp+78h] [rbp-88h] BYREF
  int v121[2]; // [rsp+80h] [rbp-80h] BYREF
  MULTIDEVLOCKOBJ *v122; // [rsp+88h] [rbp-78h]
  void *v123; // [rsp+90h] [rbp-70h]
  int v124; // [rsp+98h] [rbp-68h] BYREF
  MULTIDEVLOCKOBJ *v125; // [rsp+A0h] [rbp-60h]
  HSEMAPHORE hsem; // [rsp+A8h] [rbp-58h]
  HDEV *v127; // [rsp+B0h] [rbp-50h]
  __int64 v128; // [rsp+B8h] [rbp-48h] BYREF
  struct _ERESOURCE *v129; // [rsp+C0h] [rbp-40h]
  HDEV v130; // [rsp+C8h] [rbp-38h] BYREF
  HDEV v131; // [rsp+D0h] [rbp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-28h] BYREF
  int v133; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v134; // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v135)(unsigned int, unsigned int, struct tagDRVENABLEDATA *); // [rsp+F8h] [rbp-8h]
  HDEV v136[7]; // [rsp+100h] [rbp+0h] BYREF

  v14 = 0LL;
  v15 = a10;
  v119 = a8;
  p_DestinationString = 0LL;
  v18 = 0;
  v117[0] = a12;
  v123 = a4;
  v121[0] = a9 != 0;
  v118 = a3;
  v120 = 0LL;
  v124 = 0;
  v122 = 0LL;
  v125 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    TemplateEventDescriptor(0LL, &DrvChangeDisplaySettingsStart, 0LL);
  v19 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, a2);
  v19[3] = a1;
  v19[4] = a6;
  v19[5] = a5;
  v19[6] = a9;
  v19[7] = a10;
  WdLogEvent5_WdEvent(v19);
  v23 = 0LL;
  if ( a2 )
  {
    if ( !a1 )
    {
      v24 = WdLogNewEntry5_WdAssertion(0LL, v20, v21, v22);
      WdLogEvent5_WdAssertion(v24);
      v23 = 0LL;
    }
    if ( v118 )
    {
      v25 = WdLogNewEntry5_WdAssertion(0LL, v20, v21, v22);
      WdLogEvent5_WdAssertion(v25);
      v23 = 0LL;
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
    v23 = 0LL;
    p_DestinationString = &DestinationString;
    v127 = (HDEV *)&DestinationString;
    if ( a2 )
    {
      if ( (int)DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)a1,
                  &v120,
                  &v124,
                  0LL,
                  a2,
                  0,
                  v121[0],
                  a10,
                  0,
                  v117[0],
                  0LL) < 0 )
      {
        v27 = v120;
        if ( v120 )
          Win32FreePool();
        v28 = WdLogNewEntry5_WdTrace(v27);
        WdLogEvent5_WdTrace(v28);
        DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL, 0LL);
        v18 = -2;
        goto LABEL_227;
      }
      if ( !a2->dmFields )
        v15 = 1;
      v29 = (_QWORD *)WdLogNewEntry5_WdEvent(v26, 0LL);
      v29[3] = PsGetCurrentProcess(v30);
      v29[4] = a2->dmPelsWidth;
      v29[5] = a2->dmPelsHeight;
      v29[6] = a2->dmBitsPerPel;
      v29[7] = a2->dmDisplayOrientation;
      WdLogEvent5_WdEvent(v29);
      p_DestinationString = (struct _UNICODE_STRING *)v127;
      v23 = 0LL;
    }
    else
    {
      v15 = 1;
    }
  }
  if ( a5 && a1 && a2 )
  {
    v31 = v120;
    if ( gProtocolType != -1 )
    {
      updated = DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)a1, v120, v124, 1, 0);
      v23 = 0LL;
      if ( updated < 0 )
      {
        v18 = -2;
        if ( updated == -1073741582 )
          v18 = -5;
        v23 = 0LL;
      }
    }
  }
  else
  {
    v31 = v120;
  }
  if ( !a6 || v18 )
    goto LABEL_216;
  DrvAcquireChangeDisplaySettingLocks();
  v18 = -1;
  v33 = 0LL;
  if ( !a7 )
  {
    CheckAndNotifyDualView(p_DestinationString, 0LL);
    gbInvalidateDualView = 1;
    MDEV = DrvCreateMDEV(p_DestinationString, v31, v123, a11 != 0 ? 4 : 0, 0LL, a9, v15, v117[0], v116, v118);
    v44 = 0;
    v33 = MDEV;
    if ( MDEV )
      v18 = 0;
LABEL_63:
    v52 = 0;
    v121[0] = 0;
    v53 = 0LL;
    LODWORD(v118) = 0;
    v54 = 0LL;
    *v119 = v33;
    if ( v18 )
    {
      if ( v18 == 2 )
      {
        *(_QWORD *)v33 = *(_QWORD *)a7;
        *((_QWORD *)v33 + 1) = *((_QWORD *)a7 + 1);
        if ( *((_DWORD *)v33 + 5) > 1u )
        {
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
          v113 = *(_QWORD *)v33;
          ++*(_DWORD *)(v113 + 36);
          ++*(_DWORD *)(v113 + 32);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
        }
      }
      goto LABEL_193;
    }
    v127 = 0LL;
    v129 = 0LL;
    hsem = 0LL;
    v123 = 0LL;
    v55 = (MULTIDEVLOCKOBJ *)Win32AllocPool();
    v122 = v55;
    if ( v55 )
    {
      *(_QWORD *)v55 = 1LL;
      *((_QWORD *)v55 + 1) = 0LL;
      *((_QWORD *)v55 + 2) = 0LL;
    }
    else
    {
      v55 = 0LL;
      v122 = 0LL;
    }
    if ( !v55 )
    {
LABEL_216:
      v39 = v119;
      goto LABEL_217;
    }
    v56 = (MULTIDEVLOCKOBJ *)Win32AllocPool();
    v125 = v56;
    if ( v56 )
    {
      *(_QWORD *)v56 = 1LL;
      *((_QWORD *)v56 + 1) = 0LL;
      *((_QWORD *)v56 + 2) = 0LL;
    }
    else
    {
      v56 = 0LL;
      v125 = 0LL;
    }
    if ( !v56 )
    {
LABEL_208:
      if ( v122 )
        MULTIDEVLOCKOBJ::`scalar deleting destructor'(v122, i);
      goto LABEL_216;
    }
    if ( *((_DWORD *)v33 + 5) )
    {
      do
        DrvUpdatePDevForWDDMDevice(*((_QWORD *)v33 + 4 * ++v44));
      while ( v44 < *((_DWORD *)v33 + 5) );
      v54 = 0LL;
    }
    if ( !a7 )
      goto LABEL_134;
    v127 = DrvDisableDirectDrawForModeChange(a7, v33, v136);
    if ( !v127 )
    {
LABEL_137:
      v52 = 1;
      goto LABEL_147;
    }
    v59 = v125;
    MULTIDEVLOCKOBJ::vInit(v125, a7);
    MULTIDEVLOCKOBJ::vInit(v122, v33);
    v60 = 1LL;
    if ( (*(_DWORD *)v122 & 1) == 0 || (*(_DWORD *)v59 & 1) == 0 )
    {
      v52 = 1;
      goto LABEL_106;
    }
    v61 = *(HSEMAPHORE *)(*(_QWORD *)a7 + 72LL);
    hsem = *(HSEMAPHORE *)(*(_QWORD *)a7 + 64LL);
    v123 = v61;
    EngAcquireSemaphore(v61);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemOrgMdevPointer", v123, 4LL);
    EngAcquireSemaphore(ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
    EngAcquireSemaphore(ghsemHT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemHT", ghsemHT, 6LL);
    EngAcquireSemaphore(hsem);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemOrgMdevDevLock", hsem, 11LL);
    MULTIDEVLOCKOBJ::vLock(v59);
    MULTIDEVLOCKOBJ::vLock(v122);
    v62 = IsGreHideSpritesSupported_0();
    v58 = 0LL;
    if ( v62 >= 0 )
    {
      GreHideSprites_0();
      v58 = 0LL;
    }
    v60 = *((unsigned int *)v33 + 5);
    if ( (_DWORD)v60 == 1 )
    {
      v63 = *((_DWORD *)a7 + 5);
      if ( v63 == 1 )
        goto LABEL_101;
      v64 = 0;
      if ( !v63 )
        goto LABEL_101;
      v65 = (HDEV)*((_QWORD *)v33 + 4);
      while ( *((HDEV *)a7 + 4 * v64 + 4) != v65 )
      {
        if ( ++v64 >= v63 )
          goto LABEL_101;
      }
      CloneHDEV = DrvCreateCloneHDEV(v65, v63);
      v53 = CloneHDEV;
      if ( CloneHDEV )
      {
        i = 32LL * v64;
        *(_QWORD *)((char *)a7 + i + 32) = CloneHDEV;
        v60 = *((_QWORD *)v33 + 4);
        *(_QWORD *)((char *)a7 + i + 40) = v60;
        v54 = (HDEV)*((_QWORD *)v33 + 4);
      }
      else
      {
        v52 = 1;
      }
    }
    else
    {
      if ( *((_DWORD *)a7 + 5) != 1 )
        goto LABEL_101;
      v67 = 0;
      if ( (_DWORD)v60 )
      {
        i = *((_QWORD *)a7 + 4);
        while ( *((_QWORD *)v33 + 4 * v67 + 4) != i )
        {
          if ( ++v67 >= (unsigned int)v60 )
            goto LABEL_97;
        }
        v72 = DrvCreateCloneHDEV(*((HDEV *)a7 + 4), i);
        v53 = v72;
        if ( !v72 )
        {
          v52 = 1;
          goto LABEL_147;
        }
        v60 = 32LL * v67;
        LODWORD(v118) = 1;
        *(_QWORD *)((char *)v33 + v60 + 32) = v72;
        *(_QWORD *)((char *)v33 + v60 + 40) = *((_QWORD *)a7 + 4);
        v54 = (HDEV)*((_QWORD *)a7 + 4);
      }
LABEL_97:
      v121[0] = 1;
    }
    if ( v53 )
    {
      v129 = (struct _ERESOURCE *)*((_QWORD *)v53 + 8);
      v68 = (HSEMAPHORE)v129;
      EngAcquireSemaphore((HSEMAPHORE)v129);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemCloneHdevDevLock", v68, 11LL);
    }
    if ( v52 )
    {
LABEL_106:
      if ( v54 )
      {
        v130 = v54;
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v130) )
        {
          v60 = (unsigned int)-((unsigned int)bDynamicRemoveAllDriverRealizations(v54) != 0);
          v52 &= v60;
        }
      }
      if ( v52 )
      {
LABEL_147:
        if ( a7 )
        {
          if ( !v52 && v53 && v54 )
          {
            *(_QWORD *)v121 = v53;
            v128 = (__int64)v54;
            if ( (_DWORD)v118 )
            {
              v92 = *((_QWORD *)v54 + 322);
              *((_QWORD *)v53 + 322) = v92;
              if ( v92 )
                *(_QWORD *)(v92 + 48) = v53;
              *((_QWORD *)v53 + 228) = *((_QWORD *)v54 + 228);
              DrvTransferGdiObjects(v53, v54, v58);
              *((_QWORD *)v54 + 322) = 0LL;
              *((_QWORD *)v54 + 228) = 0LL;
              _m_prefetchw(v54 + 14);
              do
                v93 = *((_DWORD *)v54 + 14);
              while ( v93 != _InterlockedCompareExchange((volatile signed __int32 *)v54 + 14, v93 | 0x80000, v93) );
              _m_prefetchw(v53 + 14);
              do
                v94 = *((_DWORD *)v53 + 14);
              while ( v94 != _InterlockedCompareExchange((volatile signed __int32 *)v53 + 14, v94 & 0xFFF7FFFF, v94) );
              PDEVOBJ::bDisabled((PDEVOBJ *)&v128, 1);
              PDEVOBJ::CompletePDEV((PDEVOBJ *)v121, *((struct DHPDEV__ **)v53 + 228), v53);
            }
            else
            {
              *((_QWORD *)v53 + 322) = 0LL;
              PDEVOBJ::bDisabled((PDEVOBJ *)v121, 1);
            }
          }
          v118 = *(struct _D3DKMT_GETPATHSMODALITY **)a7;
          if ( (*((_DWORD *)v118 + 14) & 0x20000) != 0 )
            PDEVOBJ::bDisabled((PDEVOBJ *)&v118, 1);
          if ( (int)IsGreHideSpritesSupported_0() >= 0 )
            GreHideSprites_0();
          v95 = v129;
          if ( v129 )
          {
            EtwTraceGreLockReleaseSemaphore(L"hsemCloneHdevDevLock");
            GreReleaseSemaphoreInternal(v95);
          }
          MULTIDEVLOCKOBJ::vUnlock(v122);
          MULTIDEVLOCKOBJ::vUnlock(v125);
        }
        if ( v52 )
          goto LABEL_173;
        goto LABEL_168;
      }
      v73 = *((_DWORD *)v33 + 5);
      if ( v73 != 1 )
      {
        if ( *((_DWORD *)a7 + 5) != 1 )
        {
          v77 = 0;
          v117[0] = 0;
          if ( v73 )
          {
            do
            {
              v78 = *((_DWORD *)a7 + 5);
              v60 = 0LL;
              if ( v78 )
              {
                v128 = 32 * (v77 + 1LL);
                v79 = *(HDEV *)((char *)v33 + v128);
                while ( *((_QWORD *)v79 + 325) != *(_QWORD *)(*((_QWORD *)a7 + 4 * (unsigned int)v60 + 4) + 2600LL) )
                {
                  v60 = (unsigned int)(v60 + 1);
                  if ( (unsigned int)v60 >= v78 )
                    goto LABEL_130;
                }
                v80 = 32 * ((unsigned int)v60 + 1LL);
                v60 = *(_QWORD *)((char *)a7 + v80);
                if ( v79 != (HDEV)v60 )
                {
                  if ( (unsigned int)bDynamicModeChange((HDEV)v60, v79) == 1 )
                  {
                    v81 = v128;
                    v60 = *(_QWORD *)((char *)a7 + v80);
                    *(_QWORD *)((char *)a7 + v80) = *(_QWORD *)((char *)v33 + v128);
                    *(_QWORD *)((char *)v33 + v81) = v60;
                  }
                  else
                  {
                    v52 = 1;
                  }
                  v77 = v117[0];
                }
              }
LABEL_130:
              v117[0] = ++v77;
            }
            while ( v77 < *((_DWORD *)v33 + 5) );
          }
        }
        goto LABEL_131;
      }
      v74 = (HDEV)*((_QWORD *)v33 + 4);
      if ( *((_DWORD *)a7 + 5) == 1 )
      {
        v75 = bDynamicModeChange(*((HDEV *)a7 + 4), v74);
        v60 = 1LL;
        if ( v75 == 1 )
        {
          v60 = *((_QWORD *)a7 + 4);
          *((_QWORD *)a7 + 4) = *((_QWORD *)v33 + 4);
          *((_QWORD *)v33 + 4) = v60;
LABEL_131:
          GreReleaseHmgrSemaphore(v60);
          EtwTraceGreLockReleaseSemaphore(L"ghsemRFONTList");
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemRFONTList);
          EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT");
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPublicPFT);
          EtwTraceGreLockReleaseSemaphore(L"ghsemPalette");
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPalette);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState");
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDwmState);
          if ( v52 )
            goto LABEL_147;
          if ( *((_DWORD *)a7 + 5) == 1 )
          {
            *(_QWORD *)a7 = *((_QWORD *)a7 + 4);
            *((_QWORD *)a7 + 1) = *((_QWORD *)a7 + 5);
          }
LABEL_134:
          if ( *((_DWORD *)v33 + 5) == 1 )
          {
            *(_QWORD *)v33 = *((_QWORD *)v33 + 4);
            *((_QWORD *)v33 + 1) = *((_QWORD *)v33 + 5);
            goto LABEL_147;
          }
          v82 = (void *)*((_QWORD *)v33 + 3);
          v135 = MulEnableDriver;
          v133 = 1;
          v134 = 0LL;
          v83 = hCreateHDEV(
                  (struct tagGRAPHICS_DEVICE *)0xFFFFFFFFFFFFFFFCLL,
                  (struct _DRV_NAMES *)&v133,
                  (struct _devicemodeW *)v33,
                  v82,
                  0,
                  0,
                  1,
                  0,
                  2u,
                  &v131);
          *(_QWORD *)v33 = v83;
          if ( !v83 )
            goto LABEL_137;
          if ( !a7 )
          {
LABEL_168:
            v96 = *(_QWORD *)v33;
            if ( *((_DWORD *)v33 + 5) == 1 )
            {
              *(_QWORD *)v117 = *(_QWORD *)(v96 + 1832);
              if ( *(_QWORD *)(v96 + 40) != v96 )
                *(_QWORD *)(v96 + 40) = v96;
              *(_QWORD *)(v96 + 1792) = *(_QWORD *)(v96 + 2888);
              XEPALOBJ::apalResetColorTable((XEPALOBJ *)v117);
            }
            else
            {
              DrvSetSharedDevLock(v33);
              v97 = DrvSetSharedPalette(v33);
              if ( (*(_DWORD *)(v96 + 2196) & 0x100) == 0 && v97 && (int)IsDrvRealizeHalftonePaletteSupported_0() >= 0 )
                DrvRealizeHalftonePaletteWrap_0();
            }
LABEL_173:
            v98 = (struct _ERESOURCE *)hsem;
            if ( hsem )
            {
              EtwTraceGreLockReleaseSemaphore(L"hsemOrgMdevDevLock");
              GreReleaseSemaphoreInternal(v98);
              EtwTraceGreLockReleaseSemaphore(L"ghsemHT");
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemHT);
              EtwTraceGreLockReleaseSemaphore(L"ghsemSprite");
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemSprite);
              EtwTraceGreLockReleaseSemaphore(L"hsemOrgMdevPointer");
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)v123);
            }
            if ( v127 )
              DrvEnableDirectDrawForModeChange(v127, v127 != v136);
            if ( v52 )
            {
              v111 = WdLogNewEntry5_WdError();
              WdLogEvent5_WdError(v111);
              DrvBackoutMDEV(v33, v112);
              Win32FreePool();
              *v119 = 0LL;
              if ( a7 )
                DrvEnableMDEV(a7, 0LL, 0LL);
              ++gcFailedModeChanges;
              v18 = -1;
            }
            else
            {
              if ( a7 )
              {
                for ( i = 0LL; (unsigned int)i < *((_DWORD *)a7 + 5); *(_DWORD *)(v100 + 160) &= ~1u )
                {
                  v99 = (unsigned int)i;
                  i = (unsigned int)(i + 1);
                  v100 = *(_QWORD *)(*((_QWORD *)a7 + 4 * v99 + 4) + 2600LL);
                }
              }
              for ( j = gpGraphicsDeviceList; j; j = (wchar_t *)*((_QWORD *)j + 16) )
                *((_DWORD *)j + 40) &= ~4u;
              for ( k = 0LL; (unsigned int)k < *((_DWORD *)v33 + 5); k = (unsigned int)(k + 1) )
              {
                v58 = 32LL * (unsigned int)k;
                v103 = *(_QWORD *)((char *)v33 + v58 + 32);
                i = *(_QWORD *)(v103 + 2616);
                *(_DWORD *)(*(_QWORD *)(v103 + 2600) + 160LL) |= 1u;
                v104 = *(_DWORD *)((char *)v33 + v58 + 48);
                *(_DWORD *)(i + 76) = v104;
                v105 = *(_DWORD *)((char *)v33 + v58 + 52);
                *(_DWORD *)(i + 80) = v105;
                if ( !v104 && !v105 )
                  *(_DWORD *)(*(_QWORD *)(v103 + 2600) + 160LL) |= 4u;
              }
              GreUpdateSharedDevCaps(*(_QWORD *)v33, i, v58, k);
            }
LABEL_193:
            if ( a7 && (v18 & 0xFFFFFFFD) == 0 )
            {
              DrvEnableMDEV(v33, 0LL, 0LL);
              if ( !v18 )
              {
                for ( m = 0; m < *((_DWORD *)a7 + 5); ++m )
                {
                  v107 = (HDEV)*((_QWORD *)a7 + 4 * m + 4);
                  v108 = *((_QWORD *)v107 + 325);
                  if ( (*(_DWORD *)(v108 + 160) & 0x20000000) == 0 || !gbInvalidateDualView )
                  {
                    v109 = *((_DWORD *)v33 + 5);
                    for ( n = 0; n < v109; ++n )
                    {
                      if ( v108 == *(_QWORD *)(*((_QWORD *)v33 + 4 * n + 4) + 2600LL) )
                        break;
                    }
                    if ( n == v109 )
                      DrvDisableDisplay(v107, 1);
                  }
                }
              }
              DrvDestroyMDEV(a7);
            }
            DrvReleaseChangeDisplaySettingLocks();
            if ( v125 )
              MULTIDEVLOCKOBJ::`scalar deleting destructor'(v125, i);
            goto LABEL_208;
          }
          v84 = (struct _ERESOURCE *)*((_QWORD *)v83 + 8);
          EngAcquireSemaphore((HSEMAPHORE)v84);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemParentDevLock", v84, 11LL);
          EngAcquireSemaphore(ghsemDwmState);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
          EngAcquireSemaphore(ghsemPalette);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPalette", ghsemPalette, 13LL);
          EngAcquireSemaphore(ghsemPublicPFT);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
          EngAcquireSemaphore(ghsemRFONTList);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemRFONTList", ghsemRFONTList, 15LL);
          GreAcquireHmgrSemaphore(v86, v85, v87);
          v88 = *(HDEV *)v33;
          if ( v121[0] )
          {
            v89 = bDynamicModeChange(*((HDEV *)a7 + 4), v88);
            v90 = 1LL;
            if ( v89 == 1 )
            {
              v90 = *(_QWORD *)v33;
              *(_QWORD *)v33 = *((_QWORD *)a7 + 4);
              *(_QWORD *)a7 = v90;
              *((_QWORD *)a7 + 4) = v90;
              if ( v53 )
                v54 = (HDEV)v90;
              goto LABEL_146;
            }
          }
          else
          {
            v91 = bDynamicModeChange(*(HDEV *)a7, v88);
            v90 = 1LL;
            if ( v91 == 1 )
            {
              v90 = *(_QWORD *)a7;
              *(_QWORD *)a7 = *(_QWORD *)v33;
              *(_QWORD *)v33 = v90;
LABEL_146:
              GreReleaseHmgrSemaphore(v90);
              EtwTraceGreLockReleaseSemaphore(L"ghsemRFONTList");
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemRFONTList);
              EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT");
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPublicPFT);
              EtwTraceGreLockReleaseSemaphore(L"ghsemPalette");
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPalette);
              EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
              EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState");
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDwmState);
              EtwTraceGreLockReleaseSemaphore(L"hsemParentDevLock");
              GreReleaseSemaphoreInternal(v84);
              goto LABEL_147;
            }
          }
          v52 = 1;
          goto LABEL_146;
        }
      }
      else
      {
        v76 = bDynamicModeChange(*(HDEV *)a7, v74);
        v60 = 1LL;
        if ( v76 == 1 )
        {
          v60 = *(_QWORD *)a7;
          *(_QWORD *)a7 = *((_QWORD *)v33 + 4);
          *((_QWORD *)v33 + 4) = v60;
          if ( v53 )
            v54 = (HDEV)v60;
          goto LABEL_131;
        }
      }
      v52 = 1;
      goto LABEL_131;
    }
LABEL_101:
    EngAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    EngAcquireSemaphore(ghsemPalette);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPalette", ghsemPalette, 12LL);
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
    EngAcquireSemaphore(ghsemRFONTList);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemRFONTList", ghsemRFONTList, 15LL);
    GreAcquireHmgrSemaphore(v70, v69, v71);
    goto LABEL_106;
  }
  v34 = CheckAndNotifyDualView(p_DestinationString, a7);
  if ( !v34 )
    goto LABEL_40;
  v35 = v34 - 1;
  if ( v35 )
  {
    if ( v35 != 1 )
    {
      DrvReleaseChangeDisplaySettingLocks();
      if ( v31 )
        Win32FreePool();
      v37 = WdLogNewEntry5_WdTrace(v36);
      WdLogEvent5_WdTrace(v37);
      v18 = -6;
      goto LABEL_227;
    }
    gbDeferredOrgMdev = a7;
    gbDeferredInvalidateDualView = 1;
    v15 = 1;
LABEL_40:
    gbInvalidateDualView = 0;
    goto LABEL_41;
  }
  gbInvalidateDualView = 1;
  v15 = 1;
LABEL_41:
  v38 = v118;
  if ( (a13 & 1) == 0 || !DrvUpdateDisplayModeInMdev(a7, v118) )
  {
    if ( (unsigned int)DrvDisableMDEV(a7) )
    {
      LODWORD(v118) = gdmLogPixels;
      v43 = DrvCreateMDEV(p_DestinationString, v120, v123, a11 != 0 ? 4 : 0, a7, a9, v15, v117[0], v116, v38);
      v44 = 0;
      v33 = v43;
      if ( v43 )
      {
        v45 = *((_DWORD *)v43 + 5);
        v18 = 2;
        if ( v45 == *((_DWORD *)a7 + 5) && (_DWORD)v118 == gdmLogPixels )
        {
          v46 = 0;
          if ( v45 )
          {
            v47 = (char *)v43 + 32;
            v48 = a7 - v43;
            do
            {
              v49 = *(_QWORD *)&v47[v48];
              if ( *(_QWORD *)v47 != v49
                || *(_DWORD *)(*(_QWORD *)v47 + 2488LL) != *(_DWORD *)(v49 + 2488)
                || (v50 = 32LL * v46, *(_QWORD *)((char *)v33 + v50 + 48) != *(_QWORD *)((char *)a7 + v50 + 48))
                || *(_QWORD *)((char *)v33 + v50 + 56) != *(_QWORD *)((char *)a7 + v50 + 56) )
              {
                v18 = 0;
              }
              ++v46;
              v47 += 32;
            }
            while ( v46 < v45 );
          }
        }
        else
        {
          v18 = 0;
        }
      }
      else
      {
        DrvEnableMDEV(a7, 0LL, 0LL);
      }
    }
    else
    {
      v44 = 0;
    }
    goto LABEL_63;
  }
  v39 = v119;
  *v119 = a7;
  DrvReleaseChangeDisplaySettingLocks();
  v18 = 3;
  v42 = WdLogNewEntry5_WdEvent(v41, v40);
  WdLogEvent5_WdEvent(v42);
LABEL_217:
  if ( v120 )
    Win32FreePool();
  if ( !a6 || v18 )
  {
    if ( v18 == 2 )
    {
      v23 = *v39;
      if ( *v39 )
      {
        Win32FreePool();
        *v39 = 0LL;
      }
    }
  }
  else if ( a7 )
  {
    Win32FreePool();
  }
  v114 = WdLogNewEntry5_WdTrace(v23);
  *(_QWORD *)(v114 + 24) = v18;
  WdLogEvent5_WdTrace(v114);
  gbInvalidateDualView = 0;
  gbDeferredInvalidateDualView = 0;
  gbDeferredOrgMdev = 0LL;
LABEL_227:
  DrvChangeDisplaySettingsInternal_::_2_::ETW_PROFILE_EVENT::_ETW_PROFILE_EVENT();
  return (unsigned int)v18;
}
