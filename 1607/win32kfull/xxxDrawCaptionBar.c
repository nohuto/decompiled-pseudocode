/*
 * XREFs of xxxDrawCaptionBar @ 0x1C00AD500
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxRedrawTitle @ 0x1C00A0C90 (xxxRedrawTitle.c)
 *     xxxDWP_DoNCActivate @ 0x1C00AD2F8 (xxxDWP_DoNCActivate.c)
 *     xxxDrawWindowFrame @ 0x1C00AE488 (xxxDrawWindowFrame.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ClearHungFlag @ 0x1C00554FC (ClearHungFlag.c)
 *     GetResizeBorderWidth @ 0x1C00678DC (GetResizeBorderWidth.c)
 *     GetWindowFrameMetric @ 0x1C0067910 (GetWindowFrameMetric.c)
 *     DrawEdge @ 0x1C006E2BC (DrawEdge.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     GetAppCompatFlags2 @ 0x1C006F66C (GetAppCompatFlags2.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     NtGdiPatBlt @ 0x1C00942F0 (NtGdiPatBlt.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     IsVisible @ 0x1C00AE7B0 (IsVisible.c)
 *     GrePolyPatBlt @ 0x1C00AE914 (GrePolyPatBlt.c)
 *     xxxMNCanClose @ 0x1C00AEA0C (xxxMNCanClose.c)
 *     GetRect @ 0x1C00AFEE8 (GetRect.c)
 *     GetWindowBorders @ 0x1C00B0350 (GetWindowBorders.c)
 *     BitBltSysBmp @ 0x1C011D69C (BitBltSysBmp.c)
 *     IS_UI_LANGID @ 0x1C011D824 (IS_UI_LANGID.c)
 *     FixHDCBITSBmp @ 0x1C011D850 (FixHDCBITSBmp.c)
 *     DrawFrame @ 0x1C0123204 (DrawFrame.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     xxxDrawCaptionTemp @ 0x1C022FFA0 (xxxDrawCaptionTemp.c)
 */

