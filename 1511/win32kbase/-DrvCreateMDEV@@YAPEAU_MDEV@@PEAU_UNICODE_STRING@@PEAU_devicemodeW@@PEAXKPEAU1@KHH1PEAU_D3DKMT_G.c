/*
 * XREFs of ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0055974
 * Callers:
 *     hdcOpenDCW @ 0x1C0042710 (hdcOpenDCW.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0054368 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     IsGetWin8StyleDpiSettingFromRegistrySupported_0 @ 0x1C0001708 (IsGetWin8StyleDpiSettingFromRegistrySupported_0.c)
 *     GetWin8StyleDpiSettingFromRegistry_0 @ 0x1C0001710 (GetWin8StyleDpiSettingFromRegistry_0.c)
 *     IsGetDpiSettingWithNoDefaultSupported_0 @ 0x1C0001718 (IsGetDpiSettingWithNoDefaultSupported_0.c)
 *     GetDpiSettingWithNoDefault_0 @ 0x1C0001720 (GetDpiSettingWithNoDefault_0.c)
 *     GetDpiSetting_0 @ 0x1C0002970 (GetDpiSetting_0.c)
 *     SetDpiSetting_0 @ 0x1C0002980 (SetDpiSetting_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     DrvGetDeviceFromName @ 0x1C0043830 (DrvGetDeviceFromName.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C00568A8 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0056AE4 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C0056BCC (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C0056BF8 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0056C9C (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     AlignRects @ 0x1C0056D78 (AlignRects.c)
 *     UserSetScaleFactorsFromRemoteMetric @ 0x1C0056E04 (UserSetScaleFactorsFromRemoteMetric.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0056E20 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00576F4 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00577E8 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetDisplayDriverNames @ 0x1C0057930 (DrvGetDisplayDriverNames.c)
 *     ?IsPrimaryPathInCloneGroup@@YAEPEBU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C005809C (-IsPrimaryPathInCloneGroup@@YAEPEBU_D3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z @ 0x1C0058474 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C005CE5C (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00718F0 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C007B130 (-DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C0085B60 (DrvDxgkLogCodePointPacket.c)
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C0085C28 (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0086820 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z @ 0x1C00868EC (-FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C0087564 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     memcmp @ 0x1C0088C80 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00BA990 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 */

struct _MDEV *__fastcall DrvCreateMDEV(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        void *a3,
        unsigned int a4,
        struct _MDEV *a5,
        unsigned int a6,
        int a7,
        int a8,
        struct _devicemodeW *a9,
        struct _D3DKMT_GETPATHSMODALITY *a10)
{
  UNICODE_STRING *v10; // r14
  unsigned int *v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _D3DKMT_GETPATHSMODALITY *v18; // r13
  __int64 v19; // r15
  unsigned int *v20; // rax
  size_t v21; // rcx
  struct _devicemodeW *v22; // rax
  __int64 v23; // rdx
  HDEV v24; // r10
  __int64 v25; // r8
  __int64 v26; // r11
  __int64 v27; // r9
  int v28; // eax
  unsigned int v29; // ebx
  unsigned int v30; // r12d
  bool v31; // sf
  HDEV v32; // rdi
  wchar_t *j; // r14
  int k; // eax
  int PruneFlag; // ebx
  unsigned __int16 v36; // cx
  int PrimaryAttachFlags; // eax
  __int64 v38; // rdi
  HDEV v39; // r14
  struct _MDEV *v40; // rax
  MULTIDEVLOCKOBJ *v41; // r15
  unsigned int v42; // edx
  unsigned int v43; // ecx
  HDEV v44; // rdx
  int v45; // eax
  int v46; // eax
  unsigned int v47; // ebx
  _DWORD *v48; // r12
  struct _devicemodeW *v49; // rax
  struct _devicemodeW *v50; // r13
  unsigned int v51; // r10d
  unsigned int v52; // r9d
  __int64 v53; // rdx
  __int64 v54; // rax
  _DWORD *v55; // r8
  HDEV v56; // rcx
  int v57; // eax
  unsigned int v58; // r12d
  HDEV v59; // rdi
  __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  unsigned int v66; // r12d
  __int64 v67; // rcx
  unsigned int i; // edi
  __int64 v69; // r14
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int128 v73; // xmm0
  bool v74; // sf
  __int64 v75; // rax
  int v77; // eax
  __int64 DisplayDriverNames; // rax
  __int64 v79; // rdx
  struct _DRV_NAMES *v80; // r12
  __int64 v81; // rcx
  __int64 v82; // r15
  unsigned __int16 v83; // cx
  unsigned int DriverAccelerationsLevel; // ebx
  unsigned int DriverCapableOverRide; // eax
  __int64 v86; // rax
  unsigned int v87; // eax
  HDEV *v88; // rdx
  HDEV v89; // rcx
  HDEV v90; // rax
  unsigned int *v91; // rbx
  unsigned int *v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  struct _DRV_NAMES *v95; // r13
  unsigned int v96; // edi
  unsigned int v97; // r15d
  unsigned int v98; // r12d
  struct _devicemodeW *Src; // rbx
  int v100; // eax
  struct _devicemodeW *v101; // rbx
  struct _devicemodeW *v102; // rax
  __int64 v103; // rax
  int v104; // eax
  int v105; // r8d
  int v106; // eax
  __int64 v107; // rcx
  unsigned int v108; // eax
  unsigned int v109; // r8d
  __int64 v110; // rax
  __int64 v111; // rax
  unsigned int v112; // r13d
  __int64 v113; // rbx
  unsigned int v114; // r12d
  unsigned int v115; // ecx
  unsigned int v116; // eax
  unsigned int v117; // edx
  unsigned int v118; // ecx
  unsigned int v119; // eax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  unsigned __int64 v124; // rdx
  __int64 v125; // rax
  wchar_t *DeviceFromName; // rax
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v127; // rcx
  __int64 v128; // rax
  wchar_t *v129; // rax
  __int64 v130; // rax
  unsigned int v131; // eax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rax
  __int64 v138; // rdx
  int v139; // eax
  bool v140; // zf
  __int64 v141; // rax
  struct _devicemodeW *v142; // rbx
  struct _devicemodeW *v143; // rbx
  int v144; // eax
  HDEV v145; // rax
  struct _devicemodeW *v146; // rbx
  int v147; // eax
  int v148; // eax
  __int64 dmPelsHeight; // r9
  __int64 dmPelsWidth; // r8
  __int64 v151; // rdx
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  int DpiSettingWithNoDefaultSupported_0; // eax
  _QWORD *v158; // rax
  int v159; // edx
  unsigned int v160; // edx
  unsigned int v161; // r12d
  __int64 v162; // rax
  __int64 v163; // rax
  unsigned int v164; // [rsp+30h] [rbp-D8h]
  int v165; // [rsp+38h] [rbp-D0h]
  unsigned int v166; // [rsp+68h] [rbp-A0h]
  struct _devicemodeW *v167; // [rsp+70h] [rbp-98h] BYREF
  int v168; // [rsp+78h] [rbp-90h]
  int v169; // [rsp+7Ch] [rbp-8Ch]
  unsigned int v170; // [rsp+80h] [rbp-88h]
  int v171; // [rsp+84h] [rbp-84h]
  HDEV v172; // [rsp+88h] [rbp-80h] BYREF
  struct tagSIZE v173; // [rsp+90h] [rbp-78h] BYREF
  int v174; // [rsp+98h] [rbp-70h]
  int v175; // [rsp+9Ch] [rbp-6Ch] BYREF
  struct _devicemodeW *v176; // [rsp+A0h] [rbp-68h]
  unsigned int v177; // [rsp+A8h] [rbp-60h] BYREF
  struct tagSIZE v178; // [rsp+B0h] [rbp-58h] BYREF
  int v179; // [rsp+B8h] [rbp-50h]
  unsigned int v180; // [rsp+BCh] [rbp-4Ch]
  unsigned int v181; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v182; // [rsp+C8h] [rbp-40h]
  int v183; // [rsp+D0h] [rbp-38h]
  void *Buf2; // [rsp+D8h] [rbp-30h]
  _QWORD v185[2]; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v186[104]; // [rsp+F0h] [rbp-18h] BYREF
  HDEV v188; // [rsp+168h] [rbp+60h]
  int v189; // [rsp+168h] [rbp+60h]
  unsigned int v192; // [rsp+178h] [rbp+70h]
  unsigned __int8 v193; // [rsp+180h] [rbp+78h]
  int v194; // [rsp+180h] [rbp+78h]
  bool v195; // [rsp+180h] [rbp+78h]
  struct _MDEV *v196; // [rsp+188h] [rbp+80h]
  unsigned int v197; // [rsp+190h] [rbp+88h]
  int v198; // [rsp+1A8h] [rbp+A0h]
  struct _D3DKMT_GETPATHSMODALITY *v199; // [rsp+1B0h] [rbp+A8h]

