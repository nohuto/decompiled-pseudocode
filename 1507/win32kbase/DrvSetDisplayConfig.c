/*
 * XREFs of DrvSetDisplayConfig @ 0x1C001BEA0
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@H@Z @ 0x1C001AE98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x1C001B64C (DrvChangeDisplaySettings.c)
 *     xxxUserSetDisplayConfig @ 0x1C006DFB0 (xxxUserSetDisplayConfig.c)
 *     InitVideo @ 0x1C007D7D8 (InitVideo.c)
 *     ?SetDPIinSetup@@YAJXZ @ 0x1C0085664 (-SetDPIinSetup@@YAJXZ.c)
 * Callees:
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0017D64 (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     ?CreatePathPersistentMonitorsIfNeeded@@YAJIPEAU_D3DKMT_GETPATHSMODALITY@@PEAG@Z @ 0x1C001ADA8 (-CreatePathPersistentMonitorsIfNeeded@@YAJIPEAU_D3DKMT_GETPATHSMODALITY@@PEAG@Z.c)
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C001BD58 (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     LogDiagSDC @ 0x1C001BD78 (LogDiagSDC.c)
 *     _DrvSetDisplayConfig_::_18_::_AUTO::__AUTO @ 0x1C001C858 (_DrvSetDisplayConfig_--_18_--_AUTO--__AUTO.c)
 *     ?FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C001C8B0 (-FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C001C8D8 (GetPathsModality.c)
 *     ?AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C001C9C4 (-AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C001CA34 (--0AUTO_TGO@@IEAA@XZ.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C005EFE0 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAU_D3DKMT_GETPATHSMODALITY@.c)
 *     ApplyPathsModality @ 0x1C00610F8 (ApplyPathsModality.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C006AC90 (DrvDxgkLogCodePointPacket.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C00837AC (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1C0083D44 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B7BB4 (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@PEAPEAU_D3DKMT_GETPATHSM.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUDISPLAYCONFIG_MODE_INFO@@IHPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00B7F4C (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUD.c)
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEAH@Z @ 0x1C00B8478 (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAU_D3DKMT_P.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00B84EC (-ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_IN.c)
 *     ?ConvertPreferredScalingToAdapterDefault@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B86A0 (-ConvertPreferredScalingToAdapterDefault@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAU_D3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C00B8F00 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAU_D3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B9160 (-DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?ReplacePreferredScaling@@YAJPEBU_D3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1C00BA808 (-ReplacePreferredScaling@@YAJPEBU_D3DKMT_GETPATHSMODALITY@@PEAU1@@Z.c)
 */