char __fastcall xxxDrawCaptionBar(__int64 a1, HDC a2, unsigned int a3)
{
  __int16 v3; // bx
  HDC v4; // r12
  __int64 v5; // r13
  __int64 v6; // rax
  bool v7; // zf
  int v8; // ebx
  __int64 v9; // r15
  int v10; // eax
  int v11; // edx
  char v12; // cl
  int v13; // edx
  int WindowBorders; // r15d
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _DWORD *v27; // rsi
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _DWORD *v40; // rdx
  int v41; // ecx
  int WindowFrameMetric; // esi
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  int *v58; // rsi
  __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  _DWORD *v71; // rdx
  int v72; // ecx
  unsigned int v73; // r8d
  __int64 v74; // rdx
  unsigned __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  int v88; // ecx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  int v99; // ecx
  _DWORD *v100; // rsi
  __int64 v101; // rdx
  unsigned __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rdx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rdx
  __int64 v113; // r8
  __int64 v114; // r9
  int v115; // ecx
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // r9
  int v126; // ecx
  _DWORD *v127; // rcx
  __int64 v128; // rdx
  unsigned __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rdx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 v139; // rdx
  __int64 v140; // r8
  __int64 v141; // r9
  int v142; // ecx
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // rdx
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 v150; // rdx
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 v154; // rdx
  unsigned __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 v162; // rdx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // rdx
  __int64 v166; // r8
  __int64 v167; // r9
  int v168; // ecx
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // r8
  __int64 v172; // r9
  __int64 v173; // rdx
  __int64 v174; // r8
  __int64 v175; // r9
  __int64 v176; // rdx
  __int64 v177; // r8
  __int64 v178; // r9
  int v180; // eax
  __int64 v181; // rdx
  unsigned __int64 v182; // rcx
  __int64 v183; // r8
  __int64 v184; // r9
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // r8
  __int64 v188; // r9
  __int64 v189; // rdx
  __int64 v190; // r8
  __int64 v191; // r9
  __int64 v192; // rdx
  __int64 v193; // r8
  __int64 v194; // r9
  int v195; // ecx
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // r8
  __int64 v199; // r9
  __int64 v200; // rdx
  __int64 v201; // r8
  __int64 v202; // r9
  __int64 v203; // rdx
  __int64 v204; // r8
  __int64 v205; // r9
  int v206; // ecx
  _DWORD *v207; // rcx
  __int64 v208; // rdx
  unsigned __int64 v209; // rcx
  __int64 v210; // r8
  __int64 v211; // r9
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // r8
  __int64 v215; // r9
  __int64 v216; // rdx
  __int64 v217; // r8
  __int64 v218; // r9
  __int64 v219; // rdx
  __int64 v220; // r8
  __int64 v221; // r9
  int v222; // ecx
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 v225; // r8
  __int64 v226; // r9
  __int64 v227; // rdx
  __int64 v228; // r8
  __int64 v229; // r9
  __int64 v230; // rdx
  __int64 v231; // r8
  __int64 v232; // r9
  int v233; // ecx
  _DWORD *v234; // rsi
  __int64 v235; // rdx
  unsigned __int64 v236; // rcx
  __int64 v237; // r8
  __int64 v238; // r9
  __int64 v239; // rdx
  __int64 v240; // rcx
  __int64 v241; // r8
  __int64 v242; // r9
  __int64 v243; // rdx
  __int64 v244; // r8
  __int64 v245; // r9
  __int64 v246; // rdx
  __int64 v247; // r8
  __int64 v248; // r9
  int v249; // ecx
  __int64 v250; // rdx
  __int64 v251; // rcx
  __int64 v252; // r8
  __int64 v253; // r9
  __int64 v254; // rdx
  __int64 v255; // r8
  __int64 v256; // r9
  __int64 v257; // rdx
  __int64 v258; // r8
  __int64 v259; // r9
  int v260; // ecx
  _DWORD *v261; // rdx
  int v262; // eax
  int v263; // ecx
  __int64 v264; // rdx
  __int64 v265; // r8
  __int64 v266; // r9
  __int64 v267; // rdx
  __int64 v268; // r8
  __int64 v269; // r9
  __int64 v271; // rdx
  __int64 v272; // r8
  __int64 v273; // r9
  __int64 v274; // rdx
  __int64 v275; // r8
  __int64 v276; // r9
  int v277; // ecx
  __int64 v278; // rdx
  __int64 v279; // r8
  __int64 v280; // r9
  __int64 v281; // rdx
  __int64 v282; // r8
  __int64 v283; // r9
  __int64 v285; // rdx
  __int64 v286; // r8
  __int64 v287; // r9
  __int64 v288; // rdx
  __int64 v289; // r8
  __int64 v290; // r9
  int v291; // ecx
  __int64 v292; // rdx
  __int64 v293; // r8
  __int64 v294; // r9
  __int64 v295; // rdx
  __int64 v296; // r8
  __int64 v297; // r9
  __int64 v299; // rdx
  __int64 v300; // r8
  __int64 v301; // r9
  __int64 v302; // rdx
  __int64 v303; // r8
  __int64 v304; // r9
  int v305; // ecx
  __int64 v306; // rdx
  __int64 v307; // r8
  __int64 v308; // r9
  __int64 v309; // rdx
  __int64 v310; // r8
  __int64 v311; // r9
  __int64 v313; // rdx
  __int64 v314; // r8
  __int64 v315; // r9
  __int64 v316; // rdx
  __int64 v317; // r8
  __int64 v318; // r9
  int v319; // ecx
  __int64 v320; // rdx
  unsigned __int64 v321; // rcx
  __int64 v322; // r8
  __int64 v323; // r9
  __int64 v324; // rdx
  __int64 v325; // rcx
  __int64 v326; // r8
  __int64 v327; // r9
  __int64 v328; // rdx
  __int64 v329; // r8
  __int64 v330; // r9
  __int64 v331; // rdx
  __int64 v332; // r8
  __int64 v333; // r9
  int v334; // ecx
  __int64 v335; // rdx
  __int64 v336; // rcx
  __int64 v337; // r8
  __int64 v338; // r9
  __int64 v339; // rdx
  __int64 v340; // r8
  __int64 v341; // r9
  __int64 v342; // rdx
  __int64 v343; // r8
  __int64 v344; // r9
  int v345; // ecx
  _DWORD *v346; // rcx
  __int64 v347; // rdx
  unsigned __int64 v348; // rcx
  __int64 v349; // r8
  __int64 v350; // r9
  __int64 v351; // rdx
  __int64 v352; // rcx
  __int64 v353; // r8
  __int64 v354; // r9
  __int64 v355; // rdx
  __int64 v356; // r8
  __int64 v357; // r9
  __int64 v358; // rdx
  __int64 v359; // r8
  __int64 v360; // r9
  int v361; // ecx
  __int64 v362; // rdx
  __int64 v363; // rcx
  __int64 v364; // r8
  __int64 v365; // r9
  __int64 v366; // rdx
  __int64 v367; // r8
  __int64 v368; // r9
  __int64 v369; // rdx
  __int64 v370; // r8
  __int64 v371; // r9
  int v372; // ecx
  __int64 v373; // rdx
  unsigned __int64 v374; // rcx
  __int64 v375; // r8
  __int64 v376; // r9
  __int64 v377; // rdx
  __int64 v378; // rcx
  __int64 v379; // r8
  __int64 v380; // r9
  __int64 v381; // rdx
  __int64 v382; // r8
  __int64 v383; // r9
  __int64 v384; // rdx
  __int64 v385; // r8
  __int64 v386; // r9
  int v387; // ecx
  __int64 v388; // rdx
  __int64 v389; // rcx
  __int64 v390; // r8
  __int64 v391; // r9
  __int64 v392; // rdx
  __int64 v393; // r8
  __int64 v394; // r9
  __int64 v395; // rdx
  __int64 v396; // r8
  __int64 v397; // r9
  int v398; // ecx
  __int64 v399; // rcx
  _DWORD *v400; // rax
  unsigned __int8 v401; // r14
  int v402; // r12d
  __int64 v403; // rdx
  unsigned __int64 v404; // rcx
  __int64 v405; // r8
  __int64 v406; // r9
  __int64 v407; // rdx
  __int64 v408; // rcx
  __int64 v409; // r8
  __int64 v410; // r9
  __int64 v411; // rdx
  __int64 v412; // r8
  __int64 v413; // r9
  __int64 v414; // rdx
  __int64 v415; // r8
  __int64 v416; // r9
  int v417; // ecx
  __int64 v418; // rdx
  __int64 v419; // rcx
  __int64 v420; // r8
  __int64 v421; // r9
  __int64 v422; // rdx
  __int64 v423; // r8
  __int64 v424; // r9
  __int64 v425; // rdx
  __int64 v426; // r8
  __int64 v427; // r9
  int v428; // ecx
  _DWORD *v429; // rcx
  __int64 v430; // rdx
  unsigned __int64 v431; // rcx
  __int64 v432; // r8
  __int64 v433; // r9
  __int64 v434; // rdx
  __int64 v435; // rcx
  __int64 v436; // r8
  __int64 v437; // r9
  __int64 v438; // rdx
  __int64 v439; // r8
  __int64 v440; // r9
  __int64 v441; // rdx
  __int64 v442; // r8
  __int64 v443; // r9
  int v444; // ecx
  __int64 v445; // rdx
  __int64 v446; // rcx
  __int64 v447; // r8
  __int64 v448; // r9
  __int64 v449; // rdx
  __int64 v450; // r8
  __int64 v451; // r9
  __int64 v452; // rdx
  __int64 v453; // r8
  __int64 v454; // r9
  int v455; // ecx
  _DWORD *v456; // rcx
  __int64 v457; // rdx
  unsigned __int64 v458; // rcx
  __int64 v459; // r8
  __int64 v460; // r9
  __int64 v461; // rdx
  __int64 v462; // rcx
  __int64 v463; // r8
  __int64 v464; // r9
  __int64 v465; // rdx
  __int64 v466; // r8
  __int64 v467; // r9
  __int64 v468; // rdx
  __int64 v469; // r8
  __int64 v470; // r9
  int v471; // ecx
  __int64 v472; // rdx
  __int64 v473; // rcx
  __int64 v474; // r8
  __int64 v475; // r9
  __int64 v476; // rdx
  __int64 v477; // r8
  __int64 v478; // r9
  __int64 v479; // rdx
  __int64 v480; // r8
  __int64 v481; // r9
  int v482; // ecx
  __int64 v483; // rdx
  unsigned __int64 v484; // rcx
  __int64 v485; // r8
  __int64 v486; // r9
  __int64 v487; // rdx
  __int64 v488; // r8
  __int64 v489; // r9
  __int64 v490; // rcx
  int v491; // ecx
  __int64 v492; // rdx
  __int64 v493; // rcx
  __int64 v494; // r8
  __int64 v495; // r9
  __int64 v496; // rdx
  __int64 v497; // r8
  __int64 v498; // r9
  int v499; // ecx
  _DWORD *v500; // rcx
  __int64 v501; // rdx
  __int64 v502; // rcx
  __int64 v503; // r8
  __int64 v504; // r9
  __int64 v505; // rdx
  __int64 v506; // r8
  __int64 v507; // r9
  __int64 v508; // rdx
  __int64 v509; // r8
  __int64 v510; // r9
  int v511; // ecx
  __int64 v512; // rdx
  __int64 v513; // rcx
  __int64 v514; // r8
  __int64 v515; // r9
  __int64 v516; // rdx
  __int64 v517; // r8
  __int64 v518; // r9
  __int64 v519; // rdx
  __int64 v520; // r8
  __int64 v521; // r9
  int v522; // ecx
  _DWORD *v523; // rcx
  __int64 v524; // rdx
  unsigned __int64 v525; // rcx
  __int64 v526; // r8
  __int64 v527; // r9
  int v528; // r15d
  __int64 v529; // rdx
  __int64 v530; // r8
  __int64 v531; // r9
  __int64 v532; // rcx
  int v533; // ecx
  __int64 v534; // rdx
  __int64 v535; // rcx
  __int64 v536; // r8
  __int64 v537; // r9
  __int64 v538; // rdx
  __int64 v539; // r8
  __int64 v540; // r9
  int v541; // ecx
  _DWORD *v542; // rcx
  __int64 v543; // rdx
  __int64 v544; // rcx
  __int64 v545; // r8
  __int64 v546; // r9
  __int64 v547; // rdx
  __int64 v548; // r8
  __int64 v549; // r9
  __int64 v550; // rdx
  __int64 v551; // r8
  __int64 v552; // r9
  int v553; // ecx
  __int64 v554; // rdx
  __int64 v555; // rcx
  __int64 v556; // r8
  __int64 v557; // r9
  __int64 v558; // rdx
  __int64 v559; // r8
  __int64 v560; // r9
  __int64 v561; // rdx
  __int64 v562; // r8
  __int64 v563; // r9
  int v564; // ecx
  int *v565; // rcx
  int v566; // r14d
  unsigned int v567; // r8d
  __int64 v568; // rax
  __int64 v569; // rcx
  __int64 v570; // rdx
  __int64 v571; // r8
  __int64 v572; // r9
  __int64 v573; // rcx
  __int64 v574; // rdx
  __int64 v575; // r8
  __int64 v576; // r9
  unsigned int v577; // r12d
  __int64 v578; // rcx
  int v579; // ecx
  __int64 v580; // rdx
  __int64 v581; // rcx
  __int64 v582; // r8
  __int64 v583; // r9
  __int64 v584; // rdx
  __int64 v585; // r8
  __int64 v586; // r9
  int v587; // ecx
  _DWORD *v588; // rcx
  __int64 v589; // rdx
  __int64 v590; // rcx
  __int64 v591; // r8
  __int64 v592; // r9
  __int64 v593; // rdx
  __int64 v594; // r8
  __int64 v595; // r9
  __int64 v596; // rdx
  __int64 v597; // r8
  __int64 v598; // r9
  int v599; // ecx
  __int64 v600; // rdx
  __int64 v601; // rcx
  __int64 v602; // r8
  __int64 v603; // r9
  __int64 v604; // rdx
  __int64 v605; // r8
  __int64 v606; // r9
  __int64 v607; // rdx
  __int64 v608; // r8
  __int64 v609; // r9
  int v610; // ecx
  int *v611; // rcx
  unsigned int v612; // r9d
  __int64 v613; // rax
  __int64 v614; // rcx
  unsigned int v615; // r8d
  __int64 v616; // rax
  __int64 v617; // rcx
  __int64 v618; // rdx
  __int64 v619; // rcx
  __int64 v620; // r8
  __int64 v621; // r9
  __int64 v622; // rdx
  __int64 v623; // r8
  __int64 v624; // r9
  __int64 v625; // rcx
  int v626; // ecx
  __int64 v627; // rdx
  __int64 v628; // rcx
  __int64 v629; // r8
  __int64 v630; // r9
  __int64 v631; // rdx
  __int64 v632; // r8
  __int64 v633; // r9
  int v634; // ecx
  _DWORD *v635; // rcx
  __int64 v636; // rdx
  __int64 v637; // rcx
  __int64 v638; // r8
  __int64 v639; // r9
  __int64 v640; // rdx
  __int64 v641; // r8
  __int64 v642; // r9
  __int64 v643; // rdx
  __int64 v644; // r8
  __int64 v645; // r9
  int v646; // ecx
  __int64 v647; // rdx
  __int64 v648; // rcx
  __int64 v649; // r8
  __int64 v650; // r9
  __int64 v651; // rdx
  __int64 v652; // r8
  __int64 v653; // r9
  __int64 v654; // rdx
  __int64 v655; // r8
  __int64 v656; // r9
  int v657; // ecx
  int *v658; // rcx
  __int64 v659; // rdx
  __int64 v660; // r8
  __int64 v661; // r9
  __int64 v662; // rcx
  int v663; // ecx
  __int64 v664; // rdx
  __int64 v665; // rcx
  __int64 v666; // r8
  __int64 v667; // r9
  __int64 v668; // rdx
  __int64 v669; // r8
  __int64 v670; // r9
  int v671; // ecx
  _DWORD *v672; // rcx
  __int64 v673; // rdx
  __int64 v674; // rcx
  __int64 v675; // r8
  __int64 v676; // r9
  __int64 v677; // rdx
  __int64 v678; // r8
  __int64 v679; // r9
  __int64 v680; // rdx
  __int64 v681; // r8
  __int64 v682; // r9
  int v683; // ecx
  __int64 v684; // rdx
  __int64 v685; // rcx
  __int64 v686; // r8
  __int64 v687; // r9
  __int64 v688; // rdx
  __int64 v689; // r8
  __int64 v690; // r9
  __int64 v691; // rdx
  __int64 v692; // r8
  __int64 v693; // r9
  int v694; // ecx
  int *v695; // rcx
  __int64 v696; // rax
  __int64 v697; // rax
  __int64 v698; // rdx
  __int64 v699; // r8
  __int64 v700; // r9
  __int64 v701; // rcx
  int v702; // ecx
  __int64 v703; // rdx
  __int64 v704; // rcx
  __int64 v705; // r8
  __int64 v706; // r9
  __int64 v707; // rdx
  __int64 v708; // r8
  __int64 v709; // r9
  int v710; // ecx
  _DWORD *v711; // rcx
  __int64 v712; // rdx
  __int64 v713; // rcx
  __int64 v714; // r8
  __int64 v715; // r9
  __int64 v716; // rdx
  __int64 v717; // r8
  __int64 v718; // r9
  __int64 v719; // rdx
  __int64 v720; // r8
  __int64 v721; // r9
  int v722; // ecx
  __int64 v723; // rdx
  __int64 v724; // rcx
  __int64 v725; // r8
  __int64 v726; // r9
  __int64 v727; // rdx
  __int64 v728; // r8
  __int64 v729; // r9
  __int64 v730; // rdx
  __int64 v731; // r8
  __int64 v732; // r9
  int v733; // ecx
  _DWORD *v734; // rcx
  __int64 v735; // rdx
  unsigned __int64 v736; // rcx
  __int64 v737; // r8
  __int64 v738; // r9
  __int64 v739; // rdx
  __int64 v740; // r8
  __int64 v741; // r9
  __int64 v742; // rcx
  int v743; // ecx
  __int64 v744; // rdx
  __int64 v745; // rcx
  __int64 v746; // r8
  __int64 v747; // r9
  __int64 v748; // rdx
  __int64 v749; // r8
  __int64 v750; // r9
  int v751; // ecx
  _DWORD *v752; // rcx
  __int64 v753; // rdx
  unsigned __int64 v754; // rcx
  __int64 v755; // r8
  __int64 v756; // r9
  __int64 v757; // rcx
  int v758; // ecx
  __int64 v759; // rdx
  __int64 v760; // rcx
  __int64 v761; // r8
  __int64 v762; // r9
  __int64 v763; // rdx
  __int64 v764; // r8
  __int64 v765; // r9
  int v766; // ecx
  int v767; // r12d
  __int64 v768; // rdx
  __int64 v769; // r8
  __int64 v770; // r9
  __int64 v771; // rcx
  int v772; // ecx
  __int64 v773; // rdx
  __int64 v774; // rcx
  __int64 v775; // r8
  __int64 v776; // r9
  __int64 v777; // rdx
  __int64 v778; // r8
  __int64 v779; // r9
  int v780; // ecx
  _DWORD *v781; // rcx
  __int64 v782; // rdx
  __int64 v783; // r8
  __int64 v784; // r9
  __int64 v785; // rcx
  int v786; // ecx
  __int64 v787; // rdx
  __int64 v788; // rcx
  __int64 v789; // r8
  __int64 v790; // r9
  __int64 v791; // rdx
  __int64 v792; // r8
  __int64 v793; // r9
  int v794; // ecx
  _DWORD *v795; // rcx
  __int64 v796; // rdx
  __int64 v797; // rcx
  __int64 v798; // r8
  __int64 v799; // r9
  __int64 v800; // rdx
  __int64 v801; // r8
  __int64 v802; // r9
  __int64 v803; // rdx
  __int64 v804; // r8
  __int64 v805; // r9
  int v806; // ecx
  __int64 v807; // rdx
  __int64 v808; // rcx
  __int64 v809; // r8
  __int64 v810; // r9
  __int64 v811; // rdx
  __int64 v812; // r8
  __int64 v813; // r9
  __int64 v814; // rdx
  __int64 v815; // r8
  __int64 v816; // r9
  int v817; // ecx
  int *v818; // rcx
  HDC v819; // rbx
  _DWORD *v820; // rsi
  __int64 v821; // rax
  __int64 v822; // rax
  __int64 v823; // rdx
  unsigned __int64 v824; // rcx
  __int64 v825; // r8
  __int64 v826; // r9
  __int64 v827; // rdx
  __int64 v828; // rcx
  __int64 v829; // r8
  __int64 v830; // r9
  __int64 v831; // rdx
  __int64 v832; // r8
  __int64 v833; // r9
  __int64 v834; // rdx
  __int64 v835; // r8
  __int64 v836; // r9
  int v837; // ecx
  __int64 v838; // rdx
  __int64 v839; // rcx
  __int64 v840; // r8
  __int64 v841; // r9
  __int64 v842; // rdx
  __int64 v843; // r8
  __int64 v844; // r9
  __int64 v845; // rdx
  __int64 v846; // r8
  __int64 v847; // r9
  int v848; // ecx
  _DWORD *v849; // rsi
  __int64 v850; // rdx
  unsigned __int64 v851; // rcx
  __int64 v852; // r8
  __int64 v853; // r9
  __int64 v854; // rdx
  __int64 v855; // rcx
  __int64 v856; // r8
  __int64 v857; // r9
  __int64 v858; // rdx
  __int64 v859; // r8
  __int64 v860; // r9
  __int64 v861; // rdx
  __int64 v862; // r8
  __int64 v863; // r9
  int v864; // ecx
  __int64 v865; // rdx
  __int64 v866; // rcx
  __int64 v867; // r8
  __int64 v868; // r9
  __int64 v869; // rdx
  __int64 v870; // r8
  __int64 v871; // r9
  __int64 v872; // rdx
  __int64 v873; // r8
  __int64 v874; // r9
  int v875; // ecx
  _DWORD *v876; // rcx
  int v877; // r14d
  int v878; // esi
  __int64 v879; // rdx
  unsigned __int64 v880; // rcx
  __int64 v881; // r8
  __int64 v882; // r9
  __int64 v883; // rdx
  __int64 v884; // rcx
  __int64 v885; // r8
  __int64 v886; // r9
  __int64 v887; // rdx
  __int64 v888; // r8
  __int64 v889; // r9
  __int64 v890; // rdx
  __int64 v891; // r8
  __int64 v892; // r9
  int v893; // ecx
  __int64 v894; // rdx
  __int64 v895; // rcx
  __int64 v896; // r8
  __int64 v897; // r9
  __int64 v898; // rdx
  __int64 v899; // r8
  __int64 v900; // r9
  __int64 v901; // rdx
  __int64 v902; // r8
  __int64 v903; // r9
  int v904; // ecx
  _DWORD *v905; // rcx
  __int64 v906; // rdx
  __int64 v907; // rcx
  __int64 v908; // r8
  __int64 v909; // r9
  __int64 v910; // rdx
  __int64 v911; // rcx
  __int64 v912; // r8
  __int64 v913; // r9
  __int64 v914; // rdx
  __int64 v915; // r8
  __int64 v916; // r9
  __int64 v917; // rdx
  __int64 v918; // r8
  __int64 v919; // r9
  int v920; // ecx
  __int64 v921; // rdx
  __int64 v922; // rcx
  __int64 v923; // r8
  __int64 v924; // r9
  __int64 v925; // rdx
  __int64 v926; // r8
  __int64 v927; // r9
  __int64 v928; // rdx
  __int64 v929; // r8
  __int64 v930; // r9
  int v931; // ecx
  _DWORD *v932; // rcx
  __int64 v933; // rdx
  __int64 v934; // rcx
  __int64 v935; // r8
  __int64 v936; // r9
  __int64 v937; // rdx
  __int64 v938; // rcx
  __int64 v939; // r8
  __int64 v940; // r9
  __int64 v941; // rdx
  __int64 v942; // r8
  __int64 v943; // r9
  __int64 v944; // rdx
  __int64 v945; // r8
  __int64 v946; // r9
  int v947; // ecx
  __int64 v948; // rdx
  __int64 v949; // rcx
  __int64 v950; // r8
  __int64 v951; // r9
  __int64 v952; // rdx
  __int64 v953; // r8
  __int64 v954; // r9
  __int64 v955; // rdx
  __int64 v956; // r8
  __int64 v957; // r9
  int v958; // ecx
  _DWORD *v959; // rsi
  __int64 v960; // rdx
  unsigned __int64 v961; // rcx
  __int64 v962; // r8
  __int64 v963; // r9
  __int64 v964; // rdx
  __int64 v965; // r8
  __int64 v966; // r9
  __int64 v967; // rcx
  int v968; // ecx
  __int64 v969; // rdx
  __int64 v970; // rcx
  __int64 v971; // r8
  __int64 v972; // r9
  __int64 v973; // rdx
  __int64 v974; // r8
  __int64 v975; // r9
  int v976; // ecx
  _DWORD *v977; // rcx
  __int64 v978; // rcx
  __int64 v979; // rdx
  __int64 v980; // rcx
  __int64 v981; // r8
  __int64 v982; // r9
  __int64 v983; // rdx
  __int64 v984; // rcx
  __int64 v985; // r8
  __int64 v986; // r9
  __int64 v987; // rdx
  __int64 v988; // r8
  __int64 v989; // r9
  _DWORD *v990; // rsi
  __int64 v991; // rdx
  __int64 v992; // rcx
  __int64 v993; // r8
  __int64 v994; // r9
  __int64 v995; // rdx
  __int64 v996; // r8
  __int64 v997; // r9
  __int64 v998; // rdx
  __int64 v999; // r8
  __int64 v1000; // r9
  int v1001; // ecx
  __int64 v1002; // rdx
  __int64 v1003; // rcx
  __int64 v1004; // r8
  __int64 v1005; // r9
  __int64 v1006; // rdx
  __int64 v1007; // r8
  __int64 v1008; // r9
  __int64 v1009; // rdx
  __int64 v1010; // r8
  __int64 v1011; // r9
  int v1012; // ecx
  int *v1013; // r8
  __int64 v1014; // rdx
  __int64 v1015; // rcx
  __int64 v1016; // r8
  __int64 v1017; // r9
  __int64 v1018; // rdx
  __int64 v1019; // rcx
  __int64 v1020; // r8
  __int64 v1021; // r9
  __int64 v1022; // rdx
  __int64 v1023; // rcx
  __int64 v1024; // r8
  __int64 v1025; // r9
  __int64 v1026; // rdx
  __int64 v1027; // r8
  __int64 v1028; // r9
  __int64 v1029; // rax
  __int64 v1030; // rdx
  __int64 v1031; // rcx
  __int64 v1032; // r8
  __int64 v1033; // r9
  __int64 v1034; // rdx
  __int64 v1035; // rcx
  __int64 v1036; // r8
  __int64 v1037; // r9
  __int64 v1038; // rdx
  __int64 v1039; // r8
  __int64 v1040; // r9
  _DWORD *v1041; // r13
  __int64 v1042; // rdx
  __int64 v1043; // rcx
  __int64 v1044; // r8
  __int64 v1045; // r9
  __int64 v1046; // rdx
  __int64 v1047; // rcx
  __int64 v1048; // r8
  __int64 v1049; // r9
  __int64 v1050; // rdx
  __int64 v1051; // r8
  __int64 v1052; // r9
  _DWORD *v1053; // r12
  __int64 v1054; // rdx
  __int64 v1055; // rcx
  __int64 v1056; // r8
  __int64 v1057; // r9
  __int64 v1058; // rdx
  __int64 v1059; // rcx
  __int64 v1060; // r8
  __int64 v1061; // r9
  __int64 v1062; // rdx
  __int64 v1063; // r8
  __int64 v1064; // r9
  _DWORD *v1065; // r15
  __int64 v1066; // rdx
  __int64 v1067; // rcx
  __int64 v1068; // r8
  __int64 v1069; // r9
  __int64 v1070; // rdx
  __int64 v1071; // rcx
  __int64 v1072; // r8
  __int64 v1073; // r9
  __int64 v1074; // rdx
  __int64 v1075; // r8
  __int64 v1076; // r9
  _DWORD *v1077; // r14
  __int64 v1078; // rdx
  __int64 v1079; // rcx
  __int64 v1080; // r8
  __int64 v1081; // r9
  __int64 v1082; // rdx
  __int64 v1083; // r8
  __int64 v1084; // r9
  __int64 v1085; // rdx
  __int64 v1086; // r8
  __int64 v1087; // r9
  int v1088; // ecx
  __int64 v1089; // rdx
  __int64 v1090; // rcx
  __int64 v1091; // r8
  __int64 v1092; // r9
  __int64 v1093; // rdx
  __int64 v1094; // r8
  __int64 v1095; // r9
  __int64 v1096; // rdx
  __int64 v1097; // r8
  __int64 v1098; // r9
  int v1099; // ecx
  BOOL v1100; // ecx
  unsigned int v1102; // [rsp+60h] [rbp-A0h]
  int v1104; // [rsp+70h] [rbp-90h]
  int v1105; // [rsp+70h] [rbp-90h]
  int v1108; // [rsp+84h] [rbp-7Ch]
  int v1109; // [rsp+84h] [rbp-7Ch]
  int v1110; // [rsp+84h] [rbp-7Ch]
  int v1111; // [rsp+88h] [rbp-78h]
  _DWORD *v1112; // [rsp+88h] [rbp-78h]
  __int64 v1113; // [rsp+90h] [rbp-70h]
  _DWORD *v1114; // [rsp+90h] [rbp-70h]
  int v1115; // [rsp+98h] [rbp-68h]
  int v1116; // [rsp+9Ch] [rbp-64h]
  __int64 v1117; // [rsp+A0h] [rbp-60h]
  _DWORD v1118[4]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v1119; // [rsp+B8h] [rbp-48h]
  _DWORD v1120[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v1121; // [rsp+D0h] [rbp-30h]
  LONG right; // [rsp+D8h] [rbp-28h]
  int v1123; // [rsp+DCh] [rbp-24h]
  int v1124; // [rsp+E0h] [rbp-20h]
  int v1125; // [rsp+E4h] [rbp-1Ch]
  __int64 v1126; // [rsp+E8h] [rbp-18h]
  RECT v1127; // [rsp+F0h] [rbp-10h] BYREF

  v3 = a3;
  v4 = a2;
  v1111 = 0;
  v5 = a1;
  v1117 = 0LL;
  if ( (a3 & 0x800) == 0 )
  {
    LODWORD(v6) = IsVisible(a1);
    if ( !(_DWORD)v6 )
      return v6;
  }
  ClearHungFlag((struct tagWND *)a1, 0x310u);
  GetRect(v5, &v1127, 34LL);
  if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010 )
  {
    v1116 = 0;
    v1115 = v3 & 1;
    if ( (v3 & 1) != 0 )
      v9 = *(_QWORD *)(gpsi + 5104LL);
    else
      v9 = *(_QWORD *)(gpsi + 5112LL);
  }
  else
  {
    v8 = v3 & 1;
    v7 = v8 == 0;
    v1116 = 1;
    v1115 = v8;
    v3 = a3;
    if ( v7 )
      v9 = *(_QWORD *)(gpsi + 5312LL);
    else
      v9 = *(_QWORD *)(gpsi + 5304LL);
  }
  v1113 = v9;
  v10 = xxxMNCanClose(v5);
  v11 = 0;
  if ( !v10 )
    v11 = 16;
  v12 = *(_BYTE *)(v5 + 54);
  v1102 = v11;
  if ( (v12 & 1) == 0 )
  {
    v11 |= 8u;
LABEL_11:
    v1102 = v11;
    goto LABEL_12;
  }
  if ( (*(_BYTE *)(v5 + 55) & 1) != 0 )
  {
    v11 |= 2u;
    goto LABEL_11;
  }
LABEL_12:
  if ( (v12 & 2) != 0 )
  {
    if ( (*(_BYTE *)(v5 + 55) & 0x20) == 0 )
      goto LABEL_15;
    v13 = v11 | 1;
  }
  else
  {
    v13 = v11 | 4;
  }
  v1102 = v13;
  if ( (*(_BYTE *)(v5 + 55) & 0x20) == 0 )
  {
LABEL_15:
    if ( (*(_BYTE *)(v5 + 49) & 3) == 0 || (v1104 = 15, (*(_BYTE *)(v5 + 44) & 8) != 0) )
      v1104 = 6;
    if ( (a3 & 0x8000) == 0 )
    {
      WindowBorders = GetWindowBorders(*(unsigned int *)(v5 + 52), *(unsigned int *)(v5 + 48));
      if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17, v18) & 0xF) == 0 )
        {
LABEL_217:
          v27 = (_DWORD *)(gpsi + 2292LL);
          goto LABEL_22;
        }
      }
      else if ( IsDPIDWMSysMet(v16)
             && (W32GetCurrentThreadDpiAwarenessContext(v20, v19, v21, v22) & 0xF) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v292, v293, v294) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v295,
                                                      v296,
                                                      v297)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_217;
      }
      if ( IsDPIDWMSysMet(6uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v24, v23, v25, v26) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v299, v300, v301) + 408)
          ? (v305 = 0)
          : (v305 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v302,
                                                          v303,
                                                          v304)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v305) )
      {
        v27 = (_DWORD *)(gpsi + 2680LL);
        v5 = a1;
      }
      else
      {
        v27 = (_DWORD *)(gpsi + 1904LL);
      }
