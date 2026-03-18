/*
 * XREFs of xxxUpdatePerUserSystemParameters @ 0x1C0133984
 * Callers:
 *     NtUserUpdatePerUserSystemParameters @ 0x1C01331F0 (NtUserUpdatePerUserSystemParameters.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     _SetCaretBlinkTime @ 0x1C003A590 (_SetCaretBlinkTime.c)
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     ReadPointerDeviceSettings @ 0x1C003C944 (ReadPointerDeviceSettings.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00DCB5C (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _DestroyMenu @ 0x1C00DD5A0 (_DestroyMenu.c)
 *     WakeRIT @ 0x1C00F42E4 (WakeRIT.c)
 *     xxxSetWindowNCMetrics @ 0x1C00FC280 (xxxSetWindowNCMetrics.c)
 *     xxxUserResetDisplayDevice @ 0x1C01302D0 (xxxUserResetDisplayDevice.c)
 *     UnlockDesktopMenu @ 0x1C0132B10 (UnlockDesktopMenu.c)
 *     ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C0132EC0 (-PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x1C0132F4C (-TraceLoggingAutoRotationStateEvent@@YAXXZ.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C013321C (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z @ 0x1C0133458 (-LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z.c)
 *     SetMinMetrics @ 0x1C01335D4 (SetMinMetrics.c)
 *     GreSetFontEnumeration @ 0x1C0134DE0 (GreSetFontEnumeration.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0134E24 (xxxUpdatePerUserAccessPackSettings.c)
 *     UpdatePerUserKeyboardIndicators @ 0x1C0135904 (UpdatePerUserKeyboardIndicators.c)
 *     SetMouseTrails @ 0x1C01359E4 (SetMouseTrails.c)
 *     ResetMouseAccelerationCurves @ 0x1C0135A58 (ResetMouseAccelerationCurves.c)
 *     ReadDefaultAccelerationCurves @ 0x1C0135A88 (ReadDefaultAccelerationCurves.c)
 *     CalculateMouseSensitivity @ 0x1C0135BB8 (CalculateMouseSensitivity.c)
 *     GetEasTimeout @ 0x1C0135BDC (GetEasTimeout.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C0135D14 (xxxUpdateSystemIconsFromRegistry.c)
 *     xxxUpdateSystemCursorsFromRegistry @ 0x1C01360BC (xxxUpdateSystemCursorsFromRegistry.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0136F20 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     GetKbdLangSwitch @ 0x1C0137244 (GetKbdLangSwitch.c)
 *     SetIconMetrics @ 0x1C01372AC (SetIconMetrics.c)
 *     ?InitScancodeMap@@YAXXZ @ 0x1C0154FEC (-InitScancodeMap@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?UserReinitializeStockFonts@@YAXK@Z @ 0x1C01D1B2C (-UserReinitializeStockFonts@@YAXK@Z.c)
 *     CheckEasPolicyChange @ 0x1C01D1D1C (CheckEasPolicyChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxUpdatePerUserSystemParameters(unsigned int a1)
{
  __int64 v1; // r8
  int v2; // r14d
  int v3; // r15d
  __int64 v4; // rdx
  int v5; // esi
  int v6; // r13d
  int v7; // r12d
  struct _UNICODE_STRING *ProfileUserName; // rdi
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  USHORT Length; // ax
  int v14; // ebx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 *v21; // rbx
  int v22; // esi
  int v23; // esi
  __int64 *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // ebx
  unsigned int EasTimeout; // esi
  int v30; // esi
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  unsigned __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  unsigned __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // ecx
  unsigned int v50; // eax
  void *v51; // rbx
  unsigned __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  int v55; // ecx
  __int64 v56; // rcx
  __int64 v57; // rcx
  int v58; // ecx
  _DWORD *v59; // rcx
  unsigned __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  int v63; // ecx
  __int64 v64; // rcx
  __int64 v65; // rcx
  int v66; // ecx
  _DWORD *v67; // rcx
  unsigned int v68; // ecx
  char v69; // cl
  void *v70; // rax
  unsigned __int16 *v71; // r8
  unsigned int v72; // r9d
  __int64 v73; // rdx
  __int64 v74; // rcx
  const struct _TlgProvider_t *v75; // rcx
  __int64 v76; // [rsp+28h] [rbp-E0h]
  __int64 v77; // [rsp+30h] [rbp-D8h]
  unsigned int v78; // [rsp+58h] [rbp-B0h] BYREF
  int v79; // [rsp+5Ch] [rbp-ACh]
  unsigned int LogPixels; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v81; // [rsp+64h] [rbp-A4h] BYREF
  int v82; // [rsp+68h] [rbp-A0h] BYREF
  int v83; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v84; // [rsp+70h] [rbp-98h] BYREF
  int v85; // [rsp+74h] [rbp-94h] BYREF
  int v86; // [rsp+78h] [rbp-90h] BYREF
  int v87; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v88; // [rsp+80h] [rbp-88h]
  int v89; // [rsp+84h] [rbp-84h] BYREF
  _BYTE v90[24]; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v91[16]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v92; // [rsp+E0h] [rbp-28h] BYREF
  int v93; // [rsp+E8h] [rbp-20h]
  int v94; // [rsp+ECh] [rbp-1Ch]
  __int64 v95; // [rsp+F0h] [rbp-18h]
  int v96; // [rsp+F8h] [rbp-10h]
  int v97; // [rsp+FCh] [rbp-Ch]
  int v98; // [rsp+100h] [rbp-8h]
  int v99; // [rsp+104h] [rbp-4h]
  int v100; // [rsp+108h] [rbp+0h]
  int v101; // [rsp+10Ch] [rbp+4h]
  int v102; // [rsp+110h] [rbp+8h]
  int v103; // [rsp+114h] [rbp+Ch]
  int v104; // [rsp+118h] [rbp+10h]
  int v105; // [rsp+11Ch] [rbp+14h]
  int v106; // [rsp+120h] [rbp+18h]
  int v107; // [rsp+124h] [rbp+1Ch]
  int v108; // [rsp+128h] [rbp+20h]
  int v109; // [rsp+12Ch] [rbp+24h]
  int v110; // [rsp+130h] [rbp+28h]
  int v111; // [rsp+134h] [rbp+2Ch]
  int v112; // [rsp+138h] [rbp+30h]
  int v113; // [rsp+13Ch] [rbp+34h]
  int v114; // [rsp+140h] [rbp+38h]
  int v115; // [rsp+144h] [rbp+3Ch]
  int v116; // [rsp+148h] [rbp+40h]
  int v117; // [rsp+14Ch] [rbp+44h]
  int v118; // [rsp+150h] [rbp+48h]
  int v119; // [rsp+154h] [rbp+4Ch]
  int v120; // [rsp+158h] [rbp+50h]
  int v121; // [rsp+15Ch] [rbp+54h]
  int v122; // [rsp+160h] [rbp+58h]
  int v123; // [rsp+164h] [rbp+5Ch]
  int v124; // [rsp+168h] [rbp+60h]
  int v125; // [rsp+16Ch] [rbp+64h]
  int v126; // [rsp+170h] [rbp+68h]
  int v127; // [rsp+174h] [rbp+6Ch]
  int v128; // [rsp+178h] [rbp+70h]
  int v129; // [rsp+17Ch] [rbp+74h]
  __int64 v130; // [rsp+180h] [rbp+78h]
  int v131; // [rsp+188h] [rbp+80h]
  int v132; // [rsp+18Ch] [rbp+84h]
  __int64 v133; // [rsp+190h] [rbp+88h] BYREF
  int v134; // [rsp+198h] [rbp+90h]
  int v135; // [rsp+19Ch] [rbp+94h]
  int v136; // [rsp+1A0h] [rbp+98h]
  int v137; // [rsp+1A4h] [rbp+9Ch]
  int v138; // [rsp+1A8h] [rbp+A0h]
  int v139; // [rsp+1ACh] [rbp+A4h]
  int v140; // [rsp+1B0h] [rbp+A8h]
  int v141; // [rsp+1B4h] [rbp+ACh]
  int v142; // [rsp+1B8h] [rbp+B0h]
  int v143; // [rsp+1BCh] [rbp+B4h]
  int v144; // [rsp+1C0h] [rbp+B8h]
  int v145; // [rsp+1C4h] [rbp+BCh]
  int v146; // [rsp+1C8h] [rbp+C0h]
  int v147; // [rsp+1CCh] [rbp+C4h]
  int v148; // [rsp+1D0h] [rbp+C8h]
  int v149; // [rsp+1D4h] [rbp+CCh]
  int v150; // [rsp+1D8h] [rbp+D0h]
  int v151; // [rsp+1DCh] [rbp+D4h]
  __int64 v152; // [rsp+1E0h] [rbp+D8h]
  int v153; // [rsp+1E8h] [rbp+E0h]
  int v154; // [rsp+1ECh] [rbp+E4h]
  __int64 v155; // [rsp+1F0h] [rbp+E8h]
  int v156; // [rsp+1F8h] [rbp+F0h]
  int v157; // [rsp+1FCh] [rbp+F4h]
  int v158; // [rsp+200h] [rbp+F8h]
  int v159; // [rsp+204h] [rbp+FCh]
  int v160; // [rsp+208h] [rbp+100h]
  int v161; // [rsp+20Ch] [rbp+104h]
  int v162; // [rsp+210h] [rbp+108h]
  int v163; // [rsp+214h] [rbp+10Ch]
  int v164; // [rsp+218h] [rbp+110h]
  int v165; // [rsp+21Ch] [rbp+114h]
  int v166; // [rsp+220h] [rbp+118h]
  int v167; // [rsp+224h] [rbp+11Ch]
  int v168; // [rsp+228h] [rbp+120h]
  int v169; // [rsp+22Ch] [rbp+124h]
  int v170; // [rsp+230h] [rbp+128h]
  int v171; // [rsp+234h] [rbp+12Ch]
  int v172; // [rsp+238h] [rbp+130h]
  int v173; // [rsp+23Ch] [rbp+134h]
  int v174; // [rsp+240h] [rbp+138h]
  int v175; // [rsp+244h] [rbp+13Ch]
  int v176; // [rsp+248h] [rbp+140h]
  int v177; // [rsp+24Ch] [rbp+144h]
  int v178; // [rsp+250h] [rbp+148h]
  int v179; // [rsp+254h] [rbp+14Ch]
  int v180; // [rsp+258h] [rbp+150h]
  int v181; // [rsp+25Ch] [rbp+154h]
  int v182; // [rsp+260h] [rbp+158h]
  int v183; // [rsp+264h] [rbp+15Ch]
  int v184; // [rsp+268h] [rbp+160h]
  int v185; // [rsp+26Ch] [rbp+164h]
  __int64 v186; // [rsp+270h] [rbp+168h]
  int v187; // [rsp+278h] [rbp+170h] BYREF
  __int64 v188; // [rsp+280h] [rbp+178h]
  int v189; // [rsp+288h] [rbp+180h]
  int *v190; // [rsp+290h] [rbp+188h]
  int v191; // [rsp+298h] [rbp+190h]
  __int64 v192; // [rsp+2A0h] [rbp+198h]
  int v193; // [rsp+2A8h] [rbp+1A0h]
  int *v194; // [rsp+2B0h] [rbp+1A8h]
  int v195; // [rsp+2B8h] [rbp+1B0h]
  __int64 v196; // [rsp+2C0h] [rbp+1B8h]
  int v197; // [rsp+2C8h] [rbp+1C0h]
  int *v198; // [rsp+2D0h] [rbp+1C8h]
  int v199; // [rsp+2D8h] [rbp+1D0h]
  __int64 v200; // [rsp+2E0h] [rbp+1D8h]
  int v201; // [rsp+2E8h] [rbp+1E0h]
  int *v202; // [rsp+2F0h] [rbp+1E8h]
  int v203; // [rsp+2F8h] [rbp+1F0h] BYREF
  __int64 v204; // [rsp+300h] [rbp+1F8h]
  int v205; // [rsp+308h] [rbp+200h]
  int *v206; // [rsp+310h] [rbp+208h]
  int v207; // [rsp+318h] [rbp+210h]
  __int64 v208; // [rsp+320h] [rbp+218h]
  int v209; // [rsp+328h] [rbp+220h]
  int *v210; // [rsp+330h] [rbp+228h]
  int v211; // [rsp+338h] [rbp+230h]
  __int64 v212; // [rsp+340h] [rbp+238h]
  int v213; // [rsp+348h] [rbp+240h]
  int *v214; // [rsp+350h] [rbp+248h]
  int v215; // [rsp+358h] [rbp+250h]
  __int64 v216; // [rsp+360h] [rbp+258h]
  int v217; // [rsp+368h] [rbp+260h]
  int *v218; // [rsp+370h] [rbp+268h]
  int v219; // [rsp+378h] [rbp+270h]
  __int64 v220; // [rsp+380h] [rbp+278h]
  int v221; // [rsp+388h] [rbp+280h]
  __int64 v222; // [rsp+390h] [rbp+288h]
  int v223; // [rsp+398h] [rbp+290h]
  __int64 v224; // [rsp+3A0h] [rbp+298h]
  int v225; // [rsp+3A8h] [rbp+2A0h]
  __int64 v226; // [rsp+3B0h] [rbp+2A8h]
  int v227; // [rsp+3B8h] [rbp+2B0h]
  __int64 v228; // [rsp+3C0h] [rbp+2B8h]
  int v229; // [rsp+3C8h] [rbp+2C0h]
  int *v230; // [rsp+3D0h] [rbp+2C8h]
  int v231; // [rsp+3D8h] [rbp+2D0h]
  __int64 v232; // [rsp+3E0h] [rbp+2D8h]
  int v233; // [rsp+3E8h] [rbp+2E0h]
  int *v234; // [rsp+3F0h] [rbp+2E8h]
  int v235; // [rsp+3F8h] [rbp+2F0h]
  __int64 v236; // [rsp+400h] [rbp+2F8h]
  int v237; // [rsp+408h] [rbp+300h]
  __int64 v238; // [rsp+410h] [rbp+308h]
  int v239; // [rsp+418h] [rbp+310h]
  __int64 v240; // [rsp+420h] [rbp+318h]
  int v241; // [rsp+428h] [rbp+320h]
  int *v242; // [rsp+430h] [rbp+328h]
  int v243; // [rsp+438h] [rbp+330h]
  __int64 v244; // [rsp+440h] [rbp+338h]
  int v245; // [rsp+448h] [rbp+340h]
  int *v246; // [rsp+450h] [rbp+348h]
  wchar_t Dest[40]; // [rsp+458h] [rbp+350h] BYREF
  _BYTE v248[80]; // [rsp+4A8h] [rbp+3A0h] BYREF

  v88 = a1;
  v1 = a1;
  v91[15] = 4135;
  v2 = 0;
  v92 = 112LL;
  v82 = gulFontInformation;
  LogPixels = 96;
  v91[14] = 4;
  v93 = 4;
  v3 = 0;
  v87 = 0;
  v84 = gdwPUDFlags & 0x100000;
  v94 = 17;
  v86 = gdwPUDFlags & 0x10000;
  v107 = 3;
  v111 = 3;
  v131 = 13;
  v134 = 13;
  v136 = 13;
  v95 = 100LL;
  v96 = 4;
  v97 = 77;
  v98 = 199;
  v99 = 4;
  v100 = 4;
  v101 = 76;
  v102 = 198;
  v103 = 4;
  v104 = 4;
  v105 = 105;
  v106 = 14;
  v108 = 4;
  v109 = 109;
  v110 = 15;
  v112 = 4;
  v113 = 131;
  v114 = 18;
  v115 = 1;
  v116 = 4;
  v117 = 141;
  v118 = 624;
  v119 = 1;
  v120 = 4;
  v121 = 145;
  v122 = 625;
  v123 = 1;
  v124 = 4;
  v125 = 143;
  v126 = 626;
  v127 = 1;
  v128 = 4;
  v129 = 159;
  v130 = 628LL;
  v132 = 23;
  v133 = 106LL;
  v135 = 11;
  v137 = 15;
  v138 = 12;
  v139 = 32;
  v140 = 6;
  v141 = 500;
  v142 = 12;
  v143 = 29;
  v166 = 17;
  v147 = 30;
  v167 = 30;
  v171 = 20;
  v174 = 20;
  v179 = 50;
  v183 = 50;
  v206 = &gdtMNDropDown;
  v210 = &v84;
  v214 = &gnFastAltTabRows;
  v218 = &gnFastAltTabColumns;
  v175 = 30;
  v151 = 96;
  v155 = 96LL;
  v169 = 133;
  v212 = 133LL;
  v4 = 3LL;
  v144 = 97;
  v145 = 4;
  v222 = gpsi + 4012LL;
  v226 = gpsi + 4016LL;
  v146 = 12;
  v148 = 98;
  v149 = 4;
  v150 = 12;
  v152 = 7LL;
  v153 = 3;
  v154 = 28;
  v156 = 35;
  v157 = 111;
  v158 = 236;
  v159 = 1;
  v160 = 12;
  v161 = 127;
  v162 = 16;
  v163 = 1;
  v164 = 12;
  v165 = 129;
  v168 = 12;
  v170 = 19;
  v172 = 12;
  v173 = 135;
  v176 = 12;
  v177 = 137;
  v178 = 21;
  v180 = 12;
  v181 = 139;
  v182 = 22;
  v184 = 4;
  v185 = 169;
  v186 = 205LL;
  v203 = 4;
  v204 = 94LL;
  v205 = 400;
  v207 = 4;
  v208 = 107LL;
  v209 = 2;
  v211 = 4;
  v213 = 3;
  v215 = 4;
  v216 = 134LL;
  v217 = 7;
  v219 = 4;
  v220 = 159LL;
  v221 = 3;
  v223 = 4;
  v224 = 160LL;
  v225 = 3;
  v227 = 4;
  v231 = 4;
  v230 = &v82;
  v234 = &v87;
  v238 = gdwHungAppTimeout;
  v242 = &gdwWaitToKillTimeout;
  v246 = &v86;
  v190 = &gMouseThresh1;
  v235 = 4;
  v239 = 4;
  v5 = a1 & 1;
  v194 = &gMouseThresh2;
  v245 = 1;
  v197 = 1;
  v187 = 12;
  v6 = a1 & 4;
  v191 = 12;
  v195 = 12;
  v196 = 12LL;
  v198 = &gMouseSpeed;
  v237 = 5000;
  v241 = 5000;
  v202 = &gfEnableHexNumpad;
  v228 = 200LL;
  v229 = 0;
  v232 = 618LL;
  v233 = 0;
  v236 = 621LL;
  v240 = 622LL;
  v243 = 23;
  v244 = 149LL;
  v188 = 10LL;
  v189 = 6;
  v192 = 11LL;
  v193 = 10;
  v199 = 35;
  v200 = 237LL;
  v201 = 0;
  v79 = v5;
  v83 = (unsigned __int8)v6;
  v7 = a1 & 2;
  if ( (a1 & 2) == 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    UserSetLastError(5);
    return 0LL;
  }
  ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName(v90, v4, v1);
  if ( !ProfileUserName )
    return 0LL;
  v10 = grpWinStaList;
  if ( grpWinStaList )
  {
    v11 = *(_QWORD *)(grpWinStaList + 176LL);
    if ( v11 )
      Win32FreePool(v11);
    v12 = Win32AllocPoolWithQuota(ProfileUserName->Length, 1852863317LL);
    *(_QWORD *)(grpWinStaList + 176LL) = v12;
    if ( v12 )
    {
      Length = ProfileUserName->Length;
      *(_WORD *)(grpWinStaList + 168LL) = 0;
      *(_WORD *)(grpWinStaList + 170LL) = Length;
      RtlCopyUnicodeString((PUNICODE_STRING)(grpWinStaList + 168LL), ProfileUserName);
    }
    v10 = 0;
    if ( v5 )
      WakeRIT(0x100u);
  }
  if ( v7 && !v6 )
  {
    v3 = CheckEasPolicyChange();
    if ( !(unsigned int)CheckDesktopPolicyChange(ProfileUserName) && !v3 )
    {
      UserSetLastError(0);
      FreeProfileUserName(ProfileUserName, v90);
      return 0LL;
    }
    v2 = 16;
  }
  if ( v5 )
    gdwPolicyFlags |= 2u;
  if ( v6 )
    v2 |= 8u;
  v78 = 300;
  FastGetProfileValue(ProfileUserName, 4LL, 607LL, &v78, &gnllHooksTimeout, 4, v2);
  if ( v5 && gDpiAdjustedForLoggedOnUser == v10 )
  {
    FastGetProfileDwordW(ProfileUserName, 4LL, L"LogPixels", 0LL, &LogPixels, v2);
    v85 = v10;
    v14 = DrvInitializeDxgkrnlDpiCache(&v85);
    v15 = PerformLegacyDpiUpgrade(ProfileUserName, LogPixels);
    if ( v14 < 0 )
    {
      v10 = 0;
    }
    else
    {
      v10 = 0;
      if ( !v85 && gdmLogPixelsOfPrimary == gdmLogPixels && !v15 && !LogPixels )
        goto LABEL_34;
    }
    GreReinitializeDpiSetting();
    LODWORD(v76) = 2447;
    if ( (int)xxxUserSetDisplayConfig(0LL, 0LL, 0LL, 0LL, v76, 4, 0, 0LL, 0, 0LL) >= 0 )
    {
      LogPixels = (unsigned __int16)DrvGetLogPixels();
      UserReinitializeStockFonts(LogPixels);
      gDpiAdjustedForLoggedOnUser = 1;
    }
  }
LABEL_34:
  LoadCPUserPreferences(ProfileUserName, v2);
  if ( !v7 )
  {
    xxxODI_ColorInit(ProfileUserName);
    LW_LoadResources(ProfileUserName);
    xxxSetWindowNCMetrics((__int64)ProfileUserName, 0LL, 1, -1);
    SetMinMetrics((__int64)ProfileUserName, 0LL);
    SetIconMetrics(ProfileUserName, 0LL);
    GetKbdLangSwitch(ProfileUserName, v16, v17);
    ZwSetDefaultLocale(1u, 0);
    ZwSetDefaultUILanguage(0);
    ZwQueryDefaultUILanguage((LANGID *)(gpsi + 7300LL));
    xxxLoadSomeStrings();
    v18 = (_QWORD *)grpWinStaList;
    if ( grpWinStaList )
    {
      while ( 1 )
      {
        v18 = (_QWORD *)v18[2];
        if ( !v18 )
          break;
        v19 = v18[6];
        if ( v19 )
        {
          *(_DWORD *)(v19 + 40) &= ~0x80u;
          if ( UnlockDesktopMenu((__int64)(v18 + 6)) )
            DestroyMenu(v19);
        }
        v20 = v18[7];
        if ( v20 )
        {
          *(_DWORD *)(v20 + 40) &= ~0x80u;
          if ( UnlockDesktopMenu((__int64)(v18 + 7)) )
            DestroyMenu(v20);
        }
      }
    }
    xxxUpdateSystemCursorsFromRegistry(ProfileUserName);
    xxxUpdateSystemIconsFromRegistry(ProfileUserName);
    v21 = &v133;
    v22 = 0;
    do
    {
      if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, *((unsigned int *)v21 - 2), *(unsigned int *)v21) )
        xxxSystemParametersInfo(*((unsigned int *)v21 - 1), v78, 0LL, 0);
      ++v22;
      v21 += 2;
    }
    while ( (unsigned __int64)v22 < 0xF );
    FastGetProfileIntsW(ProfileUserName, &v187, 4LL);
    v5 = v79;
    v10 = 0;
  }
  xxxSystemParametersInfo(21LL, 0xFFFFFFFF, 0LL, 0);
  if ( v5 )
    FastGetProfileIntFromID(ProfileUserName, 35LL, 236LL);
  v23 = v10;
  v24 = &v92;
  do
  {
    if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, *((unsigned int *)v24 - 2), *(unsigned int *)v24) )
      xxxSystemParametersInfo(*((unsigned int *)v24 - 1), v78, 0LL, 0);
    ++v23;
    v24 += 2;
  }
  while ( (unsigned __int64)v23 < 0xB );
  v28 = v2;
  if ( v3 )
    v28 = 2;
  EasTimeout = GetEasTimeout(v26, v25, v27);
  LODWORD(v77) = v28;
  if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, 4LL, 99LL) && (!EasTimeout || v81 < EasTimeout) )
    EasTimeout = v81;
  xxxSystemParametersInfo(15LL, EasTimeout, 0LL, 0);
  FastGetProfileIntsW(ProfileUserName, &v203, 11LL);
  if ( gnFastAltTabColumns < 2 )
    gnFastAltTabColumns = 7;
  if ( gnFastAltTabRows < 1 )
    gnFastAltTabRows = 3;
  if ( v87 )
    *gpsi |= 0x200u;
  else
    *gpsi &= ~0x200u;
  if ( v86 )
    gdwPUDFlags |= 0x10000u;
  else
    gdwPUDFlags &= ~0x10000u;
  if ( v84 == 2 )
  {
    if ( (unsigned int)GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 24LL), 119LL) )
      gdwPUDFlags &= ~0x100000u;
    else
      gdwPUDFlags |= 0x100000u;
    v30 = v79;
    if ( v79 )
    {
      RtlStringCchPrintfW(Dest, 40LL, L"%d", (gdwPUDFlags >> 20) & 1, &v81, v77);
      RtlLoadStringOrError(107LL, v248, 40LL, 0LL);
      FastWriteProfileStringW(ProfileUserName, 4LL, v248, Dest);
    }
  }
  else
  {
    v30 = v79;
    if ( v84 )
      gdwPUDFlags |= 0x100000u;
    else
      gdwPUDFlags &= ~0x100000u;
  }
  v78 = *(_DWORD *)(gpsi + 4000LL);
  if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, 4LL, 4LL) )
    SetCaretBlinkTime(v78);
  if ( !v7 )
  {
    FastGetProfileIntFromID(ProfileUserName, 12LL, 608LL);
    v33 = (unsigned int)gMouseSensitivity;
    if ( (unsigned int)(gMouseSensitivity - 1) > 0x13 )
    {
      v33 = 10LL;
      gMouseSensitivity = 10;
    }
    gMouseSensitivityFactor = CalculateMouseSensitivity(v33, v31, v32);
    ReadDefaultAccelerationCurves(ProfileUserName);
    ResetMouseAccelerationCurves(v35, v34);
    FastGetProfileIntFromID(ProfileUserName, 12LL, 613LL);
    SetMouseTrails(v78, v36, v37);
    FastGetProfileIntW(ProfileUserName, 7LL, L"TTOnly");
    GreSetFontEnumeration(v78);
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x24uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x4000) == 0 )
      {
        goto LABEL_99;
      }
    }
    else if ( IsDPIDWMSysMet(v38)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x4000) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL) & 1 )
    {
      goto LABEL_99;
    }
    if ( IsDPIDWMSysMet(0x24uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x2000) != 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) )
    {
      W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    }
LABEL_99:
    FastGetProfileIntFromID(ProfileUserName, 12LL, 91LL);
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x25uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x4000) != 0 )
      {
        goto LABEL_102;
      }
    }
    else if ( !IsDPIDWMSysMet(v44)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v49 = 0)
             : (v49 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v49) )
    {
LABEL_102:
      if ( IsDPIDWMSysMet(0x25uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x2000) != 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) )
      {
        W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      }
    }
    FastGetProfileIntFromID(ProfileUserName, 12LL, 92LL);
    FastGetProfileIntFromID(ProfileUserName, 12LL, 93LL);
    v50 = gdtMouseHover;
    if ( (unsigned int)gdtMouseHover < 0xA )
    {
      v50 = 10;
      gdtMouseHover = 10;
    }
    if ( v50 > 0x7FFFFFFF )
      gdtMouseHover = 0x7FFFFFFF;
    UpdatePerUserKeyboardIndicators(ProfileUserName);
    InitScancodeMap();
    FastGetProfileDwordW(ProfileUserName, 24LL, L"Attributes", 0LL, &gdwKeyboardAttributes, 0);
    gdwKeyboardAttributes = ((unsigned int)gdwKeyboardAttributes >> 15) & 2;
    xxxUpdatePerUserAccessPackSettings(ProfileUserName);
  }
  v51 = (void *)OpenCacheKeyEx(0LL, 22LL, 131097LL);
  if ( !v51 )
    goto LABEL_139;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x3FuLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v53) + 776) & 0x4000) != 0 )
    {
      goto LABEL_122;
    }
  }
  else if ( !IsDPIDWMSysMet(v52)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v57) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           ? (v58 = 0)
           : (v58 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
             !v58) )
  {
LABEL_122:
    if ( IsDPIDWMSysMet(0x3FuLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v55 = 0)
        : (v55 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v55) )
    {
      v59 = (_DWORD *)(gpsi + 2908LL);
    }
    else
    {
      v59 = (_DWORD *)(gpsi + 2132LL);
    }
    goto LABEL_138;
  }
  v59 = (_DWORD *)(gpsi + 2520LL);
LABEL_138:
  *v59 = 1;
  ZwClose(v51);
LABEL_139:
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x3FuLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x4000) != 0 )
    {
      goto LABEL_142;
    }
  }
  else if ( !IsDPIDWMSysMet(v60)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v64) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           ? (v66 = 0)
           : (v66 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
             !v66) )
  {
LABEL_142:
    if ( IsDPIDWMSysMet(0x3FuLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v62) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v63 = 0)
        : (v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v63) )
    {
      v67 = (_DWORD *)(gpsi + 2908LL);
    }
    else
    {
      v67 = (_DWORD *)(gpsi + 2132LL);
    }
    goto LABEL_158;
  }
  v67 = (_DWORD *)(gpsi + 2520LL);
LABEL_158:
  *v67 |= 2u;
  GreSetFontEnumeration(4LL);
  GreSetFontEnumeration(32LL);
  if ( (v82 & 2) != 0 )
    GreSetFontEnumeration(v82 | 4u);
  if ( (*(_DWORD *)UPDWORDPointer(8202LL) & 2) != 0 )
    GreSetFontEnumeration(v82 | 0x30u);
  v68 = *(_DWORD *)UPDWORDPointer(8204LL);
  if ( !v68 )
    v68 = 1200;
  gulGamma = v68;
  v69 = *(_BYTE *)UPDWORDPointer(8210LL);
  v70 = &unk_1C02E0390;
  if ( (v69 & 1) == 0 )
    v70 = &unk_1C02EAF90;
  off_1C031B238 = v70;
  FreeProfileUserName(ProfileUserName, v90);
  if ( v88 == 2 )
    xxxUserResetDisplayDevice();
  if ( (unsigned int)FastGetProfileDwordW(0LL, 49LL, L"RestrictDebuggerForeground", 0LL, &v89, 0) && v89 )
    gfDebugForegroundIgnoreDebugPort = 1;
  if ( v30 )
  {
    memset(v91, 0, 0x38uLL);
    if ( (unsigned int)ReadPointerDeviceSettings(146, (__int64)v91, v71, v72) )
    {
      if ( !v91[7] )
      {
        gbTouchInputAllowed = 0;
        RawInputManagerObject::bTouchInputAllowed = 0;
      }
    }
  }
  if ( gbUsingDefaultSectionSize == 1 )
  {
    gbUsingDefaultSectionSize = 0;
    UserLogError(3221226518LL);
    UserSessionSwitchLeaveCrit(v74, v73);
    ExRaiseHardError(3221226518LL, 0LL, 0LL, 0LL, 7, &v83);
    EnterCrit(1LL);
  }
  xxxDwmControl(2LL, 0LL);
  if ( v30 )
  {
    TraceLoggingAutoRotationStateEvent(v75);
    *gpsi |= 0x400u;
  }
  return 1LL;
}