__int64 __fastcall DrvSetDisplayConfig(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        struct DISPLAYCONFIG_MODE_INFO *a4,
        int a5,
        char a6,
        void *a7,
        char a8,
        struct _DISPLAYCONFIG_CDS_REQUEST *a9,
        struct _MDEV *a10,
        struct _MDEV **a11,
        _DWORD *a12,
        unsigned int *a13,
        char *a14,
        _BYTE *a15)
{
  int v15; // edi
  int v16; // r15d
  __int64 v17; // rax
  unsigned int v18; // r12d
  __int64 v19; // rcx
  bool v20; // zf
  char v21; // bl
  __int64 v22; // rcx
  char v23; // r13
  struct _DISPLAYCONFIG_CDS_REQUEST *v24; // rax
  char v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rcx
  int v30; // eax
  unsigned int v31; // r14d
  __int64 v32; // rbx
  __int64 v33; // rax
  int v34; // r8d
  char v35; // r15
  unsigned __int16 v36; // dx
  int v37; // eax
  int v38; // eax
  int v39; // esi
  __int64 v40; // rcx
  int v41; // eax
  unsigned int v42; // r15d
  wchar_t *v43; // rcx
  unsigned int v44; // r13d
  char *v45; // r14
  char *PoolWithTag; // rax
  wchar_t *v47; // rdx
  unsigned int v48; // r8d
  __int64 v49; // rcx
  char v50; // r14
  int v51; // r8d
  int v52; // eax
  __int64 v53; // rax
  struct _MDEV *v54; // r14
  int v55; // eax
  unsigned int v56; // eax
  char v57; // al
  struct _MDEV *v58; // rbx
  int v59; // ebx
  __int64 v60; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  int v64; // eax
  struct _MDEV *v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  bool v69; // bl
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  unsigned int v75; // esi
  const struct _RETRY_MODE *v76; // r15
  int v77; // eax
  __int64 v78; // rax
  int v79; // eax
  __int64 v80; // rax
  __int64 v81; // rax
  int v82; // eax
  __int64 v83; // rax
  __int64 v84; // rcx
  struct _D3DKMT_GETPATHSMODALITY *v85; // r9
  unsigned int v86; // r12d
  unsigned int v87; // r13d
  char *v88; // r15
  __int64 v89; // rcx
  struct _D3DKMT_GETPATHSMODALITY *v90; // r9
  __int64 v91; // rax
  __int64 v92; // rax
  int v93; // r13d
  __int64 v94; // rax
  const struct _D3DKMT_GETPATHSMODALITY *v95; // r15
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  int v116; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 v117; // [rsp+5Ch] [rbp-ACh] BYREF
  bool v118; // [rsp+5Dh] [rbp-ABh]
  char v119; // [rsp+5Eh] [rbp-AAh]
  char v120; // [rsp+5Fh] [rbp-A9h]
  int v121; // [rsp+60h] [rbp-A8h]
  char v122; // [rsp+64h] [rbp-A4h] BYREF
  bool v123; // [rsp+65h] [rbp-A3h]
  char v124; // [rsp+66h] [rbp-A2h] BYREF
  char v125; // [rsp+67h] [rbp-A1h]
  int v126; // [rsp+68h] [rbp-A0h]
  int v127; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v128[2]; // [rsp+70h] [rbp-98h] BYREF
  struct _MDEV *v129; // [rsp+78h] [rbp-90h]
  unsigned int v130; // [rsp+80h] [rbp-88h]
  unsigned int v131; // [rsp+84h] [rbp-84h]
  unsigned __int16 v132; // [rsp+88h] [rbp-80h] BYREF
  __int64 v133; // [rsp+90h] [rbp-78h]
  unsigned int v134; // [rsp+98h] [rbp-70h]
  _QWORD v135[6]; // [rsp+A8h] [rbp-60h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v136[2]; // [rsp+D8h] [rbp-30h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v137; // [rsp+E8h] [rbp-20h] BYREF
  char v138; // [rsp+F0h] [rbp-18h]
  int v139; // [rsp+F8h] [rbp-10h]
  __int64 v140; // [rsp+100h] [rbp-8h] BYREF
  __int64 v141; // [rsp+108h] [rbp+0h]
  __int64 retaddr; // [rsp+160h] [rbp+58h]

  v15 = 0;
  v128[1] = 0;
  v120 = 0;
  v16 = 0;
  v123 = gbBaseVideo != 0;
  v117 = 0;
  v122 = 0;
  v116 = 0;
  v127 = -5;
  v121 = 0;
  v130 = gbBaseVideo != 0 ? 3 : 0;
  v131 = 0;
  v17 = WdLogNewEntry5_WdEvent();
  v18 = a5;
  *(_QWORD *)(v17 + 24) = (unsigned int)a5;
  WdLogEvent5_WdEvent(v17);
  v133 = MEMORY[0xFFFFF78000000320];
  v141 = v133 * KeQueryTimeIncrement();
  v140 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v140, 4);
  v20 = gOldModeChange == 0;
  *a11 = 0LL;
  if ( !v20 )
  {
    v66 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v66);
  }
  if ( (a5 & 0x1000) != 0 && a8 )
    WdDiagNotifyUser(40LL, 3LL, 0LL, 0LL);
  v21 = a6;
  LOBYTE(v126) = (a5 & 0x88F) == 2191 && (a6 & 2) != 0;
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v135);
  v135[0] = &`DrvSetDisplayConfig'::`18'::_AUTO::`vftable';
  *(_OWORD *)v136 = 0LL;
  v23 = 1;
  v137 = 0LL;
  v138 = 0;
  if ( gProtocolType || (a6 & 1) != 0 )
  {
    if ( (a6 & 0x20) != 0 )
    {
      v112 = WdLogNewEntry5_WdAssertion(v22);
      WdLogEvent5_WdAssertion(v112);
    }
    v129 = a10;
    v64 = DrvChangeDisplayFallback(
            a7,
            BYTE1(a5) & 1,
            (a6 & 1) != 0,
            a10,
            a11,
            (enum _DXGK_DIAG_SDC_STAGE *)&v116,
            &v117,
            &v127);
    v31 = v116;
    LODWORD(v28) = v64;
    if ( v64 < 0 )
    {
      v65 = a10;
      goto LABEL_163;
    }
    if ( (a6 & 1) != 0 )
      v31 = 30;
LABEL_141:
    v116 = v31;
    goto LABEL_142;
  }
  if ( (a5 & 0x40000000) != 0 )
  {
    if ( gbBaseVideo )
    {
      v67 = WdLogNewEntry5_WdAssertion(v22);
      WdLogEvent5_WdAssertion(v67);
    }
    LODWORD(v28) = GetPathsModality(0LL, v136, 15LL, 0LL);
    if ( (int)v28 < 0 )
    {
      v31 = 2;
LABEL_156:
      v129 = a10;
      goto LABEL_141;
    }
    v27 = *((_DWORD *)v136[0] + 8) & 0xF;
    if ( (_DWORD)v27 == 1 || (_DWORD)v27 == 8 )
    {
      v65 = a10;
      v31 = 25;
      v116 = 25;
      LODWORD(v28) = -1073741637;
      goto LABEL_163;
    }
    v20 = (_DWORD)v27 == 4;
    LOBYTE(v27) = 1;
    v119 = 1;
    v69 = v20;
    v25 = 1;
    LOBYTE(v68) = v20;
    ((void (__fastcall *)(__int64, __int64))qword_1C01015A0)(v27, v68);
    if ( v69 )
    {
      LODWORD(v28) = 0;
      v117 = 1;
      v31 = 26;
      goto LABEL_91;
    }
    v21 = a6;
    v18 = 132;
    a5 = 132;
  }
  else
  {
    if ( a5 < 0 )
    {
      v119 = 0;
      v25 = 0;
      if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C01015A0)(0LL, 0LL) )
      {
        LODWORD(v28) = 0;
        v117 = 1;
        v31 = 18;
        goto LABEL_91;
      }
      v18 = 2191;
