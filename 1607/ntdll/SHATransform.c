/*
 * XREFs of SHATransform @ 0x18000A590
 * Callers:
 *     A_SHAUpdate @ 0x18000A4C0 (A_SHAUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SHATransform(int *a1, unsigned int *a2)
{
  int v2; // r8d
  unsigned int *v3; // rbx
  int v4; // ebp
  int v5; // eax
  int v6; // r10d
  int v7; // r11d
  unsigned int v8; // edi
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // r10d
  int v14; // r8d
  unsigned __int32 v15; // edi
  unsigned __int32 v16; // r14d
  unsigned __int32 v17; // r15d
  unsigned __int32 v18; // r12d
  int v19; // r9d
  int v20; // r10d
  int v21; // r11d
  int v22; // r9d
  int v23; // r11d
  int v24; // ecx
  int v25; // r10d
  int v26; // edx
  int v27; // ecx
  int v28; // r11d
  int v29; // r8d
  int v30; // ecx
  unsigned __int32 v31; // ebp
  int v32; // edx
  int v33; // r9d
  int v34; // ecx
  int v35; // r8d
  unsigned __int32 v36; // r13d
  int v37; // r10d
  int v38; // ecx
  int v39; // r9d
  int v40; // r11d
  int v41; // ecx
  int v42; // r10d
  int v43; // edx
  int v44; // ecx
  int v45; // r11d
  int v46; // r8d
  int v47; // ecx
  int v48; // edx
  int v49; // r9d
  int v50; // ecx
  int v51; // r8d
  int v52; // r10d
  int v53; // ecx
  int v54; // r9d
  int v55; // r11d
  int v56; // ecx
  int v57; // r10d
  int v58; // edx
  int v59; // ecx
  int v60; // r11d
  int v61; // r8d
  int v62; // ecx
  int v63; // edx
  int v64; // r9d
  int v65; // r8d
  int v66; // esi
  unsigned __int32 v67; // r14d
  unsigned int v68; // r10d
  int v69; // r10d
  unsigned int v70; // r11d
  int v71; // r9d
  int v72; // r11d
  unsigned int v73; // ecx
  int v74; // r10d
  int v75; // edx
  int v76; // ecx
  int v77; // r11d
  int v78; // r8d
  int v79; // edi
  int v80; // r9d
  int v81; // edx
  int v82; // ecx
  int v83; // esi
  int v84; // r8d
  int v85; // r10d
  int v86; // ecx
  int v87; // r9d
  int v88; // r11d
  int v89; // ebp
  int v90; // ecx
  int v91; // r10d
  int v92; // edx
  int v93; // ecx
  int v94; // r11d
  int v95; // r8d
  int v96; // ecx
  int v97; // edx
  int v98; // r9d
  int v99; // ecx
  int v100; // r8d
  int v101; // r10d
  int v102; // ecx
  int v103; // r9d
  int v104; // r11d
  int v105; // ecx
  int v106; // r10d
  int v107; // edx
  int v108; // ecx
  int v109; // r11d
  int v110; // r8d
  int v111; // r13d
  int v112; // ecx
  int v113; // edx
  int v114; // r9d
  int v115; // r14d
  int v116; // ecx
  int v117; // r8d
  int v118; // r10d
  int v119; // ecx
  int v120; // r9d
  int v121; // r11d
  int v122; // r12d
  int v123; // ecx
  int v124; // r10d
  int v125; // edx
  int v126; // r8d
  int v127; // r11d
  int v128; // ecx
  int v129; // edx
  int v130; // r9d
  int v131; // ecx
  int v132; // r8d
  int v133; // r10d
  int v134; // ecx
  int v135; // r9d
  int v136; // r11d
  int v137; // r10d
  int v138; // r15d
  int v139; // ecx
  int v140; // r11d
  int v141; // r8d
  unsigned int v142; // ecx
  int v143; // edi
  int v144; // r9d
  unsigned int v145; // ecx
  unsigned int v146; // eax
  int v147; // r8d
  int v148; // ecx
  int v149; // eax
  int v150; // r12d
  int v151; // r10d
  int v152; // ecx
  int v153; // r9d
  int v154; // r11d
  int v155; // r10d
  int v156; // ecx
  int v157; // eax
  int v158; // r11d
  int v159; // r8d
  int v160; // ecx
  unsigned int v161; // eax
  int v162; // r9d
  unsigned int v163; // ecx
  int v164; // r8d
  int v165; // r10d
  unsigned int v166; // r11d
  int v167; // ebp
  int v168; // r15d
  int v169; // r9d
  int v170; // esi
  int v171; // ecx
  int v172; // r10d
  int v173; // eax
  int v174; // ecx
  int v175; // r11d
  int v176; // r8d
  unsigned int v177; // ecx
  unsigned int v178; // eax
  int v179; // r9d
  unsigned int v180; // ecx
  int v181; // r8d
  int v182; // r10d
  int v183; // r13d
  unsigned int v184; // ecx
  int v185; // r9d
  int v186; // r11d
  int v187; // ecx
  int v188; // r11d
  int v189; // r10d
  int v190; // edi
  int v191; // eax
  int v192; // ecx
  int v193; // r11d
  int v194; // r8d
  int v195; // ecx
  int v196; // edi
  int v197; // r9d
  unsigned int v198; // ecx
  int v199; // r15d
  int v200; // r10d
  unsigned int v201; // ecx
  unsigned int v202; // eax
  int v203; // r9d
  int v204; // ecx
  int v205; // eax
  int v206; // r11d
  unsigned int v207; // ecx
  int v208; // r10d
  int v209; // r8d
  int v210; // ecx
  int v211; // eax
  int v212; // r11d
  int v213; // r8d
  int v214; // edx
  int v215; // r9d
  int v216; // r8d
  int v217; // edi
  int v218; // eax
  int v219; // edx
  int v220; // r10d
  int v221; // eax
  int v222; // r9d
  int v223; // r11d
  int v224; // edi
  int v225; // eax
  int v226; // r10d
  int v227; // r8d
  int v228; // eax
  int v229; // r11d
  int v230; // edx
  int v231; // r9d
  int v232; // r8d
  int v233; // r12d
  int v234; // eax
  int v235; // edx
  int v236; // r13d
  int v237; // r10d
  int v238; // eax
  int v239; // r9d
  int v240; // ebp
  int v241; // r12d
  int v242; // r15d
  int v243; // r11d
  int v244; // eax
  int v245; // r10d
  int v246; // r8d
  int v247; // eax
  int v248; // r11d
  int v249; // eax
  int v250; // r8d
  int v251; // r14d
  int v252; // edx
  int v253; // eax
  int v254; // r9d
  int v255; // ebp
  int v256; // r10d
  unsigned int v257; // eax
  int v258; // r14d
  int v259; // esi
  int v260; // eax
  int v261; // ebp
  int v262; // edi
  int v263; // eax
  int v264; // esi
  int v265; // r8d
  int v266; // edx
  int v267; // eax
  int v268; // edi
  int v269; // r11d
  unsigned int v270; // eax
  int v271; // r9d
  unsigned int v272; // eax
  int v273; // r11d
  int v274; // r8d
  unsigned int v275; // ecx
  __int64 result; // rax
  unsigned __int32 v277; // [rsp+0h] [rbp-88h]
  int v278; // [rsp+0h] [rbp-88h]
  int v279; // [rsp+0h] [rbp-88h]
  int v280; // [rsp+0h] [rbp-88h]
  int v281; // [rsp+0h] [rbp-88h]
  unsigned __int32 v282; // [rsp+4h] [rbp-84h]
  int v283; // [rsp+4h] [rbp-84h]
  int v284; // [rsp+4h] [rbp-84h]
  unsigned __int32 v285; // [rsp+8h] [rbp-80h]
  int v286; // [rsp+8h] [rbp-80h]
  int v287; // [rsp+8h] [rbp-80h]
  int v288; // [rsp+8h] [rbp-80h]
  int v289; // [rsp+8h] [rbp-80h]
  int v290; // [rsp+Ch] [rbp-7Ch]
  int v291; // [rsp+Ch] [rbp-7Ch]
  int v292; // [rsp+Ch] [rbp-7Ch]
  int v293; // [rsp+10h] [rbp-78h]
  int v294; // [rsp+10h] [rbp-78h]
  int v295; // [rsp+10h] [rbp-78h]
  int v296; // [rsp+14h] [rbp-74h]
  int v297; // [rsp+14h] [rbp-74h]
  int v298; // [rsp+14h] [rbp-74h]
  unsigned __int32 v299; // [rsp+18h] [rbp-70h]
  int v300; // [rsp+18h] [rbp-70h]
  int v301; // [rsp+18h] [rbp-70h]
  unsigned __int32 v302; // [rsp+1Ch] [rbp-6Ch]
  int v303; // [rsp+1Ch] [rbp-6Ch]
  int v304; // [rsp+1Ch] [rbp-6Ch]
  int v305; // [rsp+20h] [rbp-68h]
  int v306; // [rsp+20h] [rbp-68h]
  int v307; // [rsp+20h] [rbp-68h]
  int v308; // [rsp+24h] [rbp-64h]
  int v309; // [rsp+24h] [rbp-64h]
  unsigned __int32 v310; // [rsp+28h] [rbp-60h]
  int v311; // [rsp+28h] [rbp-60h]
  int v312; // [rsp+28h] [rbp-60h]
  unsigned __int32 v313; // [rsp+2Ch] [rbp-5Ch]
  int v314; // [rsp+2Ch] [rbp-5Ch]
  unsigned __int32 v315; // [rsp+30h] [rbp-58h]
  int v316; // [rsp+30h] [rbp-58h]
  int v317; // [rsp+30h] [rbp-58h]
  int v318; // [rsp+30h] [rbp-58h]
  int v319; // [rsp+34h] [rbp-54h]
  int v320; // [rsp+34h] [rbp-54h]
  unsigned __int32 v322; // [rsp+98h] [rbp+10h]
  int v323; // [rsp+98h] [rbp+10h]
  int v324; // [rsp+98h] [rbp+10h]
  int v325; // [rsp+98h] [rbp+10h]
  unsigned __int32 v326; // [rsp+A0h] [rbp+18h]
  int v327; // [rsp+A0h] [rbp+18h]
  int v328; // [rsp+A0h] [rbp+18h]
  int v329; // [rsp+A0h] [rbp+18h]
  int v330; // [rsp+A8h] [rbp+20h]
  int v331; // [rsp+A8h] [rbp+20h]
  int v332; // [rsp+A8h] [rbp+20h]
  int v333; // [rsp+A8h] [rbp+20h]

  v2 = *a1;
  v3 = a2;
  v4 = a1[2];
  v5 = *a1;
  v6 = a1[1];
  v7 = a1[3];
  v8 = *a2;
  v9 = a1[4];
  v10 = v7 ^ v6 & (v4 ^ v7);
  v11 = v9 + __ROL4__(v5, 5);
  v12 = __ROL4__(v6, 30);
  v13 = v2 & (v12 ^ v4);
  v14 = __ROL4__(v2, 30);
  v15 = _byteswap_ulong(v8);
  v16 = _byteswap_ulong(v3[2]);
  v17 = _byteswap_ulong(v3[3]);
  v18 = _byteswap_ulong(v3[4]);
  v315 = _byteswap_ulong(v3[1]);
  v19 = v11 + v10 + v15 + 1518500249;
  v20 = v7 + 1518500249 + v315 + __ROL4__(v19, 5) + (v4 ^ v13);
  v21 = v19 & (v14 ^ v12);
  v22 = __ROL4__(v19, 30);
  v23 = v4 + 1518500249 + v16 + __ROL4__(v20, 5) + (v12 ^ v21);
  v24 = v14 ^ v20 & (v14 ^ v22);
  v25 = __ROL4__(v20, 30);
  v26 = v17 + __ROL4__(v23, 5) + v24 + v12 + 1518500249;
  v27 = v22 ^ v23 & (v25 ^ v22);
  v28 = __ROL4__(v23, 30);
  v29 = v18 + __ROL4__(v26, 5) + v27 + v14 + 1518500249;
  v30 = v25 ^ v26 & (v28 ^ v25);
  v31 = _byteswap_ulong(v3[5]);
  v32 = __ROL4__(v26, 30);
  v33 = v31 + __ROL4__(v29, 5) + 1518500249 + v30 + v22;
  v34 = v28 ^ v29 & (v32 ^ v28);
  v35 = __ROL4__(v29, 30);
  v36 = _byteswap_ulong(v3[6]);
  v37 = v36 + __ROL4__(v33, 5) + 1518500249 + v34 + v25;
  v38 = v33 & (v35 ^ v32);
  v39 = __ROL4__(v33, 30);
  v302 = _byteswap_ulong(v3[7]);
  v40 = v302 + 1518500249 + __ROL4__(v37, 5) + (v32 ^ v38) + v28;
  v41 = v35 ^ v37 & (v35 ^ v39);
  v42 = __ROL4__(v37, 30);
  v282 = _byteswap_ulong(v3[8]);
  v43 = v282 + 1518500249 + __ROL4__(v40, 5) + v41 + v32;
  v277 = _byteswap_ulong(v3[9]);
  v44 = v39 ^ v40 & (v42 ^ v39);
  v45 = __ROL4__(v40, 30);
  v46 = v277 + 1518500249 + __ROL4__(v43, 5) + v44 + v35;
  v313 = _byteswap_ulong(v3[10]);
  v47 = v42 ^ v43 & (v45 ^ v42);
  v48 = __ROL4__(v43, 30);
  v49 = v313 + 1518500249 + __ROL4__(v46, 5) + v47 + v39;
  v285 = _byteswap_ulong(v3[11]);
  v50 = v45 ^ v46 & (v48 ^ v45);
  v51 = __ROL4__(v46, 30);
  v52 = v285 + 1518500249 + __ROL4__(v49, 5) + v50 + v42;
  v53 = v48 ^ v49 & (v51 ^ v48);
  v54 = __ROL4__(v49, 30);
  v310 = _byteswap_ulong(v3[12]);
  v55 = v310 + 1518500249 + __ROL4__(v52, 5) + v53 + v45;
  v56 = v51 ^ v52 & (v51 ^ v54);
  v57 = __ROL4__(v52, 30);
  v299 = _byteswap_ulong(v3[13]);
  v58 = v299 + 1518500249 + __ROL4__(v55, 5) + v56 + v48;
  v59 = v55 & (v57 ^ v54);
  v60 = __ROL4__(v55, 30);
  v322 = _byteswap_ulong(v3[14]);
  v61 = v322 + 1518500249 + __ROL4__(v58, 5) + (v54 ^ v59) + v51;
  v62 = v57 ^ v58 & (v60 ^ v57);
  v63 = __ROL4__(v58, 30);
  v326 = _byteswap_ulong(v3[15]);
  LODWORD(v3) = v54 + 1518500249 + v62 + __ROL4__(v61, 5) + v326;
  v330 = __ROL4__(v15 ^ v16 ^ v282 ^ v299, 1);
  v64 = v57 + 1518500249 + (v60 ^ v61 & (v63 ^ v60)) + __ROL4__((_DWORD)v3, 5) + v330;
  v65 = __ROL4__(v61, 30);
  v66 = v16 ^ v18 ^ v313 ^ v326;
  v67 = v285;
  v68 = v63 ^ (unsigned int)v3 & (v65 ^ v63);
  LODWORD(v3) = __ROL4__((_DWORD)v3, 30);
  v293 = __ROL4__(v315 ^ v17 ^ v277 ^ v322, 1);
  v305 = __ROL4__(v66, 1);
  v69 = v60 + 1518500249 + v293 + __ROL4__(v64, 5) + v68;
  v70 = v65 ^ v64 & (v65 ^ (unsigned int)v3);
  v71 = __ROL4__(v64, 30);
  v72 = v63 + 1518500249 + v305 + __ROL4__(v69, 5) + v70;
  v73 = (unsigned int)v3 ^ v69 & (v71 ^ (unsigned int)v3);
  v74 = __ROL4__(v69, 30);
  v296 = __ROL4__(v330 ^ v17 ^ v31 ^ v285, 1);
  v75 = v65 + 1518500249 + v73 + __ROL4__(v72, 5) + v296;
  v76 = v72 ^ v74 ^ v71;
  v77 = __ROL4__(v72, 30);
  v286 = __ROL4__(v293 ^ v18 ^ v36 ^ v310, 1);
  v78 = (_DWORD)v3 + 1859775393 + v76 + __ROL4__(v75, 5) + v286;
  v79 = __ROL4__(v305 ^ v31 ^ v302 ^ v299, 1);
  v80 = v79 + 1859775393 + __ROL4__(v78, 5) + (v75 ^ v77 ^ v74) + v71;
  v81 = __ROL4__(v75, 30);
  v82 = v81 ^ v77 ^ v78;
  LODWORD(v3) = __ROL4__(v286 ^ v302 ^ v277 ^ v326, 1);
  v83 = __ROL4__(v296 ^ v36 ^ v282 ^ v322, 1);
  v84 = __ROL4__(v78, 30);
  v85 = v83 + __ROL4__(v80, 5) + 1859775393 + v82 + v74;
  v86 = v81 ^ v80 ^ v84;
  v87 = __ROL4__(v80, 30);
  v88 = (_DWORD)v3 + 1859775393 + __ROL4__(v85, 5) + v86 + v77;
  v89 = __ROL4__(v330 ^ v79 ^ v282 ^ v313, 1);
  v90 = v85 ^ v87 ^ v84;
  v91 = __ROL4__(v85, 30);
  v92 = v89 + __ROL4__(v88, 5) + 1859775393 + v90 + v81;
  v93 = v88 ^ v91 ^ v87;
  v290 = __ROL4__(v293 ^ v83 ^ v277 ^ v67, 1);
  v94 = __ROL4__(v88, 30);
  v95 = v290 + 1859775393 + __ROL4__(v92, 5) + v93 + v84;
  v308 = __ROL4__(v305 ^ (unsigned int)v3 ^ v313 ^ v310, 1);
  v96 = v308 + 1859775393 + __ROL4__(v95, 5) + (v92 ^ v94 ^ v91);
  v97 = __ROL4__(v92, 30);
  v98 = v96 + v87;
  v99 = v95;
  v100 = __ROL4__(v95, 30);
  v278 = __ROL4__(v296 ^ v89 ^ v67 ^ v299, 1);
  v101 = v278 + 1859775393 + __ROL4__(v98, 5) + (v97 ^ v94 ^ v99) + v91;
  v316 = __ROL4__(v286 ^ v290 ^ v310 ^ v322, 1);
  v102 = v98 ^ v100;
  v103 = __ROL4__(v98, 30);
  v104 = v316 + __ROL4__(v101, 5) + 1859775393 + (v97 ^ v102) + v94;
  v105 = v101 ^ v103 ^ v100;
  v303 = __ROL4__(v79 ^ v308 ^ v299 ^ v326, 1);
  v106 = __ROL4__(v101, 30);
  v107 = v303 + __ROL4__(v104, 5) + 1859775393 + v105 + v97;
  v108 = v104 ^ v106 ^ v103;
  v323 = __ROL4__(v330 ^ v83 ^ v278 ^ v322, 1);
  v109 = __ROL4__(v104, 30);
  v110 = v323 + 1859775393 + __ROL4__(v107, 5) + v108 + v100;
  v327 = __ROL4__(v293 ^ (unsigned int)v3 ^ v316 ^ v326, 1);
  v111 = v286;
  v112 = v107 ^ v109 ^ v106;
  v113 = __ROL4__(v107, 30);
  v114 = v327 + 1859775393 + __ROL4__(v110, 5) + v112 + v103;
  v115 = __ROL4__(v330 ^ v305 ^ v89 ^ v303, 1);
  v116 = v113 ^ v109 ^ v110;
  v117 = __ROL4__(v110, 30);
  v118 = v115 + __ROL4__(v114, 5) + 1859775393 + v116 + v106;
  v119 = v113 ^ v114 ^ v117;
  v331 = __ROL4__(v293 ^ v296 ^ v290 ^ v323, 1);
  v120 = __ROL4__(v114, 30);
  v121 = v331 + 1859775393 + __ROL4__(v118, 5) + v119 + v109;
  v122 = v278;
  v287 = __ROL4__(v305 ^ v286 ^ v308 ^ v327, 1);
  v123 = v118 ^ v120 ^ v117;
  v124 = __ROL4__(v118, 30);
  v125 = v287 + __ROL4__(v121, 5) + 1859775393 + v123 + v113;
  v279 = __ROL4__(v115 ^ v296 ^ v79 ^ v278, 1);
  v126 = v279 + 1859775393 + __ROL4__(v125, 5) + (v121 ^ v124 ^ v120) + v117;
  v127 = __ROL4__(v121, 30);
  v128 = v125 ^ v127 ^ v124;
  v311 = __ROL4__(v331 ^ v111 ^ v83 ^ v316, 1);
  v129 = __ROL4__(v125, 30);
  v130 = v311 + 1859775393 + __ROL4__(v126, 5) + v128 + v120;
  v131 = v126;
  v132 = __ROL4__(v126, 30);
  v314 = __ROL4__(v287 ^ v79 ^ (unsigned int)v3 ^ v303, 1);
  v133 = v314 + 1859775393 + __ROL4__(v130, 5) + (v129 ^ v127 ^ v131) + v124;
  v134 = v129 ^ v130 ^ v132;
  v283 = __ROL4__(v279 ^ v83 ^ v89 ^ v323, 1);
  v135 = __ROL4__(v130, 30);
  v136 = v283 + 1859775393 + __ROL4__(v133, 5) + v134 + v127;
  v297 = __ROL4__(v311 ^ (unsigned int)v3 ^ v290 ^ v327, 1);
  LODWORD(v3) = v133 ^ v135 ^ v132;
  v137 = __ROL4__(v133, 30);
  LODWORD(v3) = v129 + 1859775393 + v297 + __ROL4__(v136, 5) + (_DWORD)v3;
  v294 = __ROL4__(v115 ^ v314 ^ v89 ^ v308, 1);
  v138 = v331;
  v139 = v294 + (v136 & v137 | v135 & (v136 | v137));
  v140 = __ROL4__(v136, 30);
  v141 = v132 + v139 + __ROL4__((_DWORD)v3, 5) - 1894007588;
  v332 = __ROL4__(v331 ^ v283 ^ v290 ^ v122, 1);
  v142 = (unsigned int)v3 & v140 | v137 & ((unsigned int)v3 | v140);
  LODWORD(v3) = __ROL4__((_DWORD)v3, 30);
  v143 = v287;
  v144 = v135 + v332 + v142 + __ROL4__(v141, 5) - 1894007588;
  v300 = __ROL4__(v287 ^ v297 ^ v308 ^ v316, 1);
  v145 = (unsigned int)v3 | v141;
  v146 = (unsigned int)v3 & v141;
  v147 = __ROL4__(v141, 30);
  v148 = v300 + (v146 | v140 & v145);
  v149 = v294 ^ v122 ^ v303;
  v150 = v279;
  v151 = v137 + v148 + __ROL4__(v144, 5) - 1894007588;
  v280 = __ROL4__(v279 ^ v149, 1);
  v152 = v280 + (v144 & v147 | (unsigned int)v3 & (v144 | v147));
  v153 = __ROL4__(v144, 30);
  v154 = v140 + v152 + __ROL4__(v151, 5) - 1894007588;
  v291 = __ROL4__(v311 ^ v332 ^ v316 ^ v323, 1);
  LODWORD(v3) = (_DWORD)v3 + v291 + (v151 & v153 | v147 & (v151 | v153)) + __ROL4__(v154, 5) - 1894007588;
  v309 = __ROL4__(v314 ^ v300 ^ v303 ^ v327, 1);
  v155 = __ROL4__(v151, 30);
  v328 = __ROL4__(v138 ^ v297 ^ v291 ^ v327, 1);
  v156 = v153 & (v154 | v155);
  v157 = v154 & v155;
  v158 = __ROL4__(v154, 30);
  v159 = v147 + v309 + (v157 | v156) + __ROL4__((_DWORD)v3, 5) - 1894007588;
  v324 = __ROL4__(v115 ^ v283 ^ v280 ^ v323, 1);
  v160 = v324 + ((unsigned int)v3 & v158 | v155 & ((unsigned int)v3 | v158));
  LODWORD(v3) = __ROL4__((_DWORD)v3, 30);
  v161 = (unsigned int)v3 & v159;
  v162 = v153 + v160 + __ROL4__(v159, 5) - 1894007588;
  v163 = (unsigned int)v3 | v159;
  v164 = __ROL4__(v159, 30);
  v165 = v155 + v328 + (v161 | v158 & v163) + __ROL4__(v162, 5) - 1894007588;
  v288 = __ROL4__(v115 ^ v287 ^ v294 ^ v309, 1);
  v166 = v158 + v288 + (v162 & v164 | (unsigned int)v3 & (v162 | v164)) + __ROL4__(v165, 5) - 1894007588;
  v167 = v138 ^ v150 ^ v332 ^ v324;
  v168 = v311 ^ v283 ^ v291;
  v169 = __ROL4__(v162, 30);
  v170 = __ROL4__(v143 ^ v311 ^ v300 ^ v328, 1);
  v306 = __ROL4__(v167, 1);
  v171 = v165 & v169 | v164 & (v165 | v169);
  v172 = __ROL4__(v165, 30);
  v312 = __ROL4__(v288 ^ v150 ^ v314 ^ v280, 1);
  v173 = v166 & v172;
  LODWORD(v3) = (_DWORD)v3 + v306 + v171 + __ROL4__(v166, 5) - 1894007588;
  v304 = __ROL4__(v306 ^ v168, 1);
  v174 = v169 & (v166 | v172);
  v175 = __ROL4__(v166, 30);
  v176 = v164 + v170 + (v173 | v174) + __ROL4__((_DWORD)v3, 5) - 1894007588;
  v177 = (unsigned int)v3 & v175 | v172 & ((unsigned int)v3 | v175);
  LODWORD(v3) = __ROL4__((_DWORD)v3, 30);
  v178 = (unsigned int)v3 & v176;
  v179 = v169 + v312 + v177 + __ROL4__(v176, 5) - 1894007588;
  v180 = (unsigned int)v3 | v176;
  v181 = __ROL4__(v176, 30);
  v182 = v172 + v304 + (v178 | v175 & v180) + __ROL4__(v179, 5) - 1894007588;
  v183 = v294;
  v184 = v179 & v181 | (unsigned int)v3 & (v179 | v181);
  v185 = __ROL4__(v179, 30);
  v317 = __ROL4__(v170 ^ v314 ^ v297 ^ v309, 1);
  v186 = v317 + v184 - 1894007588 + v175;
  v295 = __ROL4__(v312 ^ v283 ^ v294 ^ v324, 1);
  v187 = v182 & v185 | v181 & (v182 | v185);
  v188 = __ROL4__(v182, 5) + v186;
  v189 = __ROL4__(v182, 30);
  v190 = (_DWORD)v3 - 1894007588 + v295 + v187 + __ROL4__(v188, 5);
  v191 = v188 & v189;
  v319 = __ROL4__(v304 ^ v297 ^ v332 ^ v328, 1);
  v192 = v185 & (v188 | v189);
  v193 = __ROL4__(v188, 30);
  LODWORD(v3) = v181 - 1894007588 + v319 + (v191 | v192) + __ROL4__(v190, 5);
  v194 = __ROL4__(v288 ^ v317 ^ v183 ^ v300, 1);
  v195 = v194 + (v190 & v193 | v189 & (v190 | v193));
  v196 = __ROL4__(v190, 30);
  v284 = v194;
  v197 = v185 + v195 + __ROL4__((_DWORD)v3, 5) - 1894007588;
  v333 = __ROL4__(v306 ^ v295 ^ v332 ^ v280, 1);
  v198 = v196 & (unsigned int)v3 | v193 & (v196 | (unsigned int)v3);
  LODWORD(v3) = __ROL4__((_DWORD)v3, 30);
  v199 = __ROL4__(v312 ^ v194 ^ v280 ^ v309, 1);
  v281 = __ROL4__(v170 ^ v319 ^ v300 ^ v291, 1);
  v200 = v189 + v333 + v198 + __ROL4__(v197, 5) - 1894007588;
  v301 = v199;
  v201 = v196 & (v197 | (unsigned int)v3);
  v298 = __ROL4__(v317 ^ v281 ^ v309 ^ v328, 1);
  v202 = v197 & (unsigned int)v3;
  v203 = __ROL4__(v197, 30);
  v204 = v202 | v201;
  v205 = v200 & v203;
  v206 = v193 + v281 + v204 + __ROL4__(v200, 5) - 1894007588;
  v207 = (unsigned int)v3 & (v200 | v203);
  v208 = __ROL4__(v200, 30);
  v209 = __ROL4__(v206, 5);
  v210 = v196 - 1894007588 + v199 + (v205 | v207);
  v211 = (v206 ^ v208 ^ v203) - 899497514;
  v212 = __ROL4__(v206, 30);
  v213 = v210 + v209;
  v292 = __ROL4__(v304 ^ v333 ^ v291 ^ v324, 1);
  v214 = (_DWORD)v3 + v292 + v211 + __ROL4__(v213, 5);
  v215 = v203 + v298 + (v213 ^ v212 ^ v208) + __ROL4__(v214, 5) - 899497514;
  v216 = __ROL4__(v213, 30);
  v217 = __ROL4__(v288 ^ v295 ^ v199 ^ v324, 1);
  v218 = v208 + v217 + (v216 ^ v212 ^ v214);
  v219 = __ROL4__(v214, 30);
  v325 = v217;
  v220 = v218 + __ROL4__(v215, 5) - 899497514;
  LODWORD(v3) = __ROL4__(v306 ^ v312 ^ v333 ^ v217, 1);
  v329 = __ROL4__(v306 ^ v319 ^ v292 ^ v328, 1);
  v221 = v216 ^ v215 ^ v219;
  v222 = __ROL4__(v215, 30);
  v223 = v212 + v329 + v221 + __ROL4__(v220, 5) - 899497514;
  v224 = __ROL4__(v170 ^ v304 ^ v281 ^ v329, 1);
  v289 = __ROL4__(v288 ^ v170 ^ v284 ^ v298, 1);
  v307 = (int)v3;
  v225 = v289 + (v220 ^ v222 ^ v219);
  v226 = __ROL4__(v220, 30);
  v227 = v216 + v225 + __ROL4__(v223, 5) - 899497514;
  v228 = (_DWORD)v3 + (v223 ^ v226 ^ v222);
  v229 = __ROL4__(v223, 30);
  v230 = v219 + v228 + __ROL4__(v227, 5) - 899497514;
  v231 = v222 + v224 + (v227 ^ v229 ^ v226) + __ROL4__(v230, 5) - 899497514;
  v232 = __ROL4__(v227, 30);
  v233 = v317;
  v234 = v232 ^ v229 ^ v230;
  v235 = __ROL4__(v230, 30);
  v236 = __ROL4__(v289 ^ v312 ^ v317 ^ v199, 1);
  v237 = v226 + v236 + v234 + __ROL4__(v231, 5) - 899497514;
  v318 = __ROL4__((unsigned int)v3 ^ v304 ^ v295 ^ v292, 1);
  v238 = v318 + (v232 ^ v231 ^ v235);
  v239 = __ROL4__(v231, 30);
  v240 = __ROL4__(v224 ^ v233 ^ v319 ^ v298, 1);
  v241 = __ROL4__(v236 ^ v295 ^ v284 ^ v325, 1);
  v242 = __ROL4__(v318 ^ v319 ^ v333 ^ v329, 1);
  v320 = v240;
  v243 = v229 + v238 + __ROL4__(v237, 5) - 899497514;
  v244 = (v237 ^ v239 ^ v235) - 899497514;
  v245 = __ROL4__(v237, 30);
  v246 = __ROL4__(v243, 5) + v240 + v244 + v232;
  v247 = v235 - 899497514 + v241 + (v243 ^ v245 ^ v239);
  v248 = __ROL4__(v243, 30);
  LODWORD(v3) = v247 + __ROL4__(v246, 5);
  v249 = v246 ^ v248 ^ v245;
  v250 = __ROL4__(v246, 30);
  v251 = v239 - 899497514 + v242 + v249 + __ROL4__((_DWORD)v3, 5);
  v252 = __ROL4__(v289 ^ v240 ^ v284 ^ v281, 1);
  v253 = v252 + (v250 ^ v248 ^ (unsigned int)v3);
  LODWORD(v3) = __ROL4__((_DWORD)v3, 30);
  v254 = __ROL4__(v307 ^ v241 ^ v333 ^ v301, 1);
  v255 = v245 - 899497514 + v253 + __ROL4__(v251, 5);
  v256 = __ROL4__(v224 ^ v242 ^ v281 ^ v292, 1);
  v257 = v250 ^ v251 ^ (unsigned int)v3;
  v258 = __ROL4__(v251, 30);
  v259 = v248 + v254 + v257 - 899497514 + __ROL4__(v255, 5);
  v260 = v256 + (v255 ^ v258 ^ (unsigned int)v3);
  v261 = __ROL4__(v255, 30);
  v262 = v250 - 899497514 + v260 + __ROL4__(v259, 5);
  v263 = (v259 ^ v261 ^ v258) - 899497514;
  v264 = __ROL4__(v259, 30);
  v265 = __ROL4__(v236 ^ v252 ^ v301 ^ v298, 1);
  v266 = __ROL4__(v318 ^ v254 ^ v292 ^ v325, 1);
  LODWORD(v3) = __ROL4__(v262, 5) + v265 + v263 + (_DWORD)v3;
  v267 = v266 + (v262 ^ v264 ^ v261);
  v268 = __ROL4__(v262, 30);
  v269 = v258 - 899497514 + v267 + __ROL4__((_DWORD)v3, 5);
  v270 = v268 ^ v264 ^ (unsigned int)v3;
  LODWORD(v3) = __ROL4__((_DWORD)v3, 30);
  v271 = v261 + v270 - 899497514 + __ROL4__(v269, 5) + __ROL4__(v320 ^ v256 ^ v298 ^ v329, 1);
  v272 = v269 ^ (unsigned int)v3;
  v273 = __ROL4__(v269, 30);
  a1[3] += v273;
  v274 = v264 - 899497514 + (v268 ^ v272) + __ROL4__(v271, 5) + __ROL4__(v289 ^ v241 ^ v325 ^ v265, 1);
  v275 = *a1 + (v271 ^ v273 ^ (unsigned int)v3);
  a1[1] += v274;
  a1[2] += __ROL4__(v271, 30);
  result = v275 + __ROL4__(v274, 5) + v268 + __ROL4__(v307 ^ v242 ^ v266 ^ v329, 1) - 899497514;
  a1[4] += (int)v3;
  *a1 = result;
  return result;
}