LABEL_22:
      if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v29, v28, v30, v31) & 0xF) == 0 )
        {
LABEL_231:
          v40 = (_DWORD *)(gpsi + 2288LL);
LABEL_26:
          v41 = WindowBorders * *v27;
          LODWORD(v6) = -(WindowBorders * *v40);
          v1127.left += WindowBorders * *v40;
          v1127.right += v6;
          v1127.top += v41;
          goto LABEL_27;
        }
      }
      else if ( IsDPIDWMSysMet(v29)
             && (W32GetCurrentThreadDpiAwarenessContext(v33, v32, v34, v35) & 0xF) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v306, v307, v308) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v309,
                                                      v310,
                                                      v311)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_231;
      }
      if ( IsDPIDWMSysMet(5uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v37, v36, v38, v39) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v313, v314, v315) + 408)
          ? (v319 = 0)
          : (v319 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v316,
                                                          v317,
                                                          v318)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v319) )
      {
        v40 = (_DWORD *)(gpsi + 2676LL);
      }
      else
      {
        v40 = (_DWORD *)(gpsi + 1900LL);
      }
      goto LABEL_26;
    }
    WindowFrameMetric = GetWindowFrameMetric();
    if ( (*(_BYTE *)(v5 + 49) & 1) != 0 )
    {
      v73 = 5;
    }
    else
    {
      if ( (*(_BYTE *)(v5 + 50) & 2) == 0 )
      {
LABEL_32:
        LOBYTE(v6) = *(_BYTE *)(v5 + 54);
        if ( (v6 & 4) == 0 )
        {
          if ( WindowFrameMetric <= 0
            || (v45 = *(unsigned int *)(a1 + 52),
                LOBYTE(v6) = (v45 & 0x40000) == 0,
                (((*(_DWORD *)(a1 + 52) & 0xC00000) != 12582912) & (unsigned __int8)v6) != 0)
            || (LODWORD(v6) = GetAppCompatFlags2(0x9900u, v45, v43, v44), (v6 & 0x30000000) != 0) )
          {
LABEL_35:
            if ( (*(_BYTE *)(a1 + 54) & 0xC0) == 0 && (*(_BYTE *)(a1 + 48) & 1) == 0 )
            {
              v5 = a1;
LABEL_27:
              if ( (*(_BYTE *)(v5 + 40) & 8) == 0 )
                return v6;
              if ( *(char *)(v5 + 48) < 0 )
              {
                v1102 |= 0x20u;
                if ( (unsigned int)IsDPIAbsoluteSysMet(0x35uLL) )
                {
                  if ( (W32GetCurrentThreadDpiAwarenessContext(v321, v320, v322, v323) & 0xF) != 0 )
                    goto LABEL_241;
                }
                else if ( !IsDPIDWMSysMet(v321)
                       || (W32GetCurrentThreadDpiAwarenessContext(v336, v335, v337, v338) & 0xF) != 0
                       || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v339, v340, v341) + 408)
                         ? (v345 = 0)
                         : (v345 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                         (__int64)KeGetCurrentThread(),
                                                                         v342,
                                                                         v343,
                                                                         v344)
                                                                     + 408)
                                                         + 8LL)
                                             + 244LL) & 1),
                           !v345) )
                {
LABEL_241:
                  if ( IsDPIDWMSysMet(0x35uLL)
                    && (W32GetCurrentThreadDpiAwarenessContext(v325, v324, v326, v327) & 0xF) == 1
                    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v328, v329, v330) + 408)
                      ? (v334 = 0)
                      : (v334 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                      (__int64)KeGetCurrentThread(),
                                                                      v331,
                                                                      v332,
                                                                      v333)
                                                                  + 408)
                                                      + 8LL)
                                          + 244LL) & 1),
                        v334) )
                  {
                    v346 = (_DWORD *)(gpsi + 2868LL);
                  }
                  else
                  {
                    v346 = (_DWORD *)(gpsi + 2092LL);
                  }
                  goto LABEL_256;
                }
                v346 = (_DWORD *)(gpsi + 2480LL);
