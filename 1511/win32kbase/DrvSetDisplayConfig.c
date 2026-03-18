/*
 * XREFs of DrvSetDisplayConfig @ 0x1C00511C0
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C0050464 (DrvChangeDisplaySettings.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@H@Z @ 0x1C0052BB0 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     InitVideo @ 0x1C0061E88 (InitVideo.c)
 *     xxxUserSetDisplayConfig @ 0x1C006D7B0 (xxxUserSetDisplayConfig.c)
 *     ?SetDPIinSetup@@YAJXZ @ 0x1C0088654 (-SetDPIinSetup@@YAJXZ.c)
 * Callees:
 *     sub_1C00524F0 @ 0x1C00524F0 (sub_1C00524F0.c)
 *     ?FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0052548 (-FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     sub_1C0052570 @ 0x1C0052570 (sub_1C0052570.c)
 *     ?AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C005265C (-AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C00526A8 (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C00526EC (--0AUTO_TGO@@IEAA@XZ.c)
 *     LogDiagSDC @ 0x1C00527C0 (LogDiagSDC.c)
 *     sub_1C0053ED0 @ 0x1C0053ED0 (sub_1C0053ED0.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0058120 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAU_D3DKMT_GETPATHSMODALITY@.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1C00649A8 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C007B490 (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     ?CreatePathPersistentMonitorsIfNeeded@@YAJIPEAU_D3DKMT_GETPATHSMODALITY@@PEAG@Z @ 0x1C007BEC8 (-CreatePathPersistentMonitorsIfNeeded@@YAJIPEAU_D3DKMT_GETPATHSMODALITY@@PEAG@Z.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C007DDE8 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C0085B60 (DrvDxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B9A94 (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@PEAPEAU_D3DKMT_GETPATHSM.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUDISPLAYCONFIG_MODE_INFO@@IHPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00B9E2C (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUD.c)
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEAH@Z @ 0x1C00BA384 (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAU_D3DKMT_P.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00BA3F8 (-ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_IN.c)
 *     ?ConvertPreferredScalingToAdapterDefault@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00BA5AC (-ConvertPreferredScalingToAdapterDefault@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAU_D3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C00BAE0C (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAU_D3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00BB06C (-DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?ReplacePreferredScaling@@YAJPEBU_D3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1C00BC040 (-ReplacePreferredScaling@@YAJPEBU_D3DKMT_GETPATHSMODALITY@@PEAU1@@Z.c)
 */

__int64 __fastcall DrvSetDisplayConfig(
        __int64 a1,
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
        struct _DISPLAYCONFIG_CDS_REQUEST *a15)
{
  __int64 v15; // rdi
  int v16; // r14d
  __int64 v17; // rax
  unsigned int v18; // r12d
  char v19; // bl
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  bool v24; // zf
  struct _MDEV **v25; // r13
  __int64 v26; // rax
  char v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct _D3DKMT_GETPATHSMODALITY *v36; // r9
  unsigned int v37; // esi
  struct _MDEV *v38; // rbx
  bool v39; // bl
  unsigned __int8 v40; // si
  struct _MDEV *v41; // r13
  struct _DISPLAYCONFIG_CDS_REQUEST *v42; // rax
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rax
  unsigned int v48; // r13d
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned int v51; // edi
  const struct _RETRY_MODE *v52; // r14
  int v53; // eax
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // r8
  char v58; // r14
  unsigned __int16 v59; // dx
  __int64 v60; // rax
  __int64 v61; // rcx
  unsigned int v62; // r12d
  unsigned int v63; // r13d
  char *v64; // r14
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  struct _D3DKMT_GETPATHSMODALITY *v68; // r9
  __int64 v69; // rax
  __int64 v70; // rax
  int v71; // r15d
  __int64 v72; // rax
  struct _D3DKMT_GETPATHSMODALITY *v73; // rax
  struct _D3DKMT_GETPATHSMODALITY *v74; // r14
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rax
  int v80; // eax
  __int64 v81; // rax
  int v82; // eax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  int v88; // edi
  __int64 v89; // rcx
  int v90; // eax
  __int64 v91; // rax
  char v92; // r13
  unsigned int v93; // r15d
  wchar_t *v94; // rcx
  unsigned int v95; // r12d
  _DWORD *v96; // r14
  _DWORD *PoolWithTag; // rax
  wchar_t *v98; // rdx
  unsigned int v99; // r8d
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 *v102; // r14
  __int64 v103; // rsi
  int v104; // r8d
  int v105; // eax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  int v109; // eax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  unsigned int v116; // eax
  __int64 v117; // rax
  __int64 v118; // rax
  int v119; // ebx
  int v120; // eax
  unsigned __int8 v121; // al
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // rax
  int v125; // eax
  __int64 v126; // rax
  __int64 v127; // rcx
  int v128; // ebx
  struct _DISPLAYCONFIG_CDS_REQUEST *v129; // rcx
  _BOOL8 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v134; // rax
  int v135; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 v136[4]; // [rsp+5Ch] [rbp-ACh] BYREF
  char v137; // [rsp+60h] [rbp-A8h] BYREF
  int v138; // [rsp+64h] [rbp-A4h]
  bool v139; // [rsp+68h] [rbp-A0h]
  char v140; // [rsp+69h] [rbp-9Fh]
  int v141; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v142[2]; // [rsp+70h] [rbp-98h] BYREF
  struct _MDEV *v143; // [rsp+78h] [rbp-90h]
  unsigned int v144; // [rsp+80h] [rbp-88h]
  unsigned int v145; // [rsp+84h] [rbp-84h]
  unsigned __int16 v146; // [rsp+88h] [rbp-80h] BYREF
  __int64 v147; // [rsp+90h] [rbp-78h]
  _QWORD v148[6]; // [rsp+98h] [rbp-70h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v149[2]; // [rsp+C8h] [rbp-40h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v150; // [rsp+D8h] [rbp-30h] BYREF
  char v151; // [rsp+E0h] [rbp-28h]
  int v152; // [rsp+E8h] [rbp-20h]
  int v153; // [rsp+ECh] [rbp-1Ch]
  void *v154; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v155; // [rsp+F8h] [rbp-10h]
  void *retaddr; // [rsp+150h] [rbp+48h]
  unsigned int v157; // [rsp+158h] [rbp+50h]

