/*
 * XREFs of DrvSetDisplayConfigValidateParams @ 0x1C00892C0
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C006D7B0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     UserIsConsoleConnection @ 0x1C004CEC0 (UserIsConsoleConnection.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C0052B10 (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C007B8BC (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     ?Convert16bitSdcModeInfoIdxTo32bit@@YAIG@Z @ 0x1C00B9DB4 (-Convert16bitSdcModeInfoIdxTo32bit@@YAIG@Z.c)
 *     ?EnforceSDCCloneSourceIndexCoherency@@YAXIPEAUDISPLAYCONFIG_PATH_INFO@@PEAI@Z @ 0x1C00BB948 (-EnforceSDCCloneSourceIndexCoherency@@YAXIPEAUDISPLAYCONFIG_PATH_INFO@@PEAI@Z.c)
 *     ?GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C00BBF18 (-GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?LogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C00BBFA8 (-LogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z.c)
 *     ?ValidateSDCv1ModeInfoArray@@YAJPEAU_DISPLAYCONFIG_MODE_INFO_SUMMARY@@I_N@Z @ 0x1C00BC294 (-ValidateSDCv1ModeInfoArray@@YAJPEAU_DISPLAYCONFIG_MODE_INFO_SUMMARY@@I_N@Z.c)
 */