LABEL_256:
                v1111 = 41;
                goto LABEL_274;
              }
              if ( (unsigned int)IsDPIAbsoluteSysMet(0x1FuLL) )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v348, v347, v349, v350) & 0xF) != 0 )
                  goto LABEL_259;
              }
              else if ( !IsDPIDWMSysMet(v348)
                     || (W32GetCurrentThreadDpiAwarenessContext(v363, v362, v364, v365) & 0xF) != 0
                     || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v366, v367, v368) + 408)
                       ? (v372 = 0)
                       : (v372 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                       (__int64)KeGetCurrentThread(),
                                                                       v369,
                                                                       v370,
                                                                       v371)
                                                                   + 408)
                                                       + 8LL)
                                           + 244LL) & 1),
                         !v372) )
              {
LABEL_259:
                if ( IsDPIDWMSysMet(0x1FuLL)
                  && (W32GetCurrentThreadDpiAwarenessContext(v352, v351, v353, v354) & 0xF) == 1
                  && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v355, v356, v357) + 408)
                    ? (v361 = 0)
                    : (v361 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                    (__int64)KeGetCurrentThread(),
                                                                    v358,
                                                                    v359,
                                                                    v360)
                                                                + 408)
                                                    + 8LL)
                                        + 244LL) & 1),
                      v361) )
                {
                  v346 = (_DWORD *)(gpsi + 2780LL);
                }
                else
                {
                  v346 = (_DWORD *)(gpsi + 2004LL);
                }
LABEL_274:
                v1127.bottom = v1127.top + *v346;
                v1118[1] = v1127.bottom;
                v1118[0] = v1127.left;
                v1118[2] = v1127.right - v1127.left;
                if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
                {
                  if ( (W32GetCurrentThreadDpiAwarenessContext(v374, v373, v375, v376) & 0xF) != 0 )
                    goto LABEL_276;
                }
                else if ( !IsDPIDWMSysMet(v374)
                       || (W32GetCurrentThreadDpiAwarenessContext(v389, v388, v390, v391) & 0xF) != 0
                       || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v392, v393, v394) + 408)
                         ? (v398 = 0)
                         : (v398 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                         (__int64)KeGetCurrentThread(),
                                                                         v395,
                                                                         v396,
                                                                         v397)
                                                                     + 408)
                                                         + 8LL)
                                             + 244LL) & 1),
                           !v398) )
                {
LABEL_276:
                  if ( IsDPIDWMSysMet(6uLL)
                    && (W32GetCurrentThreadDpiAwarenessContext(v378, v377, v379, v380) & 0xF) == 1
                    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v381, v382, v383) + 408)
                      ? (v387 = 0)
                      : (v387 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                      (__int64)KeGetCurrentThread(),
                                                                      v384,
                                                                      v385,
                                                                      v386)
                                                                  + 408)
                                                      + 8LL)
                                          + 244LL) & 1),
                        v387) )
                  {
                    v399 = gpsi;
                    v400 = (_DWORD *)(gpsi + 2680LL);
                  }
                  else
                  {
                    v399 = gpsi;
                    v400 = (_DWORD *)(gpsi + 1904LL);
                  }
                  goto LABEL_291;
                }
                v399 = gpsi;
                v400 = (_DWORD *)(gpsi + 2292LL);
LABEL_291:
                v1118[3] = *v400;
                v1119 = *(_QWORD *)(v399 + 8LL * v1104 + 5088);
                GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)v1118, 1u);
                LOBYTE(v6) = GreSelectBrush(a2, v1113);
                goto LABEL_292;
              }
              v346 = (_DWORD *)(gpsi + 2392LL);
              goto LABEL_274;
            }
            DrawFrame(a2);
            if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v47, v46, v48, v49) & 0xF) == 0 )
              {
LABEL_189:
                v58 = (int *)(gpsi + 2292LL);
                goto LABEL_40;
              }
            }
            else if ( IsDPIDWMSysMet(v47)
                   && (W32GetCurrentThreadDpiAwarenessContext(v51, v50, v52, v53) & 0xF) == 0
                   && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v264, v265, v266) + 408)
                   && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v267,
                                                            v268,
                                                            v269)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1 )
            {
              goto LABEL_189;
            }
            if ( IsDPIDWMSysMet(6uLL)
              && (W32GetCurrentThreadDpiAwarenessContext(v55, v54, v56, v57) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v271, v272, v273) + 408)
                ? (v277 = 0)
                : (v277 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v274,
                                                                v275,
                                                                v276)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v277) )
            {
              v58 = (int *)(gpsi + 2680LL);
            }
            else
            {
              v58 = (int *)(gpsi + 1904LL);
            }
LABEL_40:
            if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v60, v59, v61, v62) & 0xF) == 0 )
              {
LABEL_203:
                v71 = (_DWORD *)(gpsi + 2288LL);
LABEL_44:
                v72 = *v58;
                LODWORD(v6) = -*v71;
                v1127.left += *v71;
                v1127.right += v6;
                v1127.top += v72;
                v5 = a1;
                goto LABEL_27;
              }
            }
            else if ( IsDPIDWMSysMet(v60)
                   && (W32GetCurrentThreadDpiAwarenessContext(v64, v63, v65, v66) & 0xF) == 0
                   && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v278, v279, v280) + 408)
                   && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v281,
                                                            v282,
                                                            v283)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1 )
            {
              goto LABEL_203;
            }
            if ( IsDPIDWMSysMet(5uLL)
              && (W32GetCurrentThreadDpiAwarenessContext(v68, v67, v69, v70) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v285, v286, v287) + 408)
                ? (v291 = 0)
                : (v291 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v288,
                                                                v289,
                                                                v290)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v291) )
            {
              v71 = (_DWORD *)(gpsi + 2676LL);
            }
            else
            {
              v71 = (_DWORD *)(gpsi + 1900LL);
            }
            goto LABEL_44;
          }
        }
        v1108 = WindowFrameMetric + GetResizeBorderWidth();
        DrawFrame(a2);
        if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v209, v208, v210, v211) & 0xF) != 0 )
            goto LABEL_149;
        }
        else if ( !IsDPIDWMSysMet(v209)
               || (W32GetCurrentThreadDpiAwarenessContext(v224, v223, v225, v226) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v227, v228, v229) + 408)
                 ? (v233 = 0)
                 : (v233 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v230,
                                                                 v231,
                                                                 v232)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v233) )
        {
LABEL_149:
          if ( IsDPIDWMSysMet(6uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v213, v212, v214, v215) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v216, v217, v218) + 408)
              ? (v222 = 0)
              : (v222 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v219,
                                                              v220,
                                                              v221)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v222) )
          {
            v234 = (_DWORD *)(gpsi + 2680LL);
          }
          else
          {
            v234 = (_DWORD *)(gpsi + 1904LL);
          }
LABEL_164:
          if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v236, v235, v237, v238) & 0xF) != 0 )
              goto LABEL_166;
          }
          else if ( !IsDPIDWMSysMet(v236)
                 || (W32GetCurrentThreadDpiAwarenessContext(v251, v250, v252, v253) & 0xF) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v254, v255, v256) + 408)
                   ? (v260 = 0)
                   : (v260 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                   (__int64)KeGetCurrentThread(),
                                                                   v257,
                                                                   v258,
                                                                   v259)
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                     !v260) )
          {
LABEL_166:
            if ( IsDPIDWMSysMet(5uLL)
              && (W32GetCurrentThreadDpiAwarenessContext(v240, v239, v241, v242) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v243, v244, v245) + 408)
                ? (v249 = 0)
                : (v249 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v246,
                                                                v247,
                                                                v248)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v249) )
            {
              v261 = (_DWORD *)(gpsi + 2676LL);
            }
            else
            {
              v261 = (_DWORD *)(gpsi + 1900LL);
            }
            goto LABEL_181;
          }
          v261 = (_DWORD *)(gpsi + 2288LL);
LABEL_181:
          v262 = v1108 * *v261;
          v263 = -(v1108 * *v234);
          v1127.top += v1108 * *v234;
          LODWORD(v6) = -v262;
          v1127.left -= v6;
          v1127.right += v6;
          v1127.bottom += v263;
          goto LABEL_35;
        }
        v234 = (_DWORD *)(gpsi + 2292LL);
        goto LABEL_164;
      }
      v73 = 2;
    }
    DrawEdge(v4, &v1127, v73, 0x200Fu);
    goto LABEL_32;
  }
  if ( v3 < 0 )
  {
    DrawEdge(v4, &v1127, 5u, 0x200Fu);
    DrawFrame(v4);
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v75, v74, v76, v77) & 0xF) != 0 )
        goto LABEL_62;
    }
    else if ( !IsDPIDWMSysMet(v75)
           || (W32GetCurrentThreadDpiAwarenessContext(v90, v89, v91, v92) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v93, v94, v95) + 408)
             ? (v99 = 0)
             : (v99 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v96,
                                                            v97,
                                                            v98)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v99) )
    {
LABEL_62:
      if ( IsDPIDWMSysMet(6uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v79, v78, v80, v81) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v82, v83, v84) + 408)
          ? (v88 = 0)
          : (v88 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v85,
                                                         v86,
                                                         v87)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v88) )
      {
        v100 = (_DWORD *)(gpsi + 2680LL);
        v5 = a1;
      }
      else
      {
        v100 = (_DWORD *)(gpsi + 1904LL);
      }
LABEL_77:
      if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v102, v101, v103, v104) & 0xF) != 0 )
          goto LABEL_79;
      }
      else if ( !IsDPIDWMSysMet(v102)
             || (W32GetCurrentThreadDpiAwarenessContext(v117, v116, v118, v119) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v120, v121, v122) + 408)
               ? (v126 = 0)
               : (v126 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v123,
                                                               v124,
                                                               v125)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v126) )
      {
LABEL_79:
        if ( IsDPIDWMSysMet(5uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v106, v105, v107, v108) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v109, v110, v111) + 408)
            ? (v115 = 0)
            : (v115 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v112,
                                                            v113,
                                                            v114)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v115) )
        {
          v127 = (_DWORD *)(gpsi + 2676LL);
        }
        else
        {
          v127 = (_DWORD *)(gpsi + 1900LL);
        }
        goto LABEL_128;
      }
      v127 = (_DWORD *)(gpsi + 2288LL);
      goto LABEL_128;
    }
    v100 = (_DWORD *)(gpsi + 2292LL);
    v4 = a2;
    goto LABEL_77;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v129, v128, v130, v131) & 0xF) != 0 )
      goto LABEL_96;
LABEL_106:
    v100 = (_DWORD *)(gpsi + 2300LL);
    goto LABEL_111;
  }
  if ( IsDPIDWMSysMet(v129)
    && (W32GetCurrentThreadDpiAwarenessContext(v144, v143, v145, v146) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v147, v148, v149) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v150, v151, v152) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_106;
  }
LABEL_96:
  if ( IsDPIDWMSysMet(8uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v133, v132, v134, v135) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v136, v137, v138) + 408)
      ? (v142 = 0)
      : (v142 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v139,
                                                      v140,
                                                      v141)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v142) )
  {
    v100 = (_DWORD *)(gpsi + 2688LL);
  }
  else
  {
    v100 = (_DWORD *)(gpsi + 1912LL);
  }
LABEL_111:
  if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v155, v154, v156, v157) & 0xF) != 0 )
      goto LABEL_113;
LABEL_123:
    v127 = (_DWORD *)(gpsi + 2296LL);
    goto LABEL_128;
  }
  if ( IsDPIDWMSysMet(v155)
    && (W32GetCurrentThreadDpiAwarenessContext(v170, v169, v171, v172) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v173, v174, v175) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v176, v177, v178) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_123;
  }
LABEL_113:
  if ( IsDPIDWMSysMet(7uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v159, v158, v160, v161) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v162, v163, v164) + 408)
      ? (v168 = 0)
      : (v168 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v165,
                                                      v166,
                                                      v167)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v168) )
  {
    v127 = (_DWORD *)(gpsi + 2684LL);
  }
  else
  {
    v127 = (_DWORD *)(gpsi + 1908LL);
  }
LABEL_128:
  v180 = -*v127;
  v1127.left += *v127;
  v1127.right += v180;
  v1127.top += *v100;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x1FuLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v182, v181, v183, v184) & 0xF) != 0 )
      goto LABEL_130;
  }
  else if ( !IsDPIDWMSysMet(v182)
         || (W32GetCurrentThreadDpiAwarenessContext(v197, v196, v198, v199) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v200, v201, v202) + 408)
           ? (v206 = 0)
           : (v206 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v203,
                                                           v204,
                                                           v205)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
             !v206) )
  {
LABEL_130:
    if ( IsDPIDWMSysMet(0x1FuLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v186, v185, v187, v188) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v189, v190, v191) + 408)
        ? (v195 = 0)
        : (v195 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v192,
                                                        v193,
                                                        v194)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1),
          v195) )
    {
      v207 = (_DWORD *)(gpsi + 2780LL);
    }
    else
    {
      v207 = (_DWORD *)(gpsi + 2004LL);
    }
    goto LABEL_145;
  }
  v207 = (_DWORD *)(gpsi + 2392LL);
LABEL_145:
  v1127.bottom = v1127.top + *v207;
  v6 = GreSelectBrush(v4, v9);
  v1117 = v6;
LABEL_292:
  if ( (*(_BYTE *)(v5 + 54) & 8) != 0 || (*(_BYTE *)(v5 + 45) & 2) == 0 )
  {
    v402 = 1;
    if ( (a3 & 0x1000) == 0 )
    {
      v401 = v1102;
      if ( !v1102 || (v1102 & 0xC) != 12 && (v1102 & 0x20) == 0 )
      {
        v402 = 3;
        goto LABEL_319;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v404, v403, v405, v406) & 0xF) != 0 )
          goto LABEL_300;
      }
      else if ( !IsDPIDWMSysMet(v404)
             || (W32GetCurrentThreadDpiAwarenessContext(v419, v418, v420, v421) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v422, v423, v424) + 408)
               ? (v428 = 0)
               : (v428 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v425,
                                                               v426,
                                                               v427)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v428) )
      {
LABEL_300:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v408, v407, v409, v410) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v411, v412, v413) + 408)
            ? (v417 = 0)
            : (v417 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v414,
                                                            v415,
                                                            v416)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v417) )
        {
          v429 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v429 = (_DWORD *)(gpsi + 2060LL);
        }
