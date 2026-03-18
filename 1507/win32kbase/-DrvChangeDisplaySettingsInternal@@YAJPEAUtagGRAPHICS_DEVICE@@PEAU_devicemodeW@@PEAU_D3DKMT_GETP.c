/*
 * XREFs of ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C001B64C (DrvChangeDisplaySettings.c)
 *     ApplyPathsModality @ 0x1C00610F8 (ApplyPathsModality.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C00837AC (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 * Callees:
 *     GreHideSprites_0 @ 0x1C0001250 (GreHideSprites_0.c)
 *     DrvRealizeHalftonePaletteWrap_0 @ 0x1C0001730 (DrvRealizeHalftonePaletteWrap_0.c)
 *     IsDrvRealizeHalftonePaletteSupported_0 @ 0x1C0001738 (IsDrvRealizeHalftonePaletteSupported_0.c)
 *     IsGreHideSpritesSupported_0 @ 0x1C0001790 (IsGreHideSpritesSupported_0.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     GreUpdateSharedDevCaps @ 0x1C0015B88 (GreUpdateSharedDevCaps.c)
 *     ?DrvEnableDirectDrawForModeChange@@YAXPEAPEAUHDEV__@@H@Z @ 0x1C0018CF0 (-DrvEnableDirectDrawForModeChange@@YAXPEAPEAUHDEV__@@H@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C001AC14 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C00343A8 (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00343E4 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0034504 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C003AF74 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     bDynamicModeChange @ 0x1C005C7A4 (bDynamicModeChange.c)
 *     bDynamicRemoveAllDriverRealizations @ 0x1C005D910 (bDynamicRemoveAllDriverRealizations.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z @ 0x1C005F214 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0060740 (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C0060DF8 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C0062750 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C00627D8 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0062A9C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0063C00 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C0063CE8 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0063D8C (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C0063E60 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0063F40 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C0064BB0 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     DrvDestroyMDEV @ 0x1C0064C34 (DrvDestroyMDEV.c)
 *     DrvEnableMDEV @ 0x1C0064CE8 (DrvEnableMDEV.c)
 *     DrvDisableMDEV @ 0x1C0064F40 (DrvDisableMDEV.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C00662A4 (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0066760 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C006AC90 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     _DrvChangeDisplaySettingsInternal_::_2_::ETW_PROFILE_EVENT::_ETW_PROFILE_EVENT @ 0x1C00A4094 (_DrvChangeDisplaySettingsInternal_--_2_--ETW_PROFILE_EVENT--_ETW_PROFILE_EVENT.c)
 *     TemplateEventDescriptor @ 0x1C00A87F8 (TemplateEventDescriptor.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00B8A80 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00B8D18 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C00B97D8 (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C00B9854 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00B9908 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B9A00 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
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
  HDEV v21; // r8
  struct _MDEV *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  struct _devicemodeW *v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct _devicemodeW *v35; // r12
  int updated; // eax
  struct _MDEV *v37; // rsi
  int v38; // eax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  struct _MDEV **v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  struct _MDEV *v48; // rax
  unsigned int v49; // r13d
  unsigned int v50; // r9d
  unsigned int v51; // r8d
  char *v52; // rdx
  signed __int64 v53; // r10
  __int64 v54; // rax
  __int64 v55; // rcx
  struct _MDEV *MDEV; // rax
  int v57; // r12d
  HDEV v58; // rbx
  HDEV v59; // r15
  MULTIDEVLOCKOBJ *v60; // rax
  MULTIDEVLOCKOBJ *v61; // rax
  MULTIDEVLOCKOBJ *v62; // r13
  __int64 v63; // rcx
  HSEMAPHORE v64; // rax
  int v65; // eax
  unsigned int v66; // edx
  unsigned int v67; // r13d
  HDEV v68; // rcx
  HDEV CloneHDEV; // rax
  unsigned int v70; // r13d
  int v71; // r13d
  int v72; // edx
  __int64 v73; // rcx
  int v74; // r8d
  HDEV v75; // rax
  int v76; // eax
  HDEV v77; // rdx
  int v78; // eax
  int v79; // eax
  unsigned int v80; // r9d
  __int64 v81; // r13
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r8
  __int64 v85; // r8
  __int64 v86; // r8
  __int64 v87; // r8
  void *v88; // r9
  HDEV v89; // rax
  struct _ERESOURCE *v90; // r13
  int v91; // edx
  __int64 v92; // rcx
  int v93; // r8d
  HDEV v94; // rdx
  int v95; // eax
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // rcx
  int v99; // eax
  __int64 v100; // r8
  __int64 v101; // r8
  __int64 v102; // r8
  __int64 v103; // r8
  __int64 v104; // r8
  __int64 v105; // r8
  __int64 v106; // rax
  signed __int32 v107; // ett
  signed __int32 v108; // ett
  __int64 v109; // r8
  struct _ERESOURCE *v110; // rbx
  __int64 v111; // rbx
  HDEV v112; // rax
  struct _ERESOURCE *v113; // rbx
  __int64 v114; // r8
  __int64 v115; // r8
  __int64 v116; // r8
  unsigned int i; // edx
  __int64 v118; // rax
  __int64 v119; // rcx
  wchar_t *j; // rax
  unsigned int k; // r9d
  __int64 v122; // r8
  __int64 v123; // rax
  __int64 v124; // rdx
  int v125; // ecx
  int v126; // r10d
  unsigned int m; // ebx
  HDEV v128; // rcx
  __int64 v129; // r9
  unsigned int v130; // r8d
  unsigned int n; // edx
  __int64 v132; // rax
  __int64 v133; // r8
  __int64 v134; // rax
  struct _devicemodeW *v136; // [rsp+40h] [rbp-C0h]
  int v137[2]; // [rsp+60h] [rbp-A0h] BYREF
  HSEMAPHORE hsem; // [rsp+68h] [rbp-98h]
  struct _MDEV **v139; // [rsp+70h] [rbp-90h]
  struct _devicemodeW *v140; // [rsp+78h] [rbp-88h] BYREF
  int v141[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v142; // [rsp+88h] [rbp-78h] BYREF
  MULTIDEVLOCKOBJ *v143; // [rsp+90h] [rbp-70h]
  void *v144; // [rsp+98h] [rbp-68h]
  int v145; // [rsp+A0h] [rbp-60h] BYREF
  MULTIDEVLOCKOBJ *v146; // [rsp+A8h] [rbp-58h]
  __int64 v147; // [rsp+B0h] [rbp-50h] BYREF
  struct _ERESOURCE *v148; // [rsp+B8h] [rbp-48h]
  HDEV *v149; // [rsp+C0h] [rbp-40h]
  HDEV v150; // [rsp+C8h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-30h] BYREF
  HDEV v152; // [rsp+E0h] [rbp-20h] BYREF
  int v153; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v154; // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v155)(unsigned int, unsigned int, struct tagDRVENABLEDATA *); // [rsp+F8h] [rbp-8h]
  HDEV v156[7]; // [rsp+100h] [rbp+0h] BYREF

  v14 = a9;
  v15 = 0LL;
  v16 = a10;
  v139 = a8;
  p_DestinationString = 0LL;
  v19 = 0;
  v137[0] = a12;
  v144 = a4;
  v141[0] = a9 != 0;
  hsem = a3;
  LODWORD(v142) = a9;
  v140 = 0LL;
  v145 = 0;
  v143 = 0LL;
  v146 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    TemplateEventDescriptor(0LL, &DrvChangeDisplaySettingsStart, 0LL);
  v20 = (_QWORD *)WdLogNewEntry5_WdEvent(v15, a2);
  v20[3] = a1;
  v20[4] = a6;
  v20[5] = a5;
  v20[6] = a9;
  v20[7] = a10;
  WdLogEvent5_WdEvent(v20);
  v22 = 0LL;
  if ( a2 )
  {
    if ( !a1 )
    {
      v23 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v23);
      v22 = 0LL;
    }
    if ( hsem )
    {
      v24 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v24);
      v22 = 0LL;
    }
  }
  v25 = 1LL;
  gbInvalidateDualView = 0;
  gbDeferredInvalidateDualView = 0;
  gbDeferredOrgMdev = 0LL;
  *v139 = 0LL;
  if ( a1 )
  {
    if ( a9 == -1 )
      v141[0] = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)a1);
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 64));
    v22 = 0LL;
    p_DestinationString = &DestinationString;
    if ( a2 )
    {
      v26 = DrvProbeAndCaptureDevmode(
              (struct tagGRAPHICS_DEVICE *)a1,
              &v140,
              &v145,
              0LL,
              a2,
              0,
              v141[0],
              a10,
              0,
              v137[0],
              0LL);
      v29 = 0LL;
      if ( v26 < 0 )
      {
        v30 = v140;
        if ( v140 )
          Win32FreePool();
        v31 = WdLogNewEntry5_WdTrace(v30, v29, v28);
        WdLogEvent5_WdTrace(v31);
        DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL, 0LL);
        v19 = -2;
        goto LABEL_227;
      }
      if ( !a2->dmFields )
        v16 = 1;
      v32 = (_QWORD *)WdLogNewEntry5_WdEvent(v27, 0LL);
      v32[3] = PsGetCurrentProcess(v34, v33);
      v32[4] = a2->dmPelsWidth;
      v32[5] = a2->dmPelsHeight;
      v32[6] = a2->dmBitsPerPel;
      v32[7] = a2->dmDisplayOrientation;
      WdLogEvent5_WdEvent(v32);
      v14 = v142;
      v22 = 0LL;
      v25 = 1LL;
    }
    else
    {
      v25 = 1LL;
      v16 = 1;
    }
  }
  if ( a5 && a1 && a2 )
  {
    v35 = v140;
    if ( gProtocolType != -1 )
    {
      updated = DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)a1, v140, v145, 1, 0);
      v22 = 0LL;
      if ( updated < 0 )
      {
        v19 = -2;
        if ( updated == -1073741582 )
          v19 = -5;
        v22 = 0LL;
      }
    }
  }
  else
  {
    v35 = v140;
  }
  if ( !a6 || v19 )
    goto LABEL_216;
  DrvAcquireChangeDisplaySettingLocks();
  v19 = -1;
  v37 = 0LL;
  if ( !a7 )
  {
    CheckAndNotifyDualView(p_DestinationString, 0LL);
    gbInvalidateDualView = 1;
    MDEV = DrvCreateMDEV(
             p_DestinationString,
             v35,
             v144,
             a11 != 0 ? 4 : 0,
             0LL,
             v14,
             v16,
             v137[0],
             v136,
             (struct _D3DKMT_GETPATHSMODALITY *)hsem);
    v49 = 0;
    v37 = MDEV;
    if ( MDEV )
      v19 = 0;
LABEL_63:
    v57 = 0;
    v141[0] = 0;
    v58 = 0LL;
    LODWORD(v142) = 0;
    v59 = 0LL;
    *v139 = v37;
    if ( v19 )
    {
      if ( v19 == 2 )
      {
        *(_QWORD *)v37 = *(_QWORD *)a7;
        *((_QWORD *)v37 + 1) = *((_QWORD *)a7 + 1);
        if ( *((_DWORD *)v37 + 5) > 1u )
        {
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
          v132 = *(_QWORD *)v37;
          ++*(_DWORD *)(v132 + 36);
          ++*(_DWORD *)(v132 + 32);
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v133);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
        }
      }
      goto LABEL_193;
    }
    v149 = 0LL;
    v148 = 0LL;
    hsem = 0LL;
    v144 = 0LL;
    v60 = (MULTIDEVLOCKOBJ *)Win32AllocPool();
    v143 = v60;
    if ( v60 )
    {
      *(_QWORD *)v60 = 1LL;
      *((_QWORD *)v60 + 1) = 0LL;
      *((_QWORD *)v60 + 2) = 0LL;
    }
    else
    {
      v60 = 0LL;
      v143 = 0LL;
    }
    if ( !v60 )
    {
LABEL_216:
      v44 = v139;
      goto LABEL_217;
    }
    v61 = (MULTIDEVLOCKOBJ *)Win32AllocPool();
    v146 = v61;
    if ( v61 )
    {
      *(_QWORD *)v61 = 1LL;
      *((_QWORD *)v61 + 1) = 0LL;
      *((_QWORD *)v61 + 2) = 0LL;
    }
    else
    {
      v61 = 0LL;
      v146 = 0LL;
    }
    if ( !v61 )
    {
LABEL_208:
      if ( v143 )
        MULTIDEVLOCKOBJ::`scalar deleting destructor'(v143, v25);
      goto LABEL_216;
    }
    if ( *((_DWORD *)v37 + 5) )
    {
      do
        DrvUpdatePDevForWDDMDevice(*((_QWORD *)v37 + 4 * ++v49));
      while ( v49 < *((_DWORD *)v37 + 5) );
      v59 = 0LL;
    }
    if ( !a7 )
      goto LABEL_134;
    v149 = DrvDisableDirectDrawForModeChange(a7, v37, v156);
    if ( !v149 )
    {
LABEL_137:
      v57 = 1;
      goto LABEL_147;
    }
    v62 = v146;
    MULTIDEVLOCKOBJ::vInit(v146, a7);
    MULTIDEVLOCKOBJ::vInit(v143, v37);
    v63 = 1LL;
    if ( (*(_DWORD *)v143 & 1) == 0 || (*(_DWORD *)v62 & 1) == 0 )
    {
      v57 = 1;
      goto LABEL_106;
    }
    v64 = *(HSEMAPHORE *)(*(_QWORD *)a7 + 72LL);
    hsem = *(HSEMAPHORE *)(*(_QWORD *)a7 + 64LL);
    v144 = v64;
    EngAcquireSemaphore(v64);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hsemOrgMdevPointer", (int)v144, 4);
    EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
    EngAcquireSemaphore(ghsemHT);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
    EngAcquireSemaphore(hsem);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hsemOrgMdevDevLock", (int)hsem, 11);
    MULTIDEVLOCKOBJ::vLock(v62);
    MULTIDEVLOCKOBJ::vLock(v143);
    v65 = IsGreHideSpritesSupported_0();
    v21 = 0LL;
    if ( v65 >= 0 )
    {
      GreHideSprites_0();
      v21 = 0LL;
    }
    v63 = *((unsigned int *)v37 + 5);
    if ( (_DWORD)v63 == 1 )
    {
      v66 = *((_DWORD *)a7 + 5);
      if ( v66 == 1 )
        goto LABEL_101;
      v67 = 0;
      if ( !v66 )
        goto LABEL_101;
      v68 = (HDEV)*((_QWORD *)v37 + 4);
      while ( *((HDEV *)a7 + 4 * v67 + 4) != v68 )
      {
        if ( ++v67 >= v66 )
          goto LABEL_101;
      }
      CloneHDEV = DrvCreateCloneHDEV(v68, v66);
      v58 = CloneHDEV;
      if ( CloneHDEV )
      {
        v25 = 32LL * v67;
        *(_QWORD *)((char *)a7 + v25 + 32) = CloneHDEV;
        v63 = *((_QWORD *)v37 + 4);
        *(_QWORD *)((char *)a7 + v25 + 40) = v63;
        v59 = (HDEV)*((_QWORD *)v37 + 4);
      }
      else
      {
        v57 = 1;
      }
    }
    else
    {
      if ( *((_DWORD *)a7 + 5) != 1 )
        goto LABEL_101;
      v70 = 0;
      if ( (_DWORD)v63 )
      {
        v25 = *((_QWORD *)a7 + 4);
        while ( *((_QWORD *)v37 + 4 * v70 + 4) != v25 )
        {
          if ( ++v70 >= (unsigned int)v63 )
            goto LABEL_97;
        }
        v75 = DrvCreateCloneHDEV(*((HDEV *)a7 + 4), v25);
        v58 = v75;
        if ( !v75 )
        {
          v57 = 1;
          goto LABEL_147;
        }
        v63 = 32LL * v70;
        LODWORD(v142) = 1;
        *(_QWORD *)((char *)v37 + v63 + 32) = v75;
        *(_QWORD *)((char *)v37 + v63 + 40) = *((_QWORD *)a7 + 4);
        v59 = (HDEV)*((_QWORD *)a7 + 4);
      }
LABEL_97:
      v141[0] = 1;
    }
    if ( v58 )
    {
      v148 = (struct _ERESOURCE *)*((_QWORD *)v58 + 8);
      v71 = (int)v148;
      EngAcquireSemaphore((HSEMAPHORE)v148);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hsemCloneHdevDevLock", v71, 11);
    }
    if ( v57 )
    {
LABEL_106:
      if ( v59 )
      {
        v150 = v59;
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v150) )
        {
          v63 = (unsigned int)-((unsigned int)bDynamicRemoveAllDriverRealizations((__int64)v59, v25) != 0);
          v57 &= v63;
        }
      }
      if ( v57 )
      {
LABEL_147:
        if ( a7 )
        {
          if ( !v57 && v58 && v59 )
          {
            *(_QWORD *)v141 = v58;
            v147 = (__int64)v59;
            if ( (_DWORD)v142 )
            {
              v106 = *((_QWORD *)v59 + 322);
              *((_QWORD *)v58 + 322) = v106;
              if ( v106 )
                *(_QWORD *)(v106 + 48) = v58;
              *((_QWORD *)v58 + 228) = *((_QWORD *)v59 + 228);
              DrvTransferGdiObjects(v58, v59, (unsigned int)v21);
              *((_QWORD *)v59 + 322) = 0LL;
              *((_QWORD *)v59 + 228) = 0LL;
              _m_prefetchw(v59 + 14);
              do
                v107 = *((_DWORD *)v59 + 14);
              while ( v107 != _InterlockedCompareExchange((volatile signed __int32 *)v59 + 14, v107 | 0x80000, v107) );
              _m_prefetchw(v58 + 14);
              do
                v108 = *((_DWORD *)v58 + 14);
              while ( v108 != _InterlockedCompareExchange((volatile signed __int32 *)v58 + 14, v108 & 0xFFF7FFFF, v108) );
              PDEVOBJ::bDisabled((PDEVOBJ *)&v147, 1);
              PDEVOBJ::CompletePDEV((PDEVOBJ *)v141, *((struct DHPDEV__ **)v58 + 228), v58);
            }
            else
            {
              *((_QWORD *)v58 + 322) = 0LL;
              PDEVOBJ::bDisabled((PDEVOBJ *)v141, 1);
            }
          }
          v142 = *(_QWORD *)a7;
          if ( (*(_DWORD *)(v142 + 56) & 0x20000) != 0 )
            PDEVOBJ::bDisabled((PDEVOBJ *)&v142, 1);
          if ( (int)IsGreHideSpritesSupported_0() >= 0 )
            GreHideSprites_0();
          v110 = v148;
          if ( v148 )
          {
            EtwTraceGreLockReleaseSemaphore((__int64)L"hsemCloneHdevDevLock", (__int64)v148, v109);
            GreReleaseSemaphoreInternal(v110);
          }
          MULTIDEVLOCKOBJ::vUnlock(v143);
          MULTIDEVLOCKOBJ::vUnlock(v146);
        }
        if ( v57 )
          goto LABEL_173;
        goto LABEL_168;
      }
      v76 = *((_DWORD *)v37 + 5);
      if ( v76 != 1 )
      {
        if ( *((_DWORD *)a7 + 5) != 1 )
        {
          v25 = 0LL;
          v137[0] = 0;
          if ( v76 )
          {
            do
            {
              v80 = *((_DWORD *)a7 + 5);
              v63 = 0LL;
              if ( v80 )
              {
                v147 = 32 * ((unsigned int)v25 + 1LL);
                v21 = *(HDEV *)((char *)v37 + v147);
                while ( *((_QWORD *)v21 + 325) != *(_QWORD *)(*((_QWORD *)a7 + 4 * (unsigned int)v63 + 4) + 2600LL) )
                {
                  v63 = (unsigned int)(v63 + 1);
                  if ( (unsigned int)v63 >= v80 )
                    goto LABEL_130;
                }
                v81 = 32 * ((unsigned int)v63 + 1LL);
                v63 = *(_QWORD *)((char *)a7 + v81);
                if ( v21 != (HDEV)v63 )
                {
                  if ( (unsigned int)bDynamicModeChange((HDEV)v63, v21) == 1 )
                  {
                    v82 = v147;
                    v63 = *(_QWORD *)((char *)a7 + v81);
                    *(_QWORD *)((char *)a7 + v81) = *(_QWORD *)((char *)v37 + v147);
                    *(_QWORD *)((char *)v37 + v82) = v63;
                  }
                  else
                  {
                    v57 = 1;
                  }
                  LODWORD(v25) = v137[0];
                }
              }
LABEL_130:
              v25 = (unsigned int)(v25 + 1);
              v137[0] = v25;
            }
            while ( (unsigned int)v25 < *((_DWORD *)v37 + 5) );
          }
        }
        goto LABEL_131;
      }
      v77 = (HDEV)*((_QWORD *)v37 + 4);
      if ( *((_DWORD *)a7 + 5) == 1 )
      {
        v78 = bDynamicModeChange(*((HDEV *)a7 + 4), v77);
        v63 = 1LL;
        if ( v78 == 1 )
        {
          v63 = *((_QWORD *)a7 + 4);
          *((_QWORD *)a7 + 4) = *((_QWORD *)v37 + 4);
          *((_QWORD *)v37 + 4) = v63;
LABEL_131:
          GreReleaseHmgrSemaphore(v63, v25, (__int64)v21);
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemRFONTList", (__int64)ghsemRFONTList, v83);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemRFONTList);
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPublicPFT", (__int64)ghsemPublicPFT, v84);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPublicPFT);
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPalette", (__int64)ghsemPalette, v85);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPalette);
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v86);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (__int64)ghsemDwmState, v87);
          GreReleaseSemaphoreInternal(ghsemDwmState);
          if ( v57 )
            goto LABEL_147;
          if ( *((_DWORD *)a7 + 5) == 1 )
          {
            *(_QWORD *)a7 = *((_QWORD *)a7 + 4);
            *((_QWORD *)a7 + 1) = *((_QWORD *)a7 + 5);
          }
LABEL_134:
          if ( *((_DWORD *)v37 + 5) == 1 )
          {
            *(_QWORD *)v37 = *((_QWORD *)v37 + 4);
            *((_QWORD *)v37 + 1) = *((_QWORD *)v37 + 5);
            goto LABEL_147;
          }
          v88 = (void *)*((_QWORD *)v37 + 3);
          v155 = MulEnableDriver;
          v153 = 1;
          v154 = 0LL;
          v89 = hCreateHDEV(
                  (struct tagGRAPHICS_DEVICE *)0xFFFFFFFFFFFFFFFCLL,
                  (struct _DRV_NAMES *)&v153,
                  (struct _devicemodeW *)v37,
                  v88,
                  0,
                  0,
                  1,
                  0,
                  2u,
                  &v152);
          *(_QWORD *)v37 = v89;
          if ( !v89 )
            goto LABEL_137;
          if ( !a7 )
          {
LABEL_168:
            v111 = *(_QWORD *)v37;
            if ( *((_DWORD *)v37 + 5) == 1 )
            {
              *(_QWORD *)v137 = *(_QWORD *)(v111 + 1832);
              if ( *(_QWORD *)(v111 + 40) != v111 )
                *(_QWORD *)(v111 + 40) = v111;
              *(_QWORD *)(v111 + 1792) = *(_QWORD *)(v111 + 2896);
              XEPALOBJ::apalResetColorTable((XEPALOBJ *)v137);
            }
            else
            {
              DrvSetSharedDevLock(v37);
              v112 = DrvSetSharedPalette(v37);
              if ( (*(_DWORD *)(v111 + 2196) & 0x100) == 0 && v112 && (int)IsDrvRealizeHalftonePaletteSupported_0() >= 0 )
                DrvRealizeHalftonePaletteWrap_0();
            }
LABEL_173:
            v113 = (struct _ERESOURCE *)hsem;
            if ( hsem )
            {
              EtwTraceGreLockReleaseSemaphore((__int64)L"hsemOrgMdevDevLock", (__int64)hsem, (__int64)v21);
              GreReleaseSemaphoreInternal(v113);
              EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (__int64)ghsemHT, v114);
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemHT);
              EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (__int64)ghsemSprite, v115);
              GreReleaseSemaphoreInternal(ghsemSprite);
              EtwTraceGreLockReleaseSemaphore((__int64)L"hsemOrgMdevPointer", (__int64)v144, v116);
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)v144);
            }
            if ( v149 )
              DrvEnableDirectDrawForModeChange(v149, v149 != v156);
            if ( v57 )
            {
              DrvBackoutMDEV(v37, v25);
              Win32FreePool();
              *v139 = 0LL;
              if ( a7 )
                DrvEnableMDEV(a7, 0LL, 0LL);
              ++gcFailedModeChanges;
              v19 = 1;
            }
            else
            {
              if ( a7 )
              {
                for ( i = 0; i < *((_DWORD *)a7 + 5); *(_DWORD *)(v119 + 160) &= ~1u )
                {
                  v118 = i++;
                  v119 = *(_QWORD *)(*((_QWORD *)a7 + 4 * v118 + 4) + 2600LL);
                }
              }
              for ( j = gpGraphicsDeviceList; j; j = (wchar_t *)*((_QWORD *)j + 16) )
                *((_DWORD *)j + 40) &= ~4u;
              for ( k = 0; k < *((_DWORD *)v37 + 5); ++k )
              {
                v122 = 32LL * k;
                v123 = *(_QWORD *)((char *)v37 + v122 + 32);
                v124 = *(_QWORD *)(v123 + 2616);
                *(_DWORD *)(*(_QWORD *)(v123 + 2600) + 160LL) |= 1u;
                v125 = *(_DWORD *)((char *)v37 + v122 + 48);
                *(_DWORD *)(v124 + 76) = v125;
                v126 = *(_DWORD *)((char *)v37 + v122 + 52);
                *(_DWORD *)(v124 + 80) = v126;
                if ( !v125 && !v126 )
                  *(_DWORD *)(*(_QWORD *)(v123 + 2600) + 160LL) |= 4u;
              }
              GreUpdateSharedDevCaps(*(_QWORD *)v37);
            }
LABEL_193:
            if ( a7 && (v19 & 0xFFFFFFFD) == 0 )
            {
              DrvEnableMDEV(v37, 0LL, 0LL);
              if ( !v19 )
              {
                for ( m = 0; m < *((_DWORD *)a7 + 5); ++m )
                {
                  v128 = (HDEV)*((_QWORD *)a7 + 4 * m + 4);
                  v129 = *((_QWORD *)v128 + 325);
                  if ( (*(_DWORD *)(v129 + 160) & 0x20000000) == 0 || !gbInvalidateDualView )
                  {
                    v130 = *((_DWORD *)v37 + 5);
                    for ( n = 0; n < v130; ++n )
                    {
                      if ( v129 == *(_QWORD *)(*((_QWORD *)v37 + 4 * n + 4) + 2600LL) )
                        break;
                    }
                    if ( n == v130 )
                      DrvDisableDisplay(v128, 1);
                  }
                }
              }
              DrvDestroyMDEV(a7);
            }
            DrvReleaseChangeDisplaySettingLocks();
            if ( v146 )
              MULTIDEVLOCKOBJ::`scalar deleting destructor'(v146, v25);
            goto LABEL_208;
          }
          v90 = (struct _ERESOURCE *)*((_QWORD *)v89 + 8);
          EngAcquireSemaphore((HSEMAPHORE)v90);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hsemParentDevLock", (int)v90, 11);
          EngAcquireSemaphore((HSEMAPHORE)ghsemDwmState);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
          EngAcquireSemaphore(ghsemPalette);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPalette", (int)ghsemPalette, 13);
          EngAcquireSemaphore(ghsemPublicPFT);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, 14);
          EngAcquireSemaphore(ghsemRFONTList);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemRFONTList", (int)ghsemRFONTList, 15);
          GreAcquireHmgrSemaphore(v92, v91, v93);
          v94 = *(HDEV *)v37;
          if ( v141[0] )
          {
            v95 = bDynamicModeChange(*((HDEV *)a7 + 4), v94);
            v98 = 1LL;
            if ( v95 == 1 )
            {
              v98 = *(_QWORD *)v37;
              *(_QWORD *)v37 = *((_QWORD *)a7 + 4);
              *(_QWORD *)a7 = v98;
              *((_QWORD *)a7 + 4) = v98;
              if ( v58 )
                v59 = (HDEV)v98;
              goto LABEL_146;
            }
          }
          else
          {
            v99 = bDynamicModeChange(*(HDEV *)a7, v94);
            v98 = 1LL;
            if ( v99 == 1 )
            {
              v98 = *(_QWORD *)a7;
              *(_QWORD *)a7 = *(_QWORD *)v37;
              *(_QWORD *)v37 = v98;
LABEL_146:
              GreReleaseHmgrSemaphore(v98, v96, v97);
              EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemRFONTList", (__int64)ghsemRFONTList, v100);
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemRFONTList);
              EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPublicPFT", (__int64)ghsemPublicPFT, v101);
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPublicPFT);
              EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPalette", (__int64)ghsemPalette, v102);
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPalette);
              EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v103);
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
              EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (__int64)ghsemDwmState, v104);
              GreReleaseSemaphoreInternal(ghsemDwmState);
              EtwTraceGreLockReleaseSemaphore((__int64)L"hsemParentDevLock", (__int64)v90, v105);
              GreReleaseSemaphoreInternal(v90);
              goto LABEL_147;
            }
          }
          v57 = 1;
          goto LABEL_146;
        }
      }
      else
      {
        v79 = bDynamicModeChange(*(HDEV *)a7, v77);
        v63 = 1LL;
        if ( v79 == 1 )
        {
          v63 = *(_QWORD *)a7;
          *(_QWORD *)a7 = *((_QWORD *)v37 + 4);
          *((_QWORD *)v37 + 4) = v63;
          if ( v58 )
            v59 = (HDEV)v63;
          goto LABEL_131;
        }
      }
      v57 = 1;
      goto LABEL_131;
    }
LABEL_101:
    EngAcquireSemaphore((HSEMAPHORE)ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    EngAcquireSemaphore(ghsemPalette);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPalette", (int)ghsemPalette, 12);
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, 14);
    EngAcquireSemaphore(ghsemRFONTList);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemRFONTList", (int)ghsemRFONTList, 15);
    GreAcquireHmgrSemaphore(v73, v72, v74);
    goto LABEL_106;
  }
  v38 = CheckAndNotifyDualView(p_DestinationString, a7);
  if ( !v38 )
    goto LABEL_40;
  v39 = v38 - 1;
  if ( v39 )
  {
    if ( v39 != 1 )
    {
      DrvReleaseChangeDisplaySettingLocks();
      if ( v35 )
        Win32FreePool();
      v43 = WdLogNewEntry5_WdTrace(v41, v40, v42);
      WdLogEvent5_WdTrace(v43);
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
      LODWORD(v142) = gdmLogPixels;
      v48 = DrvCreateMDEV(
              p_DestinationString,
              v140,
              v144,
              a11 != 0 ? 4 : 0,
              a7,
              v14,
              v16,
              v137[0],
              v136,
              (struct _D3DKMT_GETPATHSMODALITY *)hsem);
      v49 = 0;
      v37 = v48;
      if ( v48 )
      {
        v50 = *((_DWORD *)v48 + 5);
        v19 = 2;
        if ( v50 == *((_DWORD *)a7 + 5) && (_DWORD)v142 == gdmLogPixels )
        {
          v51 = 0;
          if ( v50 )
          {
            v52 = (char *)v48 + 32;
            v53 = a7 - v48;
            do
            {
              v54 = *(_QWORD *)&v52[v53];
              if ( *(_QWORD *)v52 != v54
                || *(_DWORD *)(*(_QWORD *)v52 + 2488LL) != *(_DWORD *)(v54 + 2488)
                || (v55 = 32LL * v51, *(_QWORD *)((char *)v37 + v55 + 48) != *(_QWORD *)((char *)a7 + v55 + 48))
                || *(_QWORD *)((char *)v37 + v55 + 56) != *(_QWORD *)((char *)a7 + v55 + 56) )
              {
                v19 = 0;
              }
              ++v51;
              v52 += 32;
            }
            while ( v51 < v50 );
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
      v49 = 0;
    }
    goto LABEL_63;
  }
  v44 = v139;
  *v139 = a7;
  DrvReleaseChangeDisplaySettingLocks();
  v19 = 3;
  v47 = WdLogNewEntry5_WdEvent(v46, v45);
  WdLogEvent5_WdEvent(v47);
LABEL_217:
  if ( v140 )
    Win32FreePool();
  if ( !a6 || v19 )
  {
    if ( v19 == 2 )
    {
      v22 = *v44;
      if ( *v44 )
      {
        Win32FreePool();
        *v44 = 0LL;
      }
    }
  }
  else if ( a7 )
  {
    Win32FreePool();
  }
  v134 = WdLogNewEntry5_WdTrace(v22, v25, v21);
  *(_QWORD *)(v134 + 24) = v19;
  WdLogEvent5_WdTrace(v134);
  gbInvalidateDualView = 0;
  gbDeferredInvalidateDualView = 0;
  gbDeferredOrgMdev = 0LL;
LABEL_227:
  DrvChangeDisplaySettingsInternal_::_2_::ETW_PROFILE_EVENT::_ETW_PROFILE_EVENT();
  return (unsigned int)v19;
}
