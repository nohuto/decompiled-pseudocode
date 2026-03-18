/*
 * XREFs of DrvSetDisplayConfigValidateParams @ 0x1C0086040
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C006DFB0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C001AB7C (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C001B38C (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     UserIsConsoleConnection @ 0x1C001F550 (UserIsConsoleConnection.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     ?Convert16bitSdcModeInfoIdxTo32bit@@YAIG@Z @ 0x1C00B7ED4 (-Convert16bitSdcModeInfoIdxTo32bit@@YAIG@Z.c)
 *     ?EnforceSDCCloneSourceIndexCoherency@@YAXIPEAUDISPLAYCONFIG_PATH_INFO@@PEAI@Z @ 0x1C00BA118 (-EnforceSDCCloneSourceIndexCoherency@@YAXIPEAUDISPLAYCONFIG_PATH_INFO@@PEAI@Z.c)
 *     ?IsVirtualModeDisabledForPath@@YAJU_LUID@@IPEAEPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C00BA6E8 (-IsVirtualModeDisabledForPath@@YAJU_LUID@@IPEAEPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?LogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C00BA770 (-LogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z.c)
 *     ?ValidateSDCv1ModeInfoArray@@YAJPEAU_DISPLAYCONFIG_MODE_INFO_SUMMARY@@I_N@Z @ 0x1C00BAA5C (-ValidateSDCv1ModeInfoArray@@YAJPEAU_DISPLAYCONFIG_MODE_INFO_SUMMARY@@I_N@Z.c)
 */

