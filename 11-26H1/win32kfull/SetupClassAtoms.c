/*
 * XREFs of SetupClassAtoms @ 0x14021E280
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateMarginPropAtom@WindowMargins@@YA_NPEBG@Z @ 0x14021EE68 (-CreateMarginPropAtom@WindowMargins@@YA_NPEBG@Z.c)
 */

__int64 SetupClassAtoms()
{
  wchar_t **v0; // rsi
  char v1; // bp
  __int64 v2; // rdi
  __int64 v3; // r14
  __int16 v4; // bx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // esi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int16 v31; // di
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // ebp
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int16 v41; // di
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // esi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int16 v51; // di
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  int v56; // ebp
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int16 v61; // di
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  int v66; // esi
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int16 v71; // di
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  int v76; // ebp
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int16 v81; // di
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx
  int v86; // r14d
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int16 v91; // di
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  const unsigned __int16 *v96; // rdx
  WindowMargins *v97; // rcx
  int v98; // esi
  int v99; // ebx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rcx
  int v104; // edi
  int v105; // ebx
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rcx
  int v110; // ebp
  int v111; // ebx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // rcx
  int v116; // edi
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rcx
  __int64 v120; // rdx
  __int64 v121; // rdx
  __int64 v122; // rcx
  int v123; // esi
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rcx
  __int64 v127; // rdx
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // rdx
  __int64 v133; // rcx
  int v134; // ebp
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rdx
  __int64 v142; // rcx
  int v143; // esi
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // rdx
  __int64 v151; // rcx
  int v152; // ebp
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // rdx
  __int64 v160; // rcx
  int v161; // r14d
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // rdx
  __int64 v169; // rcx
  int v170; // esi
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // rdx
  __int64 v178; // rcx
  int v179; // ebp
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // rdx
  __int64 v191; // rcx
  __int64 v192; // rdx
  __int64 v193; // rcx
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // rdx
  __int64 v203; // rcx

  v0 = off_140359770;
  v1 = 1;
  v2 = 868LL;
  v3 = 17LL;
  do
  {
    v4 = UserAddAtomEx(*v0, 1LL, 2LL);
    v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19904);
    *(_WORD *)(v2 + v7) = v4;
    ++v0;
    v10 = (unsigned int)-(*(_WORD *)(v2 + *(_QWORD *)(W32GetUserSessionState(v7, v8) + 19904)) != 0);
    v2 += 2LL;
    v1 &= v10;
    --v3;
  }
  while ( v3 );
  v11 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19904);
  *(_WORD *)(v11 + 904) = -32766;
  v13 = *(_QWORD *)(W32GetUserSessionState(v11, v12) + 19904);
  *(_WORD *)(v13 + 910) = -32764;
  v15 = *(_QWORD *)(W32GetUserSessionState(v13, v14) + 19904);
  *(_WORD *)(v15 + 912) = -32762;
  v17 = *(_QWORD *)(W32GetUserSessionState(v15, v16) + 19904);
  *(_WORD *)(v17 + 902) = -32767;
  v19 = *(_QWORD *)(W32GetUserSessionState(v17, v18) + 19904);
  *(_WORD *)(v19 + 908) = -32765;
  *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v19, v20) + 19904) + 906LL) = 0x8000;
  v21 = (unsigned __int16)UserAddAtomEx(L"SHELLHOOK", 1LL, 2LL);
  v24 = *(_QWORD *)(W32GetUserSessionState(v23, v22) + 19904);
  *(_DWORD *)(v24 + 928) = v21;
  v26 = (unsigned __int8)v1 & (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v24, v25) + 19904) + 928LL) != 0);
  LOWORD(v21) = UserAddAtomEx(L"SysFrostedWindow", 1LL, 2LL);
  v29 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + 19904);
  *(_WORD *)(v29 + 1378) = v21;
  v31 = *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v29, v30) + 19904) + 1378LL);
  LOWORD(v21) = UserAddAtomEx(L"SysCP", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v33, v32) + 41374) = v21;
  v36 = (v31 != 0 ? v26 : 0) & (*(_WORD *)(W32GetUserSessionState(v35, v34) + 41374) != 0);
  LOWORD(v21) = UserAddAtomEx(L"SysDT", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v38, v37) + 41376) = v21;
  v41 = *(_WORD *)(W32GetUserSessionState(v40, v39) + 41376);
  LOWORD(v21) = UserAddAtomEx(L"SysQOS", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v43, v42) + 41378) = v21;
  v46 = (v41 != 0 ? v36 : 0) & (*(_WORD *)(W32GetUserSessionState(v45, v44) + 41378) != 0);
  LOWORD(v21) = UserAddAtomEx(L"SysDDEI", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v48, v47) + 41380) = v21;
  v51 = *(_WORD *)(W32GetUserSessionState(v50, v49) + 41380);
  LOWORD(v21) = UserAddAtomEx(L"SysWNDO", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v53, v52) + 41382) = v21;
  v56 = (v51 != 0 ? v46 : 0) & (*(_WORD *)(W32GetUserSessionState(v55, v54) + 41382) != 0);
  LOWORD(v21) = UserAddAtomEx(L"SysIMEL", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v58, v57) + 41384) = v21;
  v61 = *(_WORD *)(W32GetUserSessionState(v60, v59) + 41384);
  LOWORD(v21) = UserAddAtomEx(L"SysLayer", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v63, v62) + 41398) = v21;
  v66 = (v61 != 0 ? v56 : 0) & (*(_WORD *)(W32GetUserSessionState(v65, v64) + 41398) != 0);
  LOWORD(v21) = UserAddAtomEx(L"SysDispAffinity", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v68, v67) + 41400) = v21;
  v71 = *(_WORD *)(W32GetUserSessionState(v70, v69) + 41400);
  LOWORD(v21) = UserAddAtomEx(L"SysSwapChain", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v73, v72) + 42286) = v21;
  v76 = (v71 != 0 ? v66 : 0) & (*(_WORD *)(W32GetUserSessionState(v75, v74) + 42286) != 0);
  LOWORD(v21) = UserAddAtomEx(L"SysDCompHwndTargets", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v78, v77) + 42270) = v21;
  v81 = *(_WORD *)(W32GetUserSessionState(v80, v79) + 42270);
  LOWORD(v21) = UserAddAtomEx(L"SysVisRgnTracker", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v83, v82) + 42288) = v21;
  v86 = (v81 != 0 ? v76 : 0) & (*(_WORD *)(W32GetUserSessionState(v85, v84) + 42288) != 0);
  LOWORD(v21) = UserAddAtomEx(L"SysDCompHwndBitmap", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v88, v87) + 42274) = v21;
  v91 = *(_WORD *)(W32GetUserSessionState(v90, v89) + 42274);
  LOWORD(v21) = UserAddAtomEx(szCOMPOSITIONINPUTQUEUE_NAME, 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v93, v92) + 42284) = v21;
  LOWORD(v21) = *(_WORD *)(W32GetUserSessionState(v95, v94) + 42284);
  v98 = (v91 != 0 ? v86 : 0) & ((_WORD)v21 != 0 && WindowMargins::CreateMarginPropAtom(v97, v96));
  v99 = (unsigned __int16)UserAddAtomEx(L"ACTIVATESHELLWINDOW", 1LL, 2LL);
  *(_DWORD *)(W32GetUserSessionState(v101, v100) + 63288) = v99;
  v104 = *(_DWORD *)(W32GetUserSessionState(v103, v102) + 63288);
  v105 = (unsigned __int16)UserAddAtomEx(L"OTHERWINDOWCREATED", 1LL, 2LL);
  *(_DWORD *)(W32GetUserSessionState(v107, v106) + 63392) = v105;
  v110 = (v104 != 0 ? v98 : 0) & (*(_DWORD *)(W32GetUserSessionState(v109, v108) + 63392) != 0);
  v111 = (unsigned __int16)UserAddAtomEx(L"OTHERWINDOWDESTROYED", 1LL, 2LL);
  *(_DWORD *)(W32GetUserSessionState(v113, v112) + 63396) = v111;
  v116 = *(_DWORD *)(W32GetUserSessionState(v115, v114) + 63396);
  LOWORD(v111) = UserAddAtomEx(L"Message", 1LL, 2LL);
  v119 = *(_QWORD *)(W32GetUserSessionState(v118, v117) + 19904);
  *(_WORD *)(v119 + 916) = v111;
  *(_WORD *)(W32GetUserSessionState(v119, v120) + 41368) = v111;
  v123 = (v116 != 0 ? v110 : 0) & (*(_WORD *)(W32GetUserSessionState(v122, v121) + 41368) != 0);
  LOWORD(v111) = UserAddAtomEx(L"SysShadow", 1LL, 2LL);
  v126 = *(_QWORD *)(W32GetUserSessionState(v125, v124) + 19904);
  *(_WORD *)(v126 + 914) = v111;
  *(_WORD *)(W32GetUserSessionState(v126, v127) + 41366) = v111;
  LOWORD(v116) = *(_WORD *)(W32GetUserSessionState(v129, v128) + 41366);
  LOWORD(v111) = UserAddAtomEx(L"OleMainThreadWndClass", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v131, v130) + 41370) = v111;
  v134 = ((_WORD)v116 != 0 ? v123 : 0) & (*(_WORD *)(W32GetUserSessionState(v133, v132) + 41370) != 0);
  LOWORD(v111) = UserAddAtomEx(L"FlashWState", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v136, v135) + 41372) = v111;
  LOWORD(v116) = *(_WORD *)(W32GetUserSessionState(v138, v137) + 41372);
  LOWORD(v111) = UserAddAtomEx(L"SysTouchFlags", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v140, v139) + 41386) = v111;
  v143 = ((_WORD)v116 != 0 ? v134 : 0) & (*(_WORD *)(W32GetUserSessionState(v142, v141) + 41386) != 0);
  LOWORD(v111) = UserAddAtomEx(L"MicrosoftWindowsTargetingWindow", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v145, v144) + 41388) = v111;
  LOWORD(v116) = *(_WORD *)(W32GetUserSessionState(v147, v146) + 41388);
  LOWORD(v111) = UserAddAtom(L"SysFeedbackSettings", 1LL);
  *(_WORD *)(W32GetUserSessionState(v149, v148) + 41390) = v111;
  v152 = ((_WORD)v116 != 0 ? v143 : 0) & (*(_WORD *)(W32GetUserSessionState(v151, v150) + 41390) != 0);
  LOWORD(v111) = UserAddAtomEx(L"ShutdownBlockingReason", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v154, v153) + 41392) = v111;
  LOWORD(v116) = *(_WORD *)(W32GetUserSessionState(v156, v155) + 41392);
  LOWORD(v111) = UserAddAtomEx(L"BrokeredForeground", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v158, v157) + 41394) = v111;
  v161 = ((_WORD)v116 != 0 ? v152 : 0) & (*(_WORD *)(W32GetUserSessionState(v160, v159) + 41394) != 0);
  LOWORD(v111) = UserAddAtomEx(szMIPFLAGS, 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v163, v162) + 41364) = v111;
  LOWORD(v116) = *(_WORD *)(W32GetUserSessionState(v165, v164) + 41364);
  LOWORD(v111) = UserAddAtomEx(L"CoreWindowProp", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v167, v166) + 42282) = v111;
  v170 = ((_WORD)v116 != 0 ? v161 : 0) & (*(_WORD *)(W32GetUserSessionState(v169, v168) + 42282) != 0);
  LOWORD(v111) = UserAddAtomEx(L"MonitorInheritance", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v172, v171) + 41402) = v111;
  LOWORD(v116) = *(_WORD *)(W32GetUserSessionState(v174, v173) + 41402);
  LOWORD(v111) = UserAddAtomEx(L"DesktopRecalcInfo", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v176, v175) + 41404) = v111;
  v179 = ((_WORD)v116 != 0 ? v170 : 0) & (*(_WORD *)(W32GetUserSessionState(v178, v177) + 41404) != 0);
  LOWORD(v111) = *(_WORD *)(W32GetUserSessionState(v181, v180) + 41404);
  *(_WORD *)(W32GetUserSessionState(v183, v182) + 42278) = v111;
  LOWORD(v111) = UserAddAtomEx(L"DwmWindowNotifyBatch", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v185, v184) + 41406) = v111;
  LOWORD(v170) = *(_WORD *)(W32GetUserSessionState(v187, v186) + 41406);
  LOWORD(v111) = *(_WORD *)(W32GetUserSessionState(v189, v188) + 41406);
  *(_WORD *)(W32GetUserSessionState(v191, v190) + 42290) = v111;
  LOWORD(v111) = UserAddAtomEx(L"InterceptWindowData", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v193, v192) + 41408) = v111;
  LOWORD(v116) = *(_WORD *)(W32GetUserSessionState(v195, v194) + 41408);
  LOWORD(v111) = *(_WORD *)(W32GetUserSessionState(v197, v196) + 41408);
  *(_WORD *)(W32GetUserSessionState(v199, v198) + 42292) = v111;
  LOWORD(v111) = *(_WORD *)(W32GetUserSessionState(v201, v200) + 41406);
  *(_WORD *)(W32GetUserSessionState(v203, v202) + 41362) = v111;
  return ((_WORD)v116 != 0) & v179 & (unsigned int)-((_WORD)v170 != 0);
}