LABEL_172:
      a5 = v18;
      goto LABEL_12;
    }
    if ( (a5 & 0xF) == 0xF )
    {
      if ( (a6 & 0x20) == 0 || (v24 = a9, !*((_DWORD *)a9 + 5)) )
      {
        v119 = ((__int64 (*)(void))qword_1C01015A8)();
        v25 = v119;
        if ( !v119 )
          goto LABEL_12;
        v18 = a5 & 0xFFFFFFF0 | 4;
        goto LABEL_172;
      }
    }
    else
    {
      v24 = a9;
    }
    if ( (a5 & 0x200) != 0 || (a6 & 0x20) != 0 && *((_DWORD *)v24 + 5) || (a5 & 0x1F) != 0 && (a5 & 0x40) == 0 )
    {
      v119 = 0;
      v25 = 0;
      ((void (__fastcall *)(_QWORD, _QWORD))qword_1C01015A0)(0LL, 0LL);
    }
    else
    {
      v25 = ((__int64 (*)(void))qword_1C01015A8)();
      v119 = v25;
    }
  }
LABEL_12:
  LODWORD(v28) = ((__int64 (*)(void))qword_1C0101370)();
  if ( (int)v28 < 0 )
  {
    v31 = 12;
    v16 = 6;
    goto LABEL_156;
  }
  v138 = 1;
  v139 = v18 & 0x80;
  if ( (v18 & 0x80) != 0 )
  {
    v29 = 1LL;
    if ( !v25 )
    {
      LOBYTE(v26) = (v21 & 0x20) == 0 && (v18 & 0xF) != 0;
      if ( (_BYTE)v26 )
        v29 = 3LL;
    }
    v30 = ((__int64 (__fastcall *)(__int64, __int64))qword_1C0101390)(v29, v26);
    v28 = v30;
    if ( v30 < 0 )
    {
      v72 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v72 + 24) = v28;
      WdLogEvent5_WdEvent(v72);
      DrvDxgkLogCodePointPacket(4LL, (unsigned int)v28, 0LL, 0LL);
      LODWORD(v28) = 0;
    }
  }
  v31 = v116;
  LODWORD(v32) = v133;
  v129 = a10;
  v118 = (v18 & 0x240) == 512;
  while ( 1 )
  {
    v33 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v33 + 24) = (unsigned int)v128[1];
    *(_QWORD *)(v33 + 32) = (int)v28;
    WdLogEvent5_WdEvent(v33);
    v128[0] = 0;
    v122 = 0;
    v117 = 0;
    FreePathsModality(v136[0]);
    FreePathsModality(v136[1]);
    v136[1] = 0LL;
    v136[0] = 0LL;
    if ( v123 )
      break;
    v34 = v18 & 0xF;
    if ( (v18 & 0xF) != 0 )
    {
      if ( (a6 & 0x20) != 0 && *((_QWORD *)a9 + 4) )
      {
        v35 = 1;
        v36 = 1;
      }
      else
      {
        v35 = 0;
        v36 = 0;
      }
      if ( v35 && !*((_DWORD *)a9 + 5) )
        v34 = 64;
      LODWORD(v28) = GetPathsModality(0LL, v136, ((a6 & 0x20) != 0 ? 0x9000 : 0) | (unsigned int)v34, v36);
      if ( (int)v28 >= 0 )
      {
        if ( !*((_WORD *)v136[0] + 10) )
        {
          v81 = WdLogNewEntry5_WdAssertion(v27);
          WdLogEvent5_WdAssertion(v81);
        }
        if ( v119 || (v118 = 1, (v18 & 0x40) != 0) )
          v118 = 0;
        if ( v35 )
        {
          if ( !*((_DWORD *)a9 + 5) || (v118 = 1, !*((_DWORD *)a9 + 6)) )
            v118 = 0;
          LODWORD(v28) = DrvValidateAndApplyDevMode(a9, v136);
          if ( (int)v28 < 0 )
          {
            v31 = 2;
            v16 = *((_DWORD *)a9 + 13);
            v127 = *((_DWORD *)a9 + 12);
            v121 = v16;
            if ( (_DWORD)v28 == -1073741266 )
              v31 = 23;
            goto LABEL_84;
          }
          if ( *((_DWORD *)a9 + 5) )
            v128[0] = 1;
        }
        v16 = 10;
        v121 = 10;
        goto LABEL_33;
      }
      v31 = 2;
      goto LABEL_194;
    }
    if ( (v18 & 0x10) != 0 )
    {
      LODWORD(v28) = AllocatePathModalityForDisplayConfig(a1, (struct DISPLAYCONFIG_PATH_INFO *)a2, v136);
      if ( (int)v28 >= 0 )
      {
        LODWORD(v28) = ConvertDisplayConfigToPathModality(
                         a1,
                         (struct DISPLAYCONFIG_PATH_INFO *)a2,
                         a3,
                         a4,
                         v18,
                         v136[0],
                         0LL);
        if ( (int)v28 < 0 )
        {
          v31 = 4;
          goto LABEL_84;
        }
        v84 = 47LL;
        if ( (v18 & 0x2000) != 0 )
          v84 = 8239LL;
        LODWORD(v28) = qword_1C01012D8(v84, v136[0], 0LL);
        if ( (int)v28 < 0 )
        {
          v31 = 5;
          goto LABEL_84;
        }
        v118 = !v119 && (v18 & 0x40) == 0;
        goto LABEL_33;
      }
      v82 = 3;
      goto LABEL_202;
    }
    if ( (v18 & 0x20) == 0 )
    {
      v110 = WdLogNewEntry5_WdAssertion(v27);
      *(_QWORD *)(v110 + 24) = v18;
      WdLogEvent5_WdAssertion(v110);
      v31 = 9;
      goto LABEL_273;
    }
    v128[0] = 0;
    if ( (a6 & 8) == 0 )
    {
      LODWORD(v28) = AllocatePathModalityForDisplayConfig(a1, (struct DISPLAYCONFIG_PATH_INFO *)a2, v136);
      if ( (int)v28 < 0 )
      {
        v31 = 6;
        goto LABEL_84;
      }
      LODWORD(v28) = ConvertDisplayConfigToPathModality(
                       a1,
                       (struct DISPLAYCONFIG_PATH_INFO *)a2,
                       a3,
                       a4,
                       v18,
                       v136[0],
                       v128);
      if ( (int)v28 < 0 )
      {
        v31 = 7;
        goto LABEL_84;
      }
      v85 = v136[0];
LABEL_242:
      if ( v128[0] )
      {
        if ( !*((_WORD *)v85 + 10) )
        {
          v94 = WdLogNewEntry5_WdAssertion(v27);
          WdLogEvent5_WdAssertion(v94);
          v85 = v136[0];
        }
        v95 = AllocPathsModality(*((_WORD *)v85 + 10));
        if ( (int)((__int64 (__fastcall *)(const struct _D3DKMT_GETPATHSMODALITY *, struct _D3DKMT_GETPATHSMODALITY *))qword_1C01016F8)(
                    v95,
                    v136[0]) < 0 )
        {
          v97 = WdLogNewEntry5_WdAssertion(v96);
          WdLogEvent5_WdAssertion(v97);
        }
        if ( (int)((__int64 (__fastcall *)(__int64, const struct _D3DKMT_GETPATHSMODALITY *))qword_1C01012D8)(47LL, v95) < 0 )
        {
          ConvertPreferredScalingToAdapterDefault(v136[0]);
        }
        else
        {
          LODWORD(v28) = ReplacePreferredScaling(v95, v136[0]);
          if ( (int)v28 < 0 )
          {
            FreePathsModality(v95);
            v31 = 20;
            goto LABEL_191;
          }
        }
        FreePathsModality(v95);
        v85 = v136[0];
      }
      LODWORD(v28) = qword_1C01012D8(256LL, v85, 0LL);
      if ( (int)v28 < 0 )
      {
        v31 = 8;
        goto LABEL_191;
      }
      v128[0] = 1;
LABEL_255:
      v16 = v121;
LABEL_33:
      if ( (v18 & 0x800) != 0 )
      {
        v37 = CreatePathPersistentMonitorsIfNeeded(v27, v136[0], &v132);
        v28 = v37;
        if ( v37 < 0 )
        {
          v98 = WdLogNewEntry5_WdError();
          *(_QWORD *)(v98 + 24) = v28;
          WdLogEvent5_WdError(v98);
          v31 = 10;
          goto LABEL_84;
        }
        v38 = ((__int64 (__fastcall *)(__int64, struct _D3DKMT_GETPATHSMODALITY *))qword_1C01012F8)(
                0x80000000LL,
                v136[0]);
        v28 = v38;
        if ( v38 != -1073741266 )
        {
          if ( v38 < 0 )
          {
            v99 = WdLogNewEntry5_WdError();
            *(_QWORD *)(v99 + 24) = v28;
            WdLogEvent5_WdError(v99);
            v31 = 22;
            goto LABEL_84;
          }
          if ( v132 )
          {
            v100 = WdLogNewEntry5_WdWarning();
            *(_QWORD *)(v100 + 24) = (unsigned int)v128[1];
            *(_QWORD *)(v100 + 32) = v28;
            WdLogEvent5_WdWarning(v100);
            LODWORD(v28) = -1073741266;
            goto LABEL_85;
          }
          goto LABEL_38;
        }
        v83 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v83 + 24) = (unsigned int)v128[1];
        *(_QWORD *)(v83 + 32) = -1073741266LL;
        WdLogEvent5_WdEvent(v83);
        v82 = 23;
LABEL_202:
        v31 = v82;
        v116 = v82;
        goto LABEL_85;
      }
