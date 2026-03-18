/*
 * XREFs of DrvSetDisplayConfig @ 0x1C0063200
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C005D2A0 (xxxUserSetDisplayConfig.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0061D38 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x1C0062064 (DrvChangeDisplaySettings.c)
 *     InitVideo @ 0x1C0089318 (InitVideo.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00898A4 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C005FE98 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAU_D3DKMT_GETPATHSMODALITY@.c)
 *     ?CreatePathPersistentMonitorsIfNeeded@@YAJIPEAU_D3DKMT_GETPATHSMODALITY@@PEAG@Z @ 0x1C00615E0 (-CreatePathPersistentMonitorsIfNeeded@@YAJIPEAU_D3DKMT_GETPATHSMODALITY@@PEAG@Z.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C00645DC (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0064634 (-FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C006465C (GetPathsModality.c)
 *     ?AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0064748 (-AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C0064794 (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C00647D8 (--0AUTO_TGO@@IEAA@XZ.c)
 *     LogDiagSDC @ 0x1C0064918 (LogDiagSDC.c)
 *     ApplyPathsModality @ 0x1C0065594 (ApplyPathsModality.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1C006E538 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C007ED88 (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C0081838 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00882D0 (DrvDxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00C5754 (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@PEAPEAU_D3DKMT_GETPATHSM.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUDISPLAYCONFIG_MODE_INFO@@IHPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00C5AEC (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUD.c)
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEAH@Z @ 0x1C00C6050 (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAU_D3DKMT_P.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00C60C8 (-ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_IN.c)
 *     ?ConvertPreferredScalingToAdapterDefault@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00C627C (-ConvertPreferredScalingToAdapterDefault@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAU_D3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C00C6AE0 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAU_D3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00C6D40 (-DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?ReplacePreferredScaling@@YAJPEBU_D3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1C00C7D4C (-ReplacePreferredScaling@@YAJPEBU_D3DKMT_GETPATHSMODALITY@@PEAU1@@Z.c)
 */