__int64 __fastcall DrvSetDisplayConfigValidateParams(
        __int64 a1,
        struct DISPLAYCONFIG_PATH_INFO *a2,
        __int64 a3,
        struct _LUID *a4,
        unsigned int a5,
        int a6,
        char a7)
{
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 LowPart; // rcx
  int v20; // eax
  __int64 HighPart; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  struct _LUID *v25; // rdx
  __int64 v26; // rcx
  struct _LUID *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v32; // [rsp+20h] [rbp-3B8h]
  unsigned int v33; // [rsp+24h] [rbp-3B4h]
  unsigned int v34; // [rsp+24h] [rbp-3B4h]
  unsigned int v35; // [rsp+24h] [rbp-3B4h]
  bool v36; // [rsp+29h] [rbp-3AFh]
  unsigned int j; // [rsp+2Ch] [rbp-3ACh]
  unsigned int m; // [rsp+30h] [rbp-3A8h]
  struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *v39; // [rsp+38h] [rbp-3A0h]
  unsigned int *v40; // [rsp+40h] [rbp-398h]
  unsigned int n; // [rsp+48h] [rbp-390h]
  bool v42; // [rsp+4Ch] [rbp-38Ch]
  struct _LUID *v43; // [rsp+50h] [rbp-388h]
  _DWORD *v44; // [rsp+58h] [rbp-380h]
  struct _LUID *v45; // [rsp+60h] [rbp-378h]
  unsigned int k; // [rsp+6Ch] [rbp-36Ch]
  struct _LUID *v47; // [rsp+70h] [rbp-368h]
  unsigned __int8 v48[8]; // [rsp+78h] [rbp-360h] BYREF
  struct _LUID *v49; // [rsp+80h] [rbp-358h]
  unsigned int v50; // [rsp+88h] [rbp-350h]
  int v51; // [rsp+8Ch] [rbp-34Ch]
  unsigned int i; // [rsp+90h] [rbp-348h]
  struct DISPLAYCONFIG_PATH_INFO *v53; // [rsp+98h] [rbp-340h]
  unsigned int v54; // [rsp+A0h] [rbp-338h]
  unsigned int v55; // [rsp+A4h] [rbp-334h]
  char v56; // [rsp+A8h] [rbp-330h]
  char v57; // [rsp+A9h] [rbp-32Fh]
  char v58; // [rsp+AAh] [rbp-32Eh]
  char v59; // [rsp+ABh] [rbp-32Dh]
  char v60; // [rsp+ACh] [rbp-32Ch]
  char v61; // [rsp+ADh] [rbp-32Bh]
  char v62; // [rsp+AEh] [rbp-32Ah]
  char v63; // [rsp+AFh] [rbp-329h]
  char v64; // [rsp+B0h] [rbp-328h]
  char v65; // [rsp+B1h] [rbp-327h]
  char v66; // [rsp+B2h] [rbp-326h]
  char v67; // [rsp+B3h] [rbp-325h]
  char v68; // [rsp+B4h] [rbp-324h]
  char v69; // [rsp+B5h] [rbp-323h]
  char v70; // [rsp+B6h] [rbp-322h]
  char v71; // [rsp+B7h] [rbp-321h]
  char v72; // [rsp+B8h] [rbp-320h]
  char v73; // [rsp+B9h] [rbp-31Fh]
  char v74; // [rsp+BAh] [rbp-31Eh]
  char v75; // [rsp+BBh] [rbp-31Dh]
  char v76; // [rsp+BCh] [rbp-31Ch]
  char v77; // [rsp+BDh] [rbp-31Bh]
  char v78; // [rsp+BEh] [rbp-31Ah]
  char v79; // [rsp+BFh] [rbp-319h]
  char v80; // [rsp+C0h] [rbp-318h]
  char v81; // [rsp+C1h] [rbp-317h]
  char v82; // [rsp+C2h] [rbp-316h]
  char v83; // [rsp+C3h] [rbp-315h]
  char v84; // [rsp+C4h] [rbp-314h]
  char v85; // [rsp+C5h] [rbp-313h]
  char v86; // [rsp+C6h] [rbp-312h]
  char v87; // [rsp+C7h] [rbp-311h]
  char v88; // [rsp+C8h] [rbp-310h]
  char v89; // [rsp+C9h] [rbp-30Fh]
  char v90; // [rsp+CAh] [rbp-30Eh]
  char v91; // [rsp+CBh] [rbp-30Dh]
  char v92; // [rsp+CCh] [rbp-30Ch]
  char v93; // [rsp+CDh] [rbp-30Bh]
  char v94; // [rsp+CEh] [rbp-30Ah]
  char v95; // [rsp+CFh] [rbp-309h]
  char v96; // [rsp+D0h] [rbp-308h]
  char v97; // [rsp+D1h] [rbp-307h]
  char v98; // [rsp+D2h] [rbp-306h]
  char v99; // [rsp+D3h] [rbp-305h]
  char v100; // [rsp+D4h] [rbp-304h]
  char v101; // [rsp+D5h] [rbp-303h]
  char v102; // [rsp+D6h] [rbp-302h]
  char v103; // [rsp+D7h] [rbp-301h]
  char v104; // [rsp+D8h] [rbp-300h]
  char v105; // [rsp+D9h] [rbp-2FFh]
  char v106; // [rsp+DAh] [rbp-2FEh]
  char v107; // [rsp+DBh] [rbp-2FDh]
  char v108; // [rsp+DCh] [rbp-2FCh]
  char v109; // [rsp+DDh] [rbp-2FBh]
  char v110; // [rsp+DEh] [rbp-2FAh]
  char v111; // [rsp+DFh] [rbp-2F9h]
  unsigned int v112; // [rsp+E0h] [rbp-2F8h] BYREF
  char v113; // [rsp+E4h] [rbp-2F4h]
  int v114; // [rsp+E8h] [rbp-2F0h]
  char v115; // [rsp+ECh] [rbp-2ECh]
  char v116; // [rsp+EDh] [rbp-2EBh]
  char v117; // [rsp+EEh] [rbp-2EAh]
  char v118; // [rsp+EFh] [rbp-2E9h]
  char v119; // [rsp+F0h] [rbp-2E8h]
  char v120; // [rsp+F1h] [rbp-2E7h]
  char v121; // [rsp+F2h] [rbp-2E6h]
  char v122; // [rsp+F3h] [rbp-2E5h]
  char v123; // [rsp+F4h] [rbp-2E4h]
  char v124; // [rsp+F5h] [rbp-2E3h]
  char v125; // [rsp+F6h] [rbp-2E2h]
  char v126; // [rsp+F7h] [rbp-2E1h]
  char v127; // [rsp+F8h] [rbp-2E0h]
  char v128; // [rsp+F9h] [rbp-2DFh]
  char v129; // [rsp+FAh] [rbp-2DEh]
  char v130; // [rsp+FBh] [rbp-2DDh]
  char v131; // [rsp+FCh] [rbp-2DCh]
  char v132; // [rsp+FDh] [rbp-2DBh]
  char v133; // [rsp+FEh] [rbp-2DAh]
  char v134; // [rsp+FFh] [rbp-2D9h]
  char v135; // [rsp+100h] [rbp-2D8h]
  char v136; // [rsp+101h] [rbp-2D7h]
  char v137; // [rsp+102h] [rbp-2D6h]
  char v138; // [rsp+103h] [rbp-2D5h]
  char v139; // [rsp+104h] [rbp-2D4h]
  _QWORD *v140; // [rsp+108h] [rbp-2D0h]
  _QWORD *v141; // [rsp+110h] [rbp-2C8h]
  _QWORD *v142; // [rsp+118h] [rbp-2C0h]
  _QWORD *v143; // [rsp+120h] [rbp-2B8h]
  _QWORD *v144; // [rsp+128h] [rbp-2B0h]
  _QWORD *v145; // [rsp+130h] [rbp-2A8h]
  _QWORD *v146; // [rsp+138h] [rbp-2A0h]
  unsigned int Size; // [rsp+140h] [rbp-298h]
  int Size_4; // [rsp+144h] [rbp-294h]
  BOOL v149; // [rsp+148h] [rbp-290h]
  BOOL v150; // [rsp+14Ch] [rbp-28Ch]
  _QWORD *v151; // [rsp+150h] [rbp-288h]
  BOOL v152; // [rsp+158h] [rbp-280h]
  _QWORD *v153; // [rsp+160h] [rbp-278h]
  BOOL v154; // [rsp+168h] [rbp-270h]
  _QWORD *v155; // [rsp+170h] [rbp-268h]
  _QWORD *v156; // [rsp+178h] [rbp-260h]
  _QWORD *v157; // [rsp+180h] [rbp-258h]
  _QWORD *v158; // [rsp+188h] [rbp-250h]
  _QWORD *v159; // [rsp+190h] [rbp-248h]
  _QWORD *v160; // [rsp+198h] [rbp-240h]
  _QWORD *v161; // [rsp+1A0h] [rbp-238h]
  _QWORD *v162; // [rsp+1A8h] [rbp-230h]
  _QWORD *v163; // [rsp+1B0h] [rbp-228h]
  _QWORD *v164; // [rsp+1B8h] [rbp-220h]
  _QWORD *v165; // [rsp+1C0h] [rbp-218h]
  _QWORD *v166; // [rsp+1C8h] [rbp-210h]
  _QWORD *v167; // [rsp+1D0h] [rbp-208h]
  _QWORD *v168; // [rsp+1D8h] [rbp-200h]
  _QWORD *v169; // [rsp+1E0h] [rbp-1F8h]
  _QWORD *v170; // [rsp+1E8h] [rbp-1F0h]
  _QWORD *v171; // [rsp+1F0h] [rbp-1E8h]
  _QWORD *v172; // [rsp+1F8h] [rbp-1E0h]
  _QWORD *v173; // [rsp+200h] [rbp-1D8h]
  __int64 v174; // [rsp+208h] [rbp-1D0h]
  __int64 v175; // [rsp+210h] [rbp-1C8h]
  __int64 v176; // [rsp+218h] [rbp-1C0h]
  __int64 v177; // [rsp+220h] [rbp-1B8h]
  __int64 v178; // [rsp+228h] [rbp-1B0h]
  __int64 v179; // [rsp+230h] [rbp-1A8h]
  __int64 v180; // [rsp+238h] [rbp-1A0h]
  __int64 v181; // [rsp+240h] [rbp-198h]
  __int64 v182; // [rsp+248h] [rbp-190h]
  __int64 v183; // [rsp+250h] [rbp-188h]
  __int64 v184; // [rsp+258h] [rbp-180h]
  __int64 v185; // [rsp+260h] [rbp-178h]
  __int64 v186; // [rsp+268h] [rbp-170h]
  __int64 v187; // [rsp+270h] [rbp-168h]
  __int64 v188; // [rsp+278h] [rbp-160h]
  __int64 v189; // [rsp+280h] [rbp-158h]
  __int64 v190; // [rsp+288h] [rbp-150h]
  __int64 v191; // [rsp+290h] [rbp-148h]
  __int64 v192; // [rsp+298h] [rbp-140h]
  __int64 v193; // [rsp+2A0h] [rbp-138h]
  __int64 v194; // [rsp+2A8h] [rbp-130h]
  __int64 v195; // [rsp+2B0h] [rbp-128h]
  __int64 v196; // [rsp+2B8h] [rbp-120h]
  __int64 v197; // [rsp+2C0h] [rbp-118h]
  __int64 v198; // [rsp+2C8h] [rbp-110h]
  __int64 v199; // [rsp+2D0h] [rbp-108h]
  __int64 v200; // [rsp+2D8h] [rbp-100h]
  __int64 v201; // [rsp+2E0h] [rbp-F8h]
  __int64 v202; // [rsp+2E8h] [rbp-F0h]
  __int64 v203; // [rsp+2F0h] [rbp-E8h]
  __int64 v204; // [rsp+2F8h] [rbp-E0h]
  __int64 v205; // [rsp+300h] [rbp-D8h]
  __int64 v206; // [rsp+308h] [rbp-D0h]
  __int64 v207; // [rsp+310h] [rbp-C8h]
  __int64 v208; // [rsp+318h] [rbp-C0h]
  __int64 v209; // [rsp+320h] [rbp-B8h]
  __int64 v210; // [rsp+328h] [rbp-B0h]
  __int64 v211; // [rsp+330h] [rbp-A8h]
  __int64 v212; // [rsp+338h] [rbp-A0h]
  __int64 v213; // [rsp+340h] [rbp-98h]
  __int64 v214; // [rsp+348h] [rbp-90h]
  __int64 v215; // [rsp+350h] [rbp-88h]
  __int64 v216; // [rsp+358h] [rbp-80h]
  __int64 v217; // [rsp+360h] [rbp-78h]
  __int64 v218; // [rsp+368h] [rbp-70h]
  __int64 v219; // [rsp+370h] [rbp-68h]
  __int64 v220; // [rsp+378h] [rbp-60h]
  __int64 v221; // [rsp+380h] [rbp-58h]
  __int64 v222; // [rsp+388h] [rbp-50h]
  char *Str1; // [rsp+390h] [rbp-48h]
  __int64 v224; // [rsp+398h] [rbp-40h]
  __int64 v225; // [rsp+3A0h] [rbp-38h]
  __int64 v226; // [rsp+3A8h] [rbp-30h]
  __int64 v227; // [rsp+3B0h] [rbp-28h]
  __int64 v228; // [rsp+3B8h] [rbp-20h]
  __int64 v229; // [rsp+3C0h] [rbp-18h]
  unsigned int v230; // [rsp+3E0h] [rbp+8h]
  unsigned int v232; // [rsp+3F0h] [rbp+18h]

  v232 = a3;
  v230 = a1;
  v32 = 0;
  v39 = 0LL;
  if ( a7 )
  {
    if ( (a5 & 0x80) != 0 && DrvIsTemporarySettingChangeDisabled() )
    {
      v32 = -1073741790;
      v218 = WdLogNewEntry5_WdError(a1, a2, a3, a4);
      *(_QWORD *)(v218 + 24) = -1073741790LL;
      v94 = WdLogEvent5_WdError(v218);
      goto LABEL_360;
    }
    if ( (a5 & 0x200) != 0 && DrvIsPermanentSettingChangesDisabled() )
    {
      v32 = -1073741790;
      v220 = WdLogNewEntry5_WdError(a1, a2, a3, a4);
      *(_QWORD *)(v220 + 24) = -1073741790LL;
      v96 = WdLogEvent5_WdError(v220);
      goto LABEL_360;
    }
  }
  if ( (a5 & 0xC0000000) != 0 )
  {
    if ( (a5 & 0x80) != 0 )
    {
      if ( a5 == 1073741952 || a5 == -2147483520 )
      {
        CurrentProcess = PsGetCurrentProcess(a1, a2);
        Str1 = (char *)PsGetProcessImageFileName(CurrentProcess);
        if ( gbBypassPresenterViewProcessCheck || Str1 && !_stricmp(Str1, "explorer.exe") )
        {
          if ( v230 || a2 || v232 || a4 )
          {
            v32 = -1073741811;
            v222 = WdLogNewEntry5_WdError(v9, v8, v10, v11);
            *(_QWORD *)(v222 + 24) = -1073741811LL;
            v104 = WdLogEvent5_WdError(v222);
          }
          else
          {
            v32 = 0;
            v225 = WdLogNewEntry5_WdTrace(v9, v8, v10);
            *(_QWORD *)(v225 + 24) = a5;
            v106 = WdLogEvent5_WdTrace(v225);
          }
        }
        else
        {
          v32 = -1073741581;
          v213 = WdLogNewEntry5_WdError(v9, v8, v10, v11);
          *(_QWORD *)(v213 + 24) = a5;
          *(_QWORD *)(v213 + 32) = -1073741581LL;
          v102 = WdLogEvent5_WdError(v213);
        }
      }
      else
      {
        v32 = -1073741581;
        v176 = WdLogNewEntry5_WdError(a1, a2, a3, a4);
        *(_QWORD *)(v176 + 24) = a5;
        *(_QWORD *)(v176 + 32) = -1073741581LL;
        v100 = WdLogEvent5_WdError(v176);
      }
    }
    else
    {
      v32 = -1073741581;
      v216 = WdLogNewEntry5_WdError(a1, a2, a3, a4);
      *(_QWORD *)(v216 + 24) = a5;
      *(_QWORD *)(v216 + 32) = -1073741581LL;
      v98 = WdLogEvent5_WdError(v216);
    }
    goto LABEL_360;
  }
  if ( (a6 & 1) != 0 )
  {
    if ( a6 == 1 && a5 == 128 && !v230 && !v232 )
    {
      v32 = 0;
    }
    else
    {
      v32 = -1073741581;
      v178 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v178 + 24) = a5;
      *(_QWORD *)(v178 + 32) = -1073741581LL;
      v108 = WdLogEvent5_WdAssertion(v178);
    }
    goto LABEL_360;
  }
  if ( ((a6 & 2) != 0 || (a6 & 4) != 0) && (a5 & 0x88F) != 0x88F )
  {
    v32 = -1073741581;
    v204 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v204 + 24) = a5;
    *(_QWORD *)(v204 + 32) = -1073741581LL;
    v110 = WdLogEvent5_WdAssertion(v204);
    goto LABEL_360;
  }
  if ( (a6 & 0x10) != 0 && (a6 & 8) == 0 )
  {
    v32 = -1073741581;
    v180 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v180 + 24) = a5;
    *(_QWORD *)(v180 + 32) = -1073741581LL;
    v116 = WdLogEvent5_WdAssertion(v180);
    goto LABEL_360;
  }
  if ( (a6 & 8) != 0 && (v230 != 1 || v232 != 2) )
  {
    v32 = -1073741581;
    v151 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1);
    v151[3] = v230;
    v151[4] = v232;
    v151[5] = a5;
    v151[6] = -1073741581LL;
    v118 = WdLogEvent5_WdAssertion(v151);
    goto LABEL_360;
  }
  if ( (a6 & 8) != 0 && (a5 & 0x20) == 0 )
  {
    v32 = -1073741581;
    v215 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v215 + 24) = a5;
    *(_QWORD *)(v215 + 32) = -1073741581LL;
    v120 = WdLogEvent5_WdAssertion(v215);
    goto LABEL_360;
  }
  if ( !UserIsConsoleConnection() && (a5 & 0x88F) != 0x88F )
  {
    v32 = -1073741790;
    v182 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
    *(_QWORD *)(v182 + 24) = a5;
    *(_QWORD *)(v182 + 32) = -1073741790LL;
    v122 = WdLogEvent5_WdError(v182);
    goto LABEL_360;
  }
  if ( (a5 & 0xFFFF0000) != 0 )
  {
    v32 = -1073741581;
    v206 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
    *(_QWORD *)(v206 + 24) = a5;
    *(_QWORD *)(v206 + 32) = -1073741581LL;
    v124 = WdLogEvent5_WdError(v206);
    goto LABEL_360;
  }
  if ( (a5 & 0xC0) == 0 || (a5 & 0xC0) == 0xC0 )
  {
    v32 = -1073741581;
    v184 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
    *(_QWORD *)(v184 + 24) = a5;
    *(_QWORD *)(v184 + 32) = -1073741581LL;
    v126 = WdLogEvent5_WdError(v184);
    goto LABEL_360;
  }
  if ( (a5 & 0x180) == 0x100 )
  {
    v32 = -1073741581;
    v217 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
    *(_QWORD *)(v217 + 24) = a5;
    *(_QWORD *)(v217 + 32) = -1073741581LL;
    v128 = WdLogEvent5_WdError(v217);
    goto LABEL_360;
  }
  if ( (a5 & 0x1000) != 0 && (a5 & 0xA0) != 0xA0 )
  {
    v32 = -1073741581;
    v186 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
    *(_QWORD *)(v186 + 24) = a5;
    *(_QWORD *)(v186 + 32) = -1073741581LL;
    v130 = WdLogEvent5_WdError(v186);
    goto LABEL_360;
  }
  if ( (a5 & 0x2000) != 0 && (a5 & 0x10) == 0 )
  {
    v32 = -1073741581;
    v208 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
    *(_QWORD *)(v208 + 24) = a5;
    *(_QWORD *)(v208 + 32) = -1073741581LL;
    v132 = WdLogEvent5_WdError(v208);
    goto LABEL_360;
  }
  if ( (a5 & 0x1F) != 0 )
  {
    if ( (a5 & 0x400) != 0 )
    {
      v32 = -1073741581;
      v188 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
      *(_QWORD *)(v188 + 24) = a5;
      *(_QWORD *)(v188 + 32) = -1073741581LL;
      v134 = WdLogEvent5_WdError(v188);
    }
    else if ( (a5 & 0x20) != 0 )
    {
      v32 = -1073741581;
      v174 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
      *(_QWORD *)(v174 + 24) = a5;
      *(_QWORD *)(v174 + 32) = -1073741581LL;
      v135 = WdLogEvent5_WdError(v174);
    }
    else if ( (a5 & 0x200) != 0 )
    {
      v32 = -1073741581;
      v190 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
      *(_QWORD *)(v190 + 24) = a5;
      *(_QWORD *)(v190 + 32) = -1073741581LL;
      v59 = WdLogEvent5_WdError(v190);
    }
    else if ( a4 )
    {
      v32 = -1073741582;
      v210 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
      *(_QWORD *)(v210 + 24) = a5;
      *(_QWORD *)(v210 + 32) = -1073741582LL;
      v103 = WdLogEvent5_WdError(v210);
    }
    else if ( v232 )
    {
      v32 = -1073741583;
      v192 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
      *(_QWORD *)(v192 + 24) = a5;
      *(_QWORD *)(v192 + 32) = -1073741583LL;
      v61 = WdLogEvent5_WdError(v192);
    }
    else if ( (a5 & 0x10) != 0 )
    {
      if ( (a5 & 0x800) != 0 )
      {
        v32 = -1073741581;
        v214 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
        *(_QWORD *)(v214 + 24) = a5;
        *(_QWORD *)(v214 + 32) = -1073741581LL;
        v125 = WdLogEvent5_WdError(v214);
      }
      else if ( a2 )
      {
        if ( v230 )
        {
          v53 = a2;
          for ( i = 0; i < v230; ++i )
          {
            if ( (a5 & 0x8000) != 0 )
            {
              if ( (*((_DWORD *)v53 + 17) & 1) != 0
                && ((unsigned __int16)HIWORD(*((_DWORD *)v53 + 3)) != 0xFFFF
                 || (unsigned __int16)HIWORD(*((_DWORD *)v53 + 8)) != 0xFFFF
                 || (unsigned __int16)*((_DWORD *)v53 + 8) != 0xFFFF
                 || (unsigned __int16)*((_DWORD *)v53 + 3) == 0xFFFF) )
              {
                v32 = -1073741584;
                v170 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14, v15);
                v170[3] = a5;
                v170[4] = i;
                v170[5] = -1073741584LL;
                v65 = WdLogEvent5_WdError(v170);
                break;
              }
            }
            else if ( (*((_DWORD *)v53 + 17) & 1) != 0 && (*((_DWORD *)v53 + 3) != -1 || *((_DWORD *)v53 + 8) != -1) )
            {
              v32 = -1073741584;
              v158 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14, v15);
              v158[3] = a5;
              v158[4] = i;
              v158[5] = -1073741584LL;
              v139 = WdLogEvent5_WdError(v158);
              break;
            }
            v53 = (struct DISPLAYCONFIG_PATH_INFO *)((char *)v53 + 72);
          }
        }
        else
        {
          v32 = -1073741585;
          v212 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
          *(_QWORD *)(v212 + 24) = a5;
          *(_QWORD *)(v212 + 32) = -1073741585LL;
          v105 = WdLogEvent5_WdError(v212);
        }
      }
      else
      {
        v32 = -1073741584;
        v194 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
        *(_QWORD *)(v194 + 24) = a5;
        *(_QWORD *)(v194 + 32) = -1073741584LL;
        v63 = WdLogEvent5_WdError(v194);
      }
    }
    else if ( a2 )
    {
      v32 = -1073741584;
      v196 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
      *(_QWORD *)(v196 + 24) = a5;
      *(_QWORD *)(v196 + 32) = -1073741584LL;
      v67 = WdLogEvent5_WdError(v196);
    }
    else if ( v230 )
    {
      v32 = -1073741585;
      v207 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
      *(_QWORD *)(v207 + 24) = a5;
      *(_QWORD *)(v207 + 32) = -1073741585LL;
      v107 = WdLogEvent5_WdError(v207);
    }
  }
  else
  {
    if ( (a5 & 0x20) == 0 )
    {
      v32 = -1073741581;
      v198 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
      *(_QWORD *)(v198 + 24) = a5;
      *(_QWORD *)(v198 + 32) = -1073741581LL;
      v69 = WdLogEvent5_WdError(v198);
      goto LABEL_360;
    }
    if ( (a5 & 0x800) != 0 )
    {
      v32 = -1073741581;
      v209 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
      *(_QWORD *)(v209 + 24) = a5;
      *(_QWORD *)(v209 + 32) = -1073741581LL;
      v127 = WdLogEvent5_WdError(v209);
      goto LABEL_360;
    }
    if ( !a2 )
    {
      v32 = -1073741584;
      v200 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
      *(_QWORD *)(v200 + 24) = a5;
      *(_QWORD *)(v200 + 32) = -1073741584LL;
      v71 = WdLogEvent5_WdError(v200);
      goto LABEL_360;
    }
    if ( !v230 )
    {
      v32 = -1073741585;
      v211 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
      *(_QWORD *)(v211 + 24) = a5;
      *(_QWORD *)(v211 + 32) = -1073741585LL;
      v109 = WdLogEvent5_WdError(v211);
      goto LABEL_360;
    }
    if ( a4 && !v232 || !a4 && v232 )
    {
      v32 = -1073741583;
      v153 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14, v15);
      v153[3] = a5;
      v153[4] = a4;
      v153[5] = v232;
      v153[6] = -1073741583LL;
      v73 = WdLogEvent5_WdError(v153);
      goto LABEL_360;
    }
    if ( (a5 & 0x8000u) != 0 )
    {
      EnforceSDCCloneSourceIndexCoherency(v230, a2, &v112);
      if ( v112 != -1 )
      {
        v224 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
        *(_QWORD *)(v224 + 24) = v112;
        v138 = WdLogEvent5_WdError(v224);
        LogCodePointPacket(57LL, v112, 0LL, 0LL);
      }
    }
    if ( v232 )
    {
      Size = 16 * v232;
      v39 = (struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *)PALLOCMEM2(16 * v232, 1936876615LL, 1);
      if ( !v39 )
      {
        v32 = -1073741801;
        v166 = (_QWORD *)WdLogNewEntry5_WdError(v16, v12, v14, v15);
        v166[3] = v232;
        v166[4] = a5;
        v166[5] = -1073741801LL;
        v75 = WdLogEvent5_WdError(v166);
        goto LABEL_360;
      }
      v226 = Size;
      memset(v39, 0, Size);
      v13 = 0LL;
    }
    v42 = 0;
    for ( j = 0; j < v230; ++j )
    {
      v13 = (__int64)a2 + 72 * j;
      v40 = (unsigned int *)v13;
      v47 = 0LL;
      v43 = 0LL;
      v45 = 0LL;
      if ( (a5 & 0x8000u) != 0 && (*(_DWORD *)(v13 + 68) & 0xFFFFFFF2) != 0 )
      {
        v32 = -1073741584;
        v160 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14, v15);
        v160[3] = v40[17];
        v160[4] = 13LL;
        v160[5] = -1073741584LL;
        v111 = WdLogEvent5_WdError(v160);
        goto LABEL_360;
      }
      if ( (*(_DWORD *)(v13 + 68) & 1) != 0 )
      {
        v32 = IsVirtualModeDisabledForPath(*(struct _LUID *)v13, *(_DWORD *)(v13 + 28), v48, 0LL);
        if ( v32 < 0 )
        {
          v219 = WdLogNewEntry5_WdError(v17, v12, v14, v15);
          *(_QWORD *)(v219 + 24) = v32;
          v77 = WdLogEvent5_WdError(v219);
          v32 = -1073741584;
          goto LABEL_360;
        }
        v149 = v48[0] == 0;
        v36 = v48[0] == 0;
        if ( v48[0] )
          v18 = v40[17] & 0xFFFFFFF7;
        else
          v18 = v40[17] | 8;
        v13 = (__int64)a2 + 72 * j;
        v40[17] = v18;
        if ( (a5 & 0x8000u) == 0 )
        {
          if ( (v40[17] & 4) != 0 )
          {
            v32 = -1073741584;
            v175 = WdLogNewEntry5_WdError(v40, v12, v14, v15);
            *(_QWORD *)(v175 + 24) = j;
            *(_QWORD *)(v175 + 32) = -1073741584LL;
            v79 = WdLogEvent5_WdError(v175);
            goto LABEL_360;
          }
        }
        else if ( !v36 && (v40[17] & 4) != 0 )
        {
          v32 = -1073741584;
          v202 = WdLogNewEntry5_WdError(v40, v12, v14, v15);
          *(_QWORD *)(v202 + 24) = j;
          *(_QWORD *)(v202 + 32) = -1073741584LL;
          v129 = WdLogEvent5_WdError(v202);
          goto LABEL_360;
        }
        if ( (a5 & 0x8000u) == 0 )
          v33 = v40[3];
        else
          v33 = Convert16bitSdcModeInfoIdxTo32bit(HIWORD(v40[3]));
        if ( v33 == -1 )
        {
          if ( (a5 & 0x8000u) != 0 )
          {
            if ( (unsigned __int16)v40[3] == 0xFFFF )
            {
              v32 = -1073741582;
              v179 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
              *(_QWORD *)(v179 + 24) = j;
              *(_QWORD *)(v179 + 32) = -1073741582LL;
              v131 = WdLogEvent5_WdError(v179);
              goto LABEL_360;
            }
            for ( k = 0; k < j; ++k )
            {
              if ( (v40[17] & 1) != 0 )
              {
                v13 = (unsigned __int16)v40[3];
                if ( (unsigned __int16)*((_DWORD *)a2 + 18 * k + 3) == (_DWORD)v13 )
                  break;
              }
            }
            if ( k < j )
            {
              v13 = v40[17] & 8;
              if ( (*((_DWORD *)a2 + 18 * k + 17) & 8) != (_DWORD)v13 )
              {
                v32 = -1073741582;
                v168 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14, v15);
                v168[3] = k;
                v168[4] = j;
                v168[5] = -1073741582LL;
                v87 = WdLogEvent5_WdError(v168);
                goto LABEL_360;
              }
              if ( !v36 )
              {
                v13 = (__int64)a2;
                v12 = (struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *)*v40;
                if ( *((_DWORD *)a2 + 18 * k) != (_DWORD)v12
                  || (v13 = (__int64)a2,
                      v12 = (struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *)v40[1],
                      *((_DWORD *)a2 + 18 * k + 1) != (_DWORD)v12) )
                {
                  v32 = -1073741582;
                  v164 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14, v15);
                  v164[3] = k;
                  v164[4] = j;
                  v164[5] = -1073741582LL;
                  v117 = WdLogEvent5_WdError(v164);
                  goto LABEL_360;
                }
              }
            }
          }
          v42 = 1;
        }
        else
        {
          if ( v33 >= v232 )
          {
            v32 = -1073741583;
            v140 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14, v15);
            v140[3] = v33;
            v140[4] = v232;
            v140[5] = j;
            v140[6] = a5;
            v140[7] = -1073741583LL;
            v113 = WdLogEvent5_WdError(v140);
            goto LABEL_360;
          }
          v45 = &a4[8 * (unsigned __int64)v33];
          if ( (a5 & 0x8000u) != 0 && (unsigned __int16)v40[3] != 0xFFFF )
          {
            v32 = -1073741582;
            v177 = WdLogNewEntry5_WdError(&a4[8 * (unsigned __int64)v33], v12, v14, v15);
            *(_QWORD *)(v177 + 24) = j;
            *(_QWORD *)(v177 + 32) = -1073741582LL;
            v81 = WdLogEvent5_WdError(v177);
            goto LABEL_360;
          }
          LowPart = v45[1].LowPart;
          v152 = *v40 == (_DWORD)LowPart && (LowPart = (unsigned int)v45[1].HighPart, v40[1] == (_DWORD)LowPart);
          if ( !v152 || (LowPart = (unsigned int)v45->HighPart, __PAIR64__(v40[2], 1) != *v45) )
          {
            v32 = -1073741582;
            v143 = (_QWORD *)WdLogNewEntry5_WdError(LowPart, v12, v14, v15);
            v143[3] = j;
            v143[4] = v40[2];
            v143[5] = (unsigned int)v45->HighPart;
            v143[6] = a5;
            v143[7] = -1073741582LL;
            v136 = WdLogEvent5_WdError(v143);
            goto LABEL_360;
          }
          if ( v45[3].LowPart == 1 || v45[3].LowPart == 2 || v45[3].LowPart == 3 )
          {
            v32 = -1073741582;
            v141 = (_QWORD *)WdLogNewEntry5_WdError(LowPart, v12, v14, v15);
            v141[3] = j;
            v141[4] = v40[2];
            v141[5] = (unsigned int)v45->HighPart;
            v141[6] = a5;
            v141[7] = -1073741582LL;
            v83 = WdLogEvent5_WdError(v141);
            goto LABEL_360;
          }
          if ( v36 )
            v20 = *((_DWORD *)v39 + 4 * v33) | 0x100000;
          else
            v20 = *((_DWORD *)v39 + 4 * v33) | 0x200000;
          *((_DWORD *)v39 + 4 * v33) = v20;
          if ( v40[10] == 2 || v40[10] == 4 )
            *((_DWORD *)v39 + 4 * v33) |= 0x2000000u;
          *((_DWORD *)v39 + 4 * v33) = (unsigned __int16)(*((_DWORD *)v39 + 4 * v33) + 1) | *((_DWORD *)v39 + 4 * v33) & 0xFFFF0000;
          *((struct _LUID *)v39 + 2 * v33 + 1) = v45[1];
          *((_DWORD *)v39 + 4 * v33 + 1) = v45->HighPart;
          *((_DWORD *)v39 + 4 * v33) = (v36 << 23) | *((_DWORD *)v39 + 4 * v33) & 0xFF7FFFFF;
          if ( v45[3].HighPart || v45[4].LowPart )
          {
            v12 = v39;
            *((_DWORD *)v39 + 4 * v33) |= 0x20000u;
          }
          else
          {
            v12 = v39;
            *((_DWORD *)v39 + 4 * v33) |= 0x10000u;
          }
          if ( (v40[17] & 4) != 0 )
          {
            if ( ((*((_DWORD *)v39 + 4 * v33) >> 22) & 1) != 0 )
            {
              v32 = -1073741584;
              v156 = (_QWORD *)WdLogNewEntry5_WdError(v39, v12, v14, v15);
              v156[3] = j;
              v156[4] = v40[2];
              v156[5] = -1073741584LL;
              v115 = WdLogEvent5_WdError(v156);
              goto LABEL_360;
            }
            v12 = v39;
            *((_DWORD *)v39 + 4 * v33) |= 0x400000u;
          }
          v13 = (__int64)v39;
          if ( ((*((_DWORD *)v39 + 4 * v33) >> 20) & 1) != 0 )
          {
            v13 = (__int64)v39;
            if ( ((*((_DWORD *)v39 + 4 * v33) >> 21) & 1) != 0 )
            {
              v32 = -1073741582;
              v162 = (_QWORD *)WdLogNewEntry5_WdError(v39, v12, v14, v15);
              v162[3] = v40[2];
              v162[4] = (unsigned int)v45->HighPart;
              v162[5] = -1073741582LL;
              v85 = WdLogEvent5_WdError(v162);
              goto LABEL_360;
            }
          }
        }
        if ( (a5 & 0x8000u) == 0 )
          v34 = v40[8];
        else
          v34 = Convert16bitSdcModeInfoIdxTo32bit(HIWORD(v40[8]));
        if ( v34 == -1 )
        {
          v51 = v40[14];
          v54 = v40[12];
          v55 = v40[13];
        }
        else
        {
          if ( v34 >= v232 )
          {
            v32 = -1073741583;
            v142 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14, v15);
            v142[3] = v34;
            v142[4] = v232;
            v142[5] = j;
            v142[6] = a5;
            v142[7] = -1073741583LL;
            v89 = WdLogEvent5_WdError(v142);
            goto LABEL_360;
          }
          v47 = &a4[8 * (unsigned __int64)v34];
          if ( !v45 )
          {
            v32 = -1073741584;
            v172 = (_QWORD *)WdLogNewEntry5_WdError(&a4[8 * (unsigned __int64)v34], v12, v14, v15);
            v172[3] = j;
            v172[4] = a5;
            v172[5] = -1073741584LL;
            v56 = WdLogEvent5_WdError(v172);
            goto LABEL_360;
          }
          HighPart = v47[1].LowPart;
          v150 = v40[5] == (_DWORD)HighPart && (HighPart = (unsigned int)v47[1].HighPart, v40[6] == (_DWORD)HighPart);
          if ( !v150 || (HighPart = (unsigned int)v47->HighPart, __PAIR64__(v40[7], 2) != *v47) )
          {
            v32 = -1073741582;
            v144 = (_QWORD *)WdLogNewEntry5_WdError(HighPart, v12, v14, v15);
            v144[3] = j;
            v144[4] = v40[7];
            v144[5] = (unsigned int)v47->HighPart;
            v144[6] = a5;
            v144[7] = -1073741582LL;
            v91 = WdLogEvent5_WdError(v144);
            goto LABEL_360;
          }
          v51 = v47[7].HighPart;
          v54 = v47[4].LowPart;
          v55 = v47[4].HighPart;
          *((_DWORD *)v39 + 4 * v34) = (unsigned __int16)(*((_DWORD *)v39 + 4 * v34) + 1) | *((_DWORD *)v39 + 4 * v34) & 0xFFFF0000;
          *((struct _LUID *)v39 + 2 * v34 + 1) = v47[1];
          *((_DWORD *)v39 + 4 * v34 + 1) = v47->HighPart;
          *((_DWORD *)v39 + 4 * v34) |= 0x40000u;
          v13 = 16LL * v34;
          v12 = v39;
          *(_DWORD *)((char *)v39 + v13) = (v36 << 23) | *(_DWORD *)((_BYTE *)v39 + v13) & 0xFF7FFFFF;
        }
        if ( (a5 & 0x8000u) == 0 )
          v35 = -1;
        else
          v35 = Convert16bitSdcModeInfoIdxTo32bit(v40[8]);
        if ( v35 != -1 )
        {
          if ( v35 >= v232 )
          {
            v32 = -1073741583;
            v146 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14, v15);
            v146[3] = v35;
            v146[4] = v232;
            v146[5] = j;
            v146[6] = a5;
            v146[7] = -1073741583LL;
            v119 = WdLogEvent5_WdError(v146);
            goto LABEL_360;
          }
          v43 = &a4[8 * (unsigned __int64)v35];
          v22 = v43[1].LowPart;
          v154 = v40[5] == (_DWORD)v22 && (v22 = (unsigned int)v43[1].HighPart, v40[6] == (_DWORD)v22);
          if ( !v154 || (v22 = (unsigned int)v43->HighPart, __PAIR64__(v40[7], 3) != *v43) )
          {
            v32 = -1073741582;
            v145 = (_QWORD *)WdLogNewEntry5_WdError(v22, v12, v14, v15);
            v145[3] = j;
            v145[4] = v40[7];
            v145[5] = (unsigned int)v43->HighPart;
            v145[6] = a5;
            v145[7] = -1073741582LL;
            v93 = WdLogEvent5_WdError(v145);
            goto LABEL_360;
          }
          if ( !v36 )
          {
            v32 = -1073741584;
            v181 = WdLogNewEntry5_WdError(v22, v12, v14, v15);
            *(_QWORD *)(v181 + 24) = j;
            *(_QWORD *)(v181 + 32) = -1073741584LL;
            v133 = WdLogEvent5_WdError(v181);
            goto LABEL_360;
          }
          if ( !v45 )
          {
            v32 = -1073741584;
            v183 = WdLogNewEntry5_WdError(v22, v12, v14, v15);
            *(_QWORD *)(v183 + 24) = j;
            *(_QWORD *)(v183 + 32) = -1073741584LL;
            v95 = WdLogEvent5_WdError(v183);
            goto LABEL_360;
          }
          if ( v43[5].HighPart
            || v43[5].LowPart
            || (v22 = v45[2].LowPart, v43[6].LowPart != (_DWORD)v22)
            || (v22 = (unsigned int)v45[2].HighPart, v43[6].HighPart != (_DWORD)v22) )
          {
            v32 = -1073741582;
            v185 = WdLogNewEntry5_WdError(v22, v12, v14, v15);
            *(_QWORD *)(v185 + 24) = j;
            *(_QWORD *)(v185 + 32) = -1073741582LL;
            v121 = WdLogEvent5_WdError(v185);
            goto LABEL_360;
          }
          v23 = (unsigned int)v43[4].HighPart;
          if ( v43[3].HighPart >= (int)v23 || (v23 = v43[4].LowPart, (signed int)v43[3].LowPart >= (int)v23) )
          {
            v32 = -1073741582;
            v187 = WdLogNewEntry5_WdError(v23, v12, v14, v15);
            *(_QWORD *)(v187 + 24) = j;
            *(_QWORD *)(v187 + 32) = -1073741582LL;
            v97 = WdLogEvent5_WdError(v187);
            goto LABEL_360;
          }
          if ( v43[3].HighPart < 0
            || (v43[3].LowPart & 0x80000000) != 0
            || (v23 = (unsigned int)v43[2].HighPart, v43[4].HighPart > (int)v23)
            || (v23 = v43[2].LowPart, (signed int)v43[4].LowPart > (int)v23) )
          {
            v32 = -1073741582;
            v189 = WdLogNewEntry5_WdError(v23, v12, v14, v15);
            *(_QWORD *)(v189 + 24) = j;
            *(_QWORD *)(v189 + 32) = -1073741582LL;
            v137 = WdLogEvent5_WdError(v189);
            goto LABEL_360;
          }
          *((_DWORD *)v39 + 4 * v35) = (unsigned __int16)(*((_DWORD *)v39 + 4 * v35) + 1) | *((_DWORD *)v39 + 4 * v35) & 0xFFFF0000;
          *((struct _LUID *)v39 + 2 * v35 + 1) = v43[1];
          *((_DWORD *)v39 + 4 * v35 + 1) = v43->HighPart;
          *((_DWORD *)v39 + 4 * v35) |= 0x80000u;
          v13 = 16LL * v35;
          v12 = v39;
          *(_DWORD *)((char *)v39 + v13) = (v36 << 23) | *(_DWORD *)((_BYTE *)v39 + v13) & 0xFF7FFFFF;
        }
        if ( (a5 & 0x8000u) != 0 )
        {
          if ( v36 )
          {
            if ( (v45 || v43 || v47) && (!v45 || !v43 || !v47) && (!v45 || v43 || !v47) && (!v45 || v43 || v47) )
            {
              v32 = -1073741584;
              v191 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
              *(_QWORD *)(v191 + 24) = j;
              *(_QWORD *)(v191 + 32) = -1073741584LL;
              v99 = WdLogEvent5_WdError(v191);
              goto LABEL_360;
            }
          }
          else if ( (v45 || v43 || v47) && (!v45 || v43 || !v47) && (!v45 || v43 || v47) )
          {
            v32 = -1073741584;
            v193 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
            *(_QWORD *)(v193 + 24) = j;
            *(_QWORD *)(v193 + 32) = -1073741584LL;
            v123 = WdLogEvent5_WdError(v193);
            goto LABEL_360;
          }
        }
        if ( v54 && v55 )
        {
          Size_4 = v51;
          if ( v51 <= 0 || Size_4 > 3 )
          {
            v32 = -1073741582;
            v195 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
            *(_QWORD *)(v195 + 24) = v51;
            *(_QWORD *)(v195 + 32) = -1073741582LL;
            v101 = WdLogEvent5_WdError(v195);
            goto LABEL_360;
          }
        }
        else
        {
          if ( v54 || v55 )
          {
            v32 = -1073741582;
            v155 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14, v15);
            v155[3] = v54;
            v155[4] = v55;
            v155[5] = j;
            v155[6] = -1073741582LL;
            v58 = WdLogEvent5_WdError(v155);
            goto LABEL_360;
          }
          if ( v51 )
          {
            v32 = -1073741582;
            v157 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14, v15);
            v157[3] = v51;
            v157[4] = j;
            v157[5] = -1073741582LL;
            v57 = WdLogEvent5_WdError(v157);
            goto LABEL_360;
          }
        }
      }
    }
    if ( v232 )
    {
      if ( (a5 & 0x8000u) != 0 )
      {
        v50 = 0;
        v114 = 0;
        for ( m = 0; m < v232; ++m )
        {
          v13 = (__int64)v39 + 16 * m;
          v44 = (_DWORD *)v13;
          if ( (unsigned __int16)*(_DWORD *)v13 )
          {
            if ( ((*(_DWORD *)v13 >> 18) & 1) != 0 )
            {
              v13 = (__int64)a4;
              if ( a4[8 * (unsigned __int64)m].LowPart != 2 )
              {
                v228 = WdLogNewEntry5_WdAssertion(a4);
                v60 = WdLogEvent5_WdAssertion(v228);
              }
              if ( (unsigned __int16)*v44 > 1u )
              {
                v32 = -1073741584;
                v159 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14, v15);
                v159[3] = (unsigned int)v44[1];
                v159[4] = (unsigned __int16)*v44;
                v159[5] = -1073741584LL;
                v62 = WdLogEvent5_WdError(v159);
                goto LABEL_360;
              }
            }
            else if ( ((*(_DWORD *)v13 >> 19) & 1) != 0 )
            {
              v13 = (__int64)a4;
              if ( a4[8 * (unsigned __int64)m].LowPart != 3 )
              {
                v227 = WdLogNewEntry5_WdAssertion(a4);
                v64 = WdLogEvent5_WdAssertion(v227);
              }
              if ( (unsigned __int16)*v44 > 1u )
              {
                v32 = -1073741584;
                v161 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14, v15);
                v161[3] = (unsigned int)v44[1];
                v161[4] = (unsigned __int16)*v44;
                v161[5] = -1073741584LL;
                v66 = WdLogEvent5_WdError(v161);
                goto LABEL_360;
              }
            }
            else
            {
              if ( (*(_DWORD *)v13 & 0x10000) == 0 && ((*(_DWORD *)v13 >> 17) & 1) == 0 )
              {
                v32 = -1073741811;
                v199 = WdLogNewEntry5_WdAssertion(v13);
                *(_QWORD *)(v199 + 24) = v44;
                *(_QWORD *)(v199 + 32) = m;
                v72 = WdLogEvent5_WdAssertion(v199);
                goto LABEL_360;
              }
              v13 = (__int64)a4;
              if ( a4[8 * (unsigned __int64)m].LowPart != 1 )
              {
                v229 = WdLogNewEntry5_WdAssertion(a4);
                v68 = WdLogEvent5_WdAssertion(v229);
              }
              if ( (*v44 & 0x1000000) == 0 )
              {
                ++v114;
                if ( (*v44 & 0x10000) != 0 )
                  ++v50;
              }
              if ( ((*v44 >> 20) & 1) != 0 && (unsigned __int16)*v44 > 1u )
              {
                v32 = -1073741584;
                v197 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
                *(_QWORD *)(v197 + 24) = (unsigned int)v44[1];
                *(_QWORD *)(v197 + 32) = -1073741584LL;
                v70 = WdLogEvent5_WdError(v197);
                goto LABEL_360;
              }
            }
            for ( n = m + 1; n < v232; ++n )
            {
              v13 = (__int64)v39 + 16 * n;
              v49 = (struct _LUID *)v13;
              if ( (unsigned __int16)*(_DWORD *)v13 )
              {
                v13 = v49[1].LowPart;
                if ( v44[2] == (_DWORD)v13 )
                {
                  v13 = (unsigned int)v49[1].HighPart;
                  if ( v44[3] == (_DWORD)v13 )
                  {
                    v13 = (unsigned int)v49->HighPart;
                    if ( v44[1] == (_DWORD)v13 )
                    {
                      v12 = (struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *)a4;
                      v13 = a4[8 * (unsigned __int64)n].LowPart;
                      if ( a4[8 * (unsigned __int64)m].LowPart == (_DWORD)v13 )
                      {
                        v13 = (__int64)a4;
                        if ( a4[8 * (unsigned __int64)m].LowPart != 1 || ((*v44 >> 23) & 1) != 0 )
                        {
                          v32 = -1073741582;
                          v201 = WdLogNewEntry5_WdError(a4, a4, v14, v15);
                          *(_QWORD *)(v201 + 24) = (unsigned int)v49->HighPart;
                          *(_QWORD *)(v201 + 32) = -1073741582LL;
                          v74 = WdLogEvent5_WdError(v201);
                          goto LABEL_360;
                        }
                      }
                    }
                  }
                }
                if ( (*v44 & 0x1000000) == 0 )
                {
                  v13 = (__int64)a4;
                  if ( a4[8 * (unsigned __int64)n].LowPart == 1 )
                  {
                    v13 = (__int64)a4;
                    if ( a4[8 * (unsigned __int64)m].LowPart == 1 )
                    {
                      v12 = (struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *)a4;
                      v13 = (unsigned int)a4[8 * (unsigned __int64)m + 3].HighPart;
                      if ( a4[8 * (unsigned __int64)n + 3].HighPart == (_DWORD)v13 )
                      {
                        v12 = (struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *)a4;
                        v13 = a4[8 * (unsigned __int64)m + 4].LowPart;
                        if ( a4[8 * (unsigned __int64)n + 4].LowPart == (_DWORD)v13 )
                        {
                          v24 = (v49->LowPart >> 20) & 1;
                          if ( ((*v44 >> 20) & 1) != (_DWORD)v24
                            || (v24 = (v49->LowPart >> 21) & 1, ((*v44 >> 21) & 1) != (_DWORD)v24) )
                          {
                            v32 = -1073741582;
                            v163 = (_QWORD *)WdLogNewEntry5_WdError(v24, a4, v14, v15);
                            v163[3] = m;
                            v163[4] = n;
                            v163[5] = -1073741582LL;
                            v76 = WdLogEvent5_WdError(v163);
                            goto LABEL_360;
                          }
                          if ( (unsigned __int16)v49->LowPart > 1u )
                          {
                            v32 = -1073741584;
                            v203 = WdLogNewEntry5_WdError(v24, a4, v14, v15);
                            *(_QWORD *)(v203 + 24) = (unsigned int)v49->HighPart;
                            *(_QWORD *)(v203 + 32) = -1073741584LL;
                            v78 = WdLogEvent5_WdError(v203);
                            goto LABEL_360;
                          }
                          if ( ((*v44 >> 25) & 1) == ((v49->LowPart >> 25) & 1) )
                          {
                            v25 = a4;
                            v26 = (unsigned int)a4[8 * (unsigned __int64)m + 2].HighPart;
                            if ( a4[8 * (unsigned __int64)n + 2].HighPart != (_DWORD)v26
                              || (v25 = a4,
                                  v26 = a4[8 * (unsigned __int64)m + 2].LowPart,
                                  a4[8 * (unsigned __int64)n + 2].LowPart != (_DWORD)v26) )
                            {
                              v32 = -1073741582;
                              v165 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25, v14, v15);
                              v165[3] = m;
                              v165[4] = n;
                              v165[5] = -1073741582LL;
                              v80 = WdLogEvent5_WdError(v165);
                              goto LABEL_360;
                            }
                          }
                          else
                          {
                            v27 = a4;
                            v28 = (unsigned int)a4[8 * (unsigned __int64)m + 2].HighPart;
                            if ( a4[8 * (unsigned __int64)n + 2].LowPart != (_DWORD)v28
                              || (v27 = a4,
                                  v28 = a4[8 * (unsigned __int64)m + 2].LowPart,
                                  a4[8 * (unsigned __int64)n + 2].HighPart != (_DWORD)v28) )
                            {
                              v32 = -1073741582;
                              v167 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27, v14, v15);
                              v167[3] = m;
                              v167[4] = n;
                              v167[5] = -1073741582LL;
                              v82 = WdLogEvent5_WdError(v167);
                              goto LABEL_360;
                            }
                          }
                          v12 = (struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *)a4;
                          v29 = a4[8 * (unsigned __int64)m + 3].LowPart;
                          if ( a4[8 * (unsigned __int64)n + 3].LowPart != (_DWORD)v29 )
                          {
                            v32 = -1073741582;
                            v169 = (_QWORD *)WdLogNewEntry5_WdError(v29, a4, v14, v15);
                            v169[3] = m;
                            v169[4] = n;
                            v169[5] = -1073741582LL;
                            v84 = WdLogEvent5_WdError(v169);
                            goto LABEL_360;
                          }
                          if ( ((*v44 >> 20) & 1) != 0 )
                          {
                            if ( ((*v44 >> 23) & 1) == 0 || ((v49->LowPart >> 23) & 1) == 0 )
                            {
                              v32 = -1073741582;
                              v171 = (_QWORD *)WdLogNewEntry5_WdError(v29, a4, v14, v15);
                              v171[3] = m;
                              v171[4] = n;
                              v171[5] = -1073741582LL;
                              v86 = WdLogEvent5_WdError(v171);
                              goto LABEL_360;
                            }
                          }
                          else
                          {
                            v30 = v49[1].LowPart;
                            if ( v44[2] != (_DWORD)v30 || (v30 = (unsigned int)v49[1].HighPart, v44[3] != (_DWORD)v30) )
                            {
                              v32 = -1073741582;
                              v173 = (_QWORD *)WdLogNewEntry5_WdError(v30, a4, v14, v15);
                              v173[3] = m;
                              v173[4] = n;
                              v173[5] = -1073741582LL;
                              v88 = WdLogEvent5_WdError(v173);
                              goto LABEL_360;
                            }
                          }
                          v13 = (__int64)v49;
                          v49->LowPart |= 0x1000000u;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if ( v114 && v50 != 1 )
        {
          if ( v42 && v50 <= 1 )
          {
            v221 = WdLogNewEntry5_WdEvent(v13, v12);
            *(_QWORD *)(v221 + 24) = v50;
            v90 = WdLogEvent5_WdEvent(v221);
          }
          else
          {
            v32 = -1073741583;
            v205 = WdLogNewEntry5_WdError(v13, v12, v14, v15);
            *(_QWORD *)(v205 + 24) = v50;
            *(_QWORD *)(v205 + 32) = -1073741583LL;
            v92 = WdLogEvent5_WdError(v205);
          }
        }
      }
      else
      {
        v32 = ValidateSDCv1ModeInfoArray(v39, v232, v42);
      }
    }
  }
LABEL_360:
  if ( v39 )
    Win32FreePool();
  return (unsigned int)v32;
}