LABEL_38:
      if ( (a6 & 0x20) != 0 && (!*((_QWORD *)a9 + 4) || *((_DWORD *)a9 + 2)) )
        v39 = 0x20000;
      else
        v39 = 0;
      v40 = v39 | (unsigned int)GetCcdRawmodeFlag();
      LODWORD(v40) = v40 | 0x8000;
      v41 = ((__int64 (__fastcall *)(__int64, struct _D3DKMT_GETPATHSMODALITY *))qword_1C01012E0)(v40, v136[0]);
      v28 = v41;
      if ( v41 < 0 )
      {
        v101 = WdLogNewEntry5_WdEvent();
        *(struct _D3DKMT_GETPATHSMODALITY **)(v101 + 24) = v136[0];
        *(_QWORD *)(v101 + 32) = v28;
        WdLogEvent5_WdEvent(v101);
        v31 = 11;
        goto LABEL_194;
      }
      if ( v139 )
      {
        v125 = 0;
        LODWORD(v28) = GetPathsModality(0LL, &v136[1], 1048640LL, 0LL);
        if ( (int)v28 >= 0 )
        {
          v42 = 0;
          if ( (v18 & 0x1000) != 0 )
            v42 = 0x10000;
          if ( (a6 & 0x10) != 0 )
            v42 |= 0x400000u;
          if ( (v18 & 0x1100) != 0 )
          {
            v125 = 1;
            v42 |= 0x4000u;
          }
          if ( v42 )
          {
            LODWORD(v28) = qword_1C01012D8(v42, v136[0], 0LL);
            if ( (int)v28 < 0 )
            {
              v31 = 14;
              goto LABEL_191;
            }
          }
          v43 = gpGraphicsDeviceList;
          v44 = 0;
          if ( gpGraphicsDeviceList )
          {
            do
            {
              if ( (*((_DWORD *)v43 + 40) & 0x800000) != 0 )
                ++v44;
              v43 = (wchar_t *)*((_QWORD *)v43 + 16);
            }
            while ( v43 );
            LODWORD(v32) = v133;
          }
          v45 = 0LL;
          if ( v44 )
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 68LL * v44, 0x7774656Cu);
            v45 = PoolWithTag;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, 68LL * v44);
              v47 = gpGraphicsDeviceList;
              v48 = 0;
              if ( gpGraphicsDeviceList )
              {
                do
                {
                  if ( (*((_DWORD *)v47 + 40) & 0x800000) != 0 )
                  {
                    v49 = 68LL * v48++;
                    *(_DWORD *)&v45[v49] = *((_DWORD *)v47 + 66);
                    *(_DWORD *)&v45[v49 + 4] = *((_DWORD *)v47 + 67);
                    *(_DWORD *)&v45[v49 + 8] = *((_DWORD *)v47 + 68);
                  }
                  v47 = (wchar_t *)*((_QWORD *)v47 + 16);
                }
                while ( v47 );
                LODWORD(v32) = v133;
              }
            }
            LOBYTE(v18) = a5;
          }
          DisplayScenarioJournalSetExpectedPathModality(
            216 * (unsigned int)*((unsigned __int16 *)v136[0] + 10),
            *((unsigned __int16 *)v136[0] + 10),
            (char *)v136[0] + 48,
            v44,
            v45);
          v50 = v125;
          LOBYTE(v51) = v125;
          v52 = ApplyPathsModality(
                  v136[0],
                  v42,
                  v51,
                  (_DWORD)a7,
                  (__int64)v129,
                  (__int64)&v124,
                  (__int64)&v122,
                  (__int64)a11);
          v127 = v52;
          v23 = 1;
          if ( v52 < 0 || v52 == 1 )
          {
            v31 = 16;
            LODWORD(v28) = -1073741823;
            v16 = 5;
          }
          else
          {
            if ( v122 )
            {
              v102 = WdLogNewEntry5_WdAssertion(v27);
              WdLogEvent5_WdAssertion(v102);
            }
            if ( v127 == 2 )
            {
              if ( v50 || *a11 )
              {
                v103 = WdLogNewEntry5_WdAssertion(v27);
                WdLogEvent5_WdAssertion(v103);
              }
              v53 = WdLogNewEntry5_WdWarning();
              *(struct _D3DKMT_GETPATHSMODALITY **)(v53 + 24) = v136[0];
              WdLogEvent5_WdWarning(v53);
              if ( !v124 )
              {
                v54 = v129;
                v117 = 1;
                goto LABEL_77;
              }
              *a11 = v129;
              v54 = 0LL;
              v129 = 0LL;
LABEL_76:
              v127 = 0;
            }
            else
            {
              if ( v124 )
              {
                v104 = WdLogNewEntry5_WdAssertion(v27);
                WdLogEvent5_WdAssertion(v104);
              }
              v54 = 0LL;
              v129 = 0LL;
            }
LABEL_77:
            if ( !v118 )
            {
              if ( (int)v28 >= 0 )
                goto LABEL_81;
              v31 = 17;
              goto LABEL_82;
            }
            v55 = ((__int64 (__fastcall *)(_QWORD, struct _D3DKMT_GETPATHSMODALITY *))qword_1C01012F8)(
                    (unsigned int)v128[0],
                    v136[0]);
            v28 = v55;
            if ( !a8 )
            {
              if ( v55 < 0 )
              {
                v105 = WdLogNewEntry5_WdError();
                *(_QWORD *)(v105 + 24) = v28;
                WdLogEvent5_WdError(v105);
                LODWORD(v28) = 0;
              }
              goto LABEL_81;
            }
            if ( v55 == -1073741266 )
            {
              if ( (v18 & 0x10) != 0 )
              {
                v106 = WdLogNewEntry5_WdAssertion(v27);
                WdLogEvent5_WdAssertion(v106);
              }
              v107 = WdLogNewEntry5_WdEvent();
              *(_QWORD *)(v107 + 24) = (unsigned int)v128[1];
              *(_QWORD *)(v107 + 32) = -1073741266LL;
              WdLogEvent5_WdEvent(v107);
              if ( !v117 )
              {
                if ( v54 )
                {
                  v108 = WdLogNewEntry5_WdAssertion(v27);
                  WdLogEvent5_WdAssertion(v108);
                }
                v27 = (__int64)a11;
                v120 = 1;
                v129 = *a11;
                *a11 = 0LL;
              }
              v31 = 24;
              v16 = 9;
            }
            else
            {
              if ( v55 < 0 )
              {
                v31 = 29;
                LODWORD(v28) = 0;
                v16 = 9;
                v121 = 9;
                goto LABEL_84;
              }
LABEL_81:
              v31 = 18;
LABEL_82:
              v16 = ((int)v28 >= 0) + 9;
            }
          }
