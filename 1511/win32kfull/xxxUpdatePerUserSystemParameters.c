/*
 * XREFs of xxxUpdatePerUserSystemParameters @ 0x1C012420C
 * Callers:
 *     NtUserUpdatePerUserSystemParameters @ 0x1C0113690 (NtUserUpdatePerUserSystemParameters.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     _DestroyMenu @ 0x1C006E710 (_DestroyMenu.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     SetMouseTrails @ 0x1C0096C64 (SetMouseTrails.c)
 *     UpdatePerUserKeyboardIndicators @ 0x1C009D588 (UpdatePerUserKeyboardIndicators.c)
 *     WakeRIT @ 0x1C00A0644 (WakeRIT.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00CC8DC (xxxUpdateSystemIconsFromRegistry.c)
 *     SetIconMetrics @ 0x1C00D0E24 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00D7844 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C00D7C00 (xxxSetWindowNCMetrics.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C00F4860 (xxxUpdatePerUserAccessPackSettings.c)
 *     ResetMouseAccelerationCurves @ 0x1C00FD5CC (ResetMouseAccelerationCurves.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C0106E84 (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     GetEasTimeout @ 0x1C010B178 (GetEasTimeout.c)
 *     _SetCaretBlinkTime @ 0x1C010C670 (_SetCaretBlinkTime.c)
 *     GreSetFontEnumeration @ 0x1C010DA70 (GreSetFontEnumeration.c)
 *     ?LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z @ 0x1C010DB64 (-LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z.c)
 *     ReadDefaultAccelerationCurves @ 0x1C010FF1C (ReadDefaultAccelerationCurves.c)
 *     ?InitScancodeMap@@YAXXZ @ 0x1C0110D68 (-InitScancodeMap@@YAXXZ.c)
 *     GetKbdLangSwitch @ 0x1C01126D8 (GetKbdLangSwitch.c)
 *     CalculateMouseSensitivity @ 0x1C0112A44 (CalculateMouseSensitivity.c)
 *     ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C0112C94 (-PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x1C01137CC (-TraceLoggingAutoRotationStateEvent@@YAXXZ.c)
 *     UnlockDesktopMenu @ 0x1C0113BF8 (UnlockDesktopMenu.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C011FF84 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0123214 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     xxxUpdateSystemCursorsFromRegistry @ 0x1C01240B4 (xxxUpdateSystemCursorsFromRegistry.c)
 *     ReadPointerDeviceSettings @ 0x1C0125F9C (ReadPointerDeviceSettings.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 *     xxxUserResetDisplayDevice @ 0x1C014F2F0 (xxxUserResetDisplayDevice.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?UserReinitializeStockFonts@@YAXK@Z @ 0x1C01D35E0 (-UserReinitializeStockFonts@@YAXK@Z.c)
 *     CheckEasPolicyChange @ 0x1C01D3770 (CheckEasPolicyChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxUpdatePerUserSystemParameters(int a1)
{
  int v1; // r14d
  int v2; // r15d
  int v3; // esi
  int v4; // r13d
  int v5; // r12d
  struct _UNICODE_STRING *ProfileUserName; // rdi
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  USHORT Length; // ax
  int v12; // ebx
  int v13; // eax
  _QWORD *v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 *v17; // rbx
  int v18; // esi
  int v19; // esi
  __int64 *v20; // rbx
  int v21; // ebx
  __int64 EasTimeout; // rsi
  int ProfileIntFromID; // eax
  int v24; // r13d
  int v25; // esi
  int v26; // eax
  int v27; // ecx
  unsigned __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // ecx
  unsigned int *v35; // rcx
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // ecx
  unsigned int *v43; // rcx
  unsigned int v44; // eax
  void *v45; // rbx
  unsigned __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // ecx
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // ecx
  _DWORD *v53; // rcx
  unsigned __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  int v57; // ecx
  __int64 v58; // rcx
  __int64 v59; // rcx
  int v60; // ecx
  _DWORD *v61; // rcx
  unsigned int v62; // ecx
  char v63; // cl
  void *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  const struct _TlgProvider_t *v67; // rcx
  unsigned int v68; // [rsp+58h] [rbp-B0h] BYREF
  int v69; // [rsp+5Ch] [rbp-ACh]
  unsigned int LogPixels; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v71; // [rsp+64h] [rbp-A4h] BYREF
  int v72; // [rsp+68h] [rbp-A0h] BYREF
  int v73; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v74; // [rsp+70h] [rbp-98h] BYREF
  int v75; // [rsp+74h] [rbp-94h] BYREF
  int v76; // [rsp+78h] [rbp-90h] BYREF
  int v77; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v78; // [rsp+80h] [rbp-88h]
  int v79; // [rsp+84h] [rbp-84h] BYREF
  _BYTE v80[24]; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v81[16]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v82; // [rsp+E0h] [rbp-28h] BYREF
  int v83; // [rsp+E8h] [rbp-20h]
  int v84; // [rsp+ECh] [rbp-1Ch]
  __int64 v85; // [rsp+F0h] [rbp-18h]
  int v86; // [rsp+F8h] [rbp-10h]
  int v87; // [rsp+FCh] [rbp-Ch]
  int v88; // [rsp+100h] [rbp-8h]
  int v89; // [rsp+104h] [rbp-4h]
  int v90; // [rsp+108h] [rbp+0h]
  int v91; // [rsp+10Ch] [rbp+4h]
  int v92; // [rsp+110h] [rbp+8h]
  int v93; // [rsp+114h] [rbp+Ch]
  int v94; // [rsp+118h] [rbp+10h]
  int v95; // [rsp+11Ch] [rbp+14h]
  int v96; // [rsp+120h] [rbp+18h]
  int v97; // [rsp+124h] [rbp+1Ch]
  int v98; // [rsp+128h] [rbp+20h]
  int v99; // [rsp+12Ch] [rbp+24h]
  int v100; // [rsp+130h] [rbp+28h]
  int v101; // [rsp+134h] [rbp+2Ch]
  int v102; // [rsp+138h] [rbp+30h]
  int v103; // [rsp+13Ch] [rbp+34h]
  int v104; // [rsp+140h] [rbp+38h]
  int v105; // [rsp+144h] [rbp+3Ch]
  int v106; // [rsp+148h] [rbp+40h]
  int v107; // [rsp+14Ch] [rbp+44h]
  int v108; // [rsp+150h] [rbp+48h]
  int v109; // [rsp+154h] [rbp+4Ch]
  int v110; // [rsp+158h] [rbp+50h]
  int v111; // [rsp+15Ch] [rbp+54h]
  int v112; // [rsp+160h] [rbp+58h]
  int v113; // [rsp+164h] [rbp+5Ch]
  int v114; // [rsp+168h] [rbp+60h]
  int v115; // [rsp+16Ch] [rbp+64h]
  int v116; // [rsp+170h] [rbp+68h]
  int v117; // [rsp+174h] [rbp+6Ch]
  int v118; // [rsp+178h] [rbp+70h]
  int v119; // [rsp+17Ch] [rbp+74h]
  __int64 v120; // [rsp+180h] [rbp+78h]
  int v121; // [rsp+188h] [rbp+80h]
  int v122; // [rsp+18Ch] [rbp+84h]
  __int64 v123; // [rsp+190h] [rbp+88h] BYREF
  int v124; // [rsp+198h] [rbp+90h]
  int v125; // [rsp+19Ch] [rbp+94h]
  int v126; // [rsp+1A0h] [rbp+98h]
  int v127; // [rsp+1A4h] [rbp+9Ch]
  int v128; // [rsp+1A8h] [rbp+A0h]
  int v129; // [rsp+1ACh] [rbp+A4h]
  int v130; // [rsp+1B0h] [rbp+A8h]
  int v131; // [rsp+1B4h] [rbp+ACh]
  int v132; // [rsp+1B8h] [rbp+B0h]
  int v133; // [rsp+1BCh] [rbp+B4h]
  int v134; // [rsp+1C0h] [rbp+B8h]
  int v135; // [rsp+1C4h] [rbp+BCh]
  int v136; // [rsp+1C8h] [rbp+C0h]
  int v137; // [rsp+1CCh] [rbp+C4h]
  int v138; // [rsp+1D0h] [rbp+C8h]
  int v139; // [rsp+1D4h] [rbp+CCh]
  int v140; // [rsp+1D8h] [rbp+D0h]
  int v141; // [rsp+1DCh] [rbp+D4h]
  __int64 v142; // [rsp+1E0h] [rbp+D8h]
  int v143; // [rsp+1E8h] [rbp+E0h]
  int v144; // [rsp+1ECh] [rbp+E4h]
  __int64 v145; // [rsp+1F0h] [rbp+E8h]
  int v146; // [rsp+1F8h] [rbp+F0h]
  int v147; // [rsp+1FCh] [rbp+F4h]
  int v148; // [rsp+200h] [rbp+F8h]
  int v149; // [rsp+204h] [rbp+FCh]
  int v150; // [rsp+208h] [rbp+100h]
  int v151; // [rsp+20Ch] [rbp+104h]
  int v152; // [rsp+210h] [rbp+108h]
  int v153; // [rsp+214h] [rbp+10Ch]
  int v154; // [rsp+218h] [rbp+110h]
  int v155; // [rsp+21Ch] [rbp+114h]
  int v156; // [rsp+220h] [rbp+118h]
  int v157; // [rsp+224h] [rbp+11Ch]
  int v158; // [rsp+228h] [rbp+120h]
  int v159; // [rsp+22Ch] [rbp+124h]
  int v160; // [rsp+230h] [rbp+128h]
  int v161; // [rsp+234h] [rbp+12Ch]
  int v162; // [rsp+238h] [rbp+130h]
  int v163; // [rsp+23Ch] [rbp+134h]
  int v164; // [rsp+240h] [rbp+138h]
  int v165; // [rsp+244h] [rbp+13Ch]
  int v166; // [rsp+248h] [rbp+140h]
  int v167; // [rsp+24Ch] [rbp+144h]
  int v168; // [rsp+250h] [rbp+148h]
  int v169; // [rsp+254h] [rbp+14Ch]
  int v170; // [rsp+258h] [rbp+150h]
  int v171; // [rsp+25Ch] [rbp+154h]
  int v172; // [rsp+260h] [rbp+158h]
  int v173; // [rsp+264h] [rbp+15Ch]
  int v174; // [rsp+268h] [rbp+160h]
  int v175; // [rsp+26Ch] [rbp+164h]
  __int64 v176; // [rsp+270h] [rbp+168h]
  int v177; // [rsp+278h] [rbp+170h] BYREF
  __int64 v178; // [rsp+280h] [rbp+178h]
  int v179; // [rsp+288h] [rbp+180h]
  int *v180; // [rsp+290h] [rbp+188h]
  int v181; // [rsp+298h] [rbp+190h]
  __int64 v182; // [rsp+2A0h] [rbp+198h]
  int v183; // [rsp+2A8h] [rbp+1A0h]
  int *v184; // [rsp+2B0h] [rbp+1A8h]
  int v185; // [rsp+2B8h] [rbp+1B0h]
  __int64 v186; // [rsp+2C0h] [rbp+1B8h]
  int v187; // [rsp+2C8h] [rbp+1C0h]
  int *v188; // [rsp+2D0h] [rbp+1C8h]
  int v189; // [rsp+2D8h] [rbp+1D0h]
  __int64 v190; // [rsp+2E0h] [rbp+1D8h]
  int v191; // [rsp+2E8h] [rbp+1E0h]
  int *v192; // [rsp+2F0h] [rbp+1E8h]
  int v193; // [rsp+2F8h] [rbp+1F0h] BYREF
  __int64 v194; // [rsp+300h] [rbp+1F8h]
  int v195; // [rsp+308h] [rbp+200h]
  int *v196; // [rsp+310h] [rbp+208h]
  int v197; // [rsp+318h] [rbp+210h]
  __int64 v198; // [rsp+320h] [rbp+218h]
  int v199; // [rsp+328h] [rbp+220h]
  int *v200; // [rsp+330h] [rbp+228h]
  int v201; // [rsp+338h] [rbp+230h]
  __int64 v202; // [rsp+340h] [rbp+238h]
  int v203; // [rsp+348h] [rbp+240h]
  int *v204; // [rsp+350h] [rbp+248h]
  int v205; // [rsp+358h] [rbp+250h]
  __int64 v206; // [rsp+360h] [rbp+258h]
  int v207; // [rsp+368h] [rbp+260h]
  int *v208; // [rsp+370h] [rbp+268h]
  int v209; // [rsp+378h] [rbp+270h]
  __int64 v210; // [rsp+380h] [rbp+278h]
  int v211; // [rsp+388h] [rbp+280h]
  __int64 v212; // [rsp+390h] [rbp+288h]
  int v213; // [rsp+398h] [rbp+290h]
  __int64 v214; // [rsp+3A0h] [rbp+298h]
  int v215; // [rsp+3A8h] [rbp+2A0h]
  __int64 v216; // [rsp+3B0h] [rbp+2A8h]
  int v217; // [rsp+3B8h] [rbp+2B0h]
  __int64 v218; // [rsp+3C0h] [rbp+2B8h]
  int v219; // [rsp+3C8h] [rbp+2C0h]
  int *v220; // [rsp+3D0h] [rbp+2C8h]
  int v221; // [rsp+3D8h] [rbp+2D0h]
  __int64 v222; // [rsp+3E0h] [rbp+2D8h]
  int v223; // [rsp+3E8h] [rbp+2E0h]
  int *v224; // [rsp+3F0h] [rbp+2E8h]
  int v225; // [rsp+3F8h] [rbp+2F0h]
  __int64 v226; // [rsp+400h] [rbp+2F8h]
  int v227; // [rsp+408h] [rbp+300h]
  __int64 v228; // [rsp+410h] [rbp+308h]
  int v229; // [rsp+418h] [rbp+310h]
  __int64 v230; // [rsp+420h] [rbp+318h]
  int v231; // [rsp+428h] [rbp+320h]
  int *v232; // [rsp+430h] [rbp+328h]
  int v233; // [rsp+438h] [rbp+330h]
  __int64 v234; // [rsp+440h] [rbp+338h]
  int v235; // [rsp+448h] [rbp+340h]
  int *v236; // [rsp+450h] [rbp+348h]
  wchar_t Dest[40]; // [rsp+458h] [rbp+350h] BYREF
  _BYTE v238[80]; // [rsp+4A8h] [rbp+3A0h] BYREF

  v78 = a1;
  v81[15] = 4135;
  v1 = 0;
  v82 = 112LL;
  v72 = gulFontInformation;
  LogPixels = 96;
  v81[14] = 4;
  v83 = 4;
  v2 = 0;
  v77 = 0;
  v74 = gdwPUDFlags & 0x100000;
  v84 = 17;
  v76 = gdwPUDFlags & 0x10000;
  v97 = 3;
  v101 = 3;
  v121 = 13;
  v124 = 13;
  v126 = 13;
  v85 = 100LL;
  v86 = 4;
  v87 = 77;
  v88 = 199;
  v89 = 4;
  v90 = 4;
  v91 = 76;
  v92 = 198;
  v93 = 4;
  v94 = 4;
  v95 = 105;
  v96 = 14;
  v98 = 4;
  v99 = 109;
  v100 = 15;
  v102 = 4;
  v103 = 131;
  v104 = 18;
  v105 = 1;
  v106 = 4;
  v107 = 141;
  v108 = 624;
  v109 = 1;
  v110 = 4;
  v111 = 145;
  v112 = 625;
  v113 = 1;
  v114 = 4;
  v115 = 143;
  v116 = 626;
  v117 = 1;
  v118 = 4;
  v119 = 159;
  v120 = 628LL;
  v122 = 23;
  v123 = 106LL;
  v125 = 11;
  v127 = 15;
  v128 = 12;
  v129 = 32;
  v130 = 6;
  v131 = 500;
  v132 = 12;
  v133 = 29;
  v156 = 17;
  v137 = 30;
  v157 = 30;
  v161 = 20;
  v164 = 20;
  v169 = 50;
  v173 = 50;
  v196 = &gdtMNDropDown;
  v200 = &v74;
  v204 = &gnFastAltTabRows;
  v208 = &gnFastAltTabColumns;
  v165 = 30;
  v141 = 96;
  v145 = 96LL;
  v159 = 133;
  v202 = 133LL;
  v134 = 97;
  v135 = 4;
  v212 = gpsi + 4012LL;
  v216 = gpsi + 4016LL;
  v136 = 12;
  v138 = 98;
  v139 = 4;
  v140 = 12;
  v142 = 7LL;
  v143 = 3;
  v144 = 28;
  v146 = 35;
  v147 = 111;
  v148 = 236;
  v149 = 1;
  v150 = 12;
  v151 = 127;
  v152 = 16;
  v153 = 1;
  v154 = 12;
  v155 = 129;
  v158 = 12;
  v160 = 19;
  v162 = 12;
  v163 = 135;
  v166 = 12;
  v167 = 137;
  v168 = 21;
  v170 = 12;
  v171 = 139;
  v172 = 22;
  v174 = 4;
  v175 = 169;
  v176 = 205LL;
  v193 = 4;
  v194 = 94LL;
  v195 = 400;
  v197 = 4;
  v198 = 107LL;
  v199 = 2;
  v201 = 4;
  v203 = 3;
  v205 = 4;
  v206 = 134LL;
  v207 = 7;
  v209 = 4;
  v210 = 159LL;
  v211 = 3;
  v213 = 4;
  v214 = 160LL;
  v215 = 3;
  v217 = 4;
  v221 = 4;
  v220 = &v72;
  v224 = &v77;
  v228 = gdwHungAppTimeout;
  v232 = &gdwWaitToKillTimeout;
  v236 = &v76;
  v180 = &gMouseThresh1;
  v225 = 4;
  v229 = 4;
  v3 = a1 & 1;
  v184 = &gMouseThresh2;
  v235 = 1;
  v187 = 1;
  v177 = 12;
  v4 = a1 & 4;
  v181 = 12;
  v185 = 12;
  v186 = 12LL;
  v188 = &gMouseSpeed;
  v227 = 5000;
  v231 = 5000;
  v192 = &gfEnableHexNumpad;
  v218 = 200LL;
  v219 = 0;
  v222 = 618LL;
  v223 = 0;
  v226 = 621LL;
  v230 = 622LL;
  v233 = 23;
  v234 = 149LL;
  v178 = 10LL;
  v179 = 6;
  v182 = 11LL;
  v183 = 10;
  v189 = 35;
  v190 = 237LL;
  v191 = 0;
  v69 = v3;
  v73 = v4;
  v5 = a1 & 2;
  if ( (a1 & 2) == 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    UserSetLastError(5);
    return 0LL;
  }
  ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName(v80);
  if ( !ProfileUserName )
    return 0LL;
  v8 = grpWinStaList;
  if ( grpWinStaList )
  {
    v9 = *(_QWORD *)(grpWinStaList + 176LL);
    if ( v9 )
      Win32FreePool(v9);
    v10 = Win32AllocPoolWithQuota(ProfileUserName->Length, 1852863317LL);
    *(_QWORD *)(grpWinStaList + 176LL) = v10;
    if ( v10 )
    {
      Length = ProfileUserName->Length;
      *(_WORD *)(grpWinStaList + 168LL) = 0;
      *(_WORD *)(grpWinStaList + 170LL) = Length;
      RtlCopyUnicodeString((PUNICODE_STRING)(grpWinStaList + 168LL), ProfileUserName);
    }
    v8 = 0;
    if ( v3 )
      WakeRIT(0x100u);
  }
  if ( v5 && !v4 )
  {
    v2 = CheckEasPolicyChange();
    if ( !(unsigned int)CheckDesktopPolicyChange(ProfileUserName) && !v2 )
    {
      UserSetLastError(0);
      FreeProfileUserName(ProfileUserName, v80);
      return 0LL;
    }
    v1 = 16;
  }
  if ( v3 )
    gdwPolicyFlags |= 2u;
  if ( v4 )
    v1 |= 8u;
  v68 = 300;
  FastGetProfileValue(ProfileUserName, 4LL, 607LL, &v68, &gnllHooksTimeout, 4, v1);
  if ( v3 && gDpiAdjustedForLoggedOnUser == v8 )
  {
    FastGetProfileDwordW(ProfileUserName, 4LL, L"LogPixels", 0LL, &LogPixels, v1);
    v75 = v8;
    v12 = DrvInitializeDxgkrnlDpiCache(&v75);
    v13 = PerformLegacyDpiUpgrade(ProfileUserName, LogPixels);
    if ( v12 < 0 )
    {
      v8 = 0;
    }
    else
    {
      v8 = 0;
      if ( !v75 && gdmLogPixelsOfPrimary == gdmLogPixels && !v13 && !LogPixels )
        goto LABEL_34;
    }
    GreReinitializeDpiSetting();
    if ( (int)xxxUserSetDisplayConfig(0LL, 0LL, 0LL, 0LL, 2447, 4, 0, 0LL, 0, 0LL) >= 0 )
    {
      LogPixels = (unsigned __int16)DrvGetLogPixels();
      UserReinitializeStockFonts(LogPixels);
      gDpiAdjustedForLoggedOnUser = 1;
    }
  }
LABEL_34:
  LoadCPUserPreferences(ProfileUserName, v1);
  if ( !v5 )
  {
    xxxODI_ColorInit(ProfileUserName);
    LW_LoadResources(ProfileUserName);
    xxxSetWindowNCMetrics((__int64)ProfileUserName, 0LL, 1, -1);
    SetMinMetrics((__int64)ProfileUserName, 0LL);
    SetIconMetrics(ProfileUserName, 0LL);
    GetKbdLangSwitch((__int64)ProfileUserName);
    ZwSetDefaultLocale(1u, 0);
    ZwSetDefaultUILanguage(0);
    ZwQueryDefaultUILanguage((LANGID *)(gpsi + 7300LL));
    xxxLoadSomeStrings();
    v14 = (_QWORD *)grpWinStaList;
    if ( grpWinStaList )
    {
      while ( 1 )
      {
        v14 = (_QWORD *)v14[2];
        if ( !v14 )
          break;
        v15 = v14[6];
        if ( v15 )
        {
          *(_DWORD *)(v15 + 40) &= ~0x80u;
          if ( UnlockDesktopMenu((__int64)(v14 + 6)) )
            DestroyMenu((struct tagMENU *)v15);
        }
        v16 = v14[7];
        if ( v16 )
        {
          *(_DWORD *)(v16 + 40) &= ~0x80u;
          if ( UnlockDesktopMenu((__int64)(v14 + 7)) )
            DestroyMenu((struct tagMENU *)v16);
        }
      }
    }
    xxxUpdateSystemCursorsFromRegistry((__int64)ProfileUserName);
    xxxUpdateSystemIconsFromRegistry((__int64)ProfileUserName);
    v17 = &v123;
    v18 = 0;
    do
    {
      if ( (unsigned int)FastGetProfileIntFromID(
                           ProfileUserName,
                           *((unsigned int *)v17 - 2),
                           *(unsigned int *)v17,
                           *((unsigned int *)v17 + 1),
                           &v68,
                           0) )
        xxxSystemParametersInfo(*((unsigned int *)v17 - 1), v68, 0LL, 0x8000LL);
      ++v18;
      v17 += 2;
    }
    while ( (unsigned __int64)v18 < 0xF );
    FastGetProfileIntsW(ProfileUserName, &v177, 4LL);
    v3 = v69;
    v8 = 0;
  }
  xxxSystemParametersInfo(21LL, 0xFFFFFFFFLL, 0LL, 0LL);
  if ( v3 )
    FastGetProfileIntFromID(ProfileUserName, 35LL, 236LL, 1LL, &gfIMEShowStatus, v8);
  v19 = v8;
  v20 = &v82;
  do
  {
    if ( (unsigned int)FastGetProfileIntFromID(
                         ProfileUserName,
                         *((unsigned int *)v20 - 2),
                         *(unsigned int *)v20,
                         *((unsigned int *)v20 + 1),
                         &v68,
                         v1) )
      xxxSystemParametersInfo(*((unsigned int *)v20 - 1), v68, 0LL, 0x8000LL);
    ++v19;
    v20 += 2;
  }
  while ( (unsigned __int64)v19 < 0xB );
  v21 = v1;
  if ( v2 )
    v21 = 2;
  EasTimeout = (unsigned int)GetEasTimeout();
  ProfileIntFromID = FastGetProfileIntFromID(ProfileUserName, 4LL, 99LL, EasTimeout, &v71, v21);
  v24 = v73;
  if ( ProfileIntFromID && (!(_DWORD)EasTimeout || v71 < (unsigned int)EasTimeout) )
    LODWORD(EasTimeout) = v71;
  xxxSystemParametersInfo(15LL, (unsigned int)EasTimeout, 0LL, 0x8000LL);
  FastGetProfileIntsW(ProfileUserName, &v193, 11LL);
  if ( gnFastAltTabColumns < 2 )
    gnFastAltTabColumns = 7;
  if ( gnFastAltTabRows < 1 )
    gnFastAltTabRows = 3;
  if ( v77 )
    *gpsi |= 0x200u;
  else
    *gpsi &= ~0x200u;
  if ( v76 )
    gdwPUDFlags |= 0x10000u;
  else
    gdwPUDFlags &= ~0x10000u;
  if ( v74 == 2 )
  {
    if ( (unsigned int)GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 24LL), 119LL) )
      gdwPUDFlags &= ~0x100000u;
    else
      gdwPUDFlags |= 0x100000u;
    v25 = v69;
    if ( v69 )
    {
      RtlStringCchPrintfW(Dest, 40LL, L"%d", (gdwPUDFlags >> 20) & 1);
      RtlLoadStringOrError(107LL, v238, 40LL);
      FastWriteProfileStringW(ProfileUserName, 4LL, v238, Dest);
    }
  }
  else
  {
    v25 = v69;
    if ( v74 )
      gdwPUDFlags |= 0x100000u;
    else
      gdwPUDFlags &= ~0x100000u;
  }
  v68 = *(_DWORD *)(gpsi + 4000LL);
  v26 = v5;
  if ( v24 )
    v26 = v1;
  if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, 4LL, 4LL, 500LL, &v68, v26) )
    SetCaretBlinkTime(v68);
  if ( !v5 )
  {
    FastGetProfileIntFromID(ProfileUserName, 12LL, 608LL, 10LL, &gMouseSensitivity, 0);
    v27 = gMouseSensitivity;
    if ( (unsigned int)(gMouseSensitivity - 1) > 0x13 )
    {
      v27 = 10;
      gMouseSensitivity = 10;
    }
    gMouseSensitivityFactor = CalculateMouseSensitivity(v27);
    ReadDefaultAccelerationCurves((__int64)ProfileUserName);
    ResetMouseAccelerationCurves();
    FastGetProfileIntFromID(ProfileUserName, 12LL, 613LL, 0LL, &v68, 0);
    SetMouseTrails(v68);
    FastGetProfileIntW(ProfileUserName, 7LL, L"TTOnly", 0LL, &v68, 0);
    GreSetFontEnumeration(v68);
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x24uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x4000) != 0 )
      {
        goto LABEL_90;
      }
    }
    else if ( !IsDPIDWMSysMet(v28)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v34 = 0)
             : (v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v34) )
    {
LABEL_90:
      if ( IsDPIDWMSysMet(0x24uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v31 = 0)
          : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v31) )
      {
        v35 = (unsigned int *)(gpsi + 2800LL);
      }
      else
      {
        v35 = (unsigned int *)(gpsi + 2024LL);
      }
LABEL_106:
      FastGetProfileIntFromID(ProfileUserName, 12LL, 91LL, *v35, &gcxMouseHover, 0);
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x25uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x4000) != 0 )
        {
          goto LABEL_109;
        }
      }
      else if ( !IsDPIDWMSysMet(v36)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v42 = 0)
               : (v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v42) )
      {
LABEL_109:
        if ( IsDPIDWMSysMet(0x25uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v39 = 0)
            : (v39 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v39) )
        {
          v43 = (unsigned int *)(gpsi + 2804LL);
        }
        else
        {
          v43 = (unsigned int *)(gpsi + 2028LL);
        }
        goto LABEL_125;
      }
      v43 = (unsigned int *)(gpsi + 2416LL);
LABEL_125:
      FastGetProfileIntFromID(ProfileUserName, 12LL, 92LL, *v43, &gcyMouseHover, 0);
      FastGetProfileIntFromID(ProfileUserName, 12LL, 93LL, (unsigned int)gdtMNDropDown, &gdtMouseHover, 0);
      v44 = gdtMouseHover;
      if ( (unsigned int)gdtMouseHover < 0xA )
      {
        v44 = 10;
        gdtMouseHover = 10;
      }
      if ( v44 > 0x7FFFFFFF )
        gdtMouseHover = 0x7FFFFFFF;
      UpdatePerUserKeyboardIndicators((__int64)ProfileUserName);
      InitScancodeMap();
      FastGetProfileDwordW(ProfileUserName, 24LL, L"Attributes", 0LL, &gdwKeyboardAttributes, 0);
      gdwKeyboardAttributes = ((unsigned int)gdwKeyboardAttributes >> 15) & 2;
      xxxUpdatePerUserAccessPackSettings((__int64)ProfileUserName);
      goto LABEL_130;
    }
    v35 = (unsigned int *)(gpsi + 2412LL);
    goto LABEL_106;
  }
LABEL_130:
  v45 = (void *)OpenCacheKeyEx(0LL, 22LL, 131097LL);
  if ( !v45 )
    goto LABEL_151;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x3FuLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x4000) != 0 )
    {
      goto LABEL_134;
    }
  }
  else if ( !IsDPIDWMSysMet(v46)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v50) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           ? (v52 = 0)
           : (v52 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v52) )
  {
LABEL_134:
    if ( IsDPIDWMSysMet(0x3FuLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v49 = 0)
        : (v49 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v49) )
    {
      v53 = (_DWORD *)(gpsi + 2908LL);
    }
    else
    {
      v53 = (_DWORD *)(gpsi + 2132LL);
    }
    goto LABEL_150;
  }
  v53 = (_DWORD *)(gpsi + 2520LL);
LABEL_150:
  *v53 = 1;
  ZwClose(v45);
LABEL_151:
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x3FuLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x4000) != 0 )
    {
      goto LABEL_154;
    }
  }
  else if ( !IsDPIDWMSysMet(v54)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v59) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           ? (v60 = 0)
           : (v60 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v60) )
  {
LABEL_154:
    if ( IsDPIDWMSysMet(0x3FuLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v57 = 0)
        : (v57 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v57) )
    {
      v61 = (_DWORD *)(gpsi + 2908LL);
    }
    else
    {
      v61 = (_DWORD *)(gpsi + 2132LL);
    }
    goto LABEL_170;
  }
  v61 = (_DWORD *)(gpsi + 2520LL);
LABEL_170:
  *v61 |= 2u;
  GreSetFontEnumeration(4);
  GreSetFontEnumeration(32);
  if ( (v72 & 2) != 0 )
    GreSetFontEnumeration(v72 | 4);
  if ( (*(_DWORD *)UPDWORDPointer(8202LL) & 2) != 0 )
    GreSetFontEnumeration(v72 | 0x30);
  v62 = *(_DWORD *)UPDWORDPointer(8204LL);
  if ( !v62 )
    v62 = 1200;
  gulGamma = v62;
  v63 = *(_BYTE *)UPDWORDPointer(8210LL);
  v64 = &unk_1C02DFAE0;
  if ( (v63 & 1) == 0 )
    v64 = &unk_1C02E9F70;
  off_1C031B228 = v64;
  FreeProfileUserName(ProfileUserName, v80);
  if ( v78 == 2 )
    xxxUserResetDisplayDevice();
  if ( (unsigned int)FastGetProfileDwordW(0LL, 49LL, L"RestrictDebuggerForeground", 0LL, &v79, 0) && v79 )
    gfDebugForegroundIgnoreDebugPort = 1;
  if ( v25 )
  {
    memset(v81, 0, 0x38uLL);
    if ( (unsigned int)ReadPointerDeviceSettings(146LL, v81) )
    {
      if ( !v81[7] )
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
    UserSessionSwitchLeaveCrit(v66, v65);
    ExRaiseHardError(3221226518LL, 0LL, 0LL, 0LL, 7, &v73);
    EnterCrit(0LL, 1LL);
  }
  xxxDwmControl(1037LL, 0LL);
  if ( v25 )
  {
    TraceLoggingAutoRotationStateEvent(v67);
    *gpsi |= 0x400u;
  }
  return 1LL;
}