  v157 = a1;
  LODWORD(v15) = 0;
  v142[1] = 0;
  v136[3] = 0;
  v16 = 0;
  v139 = gbBaseVideo != 0;
  v136[0] = 0;
  v137 = 0;
  v135 = 0;
  v141 = -5;
  v138 = 0;
  v145 = gbBaseVideo != 0 ? 3 : 0;
  v144 = 0;
  v17 = WdLogNewEntry5_WdEvent(a1, a2);
  v18 = a5;
  *(_QWORD *)(v17 + 24) = (unsigned int)a5;
  WdLogEvent5_WdEvent(v17);
  v147 = MEMORY[0xFFFFF78000000320];
  v19 = a6;
  v155 = v147 * KeQueryTimeIncrement();
  v153 = a6 & 0x100;
  if ( (a6 & 0x100) == 0 )
    DisplayScenarioJournalBegin((unsigned int)a5, a6, (unsigned __int16)gProtocolType);
  v154 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v154, 4LL);
  v24 = gOldModeChange == 0;
  v25 = a11;
  *a11 = 0LL;
  if ( !v24 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
    WdLogEvent5_WdAssertion(v26);
  }
  if ( (a5 & 0x1000) != 0 && a8 )
    WdDiagNotifyUser(40LL, 3LL, 0LL, 0LL);
  v27 = 1;
  if ( (a6 & 2) == 0 || (v140 = 1, (a5 & 0x88F) != 0x88F) )
    v140 = 0;
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v148);
  v148[0] = &`DrvSetDisplayConfig'::`21'::_AUTO::`vftable';
  *(_OWORD *)v149 = 0LL;
  v150 = 0LL;
  v151 = 0;
  if ( !gProtocolType && (a6 & 1) == 0 )
  {
    if ( (a5 & 0x40000000) != 0 )
    {
      if ( gbBaseVideo )
      {
        v32 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
        WdLogEvent5_WdAssertion(v32);
      }
      LODWORD(v15) = sub_1C0052570(0LL, v149, 15LL, 0LL);
      if ( (int)v15 < 0 )
      {
        v37 = 2;
        v135 = 2;
        v38 = a10;
        v143 = a10;
LABEL_242:
        if ( (int)v15 < 0 )
          goto LABEL_251;
LABEL_261:
        v121 = v136[3];
        goto LABEL_262;
      }
      v34 = *((_DWORD *)v149[0] + 8) & 0xF;
      if ( (_DWORD)v34 == 1 || (_DWORD)v34 == 8 )
      {
        v41 = a10;
        v37 = 25;
        v135 = 25;
        LODWORD(v15) = -1073741637;
        goto LABEL_255;
      }
      v24 = (_DWORD)v34 == 4;
      LOBYTE(v34) = 1;
      v136[2] = 1;
      v39 = v24;
      v40 = 1;
      LOBYTE(v33) = v24;
      ((void (__fastcall *)(__int64, __int64))qword_1C01043B8)(v34, v33);
      if ( v39 )
      {
        LODWORD(v15) = 0;
        v136[0] = 1;
        v37 = 26;
LABEL_272:
        FreePathsModality(v149[1]);
        v149[1] = 0LL;
        if ( (int)sub_1C0052570(0LL, &v149[1], 64LL, 0LL) >= 0 )
          DisplayScenarioJournalSetActualPathModality(
            216 * (unsigned int)*((unsigned __int16 *)v149[1] + 10),
            *((unsigned __int16 *)v149[1] + 10),
            (char *)v149[1] + 48);
        if ( *v25 )
        {
          v126 = *((_QWORD *)*v25 + 4);
          if ( v126 )
          {
            v127 = *(_QWORD *)(v126 + 2600);
            if ( ((v127 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
              DisplayScenarioJounralSetTSDDDState((*(_DWORD *)(v127 + 160) & 0x2000000) != 0);
          }
        }
        goto LABEL_278;
      }
      v19 = a6;
      v18 = 132;
      a5 = 132;
      goto LABEL_42;
    }
    if ( a5 < 0 )
    {
      v136[2] = 0;
      v40 = 0;
      if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C01043B8)(0LL, 0LL) )
      {
        v136[0] = 1;
        v37 = 18;
        goto LABEL_272;
      }
      v18 = 2191;
      goto LABEL_33;
    }
    if ( (a5 & 0xF) == 0xF )
    {
      if ( (a6 & 0x20) == 0 || (v42 = a9, !*((_DWORD *)a9 + 5)) )
      {
        v136[2] = ((__int64 (*)(void))qword_1C01043C0)();
        v40 = v136[2];
        if ( !v136[2] )
        {
LABEL_42:
          LODWORD(v15) = ((__int64 (*)(void))qword_1C0104190)();
          if ( (int)v15 < 0 )
          {
            v38 = a10;
            v37 = 12;
            v135 = 12;
            v16 = 6;
            v143 = a10;
            goto LABEL_242;
          }
          v151 = 1;
          v152 = v18 & 0x80;
          if ( (v18 & 0x80) != 0 )
          {
            v43 = 1LL;
            if ( !v40 && (v18 & 0xF) != 0 && (v19 & 0x20) == 0 )
              v43 = 3LL;
            v44 = ((__int64 (__fastcall *)(__int64))qword_1C01041B0)(v43);
            v15 = v44;
            if ( v44 < 0 )
            {
              v45 = WdLogNewEntry5_WdEvent(v34, v33);
              *(_QWORD *)(v45 + 24) = v15;
              WdLogEvent5_WdEvent(v45);
              DrvDxgkLogCodePointPacket(4LL, (unsigned int)v15, 0LL, 0LL);
              LODWORD(v15) = 0;
            }
          }
          v37 = v135;
          v143 = a10;
          LODWORD(v46) = v147;
          v136[1] = (v18 & 0x240) == 512;
          while ( 1 )
          {
            v47 = WdLogNewEntry5_WdEvent(v34, v33);
            *(_QWORD *)(v47 + 24) = (unsigned int)v142[1];
            *(_QWORD *)(v47 + 32) = (int)v15;
            WdLogEvent5_WdEvent(v47);
            v48 = 0;
            v142[0] = 0;
            v137 = 0;
            v136[0] = 0;
            FreePathsModality(v149[0]);
            FreePathsModality(v149[1]);
            v149[1] = 0LL;
            v149[0] = 0LL;
            if ( v139 )
            {
              if ( (v18 & 0xF) != 0xF )
              {
                v49 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
                WdLogEvent5_WdAssertion(v49);
              }
              if ( v136[1] )
              {
                v50 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
                WdLogEvent5_WdAssertion(v50);
              }
              if ( v145 >= 6 )
              {
                if ( (int)v15 >= 0 )
                {
                  v117 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
                  WdLogEvent5_WdAssertion(v117);
LABEL_241:
                  v38 = v143;
                  goto LABEL_242;
                }
                v38 = v143;
LABEL_251:
                v121 = v136[3];
                if ( v136[3] )
                {
                  v37 = 29;
                  v141 = 0;
                  v135 = 29;
                  LODWORD(v15) = 0;
                  v16 = 9;
                }
                if ( (int)v15 < 0 )
                {
                  v41 = v143;
                  goto LABEL_255;
                }
LABEL_262:
                if ( v121 && !*a11 )
                {
                  if ( !v38 )
                  {
                    v124 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
                    WdLogEvent5_WdAssertion(v124);
                  }
                  v125 = v141;
                  v24 = v141 == 2;
                  *a11 = v38;
                  if ( v24 )
                    v125 = 0;
                  v141 = v125;
                }
LABEL_269:
                v18 = a5;
                goto LABEL_270;
              }
              v51 = v145;
              v52 = (const struct _RETRY_MODE *)((char *)&unk_1C00EB6B0 + 12 * v145);
              DrvDxgkLogCodePointPacket(75LL, *((unsigned int *)v52 + 1), *((unsigned int *)v52 + 2), 0LL);
              if ( *(_BYTE *)v52 )
              {
                v144 = 0;
                v145 = v51 + 1;
                LODWORD(v15) = sub_1C0052570(0LL, v149, 15LL, 0LL);
              }
              else
              {
                v53 = DrvCreatePathModalityFromAllPaths(&v150, v144++, v149);
                LODWORD(v15) = v53;
                if ( v53 >= 0 )
                {
                  if ( *((_WORD *)v149[0] + 10) != 1 )
                  {
                    v54 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
                    WdLogEvent5_WdAssertion(v54);
                  }
                }
                else
                {
                  ++v145;
                  v144 = 0;
                }
              }
              if ( (int)v15 < 0 )
              {
                v37 = 2;
                goto LABEL_66;
              }
              v55 = DrvFunctionalizeBaseVidMode(v52, v149[0]);
              v15 = v55;
              if ( v55 >= 0 )
                goto LABEL_153;
              v56 = WdLogNewEntry5_WdError();
              *(_QWORD *)(v56 + 24) = v15;
              WdLogEvent5_WdError(v56);
              v37 = 2;
            }
            else
            {
              v57 = v18 & 0xF;
              if ( (v18 & 0xF) != 0 )
              {
                if ( (a6 & 0x20) != 0 && *((_QWORD *)a9 + 4) )
                {
                  v58 = 1;
                  v59 = 1;
                }
                else
                {
                  v58 = 0;
                  v59 = 0;
                }
                if ( v58 && !*((_DWORD *)a9 + 5) )
                  LODWORD(v57) = 64;
                LODWORD(v15) = sub_1C0052570(0LL, v149, ((a6 & 0x20) != 0 ? 0x9000 : 0) | (unsigned int)v57, v59);
                if ( (int)v15 >= 0 )
                {
                  if ( !*((_WORD *)v149[0] + 10) )
                  {
                    v60 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
                    WdLogEvent5_WdAssertion(v60);
                  }
                  if ( v136[2] || (v136[1] = 1, (v18 & 0x40) != 0) )
                    v136[1] = 0;
                  if ( v58 )
                  {
                    if ( !*((_DWORD *)a9 + 5) || (v136[1] = 1, !*((_DWORD *)a9 + 6)) )
                      v136[1] = 0;
                    LODWORD(v15) = DrvValidateAndApplyDevMode(a9, v149);
                    if ( (int)v15 < 0 )
                    {
                      v37 = 2;
                      v16 = *((_DWORD *)a9 + 13);
                      v141 = *((_DWORD *)a9 + 12);
                      v138 = v16;
                      if ( (_DWORD)v15 == -1073741266 )
                        v37 = 23;
                      goto LABEL_232;
                    }
                    if ( *((_DWORD *)a9 + 5) )
                    {
                      v48 = 1;
                      v142[0] = 1;
                    }
                  }
                  v16 = 10;
                  v138 = 10;
                  goto LABEL_154;
                }
                v37 = 2;
LABEL_80:
                v16 = 7;
                goto LABEL_81;
              }
              if ( (v18 & 0x10) != 0 )
              {
                LODWORD(v15) = AllocatePathModalityForDisplayConfig(v157, (struct DISPLAYCONFIG_PATH_INFO *)a2, v149);
                if ( (int)v15 < 0 )
                {
                  v37 = 3;
                  v135 = 3;
                  goto LABEL_233;
                }
                LODWORD(v15) = ConvertDisplayConfigToPathModality(
                                 v157,
                                 (struct DISPLAYCONFIG_PATH_INFO *)a2,
                                 a3,
                                 a4,
                                 v18,
                                 v149[0],
                                 0LL);
                if ( (int)v15 < 0 )
                {
                  v37 = 4;
                  goto LABEL_232;
                }
                v61 = 47LL;
                if ( (v18 & 0x2000) != 0 )
                  v61 = 8239LL;
                LODWORD(v15) = qword_1C01040F8(v61, v149[0], 0LL);
                if ( (int)v15 < 0 )
                {
                  v37 = 5;
                  goto LABEL_232;
                }
                v136[1] = !v136[2] && (v18 & 0x40) == 0;
                goto LABEL_154;
              }
              if ( (v18 & 0x20) == 0 )
              {
                v115 = WdLogNewEntry5_WdAssertion(v34, v33, v57, v36);
                *(_QWORD *)(v115 + 24) = v18;
                WdLogEvent5_WdAssertion(v115);
                v37 = 9;
                goto LABEL_231;
              }
              v142[0] = 0;
              if ( (a6 & 8) != 0 )
              {
                LODWORD(v15) = sub_1C0052570(0LL, v149, 64LL, 0LL);
                if ( (int)v15 < 0 )
                {
                  v37 = 32;
                  goto LABEL_232;
                }
                v36 = v149[0];
                v62 = 0;
                v63 = *((unsigned __int16 *)v149[0] + 10);
                if ( *((_WORD *)v149[0] + 10) )
                {
                  while ( 1 )
                  {
                    v64 = (char *)v36 + 216 * v62;
                    if ( (unsigned __int8)operator==(v64 + 56, a2)
                      && *((_DWORD *)v64 + 16) == *(_DWORD *)(a2 + 8)
                      && *((_DWORD *)v64 + 17) == *(_DWORD *)(a2 + 28) )
                    {
                      if ( (*((_DWORD *)v64 + 12) & 0x800) == 0 )
                      {
                        v69 = WdLogNewEntry5_WdAssertion(v66, v65, v67, v68);
                        WdLogEvent5_WdAssertion(v69);
                        v68 = v149[0];
                      }
                      v24 = (*((_DWORD *)v64 + 12) & 0x40000) == 0;
                      v46 = *(_QWORD *)(v64 + 180);
                      v147 = v46;
                      if ( v24 )
                      {
                        v70 = WdLogNewEntry5_WdAssertion(v66, v65, v67, v68);
                        WdLogEvent5_WdAssertion(v70);
                        v68 = v149[0];
                      }
                      v71 = *((_DWORD *)v64 + 62);
                      v63 = v62;
                      LODWORD(v15) = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
                                       (struct DISPLAYCONFIG_PATH_INFO *)a2,
                                       v62,
                                       0xFFFFFFFF,
                                       a3,
                                       a4,
                                       a5,
                                       0,
                                       v68,
                                       v142);
                      if ( (int)v15 < 0 )
                      {
                        v37 = 34;
                        v27 = 1;
                        goto LABEL_66;
                      }
                      *((_DWORD *)v64 + 12) |= 0x40000u;
                      *((_DWORD *)v64 + 62) = v71;
                      v27 = 1;
                    }
                    else
                    {
                      LODWORD(v15) = ConvertDisplayConfigScalingToPathModalityForPath(
                                       (struct DISPLAYCONFIG_PATH_INFO *)a2,
                                       (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v64 + 48),
                                       v142);
                      if ( (int)v15 < 0 )
                      {
                        v37 = 35;
                        goto LABEL_66;
                      }
                    }
                    v36 = v149[0];
                    if ( ++v62 >= *((unsigned __int16 *)v149[0] + 10) )
                    {
                      v16 = v138;
                      break;
                    }
                  }
                }
                if ( v63 >= *((unsigned __int16 *)v36 + 10)
                  || (v34 = 216LL * v63, __PAIR64__(HIDWORD(v147), v46) != *(_QWORD *)((char *)v36 + v34 + 180)) )
                {
                  LODWORD(v15) = -1073741811;
                  v37 = 33;
                  goto LABEL_232;
                }
                v18 = a5;
              }
              else
              {
                LODWORD(v15) = AllocatePathModalityForDisplayConfig(v157, (struct DISPLAYCONFIG_PATH_INFO *)a2, v149);
                if ( (int)v15 < 0 )
                {
                  v37 = 6;
                  goto LABEL_232;
                }
                LODWORD(v15) = ConvertDisplayConfigToPathModality(
                                 v157,
                                 (struct DISPLAYCONFIG_PATH_INFO *)a2,
                                 a3,
                                 a4,
                                 v18,
                                 v149[0],
                                 v142);
                if ( (int)v15 < 0 )
                {
                  v37 = 7;
                  goto LABEL_232;
                }
                v36 = v149[0];
              }
              if ( !v142[0] )
                goto LABEL_150;
              if ( !*((_WORD *)v36 + 10) )
              {
                v72 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
                WdLogEvent5_WdAssertion(v72);
                v36 = v149[0];
              }
              v73 = AllocPathsModality(*((_WORD *)v36 + 10));
              v74 = v73;
              if ( (int)((__int64 (__fastcall *)(struct _D3DKMT_GETPATHSMODALITY *, struct _D3DKMT_GETPATHSMODALITY *))qword_1C0104510)(
                          v73,
                          v149[0]) < 0 )
              {
                v79 = WdLogNewEntry5_WdAssertion(v76, v75, v77, v78);
                WdLogEvent5_WdAssertion(v79);
              }
              if ( (int)((__int64 (__fastcall *)(__int64, struct _D3DKMT_GETPATHSMODALITY *))qword_1C01040F8)(47LL, v74) < 0 )
              {
                ConvertPreferredScalingToAdapterDefault(v149[0]);
LABEL_149:
                FreePathsModality(v74);
                v36 = v149[0];
LABEL_150:
                LODWORD(v15) = qword_1C01040F8(256LL, v36, 0LL);
                if ( (int)v15 < 0 )
                {
                  v37 = 8;
LABEL_66:
                  v16 = v138;
                  goto LABEL_232;
                }
                v48 = 1;
                v142[0] = 1;
LABEL_153:
                v16 = v138;
LABEL_154:
                if ( (v18 & 0x800) != 0 )
                {
                  v80 = CreatePathPersistentMonitorsIfNeeded(v34, v149[0], &v146);
                  v15 = v80;
                  if ( v80 < 0 )
                  {
                    v81 = WdLogNewEntry5_WdError();
                    *(_QWORD *)(v81 + 24) = v15;
                    WdLogEvent5_WdError(v81);
                    v37 = 10;
                    goto LABEL_232;
                  }
                  v82 = ((__int64 (__fastcall *)(__int64, struct _D3DKMT_GETPATHSMODALITY *))qword_1C0104118)(
                          0x80000000LL,
                          v149[0]);
                  v15 = v82;
                  if ( v82 == -1073741266 )
                  {
                    v85 = WdLogNewEntry5_WdEvent(v84, v83);
                    *(_QWORD *)(v85 + 24) = (unsigned int)v142[1];
                    *(_QWORD *)(v85 + 32) = -1073741266LL;
                    WdLogEvent5_WdEvent(v85);
                    v37 = 23;
                    v135 = 23;
                    goto LABEL_233;
                  }
                  if ( v82 < 0 )
                  {
                    v86 = WdLogNewEntry5_WdError();
                    *(_QWORD *)(v86 + 24) = v15;
                    WdLogEvent5_WdError(v86);
                    v37 = 22;
                    goto LABEL_232;
                  }
                  if ( v146 )
                  {
                    v87 = WdLogNewEntry5_WdWarning();
                    *(_QWORD *)(v87 + 24) = (unsigned int)v142[1];
                    *(_QWORD *)(v87 + 32) = v15;
                    WdLogEvent5_WdWarning(v87);
                    LODWORD(v15) = -1073741266;
                    goto LABEL_233;
                  }
                }
                if ( (a6 & 0x20) != 0 && (!*((_QWORD *)a9 + 4) || *((_DWORD *)a9 + 2)) )
                  v88 = 0x20000;
                else
                  v88 = 0;
                v89 = v88 | GetCcdRawmodeFlag();
                LODWORD(v89) = v89 | 0x8000;
                v90 = ((__int64 (__fastcall *)(__int64, struct _D3DKMT_GETPATHSMODALITY *))qword_1C0104100)(
                        v89,
                        v149[0]);
                v15 = v90;
                if ( v90 < 0 )
                {
                  v91 = WdLogNewEntry5_WdEvent(v34, v33);
                  *(struct _D3DKMT_GETPATHSMODALITY **)(v91 + 24) = v149[0];
                  *(_QWORD *)(v91 + 32) = v15;
                  WdLogEvent5_WdEvent(v91);
                  v37 = 11;
                  v16 = 7;
LABEL_170:
                  v138 = v16;
                  goto LABEL_232;
                }
                if ( v152 )
                {
                  v92 = 0;
                  LODWORD(v15) = sub_1C0052570(0LL, &v149[1], 1048640LL, 0LL);
                  if ( (int)v15 < 0 )
                  {
                    v37 = 13;
                    goto LABEL_80;
                  }
                  v93 = 0;
                  if ( (v18 & 0x1000) != 0 )
                    v93 = 0x10000;
                  if ( (a6 & 0x10) != 0 )
                    v93 |= 0x400000u;
                  if ( (v18 & 0x1100) != 0 )
                  {
                    v92 = 1;
                    v93 |= 0x4000u;
                  }
                  if ( v93 )
                  {
                    LODWORD(v15) = qword_1C01040F8(v93, v149[0], 0LL);
                    if ( (int)v15 < 0 )
                    {
                      v37 = 14;
                      v27 = 1;
                      goto LABEL_232;
                    }
                  }
                  v94 = gpGraphicsDeviceList;
                  v95 = 0;
                  while ( v94 )
                  {
                    if ( (*((_DWORD *)v94 + 40) & 0x800000) != 0 )
                      ++v95;
                    v94 = (wchar_t *)*((_QWORD *)v94 + 16);
                  }
                  v96 = 0LL;
                  if ( v95 )
                  {
                    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 72LL * v95, 0x7774656Cu);
                    v96 = PoolWithTag;
                    if ( PoolWithTag )
                    {
                      memset(PoolWithTag, 0, 72LL * v95);
                      v98 = gpGraphicsDeviceList;
                      v99 = 0;
                      if ( gpGraphicsDeviceList )
                      {
                        do
                        {
                          if ( (*((_DWORD *)v98 + 40) & 0x800000) != 0 )
                          {
                            v100 = v99++;
                            v101 = 9 * v100;
                            v96[2 * v101] = *((_DWORD *)v98 + 66);
                            v96[2 * v101 + 1] = *((_DWORD *)v98 + 67);
                            v96[2 * v101 + 2] = *((_DWORD *)v98 + 68);
                          }
                          v98 = (wchar_t *)*((_QWORD *)v98 + 16);
                        }
                        while ( v98 );
                        LODWORD(v46) = v147;
                      }
                    }
                  }
                  DisplayScenarioJournalSetExpectedPathModality(
                    216 * (unsigned int)*((unsigned __int16 *)v149[0] + 10),
                    *((unsigned __int16 *)v149[0] + 10),
                    (char *)v149[0] + 48,
                    v95,
                    v96);
                  v102 = (__int64 *)a11;
                  v103 = (__int64)v143;
                  LOBYTE(v104) = v92;
                  v105 = sub_1C0053ED0(v149[0], v93, v104, (_DWORD)a7, (__int64)v143, (__int64)&v137, (__int64)a11);
                  v141 = v105;
                  v27 = 1;
                  if ( v105 < 0 || v105 == 1 )
                  {
                    v37 = 16;
                    LODWORD(v15) = -1073741823;
                    v16 = 5;
                    goto LABEL_170;
                  }
                  if ( v137 )
                  {
                    v106 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
                    WdLogEvent5_WdAssertion(v106);
                  }
                  if ( v141 == 2 )
                  {
                    if ( v92 || *a11 )
                    {
                      v107 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
                      WdLogEvent5_WdAssertion(v107);
                    }
                    v136[0] = 1;
                  }
                  else
                  {
                    if ( !*a11 )
                    {
                      v108 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
                      WdLogEvent5_WdAssertion(v108);
                    }
                    v103 = 0LL;
                    v143 = 0LL;
                  }
                  LOBYTE(v18) = a5;
                  v48 = v142[0];
                }
                else
                {
                  if ( (v18 & 0x40) == 0 )
                  {
                    v114 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
                    *(_QWORD *)(v114 + 24) = v18;
                    WdLogEvent5_WdAssertion(v114);
                    v37 = 21;
LABEL_231:
                    LODWORD(v15) = -1073741811;
                    goto LABEL_232;
                  }
                  v103 = (__int64)v143;
                  v102 = (__int64 *)a11;
                  v141 = 0;
                }
                if ( v136[1] )
                {
                  v109 = ((__int64 (__fastcall *)(_QWORD, struct _D3DKMT_GETPATHSMODALITY *))qword_1C0104118)(
                           v48,
                           v149[0]);
                  v15 = v109;
                  if ( !a8 )
                  {
                    if ( v109 < 0 )
                    {
                      v110 = WdLogNewEntry5_WdError();
                      *(_QWORD *)(v110 + 24) = v15;
                      WdLogEvent5_WdError(v110);
                      LODWORD(v15) = 0;
                    }
                    goto LABEL_226;
                  }
                  if ( v109 == -1073741266 )
                  {
                    if ( (v18 & 0x10) != 0 )
                    {
                      v111 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
                      WdLogEvent5_WdAssertion(v111);
                    }
                    v112 = WdLogNewEntry5_WdEvent(v34, v33);
                    *(_QWORD *)(v112 + 24) = (unsigned int)v142[1];
                    *(_QWORD *)(v112 + 32) = -1073741266LL;
                    WdLogEvent5_WdEvent(v112);
                    if ( !v136[0] )
                    {
                      if ( v103 )
                      {
                        v113 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
                        WdLogEvent5_WdAssertion(v113);
                      }
                      v143 = (struct _MDEV *)*v102;
                      *v102 = 0LL;
                      v136[3] = 1;
                    }
                    v37 = 24;
                    v16 = 9;
                    goto LABEL_81;
                  }
                  if ( v109 < 0 )
                  {
                    v37 = 29;
                    LODWORD(v15) = 0;
                    v16 = 9;
                    v138 = 9;
                    goto LABEL_232;
                  }
LABEL_226:
                  v37 = 18;
                }
                else
                {
                  if ( (int)v15 >= 0 )
                    goto LABEL_226;
                  v37 = 17;
                }
                v16 = ((int)v15 >= 0) + 9;
LABEL_81:
                v138 = v16;
                goto LABEL_232;
              }
              LODWORD(v15) = ReplacePreferredScaling(v74, v149[0]);
              if ( (int)v15 >= 0 )
                goto LABEL_149;
              FreePathsModality(v74);
              v37 = 20;
            }
            v16 = v138;
LABEL_232:
            v135 = v37;
LABEL_233:
            v116 = ++v142[1];
            if ( (_DWORD)v15 == -1073741266 )
            {
              if ( v139 )
                goto LABEL_237;
              v18 = a5;
              if ( v116 < 4 )
                continue;
            }
            if ( (int)v15 >= 0 )
            {
              v38 = v143;
              goto LABEL_261;
            }
LABEL_237:
            if ( !v140 )
              goto LABEL_241;
            v18 = a5;
            v139 = 1;
            v136[1] = 0;
          }
        }
        v18 = a5 & 0xFFFFFFF0 | 4;
LABEL_33:
        a5 = v18;
        goto LABEL_42;
      }
    }
    else
    {
      v42 = a9;
    }
    if ( (a5 & 0x200) != 0 || (a6 & 0x20) != 0 && *((_DWORD *)v42 + 5) || (a5 & 0x1F) != 0 && (a5 & 0x40) == 0 )
    {
      v136[2] = 0;
      v40 = 0;
      ((void (__fastcall *)(_QWORD, _QWORD))qword_1C01043B8)(0LL, 0LL);
    }
    else
    {
      v40 = ((__int64 (*)(void))qword_1C01043C0)();
      v136[2] = v40;
    }
    goto LABEL_42;
  }
  if ( (a6 & 0x20) != 0 )
  {
    v118 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
    WdLogEvent5_WdAssertion(v118);
  }
  v119 = a6 & 1;
  v41 = a10;
  v143 = a10;
  v120 = DrvChangeDisplayFallback(
           a7,
           BYTE1(a5) & 1,
           v119 != 0,
           a10,
           a11,
           (enum _DXGK_DIAG_SDC_STAGE *)&v135,
           v136,
           &v141);
  v37 = v135;
  LODWORD(v15) = v120;
  if ( v120 >= 0 )
  {
    v24 = v119 == 0;
    v38 = a10;
    if ( !v24 )
      v37 = 30;
    v135 = v37;
    goto LABEL_242;
  }