LABEL_315:
        v1127.right -= *v429;
        if ( v1102 == 12 && (*(_BYTE *)(v5 + 49) & 4) != 0 )
          v402 = 2;
LABEL_319:
        if ( (v1102 & 0x20) != 0 )
        {
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x34uLL) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v431, v430, v432, v433) & 0xF) != 0 )
              goto LABEL_322;
          }
          else if ( !IsDPIDWMSysMet(v431)
                 || (W32GetCurrentThreadDpiAwarenessContext(v446, v445, v447, v448) & 0xF) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v449, v450, v451) + 408)
                   ? (v455 = 0)
                   : (v455 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                   (__int64)KeGetCurrentThread(),
                                                                   v452,
                                                                   v453,
                                                                   v454)
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                     !v455) )
          {
LABEL_322:
            if ( IsDPIDWMSysMet(0x34uLL)
              && (W32GetCurrentThreadDpiAwarenessContext(v435, v434, v436, v437) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v438, v439, v440) + 408)
                ? (v444 = 0)
                : (v444 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v441,
                                                                v442,
                                                                v443)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v444) )
            {
              v456 = (_DWORD *)(gpsi + 2864LL);
            }
            else
            {
              v456 = (_DWORD *)(gpsi + 2088LL);
            }
            goto LABEL_354;
          }
          v456 = (_DWORD *)(gpsi + 2476LL);
LABEL_354:
          LODWORD(v6) = *v456;
          v1127.right -= *v456 * v402;
          goto LABEL_947;
        }
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x1EuLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v458, v457, v459, v460) & 0xF) != 0 )
            goto LABEL_339;
        }
        else if ( !IsDPIDWMSysMet(v458)
               || (W32GetCurrentThreadDpiAwarenessContext(v473, v472, v474, v475) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v476, v477, v478) + 408)
                 ? (v482 = 0)
                 : (v482 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v479,
                                                                 v480,
                                                                 v481)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v482) )
        {
LABEL_339:
          if ( IsDPIDWMSysMet(0x1EuLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v462, v461, v463, v464) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v465, v466, v467) + 408)
              ? (v471 = 0)
              : (v471 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v468,
                                                              v469,
                                                              v470)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v471) )
          {
            v456 = (_DWORD *)(gpsi + 2776LL);
          }
          else
          {
            v456 = (_DWORD *)(gpsi + 2000LL);
          }
          goto LABEL_354;
        }
        v456 = (_DWORD *)(gpsi + 2388LL);
        goto LABEL_354;
      }
      v429 = (_DWORD *)(gpsi + 2448LL);
      goto LABEL_315;
    }
    if ( v1102 && v1102 != 12 )
    {
      v1109 = IsDPIAbsoluteSysMet(0x2EuLL);
      if ( v1109 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v484, v483, v485, v486) & 0xF) != 0 )
          goto LABEL_359;
      }
      else if ( !IsDPIDWMSysMet(v484)
             || (W32GetCurrentThreadDpiAwarenessContext(v493, v492, v494, v495) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v496, v497, v498) + 408)
               ? (v499 = 0)
               : (v499 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v487,
                                                               v488,
                                                               v489)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v499) )
      {
LABEL_359:
        if ( IsDPIDWMSysMet(0x2EuLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v490, v487, v488, v489) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v487, v488, v489) + 408)
            ? (v491 = 0)
            : (v491 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v487,
                                                            v488,
                                                            v489)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v491) )
        {
          v500 = (_DWORD *)(gpsi + 2840LL);
        }
        else
        {
          v500 = (_DWORD *)(gpsi + 2064LL);
        }
LABEL_374:
        v1127.top += *v500;
        if ( v1109 )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v500, v487, v488, v489) & 0xF) != 0 )
            goto LABEL_376;
        }
        else if ( !IsDPIDWMSysMet(0x2EuLL)
               || (W32GetCurrentThreadDpiAwarenessContext(v513, v512, v514, v515) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v516, v517, v518) + 408)
                 ? (v522 = 0)
                 : (v522 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v519,
                                                                 v520,
                                                                 v521)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v522) )
        {
LABEL_376:
          if ( IsDPIDWMSysMet(0x2EuLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v502, v501, v503, v504) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v505, v506, v507) + 408)
              ? (v511 = 0)
              : (v511 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v508,
                                                              v509,
                                                              v510)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v511) )
          {
            v523 = (_DWORD *)(gpsi + 2840LL);
          }
          else
          {
            v523 = (_DWORD *)(gpsi + 2064LL);
          }
LABEL_391:
          v1127.bottom -= *v523;
          v528 = IsDPIAbsoluteSysMet(0x2DuLL);
          if ( v528 )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v525, v524, v526, v527) & 0xF) != 0 )
              goto LABEL_393;
          }
          else if ( !IsDPIDWMSysMet(v525)
                 || (W32GetCurrentThreadDpiAwarenessContext(v535, v534, v536, v537) & 0xF) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v538, v539, v540) + 408)
                   ? (v541 = 0)
                   : (v541 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                   (__int64)KeGetCurrentThread(),
                                                                   v529,
                                                                   v530,
                                                                   v531)
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                     !v541) )
          {
LABEL_393:
            if ( IsDPIDWMSysMet(0x2DuLL)
              && (W32GetCurrentThreadDpiAwarenessContext(v532, v529, v530, v531) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v529, v530, v531) + 408)
                ? (v533 = 0)
                : (v533 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v529,
                                                                v530,
                                                                v531)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v533) )
            {
              v542 = (_DWORD *)(gpsi + 2836LL);
            }
            else
            {
              v542 = (_DWORD *)(gpsi + 2060LL);
            }
LABEL_408:
            v1127.right -= *v542;
            if ( v528 )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v542, v529, v530, v531) & 0xF) != 0 )
                goto LABEL_410;
            }
            else if ( !IsDPIDWMSysMet(0x2DuLL)
                   || (W32GetCurrentThreadDpiAwarenessContext(v555, v554, v556, v557) & 0xF) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v558, v559, v560) + 408)
                     ? (v564 = 0)
                     : (v564 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                     (__int64)KeGetCurrentThread(),
                                                                     v561,
                                                                     v562,
                                                                     v563)
                                                                 + 408)
                                                     + 8LL)
                                         + 244LL) & 1),
                       !v564) )
            {
LABEL_410:
              if ( IsDPIDWMSysMet(0x2DuLL)
                && (W32GetCurrentThreadDpiAwarenessContext(v544, v543, v545, v546) & 0xF) == 1
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v547, v548, v549) + 408)
                  ? (v553 = 0)
                  : (v553 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                  (__int64)KeGetCurrentThread(),
                                                                  v550,
                                                                  v551,
                                                                  v552)
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                    v553) )
              {
                v565 = (int *)(gpsi + 2836LL);
              }
              else
              {
                v565 = (int *)(gpsi + 2060LL);
              }
LABEL_425:
              v566 = v1127.bottom - v1127.top;
              NtGdiPatBlt(a2, v1127.right, v1127.top, *v565, v1127.bottom - v1127.top, 15728673);
              v567 = v1111;
              if ( (v1102 & 0x10) != 0 )
                v567 = v1111 + 3;
              if ( (*(_DWORD *)(a1 + 352) & 0xF) != 0
                || (v568 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
                || (*(_DWORD *)(*(_QWORD *)(v568 + 8) + 244LL) & 1) == 0
                || *(_WORD *)(gpsi + 8678LL) == 96 )
              {
                v569 = gpsi + 5652LL;
              }
              else
              {
                v569 = gpsi + 7140LL;
              }
              v1127.right -= *(_DWORD *)(v569 + 16LL * v567 + 8);
              BitBltSysBmp(a2);
              v573 = v1102;
              if ( (v1102 & 0x20) != 0 || (v1102 & 0xC) == 0xC )
              {
LABEL_522:
                if ( (v573 & 0x1C) == 0 || (v1102 & 0x20) != 0 || (*(_BYTE *)(a1 + 49) & 4) == 0 )
                  goto LABEL_566;
                if ( v528 )
                {
                  if ( (W32GetCurrentThreadDpiAwarenessContext(v573, v570, v571, v572) & 0xF) != 0 )
                    goto LABEL_527;
                }
                else if ( !IsDPIDWMSysMet(0x2DuLL)
                       || (W32GetCurrentThreadDpiAwarenessContext(v665, v664, v666, v667) & 0xF) != 0
                       || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v668, v669, v670) + 408)
                         ? (v671 = 0)
                         : (v671 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                         (__int64)KeGetCurrentThread(),
                                                                         v659,
                                                                         v660,
                                                                         v661)
                                                                     + 408)
                                                         + 8LL)
                                             + 244LL) & 1),
                           !v671) )
                {
LABEL_527:
                  if ( IsDPIDWMSysMet(0x2DuLL)
                    && (W32GetCurrentThreadDpiAwarenessContext(v662, v659, v660, v661) & 0xF) == 1
                    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v659, v660, v661) + 408)
                      ? (v663 = 0)
                      : (v663 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                      (__int64)KeGetCurrentThread(),
                                                                      v659,
                                                                      v660,
                                                                      v661)
                                                                  + 408)
                                                      + 8LL)
                                          + 244LL) & 1),
                        v663) )
                  {
                    v672 = (_DWORD *)(gpsi + 2836LL);
                  }
                  else
                  {
                    v672 = (_DWORD *)(gpsi + 2060LL);
                  }
LABEL_542:
                  v1127.right -= *v672;
                  if ( v528 )
                  {
                    if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v672, v659, v660, v661) & 0xF) != 0 )
                      goto LABEL_544;
                  }
                  else if ( !IsDPIDWMSysMet(0x2DuLL)
                         || (W32GetCurrentThreadDpiAwarenessContext(v685, v684, v686, v687) & 0xF) != 0
                         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v688, v689, v690) + 408)
                           ? (v694 = 0)
                           : (v694 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                           (__int64)KeGetCurrentThread(),
                                                                           v691,
                                                                           v692,
                                                                           v693)
                                                                       + 408)
                                                           + 8LL)
                                               + 244LL) & 1),
                             !v694) )
                  {
LABEL_544:
                    if ( IsDPIDWMSysMet(0x2DuLL)
                      && (W32GetCurrentThreadDpiAwarenessContext(v674, v673, v675, v676) & 0xF) == 1
                      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v677, v678, v679) + 408)
                        ? (v683 = 0)
                        : (v683 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                        (__int64)KeGetCurrentThread(),
                                                                        v680,
                                                                        v681,
                                                                        v682)
                                                                    + 408)
                                                        + 8LL)
                                            + 244LL) & 1),
                          v683) )
                    {
                      v695 = (int *)(gpsi + 2836LL);
                    }
                    else
                    {
                      v695 = (int *)(gpsi + 2060LL);
                    }
                    goto LABEL_559;
                  }
                  v695 = (int *)(gpsi + 2448LL);
LABEL_559:
                  NtGdiPatBlt(a2, v1127.right, v1127.top, *v695, v566, 15728673);
                  if ( (*(_DWORD *)(a1 + 352) & 0xF) != 0
                    || (v696 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
                    || (*(_DWORD *)(*(_QWORD *)(v696 + 8) + 244LL) & 1) == 0
                    || *(_WORD *)(gpsi + 8678LL) == 96 )
                  {
                    v697 = gpsi + 5652LL;
                  }
                  else
                  {
                    v697 = gpsi + 7140LL;
                  }
                  v1127.right -= *(_DWORD *)(v697 + 184);
                  BitBltSysBmp(a2);
                  ++v402;
LABEL_566:
                  if ( v1109 )
                  {
                    if ( (W32GetCurrentThreadDpiAwarenessContext(v573, v570, v571, v572) & 0xF) != 0 )
                      goto LABEL_568;
                  }
                  else if ( !IsDPIDWMSysMet(0x2EuLL)
                         || (W32GetCurrentThreadDpiAwarenessContext(v704, v703, v705, v706) & 0xF) != 0
                         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v707, v708, v709) + 408)
                           ? (v710 = 0)
                           : (v710 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                           (__int64)KeGetCurrentThread(),
                                                                           v698,
                                                                           v699,
                                                                           v700)
                                                                       + 408)
                                                           + 8LL)
                                               + 244LL) & 1),
                             !v710) )
                  {
LABEL_568:
                    if ( IsDPIDWMSysMet(0x2EuLL)
                      && (W32GetCurrentThreadDpiAwarenessContext(v701, v698, v699, v700) & 0xF) == 1
                      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v698, v699, v700) + 408)
                        ? (v702 = 0)
                        : (v702 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                        (__int64)KeGetCurrentThread(),
                                                                        v698,
                                                                        v699,
                                                                        v700)
                                                                    + 408)
                                                        + 8LL)
                                            + 244LL) & 1),
                          v702) )
                    {
                      v711 = (_DWORD *)(gpsi + 2840LL);
                    }
                    else
                    {
                      v711 = (_DWORD *)(gpsi + 2064LL);
                    }