LABEL_83:
          v121 = v16;
          goto LABEL_84;
        }
        v31 = 13;
LABEL_194:
        v16 = 7;
        goto LABEL_83;
      }
      if ( (v18 & 0x40) != 0 )
      {
        v54 = v129;
        goto LABEL_76;
      }
      v109 = WdLogNewEntry5_WdAssertion(v27);
      *(_QWORD *)(v109 + 24) = v18;
      WdLogEvent5_WdAssertion(v109);
      v31 = 21;
LABEL_273:
      LODWORD(v28) = -1073741811;
      goto LABEL_84;
    }
    LODWORD(v28) = GetPathsModality(0LL, v136, 64LL, 0LL);
    if ( (int)v28 < 0 )
    {
      v31 = 32;
      goto LABEL_84;
    }
    v85 = v136[0];
    v86 = 0;
    v87 = *((unsigned __int16 *)v136[0] + 10);
    v134 = v87;
    if ( !v87 )
    {
LABEL_229:
      if ( v87 < *((unsigned __int16 *)v85 + 10) )
      {
        v27 = 216LL * v87;
        if ( __PAIR64__(HIDWORD(v133), v32) == *(_QWORD *)((char *)v85 + v27 + 180) )
        {
          v18 = a5;
          v23 = 1;
          goto LABEL_242;
        }
      }
      v31 = 33;
      v23 = 1;
      goto LABEL_273;
    }
    while ( 1 )
    {
      v88 = (char *)v85 + 216 * v86;
      if ( (unsigned __int8)operator==(v88 + 56, a2) )
      {
        if ( *((_DWORD *)v88 + 16) == *(_DWORD *)(a2 + 8) && *((_DWORD *)v88 + 17) == *(_DWORD *)(a2 + 28) )
          break;
      }
      LODWORD(v28) = ConvertDisplayConfigScalingToPathModalityForPath(
                       (struct DISPLAYCONFIG_PATH_INFO *)a2,
                       (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v88 + 48),
                       v128);
      if ( (int)v28 < 0 )
      {
        v31 = 35;
        goto LABEL_235;
      }
LABEL_227:
      v85 = v136[0];
      if ( ++v86 >= *((unsigned __int16 *)v136[0] + 10) )
      {
        v87 = v134;
        v16 = v121;
        goto LABEL_229;
      }
    }
    if ( (*((_DWORD *)v88 + 12) & 0x800) == 0 )
    {
      v91 = WdLogNewEntry5_WdAssertion(v89);
      WdLogEvent5_WdAssertion(v91);
      v90 = v136[0];
    }
    v20 = (*((_DWORD *)v88 + 12) & 0x40000) == 0;
    v32 = *(_QWORD *)(v88 + 180);
    v133 = v32;
    if ( v20 )
    {
      v92 = WdLogNewEntry5_WdAssertion(v89);
      WdLogEvent5_WdAssertion(v92);
      v90 = v136[0];
    }
    v93 = *((_DWORD *)v88 + 62);
    v134 = v86;
    LODWORD(v28) = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
                     (struct DISPLAYCONFIG_PATH_INFO *)a2,
                     v86,
                     0xFFFFFFFF,
                     a3,
                     a4,
                     a5,
                     0,
                     v90,
                     v128);
    if ( (int)v28 >= 0 )
    {
      *((_DWORD *)v88 + 12) |= 0x40000u;
      *((_DWORD *)v88 + 62) = v93;
      goto LABEL_227;
    }
    v31 = 34;