__int64 __fastcall DrvSetDisplayConfigValidateParams(
        __int64 a1,
        struct DISPLAYCONFIG_PATH_INFO *a2,
        __int64 a3,
        struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *a4,
        unsigned int a5,
        int a6,
        char a7)
{
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 LowPart; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *v24; // rdx
  __int64 v25; // rcx
  struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int TargetVirtualization; // [rsp+30h] [rbp-3C8h]
  unsigned int HighPart; // [rsp+34h] [rbp-3C4h]
  unsigned int v33; // [rsp+34h] [rbp-3C4h]
  unsigned int v34; // [rsp+34h] [rbp-3C4h]
  unsigned __int8 v35[3]; // [rsp+39h] [rbp-3BFh] BYREF
  unsigned int j; // [rsp+3Ch] [rbp-3BCh]
  unsigned int m; // [rsp+40h] [rbp-3B8h]
  struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *v38; // [rsp+48h] [rbp-3B0h]
  struct _LUID *v39; // [rsp+50h] [rbp-3A8h]
  unsigned __int8 v40[4]; // [rsp+58h] [rbp-3A0h] BYREF
  unsigned int n; // [rsp+5Ch] [rbp-39Ch]
  bool v42; // [rsp+60h] [rbp-398h]
  _DWORD *v43; // [rsp+68h] [rbp-390h]
  char *v44; // [rsp+70h] [rbp-388h]
  char *v45; // [rsp+78h] [rbp-380h]
  bool v46; // [rsp+80h] [rbp-378h]
  unsigned int k; // [rsp+84h] [rbp-374h]
  char *v48; // [rsp+88h] [rbp-370h]
  unsigned int v49; // [rsp+90h] [rbp-368h]
  _DWORD *v50; // [rsp+98h] [rbp-360h]
  int v51; // [rsp+A0h] [rbp-358h]
  unsigned int i; // [rsp+A4h] [rbp-354h]
  struct DISPLAYCONFIG_PATH_INFO *v53; // [rsp+A8h] [rbp-350h]
  DWORD v54; // [rsp+B0h] [rbp-348h]
  unsigned int v55; // [rsp+B4h] [rbp-344h]
  char v56; // [rsp+B8h] [rbp-340h]
  char v57; // [rsp+B9h] [rbp-33Fh]
  char v58; // [rsp+BAh] [rbp-33Eh]
  char v59; // [rsp+BBh] [rbp-33Dh]
  char v60; // [rsp+BCh] [rbp-33Ch]
  char v61; // [rsp+BDh] [rbp-33Bh]
  char v62; // [rsp+BEh] [rbp-33Ah]
  char v63; // [rsp+BFh] [rbp-339h]
  char v64; // [rsp+C0h] [rbp-338h]
  char v65; // [rsp+C1h] [rbp-337h]
  char v66; // [rsp+C2h] [rbp-336h]
  char v67; // [rsp+C3h] [rbp-335h]
  char v68; // [rsp+C4h] [rbp-334h]
  char v69; // [rsp+C5h] [rbp-333h]
  char v70; // [rsp+C6h] [rbp-332h]
  char v71; // [rsp+C7h] [rbp-331h]
  char v72; // [rsp+C8h] [rbp-330h]
  char v73; // [rsp+C9h] [rbp-32Fh]
  char v74; // [rsp+CAh] [rbp-32Eh]
  char v75; // [rsp+CBh] [rbp-32Dh]
  char v76; // [rsp+CCh] [rbp-32Ch]
  char v77; // [rsp+CDh] [rbp-32Bh]
  char v78; // [rsp+CEh] [rbp-32Ah]
  char v79; // [rsp+CFh] [rbp-329h]
  char v80; // [rsp+D0h] [rbp-328h]
  char v81; // [rsp+D1h] [rbp-327h]
  char v82; // [rsp+D2h] [rbp-326h]
  char v83; // [rsp+D3h] [rbp-325h]
  char v84; // [rsp+D4h] [rbp-324h]
  char v85; // [rsp+D5h] [rbp-323h]
  char v86; // [rsp+D6h] [rbp-322h]
  char v87; // [rsp+D7h] [rbp-321h]
  char v88; // [rsp+D8h] [rbp-320h]
  char v89; // [rsp+D9h] [rbp-31Fh]
  char v90; // [rsp+DAh] [rbp-31Eh]
  char v91; // [rsp+DBh] [rbp-31Dh]
  char v92; // [rsp+DCh] [rbp-31Ch]
  char v93; // [rsp+DDh] [rbp-31Bh]
  char v94; // [rsp+DEh] [rbp-31Ah]
  char v95; // [rsp+DFh] [rbp-319h]
  char v96; // [rsp+E0h] [rbp-318h]
  char v97; // [rsp+E1h] [rbp-317h]
  char v98; // [rsp+E2h] [rbp-316h]
  char v99; // [rsp+E3h] [rbp-315h]
  char v100; // [rsp+E4h] [rbp-314h]
  char v101; // [rsp+E5h] [rbp-313h]
  char v102; // [rsp+E6h] [rbp-312h]
  char v103; // [rsp+E7h] [rbp-311h]
  char v104; // [rsp+E8h] [rbp-310h]
  char v105; // [rsp+E9h] [rbp-30Fh]
  char v106; // [rsp+EAh] [rbp-30Eh]
  char v107; // [rsp+EBh] [rbp-30Dh]
  char v108; // [rsp+ECh] [rbp-30Ch]
  char v109; // [rsp+EDh] [rbp-30Bh]
  char v110; // [rsp+EEh] [rbp-30Ah]
  char v111; // [rsp+EFh] [rbp-309h]
  char v112; // [rsp+F0h] [rbp-308h]
  unsigned int v113; // [rsp+F4h] [rbp-304h] BYREF
  char v114; // [rsp+F8h] [rbp-300h]
  int v115; // [rsp+FCh] [rbp-2FCh]
  char v116; // [rsp+100h] [rbp-2F8h]
  char v117; // [rsp+101h] [rbp-2F7h]
  char v118; // [rsp+102h] [rbp-2F6h]
  char v119; // [rsp+103h] [rbp-2F5h]
  char v120; // [rsp+104h] [rbp-2F4h]
  char v121; // [rsp+105h] [rbp-2F3h]
  char v122; // [rsp+106h] [rbp-2F2h]
  char v123; // [rsp+107h] [rbp-2F1h]
  char v124; // [rsp+108h] [rbp-2F0h]
  char v125; // [rsp+109h] [rbp-2EFh]
  char v126; // [rsp+10Ah] [rbp-2EEh]
  char v127; // [rsp+10Bh] [rbp-2EDh]
  char v128; // [rsp+10Ch] [rbp-2ECh]
  char v129; // [rsp+10Dh] [rbp-2EBh]
  char v130; // [rsp+10Eh] [rbp-2EAh]
  char v131; // [rsp+10Fh] [rbp-2E9h]
  char v132; // [rsp+110h] [rbp-2E8h]
  char v133; // [rsp+111h] [rbp-2E7h]
  char v134; // [rsp+112h] [rbp-2E6h]
  char v135; // [rsp+113h] [rbp-2E5h]
  char v136; // [rsp+114h] [rbp-2E4h]
  char v137; // [rsp+115h] [rbp-2E3h]
  char v138; // [rsp+116h] [rbp-2E2h]
  char v139; // [rsp+117h] [rbp-2E1h]
  char v140; // [rsp+118h] [rbp-2E0h]
  _QWORD *v141; // [rsp+120h] [rbp-2D8h]
  _QWORD *v142; // [rsp+128h] [rbp-2D0h]
  _QWORD *v143; // [rsp+130h] [rbp-2C8h]
  _QWORD *v144; // [rsp+138h] [rbp-2C0h]
  _QWORD *v145; // [rsp+140h] [rbp-2B8h]
  _QWORD *v146; // [rsp+148h] [rbp-2B0h]
  _QWORD *v147; // [rsp+150h] [rbp-2A8h]
  BOOL v148; // [rsp+158h] [rbp-2A0h]
  int v149; // [rsp+15Ch] [rbp-29Ch]
  unsigned int Size; // [rsp+160h] [rbp-298h]
  int Size_4; // [rsp+164h] [rbp-294h]
  int v152; // [rsp+168h] [rbp-290h]
  int v153; // [rsp+16Ch] [rbp-28Ch]
  _QWORD *v154; // [rsp+170h] [rbp-288h]
  BOOL v155; // [rsp+178h] [rbp-280h]
  _QWORD *v156; // [rsp+180h] [rbp-278h]
  BOOL v157; // [rsp+188h] [rbp-270h]
  _QWORD *v158; // [rsp+190h] [rbp-268h]
  _QWORD *v159; // [rsp+198h] [rbp-260h]
  _QWORD *v160; // [rsp+1A0h] [rbp-258h]
  _QWORD *v161; // [rsp+1A8h] [rbp-250h]
  _QWORD *v162; // [rsp+1B0h] [rbp-248h]
  _QWORD *v163; // [rsp+1B8h] [rbp-240h]
  _QWORD *v164; // [rsp+1C0h] [rbp-238h]
  _QWORD *v165; // [rsp+1C8h] [rbp-230h]
  _QWORD *v166; // [rsp+1D0h] [rbp-228h]
  _QWORD *v167; // [rsp+1D8h] [rbp-220h]
  _QWORD *v168; // [rsp+1E0h] [rbp-218h]
  _QWORD *v169; // [rsp+1E8h] [rbp-210h]
  _QWORD *v170; // [rsp+1F0h] [rbp-208h]
  _QWORD *v171; // [rsp+1F8h] [rbp-200h]
  _QWORD *v172; // [rsp+200h] [rbp-1F8h]
  _QWORD *v173; // [rsp+208h] [rbp-1F0h]
  _QWORD *v174; // [rsp+210h] [rbp-1E8h]
  _QWORD *v175; // [rsp+218h] [rbp-1E0h]
  _QWORD *v176; // [rsp+220h] [rbp-1D8h]
  __int64 v177; // [rsp+228h] [rbp-1D0h]
  __int64 v178; // [rsp+230h] [rbp-1C8h]
  __int64 v179; // [rsp+238h] [rbp-1C0h]
  __int64 v180; // [rsp+240h] [rbp-1B8h]
  __int64 v181; // [rsp+248h] [rbp-1B0h]
  __int64 v182; // [rsp+250h] [rbp-1A8h]
  __int64 v183; // [rsp+258h] [rbp-1A0h]
  __int64 v184; // [rsp+260h] [rbp-198h]
  __int64 v185; // [rsp+268h] [rbp-190h]
  __int64 v186; // [rsp+270h] [rbp-188h]
  __int64 v187; // [rsp+278h] [rbp-180h]
  __int64 v188; // [rsp+280h] [rbp-178h]
  __int64 v189; // [rsp+288h] [rbp-170h]
  __int64 v190; // [rsp+290h] [rbp-168h]
  __int64 v191; // [rsp+298h] [rbp-160h]
  __int64 v192; // [rsp+2A0h] [rbp-158h]
  __int64 v193; // [rsp+2A8h] [rbp-150h]
  __int64 v194; // [rsp+2B0h] [rbp-148h]
  __int64 v195; // [rsp+2B8h] [rbp-140h]
  __int64 v196; // [rsp+2C0h] [rbp-138h]
  __int64 v197; // [rsp+2C8h] [rbp-130h]
  __int64 v198; // [rsp+2D0h] [rbp-128h]
  __int64 v199; // [rsp+2D8h] [rbp-120h]
  __int64 v200; // [rsp+2E0h] [rbp-118h]
  __int64 v201; // [rsp+2E8h] [rbp-110h]
  __int64 v202; // [rsp+2F0h] [rbp-108h]
  __int64 v203; // [rsp+2F8h] [rbp-100h]
  __int64 v204; // [rsp+300h] [rbp-F8h]
  __int64 v205; // [rsp+308h] [rbp-F0h]
  __int64 v206; // [rsp+310h] [rbp-E8h]
  __int64 v207; // [rsp+318h] [rbp-E0h]
  __int64 v208; // [rsp+320h] [rbp-D8h]
  __int64 v209; // [rsp+328h] [rbp-D0h]
  __int64 v210; // [rsp+330h] [rbp-C8h]
  __int64 v211; // [rsp+338h] [rbp-C0h]
  __int64 v212; // [rsp+340h] [rbp-B8h]
  __int64 v213; // [rsp+348h] [rbp-B0h]
  __int64 v214; // [rsp+350h] [rbp-A8h]
  __int64 v215; // [rsp+358h] [rbp-A0h]
  __int64 v216; // [rsp+360h] [rbp-98h]
  __int64 v217; // [rsp+368h] [rbp-90h]
  __int64 v218; // [rsp+370h] [rbp-88h]
  __int64 v219; // [rsp+378h] [rbp-80h]
  __int64 v220; // [rsp+380h] [rbp-78h]
  __int64 v221; // [rsp+388h] [rbp-70h]
  __int64 v222; // [rsp+390h] [rbp-68h]
  __int64 v223; // [rsp+398h] [rbp-60h]
  char *Str1; // [rsp+3A0h] [rbp-58h]
  __int64 v225; // [rsp+3A8h] [rbp-50h]
  __int64 v226; // [rsp+3B0h] [rbp-48h]
  __int64 v227; // [rsp+3B8h] [rbp-40h]
  __int64 v228; // [rsp+3C0h] [rbp-38h]
  __int64 v229; // [rsp+3C8h] [rbp-30h]
  __int64 v230; // [rsp+3D0h] [rbp-28h]
  __int64 v231; // [rsp+3D8h] [rbp-20h]
  __int64 v232; // [rsp+3E0h] [rbp-18h]
  __int64 v233; // [rsp+3E8h] [rbp-10h]
  unsigned int v234; // [rsp+400h] [rbp+8h]
  unsigned int v236; // [rsp+410h] [rbp+18h]

  v236 = a3;
  v234 = a1;
  TargetVirtualization = 0;
  v38 = 0LL;
  if ( a7 )
  {
    if ( (a5 & 0x80) != 0 && DrvIsTemporarySettingChangeDisabled() )
    {
      TargetVirtualization = -1073741790;
      v221 = WdLogNewEntry5_WdError(a1, a2, a3, a4);
      *(_QWORD *)(v221 + 24) = -1073741790LL;
      v95 = WdLogEvent5_WdError(v221);
      goto LABEL_366;
    }
    if ( (a5 & 0x200) != 0 && DrvIsPermanentSettingChangesDisabled() )
    {
      TargetVirtualization = -1073741790;
      v228 = WdLogNewEntry5_WdError(a1, a2, a3, a4);
      *(_QWORD *)(v228 + 24) = -1073741790LL;
      v97 = WdLogEvent5_WdError(v228);
      goto LABEL_366;
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
          if ( v234 || a2 || v236 || a4 )
          {
            TargetVirtualization = -1073741811;
            v227 = WdLogNewEntry5_WdError(v9, v8, v10, v11);
            *(_QWORD *)(v227 + 24) = -1073741811LL;
            v105 = WdLogEvent5_WdError(v227);
          }
          else
          {
            TargetVirtualization = 0;
            v226 = WdLogNewEntry5_WdTrace(v9);
            *(_QWORD *)(v226 + 24) = a5;
            v107 = WdLogEvent5_WdTrace(v226);
          }
        }
        else
        {
          TargetVirtualization = -1073741581;
          v180 = WdLogNewEntry5_WdError(v9, v8, v10, v11);
          *(_QWORD *)(v180 + 24) = a5;
          *(_QWORD *)(v180 + 32) = -1073741581LL;
          v103 = WdLogEvent5_WdError(v180);
        }
      }
      else
      {
        TargetVirtualization = -1073741581;
        v206 = WdLogNewEntry5_WdError(a1, a2, a3, a4);
        *(_QWORD *)(v206 + 24) = a5;
        *(_QWORD *)(v206 + 32) = -1073741581LL;
        v101 = WdLogEvent5_WdError(v206);
      }
    }
    else
    {
      TargetVirtualization = -1073741581;
      v192 = WdLogNewEntry5_WdError(a1, a2, a3, a4);
      *(_QWORD *)(v192 + 24) = a5;
      *(_QWORD *)(v192 + 32) = -1073741581LL;
      v99 = WdLogEvent5_WdError(v192);
    }
    goto LABEL_366;
  }
  if ( (a6 & 1) != 0 )
  {
    if ( a6 == 1 && a5 == 128 && !v234 && !v236 )
    {
      TargetVirtualization = 0;
    }
    else
    {
      TargetVirtualization = -1073741581;
      v218 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      *(_QWORD *)(v218 + 24) = a5;
      *(_QWORD *)(v218 + 32) = -1073741581LL;
      v109 = WdLogEvent5_WdAssertion(v218);
    }
    goto LABEL_366;
  }
  if ( ((a6 & 2) != 0 || (a6 & 4) != 0) && (a5 & 0x88F) != 0x88F )
  {
    TargetVirtualization = -1073741581;
    v182 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v182 + 24) = a5;
    *(_QWORD *)(v182 + 32) = -1073741581LL;
    v111 = WdLogEvent5_WdAssertion(v182);
    goto LABEL_366;
  }
  if ( (a6 & 0x10) != 0 && (a6 & 8) == 0 )
  {
    TargetVirtualization = -1073741581;
    v208 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v208 + 24) = a5;
    *(_QWORD *)(v208 + 32) = -1073741581LL;
    v117 = WdLogEvent5_WdAssertion(v208);
    goto LABEL_366;
  }
  if ( (a6 & 8) != 0 && (v234 != 1 || v236 != 2) )
  {
    TargetVirtualization = -1073741581;
    v154 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    v154[3] = v234;
    v154[4] = v236;
    v154[5] = a5;
    v154[6] = -1073741581LL;
    v119 = WdLogEvent5_WdAssertion(v154);
    goto LABEL_366;
  }
  if ( (a6 & 8) != 0 && (a5 & 0x20) == 0 )
  {
    TargetVirtualization = -1073741581;
    v184 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v184 + 24) = a5;
    *(_QWORD *)(v184 + 32) = -1073741581LL;
    v121 = WdLogEvent5_WdAssertion(v184);
    goto LABEL_366;
  }
  if ( !UserIsConsoleConnection() && (a5 & 0x88F) != 0x88F )
  {
    TargetVirtualization = -1073741790;
    v220 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
    *(_QWORD *)(v220 + 24) = a5;
    *(_QWORD *)(v220 + 32) = -1073741790LL;
    v123 = WdLogEvent5_WdError(v220);
    goto LABEL_366;
  }
  if ( (a5 & 0xFFFF0000) != 0 )
  {
    TargetVirtualization = -1073741581;
    v186 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
    *(_QWORD *)(v186 + 24) = a5;
    *(_QWORD *)(v186 + 32) = -1073741581LL;
    v125 = WdLogEvent5_WdError(v186);
    goto LABEL_366;
  }
  if ( (a5 & 0xC0) == 0 || (a5 & 0xC0) == 0xC0 )
  {
    TargetVirtualization = -1073741581;
    v215 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
    *(_QWORD *)(v215 + 24) = a5;
    *(_QWORD *)(v215 + 32) = -1073741581LL;
    v127 = WdLogEvent5_WdError(v215);
    goto LABEL_366;
  }
  if ( (a5 & 0x180) == 0x100 )
  {
    TargetVirtualization = -1073741581;
    v188 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
    *(_QWORD *)(v188 + 24) = a5;
    *(_QWORD *)(v188 + 32) = -1073741581LL;
    v129 = WdLogEvent5_WdError(v188);
    goto LABEL_366;
  }
  if ( (a5 & 0x1000) != 0 && (a5 & 0xA0) != 0xA0 )
  {
    TargetVirtualization = -1073741581;
    v211 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
    *(_QWORD *)(v211 + 24) = a5;
    *(_QWORD *)(v211 + 32) = -1073741581LL;
    v131 = WdLogEvent5_WdError(v211);
    goto LABEL_366;
  }
  if ( (a5 & 0x2000) != 0 && (a5 & 0x10) == 0 )
  {
    TargetVirtualization = -1073741581;
    v190 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
    *(_QWORD *)(v190 + 24) = a5;
    *(_QWORD *)(v190 + 32) = -1073741581LL;
    v133 = WdLogEvent5_WdError(v190);
    goto LABEL_366;
  }
  if ( (a5 & 0x1F) != 0 )
  {
    if ( (a5 & 0x400) != 0 )
    {
      TargetVirtualization = -1073741581;
      v219 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
      *(_QWORD *)(v219 + 24) = a5;
      *(_QWORD *)(v219 + 32) = -1073741581LL;
      v135 = WdLogEvent5_WdError(v219);
    }
    else if ( (a5 & 0x20) != 0 )
    {
      TargetVirtualization = -1073741581;
      v177 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
      *(_QWORD *)(v177 + 24) = a5;
      *(_QWORD *)(v177 + 32) = -1073741581LL;
      v58 = WdLogEvent5_WdError(v177);
    }
    else if ( (a5 & 0x200) != 0 )
    {
      TargetVirtualization = -1073741581;
      v213 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
      *(_QWORD *)(v213 + 24) = a5;
      *(_QWORD *)(v213 + 32) = -1073741581LL;
      v136 = WdLogEvent5_WdError(v213);
    }
    else if ( a4 )
    {
      TargetVirtualization = -1073741582;
      v194 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
      *(_QWORD *)(v194 + 24) = a5;
      *(_QWORD *)(v194 + 32) = -1073741582LL;
      v60 = WdLogEvent5_WdError(v194);
    }
    else if ( v236 )
    {
      TargetVirtualization = -1073741583;
      v217 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
      *(_QWORD *)(v217 + 24) = a5;
      *(_QWORD *)(v217 + 32) = -1073741583LL;
      v104 = WdLogEvent5_WdError(v217);
    }
    else if ( (a5 & 0x10) != 0 )
    {
      if ( (a5 & 0x800) != 0 )
      {
        TargetVirtualization = -1073741581;
        v196 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
        *(_QWORD *)(v196 + 24) = a5;
        *(_QWORD *)(v196 + 32) = -1073741581LL;
        v62 = WdLogEvent5_WdError(v196);
      }
      else if ( a2 )
      {
        if ( v234 )
        {
          v53 = a2;
          for ( i = 0; i < v234; ++i )
          {
            if ( (a5 & 0x8000) != 0 )
            {
              if ( (*((_DWORD *)v53 + 17) & 1) != 0
                && ((unsigned __int16)HIWORD(*((_DWORD *)v53 + 3)) != 0xFFFF
                 || (unsigned __int16)HIWORD(*((_DWORD *)v53 + 8)) != 0xFFFF
                 || (unsigned __int16)*((_DWORD *)v53 + 8) != 0xFFFF
                 || (unsigned __int16)*((_DWORD *)v53 + 3) == 0xFFFF) )
              {
                TargetVirtualization = -1073741584;
                v163 = (_QWORD *)WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
                v163[3] = a5;
                v163[4] = i;
                v163[5] = -1073741584LL;
                v106 = WdLogEvent5_WdError(v163);
                break;
              }
            }
            else if ( (*((_DWORD *)v53 + 17) & 1) != 0 && (*((_DWORD *)v53 + 3) != -1 || *((_DWORD *)v53 + 8) != -1) )
            {
              TargetVirtualization = -1073741584;
              v161 = (_QWORD *)WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
              v161[3] = a5;
              v161[4] = i;
              v161[5] = -1073741584LL;
              v66 = WdLogEvent5_WdError(v161);
              break;
            }
            v53 = (struct DISPLAYCONFIG_PATH_INFO *)((char *)v53 + 72);
          }
        }
        else
        {
          TargetVirtualization = -1073741585;
          v198 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
          *(_QWORD *)(v198 + 24) = a5;
          *(_QWORD *)(v198 + 32) = -1073741585LL;
          v64 = WdLogEvent5_WdError(v198);
        }
      }
      else
      {
        TargetVirtualization = -1073741584;
        v209 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
        *(_QWORD *)(v209 + 24) = a5;
        *(_QWORD *)(v209 + 32) = -1073741584LL;
        v126 = WdLogEvent5_WdError(v209);
      }
    }
    else if ( a2 )
    {
      TargetVirtualization = -1073741584;
      v210 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
      *(_QWORD *)(v210 + 24) = a5;
      *(_QWORD *)(v210 + 32) = -1073741584LL;
      v140 = WdLogEvent5_WdError(v210);
    }
    else if ( v234 )
    {
      TargetVirtualization = -1073741585;
      v200 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
      *(_QWORD *)(v200 + 24) = a5;
      *(_QWORD *)(v200 + 32) = -1073741585LL;
      v68 = WdLogEvent5_WdError(v200);
    }
  }
  else
  {
    v46 = (a5 & 0x8000u) != 0;
    if ( (a5 & 0x20) == 0 )
    {
      TargetVirtualization = -1073741581;
      v212 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
      *(_QWORD *)(v212 + 24) = a5;
      *(_QWORD *)(v212 + 32) = -1073741581LL;
      v108 = WdLogEvent5_WdError(v212);
      goto LABEL_366;
    }
    if ( (a5 & 0x800) != 0 )
    {
      TargetVirtualization = -1073741581;
      v202 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
      *(_QWORD *)(v202 + 24) = a5;
      *(_QWORD *)(v202 + 32) = -1073741581LL;
      v70 = WdLogEvent5_WdError(v202);
      goto LABEL_366;
    }
    if ( !a2 )
    {
      TargetVirtualization = -1073741584;
      v214 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
      *(_QWORD *)(v214 + 24) = a5;
      *(_QWORD *)(v214 + 32) = -1073741584LL;
      v128 = WdLogEvent5_WdError(v214);
      goto LABEL_366;
    }
    if ( !v234 )
    {
      TargetVirtualization = -1073741585;
      v204 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
      *(_QWORD *)(v204 + 24) = a5;
      *(_QWORD *)(v204 + 32) = -1073741585LL;
      v72 = WdLogEvent5_WdError(v204);
      goto LABEL_366;
    }
    if ( a4 && !v236 || !a4 && v236 )
    {
      TargetVirtualization = -1073741583;
      v156 = (_QWORD *)WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
      v156[3] = a5;
      v156[4] = a4;
      v156[5] = v236;
      v156[6] = -1073741583LL;
      v110 = WdLogEvent5_WdError(v156);
      goto LABEL_366;
    }
    if ( (a5 & 0x8000u) != 0 )
    {
      EnforceSDCCloneSourceIndexCoherency(v234, a2, &v113);
      if ( v113 != -1 )
      {
        v229 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
        *(_QWORD *)(v229 + 24) = v113;
        v74 = WdLogEvent5_WdError(v229);
        LogCodePointPacket(57LL, v113, 0LL, 0LL);
      }
    }
    if ( v236 )
    {
      Size = 16 * v236;
      v38 = (struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *)PALLOCMEM2(16 * v236, 1936876615LL, 1);
      if ( !v38 )
      {
        TargetVirtualization = -1073741801;
        v169 = (_QWORD *)WdLogNewEntry5_WdError(v16, LowPart, v14, v15);
        v169[3] = v236;
        v169[4] = a5;
        v169[5] = -1073741801LL;
        v139 = WdLogEvent5_WdError(v169);
        goto LABEL_366;
      }
      v230 = Size;
      memset(v38, 0, Size);
      v13 = 0LL;
    }
    v42 = 0;
    for ( j = 0; j < v234; ++j )
    {
      v13 = (__int64)a2 + 72 * j;
      v39 = (struct _LUID *)v13;
      v48 = 0LL;
      v44 = 0LL;
      v45 = 0LL;
      if ( (a5 & 0x8000u) != 0 && (v39[8].HighPart & 0xFFFFFFF2) != 0 )
      {
        TargetVirtualization = -1073741584;
        v159 = (_QWORD *)WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
        v159[3] = (unsigned int)v39[8].HighPart;
        v159[4] = 13LL;
        v159[5] = -1073741584LL;
        v76 = WdLogEvent5_WdError(v159);
        goto LABEL_366;
      }
      if ( (v39[8].HighPart & 1) != 0 )
      {
        TargetVirtualization = GetTargetVirtualization(*v39, v39[3].HighPart, v40, v35, 0LL);
        if ( TargetVirtualization < 0 )
        {
          v222 = WdLogNewEntry5_WdError(v17, LowPart, v14, v15);
          *(_QWORD *)(v222 + 24) = TargetVirtualization;
          v112 = WdLogEvent5_WdError(v222);
          TargetVirtualization = -1073741584;
          goto LABEL_366;
        }
        if ( v40[0] && v35[0] )
        {
          v13 = (__int64)v39;
          v39[8].HighPart &= ~8u;
        }
        else
        {
          v13 = (__int64)v39;
          v39[8].HighPart |= 8u;
        }
        if ( (a5 & 0x8000u) == 0 )
        {
          if ( (v39[8].HighPart & 4) != 0 )
          {
            TargetVirtualization = -1073741584;
            v178 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
            *(_QWORD *)(v178 + 24) = j;
            *(_QWORD *)(v178 + 32) = -1073741584LL;
            v130 = WdLogEvent5_WdError(v178);
            goto LABEL_366;
          }
        }
        else if ( v40[0] && (v39[8].HighPart & 4) != 0 )
        {
          TargetVirtualization = -1073741584;
          v216 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
          *(_QWORD *)(v216 + 24) = j;
          *(_QWORD *)(v216 + 32) = -1073741584LL;
          v78 = WdLogEvent5_WdError(v216);
          goto LABEL_366;
        }
        if ( (a5 & 0x8000u) == 0 )
          HighPart = v39[1].HighPart;
        else
          HighPart = Convert16bitSdcModeInfoIdxTo32bit(HIWORD(v39[1].HighPart));
        if ( HighPart == -1 )
        {
          if ( (a5 & 0x8000u) != 0 )
          {
            if ( (unsigned __int16)v39[1].HighPart == 0xFFFF )
            {
              TargetVirtualization = -1073741582;
              v181 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
              *(_QWORD *)(v181 + 24) = j;
              *(_QWORD *)(v181 + 32) = -1073741582LL;
              v86 = WdLogEvent5_WdError(v181);
              goto LABEL_366;
            }
            for ( k = 0; k < j; ++k )
            {
              if ( (v39[8].HighPart & 1) != 0 )
              {
                v13 = (unsigned __int16)v39[1].HighPart;
                if ( (unsigned __int16)*((_DWORD *)a2 + 18 * k + 3) == (_DWORD)v13 )
                  break;
              }
            }
            if ( k < j )
            {
              v13 = v39[8].HighPart & 8;
              if ( (*((_DWORD *)a2 + 18 * k + 17) & 8) != (_DWORD)v13 )
              {
                TargetVirtualization = -1073741582;
                v171 = (_QWORD *)WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
                v171[3] = k;
                v171[4] = j;
                v171[5] = -1073741582LL;
                v132 = WdLogEvent5_WdError(v171);
                goto LABEL_366;
              }
              if ( v35[0] )
              {
                v13 = (__int64)a2;
                LowPart = v39->LowPart;
                if ( *((_DWORD *)a2 + 18 * k) != (_DWORD)LowPart
                  || (v13 = (__int64)a2,
                      LowPart = (unsigned int)v39->HighPart,
                      *((_DWORD *)a2 + 18 * k + 1) != (_DWORD)LowPart) )
                {
                  TargetVirtualization = -1073741582;
                  v167 = (_QWORD *)WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
                  v167[3] = k;
                  v167[4] = j;
                  v167[5] = -1073741582LL;
                  v88 = WdLogEvent5_WdError(v167);
                  goto LABEL_366;
                }
              }
            }
          }
          v42 = 1;
        }
        else
        {
          if ( HighPart >= v236 )
          {
            TargetVirtualization = -1073741583;
            v141 = (_QWORD *)WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
            v141[3] = HighPart;
            v141[4] = v236;
            v141[5] = j;
            v141[6] = a5;
            v141[7] = -1073741583LL;
            v80 = WdLogEvent5_WdError(v141);
            goto LABEL_366;
          }
          v45 = (char *)a4 + 64 * (unsigned __int64)HighPart;
          if ( (a5 & 0x8000u) != 0 && (unsigned __int16)v39[1].HighPart != 0xFFFF )
          {
            TargetVirtualization = -1073741582;
            v179 = WdLogNewEntry5_WdError((char *)a4 + 64 * (unsigned __int64)HighPart, LowPart, v14, v15);
            *(_QWORD *)(v179 + 24) = j;
            *(_QWORD *)(v179 + 32) = -1073741582LL;
            v114 = WdLogEvent5_WdError(v179);
            goto LABEL_366;
          }
          v18 = *((unsigned int *)v45 + 2);
          v148 = v39->LowPart == (_DWORD)v18 && (v18 = *((unsigned int *)v45 + 3), v39->HighPart == (_DWORD)v18);
          if ( !v148 || (v18 = *((unsigned int *)v45 + 1), __PAIR64__(v39[1].LowPart, 1) != *(_QWORD *)v45) )
          {
            TargetVirtualization = -1073741582;
            v144 = (_QWORD *)WdLogNewEntry5_WdError(v18, LowPart, v14, v15);
            v144[3] = j;
            v144[4] = v39[1].LowPart;
            v144[5] = *((unsigned int *)v45 + 1);
            v144[6] = a5;
            v144[7] = -1073741582LL;
            v82 = WdLogEvent5_WdError(v144);
            goto LABEL_366;
          }
          if ( *((_DWORD *)v45 + 6) == 1 || *((_DWORD *)v45 + 6) == 2 || *((_DWORD *)v45 + 6) == 3 )
          {
            TargetVirtualization = -1073741582;
            v142 = (_QWORD *)WdLogNewEntry5_WdError(v18, LowPart, v14, v15);
            v142[3] = j;
            v142[4] = v39[1].LowPart;
            v142[5] = *((unsigned int *)v45 + 1);
            v142[6] = a5;
            v142[7] = -1073741582LL;
            v137 = WdLogEvent5_WdError(v142);
            goto LABEL_366;
          }
          if ( v35[0] )
            v19 = *((_DWORD *)v38 + 4 * HighPart) | 0x200000;
          else
            v19 = *((_DWORD *)v38 + 4 * HighPart) | 0x100000;
          *((_DWORD *)v38 + 4 * HighPart) = v19;
          if ( v39[5].LowPart == 2 || v39[5].LowPart == 4 )
            *((_DWORD *)v38 + 4 * HighPart) |= 0x2000000u;
          *((_DWORD *)v38 + 4 * HighPart) = (unsigned __int16)(*((_DWORD *)v38 + 4 * HighPart) + 1) | *((_DWORD *)v38 + 4 * HighPart) & 0xFFFF0000;
          *((_QWORD *)v38 + 2 * HighPart + 1) = *((_QWORD *)v45 + 1);
          *((_DWORD *)v38 + 4 * HighPart + 1) = *((_DWORD *)v45 + 1);
          v152 = v35[0] == 0;
          *((_DWORD *)v38 + 4 * HighPart) = (v152 << 23) | *((_DWORD *)v38 + 4 * HighPart) & 0xFF7FFFFF;
          if ( *((_DWORD *)v45 + 7) || *((_DWORD *)v45 + 8) )
          {
            LowPart = (unsigned __int64)v38;
            *((_DWORD *)v38 + 4 * HighPart) |= 0x20000u;
          }
          else
          {
            LowPart = (unsigned __int64)v38;
            *((_DWORD *)v38 + 4 * HighPart) |= 0x10000u;
          }
          if ( (v39[8].HighPart & 4) != 0 )
          {
            if ( ((*((_DWORD *)v38 + 4 * HighPart) >> 22) & 1) != 0 )
            {
              TargetVirtualization = -1073741584;
              v173 = (_QWORD *)WdLogNewEntry5_WdError(v38, LowPart, v14, v15);
              v173[3] = j;
              v173[4] = v39[1].LowPart;
              v173[5] = -1073741584LL;
              v84 = WdLogEvent5_WdError(v173);
              goto LABEL_366;
            }
            LowPart = (unsigned __int64)v38;
            *((_DWORD *)v38 + 4 * HighPart) |= 0x400000u;
          }
          v13 = (__int64)v38;
          if ( ((*((_DWORD *)v38 + 4 * HighPart) >> 20) & 1) != 0 )
          {
            v13 = (__int64)v38;
            if ( ((*((_DWORD *)v38 + 4 * HighPart) >> 21) & 1) != 0 )
            {
              TargetVirtualization = -1073741582;
              v165 = (_QWORD *)WdLogNewEntry5_WdError(v38, LowPart, v14, v15);
              v165[3] = v39[1].LowPart;
              v165[4] = *((unsigned int *)v45 + 1);
              v165[5] = -1073741582LL;
              v116 = WdLogEvent5_WdError(v165);
              goto LABEL_366;
            }
          }
        }
        if ( (a5 & 0x8000u) == 0 )
          v33 = v39[4].LowPart;
        else
          v33 = Convert16bitSdcModeInfoIdxTo32bit(HIWORD(v39[4].LowPart));
        if ( v33 == -1 )
        {
          v51 = v39[7].LowPart;
          v54 = v39[6].LowPart;
          v55 = v39[6].HighPart;
        }
        else
        {
          if ( v33 >= v236 )
          {
            TargetVirtualization = -1073741583;
            v143 = (_QWORD *)WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
            v143[3] = v33;
            v143[4] = v236;
            v143[5] = j;
            v143[6] = a5;
            v143[7] = -1073741583LL;
            v118 = WdLogEvent5_WdError(v143);
            goto LABEL_366;
          }
          v48 = (char *)a4 + 64 * (unsigned __int64)v33;
          if ( !v45 )
          {
            TargetVirtualization = -1073741584;
            v175 = (_QWORD *)WdLogNewEntry5_WdError((char *)a4 + 64 * (unsigned __int64)v33, LowPart, v14, v15);
            v175[3] = j;
            v175[4] = a5;
            v175[5] = -1073741584LL;
            v90 = WdLogEvent5_WdError(v175);
            goto LABEL_366;
          }
          v20 = *((unsigned int *)v48 + 2);
          v157 = v39[2].HighPart == (_DWORD)v20 && (v20 = *((unsigned int *)v48 + 3), v39[3].LowPart == (_DWORD)v20);
          if ( !v157 || (v20 = *((unsigned int *)v48 + 1), __PAIR64__(v39[3].HighPart, 2) != *(_QWORD *)v48) )
          {
            TargetVirtualization = -1073741582;
            v145 = (_QWORD *)WdLogNewEntry5_WdError(v20, LowPart, v14, v15);
            v145[3] = j;
            v145[4] = (unsigned int)v39[3].HighPart;
            v145[5] = *((unsigned int *)v48 + 1);
            v145[6] = a5;
            v145[7] = -1073741582LL;
            v56 = WdLogEvent5_WdError(v145);
            goto LABEL_366;
          }
          v51 = *((_DWORD *)v48 + 15);
          v54 = *((_DWORD *)v48 + 8);
          v55 = *((_DWORD *)v48 + 9);
          *((_DWORD *)v38 + 4 * v33) = (unsigned __int16)(*((_DWORD *)v38 + 4 * v33) + 1) | *((_DWORD *)v38 + 4 * v33) & 0xFFFF0000;
          *((_QWORD *)v38 + 2 * v33 + 1) = *((_QWORD *)v48 + 1);
          *((_DWORD *)v38 + 4 * v33 + 1) = *((_DWORD *)v48 + 1);
          *((_DWORD *)v38 + 4 * v33) |= 0x40000u;
          Size_4 = v35[0] == 0;
          v13 = 16LL * v33;
          LowPart = (unsigned __int64)v38;
          *(_DWORD *)((char *)v38 + v13) = (Size_4 << 23) | *(_DWORD *)((_BYTE *)v38 + v13) & 0xFF7FFFFF;
        }
        if ( (a5 & 0x8000u) == 0 )
          v34 = -1;
        else
          v34 = Convert16bitSdcModeInfoIdxTo32bit(v39[4].LowPart);
        if ( v34 != -1 )
        {
          if ( v34 >= v236 )
          {
            TargetVirtualization = -1073741583;
            v147 = (_QWORD *)WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
            v147[3] = v34;
            v147[4] = v236;
            v147[5] = j;
            v147[6] = a5;
            v147[7] = -1073741583LL;
            v92 = WdLogEvent5_WdError(v147);
            goto LABEL_366;
          }
          v44 = (char *)a4 + 64 * (unsigned __int64)v34;
          v21 = *((unsigned int *)v44 + 2);
          v155 = v39[2].HighPart == (_DWORD)v21 && (v21 = *((unsigned int *)v44 + 3), v39[3].LowPart == (_DWORD)v21);
          if ( !v155 || (v21 = *((unsigned int *)v44 + 1), __PAIR64__(v39[3].HighPart, 3) != *(_QWORD *)v44) )
          {
            TargetVirtualization = -1073741582;
            v146 = (_QWORD *)WdLogNewEntry5_WdError(v21, LowPart, v14, v15);
            v146[3] = j;
            v146[4] = (unsigned int)v39[3].HighPart;
            v146[5] = *((unsigned int *)v44 + 1);
            v146[6] = a5;
            v146[7] = -1073741582LL;
            v120 = WdLogEvent5_WdError(v146);
            goto LABEL_366;
          }
          if ( v40[0] && v35[0] )
          {
            TargetVirtualization = -1073741584;
            v183 = WdLogNewEntry5_WdError(v21, LowPart, v14, v15);
            *(_QWORD *)(v183 + 24) = j;
            *(_QWORD *)(v183 + 32) = -1073741584LL;
            v94 = WdLogEvent5_WdError(v183);
            goto LABEL_366;
          }
          if ( !v45 )
          {
            TargetVirtualization = -1073741584;
            v185 = WdLogNewEntry5_WdError(v21, LowPart, v14, v15);
            *(_QWORD *)(v185 + 24) = j;
            *(_QWORD *)(v185 + 32) = -1073741584LL;
            v134 = WdLogEvent5_WdError(v185);
            goto LABEL_366;
          }
          if ( *((_DWORD *)v44 + 11)
            || *((_DWORD *)v44 + 10)
            || (v21 = *((unsigned int *)v45 + 4), *((_DWORD *)v44 + 12) != (_DWORD)v21)
            || (v21 = *((unsigned int *)v45 + 5), *((_DWORD *)v44 + 13) != (_DWORD)v21) )
          {
            TargetVirtualization = -1073741582;
            v187 = WdLogNewEntry5_WdError(v21, LowPart, v14, v15);
            *(_QWORD *)(v187 + 24) = j;
            *(_QWORD *)(v187 + 32) = -1073741582LL;
            v96 = WdLogEvent5_WdError(v187);
            goto LABEL_366;
          }
          v22 = *((unsigned int *)v44 + 9);
          if ( *((_DWORD *)v44 + 7) >= (int)v22 || (v22 = *((unsigned int *)v44 + 8), *((_DWORD *)v44 + 6) >= (int)v22) )
          {
            TargetVirtualization = -1073741582;
            v189 = WdLogNewEntry5_WdError(v22, LowPart, v14, v15);
            *(_QWORD *)(v189 + 24) = j;
            *(_QWORD *)(v189 + 32) = -1073741582LL;
            v122 = WdLogEvent5_WdError(v189);
            goto LABEL_366;
          }
          if ( *((int *)v44 + 7) < 0
            || *((int *)v44 + 6) < 0
            || (v22 = *((unsigned int *)v44 + 5), *((_DWORD *)v44 + 9) > (int)v22)
            || (v22 = *((unsigned int *)v44 + 4), *((_DWORD *)v44 + 8) > (int)v22) )
          {
            TargetVirtualization = -1073741582;
            v191 = WdLogNewEntry5_WdError(v22, LowPart, v14, v15);
            *(_QWORD *)(v191 + 24) = j;
            *(_QWORD *)(v191 + 32) = -1073741582LL;
            v98 = WdLogEvent5_WdError(v191);
            goto LABEL_366;
          }
          *((_DWORD *)v38 + 4 * v34) = (unsigned __int16)(*((_DWORD *)v38 + 4 * v34) + 1) | *((_DWORD *)v38 + 4 * v34) & 0xFFFF0000;
          *((_QWORD *)v38 + 2 * v34 + 1) = *((_QWORD *)v44 + 1);
          *((_DWORD *)v38 + 4 * v34 + 1) = *((_DWORD *)v44 + 1);
          *((_DWORD *)v38 + 4 * v34) |= 0x80000u;
          v153 = v35[0] == 0;
          v13 = 16LL * v34;
          LowPart = (unsigned __int64)v38;
          *(_DWORD *)((char *)v38 + v13) = (v153 << 23) | *(_DWORD *)((_BYTE *)v38 + v13) & 0xFF7FFFFF;
        }
        if ( (a5 & 0x8000u) != 0 )
        {
          if ( v40[0] && v35[0] )
          {
            if ( (v45 || v44 || v48) && (!v45 || v44 || !v48) && (!v45 || v44 || v48) )
            {
              TargetVirtualization = -1073741584;
              v195 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
              *(_QWORD *)(v195 + 24) = j;
              *(_QWORD *)(v195 + 32) = -1073741584LL;
              v100 = WdLogEvent5_WdError(v195);
              goto LABEL_366;
            }
          }
          else if ( (v45 || v44 || v48) && (!v45 || !v44 || !v48) && (!v45 || v44 || !v48) && (!v45 || v44 || v48) )
          {
            TargetVirtualization = -1073741584;
            v193 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
            *(_QWORD *)(v193 + 24) = j;
            *(_QWORD *)(v193 + 32) = -1073741584LL;
            v138 = WdLogEvent5_WdError(v193);
            goto LABEL_366;
          }
        }
        if ( v54 && v55 )
        {
          v149 = v51;
          if ( v51 <= 0 || v149 > 3 )
          {
            TargetVirtualization = -1073741582;
            v197 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
            *(_QWORD *)(v197 + 24) = v51;
            *(_QWORD *)(v197 + 32) = -1073741582LL;
            v124 = WdLogEvent5_WdError(v197);
            goto LABEL_366;
          }
        }
        else
        {
          if ( v54 || v55 )
          {
            TargetVirtualization = -1073741582;
            v158 = (_QWORD *)WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
            v158[3] = v54;
            v158[4] = v55;
            v158[5] = j;
            v158[6] = -1073741582LL;
            v57 = WdLogEvent5_WdError(v158);
            goto LABEL_366;
          }
          if ( v51 )
          {
            TargetVirtualization = -1073741582;
            v160 = (_QWORD *)WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
            v160[3] = v51;
            v160[4] = j;
            v160[5] = -1073741582LL;
            v102 = WdLogEvent5_WdError(v160);
            goto LABEL_366;
          }
        }
      }
    }
    if ( v236 )
    {
      if ( (a5 & 0x8000u) != 0 )
      {
        v49 = 0;
        v115 = 0;
        for ( m = 0; m < v236; ++m )
        {
          v13 = (__int64)v38 + 16 * m;
          v43 = (_DWORD *)v13;
          if ( (unsigned __int16)*(_DWORD *)v13 )
          {
            if ( ((*v43 >> 18) & 1) != 0 )
            {
              v13 = (__int64)a4;
              if ( *((_DWORD *)a4 + 16 * (unsigned __int64)m) != 2 )
              {
                v232 = WdLogNewEntry5_WdAssertion(a4, LowPart, v14, v15);
                v59 = WdLogEvent5_WdAssertion(v232);
              }
              if ( (unsigned __int16)*v43 > 1u )
              {
                TargetVirtualization = -1073741584;
                v162 = (_QWORD *)WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
                v162[3] = (unsigned int)v43[1];
                v162[4] = (unsigned __int16)*v43;
                v162[5] = -1073741584LL;
                v61 = WdLogEvent5_WdError(v162);
                goto LABEL_366;
              }
            }
            else if ( ((*v43 >> 19) & 1) != 0 )
            {
              v13 = (__int64)a4;
              if ( *((_DWORD *)a4 + 16 * (unsigned __int64)m) != 3 )
              {
                v231 = WdLogNewEntry5_WdAssertion(a4, LowPart, v14, v15);
                v63 = WdLogEvent5_WdAssertion(v231);
              }
              if ( (unsigned __int16)*v43 > 1u )
              {
                TargetVirtualization = -1073741584;
                v164 = (_QWORD *)WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
                v164[3] = (unsigned int)v43[1];
                v164[4] = (unsigned __int16)*v43;
                v164[5] = -1073741584LL;
                v65 = WdLogEvent5_WdError(v164);
                goto LABEL_366;
              }
            }
            else
            {
              if ( (*v43 & 0x10000) == 0 && ((*v43 >> 17) & 1) == 0 )
              {
                TargetVirtualization = -1073741811;
                v201 = WdLogNewEntry5_WdAssertion(v13, LowPart, v14, v15);
                *(_QWORD *)(v201 + 24) = v43;
                *(_QWORD *)(v201 + 32) = m;
                v71 = WdLogEvent5_WdAssertion(v201);
                goto LABEL_366;
              }
              v13 = (__int64)a4;
              if ( *((_DWORD *)a4 + 16 * (unsigned __int64)m) != 1 )
              {
                v233 = WdLogNewEntry5_WdAssertion(a4, LowPart, v14, v15);
                v67 = WdLogEvent5_WdAssertion(v233);
              }
              if ( (*v43 & 0x1000000) == 0 )
              {
                ++v115;
                if ( (*v43 & 0x10000) != 0 )
                  ++v49;
              }
              if ( ((*v43 >> 20) & 1) != 0 && (unsigned __int16)*v43 > 1u )
              {
                TargetVirtualization = -1073741584;
                v199 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
                *(_QWORD *)(v199 + 24) = (unsigned int)v43[1];
                *(_QWORD *)(v199 + 32) = -1073741584LL;
                v69 = WdLogEvent5_WdError(v199);
                goto LABEL_366;
              }
            }
            for ( n = m + 1; n < v236; ++n )
            {
              v13 = (__int64)v38 + 16 * n;
              v50 = (_DWORD *)v13;
              if ( (unsigned __int16)*(_DWORD *)v13 )
              {
                v13 = (unsigned int)v50[2];
                if ( v43[2] == (_DWORD)v13 )
                {
                  v13 = (unsigned int)v50[3];
                  if ( v43[3] == (_DWORD)v13 )
                  {
                    v13 = (unsigned int)v50[1];
                    if ( v43[1] == (_DWORD)v13 )
                    {
                      LowPart = (unsigned __int64)a4;
                      v13 = *((unsigned int *)a4 + 16 * (unsigned __int64)n);
                      if ( *((_DWORD *)a4 + 16 * (unsigned __int64)m) == (_DWORD)v13 )
                      {
                        v13 = (__int64)a4;
                        if ( *((_DWORD *)a4 + 16 * (unsigned __int64)m) != 1 || ((*v43 >> 23) & 1) != 0 )
                        {
                          TargetVirtualization = -1073741582;
                          v203 = WdLogNewEntry5_WdError(a4, a4, v14, v15);
                          *(_QWORD *)(v203 + 24) = (unsigned int)v50[1];
                          *(_QWORD *)(v203 + 32) = -1073741582LL;
                          v73 = WdLogEvent5_WdError(v203);
                          goto LABEL_366;
                        }
                      }
                    }
                  }
                }
                if ( (*v43 & 0x1000000) == 0 )
                {
                  v13 = (__int64)a4;
                  if ( *((_DWORD *)a4 + 16 * (unsigned __int64)n) == 1 )
                  {
                    v13 = (__int64)a4;
                    if ( *((_DWORD *)a4 + 16 * (unsigned __int64)m) == 1 )
                    {
                      LowPart = (unsigned __int64)a4;
                      v13 = *((unsigned int *)a4 + 16 * (unsigned __int64)m + 7);
                      if ( *((_DWORD *)a4 + 16 * (unsigned __int64)n + 7) == (_DWORD)v13 )
                      {
                        LowPart = (unsigned __int64)a4;
                        v13 = *((unsigned int *)a4 + 16 * (unsigned __int64)m + 8);
                        if ( *((_DWORD *)a4 + 16 * (unsigned __int64)n + 8) == (_DWORD)v13 )
                        {
                          v23 = (*v50 >> 20) & 1;
                          if ( ((*v43 >> 20) & 1) != (_DWORD)v23
                            || (v23 = (*v50 >> 21) & 1, ((*v43 >> 21) & 1) != (_DWORD)v23) )
                          {
                            TargetVirtualization = -1073741582;
                            v166 = (_QWORD *)WdLogNewEntry5_WdError(v23, a4, v14, v15);
                            v166[3] = m;
                            v166[4] = n;
                            v166[5] = -1073741582LL;
                            v75 = WdLogEvent5_WdError(v166);
                            goto LABEL_366;
                          }
                          if ( (unsigned __int16)*v50 > 1u )
                          {
                            TargetVirtualization = -1073741584;
                            v205 = WdLogNewEntry5_WdError(v23, a4, v14, v15);
                            *(_QWORD *)(v205 + 24) = (unsigned int)v50[1];
                            *(_QWORD *)(v205 + 32) = -1073741584LL;
                            v77 = WdLogEvent5_WdError(v205);
                            goto LABEL_366;
                          }
                          if ( ((*v43 >> 25) & 1) == ((*v50 >> 25) & 1) )
                          {
                            v24 = a4;
                            v25 = *((unsigned int *)a4 + 16 * (unsigned __int64)m + 5);
                            if ( *((_DWORD *)a4 + 16 * (unsigned __int64)n + 5) != (_DWORD)v25
                              || (v24 = a4,
                                  v25 = *((unsigned int *)a4 + 16 * (unsigned __int64)m + 4),
                                  *((_DWORD *)a4 + 16 * (unsigned __int64)n + 4) != (_DWORD)v25) )
                            {
                              TargetVirtualization = -1073741582;
                              v168 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24, v14, v15);
                              v168[3] = m;
                              v168[4] = n;
                              v168[5] = -1073741582LL;
                              v79 = WdLogEvent5_WdError(v168);
                              goto LABEL_366;
                            }
                          }
                          else
                          {
                            v26 = a4;
                            v27 = *((unsigned int *)a4 + 16 * (unsigned __int64)m + 5);
                            if ( *((_DWORD *)a4 + 16 * (unsigned __int64)n + 4) != (_DWORD)v27
                              || (v26 = a4,
                                  v27 = *((unsigned int *)a4 + 16 * (unsigned __int64)m + 4),
                                  *((_DWORD *)a4 + 16 * (unsigned __int64)n + 5) != (_DWORD)v27) )
                            {
                              TargetVirtualization = -1073741582;
                              v170 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26, v14, v15);
                              v170[3] = m;
                              v170[4] = n;
                              v170[5] = -1073741582LL;
                              v81 = WdLogEvent5_WdError(v170);
                              goto LABEL_366;
                            }
                          }
                          LowPart = (unsigned __int64)a4;
                          v28 = *((unsigned int *)a4 + 16 * (unsigned __int64)m + 6);
                          if ( *((_DWORD *)a4 + 16 * (unsigned __int64)n + 6) != (_DWORD)v28 )
                          {
                            TargetVirtualization = -1073741582;
                            v172 = (_QWORD *)WdLogNewEntry5_WdError(v28, a4, v14, v15);
                            v172[3] = m;
                            v172[4] = n;
                            v172[5] = -1073741582LL;
                            v83 = WdLogEvent5_WdError(v172);
                            goto LABEL_366;
                          }
                          if ( ((*v43 >> 20) & 1) != 0 )
                          {
                            if ( ((*v43 >> 23) & 1) == 0 || ((*v50 >> 23) & 1) == 0 )
                            {
                              TargetVirtualization = -1073741582;
                              v174 = (_QWORD *)WdLogNewEntry5_WdError(v28, a4, v14, v15);
                              v174[3] = m;
                              v174[4] = n;
                              v174[5] = -1073741582LL;
                              v85 = WdLogEvent5_WdError(v174);
                              goto LABEL_366;
                            }
                          }
                          else
                          {
                            v29 = (unsigned int)v50[2];
                            if ( v43[2] != (_DWORD)v29 || (v29 = (unsigned int)v50[3], v43[3] != (_DWORD)v29) )
                            {
                              TargetVirtualization = -1073741582;
                              v176 = (_QWORD *)WdLogNewEntry5_WdError(v29, a4, v14, v15);
                              v176[3] = m;
                              v176[4] = n;
                              v176[5] = -1073741582LL;
                              v87 = WdLogEvent5_WdError(v176);
                              goto LABEL_366;
                            }
                          }
                          v13 = (__int64)v50;
                          *v50 |= 0x1000000u;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if ( v115 && v49 != 1 )
        {
          if ( v42 && v49 <= 1 )
          {
            v223 = WdLogNewEntry5_WdEvent(v13, LowPart);
            *(_QWORD *)(v223 + 24) = v49;
            v89 = WdLogEvent5_WdEvent(v223);
          }
          else if ( (a6 & 8) != 0 && v49 <= 1 )
          {
            v225 = WdLogNewEntry5_WdEvent(v13, LowPart);
            *(_QWORD *)(v225 + 24) = v49;
            v91 = WdLogEvent5_WdEvent(v225);
          }
          else
          {
            TargetVirtualization = -1073741583;
            v207 = WdLogNewEntry5_WdError(v13, LowPart, v14, v15);
            *(_QWORD *)(v207 + 24) = v49;
            *(_QWORD *)(v207 + 32) = -1073741583LL;
            v93 = WdLogEvent5_WdError(v207);
          }
        }
      }
      else
      {
        TargetVirtualization = ValidateSDCv1ModeInfoArray(v38, v236, v42);
      }
    }
  }
LABEL_366:
  if ( v38 )
    Win32FreePool();
  return (unsigned int)TargetVirtualization;
}