LABEL_583:
                    v1127.top -= *v711;
                    if ( v1109 )
                    {
                      if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v711, v698, v699, v700) & 0xF) != 0 )
                        goto LABEL_585;
                    }
                    else if ( !IsDPIDWMSysMet(0x2EuLL)
                           || (W32GetCurrentThreadDpiAwarenessContext(v724, v723, v725, v726) & 0xF) != 0
                           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v727, v728, v729)
                                          + 408)
                             ? (v733 = 0)
                             : (v733 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                             (__int64)KeGetCurrentThread(),
                                                                             v730,
                                                                             v731,
                                                                             v732)
                                                                         + 408)
                                                             + 8LL)
                                                 + 244LL) & 1),
                               !v733) )
                    {
LABEL_585:
                      if ( IsDPIDWMSysMet(0x2EuLL)
                        && (W32GetCurrentThreadDpiAwarenessContext(v713, v712, v714, v715) & 0xF) == 1
                        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v716, v717, v718) + 408)
                          ? (v722 = 0)
                          : (v722 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                          (__int64)KeGetCurrentThread(),
                                                                          v719,
                                                                          v720,
                                                                          v721)
                                                                      + 408)
                                                          + 8LL)
                                              + 244LL) & 1),
                            v722) )
                      {
                        v734 = (_DWORD *)(gpsi + 2840LL);
                      }
                      else
                      {
                        v734 = (_DWORD *)(gpsi + 2064LL);
                      }
LABEL_600:
                      v1127.bottom += *v734;
                      if ( (v1102 & 0x20) != 0 )
                      {
                        if ( (unsigned int)IsDPIAbsoluteSysMet(0x34uLL) )
                        {
                          if ( (W32GetCurrentThreadDpiAwarenessContext(v736, v735, v737, v738) & 0xF) != 0 )
                            goto LABEL_603;
                        }
                        else if ( !IsDPIDWMSysMet(v736)
                               || (W32GetCurrentThreadDpiAwarenessContext(v745, v744, v746, v747) & 0xF) != 0
                               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v748, v749, v750)
                                              + 408)
                                 ? (v751 = 0)
                                 : (v751 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                                 (__int64)KeGetCurrentThread(),
                                                                                 v739,
                                                                                 v740,
                                                                                 v741)
                                                                             + 408)
                                                                 + 8LL)
                                                     + 244LL) & 1),
                                   !v751) )
                        {
LABEL_603:
                          if ( IsDPIDWMSysMet(0x34uLL)
                            && (W32GetCurrentThreadDpiAwarenessContext(v742, v739, v740, v741) & 0xF) == 1
                            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v739, v740, v741)
                                           + 408)
                              ? (v743 = 0)
                              : (v743 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                              (__int64)KeGetCurrentThread(),
                                                                              v739,
                                                                              v740,
                                                                              v741)
                                                                          + 408)
                                                              + 8LL)
                                                  + 244LL) & 1),
                                v743) )
                          {
                            v752 = (_DWORD *)(gpsi + 2864LL);
                          }
                          else
                          {
                            v752 = (_DWORD *)(gpsi + 2088LL);
                          }
                          goto LABEL_635;
                        }
                        v752 = (_DWORD *)(gpsi + 2476LL);
                        goto LABEL_635;
                      }
                      if ( (unsigned int)IsDPIAbsoluteSysMet(0x1EuLL) )
                      {
                        if ( (W32GetCurrentThreadDpiAwarenessContext(v754, v753, v755, v756) & 0xF) != 0 )
                          goto LABEL_620;
                      }
                      else if ( !IsDPIDWMSysMet(v754)
                             || (W32GetCurrentThreadDpiAwarenessContext(v760, v759, v761, v762) & 0xF) != 0
                             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v763, v764, v765)
                                            + 408)
                               ? (v766 = 0)
                               : (v766 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                               (__int64)KeGetCurrentThread(),
                                                                               v739,
                                                                               v740,
                                                                               v741)
                                                                           + 408)
                                                               + 8LL)
                                                   + 244LL) & 1),
                                 !v766) )
                      {
LABEL_620:
                        if ( IsDPIDWMSysMet(0x1EuLL)
                          && (W32GetCurrentThreadDpiAwarenessContext(v757, v739, v740, v741) & 0xF) == 1
                          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v739, v740, v741) + 408)
                            ? (v758 = 0)
                            : (v758 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                            (__int64)KeGetCurrentThread(),
                                                                            v739,
                                                                            v740,
                                                                            v741)
                                                                        + 408)
                                                            + 8LL)
                                                + 244LL) & 1),
                              v758) )
                        {
                          v752 = (_DWORD *)(gpsi + 2776LL);
                        }
                        else
                        {
                          v752 = (_DWORD *)(gpsi + 2000LL);
                        }
LABEL_635:
                        v767 = *v752 * v402;
                        v1120[0] = v1127.right;
                        v1120[1] = v1127.top;
                        v1120[2] = v767;
                        if ( v1109 )
                        {
                          if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v752, v739, v740, v741) & 0xF) != 0 )
                            goto LABEL_637;
                        }
                        else if ( !IsDPIDWMSysMet(0x2EuLL)
                               || (W32GetCurrentThreadDpiAwarenessContext(v774, v773, v775, v776) & 0xF) != 0
                               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v777, v778, v779)
                                              + 408)
                                 ? (v780 = 0)
                                 : (v780 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                                 (__int64)KeGetCurrentThread(),
                                                                                 v768,
                                                                                 v769,
                                                                                 v770)
                                                                             + 408)
                                                                 + 8LL)
                                                     + 244LL) & 1),
                                   !v780) )
                        {
LABEL_637:
                          if ( IsDPIDWMSysMet(0x2EuLL)
                            && (W32GetCurrentThreadDpiAwarenessContext(v771, v768, v769, v770) & 0xF) == 1
                            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v768, v769, v770)
                                           + 408)
                              ? (v772 = 0)
                              : (v772 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                              (__int64)KeGetCurrentThread(),
                                                                              v768,
                                                                              v769,
                                                                              v770)
                                                                          + 408)
                                                              + 8LL)
                                                  + 244LL) & 1),
                                v772) )
                          {
                            v781 = (_DWORD *)(gpsi + 2840LL);
                          }
                          else
                          {
                            v781 = (_DWORD *)(gpsi + 2064LL);
                          }
LABEL_652:
                          v1120[3] = *v781;
                          right = v1127.right;
                          v1121 = 0LL;
                          if ( v1109 )
                          {
                            if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v781, v768, v769, v770) & 0xF) != 0 )
                              goto LABEL_654;
                          }
                          else if ( !IsDPIDWMSysMet(0x2EuLL)
                                 || (W32GetCurrentThreadDpiAwarenessContext(v788, v787, v789, v790) & 0xF) != 0
                                 || (!*(_QWORD *)(W32GetThreadWin32Thread(
                                                    (__int64)KeGetCurrentThread(),
                                                    v791,
                                                    v792,
                                                    v793)
                                                + 408)
                                   ? (v794 = 0)
                                   : (v794 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                                   (__int64)KeGetCurrentThread(),
                                                                                   v782,
                                                                                   v783,
                                                                                   v784)
                                                                               + 408)
                                                                   + 8LL)
                                                       + 244LL) & 1),
                                     !v794) )
                          {
LABEL_654:
                            if ( IsDPIDWMSysMet(0x2EuLL)
                              && (W32GetCurrentThreadDpiAwarenessContext(v785, v782, v783, v784) & 0xF) == 1
                              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v782, v783, v784)
                                             + 408)
                                ? (v786 = 0)
                                : (v786 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                                (__int64)KeGetCurrentThread(),
                                                                                v782,
                                                                                v783,
                                                                                v784)
                                                                            + 408)
                                                                + 8LL)
                                                    + 244LL) & 1),
                                  v786) )
                            {
                              v795 = (_DWORD *)(gpsi + 2840LL);
                            }
                            else
                            {
                              v795 = (_DWORD *)(gpsi + 2064LL);
                            }
LABEL_669:
                            v1123 = v1127.bottom - *v795;
                            v1124 = v767;
                            if ( v1109 )
                            {
                              if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v795, v782, v783, v784) & 0xF) != 0 )
                                goto LABEL_671;
                            }
                            else if ( !IsDPIDWMSysMet(0x2EuLL)
                                   || (W32GetCurrentThreadDpiAwarenessContext(v808, v807, v809, v810) & 0xF) != 0
                                   || (!*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v811,
                                                      v812,
                                                      v813)
                                                  + 408)
                                     ? (v817 = 0)
                                     : (v817 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                                     (__int64)KeGetCurrentThread(),
                                                                                     v814,
                                                                                     v815,
                                                                                     v816)
                                                                                 + 408)
                                                                     + 8LL)
                                                         + 244LL) & 1),
                                       !v817) )
                            {
LABEL_671:
                              if ( IsDPIDWMSysMet(0x2EuLL)
                                && (W32GetCurrentThreadDpiAwarenessContext(v797, v796, v798, v799) & 0xF) == 1
                                && (!*(_QWORD *)(W32GetThreadWin32Thread(
                                                   (__int64)KeGetCurrentThread(),
                                                   v800,
                                                   v801,
                                                   v802)
                                               + 408)
                                  ? (v806 = 0)
                                  : (v806 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                                  (__int64)KeGetCurrentThread(),
                                                                                  v803,
                                                                                  v804,
                                                                                  v805)
                                                                              + 408)
                                                                  + 8LL)
                                                      + 244LL) & 1),
                                    v806) )
                              {
                                v818 = (int *)(gpsi + 2840LL);
                              }
                              else
                              {
                                v818 = (int *)(gpsi + 2064LL);
                              }
LABEL_686:
                              v819 = a2;
                              v1125 = *v818;
                              v1126 = 0LL;
                              GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)v1120, 2u);
                              LOBYTE(v6) = v1117;
                              if ( v1117 )
                                LOBYTE(v6) = GreSelectBrush(a2, v1117);
                              goto LABEL_690;
                            }
                            v818 = (int *)(gpsi + 2452LL);
                            goto LABEL_686;
                          }
                          v795 = (_DWORD *)(gpsi + 2452LL);
                          goto LABEL_669;
                        }
                        v781 = (_DWORD *)(gpsi + 2452LL);
                        goto LABEL_652;
                      }
                      v752 = (_DWORD *)(gpsi + 2388LL);
                      goto LABEL_635;
                    }
                    v734 = (_DWORD *)(gpsi + 2452LL);
                    goto LABEL_600;
                  }
                  v711 = (_DWORD *)(gpsi + 2452LL);
                  goto LABEL_583;
                }
                v672 = (_DWORD *)(gpsi + 2448LL);
                goto LABEL_542;
              }
              if ( v528 )
              {
                v577 = (v1102 & 0x20) + 45;
                if ( (W32GetCurrentThreadDpiAwarenessContext(v1102, v570, v571, v572) & 0xF) != 0 )
                  goto LABEL_437;
              }
              else
              {
                v577 = 45;
                if ( !IsDPIDWMSysMet(0x2DuLL)
                  || (W32GetCurrentThreadDpiAwarenessContext(v581, v580, v582, v583) & 0xF) != 0
                  || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v584, v585, v586) + 408)
                    ? (v587 = 0)
                    : (v587 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                    (__int64)KeGetCurrentThread(),
                                                                    v574,
                                                                    v575,
                                                                    v576)
                                                                + 408)
                                                    + 8LL)
                                        + 244LL) & 1),
                      !v587) )
                {
LABEL_437:
                  if ( IsDPIDWMSysMet(v577)
                    && (W32GetCurrentThreadDpiAwarenessContext(v578, v574, v575, v576) & 0xF) == 1
                    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v574, v575, v576) + 408)
                      ? (v579 = 0)
                      : (v579 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                      (__int64)KeGetCurrentThread(),
                                                                      v574,
                                                                      v575,
                                                                      v576)
                                                                  + 408)
                                                      + 8LL)
                                          + 244LL) & 1),
                        v579) )
                  {
                    v588 = (_DWORD *)(gpsi + 2836LL);
                  }
                  else
                  {
                    v588 = (_DWORD *)(gpsi + 2060LL);
                  }
LABEL_452:
                  v1127.right -= *v588;
                  if ( v528 )
                  {
                    if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v588, v574, v575, v576) & 0xF) != 0 )
                      goto LABEL_454;
                  }
                  else if ( !IsDPIDWMSysMet(v577)
                         || (W32GetCurrentThreadDpiAwarenessContext(v601, v600, v602, v603) & 0xF) != 0
                         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v604, v605, v606) + 408)
                           ? (v610 = 0)
                           : (v610 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                           (__int64)KeGetCurrentThread(),
                                                                           v607,
                                                                           v608,
                                                                           v609)
                                                                       + 408)
                                                           + 8LL)
                                               + 244LL) & 1),
                             !v610) )
                  {
LABEL_454:
                    if ( IsDPIDWMSysMet(v577)
                      && (W32GetCurrentThreadDpiAwarenessContext(v590, v589, v591, v592) & 0xF) == 1
                      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v593, v594, v595) + 408)
                        ? (v599 = 0)
                        : (v599 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                        (__int64)KeGetCurrentThread(),
                                                                        v596,
                                                                        v597,
                                                                        v598)
                                                                    + 408)
                                                        + 8LL)
                                            + 244LL) & 1),
                          v599) )
                    {
                      v611 = (int *)(gpsi + 2836LL);
                    }
                    else
                    {
                      v611 = (int *)(gpsi + 2060LL);
                    }