LABEL_235:
    v23 = 1;
LABEL_191:
    v16 = v121;
LABEL_84:
    v116 = v31;
LABEL_85:
    v56 = ++v128[1];
    if ( (_DWORD)v28 != -1073741266 )
    {
LABEL_86:
      if ( (int)v28 >= 0 )
        goto LABEL_87;
LABEL_277:
      if ( (_BYTE)v126 )
      {
        v18 = a5;
        v123 = 1;
        v118 = 0;
        continue;
      }
LABEL_142:
      if ( (int)v28 < 0 )
        goto LABEL_281;
LABEL_87:
      v57 = v120;
      goto LABEL_88;
    }
    if ( v123 )
      goto LABEL_277;
    v18 = a5;
    if ( v56 >= 4 )
      goto LABEL_86;
  }
  if ( (v18 & 0xF) != 0xF )
  {
    v73 = WdLogNewEntry5_WdAssertion(v27);
    WdLogEvent5_WdAssertion(v73);
  }
  if ( v118 )
  {
    v74 = WdLogNewEntry5_WdAssertion(v27);
    WdLogEvent5_WdAssertion(v74);
  }
  if ( v130 < 6 )
  {
    v75 = v130;
    v76 = (const struct _RETRY_MODE *)((char *)&unk_1C00EE540 + 12 * v130);
    DrvDxgkLogCodePointPacket(75LL, *((unsigned int *)v76 + 1), *((unsigned int *)v76 + 2), 0LL);
    if ( *(_BYTE *)v76 )
    {
      v131 = 0;
      v130 = v75 + 1;
      LODWORD(v28) = GetPathsModality(0LL, v136, 15LL, 0LL);
    }
    else
    {
      v77 = DrvCreatePathModalityFromAllPaths(&v137, v131++, v136);
      LODWORD(v28) = v77;
      if ( v77 >= 0 )
      {
        if ( *((_WORD *)v136[0] + 10) != 1 )
        {
          v78 = WdLogNewEntry5_WdAssertion(v27);
          WdLogEvent5_WdAssertion(v78);
        }
      }
      else
      {
        ++v130;
        v131 = 0;
      }
    }
    if ( (int)v28 >= 0 )
    {
      v79 = DrvFunctionalizeBaseVidMode(v76, v136[0]);
      v28 = v79;
      if ( v79 >= 0 )
        goto LABEL_255;
      v80 = WdLogNewEntry5_WdError();
      *(_QWORD *)(v80 + 24) = v28;
      WdLogEvent5_WdError(v80);
    }
    v31 = 2;
    goto LABEL_191;
  }
  if ( (int)v28 >= 0 )
  {
    v111 = WdLogNewEntry5_WdAssertion(v27);
    WdLogEvent5_WdAssertion(v111);
    goto LABEL_142;
  }