  v193 = a4;
  v19 = a4;
  v174 = a4 & 1;
  v10 = a1;
  v198 = 0;
  v168 = 0;
  v171 = 0;
  v183 = 0;
  v12 = 0LL;
  v169 = a6 != 0;
  v13 = (_QWORD *)WdLogNewEntry5_WdEvent(0LL, a2);
  v13[3] = v10;
  v13[4] = a3;
  v13[5] = v19;
  v13[6] = a5;
  WdLogEvent5_WdEvent(v13);
  v18 = a10;
  LODWORD(v19) = a10 != 0LL ? 4 : 1;
  v179 = v19;
  if ( v10 )
  {
    if ( a10 )
    {
      v125 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
      WdLogEvent5_WdAssertion(v125);
    }
    DeviceFromName = DrvGetDeviceFromName(v10, 0);
    if ( DeviceFromName && (*((_DWORD *)DeviceFromName + 40) & 0x20000000) != 0 )
    {
      v127 = WPP_MAIN_CB.DeviceQueue.1;
      if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 )
        goto LABEL_201;
      do
      {
        if ( *(wchar_t **)(*(_QWORD *)&v127 + 2600LL) == DeviceFromName )
          break;
        v127 = *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)(*(_QWORD *)&v127 + 24LL);
      }
      while ( v127 );
      if ( !*(_QWORD *)&v127 )
      {
LABEL_201:
        v128 = ((__int64 (__fastcall *)(_QWORD))WdLogNewEntry5_WdTrace)(v127);
        WdLogEvent5_WdTrace(v128);
        goto LABEL_89;
      }
    }
  }
  v20 = (unsigned int *)PALLOCMEM2(0x40uLL, 1936876615LL, 1);
  v12 = v20;
  if ( v20 )
  {
    v20[5] = 0;
    *((_QWORD *)v20 + 3) = a3;
    v22 = (struct _devicemodeW *)PALLOCMEM2(0xDCuLL, 1986356295LL, 0);
    v24 = 0LL;
    v176 = v22;
    if ( !v22 )
      goto LABEL_299;
    v25 = a5 != 0LL;
    v173 = (struct tagSIZE)v25;
LABEL_5:
    v26 = 1LL;
LABEL_6:
    v27 = 0xFFFFFFFFLL;
LABEL_7:
    v28 = v198;
    v23 = 1LL;
    v21 = 0LL;
    v19 = (int)v19;
    v29 = 0;
    v166 = 1;
    v182 = 0LL;
    v30 = 0;
    v170 = 0;
    v185[0] = (int)v19;
    v180 = 0;
    v177 = 0;
    v181 = 0;
    while ( 1 )
    {
      v31 = v28 < 0;
      if ( v28 )
      {
LABEL_289:
        if ( v31 )
          goto LABEL_290;
LABEL_34:
        LODWORD(v19) = v179;
        if ( v179 == 4 )
        {
          if ( v171 != (_DWORD)v24 )
          {
            v93 = WdLogNewEntry5_WdTrace(v21);
            WdLogEvent5_WdTrace(v93);
            v26 = 1LL;
            LODWORD(v19) = 1;
            v179 = 1;
            goto LABEL_137;
          }
          v154 = WdLogNewEntry5_WdError(v21, v23, v25, v27);
          *(_QWORD *)(v154 + 24) = -1073741823LL;
          WdLogEvent5_WdError(v154);
        }
        else
        {
          if ( v171 != (_DWORD)v24 )
          {
            if ( v168 != (_DWORD)v24 )
            {
              v198 = (int)v24;
              goto LABEL_38;
            }
            v103 = WdLogNewEntry5_WdTrace(v21);
            WdLogEvent5_WdTrace(v103);
            v26 = 1LL;
LABEL_137:
            v10 = a1;
            v24 = 0LL;
            v25 = (__int64)v173;
            v168 = 1;
            goto LABEL_6;
          }
          if ( v179 == 1 )
          {
            v152 = WdLogNewEntry5_WdTrace(v21);
            WdLogEvent5_WdTrace(v152);
            v10 = a1;
            LODWORD(v19) = 2;
            v25 = (__int64)v173;
            v24 = 0LL;
            v27 = 0xFFFFFFFFLL;
            v179 = 2;
            v26 = 1LL;
            if ( a8 )
              a8 = 0;
            goto LABEL_7;
          }
          if ( v179 == 2 && gProtocolType == (_WORD)v24 )
          {
            v153 = WdLogNewEntry5_WdTrace(v21);
            WdLogEvent5_WdTrace(v153);
            v10 = a1;
            LODWORD(v19) = 3;
            v25 = (__int64)v173;
            v24 = 0LL;
            v179 = 3;
            goto LABEL_5;
          }
          if ( v30 )
          {
            v155 = WdLogNewEntry5_WdTrace(v21);
            WdLogEvent5_WdTrace(v155);
            v28 = -1073741204;
            v24 = 0LL;
            v198 = -1073741204;
LABEL_290:
            v74 = v28 < 0;
            if ( v28 )
              goto LABEL_86;
LABEL_38:
            if ( (v193 & 2) != 0 )
              goto LABEL_87;
            v38 = (unsigned int)v24;
            v197 = (unsigned int)v24;
            v39 = v24;
            v188 = v24;
            v40 = (struct _MDEV *)Win32AllocPool();
            v196 = v40;
            v41 = v40;
            if ( v40 )
            {
              *(_QWORD *)v40 = 1LL;
              *((_QWORD *)v40 + 1) = 0LL;
              *((_QWORD *)v40 + 2) = 0LL;
            }
            else
            {
              v41 = 0LL;
              v196 = 0LL;
            }
            if ( v41 )
            {
              MULTIDEVLOCKOBJ::vInit(v41, (struct _MDEV *)v12);
              if ( (*(_DWORD *)v41 & 1) == 0 )
                goto LABEL_85;
              MULTIDEVLOCKOBJ::vLock(v41);
              v43 = 0;
              if ( v12[5] )
              {
                do
                {
                  v44 = *(HDEV *)(*(_QWORD *)&v12[8 * v43 + 8] + 2600LL);
                  v45 = *((_DWORD *)v44 + 40);
                  if ( (v45 & 0x28) != 0 )
                  {
                    if ( (v45 & 4) != 0 )
                      *((_DWORD *)v44 + 40) = v45 & 0xFFFFFFFB;
                  }
                  else if ( !v39 )
                  {
                    v38 = v43;
                  }
                  v46 = *((_DWORD *)v44 + 40);
                  if ( (v46 & 4) != 0 )
                  {
                    if ( v39 )
                    {
                      v198 = -1073741438;
                      *((_DWORD *)v44 + 40) = v46 & 0xFFFFFFFB;
                    }
                    else
                    {
                      v39 = v44;
                      v38 = v43;
                    }
                  }
                  ++v43;
                }
                while ( v43 < v12[5] );
                v197 = v38;
                v188 = v39;
              }
              v47 = 16 * v12[5];
              Buf2 = PALLOCMEM2(v47, 1936876615LL, 0);
              v48 = Buf2;
              v49 = (struct _devicemodeW *)PALLOCMEM2(v47, 1936876615LL, 0);
              v167 = v49;
              v50 = v49;
              if ( !v48 )
                goto LABEL_81;
              if ( !v49 )
                goto LABEL_80;
              v51 = 0;
              v192 = 0;
              v52 = 0;
              if ( v12[5] )
              {
                do
                {
                  v53 = 2LL * v52;
                  v54 = *(_QWORD *)&v12[8 * v52 + 8];
                  v55 = *(_DWORD **)(v54 + 2616);
                  v48[2 * v53] = v55[19];
                  v48[2 * v53 + 1] = v55[20];
                  v48[2 * v53 + 2] = v55[19] + v55[43];
                  v48[2 * v53 + 3] = v55[20] + v55[44];
                  v56 = *(HDEV *)(v54 + 2600);
                  v57 = *((_DWORD *)v56 + 40);
                  if ( (v57 & 8) == 0 )
                  {
                    if ( !v39 && !v55[19] && !v55[20] && (v57 & 0x20) == 0 )
                    {
                      v38 = v52;
                      v39 = v56;
                    }
                    ++v51;
                  }
                  ++v52;
                }
                while ( v52 < v12[5] );
                v41 = v196;
                v192 = v51;
                v197 = v38;
                v188 = v39;
              }
              memmove(v50, v48, v47);
              if ( !gDrvDpiAdjusted )
              {
                gDrvDpiWin8Style = 0;
                if ( ((gProtocolType + 1) & 0xFFFE) == 0 && (int)IsGetWin8StyleDpiSettingFromRegistrySupported_0() >= 0 )
                {
                  GetWin8StyleDpiSettingFromRegistry_0();
                  if ( gDrvDpiWin8Style )
                  {
                    DpiSettingWithNoDefaultSupported_0 = IsGetDpiSettingWithNoDefaultSupported_0();
                    if ( DpiSettingWithNoDefaultSupported_0 >= 0 )
                      GetDpiSettingWithNoDefault_0();
                    gdmLogPixels = 96;
                  }
                }
              }
              v58 = 0;
              v59 = *(HDEV *)&v12[8 * v38 + 8];
              v172 = v59;
              *(_DWORD *)(*((_QWORD *)v59 + 325) + 160LL) |= 4u;
              if ( v12[5] )
              {
                do
                {
                  v60 = *(_QWORD *)&v12[8 * v58 + 8];
                  if ( (*(_DWORD *)(*(_QWORD *)(v60 + 2600) + 160LL) & 0x800000) != 0 )
                  {
                    *(_DWORD *)(v60 + 2572) ^= (*(_DWORD *)(v60 + 2572) ^ (32 * (v58 == v197))) & 0x20;
                    v194 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, __int64))qword_1C01043B0)(
                             *(_QWORD *)(*(_QWORD *)(v60 + 2600) + 256LL),
                             *(unsigned int *)(*(_QWORD *)(v60 + 2600) + 272LL),
                             0xFFFFFFFFLL,
                             v60 + 2160,
                             v60 + 2480);
                    if ( v194 < 0 )
                    {
                      v158 = (_QWORD *)WdLogNewEntry5_WdError(v62, v61, v63, v64);
                      v158[3] = v194;
                      v158[4] = *(_QWORD *)(*(_QWORD *)(v60 + 2600) + 256LL);
                      v158[5] = *(unsigned int *)(*(_QWORD *)(v60 + 2600) + 272LL);
                      WdLogEvent5_WdError(v158);
                    }
                  }
                  ++v58;
                }
                while ( v58 < v12[5] );
                v59 = v172;
                v41 = v196;
                v39 = v188;
                v50 = v167;
              }
              v65 = 1374389535LL;
              v66 = 1;
              if ( gDrvDpiAdjusted )
              {
LABEL_70:
                if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
                {
                  v189 = 1;
                  if ( v12[5] )
                  {
                    v112 = 0;
                    do
                    {
                      v113 = *(_QWORD *)&v12[8 * v112 + 8];
                      v114 = *(_DWORD *)(v113 + 3552);
                      v195 = ((*(_DWORD *)(*(_QWORD *)(v113 + 2616) + 84LL) - 1) & 0xFFFFFFFD) == 0;
                      v115 = *(_DWORD *)(v113 + 2172) / 0x3E8u;
                      v116 = *(_DWORD *)(v113 + 2168) / 0x3E8u;
                      if ( ((*(_DWORD *)(*(_QWORD *)(v113 + 2616) + 84LL) - 1) & 0xFFFFFFFD) == 0 )
                      {
                        v116 = *(_DWORD *)(v113 + 2172) / 0x3E8u;
                        v115 = *(_DWORD *)(v113 + 2168) / 0x3E8u;
                      }
                      v117 = *(_DWORD *)(v113 + 2180);
                      v199 = (struct _D3DKMT_GETPATHSMODALITY *)__PAIR64__(v115, v116);
                      v118 = *(_DWORD *)(v113 + 2176);
                      v173 = (struct tagSIZE)v199;
                      v119 = v118;
                      if ( v195 )
                      {
                        v119 = v117;
                        v117 = v118;
                      }
                      v182 = __PAIR64__(v117, v119);
                      v178 = (struct tagSIZE)__PAIR64__(v117, v119);
                      if ( v114 )
                      {
                        FillPhysicalDpiOnly(&v173, &v178, (struct _DPI_INFORMATION *)(v113 + 2480));
                        v161 = HIWORD(v114);
                        *(_DWORD *)(v113 + 2572) |= 0x200u;
                        *(_DWORD *)(v113 + 2488) = v161;
                        *(_DWORD *)(v113 + 2492) = v161;
                        *(_DWORD *)(v113 + 2540) = v161;
                        *(_DWORD *)(v113 + 2536) = v161;
                        v66 = v189;
                      }
                      else
                      {
                        *(_DWORD *)(v113 + 2572) &= ~0x200u;
                        v189 = 0;
                        v66 = 0;
                        memset(v186, 0, 0x20uLL);
                        v185[0] = 0x2000000001LL;
                        v185[1] = v186;
                        if ( (int)DxgkEngQueryWin32Info((struct _DXGK_QUERY_WIN32_INFO *)v185) < 0 )
                        {
                          v162 = WdLogNewEntry5_WdAssertion(v121, v120, v122, v123);
                          WdLogEvent5_WdAssertion(v162);
                        }
                        FillDpiInfo(
                          &v173,
                          &v178,
                          (const struct _DPI_SCALE_FACTOR_COLLECTION *)v186,
                          v123,
                          gdmLogPixels,
                          v164,
                          v165,
                          (struct _DPI_INFORMATION *)(v113 + 2480));
                      }
                      GetRemoteScaleOverrideTestHook(
                        (const unsigned __int16 *)(*(_QWORD *)(v113 + 2600) + 64LL),
                        v124,
                        (struct _DPI_INFORMATION *)(v113 + 2480));
                      ++v112;
                      *(_DWORD *)(v113 + 2572) ^= (*(_DWORD *)(v113 + 2572) ^ (v195 << 7)) & 0x80;
                    }
                    while ( v112 < v12[5] );
                    v59 = v172;
                    v41 = v196;
                    v50 = v167;
                  }
                  UserSetScaleFactorsFromRemoteMetric(v66, v65);
                  v183 = 1;
                }
                else
                {
                  *((_DWORD *)gpsi + 555) &= ~0x40u;
                }
                gdmLogPixelsOfPrimary = (96 * *((_DWORD *)v59 + 623) + 50) / 0x64u;
                AlignRects(v50, v192, v197);
                if ( memcmp(v50, Buf2, 16LL * v192) )
                {
                  v163 = WdLogNewEntry5_WdWarning(v67, 0LL);
                  WdLogEvent5_WdWarning(v163);
                }
                for ( i = 0; i < v12[5]; *(_OWORD *)&v12[v69 + 12] = v73 )
                {
                  v69 = 8LL * i;
                  v70 = *(_QWORD *)&v12[v69 + 8];
                  *(_QWORD *)(v70 + 2608) = *(_QWORD *)&v50->dmDeviceName[8 * i];
                  if ( *(_QWORD *)(v70 + 3416) )
                  {
                    v71 = *(_QWORD *)(v70 + 2576);
                    if ( v71 )
                      v72 = v71 + 24;
                    else
                      v72 = 0LL;
                    (*(void (__fastcall **)(__int64, __int64))(v70 + 3416))(v72, 2LL);
                  }
                  v73 = *(_OWORD *)&v50->dmDeviceName[8 * i++];
                }
LABEL_80:
                Win32FreePool();
LABEL_81:
                if ( v50 )
                  Win32FreePool();
                MULTIDEVLOCKOBJ::vUnlock(v41);
                if ( v183 )
                  ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &gSessionId, 0, 0);
LABEL_85:
                MULTIDEVLOCKOBJ::`scalar deleting destructor'(v41, v42);
                v74 = v198 < 0;
LABEL_86:
                if ( v74 )
                  goto LABEL_299;
LABEL_87:
                if ( v176 )
                  Win32FreePool();
                break;
              }
              gDrvDpiWin8Style = 0;
              if ( ((gProtocolType + 1) & 0xFFFE) != 0 )
              {
                v108 = *((_DWORD *)v59 + 888);
                if ( v108 )
                {
                  v65 = (96 * HIWORD(v108) + 50) / 0x64u;
                }
                else
                {
                  if ( wcsncmp(*((const wchar_t **)v39 + 26), L"WORKERDD", *((unsigned int *)v39 + 70))
                    && wcsncmp(*((const wchar_t **)v39 + 26), L"TSDDD", *((unsigned int *)v39 + 70)) )
                  {
                    gDrvDpiWin8Style = 1;
                  }
                  GetDpiSetting_0();
                  v65 = 96LL;
                }
                gdmLogPixels = v65;
                v109 = 0;
                if ( v12[5] )
                {
                  while ( 1 )
                  {
                    v110 = v109++;
                    v111 = *(_QWORD *)&v12[8 * v110 + 8];
                    *(_DWORD *)(v111 + 2204) = (unsigned __int16)v65;
                    *(_DWORD *)(v111 + 2200) = (unsigned __int16)v65;
                    *(_WORD *)(*(_QWORD *)(v111 + 2616) + 166LL) = gdmLogPixels;
                    if ( v109 >= v12[5] )
                      break;
                    v65 = gdmLogPixels;
                  }
                }
              }
              else
              {
                if ( (unsigned __int16)((96 * *((_DWORD *)v59 + 623) + 50) / 0x64u) )
                  SetDpiSetting_0();
                if ( (int)IsGetWin8StyleDpiSettingFromRegistrySupported_0() >= 0 )
                  GetWin8StyleDpiSettingFromRegistry_0();
                if ( gDrvDpiWin8Style )
                {
                  if ( (int)IsGetDpiSettingWithNoDefaultSupported_0() >= 0 )
                    GetDpiSettingWithNoDefault_0();
                  v65 = 96LL;
LABEL_167:
                  gdmLogPixels = v65;
                }
                else
                {
                  v104 = *((_DWORD *)v59 + 622);
                  if ( v104 )
                  {
                    v65 = (96 * v104 + 50) / 0x64u;
                    goto LABEL_167;
                  }
                  v65 = 96LL;
                  gdmLogPixels = 96;
                }
                v105 = 0;
                if ( v12[5] )
                {
                  while ( 1 )
                  {
                    v106 = (unsigned __int16)v65;
                    v107 = *(_QWORD *)&v12[8 * v105 + 8];
                    v65 = *(_QWORD *)(v107 + 2616);
                    *(_DWORD *)(v107 + 2204) = v106;
                    *(_DWORD *)(v107 + 2200) = v106;
                    *(_WORD *)(v65 + 166) = gdmLogPixels;
                    if ( gDrvDpiWin8Style )
                    {
                      v159 = 100 * gdmLogPixels;
                      *(_DWORD *)(v107 + 2564) = 1234568;
                      v160 = (int)((unsigned __int64)(715827883LL * (v159 + 48)) >> 32) >> 4;
                      v65 = (v160 >> 31) + v160;
                      *(_DWORD *)(v107 + 2488) = v65;
                    }
                    if ( ++v105 >= v12[5] )
                      break;
                    LOWORD(v65) = gdmLogPixels;
                  }
                }
              }
              gDrvDpiAdjusted = 1;
              goto LABEL_70;
            }
          }
          else
          {
            v156 = WdLogNewEntry5_WdTrace(v21);
            WdLogEvent5_WdTrace(v156);
          }
        }
LABEL_299:
        if ( v12 )
        {
          DrvBackoutMDEV((struct _MDEV *)v12, v23);
          Win32FreePool();
          v12 = 0LL;
        }
        goto LABEL_87;
      }
      v178 = (struct tagSIZE)v24;
      v32 = v24;
      v172 = v24;
      if ( v10 )
      {
        if ( !v21 )
        {
          v129 = DrvGetDeviceFromName(v10, 0);
          v24 = 0LL;
          v182 = (unsigned __int64)v129;
          j = v129;
          v27 = 0xFFFFFFFFLL;
          v26 = 1LL;
          if ( v173 )
          {
            v23 = v166;
          }
          else
          {
            v23 = 0LL;
            v166 = 0;
          }
          goto LABEL_17;
        }
      }
      else if ( !v21 )
      {
        goto LABEL_11;
      }
      if ( v25 )
      {
        v23 = (__int64)a5;
        if ( v30 >= *((_DWORD *)a5 + 5) )
          goto LABEL_34;
        v130 = v30;
        v30 += v26;
        v180 = v30;
        v32 = (HDEV)*((_QWORD *)a5 + 4 * v26 + 4 * v130);
        v178 = (struct tagSIZE)v32;
        j = (wchar_t *)*((_QWORD *)v32 + 325);
        if ( j == (wchar_t *)v21 )
          goto LABEL_95;
        if ( (*((_DWORD *)j + 40) & 8) != 0 )
        {
          if ( v168 == (_DWORD)v24 )
            goto LABEL_95;
        }
        else if ( v168 != (_DWORD)v24 )
        {
          goto LABEL_95;
        }
        EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
        EngAcquireSemaphore(*((HSEMAPHORE *)v32 + 8));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"pdo.hsemDevLock()", *((_QWORD *)v32 + 8), 11LL);
        EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
        ++*((_DWORD *)v32 + 9);
        ++*((_DWORD *)v32 + 8);
        if ( ((_DWORD)v32[14] & 0x400) != 0 && ((*((_DWORD *)j + 40) & 0x20000000) == 0 || !gbInvalidateDualView) )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          DrvEnableDisplay(v32);
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
        }
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
        GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        EtwTraceGreLockReleaseSemaphore(L"pdo.hsemDevLock()");
        GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)v32 + 8));
        EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
        GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
        v26 = 1LL;
        v23 = v166;
        v27 = 0xFFFFFFFFLL;
        v131 = (*((unsigned __int8 *)j + 160) >> 2) & 1;
        v177 = 1;
        v181 = v131;
        v24 = 0LL;
        goto LABEL_17;
      }
LABEL_11:
      if ( v19 == 4 )
      {
        if ( v29 >= *((unsigned __int16 *)v18 + 10) )
          goto LABEL_34;
        if ( !IsPrimaryPathInCloneGroup(v18, v29)
          || (v21 = 216LL * v29, *(_DWORD *)((char *)v18 + v21 + 256) < (int)v24) )
        {
          v170 = v26 + v29;
          goto LABEL_96;
        }
        for ( j = gpGraphicsDeviceList; j; j = (wchar_t *)*((_QWORD *)j + 16) )
        {
          if ( (*((_DWORD *)j + 40) & 0x800000) != 0
            && *((_DWORD *)j + 66) == *(_DWORD *)((char *)v18 + v21 + 56)
            && *((_DWORD *)j + 67) == *(_DWORD *)((char *)v18 + v21 + 60)
            && *((_DWORD *)j + 68) == *(_DWORD *)((char *)v18 + v21 + 64) )
          {
            goto LABEL_106;
          }
        }
        goto LABEL_227;
      }
      j = gpGraphicsDeviceList;
      for ( k = (int)v24; j && k != v30; k += v26 )
        j = (wchar_t *)*((_QWORD *)j + 16);
      v30 += v26;
      v180 = v30;
      if ( gbBaseVideo != (_DWORD)v24 && j && (*((_DWORD *)j + 40) & 0x800000) == 0 )
        goto LABEL_30;
LABEL_17:
      if ( v19 == 4 )
      {
        if ( v32 )
        {
          v132 = WdLogNewEntry5_WdAssertion(v21, v23, v25, 0xFFFFFFFFLL);
          WdLogEvent5_WdAssertion(v132);
          v24 = 0LL;
        }
LABEL_106:
        v26 = 1LL;
        if ( j && (*((_DWORD *)j + 41) & 1) == 0 )
        {
          DisplayDriverNames = DrvGetDisplayDriverNames(j);
          v24 = 0LL;
          v80 = (struct _DRV_NAMES *)DisplayDriverNames;
          if ( !DisplayDriverNames )
            goto LABEL_117;
          v81 = *((unsigned __int16 *)v18 + 10);
          if ( v29 >= (unsigned int)v81 )
          {
            v133 = WdLogNewEntry5_WdAssertion(v81, v79, v25, v27);
            WdLogEvent5_WdAssertion(v133);
          }
          v82 = 216LL * v29;
          if ( !*(_QWORD *)((char *)v18 + v82 + 224) )
          {
            v134 = WdLogNewEntry5_WdAssertion(v81, v79, v25, v27);
            WdLogEvent5_WdAssertion(v134);
          }
          v83 = gdmLogPixels;
          if ( !gdmLogPixels )
          {
            GetDpiSetting_0();
            v83 = (unsigned __int16)Buf2;
            gdmLogPixels = (unsigned __int16)Buf2;
          }
          *(_WORD *)(*(_QWORD *)((char *)v18 + v82 + 224) + 166LL) = v83;
          DriverAccelerationsLevel = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)j);
          DriverCapableOverRide = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)j);
          v32 = hCreateHDEV(
                  (struct tagGRAPHICS_DEVICE *)j,
                  v80,
                  *(struct _devicemodeW **)((char *)v18 + v82 + 224),
                  a3,
                  DriverCapableOverRide,
                  DriverAccelerationsLevel,
                  v174,
                  (v193 >> 2) & 1,
                  1u,
                  &v172);
          Win32FreePool();
          v24 = 0LL;
          if ( v32 )
          {
            v21 = *(unsigned int *)((char *)v18 + v82 + 252);
            v29 = v170;
            *((_DWORD *)v32 + 667) = v21;
LABEL_117:
            if ( v32 )
            {
LABEL_118:
              v26 = 1LL;
              goto LABEL_119;
            }
          }
          gpLastFailedPhysDisp = (__int64)j;
          DrvLogDisplayDriverEvent(2LL);
          v29 = v170;
          v24 = 0LL;
          v26 = 1LL;
        }
        if ( v32 )
          goto LABEL_119;
LABEL_227:
        if ( !IsPrimaryPathInCloneGroup(v18, v29)
          || (v136 = 216LL * v29, *(_DWORD *)((char *)v18 + v136 + 256) < (int)v24) )
        {
          v137 = WdLogNewEntry5_WdAssertion(v136, v135, v25, v27);
          WdLogEvent5_WdAssertion(v137);
          v24 = 0LL;
        }
        v21 = (unsigned __int16)v24;
        if ( (unsigned __int16)v24 >= *((_WORD *)v18 + 10) )
          goto LABEL_118;
        v26 = 1LL;
        v25 = 216LL * v29;
        do
        {
          v138 = 216LL * (unsigned __int16)v21;
          if ( *(_DWORD *)((char *)v18 + v138 + 248) == *(_DWORD *)((char *)v18 + v25 + 248) )
            *(_DWORD *)((char *)v18 + v138 + 256) = -1073741823;
          LOWORD(v21) = v21 + 1;
        }
        while ( (unsigned __int16)v21 < *((_WORD *)v18 + 10) );
LABEL_119:
        v170 = v29 + 1;
        goto LABEL_120;
      }
      if ( !j )
        goto LABEL_34;
      if ( ((unsigned __int8)*((_DWORD *)j + 41) & (unsigned __int8)v26) != 0 )
        goto LABEL_30;
      if ( a6 == -1 )
      {
        PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)j);
        v169 = PruneFlag;
        LODWORD(v24) = 0;
      }
      else
      {
        PruneFlag = v169;
      }
      if ( v32 )
        goto LABEL_121;
      if ( gForceDisconnect != (_DWORD)v24 || v19 == 3 )
        v36 = -1;
      else
        v36 = gProtocolType;
      PrimaryAttachFlags = GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)j, v36, &v181, &v177);
      v24 = 0LL;
      if ( !PrimaryAttachFlags )
        goto LABEL_34;
      if ( ((v19 - 1) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
      {
        if ( v19 == 2 )
        {
          v139 = *((_DWORD *)j + 40);
          if ( (v139 & 8) != 0 )
          {
            if ( !v177 )
              goto LABEL_94;
            v140 = v168 == 0;
          }
          else
          {
            if ( (v139 & 0x2000000) != 0 || v171 )
              goto LABEL_94;
            v140 = gProtocolType == -1;
          }
          if ( v140 )
            goto LABEL_94;
        }
        else
        {
          v141 = WdLogNewEntry5_WdAssertion(v21, v23, v25, v27);
          WdLogEvent5_WdAssertion(v141);
          v24 = 0LL;
          if ( (*((_DWORD *)j + 40) & 8) != 0 || v171 )
            goto LABEL_94;
        }
      }
      else
      {
        if ( !v177 )
        {
          v23 = v166;
          v26 = 1LL;
LABEL_30:
          v10 = a1;
          v28 = v198;
          goto LABEL_31;
        }
        if ( (*((_DWORD *)j + 40) & 8) != 0 )
        {
          v77 = v168;
LABEL_93:
          if ( !v77 )
            goto LABEL_94;
          goto LABEL_138;
        }
        if ( v168 )
        {
          v77 = 0;
          goto LABEL_93;
        }
      }
LABEL_138:
      v94 = DrvGetDisplayDriverNames(j);
      v24 = 0LL;
      v95 = (struct _DRV_NAMES *)v94;
      if ( v94 )
      {
        if ( (*((_DWORD *)j + 40) & 8) != 0 )
        {
          v96 = 4;
          v97 = 0;
          v98 = 0;
        }
        else
        {
          v96 = 1;
          v97 = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)j);
          v98 = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)j);
        }
        if ( a2 )
        {
          v100 = DrvProbeAndCaptureDevmode(
                   (struct tagGRAPHICS_DEVICE *)j,
                   &v167,
                   &v175,
                   0LL,
                   a2,
                   0,
                   PruneFlag,
                   a7,
                   0,
                   a8,
                   0LL);
        }
        else
        {
          Src = v176;
          memset(v176, 0, sizeof(struct _devicemodeW));
          Src->dmSize = 220;
          v100 = DrvProbeAndCaptureDevmode(
                   (struct tagGRAPHICS_DEVICE *)j,
                   &v167,
                   &v175,
                   0LL,
                   Src,
                   0,
                   v169,
                   a7,
                   0,
                   a8,
                   0LL);
        }
        if ( v100 == 1073741839 )
        {
          DrvLogDisplayDriverEvent(4LL);
          goto LABEL_146;
        }
        if ( v100 == -1073741776 )
        {
          v142 = *(struct _devicemodeW **)(*((_QWORD *)v12 + 4) + 2616LL);
          if ( v167 && v167 != v176 )
          {
            Win32FreePool();
            v167 = 0LL;
          }
          v100 = DrvProbeAndCaptureDevmode(
                   (struct tagGRAPHICS_DEVICE *)j,
                   &v167,
                   &v175,
                   0LL,
                   v142,
                   0,
                   v169,
                   a7,
                   0,
                   a8,
                   0LL);
        }
        if ( v100 < 0 )
        {
          DrvDxgkLogCodePointPacket(58LL, 2LL, 0LL, 0LL);
          v101 = v167;
          v32 = (HDEV)v178;
          if ( (*((_DWORD *)j + 40) & 0x2000000) != 0 )
            gulDriverFailureReason = 4;
        }
        else
        {
LABEL_146:
          v101 = v167;
          v32 = hCreateHDEV((struct tagGRAPHICS_DEVICE *)j, v95, v167, a3, v97, v98, v174, (v193 >> 2) & 1, v96, &v172);
          if ( !v32 && (*((_DWORD *)j + 40) & 0x2000000) != 0 )
            gulDriverFailureReason = 5;
        }
        v102 = a2;
        if ( (*((_DWORD *)j + 40) & 8) == 0 && !a2 )
        {
          if ( v32 )
            goto LABEL_150;
          DrvLogDisplayDriverEvent(4LL);
          if ( v101 )
          {
            if ( v101->dmBitsPerPel == 4 )
              DrvLogDisplayDriverEvent(5LL);
            if ( v101 != v176 )
            {
              Win32FreePool();
              v167 = 0LL;
            }
          }
          v143 = v176;
          memset(v176, 0, sizeof(struct _devicemodeW));
          v143->dmSize = 220;
          v144 = DrvProbeAndCaptureDevmode(
                   (struct tagGRAPHICS_DEVICE *)j,
                   &v167,
                   &v175,
                   0LL,
                   v143,
                   1,
                   v169,
                   a7,
                   0,
                   a8,
                   0LL);
          v101 = v167;
          if ( v144 >= 0 )
          {
            v145 = hCreateHDEV(
                     (struct tagGRAPHICS_DEVICE *)j,
                     v95,
                     v167,
                     a3,
                     v97,
                     v98,
                     v174,
                     (v193 & 4) != 0,
                     1u,
                     &v172);
            v178 = (struct tagSIZE)v145;
            if ( v145 || v101->dmPelsWidth == 640 && v101->dmPelsHeight == 480 && v101->dmBitsPerPel == 4 )
            {
LABEL_276:
              v32 = v145;
            }
            else
            {
              if ( v101 != v176 )
              {
                Win32FreePool();
                v167 = 0LL;
              }
              v146 = v176;
              memset(v176, 0, sizeof(struct _devicemodeW));
              v146->dmSize = 220;
              v147 = *((_DWORD *)j + 40) & 0x800000;
              v146->dmPelsWidth = 640;
              v146->dmPelsHeight = 480;
              v146->dmFields = 1835008;
              v146->dmBitsPerPel = v147 != 0 ? 32 : 4;
              v148 = DrvProbeAndCaptureDevmode(
                       (struct tagGRAPHICS_DEVICE *)j,
                       &v167,
                       &v175,
                       0LL,
                       v146,
                       0,
                       v169,
                       a7,
                       0,
                       a8,
                       0LL);
              v101 = v167;
              if ( v148 >= 0 )
              {
                v145 = hCreateHDEV(
                         (struct tagGRAPHICS_DEVICE *)j,
                         v95,
                         v167,
                         a3,
                         v97,
                         v98,
                         v174,
                         (v193 & 4) != 0,
                         1u,
                         &v172);
                goto LABEL_276;
              }
              v32 = (HDEV)v178;
            }
          }
          if ( v101 )
          {
            dmPelsHeight = v101->dmPelsHeight;
            dmPelsWidth = v101->dmPelsWidth;
            v151 = v32 != 0LL;
          }
          else
          {
            v151 = 2LL;
            dmPelsHeight = v176->dmPelsHeight;
            dmPelsWidth = v176->dmPelsWidth;
          }
          DrvDxgkLogCodePointPacket(26LL, v151, dmPelsWidth, dmPelsHeight);
          v102 = 0LL;
        }
        if ( !v32 && !v102 )
        {
          gpLastFailedPhysDisp = (__int64)j;
          DrvLogDisplayDriverEvent(2LL);
        }
LABEL_150:
        if ( v101 && v101 != v176 )
          Win32FreePool();
        Win32FreePool();
        v24 = 0LL;
        v26 = 1LL;
LABEL_120:
        if ( !v32 )
          goto LABEL_95;
LABEL_121:
        v86 = WdLogNewEntry5_WdTrace(v21);
        WdLogEvent5_WdTrace(v86);
        v24 = 0LL;
        v26 = 1LL;
        v171 = 1;
        if ( v181 )
          *((_DWORD *)j + 40) |= 4u;
        else
          *((_DWORD *)j + 40) &= ~4u;
        if ( !v172 )
        {
          if ( a5 )
          {
            v87 = *((_DWORD *)a5 + 5);
            if ( v87 )
            {
              v88 = (HDEV *)((char *)a5 + 32);
              v25 = v87;
              do
              {
                v89 = *v88;
                v88 += 4;
                v90 = v172;
                if ( j == *((wchar_t **)v89 + 325) )
                  v90 = v89;
                v172 = v90;
                --v25;
              }
              while ( v25 );
            }
          }
        }
        *(_QWORD *)&v12[8 * v12[5] + 8] = v32;
        *(_QWORD *)&v12[8 * v12[5] + 10] = v172;
        v21 = v12[5];
        if ( (int)v21 + 2 < (unsigned int)v21 )
          goto LABEL_95;
        v91 = v12;
        v12[5] = v21 + 1;
        v21 = (unsigned __int64)(unsigned int)(v21 + 2) << 6;
        if ( v21 > 0xFFFFFFFF )
        {
          v12 = 0LL;
        }
        else
        {
          v92 = (unsigned int *)PALLOCMEM2(v21, 1936876615LL, 1);
          v24 = 0LL;
          v12 = v92;
          v26 = 1LL;
        }
        if ( !v12 )
        {
          v10 = a1;
          v28 = -1073741670;
          v198 = -1073741670;
          v12 = v91;
          goto LABEL_97;
        }
        memmove(v12, v91, (unsigned __int64)v91[5] << 6);
        Win32FreePool();
        v24 = 0LL;
      }
LABEL_94:
      v26 = 1LL;
LABEL_95:
      v10 = a1;
LABEL_96:
      v28 = v198;
LABEL_97:
      v23 = v166;
LABEL_31:
      v18 = a10;
      v30 = v180;
      if ( !(_DWORD)v23 )
      {
        v31 = v28 < 0;
        goto LABEL_289;
      }
      v29 = v170;
      v27 = 0xFFFFFFFFLL;
      v19 = v185[0];
      v21 = v182;
      v25 = (__int64)v173;
    }
  }
LABEL_89:
  v75 = WdLogNewEntry5_WdTrace(v21);
  *(_QWORD *)(v75 + 24) = v12;
  WdLogEvent5_WdTrace(v75);
  return (struct _MDEV *)v12;
}