LABEL_469:
                    NtGdiPatBlt(a2, v1127.right, v1127.top, *v611, v566, 15728673);
                    if ( (v1102 & 2) != 0 )
                      v612 = 8;
                    else
                      v612 = (v1102 & 8) != 0 ? 17 : 14;
                    if ( (*(_DWORD *)(a1 + 352) & 0xF) != 0
                      || (v613 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
                      || (*(_DWORD *)(*(_QWORD *)(v613 + 8) + 244LL) & 1) == 0
                      || *(_WORD *)(gpsi + 8678LL) == 96 )
                    {
                      v614 = gpsi + 5652LL;
                    }
                    else
                    {
                      v614 = gpsi + 7140LL;
                    }
                    v1127.right -= *(_DWORD *)(v614 + 16LL * v612 + 8);
                    BitBltSysBmp(a2);
                    if ( (v1102 & 1) != 0 )
                      v615 = 8;
                    else
                      v615 = (v1102 & 4) != 0 ? 7 : 4;
                    if ( (*(_DWORD *)(a1 + 352) & 0xF) != 0
                      || (v616 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
                      || (*(_DWORD *)(*(_QWORD *)(v616 + 8) + 244LL) & 1) == 0
                      || *(_WORD *)(gpsi + 8678LL) == 96 )
                    {
                      v617 = gpsi + 5652LL;
                    }
                    else
                    {
                      v617 = gpsi + 7140LL;
                    }
                    v1127.right -= *(_DWORD *)(v617 + 16LL * v615 + 8);
                    BitBltSysBmp(a2);
                    if ( v528 )
                    {
                      if ( (W32GetCurrentThreadDpiAwarenessContext(v619, v618, v620, v621) & 0xF) != 0 )
                        goto LABEL_489;
                    }
                    else if ( !IsDPIDWMSysMet(v577)
                           || (W32GetCurrentThreadDpiAwarenessContext(v628, v627, v629, v630) & 0xF) != 0
                           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v631, v632, v633)
                                          + 408)
                             ? (v634 = 0)
                             : (v634 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                             (__int64)KeGetCurrentThread(),
                                                                             v622,
                                                                             v623,
                                                                             v624)
                                                                         + 408)
                                                             + 8LL)
                                                 + 244LL) & 1),
                               !v634) )
                    {
LABEL_489:
                      if ( IsDPIDWMSysMet(v577)
                        && (W32GetCurrentThreadDpiAwarenessContext(v625, v622, v623, v624) & 0xF) == 1
                        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v622, v623, v624) + 408)
                          ? (v626 = 0)
                          : (v626 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                          (__int64)KeGetCurrentThread(),
                                                                          v622,
                                                                          v623,
                                                                          v624)
                                                                      + 408)
                                                          + 8LL)
                                              + 244LL) & 1),
                            v626) )
                      {
                        v635 = (_DWORD *)(gpsi + 2836LL);
                      }
                      else
                      {
                        v635 = (_DWORD *)(gpsi + 2060LL);
                      }
LABEL_504:
                      v1127.right -= *v635;
                      if ( v528 )
                      {
                        if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v635, v622, v623, v624) & 0xF) != 0 )
                          goto LABEL_506;
                      }
                      else if ( !IsDPIDWMSysMet(v577)
                             || (W32GetCurrentThreadDpiAwarenessContext(v648, v647, v649, v650) & 0xF) != 0
                             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v651, v652, v653)
                                            + 408)
                               ? (v657 = 0)
                               : (v657 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                               (__int64)KeGetCurrentThread(),
                                                                               v654,
                                                                               v655,
                                                                               v656)
                                                                           + 408)
                                                               + 8LL)
                                                   + 244LL) & 1),
                                 !v657) )
                      {
LABEL_506:
                        if ( IsDPIDWMSysMet(v577)
                          && (W32GetCurrentThreadDpiAwarenessContext(v637, v636, v638, v639) & 0xF) == 1
                          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v640, v641, v642) + 408)
                            ? (v646 = 0)
                            : (v646 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                            (__int64)KeGetCurrentThread(),
                                                                            v643,
                                                                            v644,
                                                                            v645)
                                                                        + 408)
                                                            + 8LL)
                                                + 244LL) & 1),
                              v646) )
                        {
                          v658 = (int *)(gpsi + 2836LL);
                        }
                        else
                        {
                          v658 = (int *)(gpsi + 2060LL);
                        }
                        goto LABEL_521;
                      }
                      v658 = (int *)(gpsi + 2448LL);
LABEL_521:
                      NtGdiPatBlt(a2, v1127.right, v1127.top, *v658, v566, 15728673);
                      v573 = v1102;
                      v402 = 3;
                      goto LABEL_522;
                    }
                    v635 = (_DWORD *)(gpsi + 2448LL);
                    goto LABEL_504;
                  }
                  v611 = (int *)(gpsi + 2448LL);
                  goto LABEL_469;
                }
              }
              v588 = (_DWORD *)(gpsi + 2448LL);
              goto LABEL_452;
            }
            v565 = (int *)(gpsi + 2448LL);
            goto LABEL_425;
          }
          v542 = (_DWORD *)(gpsi + 2448LL);
          goto LABEL_408;
        }
        v523 = (_DWORD *)(gpsi + 2452LL);
        goto LABEL_391;
      }
      v500 = (_DWORD *)(gpsi + 2452LL);
      goto LABEL_374;
    }
    if ( (*(_DWORD *)(v5 + 352) & 0xF) != 0
      || (v821 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 408LL)) == 0
      || (*(_DWORD *)(*(_QWORD *)(v821 + 8) + 244LL) & 1) == 0
      || *(_WORD *)(gpsi + 8678LL) == 96 )
    {
      v822 = gpsi + 5652LL;
    }
    else
    {
      v822 = gpsi + 7140LL;
    }
    v1112 = (_DWORD *)(v822 + 624);
    if ( v1102 )
    {
      v1105 = IsDPIAbsoluteSysMet(0x1EuLL);
      if ( v1105 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v824, v823, v825, v826) & 0xF) != 0 )
          goto LABEL_700;
      }
      else if ( !IsDPIDWMSysMet(v824)
             || (W32GetCurrentThreadDpiAwarenessContext(v839, v838, v840, v841) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v842, v843, v844) + 408)
               ? (v848 = 0)
               : (v848 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v845,
                                                               v846,
                                                               v847)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v848) )
      {
LABEL_700:
        if ( IsDPIDWMSysMet(0x1EuLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v828, v827, v829, v830) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v831, v832, v833) + 408)
            ? (v837 = 0)
            : (v837 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v834,
                                                            v835,
                                                            v836)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v837) )
        {
          v849 = (_DWORD *)(gpsi + 2776LL);
        }
        else
        {
          v849 = (_DWORD *)(gpsi + 2000LL);
        }
LABEL_715:
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v851, v850, v852, v853) & 0xF) != 0 )
            goto LABEL_717;
        }
        else if ( !IsDPIDWMSysMet(v851)
               || (W32GetCurrentThreadDpiAwarenessContext(v866, v865, v867, v868) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v869, v870, v871) + 408)
                 ? (v875 = 0)
                 : (v875 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v872,
                                                                 v873,
                                                                 v874)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v875) )
        {
LABEL_717:
          if ( IsDPIDWMSysMet(0x2DuLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v855, v854, v856, v857) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v858, v859, v860) + 408)
              ? (v864 = 0)
              : (v864 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v861,
                                                              v862,
                                                              v863)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v864) )
          {
            v876 = (_DWORD *)(gpsi + 2836LL);
          }
          else
          {
            v876 = (_DWORD *)(gpsi + 2060LL);
          }
          goto LABEL_732;
        }
        v876 = (_DWORD *)(gpsi + 2448LL);
LABEL_732:
        v877 = *v849 + *v876;
        v878 = v1105;
        goto LABEL_751;
      }
      v849 = (_DWORD *)(gpsi + 2388LL);
      goto LABEL_715;
    }
    v1105 = IsDPIAbsoluteSysMet(0x1EuLL);
    v878 = v1105;
    if ( v1105 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v880, v879, v881, v882) & 0xF) != 0 )
        goto LABEL_735;
    }
    else if ( !IsDPIDWMSysMet(v880)
           || (W32GetCurrentThreadDpiAwarenessContext(v895, v894, v896, v897) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v898, v899, v900) + 408)
             ? (v904 = 0)
             : (v904 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v901,
                                                             v902,
                                                             v903)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !v904) )
    {
LABEL_735:
      if ( IsDPIDWMSysMet(0x1EuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v884, v883, v885, v886) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v887, v888, v889) + 408)
          ? (v893 = 0)
          : (v893 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v890,
                                                          v891,
                                                          v892)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v893) )
      {
        v905 = (_DWORD *)(gpsi + 2776LL);
      }
      else
      {
        v905 = (_DWORD *)(gpsi + 2000LL);
      }
      goto LABEL_750;
    }
    v905 = (_DWORD *)(gpsi + 2388LL);
LABEL_750:
    v877 = 3 * *v905;
LABEL_751:
    if ( !v1115 )
      v1112 += 4;
    v1127.right -= v877;
    FixHDCBITSBmp();
    if ( v878 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v907, v906, v908, v909) & 0xF) != 0 )
        goto LABEL_755;
    }
    else if ( !IsDPIDWMSysMet(0x1EuLL)
           || (W32GetCurrentThreadDpiAwarenessContext(v922, v921, v923, v924) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v925, v926, v927) + 408)
             ? (v931 = 0)
             : (v931 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v928,
                                                             v929,
                                                             v930)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !v931) )
    {
LABEL_755:
      if ( IsDPIDWMSysMet(0x1EuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v911, v910, v912, v913) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v914, v915, v916) + 408)
          ? (v920 = 0)
          : (v920 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v917,
                                                          v918,
                                                          v919)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v920) )
      {
        v932 = (_DWORD *)(gpsi + 2776LL);
      }
      else
      {
        v932 = (_DWORD *)(gpsi + 2000LL);
      }
LABEL_770:
      LOBYTE(v6) = NtGdiBitBltInternal(
                     a2,
                     v1127.right,
                     v1127.top,
                     v877,
                     v1112[3],
                     *(HDC *)(gpDispInfo + 32LL),
                     v1112[2] + *v1112 - v877 - *v932,
                     v1112[1],
                     0xCC0020u,
                     0,
                     0);
      v401 = v1102;
      if ( !v1102 || (LOBYTE(v6) = *(_BYTE *)(a1 + 49), (v6 & 4) == 0) )
      {
        v5 = a1;
        goto LABEL_947;
      }
      if ( v878 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v934, v933, v935, v936) & 0xF) != 0 )
          goto LABEL_774;
      }
      else if ( !IsDPIDWMSysMet(0x1EuLL)
             || (W32GetCurrentThreadDpiAwarenessContext(v949, v948, v950, v951) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v952, v953, v954) + 408)
               ? (v958 = 0)
               : (v958 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v955,
                                                               v956,
                                                               v957)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v958) )
      {
LABEL_774:
        if ( IsDPIDWMSysMet(0x1EuLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v938, v937, v939, v940) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v941, v942, v943) + 408)
            ? (v947 = 0)
            : (v947 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v944,
                                                            v945,
                                                            v946)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v947) )
        {
          v959 = (_DWORD *)(gpsi + 2776LL);
        }
        else
        {
          v959 = (_DWORD *)(gpsi + 2000LL);
        }
LABEL_789:
        v1110 = IsDPIAbsoluteSysMet(0x2DuLL);
        if ( v1110 )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v961, v960, v962, v963) & 0xF) != 0 )
            goto LABEL_791;
        }
        else if ( !IsDPIDWMSysMet(v961)
               || (W32GetCurrentThreadDpiAwarenessContext(v970, v969, v971, v972) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v973, v974, v975) + 408)
                 ? (v976 = 0)
                 : (v976 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v964,
                                                                 v965,
                                                                 v966)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v976) )
        {
LABEL_791:
          if ( IsDPIDWMSysMet(0x2DuLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v967, v964, v965, v966) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v964, v965, v966) + 408)
              ? (v968 = 0)
              : (v968 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v964,
                                                              v965,
                                                              v966)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v968) )
          {
            v977 = (_DWORD *)(gpsi + 2836LL);
          }
          else
          {
            v977 = (_DWORD *)(gpsi + 2060LL);
          }
LABEL_806:
          v978 = (unsigned int)(*v977 - *v959);
          v1127.right += v978;
          if ( v1105 )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v978, v964, v965, v966) & 0xF) != 0 )
              goto LABEL_808;
          }
          else if ( !IsDPIDWMSysMet(0x1EuLL)
                 || (W32GetCurrentThreadDpiAwarenessContext(v984, v983, v985, v986) & 0xF) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v987, v988, v989) + 408)
                   ? (v980 = 0LL)
                   : (v980 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                   (__int64)KeGetCurrentThread(),
                                                                   v979,
                                                                   v981,
                                                                   v982)
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                     !(_DWORD)v980) )
          {
LABEL_808:
            if ( IsDPIDWMSysMet(0x1EuLL)
              && (W32GetCurrentThreadDpiAwarenessContext(v980, v979, v981, v982) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v979, v981, v982) + 408)
                ? (v980 = 0LL)
                : (v980 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v979,
                                                                v981,
                                                                v982)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  (_DWORD)v980) )
            {
              v990 = (_DWORD *)(gpsi + 2776LL);
            }
            else
            {
              v990 = (_DWORD *)(gpsi + 2000LL);
            }