LABEL_281:
  v57 = v120;
  if ( v120 )
  {
    v31 = 29;
    v127 = 0;
    v116 = 29;
    LODWORD(v28) = 0;
    v16 = 9;
  }
  if ( (int)v28 >= 0 )
  {
LABEL_88:
    v58 = v129;
    if ( v57 && !*a11 )
    {
      if ( !v129 )
      {
        v113 = WdLogNewEntry5_WdAssertion(v27);
        WdLogEvent5_WdAssertion(v113);
      }
      *a11 = v58;
    }
LABEL_89:
    v18 = a5;
    goto LABEL_90;
  }
  v65 = v129;
LABEL_163:
  if ( !(_BYTE)v126 )
    goto LABEL_89;
  if ( a8 )
  {
    v70 = WdLogNewEntry5_WdAssertion(v27);
    WdLogEvent5_WdAssertion(v70);
  }
  v18 = a5;
  LODWORD(v28) = DrvChangeDisplayFallback(
                   a7,
                   BYTE1(a5) & 1,
                   1u,
                   v65,
                   a11,
                   (enum _DXGK_DIAG_SDC_STAGE *)&v116,
                   &v117,
                   &v127);
  if ( (int)v28 < 0 )
  {
    v114 = WdLogNewEntry5_WdAssertion(v71);
    WdLogEvent5_WdAssertion(v114);
    v31 = v116;
  }
  else
  {
    v16 = 10;
    v31 = 31;
  }