LABEL_255:
  if ( !v140 )
    goto LABEL_269;
  if ( a8 )
  {
    v122 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
    WdLogEvent5_WdAssertion(v122);
  }
  v18 = a5;
  LODWORD(v15) = DrvChangeDisplayFallback(
                   a7,
                   BYTE1(a5) & 1,
                   1u,
                   v41,
                   a11,
                   (enum _DXGK_DIAG_SDC_STAGE *)&v135,
                   v136,
                   &v141);
  if ( (int)v15 < 0 )
  {
    v134 = WdLogNewEntry5_WdAssertion(v123, v33, v35, v36);
    WdLogEvent5_WdAssertion(v134);
    v37 = v135;
  }
  else
  {
    v37 = 31;
    v16 = 10;
  }
LABEL_270:
  if ( (_DWORD)v15 != -1073741811 )
  {
    v25 = a11;
    goto LABEL_272;
  }
LABEL_278:
  v128 = v142[1];
  if ( a12 )
    *a12 = v142[1];
  if ( a13 )
    *a13 = v37;
  if ( a14 )
  {
    if ( v136[3] || !v136[0] )
      v27 = 0;
    *a14 = v27;
  }
  v129 = a15;
  if ( a15 )
    *(_BYTE *)a15 = v137;
  if ( (a6 & 0x20) != 0 )
  {
    v130 = (int)v15 >= 0;
    if ( v130 != v141 >= 0 )
    {
      v131 = WdLogNewEntry5_WdAssertion(v130, v33, v35, v36);
      WdLogEvent5_WdAssertion(v131);
    }
    v129 = a9;
    *((_DWORD *)a9 + 12) = v141;
    *((_DWORD *)a9 + 13) = v16;
  }
  if ( (a6 & 0x40) == 0 )
    LogDiagSDC(v157, a2, a3, a4, v18, v15, v128, v37, v155, v136[0]);
  if ( !v153 )
    DisplayScenarioJournalFinalize((unsigned int)v15, v37);
  v132 = WdLogNewEntry5_WdEvent(v129, v33);
  *(_QWORD *)(v132 + 24) = (int)v15;
  WdLogEvent5_WdEvent(v132);
  sub_1C00524F0((AUTO_TGO *)v148);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v154, 5LL);
  return (unsigned int)v15;
}