LABEL_823:
            if ( v1105 )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v980, v979, v981, v982) & 0xF) != 0 )
                goto LABEL_825;
            }
            else if ( !IsDPIDWMSysMet(0x1EuLL)
                   || (W32GetCurrentThreadDpiAwarenessContext(v1003, v1002, v1004, v1005) & 0xF) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1006, v1007, v1008) + 408)
                     ? (v1012 = 0)
                     : (v1012 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                      (__int64)KeGetCurrentThread(),
                                                                      v1009,
                                                                      v1010,
                                                                      v1011)
                                                                  + 408)
                                                      + 8LL)
                                          + 244LL) & 1),
                       !v1012) )
            {
LABEL_825:
              if ( IsDPIDWMSysMet(0x1EuLL)
                && (W32GetCurrentThreadDpiAwarenessContext(v992, v991, v993, v994) & 0xF) == 1
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v995, v996, v997) + 408)
                  ? (v1001 = 0)
                  : (v1001 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                   (__int64)KeGetCurrentThread(),
                                                                   v998,
                                                                   v999,
                                                                   v1000)
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                    v1001) )
              {
                v1013 = (int *)(gpsi + 2776LL);
              }
              else
              {
                v1013 = (int *)(gpsi + 2000LL);
              }
LABEL_840:
              NtGdiBitBltInternal(
                a2,
                v1127.right,
                v1127.top,
                *v1013,
                v1112[3],
                *(HDC *)(gpDispInfo + 32LL),
                v1112[2] + *v1112 - *v990,
                v1112[1],
                0xCC0020u,
                0,
                0);
              LODWORD(v6) = IS_UI_LANGID();
              if ( !(_DWORD)v6 )
              {
                v1015 = gpsi;
                LOBYTE(v6) = 13;
                if ( *(_WORD *)(gpsi + 8692LL) != 1037 )
                {
                  v5 = a1;
LABEL_843:
                  v401 = v1102;
                  goto LABEL_947;
                }
              }
              v5 = a1;
              if ( (*(_BYTE *)(a1 + 50) & 0x40) == 0 )
                goto LABEL_843;
              if ( v1110 )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v1015, v1014, v1016, v1017) & 0xF) != 0 )
                  goto LABEL_847;
              }
              else if ( !IsDPIDWMSysMet(0x2DuLL)
                     || (W32GetCurrentThreadDpiAwarenessContext(v1023, v1022, v1024, v1025) & 0xF) != 0
                     || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1026, v1027, v1028) + 408)
                       ? (v1019 = 0LL)
                       : (v1019 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                        (__int64)KeGetCurrentThread(),
                                                                        v1018,
                                                                        v1020,
                                                                        v1021)
                                                                    + 408)
                                                        + 8LL)
                                            + 244LL) & 1),
                         !(_DWORD)v1019) )
              {
LABEL_847:
                if ( IsDPIDWMSysMet(0x2DuLL)
                  && (W32GetCurrentThreadDpiAwarenessContext(v1019, v1018, v1020, v1021) & 0xF) == 1
                  && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1018, v1020, v1021) + 408)
                    ? (v1019 = 0LL)
                    : (v1019 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                     (__int64)KeGetCurrentThread(),
                                                                     v1018,
                                                                     v1020,
                                                                     v1021)
                                                                 + 408)
                                                     + 8LL)
                                         + 244LL) & 1),
                      (_DWORD)v1019) )
                {
                  v1029 = gpsi + 2836LL;
                }
                else
                {
                  v1029 = gpsi + 2060LL;
                }
LABEL_862:
                v1114 = (_DWORD *)v1029;
                if ( v1105 )
                {
                  if ( (W32GetCurrentThreadDpiAwarenessContext(v1019, v1018, v1020, v1021) & 0xF) != 0 )
                    goto LABEL_864;
                }
                else if ( !IsDPIDWMSysMet(0x1EuLL)
                       || (W32GetCurrentThreadDpiAwarenessContext(v1035, v1034, v1036, v1037) & 0xF) != 0
                       || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1038, v1039, v1040) + 408)
                         ? (v1031 = 0LL)
                         : (v1031 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                          (__int64)KeGetCurrentThread(),
                                                                          v1030,
                                                                          v1032,
                                                                          v1033)
                                                                      + 408)
                                                          + 8LL)
                                              + 244LL) & 1),
                           !(_DWORD)v1031) )
                {
LABEL_864:
                  if ( IsDPIDWMSysMet(0x1EuLL)
                    && (W32GetCurrentThreadDpiAwarenessContext(v1031, v1030, v1032, v1033) & 0xF) == 1
                    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1030, v1032, v1033) + 408)
                      ? (v1031 = 0LL)
                      : (v1031 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                       (__int64)KeGetCurrentThread(),
                                                                       v1030,
                                                                       v1032,
                                                                       v1033)
                                                                   + 408)
                                                       + 8LL)
                                           + 244LL) & 1),
                        (_DWORD)v1031) )
                  {
                    v1041 = (_DWORD *)(gpsi + 2776LL);
                  }
                  else
                  {
                    v1041 = (_DWORD *)(gpsi + 2000LL);
                  }
LABEL_879:
                  if ( v1110 )
                  {
                    if ( (W32GetCurrentThreadDpiAwarenessContext(v1031, v1030, v1032, v1033) & 0xF) != 0 )
                      goto LABEL_881;
                  }
                  else if ( !IsDPIDWMSysMet(0x2DuLL)
                         || (W32GetCurrentThreadDpiAwarenessContext(v1047, v1046, v1048, v1049) & 0xF) != 0
                         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1050, v1051, v1052)
                                        + 408)
                           ? (v1043 = 0LL)
                           : (v1043 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                            (__int64)KeGetCurrentThread(),
                                                                            v1042,
                                                                            v1044,
                                                                            v1045)
                                                                        + 408)
                                                            + 8LL)
                                                + 244LL) & 1),
                             !(_DWORD)v1043) )
                  {
LABEL_881:
                    if ( IsDPIDWMSysMet(0x2DuLL)
                      && (W32GetCurrentThreadDpiAwarenessContext(v1043, v1042, v1044, v1045) & 0xF) == 1
                      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1042, v1044, v1045) + 408)
                        ? (v1043 = 0LL)
                        : (v1043 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                         (__int64)KeGetCurrentThread(),
                                                                         v1042,
                                                                         v1044,
                                                                         v1045)
                                                                     + 408)
                                                         + 8LL)
                                             + 244LL) & 1),
                          (_DWORD)v1043) )
                    {
                      v1053 = (_DWORD *)(gpsi + 2836LL);
                    }
                    else
                    {
                      v1053 = (_DWORD *)(gpsi + 2060LL);
                    }
LABEL_896:
                    if ( v1105 )
                    {
                      if ( (W32GetCurrentThreadDpiAwarenessContext(v1043, v1042, v1044, v1045) & 0xF) != 0 )
                        goto LABEL_898;
                    }
                    else if ( !IsDPIDWMSysMet(0x1EuLL)
                           || (W32GetCurrentThreadDpiAwarenessContext(v1059, v1058, v1060, v1061) & 0xF) != 0
                           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1062, v1063, v1064)
                                          + 408)
                             ? (v1055 = 0LL)
                             : (v1055 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                              (__int64)KeGetCurrentThread(),
                                                                              v1054,
                                                                              v1056,
                                                                              v1057)
                                                                          + 408)
                                                              + 8LL)
                                                  + 244LL) & 1),
                               !(_DWORD)v1055) )
                    {
LABEL_898:
                      if ( IsDPIDWMSysMet(0x1EuLL)
                        && (W32GetCurrentThreadDpiAwarenessContext(v1055, v1054, v1056, v1057) & 0xF) == 1
                        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1054, v1056, v1057)
                                       + 408)
                          ? (v1055 = 0LL)
                          : (v1055 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                           (__int64)KeGetCurrentThread(),
                                                                           v1054,
                                                                           v1056,
                                                                           v1057)
                                                                       + 408)
                                                           + 8LL)
                                               + 244LL) & 1),
                            (_DWORD)v1055) )
                      {
                        v1065 = (_DWORD *)(gpsi + 2776LL);
                      }
                      else
                      {
                        v1065 = (_DWORD *)(gpsi + 2000LL);
                      }
LABEL_913:
                      if ( v1110 )
                      {
                        if ( (W32GetCurrentThreadDpiAwarenessContext(v1055, v1054, v1056, v1057) & 0xF) != 0 )
                          goto LABEL_915;
                      }
                      else if ( !IsDPIDWMSysMet(0x2DuLL)
                             || (W32GetCurrentThreadDpiAwarenessContext(v1071, v1070, v1072, v1073) & 0xF) != 0
                             || (!*(_QWORD *)(W32GetThreadWin32Thread(
                                                (__int64)KeGetCurrentThread(),
                                                v1074,
                                                v1075,
                                                v1076)
                                            + 408)
                               ? (v1067 = 0LL)
                               : (v1067 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                                (__int64)KeGetCurrentThread(),
                                                                                v1066,
                                                                                v1068,
                                                                                v1069)
                                                                            + 408)
                                                                + 8LL)
                                                    + 244LL) & 1),
                                 !(_DWORD)v1067) )
                      {
LABEL_915:
                        if ( IsDPIDWMSysMet(0x2DuLL)
                          && (W32GetCurrentThreadDpiAwarenessContext(v1067, v1066, v1068, v1069) & 0xF) == 1
                          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1066, v1068, v1069)
                                         + 408)
                            ? (v1067 = 0LL)
                            : (v1067 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                             (__int64)KeGetCurrentThread(),
                                                                             v1066,
                                                                             v1068,
                                                                             v1069)
                                                                         + 408)
                                                             + 8LL)
                                                 + 244LL) & 1),
                              (_DWORD)v1067) )
                        {
                          v1077 = (_DWORD *)(gpsi + 2836LL);
                        }
                        else
                        {
                          v1077 = (_DWORD *)(gpsi + 2060LL);
                        }
LABEL_930:
                        if ( v1110 )
                        {
                          if ( (W32GetCurrentThreadDpiAwarenessContext(v1067, v1066, v1068, v1069) & 0xF) != 0 )
                            goto LABEL_932;
                        }
                        else if ( !IsDPIDWMSysMet(0x2DuLL)
                               || (W32GetCurrentThreadDpiAwarenessContext(v1090, v1089, v1091, v1092) & 0xF) != 0
                               || (!*(_QWORD *)(W32GetThreadWin32Thread(
                                                  (__int64)KeGetCurrentThread(),
                                                  v1093,
                                                  v1094,
                                                  v1095)
                                              + 408)
                                 ? (v1099 = 0)
                                 : (v1099 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                                  (__int64)KeGetCurrentThread(),
                                                                                  v1096,
                                                                                  v1097,
                                                                                  v1098)
                                                                              + 408)
                                                                  + 8LL)
                                                      + 244LL) & 1),
                                   !v1099) )
                        {
LABEL_932:
                          if ( IsDPIDWMSysMet(0x2DuLL)
                            && (W32GetCurrentThreadDpiAwarenessContext(v1079, v1078, v1080, v1081) & 0xF) == 1
                            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1082, v1083, v1084)
                                           + 408)
                              ? (v1088 = 0)
                              : (v1088 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                               (__int64)KeGetCurrentThread(),
                                                                               v1085,
                                                                               v1086,
                                                                               v1087)
                                                                           + 408)
                                                               + 8LL)
                                                   + 244LL) & 1),
                                v1088) )
                          {
                            v820 = (_DWORD *)(gpsi + 2836LL);
                          }
                          else
                          {
                            v820 = (_DWORD *)(gpsi + 2060LL);
                          }
                          goto LABEL_689;
                        }
                        v820 = (_DWORD *)(gpsi + 2448LL);
LABEL_689:
                        v819 = a2;
                        LOBYTE(v6) = NtGdiBitBltInternal(
                                       a2,
                                       v1127.right - *v820,
                                       v1127.top + 2,
                                       *v1065 - 2 * *v1077,
                                       v1112[3] - 4,
                                       *(HDC *)(gpDispInfo + 32LL),
                                       *v1053 + v1112[2] + *v1112 - *v1041,
                                       *v1114 + v1112[1],
                                       0x80CC0020,
                                       0,
                                       0);
LABEL_690:
                        v5 = a1;
                        v401 = v1102;
                        goto LABEL_948;
                      }
                      v1077 = (_DWORD *)(gpsi + 2448LL);
                      goto LABEL_930;
                    }
                    v1065 = (_DWORD *)(gpsi + 2388LL);
                    goto LABEL_913;
                  }
                  v1053 = (_DWORD *)(gpsi + 2448LL);
                  goto LABEL_896;
                }
                v1041 = (_DWORD *)(gpsi + 2388LL);
                goto LABEL_879;
              }
              v1029 = gpsi + 2448LL;
              goto LABEL_862;
            }
            v1013 = (int *)(gpsi + 2388LL);
            goto LABEL_840;
          }
          v990 = (_DWORD *)(gpsi + 2388LL);
          goto LABEL_823;
        }
        v977 = (_DWORD *)(gpsi + 2448LL);
        goto LABEL_806;
      }
      v959 = (_DWORD *)(gpsi + 2388LL);
      goto LABEL_789;
    }
    v932 = (_DWORD *)(gpsi + 2388LL);
    goto LABEL_770;
  }
  v401 = v1102;
LABEL_947:
  v819 = a2;
LABEL_948:
  if ( (a3 & 0xC) != 0 )
  {
    v1100 = xxxDrawCaptionTemp((struct tagWND *)v5, v819, 0LL, 0LL, (v401 >> 4) & 2 | (v1116 != 0 ? 0x20 : 0) | a3) == 0;
    LOBYTE(v6) = SetOrClrWF(v1100, (_DWORD *)v5, 0x708u, 1);
  }
  return v6;
}