__int64 __fastcall DrvSetDisplayConfig(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        struct DISPLAYCONFIG_MODE_INFO *a4,
        int a5,
        unsigned int a6,
        void *a7,
        char a8,
        struct _DISPLAYCONFIG_CDS_REQUEST *a9,
        struct _MDEV *a10,
        struct _MDEV **a11,
        _DWORD *a12,
        unsigned int *a13,
        char *a14,
        _BYTE *a15,
        __int64 a16)
{
  int v19; // r14d
  __int64 v20; // rax
  unsigned int v21; // r12d
  char v22; // bl
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _MDEV **v27; // r13
  __int64 v28; // rdi
  bool v29; // zf
  __int64 v30; // rax
  char v31; // r15
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  struct _D3DKMT_GETPATHSMODALITY *v40; // r9
  struct _MDEV *v41; // r12
  unsigned int v42; // esi
  struct _MDEV *v43; // rbx
  bool v44; // bl
  char v45; // si
  struct _MDEV *v46; // rbx
  struct _DISPLAYCONFIG_CDS_REQUEST *v47; // rax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rax
  unsigned int v53; // r13d
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned int v56; // edi
  const struct _RETRY_MODE *v57; // r14
  int v58; // eax
  __int64 v59; // rax
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // r8
  char v63; // r14
  unsigned __int16 v64; // dx
  __int64 v65; // rax
  __int64 v66; // rcx
  unsigned int v67; // r12d
  unsigned int v68; // r13d
  char *v69; // r14
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  struct _D3DKMT_GETPATHSMODALITY *v73; // r9
  __int64 v74; // rax
  __int64 v75; // rax
  int v76; // r15d
  __int64 v77; // rax
  struct _D3DKMT_GETPATHSMODALITY *v78; // rax
  struct _D3DKMT_GETPATHSMODALITY *v79; // r14
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rax
  int v85; // eax
  __int64 v86; // rax
  int v87; // eax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  int v93; // edi
  __int64 v94; // rcx
  int v95; // eax
  __int64 v96; // rax
  char v97; // r13
  unsigned int v98; // r15d
  wchar_t *v99; // rcx
  unsigned int v100; // r12d
  _DWORD *v101; // rsi
  _DWORD *PoolWithTag; // rax
  wchar_t *v103; // rdx
  unsigned int v104; // r8d
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 *v107; // r14
  __int64 v108; // rsi
  int v109; // r8d
  int v110; // eax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  int v114; // eax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  unsigned int v121; // eax
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // rax
  int v125; // eax
  char v126; // al
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rax
  int v130; // eax
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rax
  unsigned int v134; // ebx
  _BOOL8 v135; // rcx
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // rax
  int v141; // [rsp+30h] [rbp-D8h]
  int v142; // [rsp+38h] [rbp-D0h]
  unsigned __int8 v143; // [rsp+58h] [rbp-B0h] BYREF
  int v144; // [rsp+5Ch] [rbp-ACh] BYREF
  bool v145; // [rsp+60h] [rbp-A8h]
  char v146; // [rsp+61h] [rbp-A7h]
  char v147; // [rsp+62h] [rbp-A6h]
  char v148; // [rsp+63h] [rbp-A5h] BYREF
  int v149; // [rsp+64h] [rbp-A4h]
  bool v150; // [rsp+68h] [rbp-A0h]
  char v151; // [rsp+69h] [rbp-9Fh]
  int v152; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v153[2]; // [rsp+70h] [rbp-98h] BYREF
  struct _MDEV *v154; // [rsp+78h] [rbp-90h]
  unsigned int v155; // [rsp+80h] [rbp-88h]
  unsigned int v156; // [rsp+84h] [rbp-84h]
  unsigned __int16 v157; // [rsp+88h] [rbp-80h] BYREF
  __int64 v158; // [rsp+90h] [rbp-78h]
  _QWORD v159[6]; // [rsp+98h] [rbp-70h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v160[2]; // [rsp+C8h] [rbp-40h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v161; // [rsp+D8h] [rbp-30h] BYREF
  char v162; // [rsp+E0h] [rbp-28h]
  int v163; // [rsp+F8h] [rbp-10h]
  void *v164; // [rsp+100h] [rbp-8h] BYREF
  __int64 v165; // [rsp+108h] [rbp+0h]
  void *retaddr; // [rsp+160h] [rbp+58h]

  v152 = -5;
  v153[1] = 0;
  v147 = 0;
  v150 = gbBaseVideo != 0;
  v143 = 0;
  v148 = 0;
  v144 = 0;
  v149 = 0;
  v156 = 0;
  v155 = gbBaseVideo != 0 ? 3 : 0;
  v28 = a2;
  v19 = 0;
  v20 = WdLogNewEntry5_WdEvent(0LL, a2);
  v21 = a5;
  *(_QWORD *)(v20 + 24) = (unsigned int)a5;
  WdLogEvent5_WdEvent(v20);
  v158 = MEMORY[0xFFFFF78000000320];
  v22 = a6;
  v165 = v158 * KeQueryTimeIncrement();
  DisplayScenarioJournalBegin((unsigned int)a5, a6, (unsigned __int16)gProtocolType);
  DisplayScenarioJournalSetSDCPathsAndModes(72 * a1, a1, v28, a3 << 6, a3, a4);
  v164 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v164, 4LL);
  v27 = a11;
  LODWORD(v28) = 0;
  v29 = gOldModeChange == 0;
  *a11 = 0LL;
  if ( !v29 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
    WdLogEvent5_WdAssertion(v30);
  }
  if ( (a5 & 0x1000) != 0 && a8 )
    WdDiagNotifyUser(40LL, 3LL, 0LL, 0LL);
  v31 = 1;
  if ( (a6 & 2) == 0 || (v151 = 1, (a5 & 0x88F) != 0x88F) )
    v151 = 0;
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v159);
  v159[0] = &`DrvSetDisplayConfig'::`2'::_AUTO::`vftable';
  *(_OWORD *)v160 = 0LL;
  v161 = 0LL;
  v162 = 0;
  if ( !gProtocolType && (a6 & 1) == 0 )
  {
    if ( (a5 & 0x40000000) != 0 )
    {
      if ( gbBaseVideo )
      {
        v36 = WdLogNewEntry5_WdAssertion(v33, v32, v34, v35);
        WdLogEvent5_WdAssertion(v36);
      }
      LODWORD(v28) = GetPathsModality(0LL, v160, 15LL, 0LL);
      if ( (int)v28 < 0 )
      {
        v41 = a10;
        v42 = 2;
        v154 = a10;
LABEL_16:
        v144 = v42;
        v43 = v41;
LABEL_243:
        if ( (int)v28 < 0 )
          goto LABEL_252;
LABEL_262:
        v126 = v147;
        goto LABEL_263;
      }
      v38 = *((_DWORD *)v160[0] + 8) & 0xF;
      if ( (_DWORD)v38 == 1 || (_DWORD)v38 == 8 )
      {
        v46 = a10;
        v42 = 25;
        v144 = 25;
        LODWORD(v28) = -1073741637;
        goto LABEL_256;
      }
      v29 = (_DWORD)v38 == 4;
      LOBYTE(v38) = 1;
      v146 = 1;
      v44 = v29;
      v45 = 1;
      LOBYTE(v37) = v29;
      ((void (__fastcall *)(__int64, __int64))qword_1C011B700)(v38, v37);
      if ( v44 )
      {
        LODWORD(v28) = 0;
        v143 = 1;
        v42 = 26;
LABEL_272:
        FreePathsModality(v160[1]);
        v160[1] = 0LL;
        if ( (int)GetPathsModality(0LL, &v160[1], 64LL, 0LL) >= 0 )
          DisplayScenarioJournalSetActualPathModality(
            216 * (unsigned int)*((unsigned __int16 *)v160[1] + 10),
            *((unsigned __int16 *)v160[1] + 10),
            (char *)v160[1] + 48);
        if ( *v27 )
        {
          v131 = *((_QWORD *)*v27 + 4);
          if ( v131 )
          {
            v132 = *(_QWORD *)(v131 + 2600);
            if ( ((v132 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
              DisplayScenarioJounralSetTSDDDState((*(_DWORD *)(v132 + 160) & 0x2000000) != 0);
          }
        }
        goto LABEL_280;
      }
      v22 = a6;
      v21 = 132;
      a5 = 132;
      goto LABEL_41;
    }
    if ( a5 < 0 )
    {
      v146 = 0;
      v45 = 0;
      if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C011B700)(0LL, 0LL) )
      {
        v143 = 1;
        v42 = 18;
        goto LABEL_272;
      }
      v21 = 2191;
      goto LABEL_32;
    }
    if ( (a5 & 0xF) == 0xF )
    {
      if ( (a6 & 0x20) == 0 || (v47 = a9, !*((_DWORD *)a9 + 5)) )
      {
        v146 = ((__int64 (*)(void))qword_1C011B708)();
        v45 = v146;
        if ( !v146 )
        {
LABEL_41:
          LODWORD(v28) = ((__int64 (*)(void))qword_1C011B4D0)();
          if ( (int)v28 < 0 )
          {
            v43 = a10;
            v42 = 12;
            v144 = 12;
            v19 = 6;
            v154 = a10;
            goto LABEL_243;
          }
          v162 = 1;
          v163 = v21 & 0x80;
          if ( (v21 & 0x80) != 0 )
          {
            v48 = 1LL;
            if ( !v45 && (v21 & 0xF) != 0 && (v22 & 0x20) == 0 )
              v48 = 3LL;
            v49 = ((__int64 (__fastcall *)(__int64))qword_1C011B4F0)(v48);
            v28 = v49;
            if ( v49 < 0 )
            {
              v50 = WdLogNewEntry5_WdEvent(v38, v37);
              *(_QWORD *)(v50 + 24) = v28;
              WdLogEvent5_WdEvent(v50);
              DrvDxgkLogCodePointPacket(4LL, (unsigned int)v28, 0LL, 0LL);
              LODWORD(v28) = 0;
            }
          }
          v42 = v144;
          v154 = a10;
          LODWORD(v51) = v158;
          v145 = (v21 & 0x240) == 512;
          while ( 1 )
          {
            v52 = WdLogNewEntry5_WdEvent(v38, v37);
            *(_QWORD *)(v52 + 24) = (unsigned int)v153[1];
            *(_QWORD *)(v52 + 32) = (int)v28;
            WdLogEvent5_WdEvent(v52);
            v53 = 0;
            v153[0] = 0;
            v148 = 0;
            v143 = 0;
            FreePathsModality(v160[0]);
            FreePathsModality(v160[1]);
            v160[1] = 0LL;
            v160[0] = 0LL;
            if ( v150 )
            {
              if ( (v21 & 0xF) != 0xF )
              {
                v54 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
                WdLogEvent5_WdAssertion(v54);
              }
              if ( v145 )
              {
                v55 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
                WdLogEvent5_WdAssertion(v55);
              }
              if ( v155 >= 6 )
              {
                if ( (int)v28 >= 0 )
                {
                  v123 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
                  WdLogEvent5_WdAssertion(v123);
LABEL_242:
                  v27 = a11;
                  v43 = v154;
                  goto LABEL_243;
                }
                v43 = v154;
                v27 = a11;
LABEL_252:
                v126 = v147;
                if ( v147 )
                {
                  v42 = 29;
                  v152 = 0;
                  v144 = 29;
                  LODWORD(v28) = 0;
                  v19 = 9;
                }
                if ( (int)v28 < 0 )
                {
                  v46 = v154;
                  goto LABEL_256;
                }
LABEL_263:
                if ( v126 && !*v27 )
                {
                  if ( !v43 )
                  {
                    v129 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
                    WdLogEvent5_WdAssertion(v129);
                  }
                  v130 = v152;
                  v29 = v152 == 2;
                  *v27 = v43;
                  if ( v29 )
                    v130 = 0;
                  v152 = v130;
                }
LABEL_270:
                v21 = a5;
                goto LABEL_271;
              }
              v56 = v155;
              v57 = (const struct _RETRY_MODE *)((char *)&unk_1C0102090 + 12 * v155);
              DrvDxgkLogCodePointPacket(75LL, *((unsigned int *)v57 + 1), *((unsigned int *)v57 + 2), 0LL);
              if ( *(_BYTE *)v57 )
              {
                v156 = 0;
                v155 = v56 + 1;
                LODWORD(v28) = GetPathsModality(0LL, v160, 15LL, 0LL);
              }
              else
              {
                v58 = DrvCreatePathModalityFromAllPaths(&v161, v156++, v160);
                LODWORD(v28) = v58;
                if ( v58 >= 0 )
                {
                  if ( *((_WORD *)v160[0] + 10) != 1 )
                  {
                    v59 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
                    WdLogEvent5_WdAssertion(v59);
                  }
                }
                else
                {
                  ++v155;
                  v156 = 0;
                }
              }
              if ( (int)v28 < 0 )
              {
                v42 = 2;
                goto LABEL_65;
              }
              v60 = DrvFunctionalizeBaseVidMode(v57, v160[0]);
              v28 = v60;
              if ( v60 >= 0 )
                goto LABEL_152;
              v61 = WdLogNewEntry5_WdError();
              *(_QWORD *)(v61 + 24) = v28;
              WdLogEvent5_WdError(v61);
              v42 = 2;
            }
            else
            {
              v62 = v21 & 0xF;
              if ( (v21 & 0xF) != 0 )
              {
                if ( (a6 & 0x20) != 0 && *((_QWORD *)a9 + 4) )
                {
                  v63 = 1;
                  v64 = 1;
                }
                else
                {
                  v63 = 0;
                  v64 = 0;
                }
                if ( v63 && !*((_DWORD *)a9 + 5) )
                  LODWORD(v62) = 64;
                LODWORD(v28) = GetPathsModality(0LL, v160, ((a6 & 0x20) != 0 ? 0x9000 : 0) | (unsigned int)v62, v64);
                if ( (int)v28 >= 0 )
                {
                  if ( !*((_WORD *)v160[0] + 10) )
                  {
                    v65 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
                    WdLogEvent5_WdAssertion(v65);
                  }
                  if ( v146 || (v145 = 1, (v21 & 0x40) != 0) )
                    v145 = 0;
                  if ( v63 )
                  {
                    if ( !*((_DWORD *)a9 + 5) || (v145 = 1, !*((_DWORD *)a9 + 6)) )
                      v145 = 0;
                    LODWORD(v28) = DrvValidateAndApplyDevMode(a9, v160, v39, (__int64)v40);
                    if ( (int)v28 < 0 )
                    {
                      v42 = 2;
                      v19 = *((_DWORD *)a9 + 13);
                      v152 = *((_DWORD *)a9 + 12);
                      v149 = v19;
                      if ( (_DWORD)v28 == -1073741266 )
                        v42 = 23;
                      goto LABEL_231;
                    }
                    if ( *((_DWORD *)a9 + 5) )
                    {
                      v53 = 1;
                      v153[0] = 1;
                    }
                  }
                  v19 = 10;
                  v149 = 10;
                  goto LABEL_153;
                }
                v42 = 2;
LABEL_79:
                v19 = 7;
                goto LABEL_80;
              }
              if ( (v21 & 0x10) != 0 )
              {
                LODWORD(v28) = AllocatePathModalityForDisplayConfig(a1, (struct DISPLAYCONFIG_PATH_INFO *)a2, v160);
                if ( (int)v28 < 0 )
                {
                  v42 = 3;
                  v144 = 3;
                  goto LABEL_232;
                }
                LODWORD(v28) = ConvertDisplayConfigToPathModality(
                                 a1,
                                 (struct DISPLAYCONFIG_PATH_INFO *)a2,
                                 a3,
                                 a4,
                                 v21,
                                 v160[0],
                                 0LL);
                if ( (int)v28 < 0 )
                {
                  v42 = 4;
                  goto LABEL_231;
                }
                v66 = 47LL;
                if ( (v21 & 0x2000) != 0 )
                  v66 = 8239LL;
                LODWORD(v28) = ((__int64 (__fastcall *)(__int64, struct _D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C011B438)(
                                 v66,
                                 v160[0],
                                 0LL);
                if ( (int)v28 < 0 )
                {
                  v42 = 5;
                  goto LABEL_231;
                }
                v145 = !v146 && (v21 & 0x40) == 0;
                goto LABEL_153;
              }
              if ( (v21 & 0x20) == 0 )
              {
                v120 = WdLogNewEntry5_WdAssertion(v38, v37, v62, v40);
                *(_QWORD *)(v120 + 24) = v21;
                WdLogEvent5_WdAssertion(v120);
                v42 = 9;
                goto LABEL_230;
              }
              v153[0] = 0;
              if ( (a6 & 8) != 0 )
              {
                LODWORD(v28) = GetPathsModality(0LL, v160, 64LL, 0LL);
                if ( (int)v28 < 0 )
                {
                  v42 = 32;
                  goto LABEL_231;
                }
                v40 = v160[0];
                v67 = 0;
                v68 = *((unsigned __int16 *)v160[0] + 10);
                if ( *((_WORD *)v160[0] + 10) )
                {
                  while ( 1 )
                  {
                    v69 = (char *)v40 + 216 * v67;
                    if ( (unsigned __int8)operator==(v69 + 56, a2)
                      && *((_DWORD *)v69 + 16) == *(_DWORD *)(a2 + 8)
                      && *((_DWORD *)v69 + 17) == *(_DWORD *)(a2 + 28) )
                    {
                      if ( (*((_DWORD *)v69 + 12) & 0x800) == 0 )
                      {
                        v74 = WdLogNewEntry5_WdAssertion(v71, v70, v72, v73);
                        WdLogEvent5_WdAssertion(v74);
                        v73 = v160[0];
                      }
                      v29 = (*((_DWORD *)v69 + 12) & 0x40000) == 0;
                      v51 = *((_QWORD *)v69 + 23);
                      v158 = v51;
                      if ( v29 )
                      {
                        v75 = WdLogNewEntry5_WdAssertion(v71, v70, v72, v73);
                        WdLogEvent5_WdAssertion(v75);
                        v73 = v160[0];
                      }
                      v76 = *((_DWORD *)v69 + 62);
                      v68 = v67;
                      LODWORD(v28) = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
                                       (struct DISPLAYCONFIG_PATH_INFO *)a2,
                                       v67,
                                       0xFFFFFFFF,
                                       a3,
                                       a4,
                                       a5,
                                       0,
                                       v73,
                                       v153);
                      if ( (int)v28 < 0 )
                      {
                        v42 = 34;
                        v31 = 1;
                        goto LABEL_65;
                      }
                      *((_DWORD *)v69 + 12) |= 0x40000u;
                      *((_DWORD *)v69 + 62) = v76;
                      v31 = 1;
                    }
                    else
                    {
                      LODWORD(v28) = ConvertDisplayConfigScalingToPathModalityForPath(
                                       (struct DISPLAYCONFIG_PATH_INFO *)a2,
                                       (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v69 + 48),
                                       v153);
                      if ( (int)v28 < 0 )
                      {
                        v42 = 35;
                        goto LABEL_65;
                      }
                    }
                    v40 = v160[0];
                    if ( ++v67 >= *((unsigned __int16 *)v160[0] + 10) )
                    {
                      v19 = v149;
                      break;
                    }
                  }
                }
                if ( v68 >= *((unsigned __int16 *)v40 + 10)
                  || (v38 = 216LL * v68, __PAIR64__(HIDWORD(v158), v51) != *(_QWORD *)((char *)v40 + v38 + 184)) )
                {
                  LODWORD(v28) = -1073741811;
                  v42 = 33;
                  goto LABEL_231;
                }
                v21 = a5;
              }
              else
              {
                LODWORD(v28) = AllocatePathModalityForDisplayConfig(a1, (struct DISPLAYCONFIG_PATH_INFO *)a2, v160);
                if ( (int)v28 < 0 )
                {
                  v42 = 6;
                  goto LABEL_231;
                }
                LODWORD(v28) = ConvertDisplayConfigToPathModality(
                                 a1,
                                 (struct DISPLAYCONFIG_PATH_INFO *)a2,
                                 a3,
                                 a4,
                                 v21,
                                 v160[0],
                                 v153);
                if ( (int)v28 < 0 )
                {
                  v42 = 7;
                  goto LABEL_231;
                }
                v40 = v160[0];
              }
              if ( !v153[0] )
                goto LABEL_149;
              if ( !*((_WORD *)v40 + 10) )
              {
                v77 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
                WdLogEvent5_WdAssertion(v77);
                v40 = v160[0];
              }
              v78 = AllocPathsModality(*((_WORD *)v40 + 10));
              v79 = v78;
              if ( (int)((__int64 (__fastcall *)(struct _D3DKMT_GETPATHSMODALITY *, struct _D3DKMT_GETPATHSMODALITY *))qword_1C011B860)(
                          v78,
                          v160[0]) < 0 )
              {
                v84 = WdLogNewEntry5_WdAssertion(v81, v80, v82, v83);
                WdLogEvent5_WdAssertion(v84);
              }
              if ( (int)((__int64 (__fastcall *)(__int64, struct _D3DKMT_GETPATHSMODALITY *))qword_1C011B438)(47LL, v79) < 0 )
              {
                ConvertPreferredScalingToAdapterDefault(v160[0]);
LABEL_148:
                FreePathsModality(v79);
                v40 = v160[0];
LABEL_149:
                LODWORD(v28) = ((__int64 (__fastcall *)(__int64, struct _D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C011B438)(
                                 256LL,
                                 v40,
                                 0LL);
                if ( (int)v28 < 0 )
                {
                  v42 = 8;
LABEL_65:
                  v19 = v149;
                  goto LABEL_231;
                }
                v53 = 1;
                v153[0] = 1;
LABEL_152:
                v19 = v149;
LABEL_153:
                if ( (v21 & 0x800) != 0 )
                {
                  v85 = CreatePathPersistentMonitorsIfNeeded(v38, v160[0], &v157);
                  v28 = v85;
                  if ( v85 < 0 )
                  {
                    v86 = WdLogNewEntry5_WdError();
                    *(_QWORD *)(v86 + 24) = v28;
                    WdLogEvent5_WdError(v86);
                    v42 = 10;
                    goto LABEL_231;
                  }
                  v87 = ((__int64 (__fastcall *)(__int64, struct _D3DKMT_GETPATHSMODALITY *))qword_1C011B458)(
                          0x80000000LL,
                          v160[0]);
                  v28 = v87;
                  if ( v87 == -1073741266 )
                  {
                    v90 = WdLogNewEntry5_WdEvent(v89, v88);
                    *(_QWORD *)(v90 + 24) = (unsigned int)v153[1];
                    *(_QWORD *)(v90 + 32) = -1073741266LL;
                    WdLogEvent5_WdEvent(v90);
                    v42 = 23;
                    v144 = 23;
                    goto LABEL_232;
                  }
                  if ( v87 < 0 )
                  {
                    v91 = WdLogNewEntry5_WdError();
                    *(_QWORD *)(v91 + 24) = v28;
                    WdLogEvent5_WdError(v91);
                    v42 = 22;
                    goto LABEL_231;
                  }
                  if ( v157 )
                  {
                    v92 = WdLogNewEntry5_WdWarning();
                    *(_QWORD *)(v92 + 24) = (unsigned int)v153[1];
                    *(_QWORD *)(v92 + 32) = v28;
                    WdLogEvent5_WdWarning(v92);
                    LODWORD(v28) = -1073741266;
                    goto LABEL_232;
                  }
                }
                if ( (a6 & 0x20) != 0 && (!*((_QWORD *)a9 + 4) || *((_DWORD *)a9 + 2)) )
                  v93 = 0x20000;
                else
                  v93 = 0;
                v94 = v93 | GetCcdRawmodeFlag();
                LODWORD(v94) = v94 | 0x8000;
                v95 = ((__int64 (__fastcall *)(__int64, struct _D3DKMT_GETPATHSMODALITY *))qword_1C011B440)(
                        v94,
                        v160[0]);
                v28 = v95;
                if ( v95 < 0 )
                {
                  v96 = WdLogNewEntry5_WdEvent(v38, v37);
                  *(struct _D3DKMT_GETPATHSMODALITY **)(v96 + 24) = v160[0];
                  *(_QWORD *)(v96 + 32) = v28;
                  WdLogEvent5_WdEvent(v96);
                  v42 = 11;
                  v19 = 7;
LABEL_169:
                  v149 = v19;
                  goto LABEL_231;
                }
                if ( v163 )
                {
                  v97 = 0;
                  LODWORD(v28) = GetPathsModality(0LL, &v160[1], 1048640LL, 0LL);
                  if ( (int)v28 < 0 )
                  {
                    v42 = 13;
                    goto LABEL_79;
                  }
                  DisplayScenarioJournalSetOriginalPathModality(
                    *((unsigned __int16 *)v160[1] + 10),
                    (char *)v160[1] + 48);
                  v98 = 0;
                  if ( (v21 & 0x1000) != 0 )
                    v98 = 0x10000;
                  if ( (a6 & 0x10) != 0 )
                    v98 |= 0x400000u;
                  if ( (v21 & 0x1100) != 0 )
                  {
                    v97 = 1;
                    v98 |= 0x4000u;
                  }
                  if ( v98 )
                  {
                    LODWORD(v28) = ((__int64 (__fastcall *)(_QWORD, struct _D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C011B438)(
                                     v98,
                                     v160[0],
                                     0LL);
                    if ( (int)v28 < 0 )
                    {
                      v42 = 14;
                      v31 = 1;
                      goto LABEL_231;
                    }
                  }
                  v99 = gpGraphicsDeviceList;
                  v100 = 0;
                  while ( v99 )
                  {
                    if ( (*((_DWORD *)v99 + 40) & 0x800000) != 0 )
                      ++v100;
                    v99 = (wchar_t *)*((_QWORD *)v99 + 16);
                  }
                  v101 = 0LL;
                  if ( v100 )
                  {
                    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 72LL * v100, 0x7774656Cu);
                    v101 = PoolWithTag;
                    if ( PoolWithTag )
                    {
                      memset(PoolWithTag, 0, 72LL * v100);
                      v103 = gpGraphicsDeviceList;
                      v104 = 0;
                      if ( gpGraphicsDeviceList )
                      {
                        do
                        {
                          if ( (*((_DWORD *)v103 + 40) & 0x800000) != 0 )
                          {
                            v105 = v104++;
                            v106 = 9 * v105;
                            v101[2 * v106] = *((_DWORD *)v103 + 66);
                            v101[2 * v106 + 1] = *((_DWORD *)v103 + 67);
                            v101[2 * v106 + 2] = *((_DWORD *)v103 + 68);
                          }
                          v103 = (wchar_t *)*((_QWORD *)v103 + 16);
                        }
                        while ( v103 );
                        LODWORD(v51) = v158;
                      }
                    }
                  }
                  DisplayScenarioJournalSetExpectedPathModality(
                    216 * (unsigned int)*((unsigned __int16 *)v160[0] + 10),
                    *((unsigned __int16 *)v160[0] + 10),
                    (char *)v160[0] + 48,
                    v100,
                    v101);
                  v107 = (__int64 *)a11;
                  v108 = (__int64)v154;
                  LOBYTE(v109) = v97;
                  v110 = ApplyPathsModality(v160[0], v98, v109, (_DWORD)a7, (__int64)v154, (__int64)&v148, (__int64)a11);
                  v152 = v110;
                  v31 = 1;
                  if ( v110 < 0 || v110 == 1 )
                  {
                    v42 = 16;
                    LODWORD(v28) = -1073741823;
                    v19 = 5;
                    goto LABEL_169;
                  }
                  if ( v148 )
                  {
                    v111 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
                    WdLogEvent5_WdAssertion(v111);
                  }
                  if ( v152 == 2 )
                  {
                    if ( v97 || *a11 )
                    {
                      v112 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
                      WdLogEvent5_WdAssertion(v112);
                    }
                    v143 = 1;
                  }
                  else
                  {
                    if ( !*a11 )
                    {
                      v113 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
                      WdLogEvent5_WdAssertion(v113);
                    }
                    v108 = 0LL;
                    v154 = 0LL;
                  }
                  LOBYTE(v21) = a5;
                  v53 = v153[0];
                }
                else
                {
                  if ( (v21 & 0x40) == 0 )
                  {
                    v119 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
                    *(_QWORD *)(v119 + 24) = v21;
                    WdLogEvent5_WdAssertion(v119);
                    v42 = 21;
LABEL_230:
                    LODWORD(v28) = -1073741811;
                    goto LABEL_231;
                  }
                  v108 = (__int64)v154;
                  v107 = (__int64 *)a11;
                  v152 = 0;
                }
                if ( v145 )
                {
                  v114 = ((__int64 (__fastcall *)(_QWORD, struct _D3DKMT_GETPATHSMODALITY *))qword_1C011B458)(
                           v53,
                           v160[0]);
                  v28 = v114;
                  if ( !a8 )
                  {
                    if ( v114 < 0 )
                    {
                      v115 = WdLogNewEntry5_WdError();
                      *(_QWORD *)(v115 + 24) = v28;
                      WdLogEvent5_WdError(v115);
                      LODWORD(v28) = 0;
                    }
                    goto LABEL_225;
                  }
                  if ( v114 == -1073741266 )
                  {
                    if ( (v21 & 0x10) != 0 )
                    {
                      v116 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
                      WdLogEvent5_WdAssertion(v116);
                    }
                    v117 = WdLogNewEntry5_WdEvent(v38, v37);
                    *(_QWORD *)(v117 + 24) = (unsigned int)v153[1];
                    *(_QWORD *)(v117 + 32) = -1073741266LL;
                    WdLogEvent5_WdEvent(v117);
                    if ( !v143 )
                    {
                      if ( v108 )
                      {
                        v118 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
                        WdLogEvent5_WdAssertion(v118);
                      }
                      v154 = (struct _MDEV *)*v107;
                      *v107 = 0LL;
                      v147 = 1;
                    }
                    v42 = 24;
                    v19 = 9;
                    goto LABEL_80;
                  }
                  if ( v114 < 0 )
                  {
                    v42 = 29;
                    LODWORD(v28) = 0;
                    v19 = 9;
                    v149 = 9;
                    goto LABEL_231;
                  }
LABEL_225:
                  v42 = 18;
                }
                else
                {
                  if ( (int)v28 >= 0 )
                    goto LABEL_225;
                  v42 = 17;
                }
                v19 = ((int)v28 >= 0) + 9;
LABEL_80:
                v149 = v19;
                goto LABEL_231;
              }
              LODWORD(v28) = ReplacePreferredScaling(v79, v160[0]);
              if ( (int)v28 >= 0 )
                goto LABEL_148;
              FreePathsModality(v79);
              v42 = 20;
            }
            v19 = v149;
LABEL_231:
            v144 = v42;
LABEL_232:
            v121 = ++v153[1];
            if ( (_DWORD)v28 == -1073741266 )
            {
              if ( !v150 && v121 < 4 )
              {
                v122 = 3221226030LL;
                goto LABEL_239;
              }
            }
            else if ( (int)v28 >= 0 )
            {
              v43 = v154;
              v27 = a11;
              goto LABEL_262;
            }
            if ( !v151 )
              goto LABEL_242;
            v150 = 1;
            v122 = (unsigned int)v28;
            v145 = 0;
LABEL_239:
            DisplayScenarioJournalRetry(v122);
            v21 = a5;
          }
        }
        v21 = a5 & 0xFFFFFFF0 | 4;
LABEL_32:
        a5 = v21;
        goto LABEL_41;
      }
    }
    else
    {
      v47 = a9;
    }
    if ( (a5 & 0x200) != 0 || (a6 & 0x20) != 0 && *((_DWORD *)v47 + 5) || (a5 & 0x1F) != 0 && (a5 & 0x40) == 0 )
    {
      v146 = 0;
      v45 = 0;
      ((void (__fastcall *)(_QWORD, _QWORD))qword_1C011B700)(0LL, 0LL);
    }
    else
    {
      v45 = ((__int64 (*)(void))qword_1C011B708)();
      v146 = v45;
    }
    goto LABEL_41;
  }
  if ( (a6 & 0x20) != 0 )
  {
    v124 = WdLogNewEntry5_WdAssertion(v33, v32, v34, v35);
    WdLogEvent5_WdAssertion(v124);
  }
  v41 = a10;
  v154 = a10;
  v125 = DrvChangeDisplayFallback(
           a7,
           BYTE1(a5) & 1,
           (a6 & 1) != 0,
           a10,
           a11,
           (enum _DXGK_DIAG_SDC_STAGE *)&v144,
           &v143,
           &v152);
  v42 = v144;
  LODWORD(v28) = v125;
  if ( v125 >= 0 )
  {
    if ( (a6 & 1) != 0 )
      v42 = 30;
    goto LABEL_16;
  }
  v46 = a10;
LABEL_256:
  if ( !v151 )
    goto LABEL_270;
  if ( a8 )
  {
    v127 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
    WdLogEvent5_WdAssertion(v127);
  }
  v21 = a5;
  LODWORD(v28) = DrvChangeDisplayFallback(
                   a7,
                   BYTE1(a5) & 1,
                   1u,
                   v46,
                   v27,
                   (enum _DXGK_DIAG_SDC_STAGE *)&v144,
                   &v143,
                   &v152);
  if ( (int)v28 < 0 )
  {
    v133 = WdLogNewEntry5_WdAssertion(v128, v37, v39, v40);
    WdLogEvent5_WdAssertion(v133);
    v42 = v144;
  }
  else
  {
    v42 = 31;
    v19 = 10;
  }
LABEL_271:
  if ( (_DWORD)v28 != -1073741811 )
    goto LABEL_272;
LABEL_280:
  v134 = v153[1];
  if ( a12 )
    *a12 = v153[1];
  if ( a13 )
    *a13 = v42;
  if ( a14 )
  {
    if ( v147 || !v143 )
      v31 = 0;
    *a14 = v31;
  }
  if ( a15 )
    *a15 = v148;
  if ( (a6 & 0x20) != 0 )
  {
    v135 = (int)v28 >= 0;
    if ( v135 != v152 >= 0 )
    {
      v136 = WdLogNewEntry5_WdAssertion(v135, v37, v39, v40);
      WdLogEvent5_WdAssertion(v136);
    }
    *((_DWORD *)a9 + 12) = v152;
    *((_DWORD *)a9 + 13) = v19;
  }
  if ( (a6 & 0x40) == 0 )
    LogDiagSDC(a1, a2, a3, a4, v21, v28, v134, v42, v165, v143);
  if ( gpGdiSharedMemory )
    DisplayScenarioJournalSetUniqueness(
      *((unsigned int *)gpGdiSharedMemory + 393256),
      *((unsigned int *)gpGdiSharedMemory + 393252));
  LOBYTE(v142) = v148;
  LOBYTE(v141) = v143;
  DisplayScenarioJournalFinalize((unsigned int)v28, v42, v134, (unsigned int)v152, v19, v141, v142, a16);
  v139 = WdLogNewEntry5_WdEvent(v138, v137);
  *(_QWORD *)(v139 + 24) = (int)v28;
  WdLogEvent5_WdEvent(v139);
  DrvSetDisplayConfig_::_2_::_AUTO::__AUTO((AUTO_TGO *)v159);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v164, 5LL);
  return (unsigned int)v28;
}