LABEL_90:
  if ( (_DWORD)v28 != -1073741811 )
  {
LABEL_91:
    FreePathsModality(v136[1]);
    v136[1] = 0LL;
    if ( (int)GetPathsModality(0LL, &v136[1], 64LL, 0LL) >= 0 )
      DisplayScenarioJournalSetActualPathModality(
        216 * (unsigned int)*((unsigned __int16 *)v136[1] + 10),
        *((unsigned __int16 *)v136[1] + 10),
        (char *)v136[1] + 48);
    if ( *a11 )
    {
      v62 = *((_QWORD *)*a11 + 4);
      if ( v62 )
      {
        v63 = *(_QWORD *)(v62 + 2600);
        if ( ((v63 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
          DisplayScenarioJounralSetTSDDDState((*(_DWORD *)(v63 + 160) & 0x2000000) != 0);
      }
    }
  }
  v59 = v128[1];
  if ( a12 )
    *a12 = v128[1];
  if ( a13 )
    *a13 = v31;
  if ( a14 )
  {
    if ( !v117 || v120 )
      v23 = 0;
    *a14 = v23;
  }
  if ( a15 )
    *a15 = v122;
  if ( (a6 & 0x20) != 0 )
  {
    LOBYTE(v15) = v127 >= 0;
    if ( (int)v28 >= 0 != v15 )
    {
      v115 = WdLogNewEntry5_WdAssertion(a15);
      WdLogEvent5_WdAssertion(v115);
    }
    *((_DWORD *)a9 + 12) = v127;
    *((_DWORD *)a9 + 13) = v16;
  }
  if ( (a6 & 0x40) == 0 )
    LogDiagSDC(a1, (const void *)a2, a3, a4, v18, v28, v59, v31, v141, v117);
  v60 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v60 + 24) = (int)v28;
  WdLogEvent5_WdEvent(v60);
  DrvSetDisplayConfig_::_18_::_AUTO::__AUTO((AUTO_TGO *)v135);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v140, 5);
  return (unsigned int)v28;
}
