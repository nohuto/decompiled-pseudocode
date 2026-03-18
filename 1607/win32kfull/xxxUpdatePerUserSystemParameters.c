/*
 * XREFs of xxxUpdatePerUserSystemParameters @ 0x1C009190C
 * Callers:
 *     NtUserUpdatePerUserSystemParameters @ 0x1C008E4D0 (NtUserUpdatePerUserSystemParameters.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     ReadPointerDeviceSettings @ 0x1C006A3E0 (ReadPointerDeviceSettings.c)
 *     _DestroyMenu @ 0x1C006AE40 (_DestroyMenu.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C008E200 (-PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C008E55C (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z @ 0x1C008E790 (-LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z.c)
 *     SetMinMetrics @ 0x1C008E908 (SetMinMetrics.c)
 *     GetKbdLangSwitch @ 0x1C008ECB0 (GetKbdLangSwitch.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C008EFCC (xxxUpdateSystemIconsFromRegistry.c)
 *     xxxUpdateSystemCursorsFromRegistry @ 0x1C008F1B8 (xxxUpdateSystemCursorsFromRegistry.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0090730 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     GetEasTimeout @ 0x1C0091344 (GetEasTimeout.c)
 *     CalculateMouseSensitivity @ 0x1C009147C (CalculateMouseSensitivity.c)
 *     ReadDefaultAccelerationCurves @ 0x1C00914A0 (ReadDefaultAccelerationCurves.c)
 *     ResetMouseAccelerationCurves @ 0x1C00915D0 (ResetMouseAccelerationCurves.c)
 *     GreSetFontEnumeration @ 0x1C009282C (GreSetFontEnumeration.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0092870 (xxxUpdatePerUserAccessPackSettings.c)
 *     UpdatePerUserKeyboardIndicators @ 0x1C0093338 (UpdatePerUserKeyboardIndicators.c)
 *     SetMouseTrails @ 0x1C0094A28 (SetMouseTrails.c)
 *     _SetCaretBlinkTime @ 0x1C0097B10 (_SetCaretBlinkTime.c)
 *     QueryAutoRotationState @ 0x1C0098B04 (QueryAutoRotationState.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     SetIconMetrics @ 0x1C00B9BDC (SetIconMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C00B9EA0 (xxxSetWindowNCMetrics.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00DAA3C (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     WakeRIT @ 0x1C011A044 (WakeRIT.c)
 *     ?InitScancodeMap@@YAXXZ @ 0x1C01315A0 (-InitScancodeMap@@YAXXZ.c)
 *     UnlockDesktopMenu @ 0x1C0134ED4 (UnlockDesktopMenu.c)
 *     xxxUserResetDisplayDevice @ 0x1C0154CD0 (xxxUserResetDisplayDevice.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?UserReinitializeStockFonts@@YAXK@Z @ 0x1C01CB8E0 (-UserReinitializeStockFonts@@YAXK@Z.c)
 *     CheckEasPolicyChange @ 0x1C01CBAD0 (CheckEasPolicyChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxUpdatePerUserSystemParameters(int a1, __int64 a2)
{
  int v3; // r14d
  int v4; // r15d
  int v5; // r13d
  int v6; // r12d
  __int64 v7; // rdx
  struct _UNICODE_STRING *ProfileUserName; // rdi
  __int64 v9; // r8
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  USHORT Length; // ax
  int v14; // ecx
  _QWORD *v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 *v18; // rbx
  int v19; // esi
  int v20; // esi
  __int64 *v21; // rbx
  int v22; // ebx
  unsigned int EasTimeout; // esi
  int ProfileIntFromID; // eax
  int v25; // r12d
  int v26; // ecx
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned int v51; // eax
  void *v52; // rbx
  __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  _DWORD *v65; // rcx
  __int64 v66; // rdx
  unsigned __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  _DWORD *v78; // rcx
  unsigned int v79; // ecx
  bool v80; // zf
  int *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // r8
  int v87; // ebx
  int v88; // eax
  unsigned __int16 *v89; // r8
  unsigned int v90; // r9d
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v98; // rdx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rdx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v124; // rdx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rdx
  __int64 v128; // r8
  __int64 v129; // r9
  int v130; // ecx
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rdx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v138; // rdx
  __int64 v139; // r8
  __int64 v140; // r9
  __int64 v141; // rdx
  __int64 v142; // r8
  __int64 v143; // r9
  int v144; // ecx
  __int64 v145; // rcx
  LPCGUID v146; // r8
  LPCGUID v147; // r9
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-D8h]
  unsigned int v149; // [rsp+60h] [rbp-A0h] BYREF
  char v150[4]; // [rsp+64h] [rbp-9Ch] BYREF
  int v151; // [rsp+68h] [rbp-98h] BYREF
  unsigned int LogPixels; // [rsp+6Ch] [rbp-94h] BYREF
  int AutoRotationState; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v154; // [rsp+74h] [rbp-8Ch] BYREF
  int v155; // [rsp+78h] [rbp-88h] BYREF
  int v156; // [rsp+7Ch] [rbp-84h] BYREF
  int v157; // [rsp+80h] [rbp-80h] BYREF
  int v158; // [rsp+84h] [rbp-7Ch] BYREF
  int v159; // [rsp+88h] [rbp-78h] BYREF
  int v160; // [rsp+8Ch] [rbp-74h]
  int v161; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v162[24]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v163[18]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v164; // [rsp+F8h] [rbp-8h] BYREF
  int v165; // [rsp+100h] [rbp+0h]
  int v166; // [rsp+104h] [rbp+4h]
  __int64 v167; // [rsp+108h] [rbp+8h]
  int v168; // [rsp+110h] [rbp+10h]
  int v169; // [rsp+114h] [rbp+14h]
  int v170; // [rsp+118h] [rbp+18h]
  int v171; // [rsp+11Ch] [rbp+1Ch]
  int v172; // [rsp+120h] [rbp+20h]
  int v173; // [rsp+124h] [rbp+24h]
  int v174; // [rsp+128h] [rbp+28h]
  int v175; // [rsp+12Ch] [rbp+2Ch]
  int v176; // [rsp+130h] [rbp+30h]
  int v177; // [rsp+134h] [rbp+34h]
  int v178; // [rsp+138h] [rbp+38h]
  int v179; // [rsp+13Ch] [rbp+3Ch]
  int v180; // [rsp+140h] [rbp+40h]
  int v181; // [rsp+144h] [rbp+44h]
  int v182; // [rsp+148h] [rbp+48h]
  int v183; // [rsp+14Ch] [rbp+4Ch]
  int v184; // [rsp+150h] [rbp+50h]
  int v185; // [rsp+154h] [rbp+54h]
  int v186; // [rsp+158h] [rbp+58h]
  int v187; // [rsp+15Ch] [rbp+5Ch]
  int v188; // [rsp+160h] [rbp+60h]
  int v189; // [rsp+164h] [rbp+64h]
  int v190; // [rsp+168h] [rbp+68h]
  int v191; // [rsp+16Ch] [rbp+6Ch]
  int v192; // [rsp+170h] [rbp+70h]
  int v193; // [rsp+174h] [rbp+74h]
  int v194; // [rsp+178h] [rbp+78h]
  int v195; // [rsp+17Ch] [rbp+7Ch]
  int v196; // [rsp+180h] [rbp+80h]
  int v197; // [rsp+184h] [rbp+84h]
  int v198; // [rsp+188h] [rbp+88h]
  int v199; // [rsp+18Ch] [rbp+8Ch]
  int v200; // [rsp+190h] [rbp+90h]
  int v201; // [rsp+194h] [rbp+94h]
  __int64 v202; // [rsp+198h] [rbp+98h]
  int v203; // [rsp+1A0h] [rbp+A0h]
  int v204; // [rsp+1A4h] [rbp+A4h]
  __int64 v205; // [rsp+1A8h] [rbp+A8h] BYREF
  int v206; // [rsp+1B0h] [rbp+B0h]
  int v207; // [rsp+1B4h] [rbp+B4h]
  int v208; // [rsp+1B8h] [rbp+B8h]
  int v209; // [rsp+1BCh] [rbp+BCh]
  int v210; // [rsp+1C0h] [rbp+C0h]
  int v211; // [rsp+1C4h] [rbp+C4h]
  int v212; // [rsp+1C8h] [rbp+C8h]
  int v213; // [rsp+1CCh] [rbp+CCh]
  int v214; // [rsp+1D0h] [rbp+D0h]
  int v215; // [rsp+1D4h] [rbp+D4h]
  int v216; // [rsp+1D8h] [rbp+D8h]
  int v217; // [rsp+1DCh] [rbp+DCh]
  int v218; // [rsp+1E0h] [rbp+E0h]
  int v219; // [rsp+1E4h] [rbp+E4h]
  int v220; // [rsp+1E8h] [rbp+E8h]
  int v221; // [rsp+1ECh] [rbp+ECh]
  int v222; // [rsp+1F0h] [rbp+F0h]
  int v223; // [rsp+1F4h] [rbp+F4h]
  __int64 v224; // [rsp+1F8h] [rbp+F8h]
  int v225; // [rsp+200h] [rbp+100h]
  int v226; // [rsp+204h] [rbp+104h]
  __int64 v227; // [rsp+208h] [rbp+108h]
  int v228; // [rsp+210h] [rbp+110h]
  int v229; // [rsp+214h] [rbp+114h]
  int v230; // [rsp+218h] [rbp+118h]
  int v231; // [rsp+21Ch] [rbp+11Ch]
  int v232; // [rsp+220h] [rbp+120h]
  int v233; // [rsp+224h] [rbp+124h]
  int v234; // [rsp+228h] [rbp+128h]
  int v235; // [rsp+22Ch] [rbp+12Ch]
  int v236; // [rsp+230h] [rbp+130h]
  int v237; // [rsp+234h] [rbp+134h]
  int v238; // [rsp+238h] [rbp+138h]
  int v239; // [rsp+23Ch] [rbp+13Ch]
  int v240; // [rsp+240h] [rbp+140h]
  int v241; // [rsp+244h] [rbp+144h]
  int v242; // [rsp+248h] [rbp+148h]
  int v243; // [rsp+24Ch] [rbp+14Ch]
  int v244; // [rsp+250h] [rbp+150h]
  int v245; // [rsp+254h] [rbp+154h]
  int v246; // [rsp+258h] [rbp+158h]
  int v247; // [rsp+25Ch] [rbp+15Ch]
  int v248; // [rsp+260h] [rbp+160h]
  int v249; // [rsp+264h] [rbp+164h]
  int v250; // [rsp+268h] [rbp+168h]
  int v251; // [rsp+26Ch] [rbp+16Ch]
  int v252; // [rsp+270h] [rbp+170h]
  int v253; // [rsp+274h] [rbp+174h]
  int v254; // [rsp+278h] [rbp+178h]
  int v255; // [rsp+27Ch] [rbp+17Ch]
  int v256; // [rsp+280h] [rbp+180h]
  int v257; // [rsp+284h] [rbp+184h]
  __int64 v258; // [rsp+288h] [rbp+188h]
  int v259; // [rsp+290h] [rbp+190h] BYREF
  __int64 v260; // [rsp+298h] [rbp+198h]
  int v261; // [rsp+2A0h] [rbp+1A0h]
  int *v262; // [rsp+2A8h] [rbp+1A8h]
  int v263; // [rsp+2B0h] [rbp+1B0h]
  __int64 v264; // [rsp+2B8h] [rbp+1B8h]
  int v265; // [rsp+2C0h] [rbp+1C0h]
  int *v266; // [rsp+2C8h] [rbp+1C8h]
  int v267; // [rsp+2D0h] [rbp+1D0h]
  __int64 v268; // [rsp+2D8h] [rbp+1D8h]
  int v269; // [rsp+2E0h] [rbp+1E0h]
  int *v270; // [rsp+2E8h] [rbp+1E8h]
  int v271; // [rsp+2F0h] [rbp+1F0h]
  __int64 v272; // [rsp+2F8h] [rbp+1F8h]
  int v273; // [rsp+300h] [rbp+200h]
  int *v274; // [rsp+308h] [rbp+208h]
  int v275; // [rsp+310h] [rbp+210h] BYREF
  __int64 v276; // [rsp+318h] [rbp+218h]
  int v277; // [rsp+320h] [rbp+220h]
  int *v278; // [rsp+328h] [rbp+228h]
  int v279; // [rsp+330h] [rbp+230h]
  __int64 v280; // [rsp+338h] [rbp+238h]
  int v281; // [rsp+340h] [rbp+240h]
  int *v282; // [rsp+348h] [rbp+248h]
  int v283; // [rsp+350h] [rbp+250h]
  __int64 v284; // [rsp+358h] [rbp+258h]
  int v285; // [rsp+360h] [rbp+260h]
  int *v286; // [rsp+368h] [rbp+268h]
  int v287; // [rsp+370h] [rbp+270h]
  __int64 v288; // [rsp+378h] [rbp+278h]
  int v289; // [rsp+380h] [rbp+280h]
  int *v290; // [rsp+388h] [rbp+288h]
  int v291; // [rsp+390h] [rbp+290h]
  __int64 v292; // [rsp+398h] [rbp+298h]
  int v293; // [rsp+3A0h] [rbp+2A0h]
  __int64 v294; // [rsp+3A8h] [rbp+2A8h]
  int v295; // [rsp+3B0h] [rbp+2B0h]
  __int64 v296; // [rsp+3B8h] [rbp+2B8h]
  int v297; // [rsp+3C0h] [rbp+2C0h]
  __int64 v298; // [rsp+3C8h] [rbp+2C8h]
  int v299; // [rsp+3D0h] [rbp+2D0h]
  __int64 v300; // [rsp+3D8h] [rbp+2D8h]
  int v301; // [rsp+3E0h] [rbp+2E0h]
  int *v302; // [rsp+3E8h] [rbp+2E8h]
  int v303; // [rsp+3F0h] [rbp+2F0h]
  __int64 v304; // [rsp+3F8h] [rbp+2F8h]
  int v305; // [rsp+400h] [rbp+300h]
  int *v306; // [rsp+408h] [rbp+308h]
  int v307; // [rsp+410h] [rbp+310h]
  __int64 v308; // [rsp+418h] [rbp+318h]
  int v309; // [rsp+420h] [rbp+320h]
  __int64 v310; // [rsp+428h] [rbp+328h]
  int v311; // [rsp+430h] [rbp+330h]
  __int64 v312; // [rsp+438h] [rbp+338h]
  int v313; // [rsp+440h] [rbp+340h]
  int *v314; // [rsp+448h] [rbp+348h]
  int v315; // [rsp+450h] [rbp+350h]
  __int64 v316; // [rsp+458h] [rbp+358h]
  int v317; // [rsp+460h] [rbp+360h]
  int *v318; // [rsp+468h] [rbp+368h]
  EVENT_DATA_DESCRIPTOR v319; // [rsp+470h] [rbp+370h] BYREF
  int *v320; // [rsp+490h] [rbp+390h]
  __int64 v321; // [rsp+498h] [rbp+398h]
  int *p_AutoRotationState; // [rsp+4A0h] [rbp+3A0h]
  __int64 v323; // [rsp+4A8h] [rbp+3A8h]
  wchar_t Dest[40]; // [rsp+4B0h] [rbp+3B0h] BYREF
  _BYTE v325[80]; // [rsp+500h] [rbp+400h] BYREF

  v160 = a1;
  v163[17] = 4135;
  v164 = 112LL;
  v155 = gulFontInformation;
  LogPixels = 96;
  v163[16] = 4;
  v3 = 0;
  v165 = 4;
  v4 = 0;
  v157 = 0;
  v159 = gdwPUDFlags & 0x100000;
  v166 = 17;
  v158 = gdwPUDFlags & 0x10000;
  v179 = 3;
  v183 = 3;
  v203 = 13;
  v206 = 13;
  v208 = 13;
  v210 = 12;
  v214 = 12;
  v167 = 100LL;
  v168 = 4;
  v169 = 77;
  v170 = 199;
  v171 = 4;
  v172 = 4;
  v173 = 76;
  v174 = 198;
  v175 = 4;
  v176 = 4;
  v177 = 105;
  v178 = 14;
  v180 = 4;
  v181 = 109;
  v182 = 15;
  v184 = 4;
  v185 = 131;
  v186 = 18;
  v187 = 1;
  v188 = 4;
  v189 = 141;
  v190 = 624;
  v191 = 1;
  v192 = 4;
  v193 = 145;
  v194 = 625;
  v195 = 1;
  v196 = 4;
  v197 = 143;
  v198 = 626;
  v199 = 1;
  v200 = 4;
  v201 = 159;
  v202 = 628LL;
  v204 = 23;
  v205 = 106LL;
  v207 = 11;
  v209 = 15;
  v211 = 32;
  v212 = 6;
  v213 = 500;
  v218 = 12;
  v222 = 12;
  v232 = 12;
  v236 = 12;
  v240 = 12;
  v243 = 20;
  v246 = 20;
  v251 = 50;
  v255 = 50;
  v278 = &gdtMNDropDown;
  v282 = &v159;
  v286 = &gnFastAltTabRows;
  v290 = &gnFastAltTabColumns;
  v238 = 17;
  v219 = 30;
  v239 = 30;
  v247 = 30;
  v223 = 96;
  v227 = 96LL;
  v241 = 133;
  v284 = 133LL;
  v294 = gpsi + 5404LL;
  v215 = 29;
  v216 = 97;
  v217 = 4;
  v220 = 98;
  v221 = 4;
  v224 = 7LL;
  v225 = 3;
  v226 = 28;
  v228 = 35;
  v229 = 111;
  v230 = 236;
  v231 = 1;
  v233 = 127;
  v234 = 16;
  v235 = 1;
  v237 = 129;
  v242 = 19;
  v244 = 12;
  v245 = 135;
  v248 = 12;
  v249 = 137;
  v250 = 21;
  v252 = 12;
  v253 = 139;
  v254 = 22;
  v256 = 4;
  v257 = 169;
  v258 = 205LL;
  v275 = 4;
  v276 = 94LL;
  v277 = 400;
  v279 = 4;
  v280 = 107LL;
  v281 = 2;
  v283 = 4;
  v285 = 3;
  v287 = 4;
  v288 = 134LL;
  v289 = 7;
  v291 = 4;
  v292 = 159LL;
  v293 = 3;
  v295 = 4;
  v296 = 160LL;
  v297 = 3;
  v298 = gpsi + 5408LL;
  v299 = 4;
  v303 = 4;
  v302 = &v155;
  v306 = &v157;
  v310 = gdwHungAppTimeout;
  v314 = &gdwWaitToKillTimeout;
  v318 = &v158;
  v262 = &gMouseThresh1;
  v266 = &gMouseThresh2;
  v270 = &gMouseSpeed;
  v274 = &gfEnableHexNumpad;
  v307 = 4;
  v311 = 4;
  v317 = 1;
  v5 = a1 & 1;
  v269 = 1;
  v6 = a1 & 2;
  v309 = 5000;
  v313 = 5000;
  v300 = 200LL;
  v301 = 0;
  v304 = 618LL;
  v305 = 0;
  v308 = 621LL;
  v312 = 622LL;
  v315 = 23;
  v316 = 149LL;
  v259 = 12;
  v260 = 10LL;
  v261 = 6;
  v263 = 12;
  v264 = 11LL;
  v265 = 10;
  v267 = 12;
  v268 = 12LL;
  v271 = 35;
  v272 = 237LL;
  v273 = 0;
  AutoRotationState = v6;
  v151 = a1 & 4;
  if ( (a1 & 2) == 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName(v162);
  if ( !ProfileUserName )
    return 0LL;
  v10 = grpWinStaList;
  if ( grpWinStaList )
  {
    v11 = *(_QWORD *)(grpWinStaList + 176LL);
    if ( v11 )
      Win32FreePool(v11, v7, v9);
    v12 = Win32AllocPool(ProfileUserName->Length, 1852863317LL);
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
      WakeRIT(256LL);
  }
  v14 = v151;
  if ( v6 && !v151 )
  {
    v4 = CheckEasPolicyChange();
    if ( (unsigned int)CheckDesktopPolicyChange(ProfileUserName) || v4 )
    {
      v14 = v151;
      v3 = 16;
      goto LABEL_12;
    }
    UserSetLastError(0LL);
    FreeProfileUserName(ProfileUserName, v162);
    return 0LL;
  }
LABEL_12:
  if ( v5 )
    gdwPolicyFlags |= 2u;
  if ( v14 )
    v3 |= 8u;
  v149 = 300;
  FastGetProfileValue(ProfileUserName, 4LL, 607LL, &v149, &gnllHooksTimeout, 4, v3);
  if ( v5 && gDpiAdjustedForLoggedOnUser == v10 )
  {
    FastGetProfileDwordW(ProfileUserName, 4LL, L"LogPixels", 0LL, &LogPixels, v3);
    v156 = v10;
    v87 = DrvInitializeDxgkrnlDpiCache(&v156);
    v88 = PerformLegacyDpiUpgrade(ProfileUserName, LogPixels);
    if ( v87 < 0 )
    {
      v10 = 0;
    }
    else
    {
      v10 = 0;
      if ( !v156 && gdmLogPixelsOfPrimary == gdmLogPixels && !v88 && !LogPixels )
        goto LABEL_17;
    }
    GreReinitializeDpiSetting();
    v150[0] = 0;
    if ( (int)xxxUserSetDisplayConfig(0LL, 0LL, 0LL, 0LL, 2191, 516, 0, 0LL, 0, 0LL, v150, a2) >= 0 )
    {
      if ( v150[0] )
        ((void (*)(void))xxxUserResetDisplayDevice)();
      LogPixels = (unsigned __int16)DrvGetLogPixels();
      UserReinitializeStockFonts(LogPixels);
      gDpiAdjustedForLoggedOnUser = 1;
    }
  }
LABEL_17:
  LoadCPUserPreferences(ProfileUserName, v3);
  if ( !v6 )
  {
    xxxODI_ColorInit(ProfileUserName);
    LW_LoadResources(ProfileUserName);
    xxxSetWindowNCMetrics(ProfileUserName, 0LL, 1LL, 0xFFFFFFFFLL);
    SetMinMetrics((__int64)ProfileUserName, 0LL);
    SetIconMetrics(ProfileUserName, 0LL);
    GetKbdLangSwitch((__int64)ProfileUserName);
    ZwSetDefaultLocale(1u, 0);
    ZwSetDefaultUILanguage(0);
    ZwQueryDefaultUILanguage((LANGID *)(gpsi + 8692LL));
    xxxLoadSomeStrings();
    v15 = (_QWORD *)grpWinStaList;
    if ( grpWinStaList )
    {
      while ( 1 )
      {
        v15 = (_QWORD *)v15[2];
        if ( !v15 )
          break;
        v16 = v15[6];
        if ( v16 )
        {
          *(_DWORD *)(v16 + 40) &= ~0x80u;
          if ( UnlockDesktopMenu() )
            DestroyMenu((struct tagMENU *)v16);
        }
        v17 = v15[7];
        if ( v17 )
        {
          *(_DWORD *)(v17 + 40) &= ~0x80u;
          if ( UnlockDesktopMenu() )
            DestroyMenu((struct tagMENU *)v17);
        }
      }
    }
    xxxUpdateSystemCursorsFromRegistry((__int64)ProfileUserName);
    xxxUpdateSystemIconsFromRegistry((__int64)ProfileUserName);
    v18 = &v205;
    v19 = 0;
    do
    {
      if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, *((unsigned int *)v18 - 2), *(unsigned int *)v18) )
        xxxSystemParametersInfo(*((unsigned int *)v18 - 1), v149, 0LL, 0x8000);
      ++v19;
      v18 += 2;
    }
    while ( (unsigned __int64)v19 < 0xF );
    FastGetProfileIntsW(ProfileUserName, &v259, 4LL);
    v10 = 0;
  }
  xxxSystemParametersInfo(21LL, 0xFFFFFFFFLL, 0LL, 0);
  if ( v5 )
    FastGetProfileIntFromID(ProfileUserName, 35LL, 236LL);
  v20 = v10;
  v21 = &v164;
  do
  {
    if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, *((unsigned int *)v21 - 2), *(unsigned int *)v21) )
      xxxSystemParametersInfo(*((unsigned int *)v21 - 1), v149, 0LL, 0x8000);
    ++v20;
    v21 += 2;
  }
  while ( (unsigned __int64)v20 < 0xB );
  v22 = v3;
  if ( v4 )
    v22 = 2;
  EasTimeout = GetEasTimeout();
  LODWORD(pData) = v22;
  ProfileIntFromID = FastGetProfileIntFromID(ProfileUserName, 4LL, 99LL);
  v25 = AutoRotationState;
  if ( ProfileIntFromID && (!EasTimeout || v154 < EasTimeout) )
    EasTimeout = v154;
  xxxSystemParametersInfo(15LL, EasTimeout, 0LL, 0x8000);
  FastGetProfileIntsW(ProfileUserName, &v275, 11LL);
  if ( gnFastAltTabColumns < 2 )
    gnFastAltTabColumns = 7;
  if ( gnFastAltTabRows < 1 )
    gnFastAltTabRows = 3;
  if ( v157 )
    *gpsi |= 0x200u;
  else
    *gpsi &= ~0x200u;
  if ( v158 )
    gdwPUDFlags |= 0x10000u;
  else
    gdwPUDFlags &= ~0x10000u;
  if ( v159 == 2 )
  {
    if ( (unsigned int)GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 24LL), 119LL) )
      gdwPUDFlags &= ~0x100000u;
    else
      gdwPUDFlags |= 0x100000u;
    if ( v5 )
    {
      RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", (gdwPUDFlags >> 20) & 1, &v154, pData);
      RtlLoadStringOrError(107LL, v325, 40LL);
      FastWriteProfileStringW(ProfileUserName, 4LL, v325, Dest);
    }
  }
  else if ( v159 )
  {
    gdwPUDFlags |= 0x100000u;
  }
  else
  {
    gdwPUDFlags &= ~0x100000u;
  }
  v149 = *(_DWORD *)(gpsi + 5392LL);
  if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, 4LL, 4LL) )
    SetCaretBlinkTime(v149);
  if ( !v25 )
  {
    FastGetProfileIntFromID(ProfileUserName, 12LL, 608LL);
    v26 = gMouseSensitivity;
    if ( (unsigned int)(gMouseSensitivity - 1) > 0x13 )
    {
      v26 = 10;
      gMouseSensitivity = 10;
    }
    gMouseSensitivityFactor = CalculateMouseSensitivity(v26);
    ReadDefaultAccelerationCurves((__int64)ProfileUserName);
    ResetMouseAccelerationCurves();
    FastGetProfileIntFromID(ProfileUserName, 12LL, 613LL);
    SetMouseTrails(v149);
    FastGetProfileIntW(ProfileUserName, 7LL, L"TTOnly", 0LL, &v149, 0);
    GreSetFontEnumeration(v149);
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x24uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v28, v27, v29, v30) & 0xF) == 0 )
        goto LABEL_58;
    }
    else if ( IsDPIDWMSysMet(v28)
           && (W32GetCurrentThreadDpiAwarenessContext(v32, v31, v33, v34) & 0xF) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v91, v92, v93) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v94, v95, v96)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_58;
    }
    if ( IsDPIDWMSysMet(0x24uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v36, v35, v37, v38) & 0xF) == 1
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v98, v99, v100) + 408) )
    {
      W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v101, v102, v103);
    }
LABEL_58:
    FastGetProfileIntFromID(ProfileUserName, 12LL, 91LL);
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x25uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v40, v39, v41, v42) & 0xF) == 0 )
      {
LABEL_61:
        FastGetProfileIntFromID(ProfileUserName, 12LL, 92LL);
        FastGetProfileIntFromID(ProfileUserName, 12LL, 93LL);
        v51 = gdtMouseHover;
        if ( (unsigned int)gdtMouseHover < 0xA )
        {
          v51 = 10;
          gdtMouseHover = 10;
        }
        if ( v51 > 0x7FFFFFFF )
          gdtMouseHover = 0x7FFFFFFF;
        UpdatePerUserKeyboardIndicators(ProfileUserName);
        InitScancodeMap();
        FastGetProfileDwordW(ProfileUserName, 24LL, L"Attributes", 0LL, &gdwKeyboardAttributes, 0);
        gdwKeyboardAttributes = ((unsigned int)gdwKeyboardAttributes >> 15) & 2;
        xxxUpdatePerUserAccessPackSettings(ProfileUserName);
        goto LABEL_66;
      }
    }
    else if ( IsDPIDWMSysMet(v40)
           && (W32GetCurrentThreadDpiAwarenessContext(v44, v43, v45, v46) & 0xF) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v104, v105, v106) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                    (__int64)KeGetCurrentThread(),
                                                    v107,
                                                    v108,
                                                    v109)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_61;
    }
    if ( IsDPIDWMSysMet(0x25uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v48, v47, v49, v50) & 0xF) == 1
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v111, v112, v113) + 408) )
    {
      W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v114, v115, v116);
    }
    goto LABEL_61;
  }
LABEL_66:
  v52 = (void *)OpenCacheKeyEx(0LL, 22LL, 131097LL);
  if ( !v52 )
    goto LABEL_72;
  if ( !(unsigned int)IsDPIAbsoluteSysMet(0x3FuLL) )
  {
    if ( IsDPIDWMSysMet(v54)
      && (W32GetCurrentThreadDpiAwarenessContext(v58, v57, v59, v60) & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v117, v118, v119) + 408)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v120, v121, v122)
                                           + 408)
                               + 8LL)
                   + 244LL) & 1 )
    {
      goto LABEL_164;
    }
LABEL_69:
    if ( IsDPIDWMSysMet(0x3FuLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v62, v61, v63, v64) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v124, v125, v126) + 408)
        ? (v130 = 0)
        : (v130 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v127,
                                                        v128,
                                                        v129)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1),
          v130) )
    {
      v65 = (_DWORD *)(gpsi + 2908LL);
    }
    else
    {
      v65 = (_DWORD *)(gpsi + 2132LL);
    }
    goto LABEL_71;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v54, v53, v55, v56) & 0xF) != 0 )
    goto LABEL_69;
LABEL_164:
  v65 = (_DWORD *)(gpsi + 2520LL);
LABEL_71:
  *v65 = 1;
  ZwClose(v52);
LABEL_72:
  if ( !(unsigned int)IsDPIAbsoluteSysMet(0x3FuLL) )
  {
    if ( IsDPIDWMSysMet(v67)
      && (W32GetCurrentThreadDpiAwarenessContext(v71, v70, v72, v73) & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v131, v132, v133) + 408)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v134, v135, v136)
                                           + 408)
                               + 8LL)
                   + 244LL) & 1 )
    {
      goto LABEL_178;
    }
LABEL_74:
    if ( IsDPIDWMSysMet(0x3FuLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v75, v74, v76, v77) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v138, v139, v140) + 408)
        ? (v144 = 0)
        : (v144 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v141,
                                                        v142,
                                                        v143)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1),
          v144) )
    {
      v78 = (_DWORD *)(gpsi + 2908LL);
    }
    else
    {
      v78 = (_DWORD *)(gpsi + 2132LL);
    }
    goto LABEL_76;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v67, v66, v68, v69) & 0xF) != 0 )
    goto LABEL_74;
LABEL_178:
  v78 = (_DWORD *)(gpsi + 2520LL);
LABEL_76:
  *v78 |= 2u;
  GreSetFontEnumeration(4LL);
  GreSetFontEnumeration(32LL);
  if ( (v155 & 2) != 0 )
    GreSetFontEnumeration(v155 | 4u);
  if ( (*(_DWORD *)UPDWORDPointer(8202LL) & 2) != 0 )
    GreSetFontEnumeration(v155 | 0x30u);
  v79 = *(_DWORD *)UPDWORDPointer(8204LL);
  if ( !v79 )
    v79 = 1200;
  gulGamma = v79;
  v80 = (*(_BYTE *)UPDWORDPointer(8210LL) & 1) == 0;
  v81 = &dword_1C02E5E40;
  if ( v80 )
    v81 = (int *)&unk_1C02EFB40;
  off_1C0320110 = v81;
  FreeProfileUserName(ProfileUserName, v162);
  if ( v160 == 2 )
    xxxUserResetDisplayDevice(v83, v82);
  if ( (unsigned int)FastGetProfileDwordW(0LL, 49LL, L"RestrictDebuggerForeground", 0LL, &v161, 0) && v161 )
    gfDebugForegroundIgnoreDebugPort = 1;
  if ( v5 )
  {
    memset(v163, 0, 0x38uLL);
    if ( (unsigned int)ReadPointerDeviceSettings(146, (__int64)v163, v89, v90) )
    {
      if ( !v163[7] )
        RawInputManagerObject::bTouchInputAllowed = 0;
    }
  }
  if ( gbUsingDefaultSectionSize == 1 )
  {
    gbUsingDefaultSectionSize = 0;
    UserLogError(3221226518LL, v84, v85);
    if ( gdwInAtomicOperation )
    {
      v145 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v145, gdwInAtomicOperation);
    ExRaiseHardError(3221226518LL, 0LL, 0LL, 0LL, 7, &v151);
    EnterCrit(0LL, 1LL);
  }
  xxxDwmControl(1037LL, 0LL);
  if ( v5 )
  {
    if ( dword_1C0320840 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x400000000000uLL) )
    {
      v321 = 4LL;
      v320 = &dword_1C032946C;
      AutoRotationState = QueryAutoRotationState();
      p_AutoRotationState = &AutoRotationState;
      v323 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EEA32, v146, v147, 4u, &v319);
    }
    *gpsi |= 0x400u;
  }
  return 1LL;
}
