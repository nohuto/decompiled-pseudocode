/*
 * XREFs of ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0062A9C
 * Callers:
 *     hdcOpenDCW @ 0x1C0053650 (hdcOpenDCW.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     IsGetWin8StyleDpiSettingFromRegistrySupported_0 @ 0x1C0001768 (IsGetWin8StyleDpiSettingFromRegistrySupported_0.c)
 *     GetWin8StyleDpiSettingFromRegistry_0 @ 0x1C0001770 (GetWin8StyleDpiSettingFromRegistry_0.c)
 *     IsGetDpiSettingWithNoDefaultSupported_0 @ 0x1C0001778 (IsGetDpiSettingWithNoDefaultSupported_0.c)
 *     GetDpiSettingWithNoDefault_0 @ 0x1C0001780 (GetDpiSettingWithNoDefault_0.c)
 *     GetDpiSetting_0 @ 0x1C0002950 (GetDpiSetting_0.c)
 *     SetDpiSetting_0 @ 0x1C0002960 (SetDpiSetting_0.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C00189A0 (-DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C001AC14 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     DrvGetDeviceFromName @ 0x1C0053CD0 (DrvGetDeviceFromName.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z @ 0x1C005F214 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C00639D0 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0063C00 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C0063CE8 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0063D8C (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C0063E60 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     AlignRects @ 0x1C0063E98 (AlignRects.c)
 *     UserSetScaleFactorsFromRemoteMetric @ 0x1C0063F24 (UserSetScaleFactorsFromRemoteMetric.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0063F40 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0064878 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006496C (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetDisplayDriverNames @ 0x1C0064AB0 (DrvGetDisplayDriverNames.c)
 *     ?IsPrimaryPathInCloneGroup@@YAEPEBU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C006521C (-IsPrimaryPathInCloneGroup@@YAEPEBU_D3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C006AC90 (DrvDxgkLogCodePointPacket.c)
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C006DC3C (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C006EB9C (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z @ 0x1C006EC68 (-FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C006F8F0 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C008487C (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     memcmp @ 0x1C00859F0 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00B8A80 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
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
  __int64 v14; // rcx
  struct _D3DKMT_GETPATHSMODALITY *v15; // r13
  __int64 v16; // r15
  unsigned int *v17; // rax
  __int64 v18; // rdx
  size_t v19; // rcx
  __int64 v20; // r8
  struct _devicemodeW *v21; // rax
  HDEV v22; // r10
  __int64 v23; // r11
  __int64 v24; // r9
  int v25; // eax
  unsigned int v26; // ebx
  unsigned int v27; // r12d
  bool v28; // sf
  HDEV v29; // rdi
  wchar_t *j; // r14
  int k; // eax
  int PruneFlag; // ebx
  unsigned __int16 v33; // cx
  int PrimaryAttachFlags; // eax
  __int64 v35; // rdi
  HDEV v36; // r14
  struct _MDEV *v37; // rax
  MULTIDEVLOCKOBJ *v38; // r15
  unsigned int v39; // edx
  unsigned int v40; // ecx
  HDEV v41; // rdx
  int v42; // eax
  int v43; // eax
  unsigned int v44; // ebx
  _DWORD *v45; // r12
  struct _devicemodeW *v46; // rax
  struct _devicemodeW *v47; // r13
  unsigned int v48; // r10d
  unsigned int v49; // r9d
  __int64 v50; // rdx
  __int64 v51; // rax
  _DWORD *v52; // r8
  HDEV v53; // rcx
  int v54; // eax
  unsigned int v55; // r12d
  HDEV v56; // rdi
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  unsigned int v63; // r12d
  __int64 v64; // rcx
  unsigned int i; // edi
  __int64 v66; // r14
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int128 v70; // xmm0
  bool v71; // sf
  __int64 v72; // rax
  int v74; // eax
  __int64 DisplayDriverNames; // rax
  struct _DRV_NAMES *v76; // r12
  __int64 v77; // rcx
  __int64 v78; // r15
  unsigned __int16 v79; // cx
  unsigned int DriverAccelerationsLevel; // ebx
  unsigned int DriverCapableOverRide; // eax
  __int64 v82; // rax
  unsigned int v83; // eax
  HDEV *v84; // rdx
  HDEV v85; // rcx
  HDEV v86; // rax
  unsigned int *v87; // rbx
  unsigned int *v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  struct _DRV_NAMES *v91; // r13
  unsigned int v92; // edi
  unsigned int v93; // r15d
  unsigned int v94; // r12d
  struct _devicemodeW *Src; // rbx
  int v96; // eax
  struct _devicemodeW *v97; // rbx
  struct _devicemodeW *v98; // rax
  __int64 v99; // rax
  int v100; // eax
  int v101; // r8d
  int v102; // eax
  __int64 v103; // rcx
  unsigned int v104; // eax
  unsigned int v105; // r8d
  __int64 v106; // rax
  __int64 v107; // rax
  unsigned int v108; // r13d
  __int64 v109; // rbx
  unsigned int v110; // r12d
  unsigned int v111; // ecx
  unsigned int v112; // eax
  unsigned int v113; // edx
  unsigned int v114; // ecx
  unsigned int v115; // eax
  __int64 v116; // rcx
  unsigned int v117; // r9d
  unsigned __int64 v118; // rdx
  __int64 v119; // rax
  wchar_t *DeviceFromName; // rax
  __int64 v121; // rdx
  __int64 v122; // r8
  struct PDEV *v123; // rcx
  __int64 v124; // rax
  wchar_t *v125; // rax
  __int64 v126; // rax
  __int64 v127; // r8
  __int64 v128; // r8
  __int64 v129; // r8
  unsigned int v130; // eax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rax
  int v136; // eax
  bool v137; // zf
  __int64 v138; // rax
  struct _devicemodeW *v139; // rbx
  struct _devicemodeW *v140; // rbx
  int v141; // eax
  HDEV v142; // rax
  struct _devicemodeW *v143; // rbx
  int v144; // eax
  int v145; // eax
  __int64 dmPelsHeight; // r9
  __int64 dmPelsWidth; // r8
  __int64 v148; // rdx
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  int DpiSettingWithNoDefaultSupported_0; // eax
  _QWORD *v155; // rax
  int v156; // edx
  unsigned int v157; // edx
  unsigned int v158; // r12d
  __int64 v159; // rax
  __int64 v160; // rax
  unsigned int v161; // [rsp+30h] [rbp-D8h]
  int v162; // [rsp+38h] [rbp-D0h]
  unsigned int v163; // [rsp+68h] [rbp-A0h]
  struct _devicemodeW *v164; // [rsp+70h] [rbp-98h] BYREF
  int v165; // [rsp+78h] [rbp-90h]
  int v166; // [rsp+7Ch] [rbp-8Ch]
  unsigned int v167; // [rsp+80h] [rbp-88h]
  int v168; // [rsp+84h] [rbp-84h]
  HDEV v169; // [rsp+88h] [rbp-80h] BYREF
  struct tagSIZE v170; // [rsp+90h] [rbp-78h] BYREF
  int v171; // [rsp+98h] [rbp-70h]
  int v172; // [rsp+9Ch] [rbp-6Ch] BYREF
  struct _devicemodeW *v173; // [rsp+A0h] [rbp-68h]
  unsigned int v174; // [rsp+A8h] [rbp-60h] BYREF
  struct tagSIZE v175; // [rsp+B0h] [rbp-58h] BYREF
  int v176; // [rsp+B8h] [rbp-50h]
  unsigned int v177; // [rsp+BCh] [rbp-4Ch]
  unsigned int v178; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v179; // [rsp+C8h] [rbp-40h]
  int v180; // [rsp+D0h] [rbp-38h]
  void *Buf2; // [rsp+D8h] [rbp-30h]
  _QWORD v182[2]; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v183[104]; // [rsp+F0h] [rbp-18h] BYREF
  HDEV v185; // [rsp+168h] [rbp+60h]
  int v186; // [rsp+168h] [rbp+60h]
  unsigned int v189; // [rsp+178h] [rbp+70h]
  unsigned __int8 v190; // [rsp+180h] [rbp+78h]
  int v191; // [rsp+180h] [rbp+78h]
  bool v192; // [rsp+180h] [rbp+78h]
  struct _MDEV *v193; // [rsp+188h] [rbp+80h]
  unsigned int v194; // [rsp+190h] [rbp+88h]
  int v195; // [rsp+1A8h] [rbp+A0h]
  struct _D3DKMT_GETPATHSMODALITY *v196; // [rsp+1B0h] [rbp+A8h]

  v190 = a4;
  v16 = a4;
  v171 = a4 & 1;
  v10 = a1;
  v195 = 0;
  v165 = 0;
  v168 = 0;
  v180 = 0;
  v12 = 0LL;
  v166 = a6 != 0;
  v13 = (_QWORD *)WdLogNewEntry5_WdEvent(0LL, a2);
  v13[3] = v10;
  v13[4] = a3;
  v13[5] = v16;
  v13[6] = a5;
  WdLogEvent5_WdEvent(v13);
  v15 = a10;
  LODWORD(v16) = a10 != 0LL ? 4 : 1;
  v176 = v16;
  if ( v10 )
  {
    if ( a10 )
    {
      v119 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v119);
    }
    DeviceFromName = DrvGetDeviceFromName(v10, 0);
    if ( DeviceFromName && (*((_DWORD *)DeviceFromName + 40) & 0x20000000) != 0 )
    {
      v123 = gppdevList;
      if ( !gppdevList )
        goto LABEL_201;
      do
      {
        if ( *((wchar_t **)v123 + 325) == DeviceFromName )
          break;
        v123 = (struct PDEV *)*((_QWORD *)v123 + 3);
      }
      while ( v123 );
      if ( !v123 )
      {
LABEL_201:
        v124 = WdLogNewEntry5_WdTrace(v123, v121, v122);
        WdLogEvent5_WdTrace(v124);
        goto LABEL_89;
      }
    }
  }
  v17 = (unsigned int *)PALLOCMEM2(0x40uLL, 1936876615LL, 1);
  v12 = v17;
  if ( v17 )
  {
    v17[5] = 0;
    *((_QWORD *)v17 + 3) = a3;
    v21 = (struct _devicemodeW *)PALLOCMEM2(0xDCuLL, 1986356295LL, 0);
    v22 = 0LL;
    v173 = v21;
    if ( !v21 )
      goto LABEL_299;
    v20 = a5 != 0LL;
    v170 = (struct tagSIZE)v20;
LABEL_5:
    v23 = 1LL;
LABEL_6:
    v24 = 0xFFFFFFFFLL;
LABEL_7:
    v25 = v195;
    v18 = 1LL;
    v19 = 0LL;
    v16 = (int)v16;
    v26 = 0;
    v163 = 1;
    v179 = 0LL;
    v27 = 0;
    v167 = 0;
    v182[0] = (int)v16;
    v177 = 0;
    v174 = 0;
    v178 = 0;
    while ( 1 )
    {
      v28 = v25 < 0;
      if ( v25 )
      {
LABEL_289:
        if ( v28 )
          goto LABEL_290;
LABEL_34:
        LODWORD(v16) = v176;
        if ( v176 == 4 )
        {
          if ( v168 != (_DWORD)v22 )
          {
            v89 = WdLogNewEntry5_WdTrace(v19, v18, v20);
            WdLogEvent5_WdTrace(v89);
            v23 = 1LL;
            LODWORD(v16) = 1;
            v176 = 1;
            goto LABEL_137;
          }
          v151 = WdLogNewEntry5_WdError(v19, v18, v20, v24);
          *(_QWORD *)(v151 + 24) = -1073741823LL;
          WdLogEvent5_WdError(v151);
        }
        else
        {
          if ( v168 != (_DWORD)v22 )
          {
            if ( v165 != (_DWORD)v22 )
            {
              v195 = (int)v22;
              goto LABEL_38;
            }
            v99 = WdLogNewEntry5_WdTrace(v19, v18, v20);
            WdLogEvent5_WdTrace(v99);
            v23 = 1LL;
LABEL_137:
            v10 = a1;
            v22 = 0LL;
            v20 = (__int64)v170;
            v165 = 1;
            goto LABEL_6;
          }
          if ( v176 == 1 )
          {
            v149 = WdLogNewEntry5_WdTrace(v19, v18, v20);
            WdLogEvent5_WdTrace(v149);
            v10 = a1;
            LODWORD(v16) = 2;
            v20 = (__int64)v170;
            v22 = 0LL;
            v24 = 0xFFFFFFFFLL;
            v176 = 2;
            v23 = 1LL;
            if ( a8 )
              a8 = 0;
            goto LABEL_7;
          }
          if ( v176 == 2 && gProtocolType == (_WORD)v22 )
          {
            v150 = WdLogNewEntry5_WdTrace(v19, v18, v20);
            WdLogEvent5_WdTrace(v150);
            v10 = a1;
            LODWORD(v16) = 3;
            v20 = (__int64)v170;
            v22 = 0LL;
            v176 = 3;
            goto LABEL_5;
          }
          if ( v27 )
          {
            v152 = WdLogNewEntry5_WdTrace(v19, v18, v20);
            WdLogEvent5_WdTrace(v152);
            v25 = -1073741204;
            v22 = 0LL;
            v195 = -1073741204;
LABEL_290:
            v71 = v25 < 0;
            if ( v25 )
              goto LABEL_86;
LABEL_38:
            if ( (v190 & 2) != 0 )
              goto LABEL_87;
            v35 = (unsigned int)v22;
            v194 = (unsigned int)v22;
            v36 = v22;
            v185 = v22;
            v37 = (struct _MDEV *)Win32AllocPool();
            v193 = v37;
            v38 = v37;
            if ( v37 )
            {
              *(_QWORD *)v37 = 1LL;
              *((_QWORD *)v37 + 1) = 0LL;
              *((_QWORD *)v37 + 2) = 0LL;
            }
            else
            {
              v38 = 0LL;
              v193 = 0LL;
            }
            if ( v38 )
            {
              MULTIDEVLOCKOBJ::vInit(v38, (struct _MDEV *)v12);
              if ( (*(_DWORD *)v38 & 1) == 0 )
                goto LABEL_85;
              MULTIDEVLOCKOBJ::vLock(v38);
              v40 = 0;
              if ( v12[5] )
              {
                do
                {
                  v41 = *(HDEV *)(*(_QWORD *)&v12[8 * v40 + 8] + 2600LL);
                  v42 = *((_DWORD *)v41 + 40);
                  if ( (v42 & 0x28) != 0 )
                  {
                    if ( (v42 & 4) != 0 )
                      *((_DWORD *)v41 + 40) = v42 & 0xFFFFFFFB;
                  }
                  else if ( !v36 )
                  {
                    v35 = v40;
                  }
                  v43 = *((_DWORD *)v41 + 40);
                  if ( (v43 & 4) != 0 )
                  {
                    if ( v36 )
                    {
                      v195 = -1073741438;
                      *((_DWORD *)v41 + 40) = v43 & 0xFFFFFFFB;
                    }
                    else
                    {
                      v36 = v41;
                      v35 = v40;
                    }
                  }
                  ++v40;
                }
                while ( v40 < v12[5] );
                v194 = v35;
                v185 = v36;
              }
              v44 = 16 * v12[5];
              Buf2 = PALLOCMEM2(v44, 1936876615LL, 0);
              v45 = Buf2;
              v46 = (struct _devicemodeW *)PALLOCMEM2(v44, 1936876615LL, 0);
              v164 = v46;
              v47 = v46;
              if ( !v45 )
                goto LABEL_81;
              if ( !v46 )
                goto LABEL_80;
              v48 = 0;
              v189 = 0;
              v49 = 0;
              if ( v12[5] )
              {
                do
                {
                  v50 = 2LL * v49;
                  v51 = *(_QWORD *)&v12[8 * v49 + 8];
                  v52 = *(_DWORD **)(v51 + 2616);
                  v45[2 * v50] = v52[19];
                  v45[2 * v50 + 1] = v52[20];
                  v45[2 * v50 + 2] = v52[19] + v52[43];
                  v45[2 * v50 + 3] = v52[20] + v52[44];
                  v53 = *(HDEV *)(v51 + 2600);
                  v54 = *((_DWORD *)v53 + 40);
                  if ( (v54 & 8) == 0 )
                  {
                    if ( !v36 && !v52[19] && !v52[20] && (v54 & 0x20) == 0 )
                    {
                      v35 = v49;
                      v36 = v53;
                    }
                    ++v48;
                  }
                  ++v49;
                }
                while ( v49 < v12[5] );
                v38 = v193;
                v189 = v48;
                v194 = v35;
                v185 = v36;
              }
              memmove(v47, v45, v44);
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
              v55 = 0;
              v56 = *(HDEV *)&v12[8 * v35 + 8];
              v169 = v56;
              *(_DWORD *)(*((_QWORD *)v56 + 325) + 160LL) |= 4u;
              if ( v12[5] )
              {
                do
                {
                  v57 = *(_QWORD *)&v12[8 * v55 + 8];
                  if ( (*(_DWORD *)(*(_QWORD *)(v57 + 2600) + 160LL) & 0x800000) != 0 )
                  {
                    *(_DWORD *)(v57 + 2572) ^= (*(_DWORD *)(v57 + 2572) ^ (32 * (v55 == v194))) & 0x20;
                    v191 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, __int64))qword_1C0101598)(
                             *(_QWORD *)(*(_QWORD *)(v57 + 2600) + 256LL),
                             *(unsigned int *)(*(_QWORD *)(v57 + 2600) + 272LL),
                             0xFFFFFFFFLL,
                             v57 + 2160,
                             v57 + 2480);
                    if ( v191 < 0 )
                    {
                      v155 = (_QWORD *)WdLogNewEntry5_WdError(v59, v58, v60, v61);
                      v155[3] = v191;
                      v155[4] = *(_QWORD *)(*(_QWORD *)(v57 + 2600) + 256LL);
                      v155[5] = *(unsigned int *)(*(_QWORD *)(v57 + 2600) + 272LL);
                      WdLogEvent5_WdError(v155);
                    }
                  }
                  ++v55;
                }
                while ( v55 < v12[5] );
                v56 = v169;
                v38 = v193;
                v36 = v185;
                v47 = v164;
              }
              v62 = 1374389535LL;
              v63 = 1;
              if ( gDrvDpiAdjusted )
              {
LABEL_70:
                if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
                {
                  v186 = 1;
                  if ( v12[5] )
                  {
                    v108 = 0;
                    do
                    {
                      v109 = *(_QWORD *)&v12[8 * v108 + 8];
                      v110 = *(_DWORD *)(v109 + 3552);
                      v192 = ((*(_DWORD *)(*(_QWORD *)(v109 + 2616) + 84LL) - 1) & 0xFFFFFFFD) == 0;
                      v111 = *(_DWORD *)(v109 + 2172) / 0x3E8u;
                      v112 = *(_DWORD *)(v109 + 2168) / 0x3E8u;
                      if ( ((*(_DWORD *)(*(_QWORD *)(v109 + 2616) + 84LL) - 1) & 0xFFFFFFFD) == 0 )
                      {
                        v112 = *(_DWORD *)(v109 + 2172) / 0x3E8u;
                        v111 = *(_DWORD *)(v109 + 2168) / 0x3E8u;
                      }
                      v113 = *(_DWORD *)(v109 + 2180);
                      v196 = (struct _D3DKMT_GETPATHSMODALITY *)__PAIR64__(v111, v112);
                      v114 = *(_DWORD *)(v109 + 2176);
                      v170 = (struct tagSIZE)v196;
                      v115 = v114;
                      if ( v192 )
                      {
                        v115 = v113;
                        v113 = v114;
                      }
                      v179 = __PAIR64__(v113, v115);
                      v175 = (struct tagSIZE)__PAIR64__(v113, v115);
                      if ( v110 )
                      {
                        FillPhysicalDpiOnly(&v170, &v175, (struct _DPI_INFORMATION *)(v109 + 2480));
                        v158 = HIWORD(v110);
                        *(_DWORD *)(v109 + 2572) |= 0x200u;
                        *(_DWORD *)(v109 + 2488) = v158;
                        *(_DWORD *)(v109 + 2492) = v158;
                        *(_DWORD *)(v109 + 2540) = v158;
                        *(_DWORD *)(v109 + 2536) = v158;
                        v63 = v186;
                      }
                      else
                      {
                        *(_DWORD *)(v109 + 2572) &= ~0x200u;
                        v186 = 0;
                        v63 = 0;
                        memset(v183, 0, 0x20uLL);
                        v182[0] = 0x2000000001LL;
                        v182[1] = v183;
                        if ( (int)DxgkEngQueryWin32Info((struct _DXGK_QUERY_WIN32_INFO *)v182) < 0 )
                        {
                          v159 = WdLogNewEntry5_WdAssertion(v116);
                          WdLogEvent5_WdAssertion(v159);
                        }
                        FillDpiInfo(
                          &v170,
                          &v175,
                          (const struct _DPI_SCALE_FACTOR_COLLECTION *)v183,
                          v117,
                          gdmLogPixels,
                          v161,
                          v162,
                          (struct _DPI_INFORMATION *)(v109 + 2480));
                      }
                      GetRemoteScaleOverrideTestHook(
                        (STRSAFE_PCNZWCH)(*(_QWORD *)(v109 + 2600) + 64LL),
                        v118,
                        (struct _DPI_INFORMATION *)(v109 + 2480));
                      ++v108;
                      *(_DWORD *)(v109 + 2572) ^= (*(_DWORD *)(v109 + 2572) ^ (v192 << 7)) & 0x80;
                    }
                    while ( v108 < v12[5] );
                    v56 = v169;
                    v38 = v193;
                    v47 = v164;
                  }
                  UserSetScaleFactorsFromRemoteMetric(v63, v62);
                  v180 = 1;
                }
                else
                {
                  *((_DWORD *)gpsi + 555) &= ~0x40u;
                }
                gdmLogPixelsOfPrimary = (96 * *((_DWORD *)v56 + 623) + 50) / 0x64u;
                AlignRects(v47, v189, v194);
                if ( memcmp(v47, Buf2, 16LL * v189) )
                {
                  v160 = WdLogNewEntry5_WdWarning(v64);
                  WdLogEvent5_WdWarning(v160);
                }
                for ( i = 0; i < v12[5]; *(_OWORD *)&v12[v66 + 12] = v70 )
                {
                  v66 = 8LL * i;
                  v67 = *(_QWORD *)&v12[v66 + 8];
                  *(_QWORD *)(v67 + 2608) = *(_QWORD *)&v47->dmDeviceName[8 * i];
                  if ( *(_QWORD *)(v67 + 3416) )
                  {
                    v68 = *(_QWORD *)(v67 + 2576);
                    if ( v68 )
                      v69 = v68 + 24;
                    else
                      v69 = 0LL;
                    (*(void (__fastcall **)(__int64, __int64))(v67 + 3416))(v69, 2LL);
                  }
                  v70 = *(_OWORD *)&v47->dmDeviceName[8 * i++];
                }
LABEL_80:
                Win32FreePool();
LABEL_81:
                if ( v47 )
                  Win32FreePool();
                MULTIDEVLOCKOBJ::vUnlock(v38);
                if ( v180 )
                  ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &gSessionId, 0, 0);
LABEL_85:
                MULTIDEVLOCKOBJ::`scalar deleting destructor'(v38, v39);
                v71 = v195 < 0;
LABEL_86:
                if ( v71 )
                  goto LABEL_299;
LABEL_87:
                if ( v173 )
                  Win32FreePool();
                break;
              }
              gDrvDpiWin8Style = 0;
              if ( ((gProtocolType + 1) & 0xFFFE) != 0 )
              {
                v104 = *((_DWORD *)v56 + 888);
                if ( v104 )
                {
                  v62 = (96 * HIWORD(v104) + 50) / 0x64u;
                }
                else
                {
                  if ( wcsncmp(*((const wchar_t **)v36 + 26), L"WORKERDD", *((unsigned int *)v36 + 70))
                    && wcsncmp(*((const wchar_t **)v36 + 26), L"TSDDD", *((unsigned int *)v36 + 70)) )
                  {
                    gDrvDpiWin8Style = 1;
                  }
                  GetDpiSetting_0();
                  v62 = 96LL;
                }
                gdmLogPixels = v62;
                v105 = 0;
                if ( v12[5] )
                {
                  while ( 1 )
                  {
                    v106 = v105++;
                    v107 = *(_QWORD *)&v12[8 * v106 + 8];
                    *(_DWORD *)(v107 + 2204) = (unsigned __int16)v62;
                    *(_DWORD *)(v107 + 2200) = (unsigned __int16)v62;
                    *(_WORD *)(*(_QWORD *)(v107 + 2616) + 166LL) = gdmLogPixels;
                    if ( v105 >= v12[5] )
                      break;
                    v62 = gdmLogPixels;
                  }
                }
              }
              else
              {
                if ( (unsigned __int16)((96 * *((_DWORD *)v56 + 623) + 50) / 0x64u) )
                  SetDpiSetting_0();
                if ( (int)IsGetWin8StyleDpiSettingFromRegistrySupported_0() >= 0 )
                  GetWin8StyleDpiSettingFromRegistry_0();
                if ( gDrvDpiWin8Style )
                {
                  if ( (int)IsGetDpiSettingWithNoDefaultSupported_0() >= 0 )
                    GetDpiSettingWithNoDefault_0();
                  v62 = 96LL;
LABEL_167:
                  gdmLogPixels = v62;
                }
                else
                {
                  v100 = *((_DWORD *)v56 + 622);
                  if ( v100 )
                  {
                    v62 = (96 * v100 + 50) / 0x64u;
                    goto LABEL_167;
                  }
                  v62 = 96LL;
                  gdmLogPixels = 96;
                }
                v101 = 0;
                if ( v12[5] )
                {
                  while ( 1 )
                  {
                    v102 = (unsigned __int16)v62;
                    v103 = *(_QWORD *)&v12[8 * v101 + 8];
                    v62 = *(_QWORD *)(v103 + 2616);
                    *(_DWORD *)(v103 + 2204) = v102;
                    *(_DWORD *)(v103 + 2200) = v102;
                    *(_WORD *)(v62 + 166) = gdmLogPixels;
                    if ( gDrvDpiWin8Style )
                    {
                      v156 = 100 * gdmLogPixels;
                      *(_DWORD *)(v103 + 2564) = 1234568;
                      v157 = (int)((unsigned __int64)(715827883LL * (v156 + 48)) >> 32) >> 4;
                      v62 = (v157 >> 31) + v157;
                      *(_DWORD *)(v103 + 2488) = v62;
                    }
                    if ( ++v101 >= v12[5] )
                      break;
                    LOWORD(v62) = gdmLogPixels;
                  }
                }
              }
              gDrvDpiAdjusted = 1;
              goto LABEL_70;
            }
          }
          else
          {
            v153 = WdLogNewEntry5_WdTrace(v19, v18, v20);
            WdLogEvent5_WdTrace(v153);
          }
        }
LABEL_299:
        if ( v12 )
        {
          DrvBackoutMDEV((struct _MDEV *)v12, v18);
          Win32FreePool();
          v12 = 0LL;
        }
        goto LABEL_87;
      }
      v175 = (struct tagSIZE)v22;
      v29 = v22;
      v169 = v22;
      if ( v10 )
      {
        if ( !v19 )
        {
          v125 = DrvGetDeviceFromName(v10, 0);
          v22 = 0LL;
          v179 = (unsigned __int64)v125;
          j = v125;
          v24 = 0xFFFFFFFFLL;
          v23 = 1LL;
          if ( v170 )
          {
            v18 = v163;
          }
          else
          {
            v18 = 0LL;
            v163 = 0;
          }
          goto LABEL_17;
        }
      }
      else if ( !v19 )
      {
        goto LABEL_11;
      }
      if ( v20 )
      {
        v18 = (__int64)a5;
        if ( v27 >= *((_DWORD *)a5 + 5) )
          goto LABEL_34;
        v126 = v27;
        v27 += v23;
        v177 = v27;
        v29 = (HDEV)*((_QWORD *)a5 + 4 * v23 + 4 * v126);
        v175 = (struct tagSIZE)v29;
        j = (wchar_t *)*((_QWORD *)v29 + 325);
        if ( j == (wchar_t *)v19 )
          goto LABEL_95;
        if ( (*((_DWORD *)j + 40) & 8) != 0 )
        {
          if ( v165 == (_DWORD)v22 )
            goto LABEL_95;
        }
        else if ( v165 != (_DWORD)v22 )
        {
          goto LABEL_95;
        }
        EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
        EngAcquireSemaphore(*((HSEMAPHORE *)v29 + 8));
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"pdo.hsemDevLock()", *((_QWORD *)v29 + 8), 11);
        EngAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
        ++*((_DWORD *)v29 + 9);
        ++*((_DWORD *)v29 + 8);
        if ( ((_DWORD)v29[14] & 0x400) != 0 && ((*((_DWORD *)j + 40) & 0x20000000) == 0 || !gbInvalidateDualView) )
        {
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v127);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
          DrvEnableDisplay(v29);
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v127);
        GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
        EtwTraceGreLockReleaseSemaphore((__int64)L"pdo.hsemDevLock()", *((_QWORD *)v29 + 8), v128);
        GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)v29 + 8));
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v129);
        GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
        v23 = 1LL;
        v18 = v163;
        v24 = 0xFFFFFFFFLL;
        v130 = (*((unsigned __int8 *)j + 160) >> 2) & 1;
        v174 = 1;
        v178 = v130;
        v22 = 0LL;
        goto LABEL_17;
      }
LABEL_11:
      if ( v16 == 4 )
      {
        if ( v26 >= *((unsigned __int16 *)v15 + 10) )
          goto LABEL_34;
        if ( !IsPrimaryPathInCloneGroup(v15, v26)
          || (v19 = 216LL * v26, *(_DWORD *)((char *)v15 + v19 + 256) < (int)v22) )
        {
          v167 = v23 + v26;
          goto LABEL_96;
        }
        for ( j = gpGraphicsDeviceList; j; j = (wchar_t *)*((_QWORD *)j + 16) )
        {
          if ( (*((_DWORD *)j + 40) & 0x800000) != 0
            && *((_DWORD *)j + 66) == *(_DWORD *)((char *)v15 + v19 + 56)
            && *((_DWORD *)j + 67) == *(_DWORD *)((char *)v15 + v19 + 60)
            && *((_DWORD *)j + 68) == *(_DWORD *)((char *)v15 + v19 + 64) )
          {
            goto LABEL_106;
          }
        }
        goto LABEL_227;
      }
      j = gpGraphicsDeviceList;
      for ( k = (int)v22; j && k != v27; k += v23 )
        j = (wchar_t *)*((_QWORD *)j + 16);
      v27 += v23;
      v177 = v27;
      if ( gbBaseVideo != (_DWORD)v22 && j && (*((_DWORD *)j + 40) & 0x800000) == 0 )
        goto LABEL_30;
LABEL_17:
      if ( v16 == 4 )
      {
        if ( v29 )
        {
          v131 = WdLogNewEntry5_WdAssertion(v19);
          WdLogEvent5_WdAssertion(v131);
          v22 = 0LL;
        }
LABEL_106:
        v23 = 1LL;
        if ( j && (*((_DWORD *)j + 41) & 1) == 0 )
        {
          DisplayDriverNames = DrvGetDisplayDriverNames(j);
          v22 = 0LL;
          v76 = (struct _DRV_NAMES *)DisplayDriverNames;
          if ( !DisplayDriverNames )
            goto LABEL_117;
          v77 = *((unsigned __int16 *)v15 + 10);
          if ( v26 >= (unsigned int)v77 )
          {
            v132 = WdLogNewEntry5_WdAssertion(v77);
            WdLogEvent5_WdAssertion(v132);
          }
          v78 = 216LL * v26;
          if ( !*(_QWORD *)((char *)v15 + v78 + 224) )
          {
            v133 = WdLogNewEntry5_WdAssertion(v77);
            WdLogEvent5_WdAssertion(v133);
          }
          v79 = gdmLogPixels;
          if ( !gdmLogPixels )
          {
            GetDpiSetting_0();
            v79 = (unsigned __int16)Buf2;
            gdmLogPixels = (unsigned __int16)Buf2;
          }
          *(_WORD *)(*(_QWORD *)((char *)v15 + v78 + 224) + 166LL) = v79;
          DriverAccelerationsLevel = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)j);
          DriverCapableOverRide = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)j);
          v29 = hCreateHDEV(
                  (struct tagGRAPHICS_DEVICE *)j,
                  v76,
                  *(struct _devicemodeW **)((char *)v15 + v78 + 224),
                  a3,
                  DriverCapableOverRide,
                  DriverAccelerationsLevel,
                  v171,
                  (v190 >> 2) & 1,
                  1u,
                  &v169);
          Win32FreePool();
          v22 = 0LL;
          if ( v29 )
          {
            v19 = *(unsigned int *)((char *)v15 + v78 + 252);
            v26 = v167;
            *((_DWORD *)v29 + 667) = v19;
LABEL_117:
            if ( v29 )
            {
LABEL_118:
              v23 = 1LL;
              goto LABEL_119;
            }
          }
          gpLastFailedPhysDisp = (__int64)j;
          DrvLogDisplayDriverEvent(2LL);
          v26 = v167;
          v22 = 0LL;
          v23 = 1LL;
        }
        if ( v29 )
          goto LABEL_119;
LABEL_227:
        if ( !IsPrimaryPathInCloneGroup(v15, v26)
          || (v134 = 216LL * v26, *(_DWORD *)((char *)v15 + v134 + 256) < (int)v22) )
        {
          v135 = WdLogNewEntry5_WdAssertion(v134);
          WdLogEvent5_WdAssertion(v135);
          v22 = 0LL;
        }
        v19 = (unsigned __int16)v22;
        if ( (unsigned __int16)v22 >= *((_WORD *)v15 + 10) )
          goto LABEL_118;
        v23 = 1LL;
        v20 = 216LL * v26;
        do
        {
          v18 = 216LL * (unsigned __int16)v19;
          if ( *(_DWORD *)((char *)v15 + v18 + 248) == *(_DWORD *)((char *)v15 + v20 + 248) )
            *(_DWORD *)((char *)v15 + v18 + 256) = -1073741823;
          LOWORD(v19) = v19 + 1;
        }
        while ( (unsigned __int16)v19 < *((_WORD *)v15 + 10) );
LABEL_119:
        v167 = v26 + 1;
        goto LABEL_120;
      }
      if ( !j )
        goto LABEL_34;
      if ( ((unsigned __int8)*((_DWORD *)j + 41) & (unsigned __int8)v23) != 0 )
        goto LABEL_30;
      if ( a6 == -1 )
      {
        PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)j);
        v166 = PruneFlag;
        LODWORD(v22) = 0;
      }
      else
      {
        PruneFlag = v166;
      }
      if ( v29 )
        goto LABEL_121;
      if ( gForceDisconnect != (_DWORD)v22 || v16 == 3 )
        v33 = -1;
      else
        v33 = gProtocolType;
      PrimaryAttachFlags = GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)j, v33, &v178, &v174);
      v22 = 0LL;
      if ( !PrimaryAttachFlags )
        goto LABEL_34;
      if ( ((v16 - 1) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
      {
        if ( v16 == 2 )
        {
          v136 = *((_DWORD *)j + 40);
          if ( (v136 & 8) != 0 )
          {
            if ( !v174 )
              goto LABEL_94;
            v137 = v165 == 0;
          }
          else
          {
            if ( (v136 & 0x2000000) != 0 || v168 )
              goto LABEL_94;
            v137 = gProtocolType == -1;
          }
          if ( v137 )
            goto LABEL_94;
        }
        else
        {
          v138 = WdLogNewEntry5_WdAssertion(v19);
          WdLogEvent5_WdAssertion(v138);
          v22 = 0LL;
          if ( (*((_DWORD *)j + 40) & 8) != 0 || v168 )
            goto LABEL_94;
        }
      }
      else
      {
        if ( !v174 )
        {
          v18 = v163;
          v23 = 1LL;
LABEL_30:
          v10 = a1;
          v25 = v195;
          goto LABEL_31;
        }
        if ( (*((_DWORD *)j + 40) & 8) != 0 )
        {
          v74 = v165;
LABEL_93:
          if ( !v74 )
            goto LABEL_94;
          goto LABEL_138;
        }
        if ( v165 )
        {
          v74 = 0;
          goto LABEL_93;
        }
      }
LABEL_138:
      v90 = DrvGetDisplayDriverNames(j);
      v22 = 0LL;
      v91 = (struct _DRV_NAMES *)v90;
      if ( v90 )
      {
        if ( (*((_DWORD *)j + 40) & 8) != 0 )
        {
          v92 = 4;
          v93 = 0;
          v94 = 0;
        }
        else
        {
          v92 = 1;
          v93 = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)j);
          v94 = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)j);
        }
        if ( a2 )
        {
          v96 = DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)j,
                  &v164,
                  &v172,
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
          Src = v173;
          memset(v173, 0, sizeof(struct _devicemodeW));
          Src->dmSize = 220;
          v96 = DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)j,
                  &v164,
                  &v172,
                  0LL,
                  Src,
                  0,
                  v166,
                  a7,
                  0,
                  a8,
                  0LL);
        }
        if ( v96 == 1073741839 )
        {
          DrvLogDisplayDriverEvent(4LL);
          goto LABEL_146;
        }
        if ( v96 == -1073741776 )
        {
          v139 = *(struct _devicemodeW **)(*((_QWORD *)v12 + 4) + 2616LL);
          if ( v164 && v164 != v173 )
          {
            Win32FreePool();
            v164 = 0LL;
          }
          v96 = DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)j,
                  &v164,
                  &v172,
                  0LL,
                  v139,
                  0,
                  v166,
                  a7,
                  0,
                  a8,
                  0LL);
        }
        if ( v96 < 0 )
        {
          DrvDxgkLogCodePointPacket(58LL, 2LL, 0LL, 0LL);
          v97 = v164;
          v29 = (HDEV)v175;
          if ( (*((_DWORD *)j + 40) & 0x2000000) != 0 )
            gulDriverFailureReason = 4;
        }
        else
        {
LABEL_146:
          v97 = v164;
          v29 = hCreateHDEV((struct tagGRAPHICS_DEVICE *)j, v91, v164, a3, v93, v94, v171, (v190 >> 2) & 1, v92, &v169);
          if ( !v29 && (*((_DWORD *)j + 40) & 0x2000000) != 0 )
            gulDriverFailureReason = 5;
        }
        v98 = a2;
        if ( (*((_DWORD *)j + 40) & 8) == 0 && !a2 )
        {
          if ( v29 )
            goto LABEL_150;
          DrvLogDisplayDriverEvent(4LL);
          if ( v97 )
          {
            if ( v97->dmBitsPerPel == 4 )
              DrvLogDisplayDriverEvent(5LL);
            if ( v97 != v173 )
            {
              Win32FreePool();
              v164 = 0LL;
            }
          }
          v140 = v173;
          memset(v173, 0, sizeof(struct _devicemodeW));
          v140->dmSize = 220;
          v141 = DrvProbeAndCaptureDevmode(
                   (struct tagGRAPHICS_DEVICE *)j,
                   &v164,
                   &v172,
                   0LL,
                   v140,
                   1,
                   v166,
                   a7,
                   0,
                   a8,
                   0LL);
          v97 = v164;
          if ( v141 >= 0 )
          {
            v142 = hCreateHDEV(
                     (struct tagGRAPHICS_DEVICE *)j,
                     v91,
                     v164,
                     a3,
                     v93,
                     v94,
                     v171,
                     (v190 & 4) != 0,
                     1u,
                     &v169);
            v175 = (struct tagSIZE)v142;
            if ( v142 || v97->dmPelsWidth == 640 && v97->dmPelsHeight == 480 && v97->dmBitsPerPel == 4 )
            {
LABEL_276:
              v29 = v142;
            }
            else
            {
              if ( v97 != v173 )
              {
                Win32FreePool();
                v164 = 0LL;
              }
              v143 = v173;
              memset(v173, 0, sizeof(struct _devicemodeW));
              v143->dmSize = 220;
              v144 = *((_DWORD *)j + 40) & 0x800000;
              v143->dmPelsWidth = 640;
              v143->dmPelsHeight = 480;
              v143->dmFields = 1835008;
              v143->dmBitsPerPel = v144 != 0 ? 32 : 4;
              v145 = DrvProbeAndCaptureDevmode(
                       (struct tagGRAPHICS_DEVICE *)j,
                       &v164,
                       &v172,
                       0LL,
                       v143,
                       0,
                       v166,
                       a7,
                       0,
                       a8,
                       0LL);
              v97 = v164;
              if ( v145 >= 0 )
              {
                v142 = hCreateHDEV(
                         (struct tagGRAPHICS_DEVICE *)j,
                         v91,
                         v164,
                         a3,
                         v93,
                         v94,
                         v171,
                         (v190 & 4) != 0,
                         1u,
                         &v169);
                goto LABEL_276;
              }
              v29 = (HDEV)v175;
            }
          }
          if ( v97 )
          {
            dmPelsHeight = v97->dmPelsHeight;
            dmPelsWidth = v97->dmPelsWidth;
            v148 = v29 != 0LL;
          }
          else
          {
            v148 = 2LL;
            dmPelsHeight = v173->dmPelsHeight;
            dmPelsWidth = v173->dmPelsWidth;
          }
          DrvDxgkLogCodePointPacket(26LL, v148, dmPelsWidth, dmPelsHeight);
          v98 = 0LL;
        }
        if ( !v29 && !v98 )
        {
          gpLastFailedPhysDisp = (__int64)j;
          DrvLogDisplayDriverEvent(2LL);
        }
LABEL_150:
        if ( v97 && v97 != v173 )
          Win32FreePool();
        Win32FreePool();
        v22 = 0LL;
        v23 = 1LL;
LABEL_120:
        if ( !v29 )
          goto LABEL_95;
LABEL_121:
        v82 = WdLogNewEntry5_WdTrace(v19, v18, v20);
        WdLogEvent5_WdTrace(v82);
        v22 = 0LL;
        v23 = 1LL;
        v168 = 1;
        if ( v178 )
          *((_DWORD *)j + 40) |= 4u;
        else
          *((_DWORD *)j + 40) &= ~4u;
        if ( !v169 )
        {
          if ( a5 )
          {
            v83 = *((_DWORD *)a5 + 5);
            if ( v83 )
            {
              v84 = (HDEV *)((char *)a5 + 32);
              v20 = v83;
              do
              {
                v85 = *v84;
                v84 += 4;
                v86 = v169;
                if ( j == *((wchar_t **)v85 + 325) )
                  v86 = v85;
                v169 = v86;
                --v20;
              }
              while ( v20 );
            }
          }
        }
        *(_QWORD *)&v12[8 * v12[5] + 8] = v29;
        *(_QWORD *)&v12[8 * v12[5] + 10] = v169;
        v19 = v12[5];
        if ( (int)v19 + 2 < (unsigned int)v19 )
          goto LABEL_95;
        v87 = v12;
        v12[5] = v19 + 1;
        v19 = (unsigned __int64)(unsigned int)(v19 + 2) << 6;
        if ( v19 > 0xFFFFFFFF )
        {
          v12 = 0LL;
        }
        else
        {
          v88 = (unsigned int *)PALLOCMEM2(v19, 1936876615LL, 1);
          v22 = 0LL;
          v12 = v88;
          v23 = 1LL;
        }
        if ( !v12 )
        {
          v10 = a1;
          v25 = -1073741670;
          v195 = -1073741670;
          v12 = v87;
          goto LABEL_97;
        }
        memmove(v12, v87, (unsigned __int64)v87[5] << 6);
        Win32FreePool();
        v22 = 0LL;
      }
LABEL_94:
      v23 = 1LL;
LABEL_95:
      v10 = a1;
LABEL_96:
      v25 = v195;
LABEL_97:
      v18 = v163;
LABEL_31:
      v15 = a10;
      v27 = v177;
      if ( !(_DWORD)v18 )
      {
        v28 = v25 < 0;
        goto LABEL_289;
      }
      v26 = v167;
      v24 = 0xFFFFFFFFLL;
      v16 = v182[0];
      v19 = v179;
      v20 = (__int64)v170;
    }
  }
LABEL_89:
  v72 = WdLogNewEntry5_WdTrace(v19, v18, v20);
  *(_QWORD *)(v72 + 24) = v12;
  WdLogEvent5_WdTrace(v72);
  return (struct _MDEV *)v12;
}
