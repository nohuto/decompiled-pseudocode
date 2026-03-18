/*
 * XREFs of FsRtlMdlReadCompleteDevEx @ 0x140228000
 * Callers:
 *     KiDecodeMcaFault @ 0x14014D4C0 (KiDecodeMcaFault.c)
 *     sub_14014EF58 @ 0x14014EF58 (sub_14014EF58.c)
 *     FsRtlUninitializeSmallMcb @ 0x140237C60 (FsRtlUninitializeSmallMcb.c)
 * Callees:
 *     sub_14014F138 @ 0x14014F138 (sub_14014F138.c)
 *     sub_14014F218 @ 0x14014F218 (sub_14014F218.c)
 *     sub_14014F9C8 @ 0x14014F9C8 (sub_14014F9C8.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     sub_1402347EC @ 0x1402347EC (sub_1402347EC.c)
 *     sub_140236718 @ 0x140236718 (sub_140236718.c)
 *     $$e6 @ 0x1402379D8 ($$e6.c)
 *     $$110 @ 0x140237B64 ($$110.c)
 *     KiGetGdtIdt @ 0x140237BC0 (KiGetGdtIdt.c)
 *     SdbpCheckDll @ 0x140237C10 (SdbpCheckDll.c)
 *     sub_14072DC88 @ 0x14072DC88 (sub_14072DC88.c)
 */

unsigned __int64 __fastcall FsRtlMdlReadCompleteDevEx(unsigned __int64 a1)
{
  _QWORD *v1; // rbp
  unsigned __int64 v2; // r12
  _QWORD *v3; // rax
  int v4; // ecx
  __int64 v5; // rdx
  __int128 v6; // xmm0
  __int64 v7; // rdi
  _QWORD *v8; // r9
  char *v9; // rcx
  _QWORD *v10; // rdx
  int v11; // r8d
  __int64 v12; // r10
  char v13; // al
  int v14; // ecx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // r10
  const char *v18; // rax
  unsigned __int64 v19; // r8
  int v20; // ebx
  __int64 v21; // rdx
  unsigned __int64 v22; // r11
  __int64 v23; // rax
  char *v24; // rcx
  int v25; // r8d
  __int64 v26; // r10
  char v27; // al
  int v28; // ecx
  __int64 v29; // rax
  int v30; // eax
  int v31; // r13d
  unsigned int v32; // esi
  __int64 v33; // r12
  unsigned int *v34; // r10
  __int64 v35; // r15
  int v36; // r13d
  void (__fastcall *v37)(_QWORD, _QWORD, _QWORD *); // r9
  void (__fastcall *v38)(unsigned __int64, _QWORD, _QWORD *, void (__fastcall *)(_QWORD, _QWORD, _QWORD), unsigned int *); // r11
  unsigned __int64 v39; // rcx
  unsigned __int128 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  unsigned __int128 v43; // rax
  unsigned __int64 v44; // rdx
  unsigned __int128 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // r14
  int v48; // ecx
  unsigned __int64 v49; // rcx
  unsigned __int128 v50; // rax
  int v51; // ecx
  __int64 v52; // rbx
  unsigned __int64 v53; // rdx
  __int64 v54; // r8
  _QWORD *v55; // rax
  __int64 v56; // r11
  unsigned __int64 v57; // r9
  __int64 *v58; // r10
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rcx
  _QWORD *v62; // rdx
  _QWORD *v63; // rax
  __int64 v64; // r8
  int v65; // ecx
  __int64 v66; // r11
  unsigned __int64 v67; // r9
  __int64 *v68; // r10
  __int64 v69; // rdx
  unsigned int v70; // esi
  _QWORD *v71; // rdx
  __int64 v72; // rax
  int v73; // ecx
  int v74; // ebx
  __int64 v75; // r8
  _QWORD *v76; // r9
  int v77; // r11d
  const char *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // r10
  __int64 v81; // rax
  __int64 v82; // rax
  int v83; // ecx
  __int64 v84; // rcx
  unsigned __int64 v85; // rsi
  __int64 v86; // rbx
  int v87; // r14d
  _BYTE *v88; // rax
  int v89; // ecx
  unsigned int v90; // ecx
  _DWORD *v91; // r11
  int v92; // eax
  unsigned __int64 v93; // rdx
  __int64 i16; // r12
  unsigned __int64 v95; // r9
  unsigned int v96; // r8d
  char *v97; // r13
  __int64 v98; // r10
  int v99; // ecx
  int v100; // ecx
  int v101; // ecx
  int v102; // ecx
  int v103; // ecx
  __int64 v104; // rax
  int v105; // eax
  int v106; // ecx
  __int64 v107; // rcx
  _QWORD *v108; // r9
  unsigned __int64 v109; // r8
  const char *v110; // rax
  int v111; // r11d
  unsigned __int64 v112; // rdx
  unsigned __int64 v113; // r10
  __int64 v114; // rax
  unsigned __int64 k; // rax
  __int64 v116; // rax
  unsigned int v117; // edx
  __int64 v118; // rcx
  __int16 v119; // ax
  __int64 v120; // rax
  __int64 v121; // rcx
  unsigned int j; // r10d
  __int64 v123; // rdx
  unsigned __int64 v124; // r9
  unsigned __int64 v125; // rcx
  int v126; // eax
  __int64 v127; // rcx
  bool v128; // zf
  int v129; // ecx
  int v130; // r13d
  bool v131; // zf
  unsigned __int64 v132; // rcx
  unsigned __int128 v133; // rax
  __int64 v134; // rbx
  int v135; // r14d
  _QWORD **v136; // rcx
  _QWORD *v137; // rax
  unsigned int **v138; // rax
  int *v139; // rdi
  unsigned __int64 v140; // rbx
  __int64 v141; // r12
  unsigned __int64 v142; // r15
  __int64 *v143; // rax
  __int64 v144; // r8
  __int64 *v145; // rdx
  unsigned __int64 v146; // rcx
  char v147; // al
  __int64 v148; // rax
  int v149; // r14d
  int v150; // ecx
  int v151; // eax
  __int64 v152; // rbx
  int v153; // r14d
  _QWORD **v154; // rcx
  _QWORD *i; // rax
  __int64 v156; // rcx
  unsigned int *CurrentIrql; // rbx
  _QWORD **v158; // r8
  _QWORD *v159; // rcx
  _QWORD *v160; // rdx
  unsigned __int64 v161; // r8
  unsigned __int64 v162; // rbx
  _QWORD *v163; // r14
  unsigned __int64 v164; // r9
  _QWORD *v165; // r10
  const char *v166; // rax
  int v167; // r11d
  unsigned __int64 v168; // rdx
  unsigned __int64 v169; // rax
  __int64 v170; // rax
  unsigned __int64 m; // rax
  unsigned int v172; // edx
  bool v173; // zf
  __int64 v174; // r14
  __int64 v175; // rax
  __int64 v176; // rbx
  unsigned __int64 v177; // rcx
  __int64 v178; // rax
  unsigned __int64 v179; // rdx
  _QWORD *v180; // r9
  unsigned __int64 v181; // r8
  const char *v182; // rax
  int v183; // r11d
  unsigned __int64 v184; // rdx
  unsigned __int64 v185; // r10
  __int64 v186; // rax
  unsigned __int64 n; // rax
  unsigned int v188; // edx
  __int64 v189; // rcx
  unsigned int v190; // r8d
  unsigned int v191; // r8d
  __int64 *v192; // r9
  __int64 *v193; // r10
  __int64 v194; // rcx
  __int64 v195; // rax
  __int64 v196; // rdx
  __int64 v197; // rax
  __int64 v198; // rcx
  _QWORD *v199; // r9
  unsigned __int64 v200; // r8
  const char *v201; // rax
  int v202; // r10d
  unsigned __int64 v203; // rdx
  unsigned __int64 v204; // rax
  __int64 v205; // rax
  unsigned __int64 ii; // rax
  __int64 v207; // rax
  unsigned int v208; // edx
  __int64 v209; // rcx
  __int64 v210; // r12
  __int64 v211; // r8
  unsigned __int64 v212; // rcx
  unsigned int *v213; // r10
  unsigned __int64 v214; // rdx
  char *v215; // r14
  unsigned int *v216; // r15
  _QWORD *v217; // r11
  unsigned int v218; // r8d
  _QWORD *v219; // r9
  int v220; // ebx
  const char *v221; // rax
  unsigned __int64 v222; // rdx
  unsigned __int64 v223; // rcx
  unsigned __int64 v224; // rax
  __int64 v225; // rax
  unsigned __int64 jj; // rax
  bool v227; // zf
  __int64 v228; // rcx
  unsigned __int64 v229; // rbx
  unsigned __int8 v230; // r13
  __int64 v231; // rdx
  unsigned int *v232; // rax
  __int64 v233; // r14
  BOOL v234; // r12d
  unsigned __int64 v235; // r15
  __int64 v236; // r8
  __int64 *v237; // r9
  __int64 *v238; // r10
  __int64 v239; // rcx
  __int64 v240; // rax
  bool v241; // zf
  __int64 v242; // rax
  int *v243; // rcx
  _QWORD *v244; // r9
  unsigned __int64 v245; // r8
  const char *v246; // rax
  int v247; // r11d
  unsigned __int64 v248; // rdx
  unsigned __int64 v249; // r10
  __int64 v250; // rax
  unsigned __int64 kk; // rax
  __int64 v252; // rax
  unsigned int v253; // edx
  __int64 v254; // rcx
  char *v255; // rax
  unsigned __int64 v256; // r8
  __int16 v257; // ax
  __int64 v258; // rax
  __int64 v259; // rax
  unsigned int v260; // ebx
  __int64 v261; // rax
  unsigned int v262; // r12d
  unsigned __int64 v263; // r10
  unsigned __int8 v264; // dl
  unsigned __int64 v265; // r11
  __int64 v266; // r15
  unsigned __int64 v267; // r9
  _QWORD *v268; // r9
  unsigned __int64 v269; // r8
  const char *v270; // rax
  int v271; // r10d
  unsigned __int64 v272; // rdx
  unsigned __int64 v273; // rax
  __int64 v274; // rax
  unsigned __int64 i15; // rax
  unsigned int v276; // r9d
  const char *v277; // r8
  unsigned __int8 v278; // r10
  unsigned int v279; // r11d
  unsigned __int64 v280; // rbx
  unsigned __int64 v281; // r14
  unsigned __int64 v282; // rcx
  const char *v283; // rax
  int v284; // r10d
  unsigned __int64 v285; // rdx
  const char *v286; // rcx
  unsigned __int64 v287; // rax
  __int64 v288; // rax
  unsigned __int64 i17; // rax
  __int64 v290; // rax
  _QWORD *v291; // rcx
  int v292; // edx
  __int64 v293; // r8
  char v294; // al
  __int64 v295; // rax
  _QWORD *v296; // r9
  const char *v297; // rax
  int v298; // r10d
  unsigned __int64 v299; // rdx
  unsigned __int64 v300; // rax
  __int64 v301; // rax
  unsigned __int64 i13; // rax
  __int64 v303; // rax
  unsigned int v304; // edx
  __int64 v305; // rcx
  unsigned int v306; // r8d
  __int64 v307; // rax
  unsigned int *v308; // r10
  unsigned int *v309; // r9
  int v310; // r11d
  const char *v311; // rax
  unsigned __int64 v312; // rdx
  unsigned int *v313; // rcx
  unsigned __int64 v314; // rax
  __int64 v315; // rax
  unsigned __int64 i14; // rax
  __int64 v317; // rax
  unsigned int v318; // edx
  _QWORD *v319; // r15
  int v320; // r14d
  unsigned int *v321; // r12
  __int64 v322; // rbx
  _QWORD **v323; // rdx
  _QWORD *i12; // rcx
  _QWORD **v325; // r9
  _QWORD *v326; // rdx
  _QWORD *v327; // r8
  _QWORD *v328; // rax
  unsigned int *v329; // rcx
  unsigned int *v330; // r15
  __int64 v331; // rbx
  _QWORD *v332; // r12
  _QWORD **v333; // rcx
  _QWORD *v334; // rax
  _QWORD **v335; // r9
  _QWORD *v336; // r8
  __int64 v337; // rdx
  unsigned int *v338; // rbx
  _QWORD **v339; // r12
  __int64 v340; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v342; // r13
  _QWORD *v343; // rax
  __int64 v344; // r8
  unsigned __int64 v345; // rcx
  __int64 v346; // rax
  unsigned __int128 v347; // rt2
  int v348; // ebx
  unsigned __int64 v349; // rcx
  unsigned __int128 v350; // rax
  unsigned __int64 v351; // r14
  __int64 v352; // rax
  unsigned __int64 v353; // rdx
  __int64 v354; // r11
  int v355; // r10d
  unsigned __int64 *v356; // r9
  unsigned __int64 v357; // r8
  unsigned __int64 v358; // rcx
  unsigned __int128 v359; // rax
  unsigned __int64 v360; // rcx
  unsigned __int64 v361; // rcx
  unsigned int v362; // ebx
  unsigned __int64 *v363; // r8
  unsigned __int64 v364; // r9
  unsigned __int64 v365; // rcx
  unsigned __int128 v366; // rax
  __int64 v367; // r9
  unsigned __int64 v368; // rcx
  unsigned __int128 v369; // rax
  __int64 v370; // r15
  _QWORD *v371; // rbx
  unsigned int v372; // edi
  __int64 v373; // r14
  __int64 v374; // rax
  unsigned int v375; // r14d
  unsigned int *v376; // r12
  unsigned __int64 v377; // r13
  int *v378; // rdi
  __int64 v379; // rbx
  unsigned __int64 v380; // rcx
  unsigned __int128 v381; // rax
  int v382; // ecx
  int v383; // ecx
  int v384; // ecx
  int v385; // ecx
  __int64 v386; // r15
  int v387; // edi
  int v388; // r12d
  char *v389; // rbx
  __int64 v390; // r14
  _QWORD *v391; // rcx
  int v392; // edx
  __int64 v393; // r8
  char v394; // al
  __int64 v395; // rax
  __int64 v396; // rax
  _BYTE *v397; // r14
  __int64 *v398; // rax
  __int64 v399; // rbx
  __int64 v400; // rax
  __int64 v401; // rax
  __int64 v402; // rax
  __int64 v403; // rax
  __int64 v404; // rdx
  __int64 v405; // r9
  __int64 v406; // r12
  int v407; // ecx
  __int64 v408; // r14
  _BYTE *v409; // rax
  int v410; // r15d
  int v411; // ecx
  unsigned int v412; // ebx
  unsigned int v413; // ecx
  unsigned __int64 v414; // r11
  unsigned int v415; // r10d
  unsigned __int64 v416; // r8
  __int64 v417; // r9
  int v418; // ecx
  int v419; // ecx
  int v420; // ecx
  int v421; // ecx
  int v422; // ecx
  __int64 v423; // rax
  int v424; // eax
  int v425; // eax
  int v426; // eax
  int v427; // r14d
  unsigned __int64 v428; // rbx
  int v429; // eax
  __int64 v430; // rcx
  __int64 v431; // rax
  __int64 v432; // r15
  __int64 v433; // r8
  unsigned __int64 v434; // r12
  int v435; // ecx
  int v436; // r14d
  unsigned int v437; // eax
  _BYTE *v438; // r13
  int v439; // edx
  unsigned int v440; // ecx
  __int64 v441; // r9
  _QWORD *v442; // rax
  int v443; // r8d
  unsigned __int64 v444; // rdx
  int v445; // ebx
  int v446; // ecx
  int v447; // ecx
  _BYTE *v448; // rbx
  _QWORD *v449; // rax
  __int64 v450; // rdx
  _QWORD *v451; // r15
  _QWORD *v452; // r9
  int v453; // r10d
  const char *v454; // rax
  unsigned __int64 v455; // rdx
  __int64 v456; // r8
  unsigned __int64 v457; // rax
  __int64 v458; // rax
  unsigned __int64 nn; // rax
  int v460; // r14d
  __int64 v461; // r15
  unsigned __int64 v462; // rbx
  __int64 v463; // rcx
  unsigned __int8 v464; // r12
  unsigned __int64 v465; // rcx
  int v466; // ecx
  _QWORD *v467; // rax
  __int64 v468; // rdx
  unsigned int v469; // edx
  _QWORD *v470; // rax
  unsigned __int64 v471; // rcx
  __int64 v472; // rax
  unsigned int *v473; // r12
  __int64 v474; // rdx
  __int64 v475; // r8
  __int64 v476; // rcx
  _DWORD *v477; // rbx
  int v478; // r15d
  int v479; // ecx
  __int16 v480; // ax
  int v481; // r10d
  char *v482; // r8
  signed __int64 v483; // r9
  __int64 v484; // rdx
  __int64 v485; // rax
  __int64 *v486; // r9
  unsigned int v487; // r8d
  __int64 *v488; // r10
  __int64 v489; // rcx
  __int64 v490; // rax
  __int64 v491; // rdx
  __int64 v492; // rax
  char *v493; // r8
  signed __int64 v494; // r9
  int v495; // r10d
  __int64 v496; // rdx
  __int64 v497; // rax
  char *v498; // r8
  signed __int64 v499; // r9
  int v500; // r10d
  __int64 v501; // rdx
  __int64 v502; // rax
  unsigned int v503; // ecx
  __int64 v504; // r10
  unsigned int v505; // r14d
  unsigned int v506; // eax
  unsigned int v507; // ecx
  unsigned int v508; // ecx
  __int64 v509; // rax
  unsigned int v510; // edx
  char *v511; // r9
  _DWORD *v512; // rax
  const char *v513; // rax
  int v514; // r11d
  unsigned __int64 v515; // r8
  const char *v516; // rcx
  unsigned __int64 v517; // r10
  __int64 v518; // rax
  unsigned __int64 i1; // rax
  _BYTE *v520; // rax
  _BYTE *v521; // r13
  __int64 v522; // rdx
  int v523; // r8d
  __int64 v524; // rcx
  __int64 v525; // rdx
  int v526; // ecx
  __int64 v527; // rax
  __int64 v528; // rdx
  int v529; // ecx
  __int64 v530; // rdx
  int v531; // eax
  int v532; // ecx
  __int64 v533; // r15
  __int64 v534; // r8
  int v535; // ecx
  unsigned int v536; // eax
  _BYTE *v537; // rbx
  int v538; // edx
  unsigned int v539; // ecx
  __int64 v540; // r9
  int v541; // r8d
  unsigned __int64 v542; // rax
  int v543; // r14d
  int v544; // ecx
  int v545; // edi
  __int64 v546; // r14
  unsigned int *v547; // r11
  _QWORD **v548; // r13
  unsigned __int64 v549; // r12
  int v550; // ecx
  _QWORD *v551; // r15
  _QWORD *v552; // rax
  __int64 v553; // rdx
  const char *v554; // rax
  int v555; // r10d
  unsigned __int64 v556; // rdx
  int v557; // r9d
  unsigned __int64 v558; // r8
  __int64 v559; // rax
  unsigned __int64 i2; // rax
  int v561; // r13d
  int *v562; // rcx
  int v563; // r14d
  __int64 v564; // r15
  unsigned int v565; // eax
  __int64 v566; // rax
  __int64 v567; // r12
  int v568; // edx
  unsigned int v569; // ecx
  __int64 v570; // r9
  int v571; // r8d
  unsigned __int64 v572; // rax
  int v573; // ebx
  int v574; // ecx
  __int64 v575; // rbx
  _QWORD *v576; // rax
  int v577; // ecx
  __int64 v578; // rdx
  unsigned __int64 v579; // r15
  unsigned int v580; // r14d
  _QWORD *v581; // r10
  const char *v582; // rax
  int v583; // r11d
  unsigned __int64 v584; // rdx
  unsigned __int64 v585; // rcx
  unsigned int v586; // r9d
  unsigned __int64 v587; // r8
  __int64 v588; // rax
  unsigned __int64 i3; // rax
  __int64 v590; // rbx
  unsigned __int64 v591; // r14
  __int64 v592; // r15
  __int64 v593; // rax
  __int64 v594; // rcx
  unsigned __int64 v595; // rcx
  _QWORD *v596; // rax
  _QWORD *v597; // rax
  ULONG_PTR v598; // rbx
  __int64 v599; // rax
  __int64 v600; // r15
  unsigned __int16 v601; // r13
  unsigned __int128 v602; // rax
  unsigned int v603; // r14d
  unsigned int *v604; // rbx
  unsigned int v605; // r9d
  unsigned int *v606; // r8
  int *v608; // r12
  int v609; // ecx
  unsigned int v610; // r13d
  unsigned int v611; // r15d
  unsigned int v612; // eax
  _BYTE *v613; // r12
  unsigned int *v614; // r10
  __int64 v615; // r15
  __int16 v616; // r13
  __int64 v617; // rax
  __int64 v618; // rcx
  __int64 v619; // rax
  __int64 v620; // r14
  unsigned int v621; // eax
  __int64 v622; // rax
  __int64 v623; // r11
  int v624; // edx
  unsigned int v625; // ecx
  __int64 v626; // r9
  int v627; // r8d
  unsigned __int64 v628; // rax
  int v629; // ebx
  int v630; // ecx
  __int64 v631; // rdx
  _QWORD *v632; // rax
  int v633; // ecx
  __int64 v634; // r8
  __int64 v635; // rax
  unsigned __int64 v636; // rcx
  unsigned __int64 i4; // rax
  unsigned int *v638; // r14
  __int64 v639; // rax
  __int64 v640; // rcx
  unsigned int *v641; // r13
  __int64 v642; // rcx
  __int64 v643; // rax
  unsigned __int64 v644; // r8
  unsigned __int64 v645; // r11
  __int64 v646; // rdx
  _DWORD *v647; // rax
  __int64 v648; // rcx
  __int64 v649; // rdi
  unsigned int *v650; // r12
  _BYTE *v651; // rsi
  char *v652; // rbx
  int v653; // r11d
  int v654; // ecx
  __int16 v655; // ax
  char *v656; // r8
  int v657; // r10d
  signed __int64 v658; // r9
  __int64 v659; // rdx
  __int64 v660; // rax
  __int64 *v661; // r9
  unsigned int v662; // r8d
  __int64 *v663; // r10
  __int64 v664; // rcx
  __int64 v665; // rax
  __int64 v666; // rdx
  __int64 v667; // rax
  char *v668; // r8
  signed __int64 v669; // r9
  int v670; // r10d
  __int64 v671; // rdx
  __int64 v672; // rax
  char *v673; // r8
  signed __int64 v674; // r9
  int v675; // r10d
  __int64 v676; // rdx
  __int64 v677; // rax
  unsigned int v678; // ecx
  unsigned int v679; // edx
  unsigned int v680; // ecx
  unsigned int v681; // r14d
  unsigned int v682; // r15d
  unsigned int *v683; // rax
  unsigned int v684; // r13d
  bool v685; // cf
  unsigned int *v686; // rdx
  unsigned int v687; // r11d
  unsigned int v688; // r8d
  _QWORD *v689; // r10
  const char *v690; // r9
  const char *v691; // rbx
  const char *v692; // rax
  int v693; // ecx
  unsigned __int64 i5; // rdx
  unsigned __int64 v695; // rax
  __int64 v696; // rax
  unsigned __int64 i6; // rax
  bool v698; // cc
  unsigned int *v699; // r15
  unsigned int v700; // r14d
  __int64 v701; // r12
  unsigned int *v702; // rax
  __int64 v703; // rdx
  __int64 v704; // rax
  unsigned __int64 *v705; // r9
  unsigned int *v706; // rdx
  unsigned int v707; // r8d
  _QWORD *v708; // r10
  unsigned __int64 v709; // rbx
  unsigned int i7; // r11d
  const char *v711; // rax
  int v712; // ecx
  unsigned __int64 v713; // rdx
  unsigned __int64 v714; // r9
  __int64 v715; // rax
  unsigned __int64 i8; // rax
  unsigned int *v717; // rdx
  unsigned int v718; // r11d
  unsigned int v719; // r8d
  _QWORD *v720; // r10
  const char *v721; // r9
  const char *v722; // rbx
  const char *v723; // rax
  int v724; // ecx
  unsigned __int64 i9; // rdx
  unsigned __int64 v726; // rax
  __int64 v727; // rax
  unsigned __int64 i10; // rax
  char *v729; // rbx
  int v730; // r15d
  __int64 v731; // r13
  __int64 v732; // rax
  __int64 v733; // r14
  __int64 v734; // r15
  _QWORD *v735; // rcx
  int v736; // edx
  __int64 v737; // r8
  char v738; // al
  __int64 v739; // rax
  __int64 v740; // rax
  char *v741; // rbx
  __int64 v742; // r15
  __int64 v743; // r14
  _QWORD *v744; // rcx
  int v745; // edx
  __int64 v746; // r8
  char v747; // al
  __int64 v748; // rax
  __int64 v749; // rax
  char *v750; // rbx
  __int64 i11; // r14
  _QWORD *v752; // rcx
  int v753; // edx
  __int64 v754; // r8
  char v755; // al
  __int64 v756; // rax
  __int64 v757; // rax
  int v758; // ebx
  unsigned __int64 v759; // rbx
  __int64 v760; // r8
  unsigned __int64 v761; // rdx
  _QWORD *v762; // r9
  unsigned __int64 v763; // r8
  const char *v764; // rax
  int v765; // r10d
  unsigned __int64 v766; // rdx
  unsigned __int64 v767; // rax
  __int64 v768; // rax
  unsigned __int64 mm; // rax
  __int64 v770; // rax
  unsigned int v771; // edx
  __int64 v772; // rcx
  unsigned int *v773; // r12
  unsigned int v774; // eax
  char *v775; // rdi
  __int64 v776; // r13
  char *v777; // rbx
  __int64 v778; // r15
  __int64 v779; // r14
  _QWORD *v780; // rcx
  int v781; // edx
  __int64 v782; // r8
  char v783; // al
  __int64 v784; // rax
  __int64 v785; // rax
  int v786; // ecx
  int v787; // ecx
  __int64 v788; // rcx
  __int64 v789; // rbx
  unsigned int v790; // ebx
  unsigned __int64 v791; // rax
  __int64 v792; // r14
  unsigned int v793; // r14d
  unsigned __int64 v794; // rax
  __int64 v795; // rcx
  unsigned __int64 v796; // rcx
  __int64 v797; // rcx
  unsigned __int64 v798; // rcx
  char *v799; // rax
  _QWORD *v800; // r8
  unsigned __int64 v801; // rdx
  const char *v802; // rax
  __int64 v803; // r9
  unsigned __int64 v804; // rbx
  unsigned __int64 v805; // rcx
  unsigned __int64 v806; // rax
  __int64 v807; // rax
  unsigned __int64 i18; // rax
  unsigned int v809; // ebx
  _QWORD *v810; // rcx
  int v811; // edx
  __int64 v812; // r8
  char v813; // al
  __int64 v814; // rdx
  __int64 v815; // rdi
  __int64 v816; // rcx
  unsigned int v817; // r9d
  unsigned __int16 *v818; // rdi
  __int64 v819; // r8
  __int64 v820; // r14
  unsigned __int64 v821; // r13
  __int64 v822; // r15
  unsigned __int8 v823; // r12
  __int64 v824; // rcx
  __int64 v825; // rdx
  unsigned __int64 v826; // rbx
  __int64 v827; // r15
  __int64 v828; // rax
  __int64 v829; // rax
  int v830; // r15d
  unsigned __int64 v831; // rdx
  __int64 v832; // rax
  unsigned int *v833; // rax
  __int64 v834; // rcx
  _QWORD *v835; // r11
  int v836; // edx
  _QWORD *v837; // r8
  int v838; // r9d
  const char *v839; // rax
  unsigned __int64 v840; // r14
  __int64 v841; // rax
  __int64 v842; // rax
  unsigned __int64 i19; // rax
  unsigned int *v844; // rax
  __int64 v845; // rdx
  __int64 v846; // rax
  _QWORD *v847; // rdx
  unsigned int v848; // r14d
  unsigned int v849; // r10d
  const char *v850; // rax
  unsigned __int64 v851; // rbx
  __int64 v852; // r8
  __int64 v853; // r9
  __int64 v854; // rcx
  __int64 v855; // rax
  unsigned __int64 i20; // rax
  unsigned int v857; // ebx
  int *v858; // rdx
  __int64 v859; // rax
  __int64 v860; // rcx
  __int64 v861; // rcx
  _QWORD *v862; // r9
  unsigned __int64 v863; // r8
  const char *v864; // rax
  int v865; // r10d
  unsigned __int64 v866; // rdx
  unsigned __int64 v867; // rax
  __int64 v868; // rax
  unsigned __int64 i24; // rax
  __int64 v870; // rax
  unsigned int v871; // edx
  __int64 v872; // rcx
  __int64 v873; // rcx
  unsigned __int64 v874; // rbx
  unsigned __int8 v875; // r13
  unsigned int *v876; // rax
  __int64 v877; // rdx
  __int64 v878; // r14
  unsigned __int64 v879; // r15
  __int64 v880; // r8
  __int64 *v881; // r9
  __int64 *v882; // r10
  __int64 v883; // rcx
  __int64 v884; // rax
  __int64 v885; // rax
  int *v886; // r12
  __int64 v887; // rcx
  unsigned __int64 v888; // rbx
  unsigned __int8 v889; // r15
  unsigned __int64 v890; // rdx
  unsigned __int64 v891; // r14
  unsigned __int64 v892; // rcx
  unsigned __int64 v893; // rax
  _QWORD *v894; // r9
  unsigned __int64 v895; // r8
  const char *v896; // rax
  int v897; // r11d
  unsigned __int64 v898; // rdx
  unsigned __int64 v899; // r10
  __int64 v900; // rax
  unsigned __int64 i23; // rax
  __int64 v902; // rax
  unsigned int v903; // edx
  __int64 v904; // rcx
  int v905; // eax
  __int64 v906; // rdx
  __int64 v907; // r8
  __int64 v908; // rcx
  __int64 v909; // rax
  __int64 v910; // rcx
  __int64 v911; // r8
  __int64 v912; // rcx
  __int64 v913; // rax
  __int64 v914; // rbx
  int v915; // eax
  unsigned int *v916; // r15
  __int64 v917; // r14
  unsigned __int8 v918; // bl
  char v919; // al
  char v920; // r15
  int *v921; // r10
  char v922; // dl
  char v923; // r9
  __int64 v924; // r8
  unsigned __int64 v925; // rcx
  _QWORD *v926; // rbx
  unsigned __int8 v927; // di
  __int64 v928; // r15
  __int64 v929; // rdx
  unsigned __int64 v930; // r12
  __int64 v931; // rcx
  _QWORD *v932; // rcx
  int v933; // edx
  __int64 v934; // r8
  char v935; // al
  unsigned __int8 v936; // bl
  unsigned __int8 v937; // di
  int *v938; // r10
  char v939; // dl
  char v940; // r9
  __int64 v941; // r8
  unsigned __int64 v942; // rcx
  char v943; // al
  unsigned __int64 v944; // rdx
  _QWORD *v945; // rbx
  __int64 v946; // r15
  __int64 v947; // rdx
  unsigned __int64 v948; // r12
  __int64 v949; // rcx
  _QWORD *v950; // rcx
  __int64 v951; // r8
  char v952; // al
  __int64 v953; // r14
  unsigned __int8 v954; // bl
  unsigned __int8 v955; // r13
  int *v956; // r10
  char v957; // dl
  char v958; // r9
  __int64 v959; // r8
  unsigned __int64 v960; // rcx
  unsigned __int64 v961; // rdx
  _QWORD *v962; // rbx
  __int64 v963; // rdi
  char *v964; // r15
  __int64 v965; // rdx
  unsigned __int64 v966; // r12
  __int64 v967; // rcx
  _QWORD *v968; // rcx
  __int64 v969; // r8
  char v970; // al
  __int64 v971; // r9
  __int64 v972; // r8
  unsigned __int64 v973; // rcx
  __int64 v974; // rbx
  _DWORD *v975; // r15
  unsigned __int64 v976; // r13
  unsigned int v977; // edx
  __int64 v978; // rax
  __int64 v979; // rcx
  unsigned __int64 v980; // r12
  char *v981; // r14
  __int64 v982; // rax
  unsigned __int64 v983; // rdi
  int *v984; // r13
  _QWORD *v985; // r11
  unsigned int v986; // r8d
  _QWORD *v987; // r9
  int v988; // r10d
  const char *v989; // rax
  unsigned __int64 v990; // rdx
  unsigned __int64 v991; // rcx
  unsigned __int64 v992; // rax
  __int64 v993; // rax
  unsigned __int64 i21; // rax
  __int64 v995; // rcx
  unsigned int v996; // ecx
  unsigned __int64 v997; // r14
  int *v998; // r12
  _DWORD *v999; // r10
  __int64 v1000; // r15
  _QWORD *v1001; // r11
  unsigned int v1002; // r8d
  _QWORD *v1003; // r9
  int v1004; // ebx
  const char *v1005; // rax
  unsigned __int64 v1006; // rdx
  unsigned __int64 v1007; // rcx
  unsigned __int64 v1008; // rax
  __int64 v1009; // rax
  unsigned __int64 i22; // rax
  unsigned int v1011; // edx
  unsigned int *v1012; // r14
  __int64 v1013; // rbx
  int v1014; // eax
  __int64 v1015; // rax
  __int64 v1016; // r11
  int v1017; // r13d
  __int64 v1018; // r9
  unsigned int v1019; // r14d
  __int64 v1020; // r15
  unsigned int *v1021; // r10
  unsigned __int64 v1022; // rcx
  unsigned __int128 v1023; // rax
  unsigned __int64 v1024; // rcx
  unsigned __int64 v1025; // rdx
  unsigned __int128 v1026; // rax
  unsigned __int64 v1027; // rdx
  unsigned __int128 v1028; // rax
  int v1029; // ecx
  __int64 v1030; // rbx
  unsigned __int64 v1031; // rcx
  unsigned __int128 v1032; // rax
  int v1033; // ecx
  __int64 v1034; // r10
  _QWORD *v1035; // rax
  unsigned __int64 v1036; // r8
  __int64 *v1037; // r9
  __int64 v1038; // rdx
  __int64 v1039; // rcx
  _QWORD *v1040; // rdx
  _QWORD *v1041; // rax
  __int64 v1042; // r9
  int v1043; // ecx
  __int64 v1044; // r15
  __int64 v1045; // r11
  unsigned __int64 v1046; // r8
  __int64 *v1047; // r10
  __int64 v1048; // rdx
  unsigned int v1049; // r14d
  __int64 v1050; // rax
  int v1051; // ecx
  int v1052; // eax
  __int64 v1053; // rcx
  _BYTE *v1054; // rbx
  __int64 v1055; // r14
  int v1056; // r15d
  __int64 v1057; // r13
  __int64 v1058; // r12
  char v1059; // r10
  unsigned __int64 v1060; // r14
  unsigned __int64 v1061; // r15
  _QWORD *v1062; // r9
  int v1063; // edx
  unsigned int v1064; // edx
  const char *v1065; // rax
  unsigned __int64 v1066; // rcx
  unsigned __int64 v1067; // r8
  __int64 v1068; // rax
  _QWORD *v1069; // rdx
  __int64 v1070; // r13
  const char *v1071; // rax
  char v1072; // r10
  int v1073; // r8d
  __int64 v1074; // rax
  unsigned __int64 v1075; // r13
  __int64 v1076; // rax
  unsigned __int64 v1077; // rcx
  unsigned __int128 v1078; // rax
  unsigned __int64 v1079; // rcx
  int v1080; // ecx
  int v1081; // ecx
  unsigned int v1082; // r9d
  int v1083; // ecx
  int v1084; // ecx
  int v1085; // ecx
  unsigned __int64 v1086; // rcx
  __int64 v1087; // rax
  unsigned __int128 v1088; // rt2
  unsigned int v1089; // r9d
  __int64 *v1090; // rax
  __int64 *v1091; // r14
  int v1092; // ecx
  __int64 v1093; // rdx
  unsigned __int64 v1094; // r8
  __int64 v1095; // rax
  __int64 *v1096; // rcx
  unsigned __int64 v1097; // rax
  __int64 v1098; // rcx
  char v1099; // r12
  __int64 v1100; // rax
  __int64 v1101; // r9
  __int64 *v1102; // r11
  __int64 *v1103; // rdi
  int v1104; // r14d
  int v1105; // ecx
  __int16 v1106; // ax
  int v1107; // r10d
  char *v1108; // r9
  __int64 v1109; // rdx
  __int64 v1110; // rax
  __int64 *v1111; // r9
  __int64 *v1112; // r10
  __int64 v1113; // rcx
  __int64 v1114; // rax
  __int64 v1115; // rdx
  __int64 v1116; // rax
  char *v1117; // r9
  int v1118; // r10d
  __int64 v1119; // rdx
  __int64 v1120; // rax
  char *v1121; // r9
  int v1122; // r10d
  __int64 v1123; // rdx
  __int64 v1124; // rax
  unsigned int v1125; // ecx
  unsigned int v1126; // edx
  const char *v1127; // rax
  unsigned __int64 v1128; // rcx
  __int64 v1129; // r10
  unsigned __int64 v1130; // r9
  __int64 v1131; // rax
  int v1132; // edx
  __int64 v1133; // r15
  __int64 v1134; // rcx
  __int64 v1135; // rax
  __int64 v1136; // r12
  __int64 v1137; // r15
  __int64 v1138; // rax
  __int64 v1139; // r14
  __int64 *v1140; // rax
  unsigned int v1141; // ecx
  int v1142; // r8d
  __int64 v1143; // r9
  int *v1144; // r10
  unsigned int v1145; // r8d
  unsigned int v1146; // ecx
  int v1147; // eax
  _BYTE *v1148; // r14
  __int64 v1149; // r12
  __int64 v1150; // r13
  const char *v1151; // r15
  unsigned int v1152; // eax
  unsigned int v1153; // r12d
  int v1154; // edx
  unsigned int v1155; // ecx
  __int64 v1156; // r9
  int v1157; // r8d
  unsigned __int64 v1158; // rax
  int v1159; // ebx
  int v1160; // ecx
  int v1161; // ecx
  _QWORD *v1162; // rax
  __int64 v1163; // rdx
  const char *v1164; // rax
  int v1165; // r10d
  const char *v1166; // rcx
  unsigned int v1167; // r8d
  unsigned __int64 v1168; // rax
  __int64 v1169; // rax
  unsigned __int64 i25; // rax
  int v1171; // r15d
  __int64 v1172; // r13
  unsigned int v1173; // eax
  __int64 v1174; // rsi
  int v1175; // edx
  unsigned int v1176; // ecx
  __int64 v1177; // r9
  int v1178; // r8d
  unsigned __int64 v1179; // rax
  int v1180; // ebx
  int v1181; // ecx
  __int64 v1182; // rbx
  int v1183; // ecx
  _QWORD *v1184; // rax
  __int64 v1185; // rdx
  int v1186; // r10d
  const char *v1187; // rax
  int v1188; // r8d
  __int64 v1189; // rax
  __int64 v1190; // rax
  unsigned __int64 i26; // rax
  __int64 v1192; // rax
  unsigned int v1193; // esi
  int v1194; // ebx
  __int64 v1195; // rdi
  __int64 v1196; // r15
  unsigned int v1197; // ecx
  int v1198; // edx
  unsigned int v1199; // ecx
  __int64 v1200; // r9
  int v1201; // r8d
  unsigned __int64 v1202; // rax
  int v1203; // ebx
  int v1204; // ecx
  int v1205; // eax
  __int64 v1206; // rcx
  int v1207; // edx
  _QWORD *v1208; // rax
  __int64 v1209; // r8
  unsigned __int64 v1210; // rdx
  unsigned __int64 i37; // rax
  __int64 v1212; // rax
  unsigned int v1213; // r13d
  int *v1214; // rcx
  int *v1215; // r12
  __int64 v1216; // r15
  int v1217; // r8d
  unsigned __int8 *v1218; // r9
  const char *v1219; // rax
  __int64 v1220; // rax
  unsigned __int64 i38; // rax
  int v1222; // r9d
  __int64 v1223; // rax
  __int64 v1224; // rcx
  __int64 v1225; // rax
  unsigned __int64 v1226; // r9
  __int64 v1227; // r15
  __int64 v1228; // r12
  _BYTE *v1229; // rax
  int v1230; // r13d
  int v1231; // ecx
  unsigned int v1232; // r14d
  int v1233; // ecx
  unsigned int v1234; // edx
  unsigned int v1235; // r10d
  _BYTE *v1236; // r11
  _BYTE *v1237; // r8
  __int64 v1238; // r9
  int v1239; // ecx
  int v1240; // ecx
  int v1241; // ecx
  int v1242; // ecx
  int v1243; // ecx
  __int64 v1244; // rax
  int v1245; // eax
  int v1246; // eax
  unsigned int *v1247; // r13
  __int64 v1248; // rax
  __int64 v1249; // r15
  _BYTE *v1250; // rax
  int v1251; // r12d
  int v1252; // ecx
  unsigned int v1253; // r14d
  int v1254; // ecx
  unsigned int v1255; // r10d
  _BYTE *v1256; // r11
  _BYTE *v1257; // r8
  __int64 v1258; // r9
  int v1259; // ecx
  int v1260; // ecx
  int v1261; // ecx
  int v1262; // ecx
  int v1263; // ecx
  __int64 v1264; // rax
  int v1265; // eax
  int v1266; // eax
  int v1267; // eax
  unsigned __int64 v1268; // r14
  int v1269; // eax
  int v1270; // ecx
  __int64 v1271; // rcx
  __int64 v1272; // rax
  __int64 v1273; // r15
  __int64 v1274; // r8
  unsigned __int64 v1275; // r12
  unsigned int v1276; // r13d
  unsigned int v1277; // eax
  _BYTE *v1278; // r14
  int v1279; // edx
  unsigned int v1280; // ecx
  __int64 v1281; // r9
  int v1282; // r8d
  unsigned __int64 v1283; // rax
  int v1284; // ebx
  int v1285; // ecx
  _BYTE *v1286; // r10
  _QWORD *v1287; // rax
  int v1288; // ecx
  __int64 v1289; // rdx
  _QWORD *v1290; // r8
  _QWORD *v1291; // r9
  const char *v1292; // rax
  int v1293; // r11d
  unsigned __int64 v1294; // rdx
  __int64 v1295; // r8
  unsigned __int64 v1296; // rax
  __int64 v1297; // rax
  unsigned __int64 i28; // rax
  __int64 v1299; // r15
  unsigned __int64 v1300; // rbx
  __int64 v1301; // rcx
  unsigned __int8 v1302; // r12
  unsigned __int64 v1303; // rcx
  __int128 v1304; // xmm0
  int v1305; // ecx
  _QWORD *v1306; // rax
  __int64 v1307; // rdx
  _QWORD *v1308; // rax
  unsigned __int64 v1309; // rcx
  unsigned int v1310; // ebx
  __int64 v1311; // rax
  unsigned int *v1312; // r15
  unsigned int v1313; // r13d
  __int64 v1314; // r8
  __int64 v1315; // rdx
  unsigned int *v1316; // rcx
  char *v1317; // r10
  int v1318; // esi
  int v1319; // ecx
  __int16 v1320; // ax
  char *v1321; // r8
  int v1322; // r11d
  signed __int64 v1323; // r9
  __int64 v1324; // rdx
  __int64 v1325; // rax
  __int64 *v1326; // r9
  unsigned int v1327; // r8d
  __int64 *v1328; // r11
  __int64 v1329; // rcx
  __int64 v1330; // rax
  __int64 v1331; // rdx
  __int64 v1332; // rax
  char *v1333; // r8
  signed __int64 v1334; // r9
  int v1335; // r11d
  __int64 v1336; // rdx
  __int64 v1337; // rax
  char *v1338; // r8
  signed __int64 v1339; // r9
  int v1340; // r11d
  __int64 v1341; // rdx
  __int64 v1342; // rax
  unsigned int v1343; // ecx
  __int64 v1344; // rdx
  unsigned int v1345; // r12d
  unsigned int v1346; // eax
  __int64 v1347; // rax
  unsigned int v1348; // r8d
  char *v1349; // r9
  _DWORD *v1350; // rax
  const char *v1351; // rax
  int v1352; // ebx
  unsigned __int64 v1353; // rdx
  const char *v1354; // rcx
  unsigned __int64 v1355; // r11
  __int64 v1356; // rax
  unsigned __int64 i29; // rax
  int v1358; // ecx
  __int64 v1359; // rcx
  __int64 v1360; // rax
  __int64 v1361; // rdx
  int v1362; // ecx
  __int64 v1363; // rax
  __int64 v1364; // rdx
  int v1365; // ecx
  __int64 v1366; // rax
  int v1367; // ecx
  __int64 v1368; // r15
  __int64 v1369; // r8
  unsigned int v1370; // eax
  int v1371; // edx
  unsigned int v1372; // ecx
  __int64 v1373; // r9
  int v1374; // r8d
  unsigned __int64 v1375; // rax
  int v1376; // esi
  int v1377; // ecx
  __int64 v1378; // r8
  unsigned __int64 *v1379; // r15
  unsigned int *v1380; // r12
  __int64 v1381; // r13
  unsigned __int64 v1382; // rsi
  int v1383; // ecx
  _QWORD *v1384; // rax
  __int64 v1385; // rdx
  const char *v1386; // rax
  int v1387; // r14d
  int v1388; // r10d
  unsigned __int64 v1389; // r11
  __int64 v1390; // rax
  unsigned __int64 i30; // rax
  __int64 v1392; // rax
  _DWORD *v1393; // rax
  __int64 v1394; // r15
  unsigned int v1395; // eax
  __int64 v1396; // r14
  int v1397; // edx
  unsigned int v1398; // ecx
  __int64 v1399; // r9
  int v1400; // r8d
  unsigned __int64 v1401; // rax
  int v1402; // ebx
  int v1403; // ecx
  __int64 v1404; // r10
  _QWORD *v1405; // rax
  int v1406; // ecx
  __int64 v1407; // rdx
  unsigned __int64 v1408; // rsi
  unsigned __int64 v1409; // r11
  const char *v1410; // rax
  int v1411; // ebx
  unsigned __int64 v1412; // r11
  __int64 v1413; // rax
  unsigned __int64 i31; // rax
  __int64 v1415; // rax
  __int64 v1416; // r14
  unsigned __int64 v1417; // r15
  __int64 v1418; // r13
  __int64 v1419; // rax
  __int64 v1420; // rcx
  unsigned __int64 v1421; // rcx
  _QWORD *v1422; // rax
  _QWORD *v1423; // rax
  ULONG_PTR v1424; // r14
  __int64 v1425; // rax
  __int64 v1426; // r13
  unsigned __int16 v1427; // r12
  unsigned __int128 v1428; // rax
  unsigned __int64 v1429; // r10
  unsigned __int64 v1430; // r10
  unsigned int *v1431; // r14
  unsigned int *v1432; // r11
  __int64 v1433; // r8
  unsigned int v1434; // r15d
  int *v1435; // r12
  int v1436; // ecx
  unsigned int v1437; // r13d
  unsigned int v1438; // eax
  unsigned __int64 v1439; // r10
  __int64 v1440; // r13
  __int16 v1441; // r12
  __int64 v1442; // rax
  __int64 v1443; // rax
  __int64 v1444; // r15
  unsigned int v1445; // eax
  __int64 v1446; // r14
  int v1447; // edx
  unsigned int v1448; // ecx
  __int64 v1449; // r9
  int v1450; // r8d
  unsigned __int64 v1451; // rax
  int v1452; // ebx
  int v1453; // ecx
  __int64 v1454; // rcx
  _QWORD *v1455; // rax
  int v1456; // edx
  __int64 v1457; // r8
  unsigned int *v1458; // r15
  unsigned __int64 v1459; // rdx
  unsigned __int64 i32; // rax
  __int64 v1461; // rax
  __int64 v1462; // rcx
  unsigned int v1463; // r12d
  __int64 v1464; // rcx
  __int64 v1465; // rax
  unsigned __int64 v1466; // r8
  unsigned __int64 v1467; // rsi
  _DWORD *v1468; // rax
  __int64 v1469; // rcx
  char *v1470; // r11
  unsigned int *v1471; // rdi
  __int64 v1472; // rbx
  unsigned int *v1473; // rsi
  int v1474; // r13d
  int v1475; // ecx
  __int16 v1476; // ax
  char *v1477; // r8
  int v1478; // r10d
  signed __int64 v1479; // r9
  __int64 v1480; // rdx
  __int64 v1481; // rax
  __int64 *v1482; // r9
  unsigned int v1483; // r8d
  __int64 *v1484; // r10
  __int64 v1485; // rcx
  __int64 v1486; // rax
  __int64 v1487; // rdx
  __int64 v1488; // rax
  char *v1489; // r8
  signed __int64 v1490; // r9
  int v1491; // r10d
  __int64 v1492; // rdx
  __int64 v1493; // rax
  char *v1494; // r8
  signed __int64 v1495; // r9
  int v1496; // r10d
  __int64 v1497; // rdx
  __int64 v1498; // rax
  unsigned int v1499; // ecx
  unsigned int v1500; // ecx
  unsigned int v1501; // r15d
  unsigned int i33; // r10d
  bool v1503; // cf
  unsigned int *v1504; // rcx
  unsigned __int64 *v1505; // rdx
  __int64 v1506; // rax
  unsigned int v1507; // r9d
  _QWORD *v1508; // r8
  unsigned __int64 v1509; // r11
  const char *v1510; // rax
  int v1511; // ecx
  unsigned __int64 v1512; // rdx
  unsigned __int64 v1513; // rax
  __int64 v1514; // rax
  unsigned __int64 i36; // rax
  unsigned int *v1516; // r12
  unsigned int v1517; // r15d
  _BYTE *v1518; // rax
  __int64 v1519; // rax
  unsigned int *v1520; // rcx
  unsigned __int64 *v1521; // rdx
  unsigned int v1522; // r8d
  unsigned int v1523; // r8d
  _QWORD *v1524; // r9
  unsigned __int64 v1525; // rsi
  const char *v1526; // rax
  int v1527; // ecx
  unsigned __int64 v1528; // rdx
  unsigned __int64 v1529; // rax
  __int64 v1530; // rax
  unsigned __int64 i34; // rax
  unsigned int v1532; // eax
  unsigned int v1533; // r9d
  __int64 v1534; // rax
  unsigned int *v1535; // rcx
  unsigned int v1536; // r9d
  _QWORD *v1537; // r8
  unsigned __int64 v1538; // r11
  const char *v1539; // rax
  int v1540; // ecx
  unsigned __int64 v1541; // rax
  __int64 v1542; // rax
  unsigned __int64 i35; // rax
  _BYTE *v1544; // rax
  __int64 v1545; // rax
  __int64 v1546; // rcx
  __int64 v1547; // rax
  __int64 v1548; // r15
  __int64 v1549; // rcx
  __int64 v1550; // r15
  __int64 i27; // r14
  __int64 v1552; // rax
  int v1553; // eax
  __int64 v1554; // rax
  __int64 v1555; // r14
  int v1556; // eax
  __int64 v1557; // rax
  __int64 v1558; // rcx
  __int64 v1559; // rbx
  int v1560; // r14d
  __int64 v1561; // rcx
  __int64 v1562; // rbx
  int v1563; // eax
  __int64 v1564; // rax
  __int64 v1565; // rbx
  unsigned __int64 v1566; // rcx
  unsigned __int128 v1567; // rax
  __int64 v1568; // rcx
  __int64 v1569; // rax
  int *v1570; // r14
  _QWORD *v1571; // r8
  unsigned __int64 v1572; // r9
  const char *v1573; // rax
  int v1574; // r11d
  unsigned __int64 v1575; // r10
  __int64 v1576; // rax
  unsigned __int64 i39; // rax
  __int64 v1578; // rax
  __int64 v1579; // rcx
  unsigned __int64 v1580; // rcx
  unsigned __int64 i40; // rax
  unsigned __int64 v1582; // rcx
  unsigned __int128 v1583; // rax
  __int64 v1584; // rcx
  __int64 *v1585; // r12
  __int64 v1586; // r8
  unsigned __int64 v1587; // rcx
  __int64 v1588; // rax
  unsigned __int128 v1589; // rt2
  int v1590; // ebx
  unsigned __int64 v1591; // rcx
  unsigned __int128 v1592; // rax
  unsigned __int64 v1593; // r15
  __int64 v1594; // rax
  __int64 v1595; // r11
  int v1596; // r9d
  unsigned __int64 *v1597; // r8
  unsigned __int64 v1598; // r10
  unsigned __int64 v1599; // rcx
  unsigned __int128 v1600; // rax
  unsigned __int64 v1601; // rcx
  unsigned __int64 v1602; // rcx
  unsigned int v1603; // ebx
  unsigned __int64 v1604; // r9
  unsigned __int64 *v1605; // r8
  unsigned __int64 v1606; // r10
  unsigned __int64 v1607; // rcx
  unsigned __int128 v1608; // rax
  unsigned __int64 v1609; // rcx
  unsigned __int64 v1610; // rcx
  int v1611; // r8d
  char *v1612; // rcx
  _QWORD *v1613; // rdx
  __int64 v1614; // rdi
  char v1615; // al
  unsigned int v1616; // r10d
  int v1617; // r15d
  int v1618; // r10d
  unsigned int v1619; // r15d
  _QWORD *v1620; // rbx
  _QWORD *v1621; // r8
  unsigned __int64 v1622; // rcx
  int v1623; // r11d
  unsigned __int128 v1624; // rax
  char *v1625; // rcx
  __int64 v1626; // r12
  __int64 v1627; // rdx
  char v1628; // al
  _QWORD *v1629; // rax
  __int64 v1630; // rdx
  int v1631; // ecx
  _QWORD *v1632; // r11
  const char *v1633; // rax
  unsigned __int64 v1634; // r8
  int v1635; // r13d
  __int64 v1636; // rdx
  unsigned __int64 v1637; // rax
  __int64 v1638; // rax
  char *v1639; // rcx
  int v1640; // r8d
  __int64 v1641; // r11
  __int64 v1642; // r14
  char v1643; // al
  _QWORD *v1644; // rcx
  int v1645; // edx
  _QWORD *v1646; // rdx
  unsigned __int64 v1647; // rcx
  unsigned __int128 v1648; // rax
  unsigned __int64 v1649; // r13
  unsigned int v1650; // ebx
  __int64 v1651; // r15
  int v1652; // r12d
  __int64 *v1653; // r11
  __int64 v1654; // r10
  __int64 v1655; // rdx
  __int64 v1656; // r8
  __int64 v1657; // rdi
  __int64 v1658; // rdx
  __int64 v1659; // rdx
  char v1660; // cl
  __int64 v1661; // rdx
  __int64 v1662; // r10
  _QWORD *v1663; // r9
  unsigned __int64 v1664; // r8
  const char *v1665; // rax
  int v1666; // r10d
  unsigned __int64 v1667; // rax
  __int64 v1668; // rax
  unsigned __int64 i41; // rax
  unsigned int v1670; // r9d
  unsigned __int64 v1671; // r15
  __int64 v1672; // rax
  unsigned int v1673; // r15d
  int v1674; // r9d
  unsigned int v1675; // r14d
  int v1676; // r13d
  int v1677; // r15d
  __int64 v1678; // rax
  unsigned int v1679; // r9d
  _QWORD *v1680; // r10
  _QWORD *v1681; // r8
  unsigned __int64 v1682; // rcx
  unsigned __int128 v1683; // rax
  char *v1684; // rcx
  __int64 v1685; // r11
  int v1686; // edx
  __int64 v1687; // r11
  __int64 v1688; // rbx
  char v1689; // al
  int v1690; // ecx
  _QWORD *v1691; // rax
  __int64 v1692; // rdx
  _QWORD *v1693; // rbx
  const char *v1694; // rax
  unsigned __int64 v1695; // rdx
  int v1696; // r12d
  __int64 v1697; // r8
  unsigned __int64 v1698; // r14
  __int64 v1699; // rax
  char *v1700; // rcx
  __int64 v1701; // rdx
  int v1702; // r12d
  char v1703; // al
  int v1704; // edx
  _QWORD *v1705; // rcx
  _QWORD *v1706; // rdx
  unsigned __int64 v1707; // rcx
  unsigned __int128 v1708; // rax
  unsigned __int64 v1709; // rdi
  __int64 v1710; // r15
  __int64 *v1711; // r10
  unsigned int v1712; // r11d
  __int64 v1713; // rbx
  __int64 v1714; // r9
  __int64 v1715; // rdx
  __int64 v1716; // r8
  int v1717; // r14d
  __int64 v1718; // rdx
  __int64 v1719; // rdx
  __int64 v1720; // r9
  int v1721; // r13d
  __int64 v1722; // rbx
  _QWORD *v1723; // r9
  int v1724; // r14d
  _QWORD *v1725; // rdx
  int v1726; // r8d
  char *v1727; // rcx
  __int64 v1728; // r10
  char v1729; // al
  int v1730; // ecx
  _QWORD *v1731; // rax
  __int64 v1732; // rdx
  _QWORD *v1733; // r10
  const char *v1734; // rax
  unsigned __int64 v1735; // r8
  int v1736; // r11d
  unsigned __int64 v1737; // rax
  __int64 v1738; // rax
  char *v1739; // rcx
  __int64 v1740; // r8
  char v1741; // al
  unsigned int v1742; // r11d
  unsigned __int64 v1743; // r14
  __int64 v1744; // r12
  __int64 v1745; // r13
  __int64 *v1746; // r10
  int v1747; // r11d
  unsigned int v1748; // ebx
  __int64 v1749; // r15
  __int64 v1750; // r9
  __int64 v1751; // rdx
  __int64 v1752; // r8
  __int64 v1753; // r12
  __int64 v1754; // rdx
  __int64 v1755; // rdx
  int v1756; // r11d
  unsigned int v1757; // r15d
  int v1758; // r13d
  int v1759; // r9d
  __int64 v1760; // rax
  unsigned int v1761; // r11d
  _QWORD *v1762; // r10
  _QWORD *v1763; // r8
  unsigned __int64 v1764; // rcx
  unsigned __int128 v1765; // rax
  char *v1766; // rcx
  __int64 v1767; // rbx
  int v1768; // edx
  __int64 v1769; // rbx
  __int64 v1770; // r14
  char v1771; // al
  int v1772; // ecx
  _QWORD *v1773; // rax
  __int64 v1774; // rdx
  _QWORD *v1775; // r14
  const char *v1776; // rax
  unsigned __int64 v1777; // rdx
  int v1778; // r12d
  __int64 v1779; // r8
  unsigned __int64 v1780; // r15
  __int64 v1781; // rax
  char *v1782; // rcx
  __int64 v1783; // rdx
  int v1784; // r12d
  char v1785; // al
  _QWORD *v1786; // rcx
  int v1787; // edx
  _QWORD *v1788; // rdx
  unsigned __int64 v1789; // rcx
  unsigned __int128 v1790; // rax
  unsigned __int64 v1791; // rdi
  __int64 v1792; // r14
  __int64 *v1793; // r10
  unsigned int v1794; // r11d
  __int64 v1795; // rbx
  __int64 v1796; // r9
  __int64 v1797; // rdx
  __int64 v1798; // r8
  int v1799; // r15d
  __int64 v1800; // rdx
  unsigned __int64 v1801; // rdx
  char v1802; // cl
  __int64 v1803; // rdx
  __int64 v1804; // r9
  unsigned __int64 v1805; // rcx
  unsigned __int64 v1806; // rcx
  char v1807; // cl
  __int64 v1808; // rdx
  __int64 v1809; // r9
  unsigned __int64 i42; // r13
  _DWORD *v1811; // r15
  unsigned __int64 v1812; // rcx
  __int64 v1813; // rax
  unsigned __int128 v1814; // rt2
  int v1815; // r8d
  char *v1816; // rbx
  char *v1817; // rcx
  _QWORD *v1818; // rdx
  __int64 v1819; // r9
  char v1820; // al
  int v1821; // eax
  int v1822; // r10d
  unsigned __int64 v1823; // rcx
  unsigned __int128 v1824; // rax
  int v1825; // r9d
  unsigned __int64 v1826; // rcx
  unsigned __int128 v1827; // rax
  int v1828; // edx
  __int64 v1829; // r8
  ULONG_PTR v1830; // rsi
  __int64 v1831; // r12
  __int64 v1832; // r13
  __int64 v1833; // rax
  __int64 v1834; // r9
  __int64 v1835; // rcx
  int v1836; // r10d
  __int64 v1837; // rdx
  _QWORD *v1838; // rax
  __int64 v1839; // r8
  int v1840; // r10d
  __int64 v1841; // rcx
  __int64 v1842; // r8
  _QWORD *v1843; // rax
  __int64 v1844; // rdx
  unsigned __int64 v1845; // rdx
  _QWORD *v1846; // r10
  ULONG_PTR v1847; // r9
  __int64 v1848; // r8
  unsigned __int64 v1849; // rcx
  unsigned __int128 v1850; // rax
  __int64 v1851; // rdx
  _QWORD *v1852; // rax
  int v1853; // ecx
  int v1854; // ecx
  int v1855; // ecx
  int v1856; // ecx
  __int64 v1857; // r8
  unsigned __int64 v1858; // rax
  unsigned __int128 v1859; // rax
  __int64 v1860; // rdx
  __int64 v1861; // rcx
  __int64 v1862; // rdi
  __int64 v1863; // rax
  int v1864; // edx
  _QWORD *v1865; // rcx
  __int64 v1866; // r13
  char v1867; // al
  __int64 v1868; // rdx
  __int64 v1869; // rcx
  int v1870; // r8d
  _QWORD *v1871; // rcx
  __int64 v1872; // r13
  char v1873; // al
  unsigned __int64 v1874; // rax
  unsigned __int128 v1875; // rax
  unsigned __int64 v1876; // rdi
  unsigned __int128 v1877; // rax
  __int64 v1878; // r9
  __int64 v1879; // r11
  __int64 v1880; // rbx
  __int64 v1881; // rsi
  struct _KPRCB *CurrentPrcb; // rax
  struct _KTHREAD *v1883; // r8
  unsigned __int64 DpcStack; // r13
  __int64 v1885; // rdi
  unsigned __int64 v1886; // r11
  unsigned __int64 v1887; // rsi
  unsigned __int64 v1888; // r15
  __int64 **v1889; // r14
  unsigned int v1890; // esi
  __int64 *v1891; // r12
  __int64 v1892; // rbx
  unsigned __int64 v1893; // rcx
  unsigned __int64 v1894; // rax
  __int64 v1895; // r10
  __int64 **v1896; // rcx
  char *v1897; // rdx
  int v1898; // r8d
  unsigned __int64 v1899; // r9
  signed __int64 v1900; // rdx
  int v1901; // ecx
  int v1902; // ecx
  int v1903; // ecx
  int v1904; // ecx
  int v1905; // ecx
  volatile signed __int32 *v1906; // rax
  __int64 v1907; // rax
  ULONG_PTR v1909; // r8
  ULONG_PTR v1910; // r8
  ULONG_PTR v1911; // r8
  ULONG_PTR v1912; // r8
  ULONG_PTR v1913; // r8
  ULONG_PTR v1914; // r8
  signed __int32 v1915[8]; // [rsp+900h] [rbp+900h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+920h] [rbp+920h]
  __int64 v1917; // [rsp+928h] [rbp+928h]
  _QWORD *v1918; // [rsp+938h] [rbp+938h]
  _BYTE v1919[2304]; // [rsp+9C0h] [rbp+9C0h] BYREF

  v1 = (_QWORD *)((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL);
  v2 = a1;
  if ( (*(_DWORD *)(a1 + 1680) & 0x110000) != 0x110000 )
  {
    v3 = v1 + 240;
    v4 = 304;
    v5 = 38LL;
    do
    {
      *v3 = 0LL;
      v4 -= 8;
      ++v3;
      --v5;
    }
    while ( v5 );
    for ( ; v4; --v4 )
    {
      *(_BYTE *)v3 = 0;
      v3 = (_QWORD *)((char *)v3 + 1);
    }
    *(_OWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x790) = *(_OWORD *)(v2 + 1456);
    *(_OWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x7A0) = *(_OWORD *)(v2 + 1472);
    v6 = *(_OWORD *)(v2 + 1488);
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2C2) = ((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                           + 1920;
    *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x790) = v2 + 1504;
    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x798) = (v2 + 1504) >> 32;
    *(_OWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x8A0) = v6;
    *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2C0) = 304;
    *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x796) = (unsigned int)(v2 + 1504) >> 16;
    _disable();
    if ( (*(_DWORD *)(v2 + 1680) & 0x80000000) != 0 )
    {
      __writedr(7u, 0LL);
    }
    else
    {
      __sidt(v1 + 143);
      __lidt(v1 + 88);
      __writedr(7u, 0LL);
      __lidt(v1 + 143);
    }
    _enable();
  }
  *(_DWORD *)(v2 + 1432) = 0;
  if ( (*(_DWORD *)(v2 + 1680) & 0x40000000) == 0 || !*(_QWORD *)(v2 + 1840) )
  {
    v7 = *(_QWORD *)(v2 + 1320);
    v8 = (_QWORD *)(v2 + 1288);
    v9 = (char *)(v2 + 1288);
    v10 = v1 + 227;
    v11 = 32;
    v12 = 4LL;
    do
    {
      v11 -= 8;
      *v10 = *(_QWORD *)v9;
      v9 += 8;
      ++v10;
      --v12;
    }
    while ( v12 );
    for ( ; v11; --v11 )
    {
      v13 = *v9++;
      *(_BYTE *)v10 = v13;
      v10 = (_QWORD *)((char *)v10 + 1);
    }
    *(_QWORD *)(v2 + 1320) = 0LL;
    v14 = 32;
    *(_DWORD *)(v2 + 1432) = 0;
    v15 = (_QWORD *)(v2 + 1288);
    v16 = 4LL;
    do
    {
      *v15 = 0LL;
      v14 -= 8;
      ++v15;
      --v16;
    }
    while ( v16 );
    for ( ; v14; --v14 )
    {
      *(_BYTE *)v15 = 0;
      v15 = (_QWORD *)((char *)v15 + 1);
    }
    v17 = (_QWORD *)v2;
    *(_DWORD *)(v2 + 1432) += *(_DWORD *)(v2 + 1364);
    v18 = (const char *)v2;
    v19 = *(unsigned int *)(v2 + 1364);
    v20 = *(_DWORD *)(v2 + 1412);
    v21 = *(_QWORD *)(v2 + 1416);
    if ( v2 < v2 + v19 )
    {
      do
      {
        _mm_prefetch(v18, 0);
        v18 += 64;
      }
      while ( (unsigned __int64)v18 < v2 + v19 );
    }
    if ( (unsigned int)v19 >= 8 )
    {
      v22 = v19 >> 3;
      do
      {
        v21 = __ROL8__(*v17++ ^ v21, v20);
        LODWORD(v19) = v19 - 8;
        --v22;
      }
      while ( v22 );
    }
    for ( ; (_DWORD)v19; LODWORD(v19) = v19 - 1 )
    {
      v23 = *(unsigned __int8 *)v17;
      v17 = (_QWORD *)((char *)v17 + 1);
      v21 = __ROL8__(v23 ^ v21, v20);
    }
    *(_QWORD *)(v2 + 1320) = v7;
    v24 = (char *)(v1 + 227);
    v25 = 32;
    v26 = 4LL;
    do
    {
      v25 -= 8;
      *v8 = *(_QWORD *)v24;
      v24 += 8;
      ++v8;
      --v26;
    }
    while ( v26 );
    for ( ; v25; --v25 )
    {
      v27 = *v24++;
      *(_BYTE *)v8 = v27;
      v8 = (_QWORD *)((char *)v8 + 1);
    }
    if ( *(_QWORD *)(v2 + 1320) != v21 )
    {
      v28 = *(_DWORD *)(v2 + 1364);
      v29 = *(_QWORD *)(v2 + 1176);
      *(_QWORD *)v29 = v2;
      *(_DWORD *)(v29 + 16) = v28;
      if ( !*(_DWORD *)(v2 + 1544) )
      {
        *(_QWORD *)(*(_QWORD *)(v2 + 1176) + 24LL) = v21 ^ *(_QWORD *)(v2 + 1320);
        if ( !*(_DWORD *)(v2 + 1544) )
        {
          *(_QWORD *)(v2 + 1552) = v2 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v2 + 1560) = 0LL;
          *(_QWORD *)(v2 + 1568) = 257LL;
          *(_QWORD *)(v2 + 1576) = v21;
          *(_DWORD *)(v2 + 1544) = 1;
        }
      }
    }
  }
  *(_DWORD *)(v2 + 1680) |= 4u;
  ++*(_DWORD *)(v2 + 1444);
  v30 = *(_DWORD *)(v2 + 1680);
  if ( (v30 & 8) != 0 && (v30 & 0x800000) == 0 )
  {
    v31 = *(_DWORD *)(v2 + 1684);
    v32 = *(_DWORD *)(v2 + 1364);
    v33 = *(_QWORD *)(v2 + 1784);
    v34 = *(unsigned int **)(a1 + 1832);
    v35 = *(unsigned int *)(a1 + 1400);
    *v1 = v34;
    v36 = v31 & 1;
    if ( v36 )
      v33 = *(_QWORD *)(a1 + 1248);
    v37 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD *))(a1 + 344);
    v38 = *(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, void (__fastcall *)(_QWORD, _QWORD, _QWORD), unsigned int *))(a1 + 760);
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = *(_QWORD *)(a1 + 952);
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = *(_QWORD *)(a1 + 640);
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v37;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v38;
    v39 = __rdtsc();
    v40 = (__ROR8__(v39, 3) ^ v39) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x630) = *((_QWORD *)&v40 + 1);
    v41 = -1200000000LL - ((unsigned __int64)v40 ^ *((_QWORD *)&v40 + 1)) % 0x5F5E100;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A8) = v41;
    if ( (*(_DWORD *)(a1 + 1680) & 0x4000000) != 0 )
    {
      v42 = __rdtsc();
      v43 = (__ROR8__(v42, 3) ^ v42) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x5E0) = *((_QWORD *)&v43 + 1);
      if ( ((unsigned __int64)v43 ^ *((_QWORD *)&v43 + 1)) % 0xA < 2 )
      {
        v44 = __rdtsc();
        v45 = (__ROR8__(v44, 3) ^ v44) * (unsigned __int128)0x7010008004002001uLL;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x578) = *((_QWORD *)&v45 + 1);
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A8) = (((unsigned __int64)v45 ^ *((_QWORD *)&v45 + 1))
                                                                                % 0xA
                                                                                + 1)
                                                                               * v41;
      }
    }
    v46 = 0LL;
    v47 = 0LL;
    v48 = *(_DWORD *)(a1 + 1680);
    if ( (v48 & 2) == 0 )
      v32 = v35;
    if ( (v48 & 0x80u) != 0 )
    {
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x54) = 1;
      v49 = __rdtsc();
      v50 = (__ROR8__(v49, 3) ^ v49) * (unsigned __int128)0x7010008004002001uLL;
      v51 = 234;
      v52 = *((_QWORD *)&v50 + 1);
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x5F0) = *((_QWORD *)&v50 + 1);
      v53 = a1;
      v46 = v50 ^ v52;
      v54 = v46;
      v47 = a1 ^ v46;
      v55 = (_QWORD *)(a1 + 1864);
      do
      {
        *v55-- ^= v54;
        v54 = __ROR8__(v54, v51--);
      }
      while ( v51 );
      v56 = v35;
      v57 = (unsigned __int64)(v35 - 1872) >> 3;
      if ( (_DWORD)v57 )
      {
        v58 = (__int64 *)(a1 + 8 * ((int)v57 + 233LL));
        do
        {
          v59 = *v58--;
          v47 = (2 * v47) ^ __ROR8__(v59, v57);
          LODWORD(v57) = v57 - 1;
        }
        while ( (_DWORD)v57 );
        v34 = (unsigned int *)*v1;
        v53 = a1;
        v56 = v35;
      }
      v60 = v56 + v53;
      v61 = (v32 - (unsigned int)v35) >> 3;
      if ( (_DWORD)v61 )
      {
        v62 = (_QWORD *)(v60 + 8 * v61 - 8);
        do
        {
          *v62-- ^= v54;
          v54 = __ROR8__(v54, v61);
          LODWORD(v61) = v61 - 1;
        }
        while ( (_DWORD)v61 );
      }
      v37 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD *))(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
      v38 = *(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, void (__fastcall *)(_QWORD, _QWORD, _QWORD), unsigned int *))(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
    }
    else
    {
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x54) = 0;
    }
    if ( v34 )
    {
      v2 = a1;
      v38(a1, v32, v1 + 53, (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v37, v34);
    }
    else
    {
      if ( v33 )
      {
        if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD *))(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                        + 0x18))(
                v33,
                0LL,
                0LL,
                0LL,
                v1 + 53)
          && v36 )
        {
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38))(
            v33,
            0LL,
            0LL);
        }
      }
      else
      {
        v37(0LL, 0LL, v1 + 53);
      }
      v2 = a1;
    }
    if ( *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x54) )
    {
      v63 = (_QWORD *)(v2 + 1864);
      v64 = v2 ^ v46;
      v65 = 234;
      do
      {
        *v63-- ^= v46;
        v46 = __ROR8__(v46, v65--);
      }
      while ( v65 );
      v66 = v35;
      v67 = (unsigned __int64)(v35 - 1872) >> 3;
      if ( (_DWORD)v67 )
      {
        v68 = (__int64 *)(v2 + 8 * ((int)v67 + 233LL));
        do
        {
          v69 = *v68--;
          v64 = (2 * v64) ^ __ROR8__(v69, v67);
          LODWORD(v67) = v67 - 1;
        }
        while ( (_DWORD)v67 );
        v66 = v35;
      }
      v70 = (v32 - (unsigned int)v35) >> 3;
      if ( v70 )
      {
        v71 = (_QWORD *)(v66 + v2 + 8 * (v70 - 1LL));
        do
        {
          *v71 ^= v46;
          v46 = __ROR8__(v46, v70);
          --v71;
          --v70;
        }
        while ( v70 );
      }
      if ( v64 != v47 )
      {
        v72 = *(_QWORD *)(v2 + 1176);
        v73 = *(_DWORD *)(v2 + 1364);
        *(_QWORD *)v72 = v2;
        *(_DWORD *)(v72 + 16) = v73;
        if ( !*(_DWORD *)(v2 + 1544) )
        {
          *(_QWORD *)(*(_QWORD *)(v2 + 1176) + 24LL) = v47 ^ v64;
          if ( !*(_DWORD *)(v2 + 1544) )
          {
            *(_QWORD *)(v2 + 1552) = v2 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v2 + 1560) = 0LL;
            *(_QWORD *)(v2 + 1568) = 270LL;
            *(_QWORD *)(v2 + 1576) = v64;
            *(_DWORD *)(v2 + 1544) = 1;
          }
        }
      }
    }
  }
  v74 = *(_DWORD *)(v2 + 196);
  *(_DWORD *)(v2 + 196) = 0;
  LODWORD(v75) = 1264;
  *(_DWORD *)(v2 + 1432) += 1264;
  v76 = (_QWORD *)v2;
  v77 = *(_DWORD *)(v2 + 1412);
  v78 = (const char *)v2;
  v79 = *(_QWORD *)(v2 + 1416);
  if ( v2 < v2 + 1264 )
  {
    do
    {
      _mm_prefetch(v78, 0);
      v78 += 64;
    }
    while ( (unsigned __int64)v78 < v2 + 1264 );
  }
  v80 = 158LL;
  do
  {
    v79 = __ROL8__(*v76++ ^ v79, v77);
    v75 = (unsigned int)(v75 - 8);
    --v80;
  }
  while ( v80 );
  if ( (_DWORD)v75 )
  {
    do
    {
      v81 = *(unsigned __int8 *)v76;
      v76 = (_QWORD *)((char *)v76 + 1);
      v79 = __ROL8__(v81 ^ v79, v77);
      v128 = (_DWORD)v75 == 1;
      v75 = (unsigned int)(v75 - 1);
    }
    while ( !v128 );
  }
  *(_DWORD *)(v2 + 196) = v74;
  if ( *(_QWORD *)(v2 + 1816) != v79 )
  {
    v82 = *(_QWORD *)(v2 + 1176);
    v83 = *(_DWORD *)(v2 + 1364);
    *(_QWORD *)v82 = v2;
    *(_DWORD *)(v82 + 16) = v83;
    if ( !*(_DWORD *)(v2 + 1544) )
    {
      *(_QWORD *)(*(_QWORD *)(v2 + 1176) + 24LL) = *(_QWORD *)(v2 + 1816) ^ v79;
      if ( !*(_DWORD *)(v2 + 1544) )
      {
        *(_QWORD *)(v2 + 1552) = v2 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v2 + 1560) = 0LL;
        *(_QWORD *)(v2 + 1568) = 265LL;
        *(_QWORD *)(v2 + 1576) = v79;
        *(_DWORD *)(v2 + 1544) = 1;
      }
    }
  }
  v84 = *(unsigned int *)(v2 + 1656);
  v85 = v2;
  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v2;
  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x54) = 0;
  if ( (_DWORD)v84 != -1 )
  {
    v86 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *))(v2 + 576))(v84, v79, v75, v76);
    if ( v86 || (v86 = (*(__int64 (__fastcall **)(_QWORD))(v2 + 584))(0LL)) != 0 )
    {
      v87 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(v2 + 600))(v86, v1 + 182);
      if ( v87 >= 0 )
      {
        *(_QWORD *)(v2 + 1672) = v86;
        v87 = 0;
        *(_DWORD *)(v2 + 1432) += 0x10000;
      }
      else
      {
        (*(void (__fastcall **)(__int64))(v2 + 592))(v86);
      }
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x54) = v87 >= 0;
    }
  }
  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x148) = 0LL;
  v88 = v1 + 42;
  v89 = 4;
  do
  {
    *v88++ = 0;
    --v89;
  }
  while ( v89 );
  v90 = *(_DWORD *)(v2 + 1424);
  v91 = (_DWORD *)(v2 + 1436);
  v92 = *(_DWORD *)(v2 + 1436);
  v93 = 0x8000LL;
  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) = v90;
  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v2 + 1436;
  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = -1073741670;
  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = -1073741275;
  if ( *(_DWORD *)(v2 + 1432) < v92 )
  {
    i16 = 0LL;
    while ( 1 )
    {
      if ( (*(_DWORD *)(v85 + 1680) & 0x110000) != 0x110000 )
        __writedr(7u, 0LL);
      if ( v90 == *(_DWORD *)(v85 + 1404) )
      {
        ++*(_DWORD *)(v85 + 1440);
        v90 = 0;
        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) = 0;
        if ( *(_DWORD *)(v85 + 1632) == 6 )
        {
          if ( *(_DWORD *)(v85 + 1656) == -1 )
            *(_DWORD *)(v85 + 1656) = 0;
          else
            *(_DWORD *)(v85 + 1680) |= 1u;
        }
      }
      v95 = v85;
      v96 = 0;
      if ( *(_QWORD *)(v85 + 1840) )
        v95 = *(_QWORD *)(v85 + 1840);
      v97 = (char *)(v95 + *(unsigned int *)(v95 + 1400));
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v97;
      if ( *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x148)
        && *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x14C) <= v90 )
      {
        v96 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x14C);
        v97 = (char *)(v95 + *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x150));
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v97;
      }
      if ( v96 != v90 )
      {
        v98 = v90 - v96;
        v96 = v90;
        while ( 1 )
        {
          v99 = *(_DWORD *)v97;
          if ( *(int *)v97 > 17 )
          {
            switch ( v99 )
            {
              case 19:
LABEL_133:
                v104 = 56LL;
                goto LABEL_134;
              case 28:
                v105 = *((unsigned __int16 *)v97 + 20);
                goto LABEL_123;
              case 30:
                v104 = (((*((_DWORD *)v97 + 9) - 1) / 0xCu + 7) & 0xFFFFFFF8)
                     + 24 * (*((unsigned __int16 *)v97 + 20) + 2);
                goto LABEL_134;
            }
            if ( (unsigned int)(v99 - 33) <= 1 )
            {
              v104 = 20
                   * (unsigned int)(((*((_DWORD *)v97 + 8) & 0xFFF)
                                   + (unsigned __int64)*((unsigned int *)v97 + 10)
                                   + 4095) >> 12)
                   + 48;
              goto LABEL_134;
            }
          }
          else
          {
            if ( v99 == 17 )
              goto LABEL_133;
            v100 = v99 - 1;
            if ( !v100 )
            {
LABEL_125:
              v104 = 4 * (*((_DWORD *)v97 + 4) / 0xCu) + 48;
              goto LABEL_134;
            }
            v101 = v100 - 6;
            if ( !v101 )
            {
              v104 = (unsigned int)(24 * (*((_DWORD *)v97 + 6) + 2));
              goto LABEL_134;
            }
            v102 = v101 - 1;
            if ( !v102 )
            {
              v105 = *((unsigned __int16 *)v97 + 16);
LABEL_123:
              v104 = (v105 + 55) & 0xFFFFFFF8;
              goto LABEL_134;
            }
            v103 = v102 - 2;
            if ( !v103 )
            {
              v104 = (unsigned int)(16 * (*((_DWORD *)v97 + 7) + 3));
              goto LABEL_134;
            }
            if ( v103 == 2 )
              goto LABEL_125;
          }
          v104 = 48LL;
LABEL_134:
          v97 += v104;
          if ( !--v98 )
          {
            v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
            v91 = *(_DWORD **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v97;
            break;
          }
        }
      }
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x148) = 1;
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x14C) = v96;
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x150) = (_DWORD)v97 - v95;
      v106 = *(_DWORD *)v97;
      if ( *(int *)v97 <= 19 )
      {
        if ( v106 == 19 )
        {
          v127 = **((_QWORD **)v97 + 5);
          if ( !v127 || v127 == *((_QWORD *)v97 + 3) || v127 == *((_QWORD *)v97 + 4) )
            goto LABEL_217;
          v128 = v127 == *((_QWORD *)v97 + 6);
          goto LABEL_187;
        }
        if ( v106 <= 10 )
        {
          if ( v106 != 10 )
          {
            switch ( v106 )
            {
              case 0:
                goto LABEL_380;
              case 1:
                goto LABEL_319;
              case 4:
                if ( (*(_DWORD *)(v85 + 1440) & 1) == 0 )
                {
                  v152 = *(_QWORD *)(v85 + 1112);
                  v153 = 0;
                  (*(void (**)(void))(v85 + 368))();
                  (*(void (__fastcall **)(__int64, _QWORD))(v85 + 288))(v152, 0LL);
                  v154 = *(_QWORD ***)(v85 + 1072);
                  for ( i = *v154; i != v154; i = (_QWORD *)*i )
                  {
                    *((_BYTE *)i - 306) = 1;
                    ++v153;
                  }
                  v156 = *(_QWORD *)(v85 + 1048);
                  CurrentIrql = (unsigned int *)KeGetCurrentIrql();
                  *v1 = CurrentIrql;
                  __writecr8(0xCuLL);
                  (*(void (__fastcall **)(__int64, _QWORD *))(v85 + 320))(v156, v1 + 216);
                  v158 = *(_QWORD ***)(v85 + 1040);
                  v159 = *v158;
                  if ( *v158 != v158 )
                  {
                    do
                    {
                      v160 = v159 - 72;
                      if ( !*((_BYTE *)v159 - 130) && !*(_DWORD *)(v85 + 1544) )
                      {
                        *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v85 + 1568) = *(int *)v97;
                        *(_QWORD *)(v85 + 1576) = v160;
                        *(_DWORD *)(v85 + 1544) = 1;
                      }
                      *((_BYTE *)v160 + 446) = 0;
                      v159 = (_QWORD *)*v159;
                    }
                    while ( v159 != v158 );
                    CurrentIrql = (unsigned int *)*v1;
                  }
                  (*(void (__fastcall **)(_QWORD *))(v85 + 384))(v1 + 216);
                  __writecr8((unsigned __int8)CurrentIrql);
                  (*(void (__fastcall **)(_QWORD, _QWORD))(v85 + 296))(*(_QWORD *)(v85 + 1112), 0LL);
                  (*(void (**)(void))(v85 + 376))();
                  *(_DWORD *)(v85 + 1432) += v153 << 8;
                }
                goto LABEL_217;
              case 5:
                v129 = *(_DWORD *)(v85 + 1440);
                if ( (v129 & 1) == 0 )
                  goto LABEL_217;
                v130 = 0;
                if ( (*(_DWORD *)(v85 + 1680) & 0x40000000) != 0 )
                {
                  v132 = __rdtsc();
                  v133 = (__ROR8__(v132, 3) ^ v132) * (unsigned __int128)0x7010008004002001uLL;
                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x590) = *((_QWORD *)&v133 + 1);
                  v131 = ((unsigned __int64)v133 ^ *((_QWORD *)&v133 + 1)) == 3
                                                                            * (((unsigned __int64)v133 ^ *((_QWORD *)&v133 + 1))
                                                                             / 3);
                }
                else
                {
                  v131 = (v129 & 3) == 3;
                }
                v134 = *(_QWORD *)(v85 + 1112);
                LOBYTE(v130) = v131;
                v135 = 0;
                *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = 0;
                (*(void (**)(void))(v85 + 368))();
                (*(void (__fastcall **)(__int64, _QWORD))(v85 + 288))(v134, 0LL);
                v136 = *(_QWORD ***)(v85 + 1072);
                v137 = *v136;
                if ( *v136 != v136 )
                {
                  do
                  {
                    *((_BYTE *)v137 - 306) = 1;
                    ++v135;
                    v137 = (_QWORD *)*v137;
                  }
                  while ( v137 != v136 );
                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v135;
                }
                v138 = *(unsigned int ***)(v85 + 1120);
                v139 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                v140 = 4LL;
                v141 = (__int64)*v138;
                v142 = **v138;
                do
                {
                  v143 = (__int64 *)(*(__int64 (__fastcall **)(__int64, unsigned __int64))(v85 + 256))(v141, v140);
                  v144 = 0LL;
                  v145 = v143;
                  if ( v143 )
                  {
                    v146 = (*v143 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                    v147 = *(_BYTE *)v146 & 0x7F;
                    if ( v147 == 3 )
                    {
                      if ( !*(_BYTE *)(v146 + 446)
                        && (*(_DWORD *)(v146 + 772) & 0x4000000) != 0
                        && !*(_DWORD *)(v85 + 1544) )
                      {
                        *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v85 + 1560) = (char *)v139 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v85 + 1568) = *v139;
                        *(_QWORD *)(v85 + 1576) = v146;
                        *(_DWORD *)(v85 + 1544) = 1;
                      }
                      *(_BYTE *)(v146 + 446) = 0;
                    }
                    else if ( v147 == 6 && v130 )
                    {
                      if ( (v148 = *(_QWORD *)(v146 + 680), v148 != *(_QWORD *)(v85 + 728))
                        && v148 != *(_QWORD *)(v85 + 736)
                        || *(_QWORD *)(v146 + 696) != *(_QWORD *)(v85 + 744)
                        || *(_QWORD *)(v146 + 688) != *(_QWORD *)(v85 + 752) )
                      {
                        if ( !*(_DWORD *)(v85 + 1544) )
                        {
                          *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v85 + 1560) = (char *)v139 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v85 + 1568) = *v139;
                          *(_QWORD *)(v85 + 1576) = v146;
                          *(_DWORD *)(v85 + 1544) = 1;
                        }
                      }
                    }
                    (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(v85 + 280))(v141, v145, 0LL);
                  }
                  v140 += 4LL;
                }
                while ( v140 < v142 );
                v149 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(v85 + 296))(*(_QWORD *)(v85 + 1112), 0LL, v144);
                (*(void (**)(void))(v85 + 376))();
                *(_DWORD *)(v85 + 1432) += ((unsigned int)(v142 >> 2) + v149) << 8;
                goto LABEL_216;
              case 6:
                goto LABEL_184;
              case 7:
                (*(void (__fastcall **)(_QWORD *, _QWORD))(v85 + 408))(v1 + 167, *((unsigned int *)v97 + 7));
                (*(void (__fastcall **)(_QWORD *, _QWORD))(v85 + 416))(v1 + 167, 0LL);
                for ( j = 0; j < *((_DWORD *)v97 + 6); ++j )
                {
                  v123 = *(_QWORD *)&v97[24 * j + 56];
                  v124 = *(_QWORD *)&v97[24 * j + 48] & __readmsr(*(_DWORD *)&v97[24 * j + 64]);
                  if ( v124 != v123 )
                  {
                    v125 = *(unsigned int *)&v97[24 * j + 64] | ((unsigned __int64)*((unsigned int *)v97 + 7) << 32);
                    if ( !*(_DWORD *)(v85 + 1544) )
                    {
                      *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = v124 ^ v123;
                      if ( !*(_DWORD *)(v85 + 1544) )
                      {
                        *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v85 + 1568) = *(int *)v97;
                        *(_QWORD *)(v85 + 1576) = v125;
                        *(_DWORD *)(v85 + 1544) = 1;
                      }
                    }
                  }
                }
                (*(void (**)(void))(v85 + 400))();
                v126 = *((_DWORD *)v97 + 6) << 15;
                goto LABEL_183;
              case 8:
                v107 = *((_QWORD *)v97 + 3);
                if ( *(_BYTE *)(v107 + 66) != v97[34] && !*(_DWORD *)(v85 + 1544) )
                {
                  *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1568) = *(int *)v97;
                  *(_QWORD *)(v85 + 1576) = v107;
                  *(_DWORD *)(v85 + 1544) = 1;
                }
                if ( (v97[34] & 0x40) == 0 && *(_QWORD *)(v107 + 200) != v107 + 200 && !*(_DWORD *)(v85 + 1544) )
                {
                  *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1568) = *(int *)v97;
                  *(_QWORD *)(v85 + 1576) = v107;
                  *(_DWORD *)(v85 + 1544) = 1;
                }
                if ( *(_DWORD *)v97 != 11 || *(_QWORD *)(v85 + 1672) )
                {
                  v108 = (_QWORD *)*((_QWORD *)v97 + 1);
                  v109 = *((unsigned int *)v97 + 4);
                  v110 = (const char *)v108;
                  *(_DWORD *)(v85 + 1432) += v109;
                  v111 = *(_DWORD *)(v85 + 1412);
                  v112 = *(_QWORD *)(v85 + 1416);
                  if ( v108 < (_QWORD *)((char *)v108 + v109) )
                  {
                    do
                    {
                      _mm_prefetch(v110, 0);
                      v110 += 64;
                    }
                    while ( v110 < (const char *)v108 + v109 );
                  }
                  if ( (unsigned int)v109 >= 8 )
                  {
                    v113 = v109 >> 3;
                    do
                    {
                      v112 = __ROL8__(*v108++ ^ v112, v111);
                      LODWORD(v109) = v109 - 8;
                      --v113;
                    }
                    while ( v113 );
                  }
                  for ( ; (_DWORD)v109; LODWORD(v109) = v109 - 1 )
                  {
                    v114 = *(unsigned __int8 *)v108;
                    v108 = (_QWORD *)((char *)v108 + 1);
                    v112 = __ROL8__(v114 ^ v112, v111);
                  }
                  for ( k = v112; ; LODWORD(v112) = k ^ v112 )
                  {
                    k >>= 31;
                    if ( !k )
                      break;
                  }
                  v116 = *((unsigned int *)v97 + 5);
                  v117 = v112 & 0x7FFFFFFF;
                  if ( v117 != (_DWORD)v116 )
                  {
                    if ( !*(_DWORD *)(v85 + 1544) )
                      *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = v116 ^ v117;
                    v118 = *((_QWORD *)v97 + 1);
                    if ( !*(_DWORD *)(v85 + 1544) )
                    {
                      *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v85 + 1568) = *(int *)v97;
                      *(_QWORD *)(v85 + 1576) = v118;
                      *(_DWORD *)(v85 + 1544) = 1;
                    }
                  }
                }
                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x328) = v97 + 48;
                v119 = *((_WORD *)v97 + 16);
                *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x320) = v119;
                *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x322) = v119;
                v1918 = v1 + 82;
                v120 = *(_QWORD *)(v85 + 1056);
                LOBYTE(v1917) = 0;
                if ( (*(int (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, _QWORD *))(v85 + 440))(
                       v1 + 100,
                       0LL,
                       0LL,
                       0LL,
                       v120,
                       v1917,
                       0LL,
                       v1 + 82) < 0 )
                  goto LABEL_217;
                v121 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x290);
                if ( v121 != *((_QWORD *)v97 + 3) && !*(_DWORD *)(v85 + 1544) )
                {
                  *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1568) = *(int *)v97;
                  *(_QWORD *)(v85 + 1576) = v121;
                  *(_DWORD *)(v85 + 1544) = 1;
                  v121 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x290);
                }
LABEL_175:
                (*(void (__fastcall **)(__int64))(v85 + 432))(v121);
                goto LABEL_217;
            }
            goto LABEL_1137;
          }
          if ( !*((_DWORD *)v97 + 6) || *(_QWORD *)(v85 + 1672) )
          {
            v161 = (unsigned __int64)&v97[16 * *(unsigned int *)(v85 + 1428) + 48];
            v162 = (unsigned __int64)&v97[16 * *((unsigned int *)v97 + 7) + 48];
            *v1 = v97 + 48;
            do
            {
              if ( (*(_DWORD *)v161 & 0x80000000) == 0 )
              {
                v163 = *(_QWORD **)(v161 + 8);
                v164 = *(unsigned int *)(v161 + 4);
                v165 = v163;
                *(_DWORD *)(v85 + 1432) += v164;
                v166 = (const char *)v163;
                v167 = *(_DWORD *)(v85 + 1412);
                v168 = *(_QWORD *)(v85 + 1416);
                if ( v163 < (_QWORD *)((char *)v163 + v164) )
                {
                  do
                  {
                    _mm_prefetch(v166, 0);
                    v166 += 64;
                  }
                  while ( v166 < (const char *)v163 + v164 );
                }
                if ( (unsigned int)v164 >= 8 )
                {
                  v169 = v164 >> 3;
                  do
                  {
                    v168 = __ROL8__(*v165++ ^ v168, v167);
                    LODWORD(v164) = v164 - 8;
                    --v169;
                  }
                  while ( v169 );
                  v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                }
                for ( ; (_DWORD)v164; LODWORD(v164) = v164 - 1 )
                {
                  v170 = *(unsigned __int8 *)v165;
                  v165 = (_QWORD *)((char *)v165 + 1);
                  v168 = __ROL8__(v170 ^ v168, v167);
                }
                for ( m = v168; ; LODWORD(v168) = m ^ v168 )
                {
                  m >>= 31;
                  if ( !m )
                    break;
                }
                v172 = v168 & 0x7FFFFFFF;
                if ( v172 != (*(_DWORD *)v161 & 0x7FFFFFFF) && !*(_DWORD *)(v85 + 1544) )
                {
                  *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = *(_DWORD *)v161 & 0x7FFFFFFF ^ (unsigned __int64)v172;
                  if ( !*(_DWORD *)(v85 + 1544) )
                  {
                    *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v85 + 1568) = *(int *)v97;
                    *(_QWORD *)(v85 + 1576) = v163;
                    *(_DWORD *)(v85 + 1544) = 1;
                  }
                }
                v91 = *(_DWORD **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
              }
              v161 += 16LL;
              v173 = v161 == v162;
              if ( v161 >= v162 )
                goto LABEL_258;
            }
            while ( *(_DWORD *)(v85 + 1432) < *v91 );
            v173 = v161 == v162;
LABEL_258:
            v93 = 0x8000LL;
            if ( v173 )
              *(_DWORD *)(v85 + 1428) = 0;
            else
              *(_DWORD *)(v85 + 1428) = (__int64)(v161 - *v1) >> 4;
            goto LABEL_218;
          }
LABEL_236:
          *(_DWORD *)(v85 + 1428) = 0;
          goto LABEL_217;
        }
        if ( v106 != 11 )
        {
          if ( v106 != 12 )
          {
            if ( v106 <= 14 )
            {
              if ( v106 == 14 && !*(_QWORD *)(v85 + 1672) )
                goto LABEL_217;
              v180 = (_QWORD *)*((_QWORD *)v97 + 1);
              v181 = *((unsigned int *)v97 + 4);
              v182 = (const char *)v180;
              *(_DWORD *)(v85 + 1432) += v181;
              v183 = *(_DWORD *)(v85 + 1412);
              v184 = *(_QWORD *)(v85 + 1416);
              if ( v180 < (_QWORD *)((char *)v180 + v181) )
              {
                do
                {
                  _mm_prefetch(v182, 0);
                  v182 += 64;
                }
                while ( v182 < (const char *)v180 + v181 );
              }
              if ( (unsigned int)v181 >= 8 )
              {
                v185 = v181 >> 3;
                do
                {
                  v184 = __ROL8__(*v180++ ^ v184, v183);
                  LODWORD(v181) = v181 - 8;
                  --v185;
                }
                while ( v185 );
              }
              for ( ; (_DWORD)v181; LODWORD(v181) = v181 - 1 )
              {
                v186 = *(unsigned __int8 *)v180;
                v180 = (_QWORD *)((char *)v180 + 1);
                v184 = __ROL8__(v186 ^ v184, v183);
              }
              for ( n = v184; ; LODWORD(v184) = n ^ v184 )
              {
                n >>= 31;
                if ( !n )
                  break;
              }
              v188 = v184 & 0x7FFFFFFF;
              if ( v188 != *((_DWORD *)v97 + 5) )
              {
                _InterlockedOr(v1915, 0);
                if ( (*((_DWORD *)v97 + 6) & 1) == 0 || !**(_BYTE **)(v85 + 1160) )
                {
                  if ( !*(_DWORD *)(v85 + 1544) )
                    *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = *((unsigned int *)v97 + 5) ^ (unsigned __int64)v188;
                  v189 = *((_QWORD *)v97 + 1);
                  if ( !*(_DWORD *)(v85 + 1544) )
                  {
                    *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v85 + 1568) = *(int *)v97;
                    *(_QWORD *)(v85 + 1576) = v189;
                    *(_DWORD *)(v85 + 1544) = 1;
                  }
                }
              }
              if ( (*(_DWORD *)(v85 + 1680) & 0x40000000) == 0 )
                goto LABEL_217;
              v190 = *((_DWORD *)v97 + 4);
              if ( !v190 )
                goto LABEL_217;
              sub_14014F138(v85, *((_QWORD *)v97 + 1), v190, (__int64)(v1 + 170));
              v191 = 16;
              v192 = (__int64 *)(v97 + 28);
              v193 = v1 + 170;
              do
              {
                v194 = *v193++;
                v195 = *v192++;
                if ( v194 != v195 )
                  goto LABEL_314;
                v191 -= 8;
              }
              while ( v191 >= 8 );
              if ( v191 )
              {
                while ( 1 )
                {
                  v196 = *(unsigned __int8 *)v193;
                  v193 = (__int64 *)((char *)v193 + 1);
                  v197 = *(unsigned __int8 *)v192;
                  v192 = (__int64 *)((char *)v192 + 1);
                  if ( v196 != v197 )
                    break;
                  if ( !--v191 )
                    goto LABEL_318;
                }
LABEL_314:
                _InterlockedOr(v1915, 0);
                if ( (*((_DWORD *)v97 + 6) & 1) == 0 || !**(_BYTE **)(v85 + 1160) )
                {
                  v198 = *((_QWORD *)v97 + 1);
                  if ( !*(_DWORD *)(v85 + 1544) )
                  {
                    *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v85 + 1568) = *(int *)v97;
                    *(_QWORD *)(v85 + 1576) = v198;
                    *(_DWORD *)(v85 + 1544) = 1;
                  }
                }
              }
LABEL_318:
              v126 = 16 * *((_DWORD *)v97 + 4);
LABEL_183:
              *(_DWORD *)(v85 + 1432) += v126;
              goto LABEL_217;
            }
            switch ( v106 )
            {
              case 15:
                if ( *(_DWORD *)(v85 + 1632) == 6 )
                {
                  *(_DWORD *)(v85 + 1432) += 256;
                  v174 = *(_QWORD *)(v85 + 1168);
                  v175 = (*(__int64 (__fastcall **)(__int64))(v85 + 656))(v174);
                  v176 = v175;
                  if ( v175 )
                  {
                    v177 = (*(__int64 (__fastcall **)(__int64))(v85 + 664))(v175);
                    v178 = *((_QWORD *)v97 + 3);
                    if ( v178 )
                    {
                      if ( v178 != v177 && !*(_DWORD *)(v85 + 1544) )
                      {
                        *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v85 + 1568) = *(int *)v97;
                        *(_QWORD *)(v85 + 1576) = v177;
                        *(_DWORD *)(v85 + 1544) = 1;
                      }
                    }
                    else
                    {
                      v179 = *(_QWORD *)(v85 + 1664);
                      if ( (!*(_DWORD *)(v85 + 1660) || v177 < v179 || v177 > v179 + *(unsigned int *)(v85 + 1660) - 1LL)
                        && !*(_DWORD *)(v85 + 1544) )
                      {
                        *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v85 + 1568) = *(int *)v97;
                        *(_QWORD *)(v85 + 1576) = v177;
                        *(_DWORD *)(v85 + 1544) = 1;
                      }
                      *((_QWORD *)v97 + 3) = v177;
                    }
                    (*(void (__fastcall **)(__int64, __int64))(v85 + 672))(v174, v176);
                  }
                }
                goto LABEL_217;
              case 16:
                v127 = **((_QWORD **)v97 + 4);
                if ( !v127 )
                  goto LABEL_217;
                v128 = v127 == *((_QWORD *)v97 + 3);
                break;
              case 17:
                v127 = **((_QWORD **)v97 + 6);
                if ( !v127 || v127 == *((_QWORD *)v97 + 3) || v127 == *((_QWORD *)v97 + 4) )
                  goto LABEL_217;
                v128 = v127 == *((_QWORD *)v97 + 5);
                break;
              default:
LABEL_184:
                v127 = **((_QWORD **)v97 + 5);
                if ( !v127 || v127 == *((_QWORD *)v97 + 3) )
                  goto LABEL_217;
                v128 = v127 == *((_QWORD *)v97 + 4);
                break;
            }
LABEL_187:
            if ( v128 )
              goto LABEL_217;
            v93 = 0x8000LL;
            if ( !*(_DWORD *)(v85 + 1544) )
            {
              *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1568) = *(int *)v97;
              *(_QWORD *)(v85 + 1576) = v127;
              *(_DWORD *)(v85 + 1544) = 1;
            }
            goto LABEL_218;
          }
LABEL_319:
          if ( v106 == 12 && !*(_QWORD *)(v85 + 1672) )
            goto LABEL_236;
          if ( !*(_DWORD *)(v85 + 1428) )
          {
            v199 = (_QWORD *)*((_QWORD *)v97 + 1);
            v200 = *((unsigned int *)v97 + 4);
            v201 = (const char *)v199;
            *(_DWORD *)(v85 + 1432) += v200;
            v202 = *(_DWORD *)(v85 + 1412);
            v203 = *(_QWORD *)(v85 + 1416);
            if ( v199 < (_QWORD *)((char *)v199 + v200) )
            {
              do
              {
                _mm_prefetch(v201, 0);
                v201 += 64;
              }
              while ( v201 < (const char *)v199 + v200 );
            }
            if ( (unsigned int)v200 >= 8 )
            {
              v204 = v200 >> 3;
              do
              {
                v203 = __ROL8__(*v199++ ^ v203, v202);
                LODWORD(v200) = v200 - 8;
                --v204;
              }
              while ( v204 );
            }
            for ( ; (_DWORD)v200; LODWORD(v200) = v200 - 1 )
            {
              v205 = *(unsigned __int8 *)v199;
              v199 = (_QWORD *)((char *)v199 + 1);
              v203 = __ROL8__(v205 ^ v203, v202);
            }
            for ( ii = v203; ; LODWORD(v203) = ii ^ v203 )
            {
              ii >>= 31;
              if ( !ii )
                break;
            }
            v207 = *((unsigned int *)v97 + 5);
            v208 = v203 & 0x7FFFFFFF;
            if ( v208 != (_DWORD)v207 )
            {
              if ( !*(_DWORD *)(v85 + 1544) )
                *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = v207 ^ v208;
              v209 = *((_QWORD *)v97 + 1);
              if ( !*(_DWORD *)(v85 + 1544) )
              {
                *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v85 + 1568) = *(int *)v97;
                *(_QWORD *)(v85 + 1576) = v209;
                *(_DWORD *)(v85 + 1544) = 1;
              }
            }
          }
          v210 = *((_QWORD *)v97 + 1);
          v211 = *(unsigned int *)(v85 + 1428);
          v212 = *((unsigned int *)v97 + 4);
          *v1 = v210;
          v213 = (unsigned int *)(v210 + 12 * v211);
          v214 = v212 / 0xC;
          v215 = &v97[4 * v211 + 48];
          v216 = (unsigned int *)(v210 + 12 * (v212 / 0xC));
          do
          {
            if ( (*(_DWORD *)v215 & 0x80000000) == 0 )
            {
              v217 = (_QWORD *)(*((_QWORD *)v97 + 4) + *v213);
              v218 = v213[1] - *v213;
              *(_DWORD *)(v85 + 1432) += v218;
              v219 = v217;
              v220 = *(_DWORD *)(v85 + 1412);
              v221 = (const char *)v217;
              v222 = *(_QWORD *)(v85 + 1416);
              v223 = (unsigned __int64)v217 + v218;
              if ( (unsigned __int64)v217 < v223 )
              {
                do
                {
                  _mm_prefetch(v221, 0);
                  v221 += 64;
                }
                while ( (unsigned __int64)v221 < v223 );
              }
              if ( v218 >= 8 )
              {
                v224 = (unsigned __int64)v218 >> 3;
                do
                {
                  v222 = __ROL8__(*v219++ ^ v222, v220);
                  v218 -= 8;
                  --v224;
                }
                while ( v224 );
                v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
              }
              if ( v218 )
              {
                do
                {
                  v225 = *(unsigned __int8 *)v219;
                  v219 = (_QWORD *)((char *)v219 + 1);
                  v222 = __ROL8__(v225 ^ v222, v220);
                  --v218;
                }
                while ( v218 );
                v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
              }
              for ( jj = v222; ; LODWORD(v222) = jj ^ v222 )
              {
                jj >>= 31;
                if ( !jj )
                  break;
              }
              v214 = v222 & 0x7FFFFFFF;
              if ( (_DWORD)v214 != (*(_DWORD *)v215 & 0x7FFFFFFF) && !*(_DWORD *)(v85 + 1544) )
              {
                *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = *(_DWORD *)v215 & 0x7FFFFFFF ^ (unsigned __int64)(unsigned int)v214;
                if ( !*(_DWORD *)(v85 + 1544) )
                {
                  *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1568) = *(int *)v97;
                  *(_QWORD *)(v85 + 1576) = v217;
                  *(_DWORD *)(v85 + 1544) = 1;
                }
              }
              v91 = *(_DWORD **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
            }
            v215 += 4;
            v213 += 3;
            v227 = v213 == v216;
            if ( v213 >= v216 )
              goto LABEL_359;
          }
          while ( *(_DWORD *)(v85 + 1432) < *v91 );
          v227 = v213 == v216;
LABEL_359:
          if ( v227 )
          {
            v228 = *(_QWORD *)(v85 + 1104);
            v229 = *(_QWORD *)(v85 + 1080) + 16LL;
            v230 = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            (*(void (__fastcall **)(__int64, unsigned __int64, __int64))(v85 + 328))(v228, v214, 12LL);
            v232 = *(unsigned int **)(v85 + 1080);
            v233 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
            v234 = *((_BYTE *)v232 + 12) != 0;
            v235 = v229 + 24LL * *v232;
            while ( 1 )
            {
              v236 = 24LL;
              v237 = (__int64 *)(v233 + 24);
              v238 = (__int64 *)v229;
              while ( 1 )
              {
                v239 = *v238++;
                v240 = *v237++;
                if ( v239 != v240 )
                  break;
                v236 = (unsigned int)(v236 - 8);
                if ( (unsigned int)v236 < 8 )
                {
                  v241 = (_DWORD)v236 == 0;
                  while ( !v241 )
                  {
                    v231 = *(unsigned __int8 *)v238;
                    v238 = (__int64 *)((char *)v238 + 1);
                    v242 = *(unsigned __int8 *)v237;
                    v237 = (__int64 *)((char *)v237 + 1);
                    if ( v231 != v242 )
                      goto LABEL_368;
                    v241 = (_DWORD)v236 == 1;
                    v236 = (unsigned int)(v236 - 1);
                  }
LABEL_369:
                  (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v85 + 392))(
                    *(_QWORD *)(v85 + 1104),
                    v231,
                    v236,
                    v237);
                  __writecr8(v230);
                  if ( v234 && *(_QWORD *)(v233 + 24) == 1LL )
                  {
                    i16 = 0LL;
                  }
                  else
                  {
                    i16 = 0LL;
                    if ( v229 == v235 && !*(_DWORD *)(v85 + 1544) )
                    {
                      v243 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                      *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v85 + 1560) = (char *)v243 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v85 + 1568) = *v243;
                      *(_QWORD *)(v85 + 1576) = v229;
                      *(_DWORD *)(v85 + 1544) = 1;
                    }
                  }
                  *(_DWORD *)(v85 + 1428) = 0;
                  goto LABEL_217;
                }
              }
LABEL_368:
              v229 += 24LL;
              if ( v229 >= v235 )
                goto LABEL_369;
            }
          }
          *(_DWORD *)(v85 + 1428) = ((__int64)v213 - *v1) / 12;
LABEL_377:
          i16 = 0LL;
          goto LABEL_217;
        }
        if ( !*(_QWORD *)(v85 + 1672) )
          goto LABEL_217;
LABEL_380:
        v244 = (_QWORD *)*((_QWORD *)v97 + 1);
        v245 = *((unsigned int *)v97 + 4);
        v246 = (const char *)v244;
        *(_DWORD *)(v85 + 1432) += v245;
        v247 = *(_DWORD *)(v85 + 1412);
        v248 = *(_QWORD *)(v85 + 1416);
        if ( v244 < (_QWORD *)((char *)v244 + v245) )
        {
          do
          {
            _mm_prefetch(v246, 0);
            v246 += 64;
          }
          while ( v246 < (const char *)v244 + v245 );
        }
        if ( (unsigned int)v245 >= 8 )
        {
          v249 = v245 >> 3;
          do
          {
            v248 = __ROL8__(*v244++ ^ v248, v247);
            LODWORD(v245) = v245 - 8;
            --v249;
          }
          while ( v249 );
        }
        for ( ; (_DWORD)v245; LODWORD(v245) = v245 - 1 )
        {
          v250 = *(unsigned __int8 *)v244;
          v244 = (_QWORD *)((char *)v244 + 1);
          v248 = __ROL8__(v250 ^ v248, v247);
        }
        for ( kk = v248; ; LODWORD(v248) = kk ^ v248 )
        {
          kk >>= 31;
          if ( !kk )
            break;
        }
        v252 = *((unsigned int *)v97 + 5);
        v253 = v248 & 0x7FFFFFFF;
        if ( v253 == (_DWORD)v252 )
          goto LABEL_217;
        if ( !*(_DWORD *)(v85 + 1544) )
          *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = v252 ^ v253;
LABEL_393:
        v254 = *((_QWORD *)v97 + 1);
        if ( *(_DWORD *)(v85 + 1544) )
          goto LABEL_217;
        goto LABEL_394;
      }
      if ( v106 > 29 )
        break;
      switch ( v106 )
      {
        case 29:
          v762 = (_QWORD *)*((_QWORD *)v97 + 1);
          v763 = *((unsigned int *)v97 + 4);
          v764 = (const char *)v762;
          *(_DWORD *)(v85 + 1432) += v763;
          v765 = *(_DWORD *)(v85 + 1412);
          v766 = *(_QWORD *)(v85 + 1416);
          if ( v762 < (_QWORD *)((char *)v762 + v763) )
          {
            do
            {
              _mm_prefetch(v764, 0);
              v764 += 64;
            }
            while ( v764 < (const char *)v762 + v763 );
          }
          if ( (unsigned int)v763 >= 8 )
          {
            v767 = v763 >> 3;
            do
            {
              v766 = __ROL8__(*v762++ ^ v766, v765);
              v763 = (unsigned int)(v763 - 8);
              --v767;
            }
            while ( v767 );
          }
          if ( (_DWORD)v763 )
          {
            do
            {
              v768 = *(unsigned __int8 *)v762;
              v762 = (_QWORD *)((char *)v762 + 1);
              v766 = __ROL8__(v768 ^ v766, v765);
              v128 = (_DWORD)v763 == 1;
              v763 = (unsigned int)(v763 - 1);
            }
            while ( !v128 );
          }
          for ( mm = v766; ; LODWORD(v766) = mm ^ v766 )
          {
            mm >>= 31;
            if ( !mm )
              break;
          }
          v770 = *((unsigned int *)v97 + 5);
          v771 = v766 & 0x7FFFFFFF;
          if ( v771 != (_DWORD)v770 )
          {
            if ( !*(_DWORD *)(v85 + 1544) )
              *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = v770 ^ v771;
            v772 = *((_QWORD *)v97 + 1);
            if ( !*(_DWORD *)(v85 + 1544) )
            {
              *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1568) = *(int *)v97;
              *(_QWORD *)(v85 + 1576) = v772;
              *(_DWORD *)(v85 + 1544) = 1;
            }
          }
          v773 = (unsigned int *)*((_QWORD *)v97 + 1);
          v774 = *((_DWORD *)v97 + 4) >> 4;
          *v1 = v773;
          if ( v774 )
          {
            v775 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
            v776 = v774;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v774;
            do
            {
              v777 = v775;
              v778 = **(_QWORD **)v773;
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2B8) = 0LL;
              v779 = (*(__int64 (__fastcall **)(__int64, _QWORD *, unsigned __int64, _QWORD *))(v85 + 712))(
                       v778,
                       v1 + 87,
                       v763,
                       v762);
              if ( v779 )
              {
                do
                {
                  if ( !(*(__int64 (__fastcall **)(__int64, _QWORD *))(v85 + 472))(v779, v1 + 165) )
                  {
                    if ( (*(_DWORD *)(v85 + 1680) & 0x40000000) != 0 )
                    {
                      v780 = *(_QWORD **)(v85 + 1848);
                      v781 = 48;
                      v782 = 6LL;
                      do
                      {
                        v781 -= 8;
                        *v780 = *(_QWORD *)v777;
                        v777 += 8;
                        ++v780;
                        --v782;
                      }
                      while ( v782 );
                      for ( ; v781; --v781 )
                      {
                        v783 = *v777++;
                        *(_BYTE *)v780 = v783;
                        v780 = (_QWORD *)((char *)v780 + 1);
                      }
                      v777 = *(char **)(v85 + 1848);
                    }
                    *((_QWORD *)v777 + 3) = v779;
                    *((_QWORD *)v777 + 4) = v778;
                    v784 = *(_QWORD *)(v85 + 1176);
                    *(_QWORD *)v784 = v777;
                    *(_DWORD *)(v784 + 16) = 48;
                    v785 = *(_QWORD *)(v85 + 1176);
                    *(_QWORD *)(v785 + 8) = v779;
                    *(_DWORD *)(v785 + 20) = 4096;
                    if ( !*(_DWORD *)(v85 + 1544) )
                    {
                      *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v85 + 1560) = v777 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v85 + 1568) = *(int *)v777;
                      *(_QWORD *)(v85 + 1576) = 6LL;
                      *(_DWORD *)(v85 + 1544) = 1;
                    }
                  }
                  v779 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(v85 + 712))(v778, v1 + 87);
                }
                while ( v779 );
                v773 = (unsigned int *)*v1;
                v776 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                v775 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
              }
              v773 += 4;
              --v776;
              *v1 = v773;
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v776;
            }
            while ( v776 );
          }
          goto LABEL_377;
        case 20:
          goto LABEL_184;
        case 21:
          v758 = *((_DWORD *)v97 + 10);
          (*(void (__fastcall **)(_QWORD *, _QWORD))(v85 + 408))(v1 + 173, *((unsigned int *)v97 + 11));
          (*(void (__fastcall **)(_QWORD *, _QWORD))(v85 + 416))(v1 + 173, 0LL);
          v128 = v758 == 0;
          v759 = __readcr4();
          if ( v128 )
            v759 = __readcr0();
          (*(void (**)(void))(v85 + 400))();
          v760 = *((_QWORD *)v97 + 4);
          v761 = v759 & *((_QWORD *)v97 + 3);
          if ( v761 == v760 )
            goto LABEL_217;
          v254 = *((_QWORD *)v97 + 5);
          if ( *(_DWORD *)(v85 + 1544) )
            goto LABEL_217;
          *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = v761 ^ v760;
          if ( *(_DWORD *)(v85 + 1544) )
            goto LABEL_217;
LABEL_394:
          *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
          v255 = v97 - 0x4C48B4211BBACBEBLL;
LABEL_395:
          *(_QWORD *)(v85 + 1560) = v255;
          *(_QWORD *)(v85 + 1568) = *(int *)v97;
          *(_QWORD *)(v85 + 1576) = v254;
          goto LABEL_396;
        case 24:
          if ( (*(_DWORD *)(v85 + 1680) & 0x40000000) != 0 )
          {
            v380 = __rdtsc();
            v381 = (__ROR8__(v380, 3) ^ v380) * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x4D8) = *((_QWORD *)&v381 + 1);
            *(_DWORD *)(v85 + 1428) = ((unsigned __int64)v381 ^ *((_QWORD *)&v381 + 1)) % 5;
          }
          while ( 1 )
          {
            v382 = *(_DWORD *)(v85 + 1428);
            if ( v382 )
            {
              v383 = v382 - 1;
              if ( v383 )
              {
                v384 = v383 - 1;
                if ( v384 )
                {
                  v385 = v384 - 1;
                  if ( !v385 )
                  {
                    v128 = (*(_DWORD *)(v85 + 1680) & 0x40000000) == 0;
                    v397 = (_BYTE *)v85;
                    v398 = *(__int64 **)(v85 + 1032);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v85;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v85;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = 0;
                    v399 = *v398;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = *v398;
                    if ( !v128 )
                      goto LABEL_1089;
                    v400 = *((_QWORD *)v97 + 5);
                    if ( v400 )
                    {
                      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = 1;
                      if ( v399 != v400 )
                      {
                        *((_QWORD *)v97 + 3) = v399;
                        v401 = *(_QWORD *)(v85 + 1176);
                        *(_QWORD *)v401 = v97;
                        *(_DWORD *)(v401 + 16) = 48;
                        v402 = *(_QWORD *)(v85 + 1176);
                        *(_QWORD *)(v402 + 8) = v399;
                        *(_DWORD *)(v402 + 20) = 4096;
                        if ( !*(_DWORD *)(v85 + 1544) )
                        {
                          *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v85 + 1568) = *(int *)v97;
                          *(_QWORD *)(v85 + 1576) = 5LL;
                          *(_DWORD *)(v85 + 1544) = 1;
                        }
                      }
                      goto LABEL_771;
                    }
                    if ( !v399 )
                    {
LABEL_771:
                      LODWORD(i16) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                      goto LABEL_1089;
                    }
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = 1;
                    v403 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(v85 + 464))(
                             v399,
                             v1 + 26,
                             (__int64)v1 + 132);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = v403;
                    v406 = v403;
                    if ( !v403 )
                    {
                      v407 = -1073741701;
LABEL_768:
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v397;
                      v520 = &v397[-v85];
                      v85 = (unsigned __int64)v397;
                      v521 = &v520[*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58)];
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v521;
                      if ( (int)(v407 + 0x80000000) < 0 || v407 == -1073741554 )
                        *((_QWORD *)v521 + 5) = v399;
                      goto LABEL_771;
                    }
                    v408 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0);
                    v409 = v1 + 49;
                    v410 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x84);
                    v411 = 4;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v410;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v408;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x180) = 0LL;
                    do
                    {
                      *v409++ = 0;
                      --v411;
                    }
                    while ( v411 );
                    v412 = 0;
                    if ( *(_DWORD *)(v85 + 1404) )
                    {
                      v413 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x188);
                      LODWORD(v404) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x184);
                      LODWORD(v405) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x180);
                      while ( 1 )
                      {
                        v414 = v85;
                        v415 = 0;
                        if ( *(_QWORD *)(v85 + 1840) )
                          v414 = *(_QWORD *)(v85 + 1840);
                        *v1 = v414;
                        v416 = v414 + *(unsigned int *)(v414 + 1400);
                        if ( (_DWORD)v405 && (unsigned int)v404 <= v412 )
                        {
                          v415 = v404;
                          v416 = v414 + v413;
                        }
                        if ( v415 != v412 )
                          break;
LABEL_638:
                        v404 = v415;
                        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x180) = 1;
                        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x184) = v415;
                        v413 = v416 - v414;
                        v405 = 1LL;
                        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x188) = v416 - v414;
                        v425 = *(_DWORD *)v416;
                        if ( (*(_DWORD *)v416 == 1 || v425 == 12)
                          && *(_QWORD *)(v416 + 8) == v406
                          && *(_DWORD *)(v416 + 16) == v410
                          || (unsigned int)(v425 - 33) <= 1 && *(_QWORD *)(v416 + 32) == v408 )
                        {
                          goto LABEL_646;
                        }
                        if ( ++v412 >= *(_DWORD *)(v85 + 1404) )
                          goto LABEL_645;
                      }
                      v417 = v412 - v415;
                      v415 = v412;
                      while ( 2 )
                      {
                        v418 = *(_DWORD *)v416;
                        if ( *(int *)v416 > 17 )
                        {
                          if ( v418 != 19 )
                          {
                            if ( v418 != 28 )
                            {
                              if ( v418 == 30 )
                              {
                                v423 = (((*(_DWORD *)(v416 + 36) - 1) / 0xCu + 7) & 0xFFFFFFF8)
                                     + 24 * (*(unsigned __int16 *)(v416 + 40) + 2);
                              }
                              else if ( (unsigned int)(v418 - 33) > 1 )
                              {
LABEL_622:
                                v423 = 48LL;
                              }
                              else
                              {
                                v423 = 20
                                     * (unsigned int)(((*(_DWORD *)(v416 + 32) & 0xFFF)
                                                     + (unsigned __int64)*(unsigned int *)(v416 + 40)
                                                     + 4095) >> 12)
                                     + 48;
                              }
                              goto LABEL_636;
                            }
                            v424 = *(unsigned __int16 *)(v416 + 40);
LABEL_625:
                            v423 = (v424 + 55) & 0xFFFFFFF8;
                            goto LABEL_636;
                          }
                        }
                        else if ( v418 != 17 )
                        {
                          v419 = v418 - 1;
                          if ( !v419 )
                            goto LABEL_627;
                          v420 = v419 - 6;
                          if ( !v420 )
                          {
                            v423 = (unsigned int)(24 * (*(_DWORD *)(v416 + 24) + 2));
                            goto LABEL_636;
                          }
                          v421 = v420 - 1;
                          if ( v421 )
                          {
                            v422 = v421 - 2;
                            if ( v422 )
                            {
                              if ( v422 != 2 )
                                goto LABEL_622;
LABEL_627:
                              v423 = 4 * (*(_DWORD *)(v416 + 16) / 0xCu) + 48;
                            }
                            else
                            {
                              v423 = (unsigned int)(16 * (*(_DWORD *)(v416 + 28) + 3));
                            }
LABEL_636:
                            v416 += v423;
                            if ( !--v417 )
                            {
                              v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                              v414 = *v1;
                              v408 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                              v410 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                              v406 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
                              goto LABEL_638;
                            }
                            continue;
                          }
                          v424 = *(unsigned __int16 *)(v416 + 32);
                          goto LABEL_625;
                        }
                        break;
                      }
                      v423 = 56LL;
                      goto LABEL_636;
                    }
LABEL_645:
                    v416 = 0LL;
LABEL_646:
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x208) = v416;
                    if ( v416 )
                    {
                      v407 = -1073741554;
                      goto LABEL_766;
                    }
                    v426 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(v85 + 624))(
                             *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38),
                             v404,
                             0LL,
                             v405);
                    v128 = (*(_DWORD *)(v85 + 1680) & 0x40000000) == 0;
                    v427 = v426;
                    v428 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x84);
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v426;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = v428;
                    if ( !v128 )
                    {
                      v429 = sub_14072DC88(
                               v1 + 25,
                               *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0),
                               1LL);
                      v397 = *(_BYTE **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8);
                      v407 = v429;
                      goto LABEL_767;
                    }
                    v430 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v430;
                    v431 = (*(__int64 (__fastcall **)(__int64))(v85 + 456))(v430);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v431;
                    if ( !v431 )
                      goto LABEL_765;
                    v432 = *(unsigned int *)(v85 + 1364);
                    v433 = *(unsigned int *)(v85 + 1588);
                    v434 = v428;
                    *v1 = v428 / 0xC;
                    v435 = 4 * (v428 / 0xC);
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v435;
                    v436 = v427 != 0 ? 12 : 1;
                    v437 = v432 + v435 + 48;
                    if ( v437 <= *(_DWORD *)(v85 + 1812) )
                    {
                      v438 = (_BYTE *)v85;
                      *(_DWORD *)(v85 + 1364) = v437;
                    }
                    else
                    {
                      v438 = (_BYTE *)sub_140236718(v85, v437, v433);
                      if ( !v438 )
                        goto LABEL_668;
                      v439 = *(_DWORD *)(v85 + 1680);
                      if ( (v439 & 4) == 0 )
                      {
                        v440 = *(_DWORD *)(v85 + 1364);
                        v441 = *(_QWORD *)(v85 + 1336);
                        v442 = (_QWORD *)v85;
                        v443 = (v439 & 0x20000000) != 0 ? *(_DWORD *)(v85 + 1588) : 0;
                        if ( v440 >= 8 )
                        {
                          v444 = (unsigned __int64)v440 >> 3;
                          do
                          {
                            *v442 = 0LL;
                            v440 -= 8;
                            ++v442;
                            --v444;
                          }
                          while ( v444 );
                        }
                        for ( ; v440; --v440 )
                        {
                          *(_BYTE *)v442 = 0;
                          v442 = (_QWORD *)((char *)v442 + 1);
                        }
                        v445 = *((_DWORD *)v438 + 397);
                        *((_DWORD *)v438 + 397) = v443;
                        if ( v443 == 3 )
                        {
                          (*((void (__fastcall **)(__int64))v438 + 100))(v441);
                        }
                        else
                        {
                          v446 = 0;
                          if ( (*((_DWORD *)v438 + 420) & 0x10000000) == 0 )
                            v446 = v443;
                          if ( v446 )
                            (*((void (__fastcall **)(__int64, _QWORD))v438 + 63))(v441 - 8, *(_QWORD *)(v441 - 8));
                          else
                            (*((void (__fastcall **)(__int64))v438 + 31))(v441);
                        }
                        *((_DWORD *)v438 + 397) = v445;
                      }
                      *((_DWORD *)v438 + 420) &= ~4u;
                    }
                    ++*((_DWORD *)v438 + 351);
                    v447 = 48;
                    v448 = &v438[v432];
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3A8) = &v438[v432];
                    v449 = &v438[v432];
                    v450 = 6LL;
                    do
                    {
                      *v449 = 0LL;
                      v447 -= 8;
                      ++v449;
                      --v450;
                    }
                    while ( v450 );
                    for ( ; v447; --v447 )
                    {
                      *(_BYTE *)v449 = 0;
                      v449 = (_QWORD *)((char *)v449 + 1);
                    }
                    v451 = *(_QWORD **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
                    *(_DWORD *)v448 = v436;
                    *((_QWORD *)v448 + 1) = v451;
                    *((_DWORD *)v448 + 4) = v434;
                    *((_DWORD *)v438 + 358) += v434;
                    v452 = v451;
                    v453 = *((_DWORD *)v438 + 353);
                    v454 = (const char *)v451;
                    v455 = *((_QWORD *)v438 + 177);
                    if ( v451 < (_QWORD *)((char *)v451 + v434) )
                    {
                      do
                      {
                        _mm_prefetch(v454, 0);
                        v454 += 64;
                      }
                      while ( v454 < (const char *)v451 + v434 );
                    }
                    v456 = (unsigned int)v434;
                    if ( (unsigned int)v434 >= 8 )
                    {
                      v457 = (unsigned __int64)(unsigned int)v434 >> 3;
                      do
                      {
                        v455 = __ROL8__(*v452++ ^ v455, v453);
                        v456 = (unsigned int)(v456 - 8);
                        --v457;
                      }
                      while ( v457 );
                    }
                    if ( (_DWORD)v456 )
                    {
                      do
                      {
                        v458 = *(unsigned __int8 *)v452;
                        v452 = (_QWORD *)((char *)v452 + 1);
                        v455 = __ROL8__(v458 ^ v455, v453);
                        v128 = (_DWORD)v456 == 1;
                        v456 = (unsigned int)(v456 - 1);
                      }
                      while ( !v128 );
                    }
                    for ( nn = v455; ; v455 = (unsigned int)nn ^ (unsigned int)v455 )
                    {
                      nn >>= 31;
                      if ( !nn )
                        break;
                    }
                    LODWORD(v455) = v455 & 0x7FFFFFFF;
                    *((_DWORD *)v448 + 5) = v455;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x198) = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3A8);
                    *((_DWORD *)v438 + 358) += v434;
                    v460 = -1073741275;
                    v461 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x198);
                    v462 = *((_QWORD *)v438 + 135) + 16LL;
                    v463 = *((_QWORD *)v438 + 138);
                    v464 = KeGetCurrentIrql();
                    __writecr8(0xFuLL);
                    (*((void (__fastcall **)(__int64, unsigned __int64, __int64, _QWORD *))v438 + 41))(
                      v463,
                      v455,
                      v456,
                      v452);
                    v465 = v462 + 24LL * **((unsigned int **)v438 + 135);
                    while ( *(_QWORD *)(v462 + 8) != *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) )
                    {
                      v462 += 24LL;
                      if ( v462 >= v465 )
                        goto LABEL_689;
                    }
                    v460 = 0;
                    *(_OWORD *)(v461 + 24) = *(_OWORD *)v462;
                    *(_QWORD *)(v461 + 40) = *(_QWORD *)(v462 + 16);
LABEL_689:
                    (*((void (__fastcall **)(_QWORD))v438 + 49))(*((_QWORD *)v438 + 138));
                    __writecr8(v464);
                    if ( v460 < 0 )
                    {
                      v466 = 24;
                      v467 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x198) + 24LL);
                      v468 = 3LL;
                      do
                      {
                        *v467 = 0LL;
                        v466 -= 8;
                        ++v467;
                        --v468;
                      }
                      while ( v468 );
                      for ( ; v466; --v466 )
                      {
                        *(_BYTE *)v467 = 0;
                        v467 = (_QWORD *)((char *)v467 + 1);
                      }
                      *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x198) + 24LL) = 1LL;
                    }
                    v469 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                    v470 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x198) + 48LL);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v470;
                    if ( v469 >= 8 )
                    {
                      v471 = (unsigned __int64)v469 >> 3;
                      do
                      {
                        *v470 = -1LL;
                        v469 -= 8;
                        ++v470;
                        --v471;
                      }
                      while ( v471 );
                    }
                    for ( ; v469; --v469 )
                    {
                      *(_BYTE *)v470 = -1;
                      v470 = (_QWORD *)((char *)v470 + 1);
                    }
                    v472 = *(unsigned int *)v1;
                    v473 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = -1;
                    v474 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                    v475 = *v473;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = 0;
                    v476 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
                    *v1 = &v473[3 * v472];
                    v477 = (_DWORD *)(*((__int64 (__fastcall **)(__int64, __int64, __int64))v438 + 60))(
                                       v476,
                                       v474,
                                       v475);
                    if ( !v477 )
                      goto LABEL_765;
LABEL_701:
                    v478 = 0;
                    if ( (v477[9] & 0x2000000) != 0 )
                      goto LABEL_728;
                    v479 = *v477;
                    if ( *v477 == 1414090313 && v477[1] == 1195525195 )
                      goto LABEL_728;
                    if ( v479 == 1162297680 )
                    {
                      v480 = *((_WORD *)v477 + 2);
                      if ( v480 == 30583 || v480 == 29303 || v480 == 30839 )
                        goto LABEL_728;
                    }
                    if ( v479 == 1095914053 && *((_WORD *)v477 + 2) == 16724 )
                      goto LABEL_728;
                    v481 = 7;
                    v482 = (char *)*((_QWORD *)v438 + 200);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3B8) = *((_QWORD *)v438 + 201);
                    v483 = (char *)v477 - v482;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3C0) = *((_QWORD *)v438 + 202);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3C8) = *((_QWORD *)v438 + 203);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3B0) = v482;
                    while ( 1 )
                    {
                      v484 = (unsigned __int8)v482[v483];
                      v485 = (unsigned __int8)*v482++;
                      if ( v484 != v485 )
                        break;
                      if ( !--v481 )
                        goto LABEL_728;
                    }
                    v486 = *(__int64 **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3B8);
                    v487 = 8;
                    v488 = (__int64 *)v477;
                    do
                    {
                      v489 = *v488++;
                      v490 = *v486++;
                      if ( v489 != v490 )
                        goto LABEL_721;
                      v487 -= 8;
                    }
                    while ( v487 >= 8 );
                    if ( !v487 )
                    {
LABEL_728:
                      v478 = 1;
                    }
                    else
                    {
                      while ( 1 )
                      {
                        v491 = *(unsigned __int8 *)v488;
                        v488 = (__int64 *)((char *)v488 + 1);
                        v492 = *(unsigned __int8 *)v486;
                        v486 = (__int64 *)((char *)v486 + 1);
                        if ( v491 != v492 )
                          break;
                        if ( !--v487 )
                          goto LABEL_728;
                      }
LABEL_721:
                      v493 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3C0);
                      v494 = (char *)v477 - v493;
                      v495 = 4;
                      while ( 1 )
                      {
                        v496 = (unsigned __int8)v493[v494];
                        v497 = (unsigned __int8)*v493++;
                        if ( v496 != v497 )
                          break;
                        if ( !--v495 )
                          goto LABEL_728;
                      }
                      v498 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3C8);
                      v499 = (char *)v477 - v498;
                      v500 = 6;
                      while ( 1 )
                      {
                        v501 = (unsigned __int8)v498[v499];
                        v502 = (unsigned __int8)*v498++;
                        if ( v501 != v502 )
                          break;
                        if ( !--v500 )
                          goto LABEL_728;
                      }
                    }
                    if ( (int)v477[9] < 0 )
                      v478 = 1;
                    if ( v478
                      && *v477 == 1414090313
                      && v477[1] == 1195525195
                      && (*((_DWORD *)v438 + 420) & 0x10000000) != 0 )
                    {
                      v478 = 0;
                    }
                    v503 = v477[2];
                    if ( v477[4] > v503 )
                      v503 = v477[4];
                    v504 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                    v505 = v503 + v477[3];
                    while ( 1 )
                    {
                      v506 = v473[2];
                      if ( (v506 & 1) == 0 )
                      {
                        v507 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                        if ( v506 < v507 )
                          v507 = v473[2];
                        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v507;
                        v508 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                        if ( v506 > v508 )
                          v508 = v506;
                        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v508;
                      }
                      v509 = *v473;
                      v510 = v473[1] - v509;
                      v511 = (char *)(v504 + v509);
                      if ( v478 )
                      {
                        v512 = *(_DWORD **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                        *v512 = 0x80000000;
                      }
                      else
                      {
                        *((_DWORD *)v438 + 358) += v510;
                        v513 = (const char *)(v504 + v509);
                        v514 = *((_DWORD *)v438 + 353);
                        v515 = *((_QWORD *)v438 + 177);
                        v516 = &v511[v510];
                        if ( v511 < v516 )
                        {
                          do
                          {
                            _mm_prefetch(v513, 0);
                            v513 += 64;
                          }
                          while ( v513 < v516 );
                        }
                        if ( v510 >= 8 )
                        {
                          v517 = (unsigned __int64)v510 >> 3;
                          do
                          {
                            v515 = __ROL8__(*(_QWORD *)v511 ^ v515, v514);
                            v511 += 8;
                            v510 -= 8;
                            --v517;
                          }
                          while ( v517 );
                          v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                          v504 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                        }
                        if ( v510 )
                        {
                          do
                          {
                            v518 = (unsigned __int8)*v511++;
                            v515 = __ROL8__(v518 ^ v515, v514);
                            --v510;
                          }
                          while ( v510 );
                          v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                        }
                        for ( i1 = v515; ; LODWORD(v515) = i1 ^ v515 )
                        {
                          i1 >>= 31;
                          if ( !i1 )
                            break;
                        }
                        v512 = *(_DWORD **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                        *v512 = v515 & 0x7FFFFFFF;
                      }
                      v473 += 3;
                      if ( v473 == (unsigned int *)*v1 )
                        break;
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v512 + 1;
                      if ( *v473 < v477[3] || v504 + (unsigned __int64)v473[1] > v505 )
                      {
                        v477 = (_DWORD *)(*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD, char *))v438 + 60))(
                                           *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68),
                                           v504,
                                           *v473,
                                           v511);
                        if ( !v477 )
                        {
                          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8);
                          goto LABEL_765;
                        }
                        goto LABEL_701;
                      }
                    }
                    v522 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                    v523 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                    if ( (_DWORD)v522 == -1 && !v523 )
                      v522 = 0LL;
                    v524 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0);
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x220) = v523 - v522;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x350) = v524 + (unsigned int)v522;
                    LOBYTE(v522) = 1;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v438;
                    v397 = v438;
                    v525 = (*((__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))v438 + 56))(
                             v524,
                             v522,
                             0LL,
                             (__int64)v1 + 132);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x358) = v525;
                    v526 = v525 != 0 ? *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x84) : 0;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x84) = v526;
                    LOBYTE(v525) = 1;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x224) = v526;
                    v527 = (*((__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))v438 + 56))(
                             *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0),
                             v525,
                             12LL,
                             (__int64)v1 + 132);
                    v528 = v527;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v527;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x360) = v527;
                    LOBYTE(v528) = 1;
                    v529 = v527 != 0 ? *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x84) : 0;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v529;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x84) = v529;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x228) = v529;
                    v530 = (*((__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))v438 + 56))(
                             *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0),
                             v528,
                             10LL,
                             (__int64)v1 + 132);
                    v531 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x368) = v530;
                    v532 = v530 != 0 ? *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x84) : 0;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x84) = v532;
                    v533 = *((unsigned int *)v438 + 341);
                    v534 = *((unsigned int *)v438 + 397);
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x22C) = v532;
                    v535 = v531 != 0 ? 0xB : 0;
                    v536 = v533 + 192;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v535;
                    if ( (unsigned int)(v533 + 192) <= *((_DWORD *)v438 + 453) )
                    {
                      v537 = v438;
                      *((_DWORD *)v438 + 341) = v536;
                    }
                    else
                    {
                      v537 = (_BYTE *)sub_140236718(v438, v536, v534);
                      if ( !v537 )
                      {
                        v407 = -1073741670;
                        goto LABEL_767;
                      }
                      v538 = *((_DWORD *)v438 + 420);
                      if ( (v538 & 4) == 0 )
                      {
                        v539 = *((_DWORD *)v438 + 341);
                        v540 = *((_QWORD *)v438 + 167);
                        v541 = (v538 & 0x20000000) != 0 ? *((_DWORD *)v438 + 397) : 0;
                        if ( v539 >= 8 )
                        {
                          v542 = (unsigned __int64)v539 >> 3;
                          do
                          {
                            *(_QWORD *)v438 = 0LL;
                            v539 -= 8;
                            v438 += 8;
                            --v542;
                          }
                          while ( v542 );
                        }
                        for ( ; v539; --v539 )
                          *v438++ = 0;
                        v543 = *((_DWORD *)v537 + 397);
                        *((_DWORD *)v537 + 397) = v541;
                        if ( v541 == 3 )
                        {
                          (*((void (__fastcall **)(__int64, __int64))v537 + 100))(v540, 1LL);
                        }
                        else
                        {
                          v544 = 0;
                          if ( (*((_DWORD *)v537 + 420) & 0x10000000) == 0 )
                            v544 = v541;
                          if ( v544 )
                            (*((void (__fastcall **)(__int64, _QWORD))v537 + 63))(v540 - 8, *(_QWORD *)(v540 - 8));
                          else
                            (*((void (__fastcall **)(__int64, __int64))v537 + 31))(v540, 1LL);
                        }
                        *((_DWORD *)v537 + 397) = v543;
                      }
                      *((_DWORD *)v537 + 420) &= ~4u;
                    }
                    v545 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                    v546 = (__int64)&v537[v533];
                    v547 = (unsigned int *)(v1 + 68);
                    *((_DWORD *)v537 + 351) += 4;
                    v548 = (_QWORD **)(v1 + 106);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2A8) = &v537[v533];
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x208) = &v537[v533];
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = ((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                          + 544;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = 4LL;
                    do
                    {
                      v549 = *v547;
                      v550 = 48;
                      v551 = *v548;
                      v552 = (_QWORD *)v546;
                      v553 = 6LL;
                      do
                      {
                        *v552 = 0LL;
                        v550 -= 8;
                        ++v552;
                        --v553;
                      }
                      while ( v553 );
                      for ( ; v550; --v550 )
                      {
                        *(_BYTE *)v552 = 0;
                        v552 = (_QWORD *)((char *)v552 + 1);
                      }
                      *(_DWORD *)v546 = v545;
                      *(_QWORD *)(v546 + 8) = v551;
                      if ( v545 == 32 && (_DWORD)v549 )
                      {
                        sub_14014F138((__int64)v537, (__int64)v551, v549, v546 + 24);
                        v547 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                      }
                      *(_DWORD *)(v546 + 16) = v549;
                      *((_DWORD *)v537 + 358) += v549;
                      v554 = (const char *)v551;
                      v555 = *((_DWORD *)v537 + 353);
                      v556 = *((_QWORD *)v537 + 177);
                      if ( v551 < (_QWORD *)((char *)v551 + v549) )
                      {
                        do
                        {
                          _mm_prefetch(v554, 0);
                          v554 += 64;
                        }
                        while ( v554 < (const char *)v551 + v549 );
                      }
                      v557 = v549;
                      if ( (unsigned int)v549 >= 8 )
                      {
                        v558 = v549 >> 3;
                        do
                        {
                          v556 = __ROL8__(*v551++ ^ v556, v555);
                          v557 -= 8;
                          --v558;
                        }
                        while ( v558 );
                      }
                      for ( ; v557; --v557 )
                      {
                        v559 = *(unsigned __int8 *)v551;
                        v551 = (_QWORD *)((char *)v551 + 1);
                        v556 = __ROL8__(v559 ^ v556, v555);
                      }
                      for ( i2 = v556 >> 31; i2; i2 >>= 31 )
                        LODWORD(v556) = i2 ^ v556;
                      ++v547;
                      *(_DWORD *)(v546 + 20) = v556 & 0x7FFFFFFF;
                      ++v548;
                      *((_DWORD *)v537 + 358) += v549;
                      v546 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2A8) + 48LL;
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v547;
                      v128 = (*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18))-- == 1LL;
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2A8) = v546;
                    }
                    while ( !v128 );
                    v561 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                    v562 = (int *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x208) + 96LL);
                    v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v537;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v537;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) = v562;
                    v563 = (v561 != 0) + 13;
                    if ( v562 )
                    {
                      v579 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
                      v567 = (__int64)v537;
                      *v562 = v563;
                      v580 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v537;
                    }
                    else
                    {
                      v564 = *((unsigned int *)v537 + 341);
                      v565 = v564 + 48;
                      if ( (unsigned int)(v564 + 48) <= *((_DWORD *)v537 + 453) )
                      {
                        v567 = (__int64)v537;
                        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v537;
                        *((_DWORD *)v537 + 341) = v565;
                      }
                      else
                      {
                        v566 = sub_140236718(v537, v565, *((unsigned int *)v537 + 397));
                        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v566;
                        v567 = v566;
                        if ( !v566 )
                          goto LABEL_668;
                        v568 = *((_DWORD *)v537 + 420);
                        if ( (v568 & 4) == 0 )
                        {
                          v569 = *((_DWORD *)v537 + 341);
                          v570 = *((_QWORD *)v537 + 167);
                          v571 = (v568 & 0x20000000) != 0 ? *((_DWORD *)v537 + 397) : 0;
                          if ( v569 >= 8 )
                          {
                            v572 = (unsigned __int64)v569 >> 3;
                            do
                            {
                              *(_QWORD *)v537 = 0LL;
                              v569 -= 8;
                              v537 += 8;
                              --v572;
                            }
                            while ( v572 );
                          }
                          for ( ; v569; --v569 )
                            *v537++ = 0;
                          v573 = *(_DWORD *)(v567 + 1588);
                          *(_DWORD *)(v567 + 1588) = v571;
                          if ( v571 == 3 )
                          {
                            (*(void (__fastcall **)(__int64, __int64))(v567 + 800))(v570, 1LL);
                          }
                          else
                          {
                            v574 = 0;
                            if ( (*(_DWORD *)(v567 + 1680) & 0x10000000) == 0 )
                              v574 = v571;
                            if ( v574 )
                              (*(void (__fastcall **)(__int64, _QWORD))(v567 + 504))(v570 - 8, *(_QWORD *)(v570 - 8));
                            else
                              (*(void (__fastcall **)(__int64, __int64))(v567 + 248))(v570, 1LL);
                          }
                          *(_DWORD *)(v567 + 1588) = v573;
                        }
                        *(_DWORD *)(v567 + 1680) &= ~4u;
                      }
                      v575 = v567 + v564;
                      ++*(_DWORD *)(v567 + 1404);
                      v576 = (_QWORD *)(v567 + v564);
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x318) = v567 + v564;
                      v577 = 48;
                      v578 = 6LL;
                      do
                      {
                        *v576 = 0LL;
                        v577 -= 8;
                        ++v576;
                        --v578;
                      }
                      while ( v578 );
                      for ( ; v577; --v577 )
                      {
                        *(_BYTE *)v576 = 0;
                        v576 = (_QWORD *)((char *)v576 + 1);
                      }
                      v579 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
                      v128 = v563 == 32;
                      *(_DWORD *)v575 = v563;
                      v580 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                      *(_QWORD *)(v575 + 8) = v579;
                      if ( v128 && v580 )
                        sub_14014F138(v567, v579, v580, v575 + 24);
                      *(_DWORD *)(v575 + 16) = v580;
                      v581 = (_QWORD *)v579;
                      *(_DWORD *)(v567 + 1432) += v580;
                      v582 = (const char *)v579;
                      v583 = *(_DWORD *)(v567 + 1412);
                      v584 = *(_QWORD *)(v567 + 1416);
                      v585 = v579 + v580;
                      if ( v579 < v585 )
                      {
                        do
                        {
                          _mm_prefetch(v582, 0);
                          v582 += 64;
                        }
                        while ( (unsigned __int64)v582 < v585 );
                      }
                      v586 = v580;
                      if ( v580 >= 8 )
                      {
                        v587 = (unsigned __int64)v580 >> 3;
                        do
                        {
                          v584 = __ROL8__(*v581++ ^ v584, v583);
                          v586 -= 8;
                          --v587;
                        }
                        while ( v587 );
                        v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                      }
                      if ( v586 )
                      {
                        do
                        {
                          v588 = *(unsigned __int8 *)v581;
                          v581 = (_QWORD *)((char *)v581 + 1);
                          v584 = __ROL8__(v588 ^ v584, v583);
                          --v586;
                        }
                        while ( v586 );
                        v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                      }
                      for ( i3 = v584; ; LODWORD(v584) = i3 ^ v584 )
                      {
                        i3 >>= 31;
                        if ( !i3 )
                          break;
                      }
                      *(_DWORD *)(v575 + 20) = v584 & 0x7FFFFFFF;
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x318);
                      *(_DWORD *)(v567 + 1432) += v580;
                    }
                    if ( (*(_DWORD *)(v567 + 1680) & 0x40000000) != 0 && v580 )
                      sub_14014F138(
                        v567,
                        v579,
                        v580,
                        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) + 28LL);
                    *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) + 24LL) = 0;
                    *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) + 24LL) |= 1u;
                    v590 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x208);
                    v591 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v567;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v567;
                    *(_DWORD *)(v590 + 144) = 35;
                    *(_DWORD *)(v590 + 184) ^= (*(_DWORD *)(v590 + 184) ^ (v561 != 0)) & 1;
                    if ( *(_DWORD *)(v590 + 160) >= 0x94u )
                    {
                      v592 = *(_QWORD *)(v590 + 152);
                      v593 = (*(__int64 (__fastcall **)(unsigned __int64))(v567 + 456))(v591);
                      if ( !v593 )
                        goto LABEL_668;
                      v594 = *(unsigned int *)(v593 + 80);
                      *(_DWORD *)(v590 + 184) |= 2u;
                      v595 = v591 + v594;
                      v596 = *(_QWORD **)(v592 + 112);
                      if ( (unsigned __int64)v596 >= v591 && (unsigned __int64)v596 < v595 )
                      {
                        *(_QWORD *)(v590 + 168) = *v596;
                        *(_DWORD *)(v590 + 184) |= 4u;
                      }
                      v597 = *(_QWORD **)(v592 + 120);
                      if ( (unsigned __int64)v597 >= v591 && (unsigned __int64)v597 < v595 )
                      {
                        *(_QWORD *)(v590 + 176) = *v597;
                        *(_DWORD *)(v590 + 184) |= 8u;
                      }
                    }
                    v128 = (*(_DWORD *)(v567 + 1680) & 0x400000) == 0;
                    v397 = (_BYTE *)v567;
                    v598 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v598;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v567;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v567;
                    if ( v128 )
                      goto LABEL_1048;
                    v599 = (*(__int64 (__fastcall **)(ULONG_PTR))(v567 + 456))(v598);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v599;
                    v600 = v599;
                    if ( v599 )
                    {
                      v601 = *(_WORD *)(v599 + 6);
                      v602 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0)
                           * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
                      *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v601;
                      *v1 = *((_QWORD *)&v602 + 1) >> 3;
                      if ( v601 )
                      {
                        v603 = 0;
                        v604 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
                        v605 = v601;
                        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v601;
                        *(_QWORD *)&v602 = *(unsigned __int16 *)(v600 + 20);
                        v606 = &v604[3 * (unsigned int)(*((_QWORD *)&v602 + 1) >> 3)];
                        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = v606;
                        *((_QWORD *)&v602 + 1) = v602 + v600 + 24;
                        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = *((_QWORD *)&v602 + 1);
                        v608 = (int *)(*((_QWORD *)&v602 + 1) + 8LL);
                        do
                        {
                          v609 = *v608;
                          v610 = v608[1];
                          if ( v608[2] > (unsigned int)*v608 )
                            v609 = v608[2];
                          v611 = v609 + v610;
                          if ( v603 && v611 < *(_DWORD *)(*((_QWORD *)&v602 + 1) + 40LL * (v603 - 1) + 12) )
                          {
                            v618 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                            if ( (*(_DWORD *)(v618 + 1680) & 0x200000) == 0 )
                            {
                              v1909 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
                              *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x244) = 324608;
                              KeBugCheckEx(
                                __ROR4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x244), 170),
                                0xAuLL,
                                v1909,
                                1uLL,
                                0LL);
                            }
                            if ( !*(_DWORD *)(v618 + 1544) )
                            {
LABEL_890:
                              *(_QWORD *)(v618 + 1552) = v618 - 0x5C5FC0A76E374B18LL;
                              v619 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
                              *(_QWORD *)(v618 + 1560) = 0LL;
                              *(_QWORD *)(v618 + 1568) = 271LL;
                              *(_QWORD *)(v618 + 1576) = v619;
                              *(_DWORD *)(v618 + 1544) = 1;
                            }
LABEL_765:
                            v407 = -1073741701;
                            goto LABEL_766;
                          }
                          if ( v604 != v606 )
                          {
                            do
                            {
                              v612 = v604[1];
                              if ( *v604 >= v611 || v612 <= v610 )
                                break;
                              if ( *v604 < v610 || v612 > v611 )
                              {
                                v618 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                                if ( (*(_DWORD *)(v618 + 1680) & 0x200000) == 0 )
                                {
                                  v1910 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
                                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x234) = 324608;
                                  KeBugCheckEx(
                                    __ROR4__(
                                      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x234),
                                      170),
                                    0xAuLL,
                                    v1910,
                                    2uLL,
                                    0LL);
                                }
                                if ( !*(_DWORD *)(v618 + 1544) )
                                  goto LABEL_890;
                                goto LABEL_765;
                              }
                              __e6(
                                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18),
                                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68),
                                *((_QWORD *)&v602 + 1) + 40LL * v603,
                                v604);
                              v606 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
                              v604 += 3;
                              *((_QWORD *)&v602 + 1) = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                 + 0x20);
                            }
                            while ( v604 != v606 );
                            v605 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                          }
                          ++v603;
                          v608 += 10;
                        }
                        while ( v603 < v605 );
                        v613 = *(_BYTE **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                        v614 = (unsigned int *)*v1;
                        v615 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                        v616 = *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                        if ( v604 != v606 )
                        {
                          if ( (*((_DWORD *)v613 + 420) & 0x200000) == 0 )
                          {
                            v1911 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
                            *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x218) = 324608;
                            KeBugCheckEx(
                              __ROR4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x218), 170),
                              0xAuLL,
                              v1911,
                              3uLL,
                              0LL);
                          }
                          if ( !*((_DWORD *)v613 + 386) )
                          {
                            *((_QWORD *)v613 + 194) = v613 - 0x5C5FC0A76E374B18LL;
                            v617 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
                            *((_QWORD *)v613 + 195) = 0LL;
                            *((_QWORD *)v613 + 196) = 271LL;
                            *((_QWORD *)v613 + 197) = v617;
                            *((_DWORD *)v613 + 386) = 1;
                          }
                          goto LABEL_765;
                        }
                        v620 = *((unsigned int *)v613 + 341);
                        v621 = v620 + (((_DWORD)v614 + 6) & 0xFFFFFFF8) + 24 * (v605 + 2);
                        if ( v621 <= *((_DWORD *)v613 + 453) )
                        {
                          v623 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v613;
                          *((_DWORD *)v613 + 341) = v621;
                          goto LABEL_912;
                        }
                        v622 = sub_140236718(
                                 *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18),
                                 v621,
                                 *((unsigned int *)v613 + 397));
                        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v622;
                        v623 = v622;
                        if ( v622 )
                        {
                          v624 = *((_DWORD *)v613 + 420);
                          if ( (v624 & 4) == 0 )
                          {
                            v625 = *((_DWORD *)v613 + 341);
                            v626 = *((_QWORD *)v613 + 167);
                            v627 = (v624 & 0x20000000) != 0 ? *((_DWORD *)v613 + 397) : 0;
                            if ( v625 >= 8 )
                            {
                              v628 = (unsigned __int64)v625 >> 3;
                              do
                              {
                                *(_QWORD *)v613 = 0LL;
                                v625 -= 8;
                                v613 += 8;
                                --v628;
                              }
                              while ( v628 );
                            }
                            for ( ; v625; --v625 )
                              *v613++ = 0;
                            v629 = *(_DWORD *)(v623 + 1588);
                            *(_DWORD *)(v623 + 1588) = v627;
                            if ( v627 == 3 )
                            {
                              (*(void (__fastcall **)(__int64, __int64))(v623 + 800))(v626, 1LL);
                            }
                            else
                            {
                              v630 = 0;
                              if ( (*(_DWORD *)(v623 + 1680) & 0x10000000) == 0 )
                                v630 = v627;
                              if ( v630 )
                                (*(void (__fastcall **)(__int64, _QWORD))(v623 + 504))(v626 - 8, *(_QWORD *)(v626 - 8));
                              else
                                (*(void (__fastcall **)(__int64, __int64))(v623 + 248))(v626, 1LL);
                            }
                            v623 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                            *(_DWORD *)(v623 + 1588) = v629;
                          }
                          *(_DWORD *)(v623 + 1680) &= ~4u;
                          v605 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                          v614 = (unsigned int *)*v1;
LABEL_912:
                          v631 = v623 + v620;
                          ++*(_DWORD *)(v623 + 1404);
                          v632 = (_QWORD *)(v623 + v620);
                          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x330) = v623 + v620;
                          v633 = 48;
                          v634 = 6LL;
                          do
                          {
                            *v632 = 0LL;
                            v633 -= 8;
                            ++v632;
                            --v634;
                          }
                          while ( v634 );
                          for ( ; v633; --v633 )
                          {
                            *(_BYTE *)v632 = 0;
                            v632 = (_QWORD *)((char *)v632 + 1);
                          }
                          v635 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
                          *(_DWORD *)v631 = 30;
                          *(_QWORD *)(v631 + 8) = v635;
                          *(_DWORD *)(v631 + 16) = 0;
                          v636 = *(_QWORD *)(v623 + 1416);
                          for ( i4 = v636; ; LODWORD(v636) = i4 ^ v636 )
                          {
                            i4 >>= 31;
                            if ( !i4 )
                              break;
                          }
                          v638 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
                          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v623;
                          v128 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) == 0;
                          v567 = v623;
                          *(_DWORD *)(v631 + 20) = v636 & 0x7FFFFFFF;
                          v639 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x330);
                          v640 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
                          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x140) = v639;
                          *(_QWORD *)(v639 + 24) = v640;
                          *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x140) + 32LL) = *(_DWORD *)(v615 + 80);
                          *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x140) + 36LL) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0);
                          *(_WORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x140) + 40LL) = v616;
                          v641 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
                          *(_WORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x140) + 42LL) ^= (*(_WORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x140) + 42LL) ^ !v128) & 1;
                          v642 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x140);
                          v643 = *(unsigned __int16 *)(v642 + 40);
                          v644 = v642 + 48 + (((unsigned int)((_DWORD)v614 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
                          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v642 + 48;
                          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = v644;
                          v645 = v644 + 24 * v643;
                          *v1 = v645;
                          if ( (_DWORD)v614 )
                            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v641 + 3;
                          else
                            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v638;
                          if ( v605 )
                          {
                            v646 = v605;
                            v647 = (_DWORD *)(v644 + 8);
                            do
                            {
                              v648 = 2LL;
                              do
                              {
                                *(v647 - 2) = 0;
                                *(v647 - 1) = 0;
                                *v647 = 0x80000000;
                                v647 += 3;
                                --v648;
                              }
                              while ( v648 );
                              --v646;
                            }
                            while ( v646 );
                          }
                          if ( v644 == v645 )
                          {
LABEL_1048:
                            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v567;
                            v407 = 0;
                            v397 = (_BYTE *)v567;
                            goto LABEL_767;
                          }
                          v649 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                          v650 = (unsigned int *)v644;
                          v651 = *(_BYTE **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                          v652 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                          while ( 2 )
                          {
                            v653 = 0;
                            if ( (*((_DWORD *)v652 + 9) & 0x2000000) != 0
                              || (v654 = *(_DWORD *)v652, *(_DWORD *)v652 == 1414090313)
                              && *((_DWORD *)v652 + 1) == 1195525195
                              || v654 == 1162297680
                              && ((v655 = *((_WORD *)v652 + 2), v655 == 30583) || v655 == 29303 || v655 == 30839)
                              || v654 == 1095914053 && *((_WORD *)v652 + 2) == 16724 )
                            {
                              v653 = 1;
                            }
                            else
                            {
                              v656 = *(char **)(v649 + 1600);
                              v657 = 7;
                              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3D8) = *(_QWORD *)(v649 + 1608);
                              v658 = v652 - v656;
                              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3E0) = *(_QWORD *)(v649 + 1616);
                              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3E8) = *(_QWORD *)(v649 + 1624);
                              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3D0) = v656;
                              while ( 1 )
                              {
                                v659 = (unsigned __int8)v656[v658];
                                v660 = (unsigned __int8)*v656++;
                                if ( v659 != v660 )
                                  break;
                                if ( !--v657 )
                                  goto LABEL_956;
                              }
                              v661 = *(__int64 **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3D8);
                              v662 = 8;
                              v663 = (__int64 *)v652;
                              do
                              {
                                v664 = *v663++;
                                v665 = *v661++;
                                if ( v664 != v665 )
                                  goto LABEL_949;
                                v662 -= 8;
                              }
                              while ( v662 >= 8 );
                              if ( v662 )
                              {
                                while ( 1 )
                                {
                                  v666 = *(unsigned __int8 *)v663;
                                  v663 = (__int64 *)((char *)v663 + 1);
                                  v667 = *(unsigned __int8 *)v661;
                                  v661 = (__int64 *)((char *)v661 + 1);
                                  if ( v666 != v667 )
                                    break;
                                  if ( !--v662 )
                                    goto LABEL_956;
                                }
LABEL_949:
                                v668 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3E0);
                                v669 = v652 - v668;
                                v670 = 4;
                                while ( 1 )
                                {
                                  v671 = (unsigned __int8)v668[v669];
                                  v672 = (unsigned __int8)*v668++;
                                  if ( v671 != v672 )
                                    break;
                                  if ( !--v670 )
                                    goto LABEL_956;
                                }
                                v673 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3E8);
                                v674 = v652 - v673;
                                v675 = 6;
                                while ( 1 )
                                {
                                  v676 = (unsigned __int8)v673[v674];
                                  v677 = (unsigned __int8)*v673++;
                                  if ( v676 != v677 )
                                    break;
                                  if ( !--v675 )
                                    goto LABEL_956;
                                }
                              }
                              else
                              {
LABEL_956:
                                v653 = 1;
                              }
                            }
                            if ( *((int *)v652 + 9) < 0 )
                              v653 = 1;
                            *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v653;
                            if ( v653 && *(_DWORD *)v652 == 1414090313 && *((_DWORD *)v652 + 1) == 1195525195 )
                            {
                              if ( (*(_DWORD *)(v649 + 1680) & 0x10000000) != 0 )
                                v653 = 0;
                              *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v653;
                            }
                            v678 = *((_DWORD *)v652 + 2);
                            v679 = *((_DWORD *)v652 + 3);
                            if ( *((_DWORD *)v652 + 4) > v678 )
                              v678 = *((_DWORD *)v652 + 4);
                            v680 = v679 + v678;
                            *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v679;
                            *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v680;
                            if ( v641 == v638 )
                            {
                              v681 = 0;
                              v682 = 0;
                            }
                            else
                            {
                              v681 = *v641;
                              v682 = v641[1];
                            }
                            v683 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
                            v684 = v679;
                            if ( v683 == *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) )
                            {
LABEL_991:
                              v685 = v681 < v679;
                            }
                            else
                            {
                              v685 = v681 < v679;
                              if ( v681 > v679 )
                              {
                                if ( v682 <= v680 && !v653 )
                                {
                                  *v650 = v679;
                                  v650[1] = v681;
                                  v686 = (unsigned int *)(v1 + 68);
                                  v687 = 0;
                                  v688 = v681 - *v650;
                                  v689 = v1 + 106;
                                  v690 = (const char *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                  + 0x68)
                                                      + *v650);
                                  v684 = v681;
                                  v691 = &v690[v688];
                                  do
                                  {
                                    if ( (unsigned __int64)v690 < *v689 + (unsigned __int64)*v686
                                      && (unsigned __int64)v691 > *v689 )
                                    {
                                      goto LABEL_990;
                                    }
                                    ++v687;
                                    ++v686;
                                    ++v689;
                                  }
                                  while ( v687 < 4 );
                                  *(_DWORD *)(v649 + 1432) += v688;
                                  v692 = v690;
                                  v693 = *(_DWORD *)(v649 + 1412);
                                  for ( i5 = *(_QWORD *)(v649 + 1416); v692 < v691; v692 += 64 )
                                    _mm_prefetch(v692, 0);
                                  if ( v688 >= 8 )
                                  {
                                    v695 = (unsigned __int64)v688 >> 3;
                                    do
                                    {
                                      v688 -= 8;
                                      i5 = __ROL8__(*(_QWORD *)v690 ^ i5, v693);
                                      v690 += 8;
                                      --v695;
                                    }
                                    while ( v695 );
                                  }
                                  for ( ; v688; --v688 )
                                  {
                                    v696 = *(unsigned __int8 *)v690++;
                                    i5 = __ROL8__(v696 ^ i5, v693);
                                  }
                                  for ( i6 = i5; ; LODWORD(i5) = i6 ^ i5 )
                                  {
                                    i6 >>= 31;
                                    if ( !i6 )
                                      break;
                                  }
                                  v650[2] = i5 & 0x7FFFFFFF;
LABEL_990:
                                  v683 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
                                  v679 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                                  v680 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                                  v653 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                                }
                                goto LABEL_991;
                              }
                            }
                            v638 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
                            if ( v685 )
                            {
                              v699 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
                              goto LABEL_1022;
                            }
                            v698 = v682 <= v680;
                            v699 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
                            if ( v698 && v683 != v638 )
                            {
                              v700 = v699[1];
                              if ( v700 > v680 )
                                goto LABEL_1021;
                              v701 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
                              v702 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
                              v703 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
                              while ( 2 )
                              {
                                if ( v699 == v702 )
                                {
LABEL_1020:
                                  v650 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0);
                                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v699;
LABEL_1021:
                                  v638 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
                                  goto LABEL_1022;
                                }
                                if ( !v653 )
                                {
                                  v704 = *(unsigned int *)(v703 + 4);
                                  v705 = v1 + 106;
                                  v684 = *v699;
                                  v706 = (unsigned int *)(v1 + 68);
                                  v707 = *v699 - v704;
                                  v708 = (_QWORD *)(v701 + v704);
                                  v709 = v701 + v704 + v707;
                                  for ( i7 = 0; i7 < 4; ++i7 )
                                  {
                                    if ( (unsigned __int64)v708 < *v705 + *v706 && v709 > *v705 )
                                      goto LABEL_1015;
                                    ++v706;
                                    ++v705;
                                  }
                                  if ( v707 >= 4 )
                                  {
                                    *(_DWORD *)(v649 + 1432) += v707;
                                    v711 = (const char *)(v701 + v704);
                                    v712 = *(_DWORD *)(v649 + 1412);
                                    v713 = *(_QWORD *)(v649 + 1416);
                                    if ( (unsigned __int64)v708 < v709 )
                                    {
                                      do
                                      {
                                        _mm_prefetch(v711, 0);
                                        v711 += 64;
                                      }
                                      while ( (unsigned __int64)v711 < v709 );
                                    }
                                    if ( v707 >= 8 )
                                    {
                                      v714 = (unsigned __int64)v707 >> 3;
                                      do
                                      {
                                        v707 -= 8;
                                        v713 = __ROL8__(*v708++ ^ v713, v712);
                                        --v714;
                                      }
                                      while ( v714 );
                                    }
                                    for ( ; v707; --v707 )
                                    {
                                      v715 = *(unsigned __int8 *)v708;
                                      v708 = (_QWORD *)((char *)v708 + 1);
                                      v713 = __ROL8__(v715 ^ v713, v712);
                                    }
                                    for ( i8 = v713 >> 7; i8; i8 >>= 7 )
                                      LOBYTE(v713) = i8 ^ v713;
                                    v653 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                                    v680 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                                    v702 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
                                    *v651 = v713 & 0x7F;
                                    v703 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
LABEL_1017:
                                    v703 += 12LL;
                                    ++v651;
                                    v699 += 3;
                                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = v703;
                                    if ( v699 != v702 )
                                      v700 = v699[1];
                                    if ( v700 > v680 )
                                      goto LABEL_1020;
                                    continue;
                                  }
LABEL_1015:
                                  v703 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
                                  v702 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
                                  v680 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                                  v653 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                                }
                                break;
                              }
                              *v651 = 0x80;
                              goto LABEL_1017;
                            }
LABEL_1022:
                            if ( !v653 && v684 != v680 )
                            {
                              v650[3] = v684;
                              v717 = (unsigned int *)(v1 + 68);
                              v650[4] = v680;
                              v718 = 0;
                              v719 = v680 - v650[3];
                              v720 = v1 + 106;
                              v721 = (const char *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68)
                                                  + v650[3]);
                              v722 = &v721[v719];
                              do
                              {
                                if ( (unsigned __int64)v721 < *v720 + (unsigned __int64)*v717
                                  && (unsigned __int64)v722 > *v720 )
                                {
                                  goto LABEL_1040;
                                }
                                ++v718;
                                ++v717;
                                ++v720;
                              }
                              while ( v718 < 4 );
                              *(_DWORD *)(v649 + 1432) += v719;
                              v723 = v721;
                              v724 = *(_DWORD *)(v649 + 1412);
                              for ( i9 = *(_QWORD *)(v649 + 1416); v723 < v722; v723 += 64 )
                                _mm_prefetch(v723, 0);
                              if ( v719 >= 8 )
                              {
                                v726 = (unsigned __int64)v719 >> 3;
                                do
                                {
                                  v719 -= 8;
                                  i9 = __ROL8__(*(_QWORD *)v721 ^ i9, v724);
                                  v721 += 8;
                                  --v726;
                                }
                                while ( v726 );
                              }
                              for ( ; v719; --v719 )
                              {
                                v727 = *(unsigned __int8 *)v721++;
                                i9 = __ROL8__(v727 ^ i9, v724);
                              }
                              for ( i10 = i9; ; LODWORD(i9) = i10 ^ i9 )
                              {
                                i10 >>= 31;
                                if ( !i10 )
                                  break;
                              }
                              v650[5] = i9 & 0x7FFFFFFF;
                            }
LABEL_1040:
                            v641 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
                            if ( v641 != v638
                              && *v641 >= *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10)
                              && v641[1] <= *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) )
                            {
                              if ( v699 != v638 )
                              {
                                *v651++ = 0x80;
                                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v699 + 3;
                              }
                              v641 += 3;
                              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = v641;
                            }
                            v650 += 6;
                            v652 = (char *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) + 40LL);
                            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = v650;
                            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v652;
                            if ( v650 == (unsigned int *)*v1 )
                            {
                              v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                              v567 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                              goto LABEL_1048;
                            }
                            continue;
                          }
                        }
LABEL_668:
                        v407 = -1073741670;
LABEL_766:
                        v397 = *(_BYTE **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
LABEL_767:
                        v399 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                        goto LABEL_768;
                      }
                      if ( (*(_DWORD *)(v567 + 1680) & 0x200000) == 0 )
                      {
                        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1DC) = 324608;
                        KeBugCheckEx(
                          __ROR4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1DC), 170),
                          0xAuLL,
                          v598,
                          0LL,
                          0LL);
                      }
                      if ( !*(_DWORD *)(v567 + 1544) )
                      {
                        *(_QWORD *)(v567 + 1552) = v567 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v567 + 1560) = 0LL;
                        *(_QWORD *)(v567 + 1568) = 271LL;
                        *(_QWORD *)(v567 + 1576) = v598;
                        *(_DWORD *)(v567 + 1544) = 1;
                      }
                    }
                    v407 = -1073741701;
                    goto LABEL_767;
                  }
                  if ( v385 != 1 )
                  {
                    *(_DWORD *)(v85 + 1428) = 0;
LABEL_1092:
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v85;
                    goto LABEL_217;
                  }
                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = 0;
                  v386 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 720))(0LL);
                  if ( v386 )
                  {
                    v387 = 0;
                    do
                    {
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x298) = 0LL;
                      v388 = 1;
                      v389 = v97;
                      v390 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(v85 + 712))(v386, v1 + 83);
                      if ( v390 )
                      {
                        do
                        {
                          ++v388;
                          if ( !(*(__int64 (__fastcall **)(__int64, _QWORD *))(v85 + 472))(v390, v1 + 157) )
                          {
                            if ( (*(_DWORD *)(v85 + 1680) & 0x40000000) != 0 )
                            {
                              v391 = *(_QWORD **)(v85 + 1848);
                              v392 = 48;
                              v393 = 6LL;
                              do
                              {
                                v392 -= 8;
                                *v391 = *(_QWORD *)v389;
                                v389 += 8;
                                ++v391;
                                --v393;
                              }
                              while ( v393 );
                              for ( ; v392; --v392 )
                              {
                                v394 = *v389++;
                                *(_BYTE *)v391 = v394;
                                v391 = (_QWORD *)((char *)v391 + 1);
                              }
                              v389 = *(char **)(v85 + 1848);
                            }
                            *((_QWORD *)v389 + 3) = v390;
                            *((_QWORD *)v389 + 4) = v386;
                            v395 = *(_QWORD *)(v85 + 1176);
                            *(_QWORD *)v395 = v389;
                            *(_DWORD *)(v395 + 16) = 48;
                            v396 = *(_QWORD *)(v85 + 1176);
                            *(_QWORD *)(v396 + 8) = v390;
                            *(_DWORD *)(v396 + 20) = 4096;
                            if ( !*(_DWORD *)(v85 + 1544) )
                            {
                              *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v85 + 1560) = v389 - 0x4C48B4211BBACBEBLL;
                              *(_QWORD *)(v85 + 1568) = *(int *)v389;
                              *(_QWORD *)(v85 + 1576) = 6LL;
                              *(_DWORD *)(v85 + 1544) = 1;
                            }
                          }
                          v390 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(v85 + 712))(v386, v1 + 83);
                        }
                        while ( v390 );
                        v97 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                        v387 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                      }
                      v387 += v388;
                      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v387;
                      v386 = (*(__int64 (__fastcall **)(__int64))(v85 + 720))(v386);
                    }
                    while ( v386 );
                  }
                  LODWORD(i16) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                }
                else
                {
                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = 0;
                  v729 = v97;
                  v730 = 0;
                  v731 = 0LL;
                  do
                  {
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x138) = 0;
                    while ( 1 )
                    {
                      do
                      {
                        if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD *, _QWORD *))(v85 + 688))(
                                (unsigned int)i16,
                                v1 + 39,
                                v1 + 66) )
                          goto LABEL_1063;
                        v732 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 656))(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                         + 0x210));
                        v733 = v732;
                      }
                      while ( !v732 );
                      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v730 + 1;
                      v734 = (*(__int64 (__fastcall **)(__int64))(v85 + 664))(v732);
                      if ( !(*(__int64 (__fastcall **)(__int64, _QWORD *))(v85 + 472))(v734, v1 + 159) )
                        break;
                      (*(void (__fastcall **)(_QWORD, __int64))(v85 + 672))(
                        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x210),
                        v733);
                      v730 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                    }
                    if ( (*(_DWORD *)(v85 + 1680) & 0x40000000) != 0 )
                    {
                      v735 = *(_QWORD **)(v85 + 1848);
                      v736 = 48;
                      v737 = 6LL;
                      do
                      {
                        v736 -= 8;
                        *v735 = *(_QWORD *)v729;
                        v729 += 8;
                        ++v735;
                        --v737;
                      }
                      while ( v737 );
                      for ( ; v736; --v736 )
                      {
                        v738 = *v729++;
                        *(_BYTE *)v735 = v738;
                        v735 = (_QWORD *)((char *)v735 + 1);
                      }
                      v729 = *(char **)(v85 + 1848);
                    }
                    *((_QWORD *)v729 + 3) = v734;
                    v739 = *(_QWORD *)(v85 + 1176);
                    *(_QWORD *)v739 = v729;
                    *(_DWORD *)(v739 + 16) = 48;
                    v740 = *(_QWORD *)(v85 + 1176);
                    *(_QWORD *)(v740 + 8) = v734;
                    *(_DWORD *)(v740 + 20) = 4096;
                    if ( !*(_DWORD *)(v85 + 1544) )
                    {
                      *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v85 + 1560) = v729 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v85 + 1568) = *(int *)v729;
                      *(_QWORD *)(v85 + 1576) = v731;
                      *(_DWORD *)(v85 + 1544) = 1;
                    }
LABEL_1063:
                    v730 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                    LODWORD(i16) = i16 + 1;
                    ++v731;
                  }
                  while ( (unsigned int)i16 < 3 );
                  LODWORD(i16) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                }
              }
              else
              {
                v741 = v97;
                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x288) = 0LL;
                v742 = KeGetCurrentIrql();
                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v742;
                __writecr8(0xCuLL);
                v743 = (*(__int64 (__fastcall **)(_QWORD *))(v85 + 704))(v1 + 81);
                if ( v743 )
                {
                  do
                  {
                    LODWORD(i16) = i16 + 1;
                    if ( !(*(__int64 (__fastcall **)(__int64, _QWORD *))(v85 + 472))(v743, v1 + 161) )
                    {
                      if ( (*(_DWORD *)(v85 + 1680) & 0x40000000) != 0 )
                      {
                        v744 = *(_QWORD **)(v85 + 1848);
                        v745 = 48;
                        v746 = 6LL;
                        do
                        {
                          v745 -= 8;
                          *v744 = *(_QWORD *)v741;
                          v741 += 8;
                          ++v744;
                          --v746;
                        }
                        while ( v746 );
                        for ( ; v745; --v745 )
                        {
                          v747 = *v741++;
                          *(_BYTE *)v744 = v747;
                          v744 = (_QWORD *)((char *)v744 + 1);
                        }
                        v741 = *(char **)(v85 + 1848);
                      }
                      *((_QWORD *)v741 + 3) = v743;
                      v748 = *(_QWORD *)(v85 + 1176);
                      *(_QWORD *)v748 = v741;
                      *(_DWORD *)(v748 + 16) = 48;
                      v749 = *(_QWORD *)(v85 + 1176);
                      *(_QWORD *)(v749 + 8) = v743;
                      *(_DWORD *)(v749 + 20) = 4096;
                      if ( !*(_DWORD *)(v85 + 1544) )
                      {
                        *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v85 + 1560) = v741 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v85 + 1568) = *(int *)v741;
                        *(_QWORD *)(v85 + 1576) = 4LL;
                        *(_DWORD *)(v85 + 1544) = 1;
                      }
                    }
                    v743 = (*(__int64 (__fastcall **)(_QWORD *))(v85 + 704))(v1 + 81);
                  }
                  while ( v743 );
                  v742 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                }
                __writecr8((unsigned __int8)v742);
              }
            }
            else
            {
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2B0) = 0LL;
              v750 = v97;
              for ( i11 = (*(__int64 (__fastcall **)(_QWORD *))(v85 + 696))(v1 + 86);
                    i11;
                    i11 = (*(__int64 (__fastcall **)(_QWORD *))(v85 + 696))(v1 + 86) )
              {
                LODWORD(i16) = i16 + 1;
                if ( !(*(__int64 (__fastcall **)(__int64, _QWORD *))(v85 + 472))(i11, v1 + 163) )
                {
                  if ( (*(_DWORD *)(v85 + 1680) & 0x40000000) != 0 )
                  {
                    v752 = *(_QWORD **)(v85 + 1848);
                    v753 = 48;
                    v754 = 6LL;
                    do
                    {
                      v753 -= 8;
                      *v752 = *(_QWORD *)v750;
                      v750 += 8;
                      ++v752;
                      --v754;
                    }
                    while ( v754 );
                    for ( ; v753; --v753 )
                    {
                      v755 = *v750++;
                      *(_BYTE *)v752 = v755;
                      v752 = (_QWORD *)((char *)v752 + 1);
                    }
                    v750 = *(char **)(v85 + 1848);
                  }
                  *((_QWORD *)v750 + 3) = i11;
                  v756 = *(_QWORD *)(v85 + 1176);
                  *(_QWORD *)v756 = v750;
                  *(_DWORD *)(v756 + 16) = 48;
                  v757 = *(_QWORD *)(v85 + 1176);
                  *(_QWORD *)(v757 + 8) = i11;
                  *(_DWORD *)(v757 + 20) = 4096;
                  if ( !*(_DWORD *)(v85 + 1544) )
                  {
                    *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v85 + 1560) = v750 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v85 + 1568) = *(int *)v750;
                    *(_QWORD *)(v85 + 1576) = 3LL;
                    *(_DWORD *)(v85 + 1544) = 1;
                  }
                }
              }
            }
LABEL_1089:
            *(_DWORD *)(v85 + 1432) += (_DWORD)i16 << 15;
            i16 = 0LL;
            ++*(_DWORD *)(v85 + 1428);
            if ( *(_DWORD *)(v85 + 1432) >= *(_DWORD *)(v85 + 1436) )
              goto LABEL_1092;
            v97 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
          }
        case 25:
          v338 = *(unsigned int **)(v85 + 1080);
          v339 = *(_QWORD ***)(v85 + 1088);
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = 0;
          *v1 = v338 + 4;
          v340 = (*(__int64 (**)(void))(v85 + 816))();
          CurrentThread = KeGetCurrentThread();
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v340;
          (*(void (__fastcall **)(struct _KTHREAD *))(v85 + 352))(CurrentThread);
          (*(void (__fastcall **)(_QWORD, __int64))(v85 + 232))(*(_QWORD *)(v85 + 1096), 1LL);
          v342 = *v338;
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = 0;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = &v338[6 * v342 + 4];
          if ( *((_BYTE *)v338 + 12) )
          {
            v343 = *v339;
            for ( LODWORD(v342) = 0; v343 != v339; LODWORD(v342) = v342 + 1 )
              v343 = (_QWORD *)*v343;
          }
          v344 = *(unsigned int *)(v85 + 1408);
          v345 = __rdtsc();
          v346 = __ROR8__(v345, 3);
          v347 = (v346 ^ v345) * (unsigned __int128)0x7010008004002001uLL;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x600) = *((_QWORD *)&v347 + 1);
          v348 = (WORD4(v347) ^ (unsigned __int16)(8193 * (v346 ^ v345))) & 0x7FF;
          v349 = __rdtsc();
          v350 = (__ROR8__(v349, 3) ^ v349) * (unsigned __int128)0x7010008004002001uLL;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x490) = *((_QWORD *)&v350 + 1);
          v351 = (*((_QWORD *)&v350 + 1) ^ (unsigned __int64)v350) % (unsigned int)(v348 + 1);
          v352 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v85 + 240))(
                   512LL,
                   (unsigned int)(v348 + 8 * v342),
                   v344);
          v354 = v352;
          if ( v352 )
          {
            v355 = v351;
            v356 = (unsigned __int64 *)v352;
            if ( (unsigned int)v351 >= 8 )
            {
              v357 = (unsigned __int64)(unsigned int)v351 >> 3;
              do
              {
                v355 -= 8;
                v358 = __rdtsc();
                v359 = (__ROR8__(v358, 3) ^ v358) * (unsigned __int128)0x7010008004002001uLL;
                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x498) = *((_QWORD *)&v359 + 1);
                v353 = v359 ^ *((_QWORD *)&v359 + 1);
                *v356++ = v353;
                --v357;
              }
              while ( v357 );
              v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
            }
            if ( v355 )
            {
              v360 = __rdtsc();
              v361 = __ROR8__(v360, 3) ^ v360;
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x4A8) = (v361
                                                                                      * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v353 = (0x7010008004002001LL * v361) ^ ((v361 * (unsigned __int128)0x7010008004002001uLL) >> 64);
              do
              {
                *(_BYTE *)v356 = v353;
                v356 = (unsigned __int64 *)((char *)v356 + 1);
                v353 >>= 8;
                --v355;
              }
              while ( v355 );
            }
            v362 = v348 - v351;
            v363 = (unsigned __int64 *)(v354 + (unsigned int)v351 + (unsigned __int64)(unsigned int)(8 * v342));
            if ( v362 >= 8 )
            {
              v364 = (unsigned __int64)v362 >> 3;
              do
              {
                v362 -= 8;
                v365 = __rdtsc();
                v366 = (__ROR8__(v365, 3) ^ v365) * (unsigned __int128)0x7010008004002001uLL;
                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x4B8) = *((_QWORD *)&v366 + 1);
                v353 = v366 ^ *((_QWORD *)&v366 + 1);
                *v363++ = v353;
                --v364;
              }
              while ( v364 );
            }
            v367 = 0LL;
            if ( v362 )
            {
              v368 = __rdtsc();
              v369 = (__ROR8__(v368, 3) ^ v368) * (unsigned __int128)0x7010008004002001uLL;
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x4C8) = *((_QWORD *)&v369 + 1);
              v353 = v369 ^ *((_QWORD *)&v369 + 1);
              do
              {
                *(_BYTE *)v363 = v353;
                v363 = (unsigned __int64 *)((char *)v363 + 1);
                v353 >>= 8;
                --v362;
              }
              while ( v362 );
            }
            v370 = (unsigned int)v351 + v354;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x200) = v354;
            if ( v370 )
            {
              v371 = *v339;
              if ( *v339 != v339 )
              {
                v372 = 0;
                do
                {
                  v373 = v371[6];
                  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned __int64, unsigned __int64 *, __int64))(v85 + 624))(
                          v373,
                          v353,
                          v363,
                          v367)
                    && v372 < (unsigned int)v342 )
                  {
                    v374 = v372++;
                    *(_QWORD *)(v370 + 8 * v374) = v373;
                  }
                  v371 = (_QWORD *)*v371;
                  ++*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                }
                while ( v371 != v339 );
                *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = v372;
              }
              v375 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0);
              (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64 *, __int64))(v85 + 848))(v370, v375, v363, v367);
              v376 = (unsigned int *)*v1;
              v377 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
              v378 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
              do
              {
                v379 = *((_QWORD *)v376 + 1);
                if ( !(*(unsigned int (__fastcall **)(__int64))(v85 + 624))(v379)
                  && !(unsigned int)__110(v370, v375, v379)
                  && !*(_DWORD *)(v85 + 1544) )
                {
                  *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1560) = (char *)v378 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1568) = *v378;
                  *(_QWORD *)(v85 + 1576) = v379;
                  *(_DWORD *)(v85 + 1544) = 1;
                }
                v376 += 6;
              }
              while ( (unsigned __int64)v376 < v377 );
              i16 = 0LL;
              goto LABEL_571;
            }
          }
          else
          {
            ++*(_DWORD *)(v85 + 1808);
          }
          i16 = 0LL;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x200) = 0LL;
LABEL_571:
          (*(void (__fastcall **)(_QWORD))(v85 + 272))(*(_QWORD *)(v85 + 1096));
          (*(void (**)(void))(v85 + 360))();
          (*(void (__fastcall **)(_QWORD))(v85 + 824))(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                 + 0x18));
          if ( *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x200) )
          {
            *(_DWORD *)(v85 + 1432) += *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) << 9;
            (*(void (__fastcall **)(_QWORD))(v85 + 248))(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                   + 0x200));
          }
          goto LABEL_217;
        case 26:
          if ( (*(_DWORD *)(v85 + 1440) & 1) != 0 )
            goto LABEL_217;
          v330 = *(unsigned int **)(v85 + 1200);
          v320 = 0;
          v331 = *(_QWORD *)(v85 + 1112);
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = 0;
          v332 = *(_QWORD **)(v85 + 1208);
          *v1 = v330;
          (*(void (**)(void))(v85 + 368))();
          (*(void (__fastcall **)(__int64, _QWORD))(v85 + 288))(v331, 0LL);
          v333 = *(_QWORD ***)(v85 + 1072);
          v334 = *v333;
          if ( *v333 != v333 )
          {
            do
            {
              *((_BYTE *)v334 - 306) = 1;
              ++v320;
              v334 = (_QWORD *)*v334;
            }
            while ( v334 != v333 );
            *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v320;
          }
          (*(void (__fastcall **)(unsigned int *, _QWORD))(v85 + 304))(v330, 0LL);
          v335 = *(_QWORD ***)(v85 + 1192);
          v336 = *v335;
          if ( *v335 != v335 )
          {
            do
            {
              if ( v336 - 3 != v332 )
              {
                v337 = *(v336 - 1);
                if ( !*(_BYTE *)(v337 + 446) && (*(_DWORD *)(v337 + 772) & 0x4000000) != 0 && !*(_DWORD *)(v85 + 1544) )
                {
                  *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1568) = *(int *)v97;
                  *(_QWORD *)(v85 + 1576) = v337;
                  *(_DWORD *)(v85 + 1544) = 1;
                }
                *(_BYTE *)(v337 + 446) = 0;
              }
              v336 = (_QWORD *)*v336;
            }
            while ( v336 != v335 );
            v320 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
            v330 = (unsigned int *)*v1;
          }
          v329 = v330;
          goto LABEL_522;
        case 27:
          if ( (*(_DWORD *)(v85 + 1440) & 1) == 0 )
            goto LABEL_217;
          v319 = *(_QWORD **)(v85 + 1208);
          v320 = 0;
          v321 = *(unsigned int **)(v85 + 1200);
          v322 = *(_QWORD *)(v85 + 1112);
          *v1 = v321;
          (*(void (**)(void))(v85 + 368))();
          (*(void (__fastcall **)(__int64, _QWORD))(v85 + 288))(v322, 0LL);
          (*(void (__fastcall **)(unsigned int *, _QWORD))(v85 + 304))(v321, 0LL);
          v323 = *(_QWORD ***)(v85 + 1192);
          for ( i12 = *v323; i12 != v323; i12 = (_QWORD *)*i12 )
          {
            if ( i12 - 3 != v319 )
              *(_BYTE *)(*(i12 - 1) + 446LL) = 1;
          }
          v325 = *(_QWORD ***)(v85 + 1072);
          v326 = *v325;
          if ( *v325 != v325 )
          {
            do
            {
              v327 = v326 - 94;
              if ( !*((_BYTE *)v326 - 306) )
              {
                v328 = (_QWORD *)v327[131];
                if ( v328 )
                {
                  if ( v328 != v319 && !*(_DWORD *)(v85 + 1544) )
                  {
                    *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v85 + 1568) = *(int *)v97;
                    *(_QWORD *)(v85 + 1576) = v327;
                    *(_DWORD *)(v85 + 1544) = 1;
                  }
                }
              }
              *((_BYTE *)v327 + 446) = 0;
              ++v320;
              v326 = (_QWORD *)*v326;
            }
            while ( v326 != v325 );
            v321 = (unsigned int *)*v1;
          }
          v329 = v321;
LABEL_522:
          (*(void (__fastcall **)(unsigned int *, _QWORD))(v85 + 312))(v329, 0LL);
          (*(void (__fastcall **)(_QWORD, _QWORD))(v85 + 296))(*(_QWORD *)(v85 + 1112), 0LL);
          (*(void (**)(void))(v85 + 376))();
          *(_DWORD *)(v85 + 1432) += v320 << 8;
          goto LABEL_377;
        case 28:
          v256 = *((unsigned int *)v97 + 4);
          if ( (_DWORD)v256 )
          {
            v296 = (_QWORD *)*((_QWORD *)v97 + 1);
            *(_DWORD *)(v85 + 1432) += v256;
            v297 = (const char *)v296;
            v298 = *(_DWORD *)(v85 + 1412);
            v299 = *(_QWORD *)(v85 + 1416);
            if ( v296 < (_QWORD *)((char *)v296 + v256) )
            {
              do
              {
                _mm_prefetch(v297, 0);
                v297 += 64;
              }
              while ( v297 < (const char *)v296 + v256 );
            }
            if ( (unsigned int)v256 >= 8 )
            {
              v300 = v256 >> 3;
              do
              {
                v299 = __ROL8__(*v296++ ^ v299, v298);
                LODWORD(v256) = v256 - 8;
                --v300;
              }
              while ( v300 );
            }
            for ( ; (_DWORD)v256; LODWORD(v256) = v256 - 1 )
            {
              v301 = *(unsigned __int8 *)v296;
              v296 = (_QWORD *)((char *)v296 + 1);
              v299 = __ROL8__(v301 ^ v299, v298);
            }
            for ( i13 = v299; ; LODWORD(v299) = i13 ^ v299 )
            {
              i13 >>= 31;
              if ( !i13 )
                break;
            }
            v303 = *((unsigned int *)v97 + 5);
            v304 = v299 & 0x7FFFFFFF;
            if ( v304 != (_DWORD)v303 )
            {
              if ( !*(_DWORD *)(v85 + 1544) )
                *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = v303 ^ v304;
              v305 = *((_QWORD *)v97 + 1);
              if ( !*(_DWORD *)(v85 + 1544) )
              {
                *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v85 + 1568) = *(int *)v97;
                *(_QWORD *)(v85 + 1576) = v305;
                *(_DWORD *)(v85 + 1544) = 1;
              }
            }
            v306 = 0;
            v307 = *((_QWORD *)v97 + 1) - 112LL;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x118) = v307;
            v308 = *(unsigned int **)(v307 + 80);
            if ( v308 )
              v306 = *v308;
            *(_DWORD *)(v85 + 1432) += v306;
            v309 = v308;
            v310 = *(_DWORD *)(v85 + 1412);
            v311 = (const char *)v308;
            v312 = *(_QWORD *)(v85 + 1416);
            v313 = (unsigned int *)((char *)v308 + v306);
            if ( v308 < v313 )
            {
              do
              {
                _mm_prefetch(v311, 0);
                v311 += 64;
              }
              while ( v311 < (const char *)v313 );
            }
            if ( v306 >= 8 )
            {
              v314 = (unsigned __int64)v306 >> 3;
              do
              {
                v312 = __ROL8__(*(_QWORD *)v309 ^ v312, v310);
                v309 += 2;
                v306 -= 8;
                --v314;
              }
              while ( v314 );
            }
            for ( ; v306; --v306 )
            {
              v315 = *(unsigned __int8 *)v309;
              v309 = (unsigned int *)((char *)v309 + 1);
              v312 = __ROL8__(v315 ^ v312, v310);
            }
            for ( i14 = v312; ; LODWORD(v312) = i14 ^ v312 )
            {
              i14 >>= 31;
              if ( !i14 )
                break;
            }
            v317 = *((unsigned int *)v97 + 11);
            v318 = v312 & 0x7FFFFFFF;
            if ( v318 == (_DWORD)v317 )
              goto LABEL_217;
            if ( *(_DWORD *)(v85 + 1544) )
              goto LABEL_217;
            *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = v317 ^ v318;
            if ( *(_DWORD *)(v85 + 1544) )
              goto LABEL_217;
            *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v85 + 1568) = *(int *)v97;
            *(_QWORD *)(v85 + 1576) = v308;
            goto LABEL_396;
          }
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x340) = v97 + 48;
          v257 = *((_WORD *)v97 + 20);
          *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x338) = v257;
          *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x33A) = v257;
          v1918 = v1 + 35;
          v258 = *(_QWORD *)(v85 + 1064);
          LOBYTE(v1917) = 0;
          if ( (*(int (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, _QWORD *))(v85 + 440))(
                 v1 + 103,
                 0LL,
                 0LL,
                 0LL,
                 v258,
                 v1917,
                 0LL,
                 v1 + 35) < 0 )
            goto LABEL_217;
          if ( (*(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x118) + 16LL) & 0x10) == 0 )
          {
            v121 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x118);
            goto LABEL_175;
          }
          if ( (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD *))(v85 + 464))(
                 *(_QWORD *)(v85 + 440),
                 v1 + 77,
                 v1 + 110)
            && (v259 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 456))(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                 + 0x268))) != 0 )
          {
            v260 = *(_DWORD *)(v259 + 80);
            *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB4) = v260;
          }
          else
          {
            v260 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB4);
          }
          if ( (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD *))(v85 + 464))(
                 *((_QWORD *)v97 + 3),
                 v1 + 63,
                 v1 + 97)
            && (v261 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 456))(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                 + 0x1F8))) != 0 )
          {
            v262 = *(_DWORD *)(v261 + 80);
            *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74) = v262;
          }
          else
          {
            v262 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74);
          }
          if ( (*(_DWORD *)(v85 + 1680) & 0x40000000) == 0 )
          {
            *((_QWORD *)v97 + 1) = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x118) + 112LL;
            *((_DWORD *)v97 + 4) = 224;
          }
          v263 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x268);
          v264 = 0;
          v265 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F8);
          v266 = v260;
          while ( 1 )
          {
            v267 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x118) + 8LL * v264 + 112);
            if ( (!v260 || v267 < v263 || v267 > v260 + v263 - 1) && (!v262 || v267 < v265 || v267 > v262 + v265 - 1) )
              break;
            if ( ++v264 >= 0x1Cu )
            {
              if ( (*(_DWORD *)(v85 + 1680) & 0x40000000) != 0 )
              {
                (*(void (**)(void))(v85 + 432))();
LABEL_216:
                i16 = 0LL;
                goto LABEL_217;
              }
              v268 = (_QWORD *)*((_QWORD *)v97 + 1);
              v269 = *((unsigned int *)v97 + 4);
              v270 = (const char *)v268;
              *(_DWORD *)(v85 + 1432) += v269;
              v271 = *(_DWORD *)(v85 + 1412);
              v272 = *(_QWORD *)(v85 + 1416);
              if ( v268 < (_QWORD *)((char *)v268 + v269) )
              {
                do
                {
                  _mm_prefetch(v270, 0);
                  v270 += 64;
                }
                while ( v270 < (const char *)v268 + v269 );
              }
              if ( (unsigned int)v269 >= 8 )
              {
                v273 = v269 >> 3;
                do
                {
                  v272 = __ROL8__(*v268++ ^ v272, v271);
                  LODWORD(v269) = v269 - 8;
                  --v273;
                }
                while ( v273 );
              }
              for ( ; (_DWORD)v269; LODWORD(v269) = v269 - 1 )
              {
                v274 = *(unsigned __int8 *)v268;
                v268 = (_QWORD *)((char *)v268 + 1);
                v272 = __ROL8__(v274 ^ v272, v271);
              }
              for ( i15 = v272; ; LODWORD(v272) = i15 ^ v272 )
              {
                i15 >>= 31;
                if ( !i15 )
                  break;
              }
              v276 = 0;
              *((_DWORD *)v97 + 5) = v272 & 0x7FFFFFFF;
              v277 = *(const char **)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x118) + 80LL);
              if ( !v277 || (v276 = *(_DWORD *)v277, v278 = 0, (v279 = (unsigned int)(*(_DWORD *)v277 - 8) >> 3) == 0) )
              {
LABEL_455:
                *(_DWORD *)(v85 + 1432) += v276;
                v283 = v277;
                v284 = *(_DWORD *)(v85 + 1412);
                v285 = *(_QWORD *)(v85 + 1416);
                v286 = &v277[v276];
                if ( v277 < v286 )
                {
                  do
                  {
                    _mm_prefetch(v283, 0);
                    v283 += 64;
                  }
                  while ( v283 < v286 );
                }
                if ( v276 >= 8 )
                {
                  v287 = (unsigned __int64)v276 >> 3;
                  do
                  {
                    v285 = __ROL8__(*(_QWORD *)v277 ^ v285, v284);
                    v277 += 8;
                    v276 -= 8;
                    --v287;
                  }
                  while ( v287 );
                }
                for ( i16 = 0LL; v276; --v276 )
                {
                  v288 = *(unsigned __int8 *)v277++;
                  v285 = __ROL8__(v288 ^ v285, v284);
                }
                for ( i17 = v285; ; LODWORD(v285) = i17 ^ v285 )
                {
                  i17 >>= 31;
                  if ( !i17 )
                    break;
                }
                *((_DWORD *)v97 + 11) = v285 & 0x7FFFFFFF;
                goto LABEL_217;
              }
              v280 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x268);
              v281 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F8);
              while ( 1 )
              {
                v282 = *(_QWORD *)&v277[8 * v278 + 8];
                if ( v282
                  && (!v266 || v282 < v280 || v282 > v266 + v280 - 1)
                  && (!v262 || v282 < v281 || v282 > v262 + v281 - 1) )
                {
                  break;
                }
                if ( ++v278 >= v279 )
                  goto LABEL_455;
              }
              *((_QWORD *)v97 + 4) = v282;
              i16 = 0LL;
              v290 = *(_QWORD *)(v85 + 1176);
              *(_QWORD *)v290 = v97;
              *(_DWORD *)(v290 + 16) = 48;
              if ( *(_DWORD *)(v85 + 1544) )
                goto LABEL_217;
              *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1568) = *(int *)v97;
              *(_QWORD *)(v85 + 1576) = v277;
LABEL_396:
              *(_DWORD *)(v85 + 1544) = 1;
              goto LABEL_217;
            }
          }
          if ( (*(_DWORD *)(v85 + 1680) & 0x40000000) != 0 )
          {
            v291 = *(_QWORD **)(v85 + 1848);
            v292 = 48;
            v293 = 6LL;
            do
            {
              v292 -= 8;
              *v291 = *(_QWORD *)v97;
              v97 += 8;
              ++v291;
              --v293;
            }
            while ( v293 );
            for ( i16 = 0LL; v292; --v292 )
            {
              v294 = *v97++;
              *(_BYTE *)v291 = v294;
              v291 = (_QWORD *)((char *)v291 + 1);
            }
            v97 = *(char **)(v85 + 1848);
          }
          else
          {
            i16 = 0LL;
          }
          *((_QWORD *)v97 + 4) = v267;
          v295 = *(_QWORD *)(v85 + 1176);
          *(_QWORD *)v295 = v97;
          *(_DWORD *)(v295 + 16) = 48;
          goto LABEL_393;
      }
LABEL_1137:
      v786 = v106 - 2;
      if ( v786 )
      {
        v787 = v786 - 1;
        if ( v787 )
        {
          if ( v787 != 20 )
          {
            if ( *(_DWORD *)(v85 + 1544) )
              goto LABEL_217;
            *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v85 + 1568) = 257LL;
LABEL_1142:
            *(_QWORD *)(v85 + 1576) = 0LL;
            goto LABEL_396;
          }
          (*(void (__fastcall **)(_QWORD *, _QWORD))(v85 + 408))(v1 + 176, *((unsigned int *)v97 + 10));
          (*(void (__fastcall **)(_QWORD *, _QWORD))(v85 + 416))(v1 + 176, 0LL);
          v789 = *(_QWORD *)(v85 + 1800);
          if ( v789 )
          {
            v790 = *(_DWORD *)(v789 + 800);
          }
          else
          {
            v788 = 2098LL;
            v791 = __readmsr(0x832u);
            v790 = v791;
          }
          v792 = *(_QWORD *)(v85 + 1800);
          if ( v792 )
          {
            v793 = *(_DWORD *)(v792 + 832);
          }
          else
          {
            v788 = 2100LL;
            v794 = __readmsr(0x834u);
            v793 = v794;
          }
          (*(void (__fastcall **)(__int64))(v85 + 400))(v788);
          v795 = *((unsigned int *)v97 + 6);
          if ( (v790 & *((_DWORD *)v97 + 7)) != (_DWORD)v795
            || (v790 & 0x10000) == 0 && (_BYTE)v790 != 0xD1 && (unsigned __int8)(v790 + 3) > 1u )
          {
            v796 = v795 | ((unsigned __int64)*((unsigned int *)v97 + 10) << 48) | 0x32000000000LL;
            if ( !*(_DWORD *)(v85 + 1544) )
            {
              *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = v790 ^ (unsigned __int64)*((unsigned int *)v97 + 6);
              if ( !*(_DWORD *)(v85 + 1544) )
              {
                *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v85 + 1568) = *(int *)v97;
                *(_QWORD *)(v85 + 1576) = v796;
                *(_DWORD *)(v85 + 1544) = 1;
              }
            }
          }
          v797 = *((unsigned int *)v97 + 8);
          if ( (v793 & *((_DWORD *)v97 + 9)) == (_DWORD)v797
            && ((v793 & 0x10000) != 0 || (_BYTE)v793 == 0xD1 || (unsigned __int8)(v793 + 3) <= 1u)
            || (v798 = v797 | ((unsigned __int64)*((unsigned int *)v97 + 10) << 48) | 0x34000000000LL,
                *(_DWORD *)(v85 + 1544))
            || (*(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = v793 ^ (unsigned __int64)*((unsigned int *)v97 + 8),
                *(_DWORD *)(v85 + 1544)) )
          {
LABEL_1186:
            v93 = 0x8000LL;
            *(_DWORD *)(v85 + 1432) += 0x8000;
            goto LABEL_218;
          }
          *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
          v799 = v97 - 0x4C48B4211BBACBEBLL;
        }
        else
        {
          (*(void (__fastcall **)(_QWORD *, _QWORD))(v85 + 408))(v1 + 179, *((unsigned int *)v97 + 10));
          (*(void (__fastcall **)(_QWORD *, _QWORD))(v85 + 416))(v1 + 179, 0LL);
          KiGetGdtIdt(v1 + 79, v1 + 214);
          v800 = *(_QWORD **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x27A);
          v801 = *((unsigned int *)v97 + 4);
          v802 = (const char *)v800;
          *(_DWORD *)(v85 + 1432) += v801;
          v803 = *(unsigned int *)(v85 + 1412);
          v804 = *(_QWORD *)(v85 + 1416);
          v805 = (unsigned __int64)v800 + v801;
          if ( v800 < (_QWORD *)((char *)v800 + v801) )
          {
            do
            {
              _mm_prefetch(v802, 0);
              v802 += 64;
            }
            while ( (unsigned __int64)v802 < v805 );
          }
          if ( (unsigned int)v801 >= 8 )
          {
            v806 = v801 >> 3;
            do
            {
              v805 = (unsigned int)v803;
              v804 = __ROL8__(*v800++ ^ v804, v803);
              v801 = (unsigned int)(v801 - 8);
              --v806;
            }
            while ( v806 );
          }
          if ( (_DWORD)v801 )
          {
            do
            {
              v807 = *(unsigned __int8 *)v800;
              v805 = (unsigned int)v803;
              v800 = (_QWORD *)((char *)v800 + 1);
              v804 = __ROL8__(v807 ^ v804, v803);
              v128 = (_DWORD)v801 == 1;
              v801 = (unsigned int)(v801 - 1);
            }
            while ( !v128 );
          }
          for ( i18 = v804; ; LODWORD(v804) = i18 ^ v804 )
          {
            i18 >>= 31;
            if ( !i18 )
              break;
          }
          v809 = v804 & 0x7FFFFFFF;
          (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD *, __int64))(v85 + 400))(
            v805,
            v801,
            v800,
            v803);
          if ( v809 == *((_DWORD *)v97 + 5)
            && *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x278) == *((_WORD *)v97 + 22) )
          {
            goto LABEL_1186;
          }
          if ( (*(_DWORD *)(v85 + 1680) & 0x40000000) != 0 )
          {
            v810 = *(_QWORD **)(v85 + 1848);
            v811 = 48;
            v812 = 6LL;
            do
            {
              v811 -= 8;
              *v810 = *(_QWORD *)v97;
              v97 += 8;
              ++v810;
              --v812;
            }
            while ( v812 );
            for ( ; v811; --v811 )
            {
              v813 = *v97++;
              *(_BYTE *)v810 = v813;
              v810 = (_QWORD *)((char *)v810 + 1);
            }
            v97 = *(char **)(v85 + 1848);
          }
          *((_QWORD *)v97 + 3) = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x27A);
          *((_QWORD *)v97 + 4) = v809;
          if ( !*(_DWORD *)(v85 + 1544) )
            *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = v809 ^ (unsigned __int64)*((unsigned int *)v97 + 5);
          v798 = *((_QWORD *)v97 + 1);
          if ( *(_DWORD *)(v85 + 1544) )
            goto LABEL_1186;
          *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
          v799 = v97 - 0x4C48B4211BBACBEBLL;
        }
        *(_QWORD *)(v85 + 1560) = v799;
        *(_QWORD *)(v85 + 1568) = *(int *)v97;
        *(_QWORD *)(v85 + 1576) = v798;
        *(_DWORD *)(v85 + 1544) = 1;
        goto LABEL_1186;
      }
      v814 = *((unsigned int *)v97 + 10);
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = 0;
      (*(void (__fastcall **)(_QWORD *, __int64))(v85 + 408))(v1 + 194, v814);
      (*(void (__fastcall **)(_QWORD *, _QWORD))(v85 + 416))(v1 + 194, 0LL);
      KiGetGdtIdt(v1 + 212, v1 + 90);
      v815 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2D2);
      v816 = 0LL;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v815;
      v817 = 0;
      *v1 = 0LL;
      v818 = (unsigned __int16 *)(v815 + 4);
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = 0;
      do
      {
        v819 = 0LL;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x158) = *(_QWORD *)(v85 + 1520);
        v820 = 0LL;
        v821 = *(_QWORD *)(v85 + 1528);
        v822 = *(unsigned int *)(v85 + 1516);
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = 0LL;
        v823 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        v825 = *v818;
        v824 = *(_QWORD *)(v85 + 1256) + v816;
        *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = *(v818 - 2);
        *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x4A) = v818[1];
        LOWORD(v825) = ((unsigned __int16)v825 >> 13) & 3;
        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x4C) = *((_DWORD *)v818 + 1);
        v826 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
        *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v825;
        if ( v826 != v824 )
          goto LABEL_1198;
        if ( !(_WORD)v825 )
        {
          v820 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v85 + 984))(v817, v825, 0LL);
          if ( v820 )
          {
            v685 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) < 0x30u;
            v827 = *(_QWORD *)(v822 + v820);
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v827;
            if ( !v685 )
              goto LABEL_1199;
            v819 = v827;
            goto LABEL_1193;
          }
          v820 = -1LL;
LABEL_1198:
          v827 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
LABEL_1199:
          __writecr8(v823);
          i16 = 0LL;
          if ( v820
            || (v831 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x158), v826 >= v831)
            && v826 <= v821
            && (v832 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v85 + 480))(
                         *(_QWORD *)(v85 + 1536),
                         v831,
                         (unsigned int)(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) - v831))) != 0
            && (*(_DWORD *)(v832 + 36) & 0x2000000) == 0 )
          {
            if ( *(v818 - 1) == 16 && (*v818 & 0x1F00) == 0xE00 && (*v818 & 0x8000u) != 0 )
            {
              v833 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, _QWORD))(v85 + 552))(
                                       v826,
                                       v1 + 43,
                                       0LL);
              if ( v833 )
              {
                v834 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x158);
                if ( v834 + *v833 == v826 && v834 == *(_QWORD *)(v85 + 1520) )
                {
                  if ( !v820 )
                    goto LABEL_1211;
                  goto LABEL_1221;
                }
              }
              if ( v820 )
              {
LABEL_1221:
                if ( !*(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) )
                {
                  if ( v820 == -1
                    || (v844 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD))(v85 + 552))(
                                                 v827,
                                                 v1 + 43,
                                                 0LL)) != 0LL
                    && (v845 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x158),
                        v845 + *v844 == v827)
                    && v845 == *(_QWORD *)(v85 + 1520)
                    && (v846 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v85 + 480))(
                                 *(_QWORD *)(v85 + 1536),
                                 v845,
                                 (unsigned int)(v827 - v845))) != 0
                    && (*(_DWORD *)(v846 + 36) & 0x2000000) == 0 )
                  {
LABEL_1211:
                    v830 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0);
                    goto LABEL_1212;
                  }
                }
              }
            }
          }
          v819 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
          goto LABEL_1194;
        }
LABEL_1193:
        i16 = 0LL;
LABEL_1194:
        v828 = *(_QWORD *)(v85 + 1176);
        *(_QWORD *)v828 = v826;
        *(_DWORD *)(v828 + 16) = 128;
        if ( v819 )
        {
          v829 = *(_QWORD *)(v85 + 1176);
          *(_QWORD *)(v829 + 8) = v819;
          *(_DWORD *)(v829 + 20) = 128;
        }
        v830 = 1;
        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = 1;
LABEL_1212:
        v818 += 8;
        v817 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) + 1;
        v816 = *v1 + 8LL;
        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v817;
        *v1 = v816;
      }
      while ( v817 <= 0xFF );
      v835 = *(_QWORD **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
      v836 = 848;
      *(_DWORD *)(v85 + 1432) += 848;
      v837 = v835;
      v838 = *(_DWORD *)(v85 + 1412);
      v839 = (const char *)v835;
      v840 = *(_QWORD *)(v85 + 1416);
      if ( v835 < v835 + 106 )
      {
        do
        {
          _mm_prefetch(v839, 0);
          v839 += 64;
        }
        while ( v839 < (const char *)v835 + 848 );
      }
      v841 = 106LL;
      do
      {
        v840 = __ROL8__(*v837++ ^ v840, v838);
        v836 -= 8;
        --v841;
      }
      while ( v841 );
      for ( ; v836; --v836 )
      {
        v842 = *(unsigned __int8 *)v837;
        v837 = (_QWORD *)((char *)v837 + 1);
        v840 = __ROL8__(v842 ^ v840, v838);
      }
      for ( i19 = v840; ; LODWORD(v840) = i19 ^ v840 )
      {
        i19 >>= 31;
        if ( !i19 )
          break;
      }
      v847 = v835 + 450;
      v848 = v840 & 0x7FFFFFFF;
      *(_DWORD *)(v85 + 1432) += 16;
      v849 = *(_DWORD *)(v85 + 1412);
      v850 = (const char *)(v835 + 450);
      v851 = *(_QWORD *)(v85 + 1416);
      if ( v835 + 450 < v835 + 452 )
      {
        do
        {
          _mm_prefetch(v850, 0);
          v850 += 64;
        }
        while ( v850 < (const char *)v835 + 3616 );
      }
      LODWORD(v852) = 16;
      v853 = 2LL;
      do
      {
        v854 = v849;
        v851 = __ROL8__(*v847++ ^ v851, v849);
        v852 = (unsigned int)(v852 - 8);
        --v853;
      }
      while ( v853 );
      if ( (_DWORD)v852 )
      {
        do
        {
          v855 = *(unsigned __int8 *)v847;
          v854 = v849;
          v847 = (_QWORD *)((char *)v847 + 1);
          v851 = __ROL8__(v855 ^ v851, v849);
          v128 = (_DWORD)v852 == 1;
          v852 = (unsigned int)(v852 - 1);
        }
        while ( !v128 );
      }
      for ( i20 = v851; ; LODWORD(v851) = i20 ^ v851 )
      {
        i20 >>= 31;
        if ( !i20 )
          break;
      }
      v857 = v851 & 0x7FFFFFFF;
      (*(void (__fastcall **)(__int64, _QWORD *, __int64))(v85 + 400))(v854, v847, v852);
      v858 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
      if ( v848 != v858[5]
        || v857 != *((_QWORD *)v858 + 3)
        || *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2D0) != *((_WORD *)v858 + 22)
        || v830 )
      {
        if ( !v830 )
        {
          v859 = v857;
          if ( v857 == *((_QWORD *)v858 + 3) )
          {
            v859 = (unsigned int)v858[5];
            if ( !*(_DWORD *)(v85 + 1544) )
            {
              v860 = v848;
              goto LABEL_1249;
            }
          }
          else
          {
            v860 = (unsigned int)v858[6];
            if ( !*(_DWORD *)(v85 + 1544) )
LABEL_1249:
              *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = v859 ^ v860;
          }
        }
        v861 = *((_QWORD *)v858 + 1);
        if ( !*(_DWORD *)(v85 + 1544) )
        {
          *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v85 + 1560) = (char *)v858 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v85 + 1568) = *v858;
          *(_QWORD *)(v85 + 1576) = v861;
          *(_DWORD *)(v85 + 1544) = 1;
        }
      }
      *(_DWORD *)(v85 + 1432) += 0x10000;
LABEL_217:
      v93 = 0x8000LL;
LABEL_218:
      v150 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0);
      if ( *(_DWORD *)(v85 + 1428) )
        --v150;
      v90 = v150 + 1;
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) = v90;
      if ( !*(_DWORD *)(v85 + 1544) )
      {
        v91 = (_DWORD *)(v85 + 1436);
        v151 = *(_DWORD *)(v85 + 1436);
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v85 + 1436;
        if ( *(_DWORD *)(v85 + 1432) < v151 )
          continue;
      }
      goto LABEL_1510;
    }
    if ( v106 == 30 )
    {
      if ( (v97[42] & 1) != 0 && !*(_QWORD *)(v85 + 1672) )
        goto LABEL_236;
      v971 = *((_QWORD *)v97 + 1);
      v972 = *(unsigned int *)(v85 + 1428);
      v973 = *((unsigned int *)v97 + 9);
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v971;
      v974 = v971 + 12 * v972;
      v975 = (_DWORD *)(v974 + 12);
      v976 = v973 / 0xC;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v973 / 0xC;
      v977 = v973 / 0xC - 1;
      v978 = v971 + 12LL * (unsigned int)(v973 / 0xC);
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v977;
      v979 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
      *v1 = v978;
      v980 = v979 + 48 + ((v977 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
      v981 = (char *)(v979 + 48 + v972);
      v982 = *(unsigned __int16 *)(v979 + 40);
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v980;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v980 + 24 * v982;
      if ( (unsigned int)v972 < v977 )
      {
        v983 = *v1;
        v984 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
        do
        {
          if ( *v981 >= 0 )
          {
            v985 = (_QWORD *)(*((_QWORD *)v984 + 3) + *(unsigned int *)(v974 + 4));
            v986 = *v975 - *(_DWORD *)(v974 + 4);
            *(_DWORD *)(v85 + 1432) += v986;
            v987 = v985;
            v988 = *(_DWORD *)(v85 + 1412);
            v989 = (const char *)v985;
            v990 = *(_QWORD *)(v85 + 1416);
            v991 = (unsigned __int64)v985 + v986;
            if ( (unsigned __int64)v985 < v991 )
            {
              do
              {
                _mm_prefetch(v989, 0);
                v989 += 64;
              }
              while ( (unsigned __int64)v989 < v991 );
            }
            if ( v986 >= 8 )
            {
              v992 = (unsigned __int64)v986 >> 3;
              do
              {
                v990 = __ROL8__(*v987++ ^ v990, v988);
                v986 -= 8;
                --v992;
              }
              while ( v992 );
              v983 = *v1;
            }
            for ( ; v986; --v986 )
            {
              v993 = *(unsigned __int8 *)v987;
              v987 = (_QWORD *)((char *)v987 + 1);
              v990 = __ROL8__(v993 ^ v990, v988);
            }
            for ( i21 = v990 >> 7; i21; i21 >>= 7 )
              LOBYTE(v990) = i21 ^ v990;
            v995 = v990 & 0x7F;
            if ( (_DWORD)v995 != (*v981 & 0x7F) && !*(_DWORD *)(v85 + 1544) )
            {
              *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = *v981 & 0x7F ^ (unsigned __int64)v995;
              if ( !*(_DWORD *)(v85 + 1544) )
              {
                *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v85 + 1560) = (char *)v984 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v85 + 1568) = *v984;
                *(_QWORD *)(v85 + 1576) = v985;
                *(_DWORD *)(v85 + 1544) = 1;
              }
            }
            *(_DWORD *)(v85 + 1432) += 64;
            v91 = *(_DWORD **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
          }
          ++v981;
          v974 += 12LL;
          v975 += 3;
        }
        while ( (unsigned __int64)v975 < v983 && *(_DWORD *)(v85 + 1432) < *v91 );
        v980 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
        v976 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
        *(_DWORD *)(v85 + 1428) = ((int)v974 - *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28))
                                / 12;
        v977 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
      }
      v996 = *(_DWORD *)(v85 + 1428);
      if ( v996 < v977 )
        goto LABEL_216;
      if ( *(_DWORD *)(v85 + 1432) < *(_DWORD *)(v85 + 1436) )
      {
        v997 = v980 + 24LL * (v996 - (unsigned int)v976 + 1);
        *v1 = v997;
        while ( 1 )
        {
          v998 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
          v999 = (_DWORD *)(v997 + 8);
          v1000 = 2LL;
          do
          {
            if ( (*v999 & 0x80000000) == 0 )
            {
              v1001 = (_QWORD *)(*((_QWORD *)v998 + 3) + (unsigned int)*(v999 - 2));
              v1002 = *(v999 - 1) - *(v999 - 2);
              *(_DWORD *)(v85 + 1432) += v1002;
              v1003 = v1001;
              v1004 = *(_DWORD *)(v85 + 1412);
              v1005 = (const char *)v1001;
              v1006 = *(_QWORD *)(v85 + 1416);
              v1007 = (unsigned __int64)v1001 + v1002;
              if ( (unsigned __int64)v1001 < v1007 )
              {
                do
                {
                  _mm_prefetch(v1005, 0);
                  v1005 += 64;
                }
                while ( (unsigned __int64)v1005 < v1007 );
              }
              if ( v1002 >= 8 )
              {
                v1008 = (unsigned __int64)v1002 >> 3;
                do
                {
                  v1006 = __ROL8__(*v1003++ ^ v1006, v1004);
                  v1002 -= 8;
                  --v1008;
                }
                while ( v1008 );
                v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
              }
              if ( v1002 )
              {
                do
                {
                  v1009 = *(unsigned __int8 *)v1003;
                  v1003 = (_QWORD *)((char *)v1003 + 1);
                  v1006 = __ROL8__(v1009 ^ v1006, v1004);
                  --v1002;
                }
                while ( v1002 );
                v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
              }
              for ( i22 = v1006; ; LODWORD(v1006) = i22 ^ v1006 )
              {
                i22 >>= 31;
                if ( !i22 )
                  break;
              }
              v1011 = v1006 & 0x7FFFFFFF;
              if ( v1011 != (*v999 & 0x7FFFFFFF) && !*(_DWORD *)(v85 + 1544) )
              {
                *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = *v999 & 0x7FFFFFFF ^ (unsigned __int64)v1011;
                if ( !*(_DWORD *)(v85 + 1544) )
                {
                  *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1560) = (char *)v998 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1568) = *v998;
                  *(_QWORD *)(v85 + 1576) = v1001;
                  *(_DWORD *)(v85 + 1544) = 1;
                }
              }
            }
            v999 += 3;
            --v1000;
          }
          while ( v1000 );
          v1012 = (unsigned int *)*v1;
          ++*(_DWORD *)(v85 + 1428);
          v997 = (unsigned __int64)(v1012 + 6);
          *v1 = v997;
          if ( v997 == *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) )
            break;
          if ( *(_DWORD *)(v85 + 1432) >= *(_DWORD *)(v85 + 1436) )
            goto LABEL_377;
        }
        i16 = 0LL;
        goto LABEL_236;
      }
      goto LABEL_377;
    }
    if ( v106 != 31 )
    {
      switch ( v106 )
      {
        case ' ':
          sub_14014F9C8(v85, (int *)v97);
          goto LABEL_217;
        case '!':
          sub_14014F218(v85, (int *)v97);
          goto LABEL_217;
        case '#':
          if ( (*((_DWORD *)v97 + 10) & 1) != 0 && !*(_QWORD *)(v85 + 1672) )
            goto LABEL_217;
          v894 = (_QWORD *)*((_QWORD *)v97 + 1);
          v895 = *((unsigned int *)v97 + 4);
          v896 = (const char *)v894;
          *(_DWORD *)(v85 + 1432) += v895;
          v897 = *(_DWORD *)(v85 + 1412);
          v898 = *(_QWORD *)(v85 + 1416);
          if ( v894 < (_QWORD *)((char *)v894 + v895) )
          {
            do
            {
              _mm_prefetch(v896, 0);
              v896 += 64;
            }
            while ( v896 < (const char *)v894 + v895 );
          }
          if ( (unsigned int)v895 >= 8 )
          {
            v899 = v895 >> 3;
            do
            {
              v898 = __ROL8__(*v894++ ^ v898, v897);
              LODWORD(v895) = v895 - 8;
              --v899;
            }
            while ( v899 );
          }
          for ( ; (_DWORD)v895; LODWORD(v895) = v895 - 1 )
          {
            v900 = *(unsigned __int8 *)v894;
            v894 = (_QWORD *)((char *)v894 + 1);
            v898 = __ROL8__(v900 ^ v898, v897);
          }
          for ( i23 = v898; ; LODWORD(v898) = i23 ^ v898 )
          {
            i23 >>= 31;
            if ( !i23 )
              break;
          }
          v902 = *((unsigned int *)v97 + 5);
          v903 = v898 & 0x7FFFFFFF;
          if ( v903 != (_DWORD)v902 )
          {
            if ( !*(_DWORD *)(v85 + 1544) )
              *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = v902 ^ v903;
            v904 = *((_QWORD *)v97 + 1);
            if ( !*(_DWORD *)(v85 + 1544) )
            {
              *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1568) = *(int *)v97;
              *(_QWORD *)(v85 + 1576) = v904;
              *(_DWORD *)(v85 + 1544) = 1;
            }
          }
          v905 = *((_DWORD *)v97 + 10);
          if ( (v905 & 2) == 0 )
            goto LABEL_217;
          v906 = *((_QWORD *)v97 + 1);
          if ( (v905 & 4) != 0 )
          {
            v907 = *((_QWORD *)v97 + 3);
            v908 = **(_QWORD **)(v906 + 112);
            if ( v908 != v907 )
            {
              v909 = *(_QWORD *)(v85 + 1176);
              *(_QWORD *)v909 = v908;
              *(_DWORD *)(v909 + 16) = 256;
              if ( !*(_DWORD *)(v85 + 1544) )
                *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = v907 ^ v908;
              v910 = *(_QWORD *)(v906 + 112);
              if ( !*(_DWORD *)(v85 + 1544) )
              {
                *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v85 + 1568) = *(int *)v97;
                *(_QWORD *)(v85 + 1576) = v910;
                *(_DWORD *)(v85 + 1544) = 1;
              }
            }
          }
          if ( (*((_DWORD *)v97 + 10) & 8) == 0 )
            goto LABEL_217;
          v911 = *((_QWORD *)v97 + 4);
          v912 = **(_QWORD **)(v906 + 120);
          if ( v912 == v911 )
            goto LABEL_217;
          v913 = *(_QWORD *)(v85 + 1176);
          *(_QWORD *)v913 = v912;
          *(_DWORD *)(v913 + 16) = 256;
          if ( !*(_DWORD *)(v85 + 1544) )
            *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = v911 ^ v912;
          v254 = *(_QWORD *)(v906 + 120);
          if ( *(_DWORD *)(v85 + 1544) )
            goto LABEL_217;
          *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
          v255 = v97 - 0x4C48B4211BBACBEBLL;
          goto LABEL_395;
      }
      if ( v106 != 36 )
      {
        if ( v106 == 37 )
        {
          if ( (*(_DWORD *)(v85 + 1684) & 2) != 0
            || !(*(unsigned __int8 (**)(void))(v85 + 976))()
            || *(_DWORD *)(v85 + 1544) )
          {
            goto LABEL_217;
          }
          *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v85 + 1568) = *(int *)v97;
          goto LABEL_1142;
        }
        goto LABEL_1137;
      }
      v862 = (_QWORD *)*((_QWORD *)v97 + 1);
      v863 = *((unsigned int *)v97 + 4);
      v864 = (const char *)v862;
      *(_DWORD *)(v85 + 1432) += v863;
      v865 = *(_DWORD *)(v85 + 1412);
      v866 = *(_QWORD *)(v85 + 1416);
      if ( v862 < (_QWORD *)((char *)v862 + v863) )
      {
        do
        {
          _mm_prefetch(v864, 0);
          v864 += 64;
        }
        while ( v864 < (const char *)v862 + v863 );
      }
      if ( (unsigned int)v863 >= 8 )
      {
        v867 = v863 >> 3;
        do
        {
          v866 = __ROL8__(*v862++ ^ v866, v865);
          LODWORD(v863) = v863 - 8;
          --v867;
        }
        while ( v867 );
      }
      for ( ; (_DWORD)v863; LODWORD(v863) = v863 - 1 )
      {
        v868 = *(unsigned __int8 *)v862;
        v862 = (_QWORD *)((char *)v862 + 1);
        v866 = __ROL8__(v868 ^ v866, v865);
      }
      for ( i24 = v866; ; LODWORD(v866) = i24 ^ v866 )
      {
        i24 >>= 31;
        if ( !i24 )
          break;
      }
      v870 = *((unsigned int *)v97 + 5);
      v871 = v866 & 0x7FFFFFFF;
      if ( v871 != (_DWORD)v870 )
      {
        if ( !*(_DWORD *)(v85 + 1544) )
          *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = v870 ^ v871;
        v872 = *((_QWORD *)v97 + 1);
        if ( !*(_DWORD *)(v85 + 1544) )
        {
          *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v85 + 1568) = *(int *)v97;
          *(_QWORD *)(v85 + 1576) = v872;
          *(_DWORD *)(v85 + 1544) = 1;
        }
      }
      v873 = *(_QWORD *)(v85 + 1104);
      v874 = *(_QWORD *)(v85 + 1080) + 16LL;
      v875 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      (*(void (__fastcall **)(__int64))(v85 + 328))(v873);
      v876 = *(unsigned int **)(v85 + 1080);
      v877 = 0LL;
      v878 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
      LOBYTE(i16) = *((_BYTE *)v876 + 12) != 0;
      v879 = v874 + 24LL * *v876;
      do
      {
        v880 = 24LL;
        v881 = (__int64 *)(v878 + 24);
        v882 = (__int64 *)v874;
        do
        {
          v883 = *v882++;
          v884 = *v881++;
          if ( v883 != v884 )
            goto LABEL_1281;
          v880 = (unsigned int)(v880 - 8);
        }
        while ( (unsigned int)v880 >= 8 );
        if ( !(_DWORD)v880 )
          break;
        while ( 1 )
        {
          v877 = *(unsigned __int8 *)v882;
          v882 = (__int64 *)((char *)v882 + 1);
          v885 = *(unsigned __int8 *)v881;
          v881 = (__int64 *)((char *)v881 + 1);
          if ( v877 != v885 )
            break;
          v128 = (_DWORD)v880 == 1;
          v880 = (unsigned int)(v880 - 1);
          if ( v128 )
            goto LABEL_1282;
        }
        v877 = 0LL;
LABEL_1281:
        v874 += 24LL;
      }
      while ( v874 < v879 );
LABEL_1282:
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v85 + 392))(
        *(_QWORD *)(v85 + 1104),
        v877,
        v880,
        v881);
      __writecr8(v875);
      if ( (_DWORD)i16 && *(_QWORD *)(v878 + 24) == 1LL || v874 != v879 )
      {
        v886 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
      }
      else
      {
        v886 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
        if ( !*(_DWORD *)(v85 + 1544) )
        {
          *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v85 + 1560) = (char *)v886 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v85 + 1568) = *v886;
          *(_QWORD *)(v85 + 1576) = v874;
          *(_DWORD *)(v85 + 1544) = 1;
        }
      }
      v887 = *(_QWORD *)(v85 + 1104);
      v888 = *(_QWORD *)(v85 + 1080) + 16LL;
      v889 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      (*(void (__fastcall **)(__int64))(v85 + 328))(v887);
      v890 = 0LL;
      v891 = v888 + 24LL * **(unsigned int **)(v85 + 1080);
      while ( 1 )
      {
        v888 += 24LL;
        if ( v888 >= v891 )
          break;
        v892 = *(_QWORD *)(v888 + 8);
        if ( v892 < v890 )
          break;
        if ( (v892 & 0xFFFFFFFFFFFFF000uLL) != v892 )
          break;
        v893 = v892 + *(unsigned int *)(v888 + 16);
        if ( v893 <= v892 || v893 == v890 )
          break;
        v890 = v892 + *(unsigned int *)(v888 + 16);
      }
      (*(void (__fastcall **)(_QWORD))(v85 + 392))(*(_QWORD *)(v85 + 1104));
      __writecr8(v889);
      if ( v888 == v891 || *(_DWORD *)(v85 + 1544) )
        goto LABEL_216;
      *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v85 + 1560) = (char *)v886 - 0x4C48B4211BBACBEBLL;
      *(_QWORD *)(v85 + 1568) = *v886;
      *(_QWORD *)(v85 + 1576) = v888;
      *(_DWORD *)(v85 + 1544) = 1;
      goto LABEL_377;
    }
    if ( (*(_DWORD *)(v85 + 1440) & 1) == 0 )
      goto LABEL_217;
    if ( *(_QWORD *)(v85 + 1672) )
    {
      v915 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD))(v85 + 888))(26LL, v1 + 116, 0LL);
      v914 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3A0);
      if ( v915 < 0 )
        v914 = 0LL;
    }
    else
    {
      v914 = 0LL;
    }
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v914;
    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = 0;
    v916 = 0LL;
    v917 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 872))(0LL);
    if ( !v917 )
    {
LABEL_1417:
      v953 = *(_QWORD *)(v85 + 1016);
      if ( (*(int (__fastcall **)(__int64))(v85 + 856))(v953) >= 0 )
      {
        v954 = (*(__int64 (__fastcall **)(__int64))(v85 + 904))(v953);
        v955 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(v85 + 912))(v953, v1 + 17);
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = (*(__int64 (__fastcall **)(__int64))(v85 + 920))(v953);
        if ( v954 == 98
          || *(_DWORD *)(v85 + 1544)
          || (*(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = v954 ^ 0x62LL, *(_DWORD *)(v85 + 1544)) )
        {
          v956 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
        }
        else
        {
          v956 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
          *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v85 + 1560) = (char *)v956 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v85 + 1568) = *v956;
          *(_QWORD *)(v85 + 1576) = v953;
          *(_DWORD *)(v85 + 1544) = 1;
        }
        v957 = 0;
        v958 = 0;
        if ( (v954 & 7) == 1 )
        {
          v957 = 48;
        }
        else if ( (v954 & 7) == 2 )
        {
          v957 = 16;
          v958 = 16;
        }
        else if ( (v954 & 7) != 0 && !*(_DWORD *)(v85 + 1544) )
        {
          *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v85 + 1560) = (char *)v956 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v85 + 1568) = *v956;
          *(_QWORD *)(v85 + 1576) = v953;
          *(_DWORD *)(v85 + 1544) = 1;
        }
        v959 = *(_QWORD *)(v85 + 1232);
        v960 = (unsigned __int64)v954 >> 4;
        v128 = (*(_BYTE *)(v959 + 2 * v960) | (unsigned __int8)v957) == v955;
        v961 = 0xB3B74BDEE4453415uLL;
        if ( !v128 && !*(_DWORD *)(v85 + 1544) )
        {
          *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v85 + 1560) = (char *)v956 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v85 + 1568) = *v956;
          *(_QWORD *)(v85 + 1576) = v953;
          *(_DWORD *)(v85 + 1544) = 1;
        }
        if ( ((unsigned __int8)v958 | *(_BYTE *)(v959 + 2 * v960 + 1)) != *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                   + 0x88)
          && !*(_DWORD *)(v85 + 1544) )
        {
          *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v85 + 1560) = (char *)v956 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v85 + 1568) = *v956;
          *(_QWORD *)(v85 + 1576) = v953;
          *(_DWORD *)(v85 + 1544) = 1;
        }
        if ( v953 != *(_QWORD *)(v85 + 1016) )
          v916 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, __int64))(v85 + 896))(v953, 1LL);
        *v1 = v916;
        if ( v916 )
        {
          v962 = v916;
          if ( *(_QWORD *)v916 )
          {
            v963 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
            v964 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
            do
            {
              *v962 &= 0xFFFFFFFFFFFFFFFCuLL;
              (*(void (__fastcall **)(_QWORD, unsigned __int64))(v85 + 432))(*v962, v961);
              v965 = *(unsigned __int8 *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
              v966 = v962[1] & 0xFFFFFFFFFFFF0000uLL;
              if ( v966 == v963 )
                v965 = v955;
              v967 = v962[1] >> 6;
              LOBYTE(v967) = v967 & 0xF;
              if ( !(*(unsigned int (__fastcall **)(__int64, __int64))(v85 + 928))(v967, v965) )
              {
                if ( (*(_DWORD *)(v85 + 1680) & 0x40000000) != 0 )
                {
                  v968 = *(_QWORD **)(v85 + 1848);
                  LODWORD(v961) = 48;
                  v969 = 6LL;
                  do
                  {
                    v961 = (unsigned int)(v961 - 8);
                    *v968 = *(_QWORD *)v964;
                    v964 += 8;
                    ++v968;
                    --v969;
                  }
                  while ( v969 );
                  if ( (_DWORD)v961 )
                  {
                    do
                    {
                      v970 = *v964++;
                      *(_BYTE *)v968 = v970;
                      v968 = (_QWORD *)((char *)v968 + 1);
                      v128 = (_DWORD)v961 == 1;
                      v961 = (unsigned int)(v961 - 1);
                    }
                    while ( !v128 );
                  }
                  v964 = *(char **)(v85 + 1848);
                }
                *((_QWORD *)v964 + 3) = v966;
                *((_QWORD *)v964 + 4) = *v962;
                v964[40] = ((unsigned __int64)*((unsigned int *)v962 + 2) >> 6) & 0xF;
                if ( !*(_DWORD *)(v85 + 1544) )
                {
                  *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1560) = v964 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1568) = *(int *)v964;
                  *(_QWORD *)(v85 + 1576) = v953;
                  *(_DWORD *)(v85 + 1544) = 1;
                }
              }
              v962 += 6;
            }
            while ( *v962 );
            v916 = (unsigned int *)*v1;
            LODWORD(i16) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0);
          }
          (*(void (__fastcall **)(unsigned int *, unsigned __int64))(v85 + 248))(v916, v961);
        }
        (*(void (__fastcall **)(__int64, unsigned __int64))(v85 + 864))(v953, v961);
        *(_DWORD *)(v85 + 1432) += 0x8000;
      }
      if ( *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) )
        (*(void (**)(void))(v85 + 432))();
      *(_DWORD *)(v85 + 1432) += (_DWORD)i16 << 8;
      goto LABEL_216;
    }
    while ( v914 != v917 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(v85 + 880))(v917) )
      {
        if ( (*(int (__fastcall **)(__int64))(v85 + 856))(v917) >= 0 )
        {
          v936 = (*(__int64 (__fastcall **)(__int64))(v85 + 904))(v917);
          v937 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(v85 + 912))(v917, v1 + 16);
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = (*(__int64 (__fastcall **)(__int64))(v85 + 920))(v917);
          if ( v936 == 97
            || *(_DWORD *)(v85 + 1544)
            || (*(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = v936 ^ 0x61LL, *(_DWORD *)(v85 + 1544)) )
          {
            v938 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
          }
          else
          {
            v938 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
            *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v85 + 1560) = (char *)v938 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v85 + 1568) = *v938;
            *(_QWORD *)(v85 + 1576) = v917;
            *(_DWORD *)(v85 + 1544) = 1;
          }
          v939 = 0;
          v940 = 0;
          if ( (v936 & 7) == 1 )
          {
            v939 = 48;
          }
          else if ( (v936 & 7) == 2 )
          {
            v939 = 16;
            v940 = 16;
          }
          else if ( (v936 & 7) != 0 && !*(_DWORD *)(v85 + 1544) )
          {
            *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v85 + 1560) = (char *)v938 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v85 + 1568) = *v938;
            *(_QWORD *)(v85 + 1576) = v917;
            *(_DWORD *)(v85 + 1544) = 1;
          }
          v941 = *(_QWORD *)(v85 + 1232);
          v942 = (unsigned __int64)v936 >> 4;
          v943 = v939 | *(_BYTE *)(v941 + 2 * v942);
          v944 = 0xB3B74BDEE4453415uLL;
          if ( v943 != v937 && !*(_DWORD *)(v85 + 1544) )
          {
            *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v85 + 1560) = (char *)v938 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v85 + 1568) = *v938;
            *(_QWORD *)(v85 + 1576) = v917;
            *(_DWORD *)(v85 + 1544) = 1;
          }
          if ( ((unsigned __int8)v940 | *(_BYTE *)(v941 + 2 * v942 + 1)) != *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                     + 0x80)
            && !*(_DWORD *)(v85 + 1544) )
          {
            *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v85 + 1560) = (char *)v938 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v85 + 1568) = *v938;
            *(_QWORD *)(v85 + 1576) = v917;
            *(_DWORD *)(v85 + 1544) = 1;
          }
          if ( v917 != *(_QWORD *)(v85 + 1016) )
            v916 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, __int64))(v85 + 896))(v917, 1LL);
          *v1 = v916;
          if ( v916 )
          {
            v945 = v916;
            if ( *(_QWORD *)v916 )
            {
              v946 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
              do
              {
                *v945 &= 0xFFFFFFFFFFFFFFFCuLL;
                (*(void (__fastcall **)(_QWORD, unsigned __int64))(v85 + 432))(*v945, v944);
                v947 = *(unsigned __int8 *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
                v948 = v945[1] & 0xFFFFFFFFFFFF0000uLL;
                if ( v948 == v946 )
                  v947 = v937;
                v949 = v945[1] >> 6;
                LOBYTE(v949) = v949 & 0xF;
                if ( !(*(unsigned int (__fastcall **)(__int64, __int64))(v85 + 928))(v949, v947) )
                {
                  if ( (*(_DWORD *)(v85 + 1680) & 0x40000000) != 0 )
                  {
                    v950 = *(_QWORD **)(v85 + 1848);
                    LODWORD(v944) = 48;
                    v951 = 6LL;
                    do
                    {
                      v944 = (unsigned int)(v944 - 8);
                      *v950 = *(_QWORD *)v97;
                      v97 += 8;
                      ++v950;
                      --v951;
                    }
                    while ( v951 );
                    if ( (_DWORD)v944 )
                    {
                      do
                      {
                        v952 = *v97++;
                        *(_BYTE *)v950 = v952;
                        v950 = (_QWORD *)((char *)v950 + 1);
                        v128 = (_DWORD)v944 == 1;
                        v944 = (unsigned int)(v944 - 1);
                      }
                      while ( !v128 );
                    }
                    v97 = *(char **)(v85 + 1848);
                  }
                  *((_QWORD *)v97 + 3) = v948;
                  *((_QWORD *)v97 + 4) = *v945;
                  v97[40] = ((unsigned __int64)*((unsigned int *)v945 + 2) >> 6) & 0xF;
                  if ( !*(_DWORD *)(v85 + 1544) )
                  {
                    *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v85 + 1568) = *(int *)v97;
                    *(_QWORD *)(v85 + 1576) = v917;
                    *(_DWORD *)(v85 + 1544) = 1;
                  }
                }
                v945 += 6;
              }
              while ( *v945 );
LABEL_1412:
              v916 = (unsigned int *)*v1;
              LODWORD(i16) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0);
            }
LABEL_1413:
            (*(void (__fastcall **)(unsigned int *))(v85 + 248))(v916);
          }
LABEL_1414:
          (*(void (__fastcall **)(__int64))(v85 + 864))(v917);
          v914 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
          *(_DWORD *)(v85 + 1432) += 0x8000;
          v916 = 0LL;
        }
LABEL_1415:
        v97 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
      }
      LODWORD(i16) = i16 + 1;
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = i16;
      v917 = (*(__int64 (__fastcall **)(__int64))(v85 + 872))(v917);
      if ( !v917 )
        goto LABEL_1417;
    }
    if ( (*(int (__fastcall **)(__int64))(v85 + 856))(v917) >= 0 )
    {
      v918 = (*(__int64 (__fastcall **)(__int64))(v85 + 904))(v917);
      v919 = (*(__int64 (__fastcall **)(__int64, __int64))(v85 + 912))(v917, (__int64)v1 + 156);
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v919;
      v920 = v919;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = (*(__int64 (__fastcall **)(__int64))(v85 + 920))(v917);
      if ( v918 == 97
        || *(_DWORD *)(v85 + 1544)
        || (*(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = v918 ^ 0x61LL, *(_DWORD *)(v85 + 1544)) )
      {
        v921 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
      }
      else
      {
        v921 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
        *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v85 + 1560) = (char *)v921 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v85 + 1568) = *v921;
        *(_QWORD *)(v85 + 1576) = v917;
        *(_DWORD *)(v85 + 1544) = 1;
      }
      v922 = 0;
      v923 = 0;
      if ( (v918 & 7) == 1 )
      {
        v922 = 48;
      }
      else if ( (v918 & 7) == 2 )
      {
        v922 = 16;
        v923 = 16;
      }
      else if ( (v918 & 7) != 0 && !*(_DWORD *)(v85 + 1544) )
      {
        *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v85 + 1560) = (char *)v921 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v85 + 1568) = *v921;
        *(_QWORD *)(v85 + 1576) = v917;
        *(_DWORD *)(v85 + 1544) = 1;
      }
      v924 = *(_QWORD *)(v85 + 1232);
      v925 = (unsigned __int64)v918 >> 4;
      if ( ((unsigned __int8)v922 | *(_BYTE *)(v924 + 2 * v925)) != v920 && !*(_DWORD *)(v85 + 1544) )
      {
        *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v85 + 1560) = (char *)v921 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v85 + 1568) = *v921;
        *(_QWORD *)(v85 + 1576) = v917;
        *(_DWORD *)(v85 + 1544) = 1;
      }
      if ( ((unsigned __int8)v923 | *(_BYTE *)(v924 + 2 * v925 + 1)) != *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                 + 0x9C)
        && !*(_DWORD *)(v85 + 1544) )
      {
        *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v85 + 1560) = (char *)v921 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v85 + 1568) = *v921;
        *(_QWORD *)(v85 + 1576) = v917;
        *(_DWORD *)(v85 + 1544) = 1;
      }
      if ( v917 == *(_QWORD *)(v85 + 1016) )
        v916 = 0LL;
      else
        v916 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, __int64))(v85 + 896))(v917, 1LL);
      *v1 = v916;
      if ( v916 )
      {
        v926 = v916;
        if ( *(_QWORD *)v916 )
        {
          v927 = *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
          v928 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
          do
          {
            *v926 &= 0xFFFFFFFFFFFFFFFCuLL;
            (*(void (__fastcall **)(_QWORD))(v85 + 432))(*v926);
            v929 = *(unsigned __int8 *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x9C);
            v930 = v926[1] & 0xFFFFFFFFFFFF0000uLL;
            if ( v930 == v928 )
              v929 = v927;
            v931 = v926[1] >> 6;
            LOBYTE(v931) = v931 & 0xF;
            if ( !(*(unsigned int (__fastcall **)(__int64, __int64))(v85 + 928))(v931, v929) )
            {
              if ( (*(_DWORD *)(v85 + 1680) & 0x40000000) != 0 )
              {
                v932 = *(_QWORD **)(v85 + 1848);
                v933 = 48;
                v934 = 6LL;
                do
                {
                  v933 -= 8;
                  *v932 = *(_QWORD *)v97;
                  v97 += 8;
                  ++v932;
                  --v934;
                }
                while ( v934 );
                for ( ; v933; --v933 )
                {
                  v935 = *v97++;
                  *(_BYTE *)v932 = v935;
                  v932 = (_QWORD *)((char *)v932 + 1);
                }
                v97 = *(char **)(v85 + 1848);
              }
              *((_QWORD *)v97 + 3) = v930;
              *((_QWORD *)v97 + 4) = *v926;
              v97[40] = ((unsigned __int64)*((unsigned int *)v926 + 2) >> 6) & 0xF;
              if ( !*(_DWORD *)(v85 + 1544) )
              {
                *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v85 + 1560) = v97 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v85 + 1568) = *(int *)v97;
                *(_QWORD *)(v85 + 1576) = v917;
                *(_DWORD *)(v85 + 1544) = 1;
              }
            }
            v926 += 6;
          }
          while ( *v926 );
          goto LABEL_1412;
        }
        goto LABEL_1413;
      }
      goto LABEL_1414;
    }
    goto LABEL_1415;
  }
  i16 = 0LL;
LABEL_1510:
  *(_DWORD *)(v85 + 1424) = v90;
  if ( *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x54)
    && ((*(_DWORD *)(v85 + 1680) & 0x8000) != 0 || !*(_DWORD *)(v85 + 1544)) )
  {
    v1013 = *(_QWORD *)(v85 + 1672);
    *(_QWORD *)(v85 + 1672) = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD *))(v85 + 608))(v1013, v1 + 182);
    v1014 = *(_DWORD *)(v85 + 1680);
    if ( (v1014 & 1) != 0 )
    {
      *(_DWORD *)(v85 + 1680) = v1014 & 0xFFFFFFFE;
      v1015 = (*(__int64 (__fastcall **)(__int64))(v85 + 584))(v1013);
      v1013 = v1015;
      if ( v1015 )
        *(_DWORD *)(v85 + 1656) = (*(__int64 (__fastcall **)(__int64))(v85 + 616))(v1015);
      else
        *(_DWORD *)(v85 + 1656) = -1;
    }
    if ( v1013 )
      (*(void (__fastcall **)(__int64))(v85 + 592))(v1013);
  }
  if ( (*(_DWORD *)(v85 + 1680) & 0x800008) == 0x800008 )
  {
    v1016 = *(unsigned int *)(v85 + 1400);
    v128 = (*(_DWORD *)(v85 + 1684) & 1) == 0;
    v1017 = *(_DWORD *)(v85 + 1684) & 1;
    v1018 = *(_QWORD *)(v85 + 1832);
    v1019 = *(_DWORD *)(v85 + 1364);
    v1020 = *(_QWORD *)(v85 + 1784);
    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB4) = v1016;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1018;
    if ( !v128 )
      v1020 = *(_QWORD *)(v85 + 1248);
    v1021 = *(unsigned int **)(v85 + 344);
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = *(_QWORD *)(v85 + 952);
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = *(_QWORD *)(v85 + 640);
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = *(_QWORD *)(v85 + 760);
    *v1 = v1021;
    v1022 = __rdtsc();
    v1023 = (__ROR8__(v1022, 3) ^ v1022) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x628) = *((_QWORD *)&v1023 + 1);
    v1024 = -1200000000LL - ((unsigned __int64)v1023 ^ *((_QWORD *)&v1023 + 1)) % 0x5F5E100;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B0) = v1024;
    if ( (*(_DWORD *)(v85 + 1680) & 0x4000000) != 0 )
    {
      v1025 = __rdtsc();
      v1026 = (__ROR8__(v1025, 3) ^ v1025) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x638) = *((_QWORD *)&v1026 + 1);
      if ( ((unsigned __int64)v1026 ^ *((_QWORD *)&v1026 + 1)) % 0xA < 2 )
      {
        v1027 = __rdtsc();
        v1028 = (__ROR8__(v1027, 3) ^ v1027) * (unsigned __int128)0x7010008004002001uLL;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x648) = *((_QWORD *)&v1028 + 1);
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B0) = (((unsigned __int64)v1028 ^ *((_QWORD *)&v1028 + 1))
                                                                                % 0xA
                                                                                + 1)
                                                                               * v1024;
      }
    }
    v1029 = *(_DWORD *)(v85 + 1680);
    v1030 = 0LL;
    if ( (v1029 & 2) == 0 )
      v1019 = v1016;
    if ( (v1029 & 0x80u) != 0 )
    {
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74) = 1;
      v1031 = __rdtsc();
      v1032 = (__ROR8__(v1031, 3) ^ v1031) * (unsigned __int128)0x7010008004002001uLL;
      v1033 = 234;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x658) = *((_QWORD *)&v1032 + 1);
      v1030 = v1032 ^ *((_QWORD *)&v1032 + 1);
      v1034 = v1030;
      v1035 = (_QWORD *)(v85 + 1864);
      i16 = v1030 ^ v85;
      do
      {
        *v1035-- ^= v1034;
        v1034 = __ROR8__(v1034, v1033--);
      }
      while ( v1033 );
      v1036 = (unsigned __int64)(v1016 - 1872) >> 3;
      if ( (_DWORD)v1036 )
      {
        v1037 = (__int64 *)(v85 + 8 * ((int)v1036 + 233LL));
        do
        {
          v1038 = *v1037--;
          i16 = (2 * i16) ^ __ROR8__(v1038, v1036);
          LODWORD(v1036) = v1036 - 1;
        }
        while ( (_DWORD)v1036 );
        v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
        v1018 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
      }
      v1039 = (v1019 - (unsigned int)v1016) >> 3;
      if ( (_DWORD)v1039 )
      {
        v1040 = (_QWORD *)(v85 + v1016 + 8 * v1039 - 8);
        do
        {
          *v1040-- ^= v1034;
          v1034 = __ROR8__(v1034, v1039);
          LODWORD(v1039) = v1039 - 1;
        }
        while ( (_DWORD)v1039 );
      }
      v1021 = (unsigned int *)*v1;
    }
    else
    {
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74) = 0;
    }
    if ( v1018 )
    {
      (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, unsigned int *, __int64))(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                          + 0x48))(
        v85,
        v1019,
        v1 + 54,
        v1021,
        v1018);
    }
    else if ( v1020 )
    {
      if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD *))(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                      + 0x20))(
              v1020,
              0LL,
              0LL,
              0LL,
              v1 + 54)
        && v1017 )
      {
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18))(
          v1020,
          0LL,
          0LL);
      }
    }
    else
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD *))v1021)(0LL, 0LL, v1 + 54);
    }
    if ( *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74) )
    {
      v1041 = (_QWORD *)(v85 + 1864);
      v1042 = v1030 ^ v85;
      v1043 = 234;
      do
      {
        *v1041-- ^= v1030;
        v1030 = __ROR8__(v1030, v1043--);
      }
      while ( v1043 );
      v1044 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB4);
      v1045 = v1044;
      v1046 = (unsigned __int64)(v1044 - 1872) >> 3;
      if ( (_DWORD)v1046 )
      {
        v1047 = (__int64 *)(v85 + 8 * ((int)v1046 + 233LL));
        do
        {
          v1048 = *v1047--;
          v93 = __ROR8__(v1048, v1046);
          v1042 = (2 * v1042) ^ v93;
          LODWORD(v1046) = v1046 - 1;
        }
        while ( (_DWORD)v1046 );
        v1045 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB4);
      }
      v1049 = (v1019 - (unsigned int)v1044) >> 3;
      if ( v1049 )
      {
        v93 = v85 + v1045 + 8 * (v1049 - 1LL);
        do
        {
          *(_QWORD *)v93 ^= v1030;
          v1030 = __ROR8__(v1030, v1049);
          v93 -= 8LL;
          --v1049;
        }
        while ( v1049 );
      }
      if ( v1042 != i16 )
      {
        v1050 = *(_QWORD *)(v85 + 1176);
        v1051 = *(_DWORD *)(v85 + 1364);
        *(_QWORD *)v1050 = v85;
        *(_DWORD *)(v1050 + 16) = v1051;
        if ( !*(_DWORD *)(v85 + 1544) )
          *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = i16 ^ v1042;
        if ( !*(_DWORD *)(v85 + 1544) )
        {
          *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v85 + 1560) = 0LL;
          *(_QWORD *)(v85 + 1568) = 270LL;
          *(_QWORD *)(v85 + 1576) = v1042;
          *(_DWORD *)(v85 + 1544) = 1;
        }
      }
    }
  }
  v1052 = *(_DWORD *)(v85 + 1632);
  if ( v1052 == 6 || v1052 == 1 )
    goto LABEL_2381;
  if ( !*(_DWORD *)(v85 + 1544) )
  {
    if ( **(_QWORD **)(v85 + 1640) == *(_QWORD *)(v85 + 1648) )
    {
      if ( (*(_DWORD *)(v85 + 1440) & 1) != 0 )
      {
        v1558 = *(unsigned int *)(v85 + 1656);
        v1559 = (_DWORD)v1558 == -1
              ? 0LL
              : (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v85 + 576))(v1558, v93);
        if ( v1559 || (v1559 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 584))(0LL)) != 0 )
        {
          v1560 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(v85 + 600))(v1559, v1 + 182);
          if ( v1560 >= 0 )
          {
            *(_QWORD *)(v85 + 1672) = v1559;
            v1560 = 0;
            *(_DWORD *)(v85 + 1432) += 0x10000;
          }
          else
          {
            (*(void (__fastcall **)(__int64))(v85 + 592))(v1559);
          }
          if ( v1560 >= 0 )
          {
            if ( **(_QWORD **)(v85 + 1640) == *(_QWORD *)(v85 + 1648) )
            {
              if ( *(_DWORD *)(*(_QWORD *)(v85 + 1152) + 48LL) )
              {
                _InterlockedOr(v1915, 0);
                if ( **(_QWORD **)(v85 + 1640) == *(_QWORD *)(v85 + 1648) )
                {
                  v93 = **(_QWORD **)(v85 + 1640);
                  if ( !*(_DWORD *)(v85 + 1544) )
                    *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = v93 ^ *(_QWORD *)(v85 + 1648);
                  v1561 = *(_QWORD *)(v85 + 1648);
                  if ( !*(_DWORD *)(v85 + 1544) )
                  {
                    *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v85 + 1560) = 0LL;
                    *(_QWORD *)(v85 + 1568) = 259LL;
                    *(_QWORD *)(v85 + 1576) = v1561;
                    *(_DWORD *)(v85 + 1544) = 1;
                  }
                }
              }
            }
            if ( (*(_DWORD *)(v85 + 1680) & 0x8000) != 0 || !*(_DWORD *)(v85 + 1544) )
            {
              v1562 = *(_QWORD *)(v85 + 1672);
              *(_QWORD *)(v85 + 1672) = 0LL;
              (*(void (__fastcall **)(__int64, _QWORD *))(v85 + 608))(v1562, v1 + 182);
              v1563 = *(_DWORD *)(v85 + 1680);
              if ( (v1563 & 1) != 0 )
              {
                *(_DWORD *)(v85 + 1680) = v1563 & 0xFFFFFFFE;
                v1564 = (*(__int64 (__fastcall **)(__int64))(v85 + 584))(v1562);
                v1562 = v1564;
                if ( v1564 )
                  *(_DWORD *)(v85 + 1656) = (*(__int64 (__fastcall **)(__int64))(v85 + 616))(v1564);
                else
                  *(_DWORD *)(v85 + 1656) = -1;
              }
              if ( v1562 )
                (*(void (__fastcall **)(__int64))(v85 + 592))(v1562);
            }
          }
        }
      }
      goto LABEL_2381;
    }
    v1053 = *(unsigned int *)(v85 + 1656);
    v1054 = (_BYTE *)v85;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = v85;
    if ( (_DWORD)v1053 == -1 )
      v1055 = 0LL;
    else
      v1055 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v85 + 576))(v1053, v93);
    if ( !v1055 )
    {
      v1055 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 584))(0LL);
      if ( !v1055 )
        goto LABEL_2381;
    }
    v1056 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(v85 + 600))(v1055, v1 + 182);
    if ( v1056 >= 0 )
    {
      *(_QWORD *)(v85 + 1672) = v1055;
      v1056 = 0;
      *(_DWORD *)(v85 + 1432) += 0x10000;
    }
    else
    {
      (*(void (__fastcall **)(__int64))(v85 + 592))(v1055);
    }
    if ( v1056 < 0 )
    {
LABEL_2381:
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v85;
      goto LABEL_2382;
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD))(v85 + 616))(*(_QWORD *)(v85 + 1672)) )
      goto LABEL_2346;
    v1057 = *(_QWORD *)(v85 + 1640);
    v1058 = *(_QWORD *)(v85 + 1152) + 32LL;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = v1058;
    v1059 = v1057 & 0x3F;
    v1060 = *(_QWORD *)v1058;
    v1061 = *(unsigned int *)(v1058 + 16);
    v1062 = (_QWORD *)v1060;
    v1063 = *(_DWORD *)(v1058 + 16);
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = *(_QWORD *)v1058;
    v1064 = 4 * v1063;
    v1065 = (const char *)v1060;
    v1066 = v1060 + v1064;
    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74) = v1061;
    if ( v1060 < v1066 )
    {
      do
      {
        _mm_prefetch(v1065, 0);
        v1065 += 64;
      }
      while ( (unsigned __int64)v1065 < v1066 );
    }
    if ( v1064 >= 8 )
    {
      v1067 = (unsigned __int64)v1064 >> 3;
      do
      {
        v1057 = __ROL8__(*v1062++ ^ v1057, v1059);
        v1064 -= 8;
        --v1067;
      }
      while ( v1067 );
    }
    for ( ; v1064; --v1064 )
    {
      v1068 = *(unsigned __int8 *)v1062;
      v1062 = (_QWORD *)((char *)v1062 + 1);
      v1057 = __ROL8__(v1068 ^ v1057, v1059);
    }
    v1069 = *(_QWORD **)(v1058 + 24);
    v1070 = *(_QWORD *)(v85 + 1648) ^ v1057;
    v1071 = (const char *)v1069;
    v1072 = v1070 & 0x3F;
    if ( v1069 < (_QWORD *)((char *)v1069 + v1061) )
    {
      do
      {
        _mm_prefetch(v1071, 0);
        v1071 += 64;
      }
      while ( v1071 < (const char *)v1069 + v1061 );
    }
    v1073 = v1061;
    if ( (unsigned int)v1061 >= 8 )
    {
      v1062 = (_QWORD *)(v1061 >> 3);
      do
      {
        v1070 = __ROL8__(*v1069++ ^ v1070, v1072);
        v1073 -= 8;
        v1062 = (_QWORD *)((char *)v1062 - 1);
      }
      while ( v1062 );
      v1054 = (_BYTE *)v85;
    }
    if ( v1073 )
    {
      do
      {
        v1074 = *(unsigned __int8 *)v1069;
        v1069 = (_QWORD *)((char *)v1069 + 1);
        v1070 = __ROL8__(v1074 ^ v1070, v1072);
        --v1073;
      }
      while ( v1073 );
      v1054 = (_BYTE *)v85;
    }
    v1075 = v1060 ^ v1061 ^ v1070;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v1075;
    v1076 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, _QWORD *, _QWORD *))(v85 + 464))(
              v1060,
              v1 + 105,
              v1 + 115,
              v1062);
    v93 = 0LL;
    if ( v1076 )
    {
      v1077 = __rdtsc();
      v1078 = (__ROR8__(v1077, 3) ^ v1077) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x668) = *((_QWORD *)&v1078 + 1);
      v1079 = ((unsigned __int64)v1078 ^ *((_QWORD *)&v1078 + 1)) % 0xB;
      if ( (unsigned int)v1079 > 5 )
      {
        v1083 = v1079 - 6;
        if ( v1083 )
        {
          v1084 = v1083 - 1;
          if ( v1084 )
          {
            v1085 = v1084 - 1;
            if ( v1085 )
            {
              if ( v1085 == 1 )
              {
                *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D0) = -1333354875;
                v1082 = __ROR4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D0) ^ 9, 33);
              }
              else
              {
                v1086 = __rdtsc();
                v1087 = __ROR8__(v1086, 3);
                v1088 = (v1087 ^ v1086) * (unsigned __int128)0x7010008004002001uLL;
                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x678) = *((_QWORD *)&v1088 + 1);
                v1089 = DWORD2(v1088) ^ (67117057 * (v1087 ^ v1086));
                v1082 = ((((((v1089 % 0x1A + 97) << 8) | ((v1089 >> 5)
                                                        - 26
                                                        * ((unsigned int)((1321528399 * (unsigned __int64)(v1089 >> 5)) >> 32) >> 3)
                                                        + 65)) << 8) | ((v1089 >> 10) % 0x1A + 97)) << 8) | ((v1089 >> 15) % 0x1A + 65);
              }
            }
            else
            {
              *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1EC) = 1684422978;
              v1082 = __ROR4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1EC), 8);
            }
          }
          else
          {
            *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F4) = -2100910376;
            v1082 = __ROL4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F4), 7);
          }
        }
        else
        {
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E8) = 1314342514;
          v1082 = __ROR4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E8) ^ 6, 24);
        }
      }
      else if ( (_DWORD)v1079 == 5 )
      {
        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E0) = 680282605;
        v1082 = __ROR4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E0), 5);
      }
      else if ( (_DWORD)v1079 )
      {
        v1080 = v1079 - 1;
        if ( v1080 )
        {
          v1081 = v1080 - 1;
          if ( v1081 )
          {
            if ( v1081 == 1 )
            {
              *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x238) = -1474152136;
              v1082 = __ROR4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x238) ^ 3, 15);
            }
            else
            {
              *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x230) = 1728537748;
              v1082 = __ROL4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x230), 4);
            }
          }
          else
          {
            *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x240) = -2051698419;
            v1082 = __ROR4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x240), 2);
          }
        }
        else
        {
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x23C) = -1297272415;
          v1082 = __ROL4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x23C), 1);
        }
      }
      else
      {
        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E4) = -795291432;
        v1082 = __ROR4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E4), 6);
      }
      v1090 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v85 + 240))(512LL, 128LL, v1082);
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v1090;
      v1091 = v1090;
      if ( !v1090 )
        goto LABEL_2346;
      v1092 = 128;
      v1093 = 16LL;
      v1094 = 1LL;
      do
      {
        *v1090 = 0LL;
        v1092 -= 8;
        ++v1090;
        --v1093;
      }
      while ( v1093 );
      for ( ; v1092; --v1092 )
      {
        *(_BYTE *)v1090 = 0;
        v1090 = (__int64 *)((char *)v1090 + 1);
      }
      v1095 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x348);
      v1096 = v1091;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x120) = v1095;
      *v1091 = v1095;
      v1097 = v1075;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v1075;
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = 0;
      *v1 = v1091;
      while ( 1 )
      {
        v1098 = *v1096;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x120) = v1098;
        if ( !v1098 )
          goto LABEL_1690;
        v1099 = v1097 & 0x3F;
        v1100 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(v85 + 456))(v1098, v1093, v1094);
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v1100;
        if ( !v1100 )
          break;
        v1101 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x120);
        v1102 = (__int64 *)(v1100 + *(unsigned __int16 *)(v1100 + 20) + 24LL);
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v1101;
        v1103 = &v1102[5 * *(unsigned __int16 *)(v1100 + 6)];
        do
        {
          v1104 = 0;
          if ( (*((_DWORD *)v1102 + 9) & 0x2000000) != 0
            || (v1105 = *(_DWORD *)v1102, *(_DWORD *)v1102 == 1414090313) && *((_DWORD *)v1102 + 1) == 1195525195
            || v1105 == 1162297680
            && ((v1106 = *((_WORD *)v1102 + 2), v1106 == 30583) || v1106 == 29303 || v1106 == 30839)
            || v1105 == 1095914053 && *((_WORD *)v1102 + 2) == 16724 )
          {
LABEL_1650:
            v1104 = 1;
          }
          else
          {
            v1094 = *(_QWORD *)(v85 + 1600);
            v1107 = 7;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3F8) = *(_QWORD *)(v85 + 1608);
            v1108 = (char *)v1102 - v1094;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x400) = *(_QWORD *)(v85 + 1616);
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x408) = *(_QWORD *)(v85 + 1624);
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3F0) = v1094;
            while ( 1 )
            {
              v1109 = (unsigned __int8)v1108[v1094];
              v1110 = *(unsigned __int8 *)v1094++;
              if ( v1109 != v1110 )
                break;
              if ( !--v1107 )
              {
LABEL_1649:
                v1101 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x120);
                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v1101;
                goto LABEL_1650;
              }
            }
            v1111 = *(__int64 **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3F8);
            LODWORD(v1094) = 8;
            v1112 = v1102;
            while ( 1 )
            {
              v1113 = *v1112++;
              v1114 = *v1111++;
              if ( v1113 != v1114 )
                break;
              v1094 = (unsigned int)(v1094 - 8);
              if ( (unsigned int)v1094 < 8 )
              {
                if ( !(_DWORD)v1094 )
                  goto LABEL_1649;
                while ( 1 )
                {
                  v1115 = *(unsigned __int8 *)v1112;
                  v1112 = (__int64 *)((char *)v1112 + 1);
                  v1116 = *(unsigned __int8 *)v1111;
                  v1111 = (__int64 *)((char *)v1111 + 1);
                  if ( v1115 != v1116 )
                    goto LABEL_1642;
                  v1094 = (unsigned int)(v1094 - 1);
                  if ( !(_DWORD)v1094 )
                    goto LABEL_1649;
                }
              }
            }
LABEL_1642:
            v1094 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x400);
            v1117 = (char *)v1102 - v1094;
            v1118 = 4;
            while ( 1 )
            {
              v1119 = (unsigned __int8)v1117[v1094];
              v1120 = *(unsigned __int8 *)v1094++;
              if ( v1119 != v1120 )
                break;
              if ( !--v1118 )
                goto LABEL_1649;
            }
            v1094 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x408);
            v1121 = (char *)v1102 - v1094;
            v1122 = 6;
            while ( 1 )
            {
              v1123 = (unsigned __int8)v1121[v1094];
              v1124 = *(unsigned __int8 *)v1094++;
              if ( v1123 != v1124 )
                break;
              if ( !--v1122 )
                goto LABEL_1649;
            }
            v1101 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x120);
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v1101;
          }
          v1125 = *((_DWORD *)v1102 + 2);
          if ( *((int *)v1102 + 9) < 0 )
            v1104 = 1;
          if ( *((_DWORD *)v1102 + 4) > v1125 )
            v1125 = *((_DWORD *)v1102 + 4);
          if ( !v1104 )
          {
            v1126 = v1125;
            v1094 = v1101 + *((unsigned int *)v1102 + 3);
            v1127 = (const char *)v1094;
            v1128 = v1094 + v1125;
            if ( v1094 < v1128 )
            {
              do
              {
                _mm_prefetch(v1127, 0);
                v1127 += 64;
              }
              while ( (unsigned __int64)v1127 < v1128 );
            }
            v1129 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v1129;
            if ( v1126 >= 8 )
            {
              v1130 = (unsigned __int64)v1126 >> 3;
              do
              {
                v1129 = __ROL8__(*(_QWORD *)v1094 ^ v1129, v1099);
                v1094 += 8LL;
                v1126 -= 8;
                --v1130;
              }
              while ( v1130 );
              v1101 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v1129;
            }
            if ( v1126 )
            {
              do
              {
                v1131 = *(unsigned __int8 *)v1094++;
                v1129 = __ROL8__(v1131 ^ v1129, v1099);
                --v1126;
              }
              while ( v1126 );
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v1129;
            }
          }
          v1102 += 5;
        }
        while ( v1102 != v1103 );
        v1132 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
        v1075 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
        v1054 = (_BYTE *)v85;
        v1133 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
        if ( !v1132 )
        {
          v1134 = *(unsigned int *)(v1133 + 148);
          if ( (unsigned int)v1134 >= 0x14 )
          {
            v1135 = *(unsigned int *)(v1133 + 144);
            v1136 = v1135 + v1101 + v1134;
            v1137 = v1101 + v1135;
            if ( v1101 + v1135 != v1136 )
            {
              while ( 1 )
              {
                if ( !*(_DWORD *)(v1137 + 12) || (v1138 = *(unsigned int *)(v1137 + 16), !(_DWORD)v1138) )
                {
LABEL_1684:
                  v1132 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                  break;
                }
                v1139 = *(_QWORD *)(v1138 + v1101);
                if ( v1139 )
                {
                  if ( (*(unsigned int (__fastcall **)(_QWORD))(v85 + 624))(*(_QWORD *)(v1138 + v1101))
                    && (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(v85 + 464))(
                         v1139,
                         v1 + 36,
                         (__int64)v1 + 772) )
                  {
                    v1091 = *(__int64 **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                    v1094 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x120);
                    v1140 = v1091;
                    v1141 = 0;
                    while ( *v1140 != v1094 )
                    {
                      if ( !*v1140 )
                      {
                        v1091[v1141] = v1094;
                        break;
                      }
                      ++v1141;
                      ++v1140;
                      if ( v1141 >= 0x10 )
                        break;
                    }
                    if ( v1141 == 16 )
                    {
                      v1097 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                      goto LABEL_1690;
                    }
                  }
                  v1101 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                }
                v1137 += 20LL;
                if ( v1137 == v1136 )
                  goto LABEL_1684;
              }
            }
          }
        }
        v1093 = (unsigned int)(v1132 + 1);
        v1091 = *(__int64 **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
        v1096 = (__int64 *)(*v1 + 8LL);
        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1093;
        *v1 = v1096;
        v1097 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
        if ( (unsigned int)v1093 >= 0x10 )
        {
LABEL_1690:
          v1075 = v1097;
          goto LABEL_1691;
        }
      }
      if ( !*(_DWORD *)(v85 + 1544) )
      {
        *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v85 + 1560) = 0LL;
        *(_QWORD *)(v85 + 1568) = 258LL;
        *(_QWORD *)(v85 + 1576) = -1073741701LL;
        *(_DWORD *)(v85 + 1544) = 1;
      }
LABEL_1691:
      if ( v1075 == *(_QWORD *)(v85 + 1648) || !v1075 )
        v1075 ^= 0x95EA5DE843D5D824uLL;
      (*(void (__fastcall **)(__int64 *))(v85 + 248))(v1091);
      v1060 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
      v93 = 0LL;
      LODWORD(v1061) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74);
      v1058 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
    }
    if ( v1075 != **(_QWORD **)(v85 + 1640) && !*(_DWORD *)(v85 + 1544) )
    {
      *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = v1075 ^ **(_QWORD **)(v85 + 1640);
      if ( !*(_DWORD *)(v85 + 1544) )
      {
        *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v85 + 1560) = 0LL;
        *(_QWORD *)(v85 + 1568) = 258LL;
        *(_QWORD *)(v85 + 1576) = v1075;
        *(_DWORD *)(v85 + 1544) = 1;
      }
    }
    v1142 = v1060 + v1058;
    v1143 = 0LL;
    if ( (_DWORD)v1061 )
    {
      v1144 = (int *)v1060;
      do
      {
        v93 = *v1144;
        v1143 = (unsigned int)(v1143 + 1);
        ++v1144;
        v1142 = v1143 * ((v93 + *(_DWORD *)(((__int64)v93 >> 4) + v1060)) ^ v1142);
      }
      while ( (unsigned int)v1143 < (unsigned int)v1061 );
      v1054 = (_BYTE *)v85;
    }
    v1145 = 2 * v1142;
    v1146 = **(_DWORD **)(v85 + 1184);
    if ( v1145 != v1146 && (*(_DWORD *)(v85 + 1680) & 0x20000) != 0 && !*(_DWORD *)(v85 + 1544) )
    {
      *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = v1146 ^ (unsigned __int64)v1145;
      if ( !*(_DWORD *)(v85 + 1544) )
      {
        *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v85 + 1560) = 0LL;
        *(_QWORD *)(v85 + 1568) = 263LL;
        *(_QWORD *)(v85 + 1576) = v1145;
        *(_DWORD *)(v85 + 1544) = 1;
      }
    }
    v1147 = *(_DWORD *)(v85 + 1632);
    if ( v1147 >= 4 )
    {
      if ( v1147 != 4 )
      {
LABEL_2345:
        *((_DWORD *)v1054 + 408) = 6;
        goto LABEL_2346;
      }
      goto LABEL_1826;
    }
    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = 0;
    v1148 = (_BYTE *)v85;
    v1149 = *(_QWORD *)(v85 + 1152) + 32LL;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v1149;
    if ( v1147 < 2 )
    {
      v1150 = *(unsigned int *)(v85 + 1364);
      v1151 = **(const char ***)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
      v1152 = v1150 + 48;
      v1153 = 4 * *(_DWORD *)(v1149 + 16);
      if ( (unsigned int)(v1150 + 48) <= *(_DWORD *)(v85 + 1812) )
      {
        *(_DWORD *)(v85 + 1364) = v1152;
      }
      else
      {
        v1148 = (_BYTE *)sub_140236718(v85, v1152, *(unsigned int *)(v85 + 1588));
        if ( !v1148 )
          goto LABEL_1806;
        v1154 = *(_DWORD *)(v85 + 1680);
        if ( (v1154 & 4) == 0 )
        {
          v1155 = *(_DWORD *)(v85 + 1364);
          v1156 = *(_QWORD *)(v85 + 1336);
          v1157 = (v1154 & 0x20000000) != 0 ? *(_DWORD *)(v85 + 1588) : 0;
          if ( v1155 >= 8 )
          {
            v1158 = (unsigned __int64)v1155 >> 3;
            do
            {
              *(_QWORD *)v85 = 0LL;
              v1155 -= 8;
              v85 += 8LL;
              --v1158;
            }
            while ( v1158 );
          }
          for ( ; v1155; --v1155 )
            *(_BYTE *)v85++ = 0;
          v1159 = *((_DWORD *)v1148 + 397);
          *((_DWORD *)v1148 + 397) = v1157;
          if ( v1157 == 3 )
          {
            (*((void (__fastcall **)(__int64, __int64))v1148 + 100))(v1156, 1LL);
          }
          else
          {
            v1160 = 0;
            if ( (*((_DWORD *)v1148 + 420) & 0x10000000) == 0 )
              v1160 = v1157;
            if ( v1160 )
              (*((void (__fastcall **)(__int64, _QWORD))v1148 + 63))(v1156 - 8, *(_QWORD *)(v1156 - 8));
            else
              (*((void (__fastcall **)(__int64, __int64))v1148 + 31))(v1156, 1LL);
          }
          *((_DWORD *)v1148 + 397) = v1159;
        }
        *((_DWORD *)v1148 + 420) &= ~4u;
      }
      v1143 = (__int64)&v1148[v1150];
      ++*((_DWORD *)v1148 + 351);
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x688) = &v1148[v1150];
      v1161 = 48;
      v1162 = &v1148[v1150];
      v1163 = 6LL;
      do
      {
        *v1162 = 0LL;
        v1161 -= 8;
        ++v1162;
        --v1163;
      }
      while ( v1163 );
      for ( ; v1161; --v1161 )
      {
        *(_BYTE *)v1162 = 0;
        v1162 = (_QWORD *)((char *)v1162 + 1);
      }
      *(_DWORD *)v1143 = 11;
      v1164 = v1151;
      *(_QWORD *)(v1143 + 8) = v1151;
      *(_DWORD *)(v1143 + 16) = v1153;
      *((_DWORD *)v1148 + 358) += v1153;
      v1165 = *((_DWORD *)v1148 + 353);
      v93 = *((_QWORD *)v1148 + 177);
      v1166 = &v1151[v1153];
      if ( v1151 < v1166 )
      {
        do
        {
          _mm_prefetch(v1164, 0);
          v1164 += 64;
        }
        while ( v1164 < v1166 );
      }
      v1167 = v1153;
      if ( v1153 >= 8 )
      {
        v1168 = (unsigned __int64)v1153 >> 3;
        do
        {
          v93 = __ROL8__(*(_QWORD *)v1151 ^ v93, v1165);
          v1151 += 8;
          v1167 -= 8;
          --v1168;
        }
        while ( v1168 );
      }
      for ( ; v1167; --v1167 )
      {
        v1169 = *(unsigned __int8 *)v1151++;
        v93 = __ROL8__(v1169 ^ v93, v1165);
      }
      for ( i25 = v93 >> 31; i25; i25 >>= 31 )
        v93 = (unsigned int)i25 ^ (unsigned int)v93;
      LODWORD(v93) = v93 & 0x7FFFFFFF;
      v1054 = v1148;
      *(_DWORD *)(v1143 + 20) = v93;
      *((_DWORD *)v1148 + 358) += v1153;
      v1149 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
      *((_DWORD *)v1148 + 408) = 2;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = v1148;
    }
    if ( *((int *)v1148 + 408) < 3 )
    {
      v1171 = 0;
      v1172 = *((unsigned int *)v1148 + 341);
      if ( *((_DWORD *)v1148 + 362) == 7 )
        v1171 = 32;
      v1173 = v1172 + 48;
      if ( (unsigned int)(v1172 + 48) <= *((_DWORD *)v1148 + 453) )
      {
        v1174 = (__int64)v1148;
        *((_DWORD *)v1148 + 341) = v1173;
      }
      else
      {
        v1174 = sub_140236718(v1148, v1173, *((unsigned int *)v1148 + 397));
        if ( !v1174 )
          goto LABEL_1806;
        v1175 = *((_DWORD *)v1148 + 420);
        if ( (v1175 & 4) == 0 )
        {
          v1176 = *((_DWORD *)v1148 + 341);
          v1177 = *((_QWORD *)v1148 + 167);
          v1178 = (v1175 & 0x20000000) != 0 ? *((_DWORD *)v1148 + 397) : 0;
          if ( v1176 >= 8 )
          {
            v1179 = (unsigned __int64)v1176 >> 3;
            do
            {
              *(_QWORD *)v1148 = 0LL;
              v1176 -= 8;
              v1148 += 8;
              --v1179;
            }
            while ( v1179 );
          }
          for ( ; v1176; --v1176 )
            *v1148++ = 0;
          v1180 = *(_DWORD *)(v1174 + 1588);
          *(_DWORD *)(v1174 + 1588) = v1178;
          if ( v1178 == 3 )
          {
            (*(void (__fastcall **)(__int64, __int64))(v1174 + 800))(v1177, 1LL);
          }
          else
          {
            v1181 = 0;
            if ( (*(_DWORD *)(v1174 + 1680) & 0x10000000) == 0 )
              v1181 = v1178;
            if ( v1181 )
              (*(void (__fastcall **)(__int64, _QWORD))(v1174 + 504))(v1177 - 8, *(_QWORD *)(v1177 - 8));
            else
              (*(void (__fastcall **)(__int64, __int64))(v1174 + 248))(v1177, 1LL);
          }
          *(_DWORD *)(v1174 + 1588) = v1180;
        }
        *(_DWORD *)(v1174 + 1680) &= ~4u;
      }
      v1182 = v1174 + v1172;
      ++*(_DWORD *)(v1174 + 1404);
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x698) = v1174 + v1172;
      v1183 = 48;
      v1184 = (_QWORD *)(v1174 + v1172);
      v1185 = 6LL;
      do
      {
        *v1184 = 0LL;
        v1183 -= 8;
        ++v1184;
        --v1185;
      }
      while ( v1185 );
      for ( ; v1183; --v1183 )
      {
        *(_BYTE *)v1184 = 0;
        v1184 = (_QWORD *)((char *)v1184 + 1);
      }
      *(_DWORD *)v1182 = v1171;
      *(_QWORD *)(v1182 + 8) = v1149;
      if ( v1171 == 32 )
        sub_14014F138(v1174, v1149, 0x20u, v1182 + 24);
      *(_DWORD *)(v1182 + 16) = 32;
      *(_DWORD *)(v1174 + 1432) += 32;
      v1143 = v1149;
      v1186 = *(_DWORD *)(v1174 + 1412);
      v1187 = (const char *)v1149;
      v93 = *(_QWORD *)(v1174 + 1416);
      if ( v1149 < (unsigned __int64)(v1149 + 32) )
      {
        do
        {
          _mm_prefetch(v1187, 0);
          v1187 += 64;
        }
        while ( (unsigned __int64)v1187 < v1149 + 32 );
      }
      v1188 = 32;
      v1189 = 4LL;
      do
      {
        v93 = __ROL8__(*(_QWORD *)v1143 ^ v93, v1186);
        v1143 += 8LL;
        v1188 -= 8;
        --v1189;
      }
      while ( v1189 );
      for ( ; v1188; --v1188 )
      {
        v1190 = *(unsigned __int8 *)v1143++;
        v93 = __ROL8__(v1190 ^ v93, v1186);
      }
      for ( i26 = v93 >> 31; i26; i26 >>= 31 )
        v93 = (unsigned int)i26 ^ (unsigned int)v93;
      LODWORD(v93) = v93 & 0x7FFFFFFF;
      *(_DWORD *)(v1182 + 20) = v93;
      v1148 = (_BYTE *)v1174;
      *(_DWORD *)(v1174 + 1432) += 32;
      v1054 = (_BYTE *)v1174;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = v1174;
      *(_DWORD *)(v1174 + 1632) = 3;
    }
    v128 = (*((_DWORD *)v1148 + 420) & 0x40000000) == 0;
    v1192 = *(_QWORD *)v1149;
    *v1 = *(_QWORD *)v1149;
    if ( !v128 )
      goto LABEL_1824;
    v1193 = 0;
    if ( !*(_DWORD *)(v1149 + 16) )
      goto LABEL_1824;
    v1194 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
    v1195 = v1192;
    do
    {
      if ( !(*((__int64 (__fastcall **)(__int64, _QWORD *, _QWORD))v1148 + 69))(
              v1195 + ((__int64)*(int *)(v1195 + 4LL * v1193) >> 4),
              v1 + 95,
              0LL) )
        ++v1194;
      ++v1193;
    }
    while ( v1193 < *(_DWORD *)(v1149 + 16) );
    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v1194;
    v128 = v1194 == 0;
    v1054 = *(_BYTE **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
    if ( v128 )
    {
LABEL_1824:
      *((_DWORD *)v1148 + 408) = 4;
      v1205 = 0;
LABEL_1825:
      v85 = (unsigned __int64)v1054;
      if ( v1205 < 0 )
        goto LABEL_2346;
LABEL_1826:
      v1223 = *((_QWORD *)v1054 + 144);
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8) = v1054;
      v85 = (unsigned __int64)v1054;
      v1224 = *(_QWORD *)(v1223 + 32);
      *v1 = v1224;
      v1225 = (*((__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64))v1054 + 58))(
                v1224,
                v1 + 55,
                (__int64)v1 + 468,
                v1143);
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1225;
      v1227 = v1225;
      if ( !v1225 )
        goto LABEL_2346;
      v1228 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B8);
      v1229 = v1 + 45;
      v1230 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D4);
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74) = v1230;
      v1231 = 4;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v1228;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x160) = 0LL;
      do
      {
        *v1229++ = 0;
        --v1231;
      }
      while ( v1231 );
      v1232 = 0;
      if ( *((_DWORD *)v1054 + 351) )
      {
        v1233 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x168);
        v1234 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x164);
        LODWORD(v1226) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x160);
        while ( 1 )
        {
          v1235 = 0;
          v1236 = v1054;
          if ( *((_QWORD *)v1054 + 230) )
            v1236 = (_BYTE *)*((_QWORD *)v1054 + 230);
          v1237 = &v1236[*((unsigned int *)v1236 + 350)];
          if ( (_DWORD)v1226 && v1234 <= v1232 )
          {
            v1235 = v1234;
            v1237 = &v1236[v1233];
          }
          if ( v1235 != v1232 )
            break;
LABEL_1873:
          v1234 = v1235;
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x160) = 1;
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x164) = v1235;
          v1233 = (_DWORD)v1237 - (_DWORD)v1236;
          v1226 = 1LL;
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x168) = (_DWORD)v1237 - (_DWORD)v1236;
          v1246 = *(_DWORD *)v1237;
          if ( (*(_DWORD *)v1237 == 1 || v1246 == 12)
            && *((_QWORD *)v1237 + 1) == v1227
            && *((_DWORD *)v1237 + 4) == v1230
            || (unsigned int)(v1246 - 33) <= 1 && *((_QWORD *)v1237 + 4) == v1228 )
          {
            goto LABEL_1883;
          }
          if ( ++v1232 >= *((_DWORD *)v1054 + 351) )
            goto LABEL_1882;
        }
        v1238 = v1232 - v1235;
        v1235 = v1232;
        while ( 1 )
        {
          v1239 = *(_DWORD *)v1237;
          if ( *(int *)v1237 > 17 )
          {
            switch ( v1239 )
            {
              case 19:
LABEL_1870:
                v1244 = 56LL;
                goto LABEL_1871;
              case 28:
                v1245 = *((unsigned __int16 *)v1237 + 20);
                goto LABEL_1860;
              case 30:
                v1244 = (((*((_DWORD *)v1237 + 9) - 1) / 0xCu + 7) & 0xFFFFFFF8)
                      + 24 * (*((unsigned __int16 *)v1237 + 20) + 2);
                goto LABEL_1871;
            }
            if ( (unsigned int)(v1239 - 33) <= 1 )
            {
              v1244 = 20
                    * (unsigned int)(((*((_DWORD *)v1237 + 8) & 0xFFF)
                                    + (unsigned __int64)*((unsigned int *)v1237 + 10)
                                    + 4095) >> 12)
                    + 48;
              goto LABEL_1871;
            }
          }
          else
          {
            if ( v1239 == 17 )
              goto LABEL_1870;
            v1240 = v1239 - 1;
            if ( !v1240 )
            {
LABEL_1862:
              v1244 = 4 * (*((_DWORD *)v1237 + 4) / 0xCu) + 48;
              goto LABEL_1871;
            }
            v1241 = v1240 - 6;
            if ( !v1241 )
            {
              v1244 = (unsigned int)(24 * (*((_DWORD *)v1237 + 6) + 2));
              goto LABEL_1871;
            }
            v1242 = v1241 - 1;
            if ( !v1242 )
            {
              v1245 = *((unsigned __int16 *)v1237 + 16);
LABEL_1860:
              v1244 = (v1245 + 55) & 0xFFFFFFF8;
              goto LABEL_1871;
            }
            v1243 = v1242 - 2;
            if ( !v1243 )
            {
              v1244 = (unsigned int)(16 * (*((_DWORD *)v1237 + 7) + 3));
              goto LABEL_1871;
            }
            if ( v1243 == 2 )
              goto LABEL_1862;
          }
          v1244 = 48LL;
LABEL_1871:
          v1237 += v1244;
          if ( !--v1238 )
          {
            v1227 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
            v1228 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
            v1230 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74);
            goto LABEL_1873;
          }
        }
      }
LABEL_1882:
      v1237 = 0LL;
LABEL_1883:
      if ( v1237 )
        goto LABEL_2342;
      v1247 = (unsigned int *)*v1;
      v1248 = (*((__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD *, unsigned __int64))v1054 + 58))(
                *v1,
                v1 + 24,
                v1 + 19,
                v1226);
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v1248;
      if ( !v1248 )
      {
        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = -1073741701;
LABEL_2051:
        v1358 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
        goto LABEL_2340;
      }
      v1249 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0);
      v1250 = v1 + 47;
      v1251 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x98);
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74) = v1251;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1249;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x170) = 0LL;
      v1252 = 4;
      do
      {
        *v1250++ = 0;
        --v1252;
      }
      while ( v1252 );
      v1253 = 0;
      if ( *((_DWORD *)v1054 + 351) )
      {
        v1254 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x178);
        LODWORD(v93) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x174);
        LODWORD(v1226) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x170);
        while ( 1 )
        {
          v1255 = 0;
          v1256 = v1054;
          if ( *((_QWORD *)v1054 + 230) )
            v1256 = (_BYTE *)*((_QWORD *)v1054 + 230);
          v1257 = &v1256[*((unsigned int *)v1256 + 350)];
          if ( (_DWORD)v1226 && (unsigned int)v93 <= v1253 )
          {
            v1255 = v93;
            v1257 = &v1256[v1254];
          }
          if ( v1255 != v1253 )
            break;
LABEL_1920:
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x170) = 1;
          v1254 = (_DWORD)v1257 - (_DWORD)v1256;
          v93 = v1255;
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x178) = (_DWORD)v1257 - (_DWORD)v1256;
          v1226 = 1LL;
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x174) = v1255;
          v1266 = *(_DWORD *)v1257;
          if ( (*(_DWORD *)v1257 == 1 || v1266 == 12)
            && *((_QWORD *)v1257 + 1) == *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40)
            && *((_DWORD *)v1257 + 4) == v1251
            || (unsigned int)(v1266 - 33) <= 1 && *((_QWORD *)v1257 + 4) == v1249 )
          {
            goto LABEL_1930;
          }
          if ( ++v1253 >= *((_DWORD *)v1054 + 351) )
            goto LABEL_1929;
        }
        v1258 = v1253 - v1255;
        v1255 = v1253;
        while ( 1 )
        {
          v1259 = *(_DWORD *)v1257;
          if ( *(int *)v1257 > 17 )
          {
            switch ( v1259 )
            {
              case 19:
LABEL_1917:
                v1264 = 56LL;
                goto LABEL_1918;
              case 28:
                v1265 = *((unsigned __int16 *)v1257 + 20);
                goto LABEL_1907;
              case 30:
                v1264 = (((*((_DWORD *)v1257 + 9) - 1) / 0xCu + 7) & 0xFFFFFFF8)
                      + 24 * (*((unsigned __int16 *)v1257 + 20) + 2);
                goto LABEL_1918;
            }
            if ( (unsigned int)(v1259 - 33) <= 1 )
            {
              v1264 = 20
                    * (unsigned int)(((*((_DWORD *)v1257 + 8) & 0xFFF)
                                    + (unsigned __int64)*((unsigned int *)v1257 + 10)
                                    + 4095) >> 12)
                    + 48;
              goto LABEL_1918;
            }
          }
          else
          {
            if ( v1259 == 17 )
              goto LABEL_1917;
            v1260 = v1259 - 1;
            if ( !v1260 )
            {
LABEL_1909:
              v1264 = 4 * (*((_DWORD *)v1257 + 4) / 0xCu) + 48;
              goto LABEL_1918;
            }
            v1261 = v1260 - 6;
            if ( !v1261 )
            {
              v1264 = (unsigned int)(24 * (*((_DWORD *)v1257 + 6) + 2));
              goto LABEL_1918;
            }
            v1262 = v1261 - 1;
            if ( !v1262 )
            {
              v1265 = *((unsigned __int16 *)v1257 + 16);
LABEL_1907:
              v1264 = (v1265 + 55) & 0xFFFFFFF8;
              goto LABEL_1918;
            }
            v1263 = v1262 - 2;
            if ( !v1263 )
            {
              v1264 = (unsigned int)(16 * (*((_DWORD *)v1257 + 7) + 3));
              goto LABEL_1918;
            }
            if ( v1263 == 2 )
              goto LABEL_1909;
          }
          v1264 = 48LL;
LABEL_1918:
          v1257 += v1264;
          if ( !--v1258 )
          {
            v1249 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
            v1251 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74);
            v1247 = (unsigned int *)*v1;
            goto LABEL_1920;
          }
        }
      }
LABEL_1929:
      v1257 = 0LL;
LABEL_1930:
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C8) = v1257;
      if ( v1257
        || (v1267 = (*((__int64 (__fastcall **)(unsigned int *, unsigned __int64, _QWORD, unsigned __int64))v1054 + 78))(
                      v1247,
                      v93,
                      0LL,
                      v1226),
            v1268 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x98),
            *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v1268,
            !v1267) )
      {
LABEL_2328:
        v1545 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 456))(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                          + 0x1B8));
        v1546 = *(unsigned int *)(v1545 + 148);
        if ( (unsigned int)v1546 >= 0x14 )
        {
          v1547 = *(unsigned int *)(v1545 + 144);
          v1548 = v1547 + v1546;
          v1549 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B8);
          v1550 = v1549 + v1548;
          for ( i27 = v1547 + v1549; i27 != v1550; i27 += 20LL )
          {
            if ( !*(_DWORD *)(i27 + 12) )
              break;
            v1552 = *(unsigned int *)(i27 + 16);
            if ( !(_DWORD)v1552 )
              break;
            v93 = *(_QWORD *)(v1552 + v1549);
            if ( v93 )
            {
              v1553 = sub_1402347EC(v1 + 23, v93, 2147483655LL);
              v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8);
              v1358 = v1553;
              v1054 = (_BYTE *)v85;
              if ( ((v1553 + 0x80000000) & 0x80000000) == 0 && v1553 != -1073741554 )
                goto LABEL_2340;
              v1549 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B8);
            }
          }
          v1358 = 0;
LABEL_2340:
          if ( ((v1358 + 0x80000000) & 0x80000000) != 0 || v1358 == -1073741554 )
            goto LABEL_2342;
LABEL_2346:
          if ( (*((_DWORD *)v1054 + 420) & 0x8000) != 0 || !*((_DWORD *)v1054 + 386) )
          {
            v1555 = *((_QWORD *)v1054 + 209);
            *((_QWORD *)v1054 + 209) = 0LL;
            (*((void (__fastcall **)(__int64, _QWORD *))v1054 + 76))(v1555, v1 + 182);
            v1556 = *((_DWORD *)v1054 + 420);
            if ( (v1556 & 1) != 0 )
            {
              *((_DWORD *)v1054 + 420) = v1556 & 0xFFFFFFFE;
              v1557 = (*((__int64 (__fastcall **)(__int64))v1054 + 73))(v1555);
              v1555 = v1557;
              if ( v1557 )
                *((_DWORD *)v1054 + 414) = (*((__int64 (__fastcall **)(__int64))v1054 + 77))(v1557);
              else
                *((_DWORD *)v1054 + 414) = -1;
            }
            if ( v1555 )
              (*((void (__fastcall **)(__int64))v1054 + 74))(v1555);
          }
          goto LABEL_2381;
        }
        v85 = (unsigned __int64)v1054;
LABEL_2342:
        if ( !(*((__int64 (__fastcall **)(_QWORD, _BYTE *, _QWORD *, unsigned __int64))v1054 + 58))(
                *(_QWORD *)(*((_QWORD *)v1054 + 144) + 32LL),
                v1054 + 1664,
                v1 + 96,
                v1226)
          || (v1554 = (*((__int64 (__fastcall **)(_QWORD))v1054 + 57))(*((_QWORD *)v1054 + 208))) == 0 )
        {
          if ( !*((_DWORD *)v1054 + 386) )
          {
            *((_QWORD *)v1054 + 194) = v1054 - 0x5C5FC0A76E374B18LL;
            *((_QWORD *)v1054 + 195) = 0LL;
            *((_QWORD *)v1054 + 196) = 261LL;
            *((_QWORD *)v1054 + 197) = -1073741701LL;
            *((_DWORD *)v1054 + 386) = 1;
          }
          goto LABEL_2346;
        }
        *((_DWORD *)v1054 + 415) = *(_DWORD *)(v1554 + 80);
        *((_DWORD *)v1054 + 408) = 5;
        goto LABEL_2345;
      }
      if ( (*((_DWORD *)v1054 + 420) & 0x40000000) != 0 )
      {
        v1269 = sub_14072DC88(v1 + 23, *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0), 7LL);
        v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8);
        v1270 = v1269;
        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = v1269;
LABEL_2049:
        v1054 = (_BYTE *)v85;
        if ( (int)(v1270 + 0x80000000) >= 0 && v1270 != -1073741554 )
          goto LABEL_2051;
        goto LABEL_2328;
      }
      v1271 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0);
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v1271;
      v1272 = (*((__int64 (__fastcall **)(__int64))v1054 + 57))(v1271);
      *v1 = v1272;
      if ( !v1272 )
        goto LABEL_2047;
      v1273 = *((unsigned int *)v1054 + 341);
      v1274 = *((unsigned int *)v1054 + 397);
      v1275 = v1268;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1268 / 0xC;
      v1276 = 4 * (v1268 / 0xC);
      v1277 = v1273 + v1276 + 48;
      if ( v1277 <= *((_DWORD *)v1054 + 453) )
      {
        v1278 = v1054;
        *((_DWORD *)v1054 + 341) = v1277;
      }
      else
      {
        v1278 = (_BYTE *)sub_140236718(v1054, v1277, v1274);
        if ( !v1278 )
          goto LABEL_1952;
        v1279 = *((_DWORD *)v1054 + 420);
        if ( (v1279 & 4) == 0 )
        {
          v1280 = *((_DWORD *)v1054 + 341);
          v1281 = *((_QWORD *)v1054 + 167);
          v1282 = (v1279 & 0x20000000) != 0 ? *((_DWORD *)v1054 + 397) : 0;
          if ( v1280 >= 8 )
          {
            v1283 = (unsigned __int64)v1280 >> 3;
            do
            {
              *(_QWORD *)v1054 = 0LL;
              v1280 -= 8;
              v1054 += 8;
              --v1283;
            }
            while ( v1283 );
          }
          for ( ; v1280; --v1280 )
            *v1054++ = 0;
          v1284 = *((_DWORD *)v1278 + 397);
          *((_DWORD *)v1278 + 397) = v1282;
          if ( v1282 == 3 )
          {
            (*((void (__fastcall **)(__int64, __int64))v1278 + 100))(v1281, 1LL);
          }
          else
          {
            v1285 = 0;
            if ( (*((_DWORD *)v1278 + 420) & 0x10000000) == 0 )
              v1285 = v1282;
            if ( v1285 )
              (*((void (__fastcall **)(__int64, _QWORD))v1278 + 63))(v1281 - 8, *(_QWORD *)(v1281 - 8));
            else
              (*((void (__fastcall **)(__int64, __int64))v1278 + 31))(v1281, 1LL);
          }
          *((_DWORD *)v1278 + 397) = v1284;
        }
        *((_DWORD *)v1278 + 420) &= ~4u;
      }
      v1286 = &v1278[v1273];
      ++*((_DWORD *)v1278 + 351);
      v1287 = &v1278[v1273];
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2E0) = &v1278[v1273];
      v1288 = 48;
      v1289 = 6LL;
      do
      {
        *v1287 = 0LL;
        v1288 -= 8;
        ++v1287;
        --v1289;
      }
      while ( v1289 );
      for ( ; v1288; --v1288 )
      {
        *(_BYTE *)v1287 = 0;
        v1287 = (_QWORD *)((char *)v1287 + 1);
      }
      v1290 = *(_QWORD **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
      *(_DWORD *)v1286 = 12;
      v1291 = v1290;
      *((_QWORD *)v1286 + 1) = v1290;
      v1292 = (const char *)v1290;
      *((_DWORD *)v1286 + 4) = v1275;
      *((_DWORD *)v1278 + 358) += v1275;
      v1293 = *((_DWORD *)v1278 + 353);
      v1294 = *((_QWORD *)v1278 + 177);
      if ( v1290 < (_QWORD *)((char *)v1290 + v1275) )
      {
        do
        {
          _mm_prefetch(v1292, 0);
          v1292 += 64;
        }
        while ( v1292 < (const char *)v1290 + v1275 );
      }
      v1295 = (unsigned int)v1275;
      if ( (unsigned int)v1275 >= 8 )
      {
        v1296 = (unsigned __int64)(unsigned int)v1275 >> 3;
        do
        {
          v1294 = __ROL8__(*v1291++ ^ v1294, v1293);
          v1295 = (unsigned int)(v1295 - 8);
          --v1296;
        }
        while ( v1296 );
      }
      if ( (_DWORD)v1295 )
      {
        do
        {
          v1297 = *(unsigned __int8 *)v1291;
          v1291 = (_QWORD *)((char *)v1291 + 1);
          v1294 = __ROL8__(v1297 ^ v1294, v1293);
          v128 = (_DWORD)v1295 == 1;
          v1295 = (unsigned int)(v1295 - 1);
        }
        while ( !v128 );
      }
      for ( i28 = v1294; ; v1294 = (unsigned int)i28 ^ (unsigned int)v1294 )
      {
        i28 >>= 31;
        if ( !i28 )
          break;
      }
      LODWORD(v1294) = v1294 & 0x7FFFFFFF;
      *((_DWORD *)v1286 + 5) = v1294;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x190) = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                         + 0x2E0);
      *((_DWORD *)v1278 + 358) += v1275;
      v1299 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x190);
      v1300 = *((_QWORD *)v1278 + 135) + 16LL;
      v1301 = *((_QWORD *)v1278 + 138);
      v1302 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      (*((void (__fastcall **)(__int64, unsigned __int64, __int64, _QWORD *))v1278 + 41))(v1301, v1294, v1295, v1291);
      v1303 = v1300 + 24LL * **((unsigned int **)v1278 + 135);
      while ( *(_QWORD *)(v1300 + 8) != *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) )
      {
        v1300 += 24LL;
        if ( v1300 >= v1303 )
          goto LABEL_1973;
      }
      v1304 = *(_OWORD *)v1300;
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = 0;
      *(_OWORD *)(v1299 + 24) = v1304;
      *(_QWORD *)(v1299 + 40) = *(_QWORD *)(v1300 + 16);
LABEL_1973:
      (*((void (__fastcall **)(_QWORD))v1278 + 49))(*((_QWORD *)v1278 + 138));
      __writecr8(v1302);
      if ( *(int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) < 0 )
      {
        v1305 = 24;
        v1306 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x190) + 24LL);
        v1307 = 3LL;
        do
        {
          *v1306 = 0LL;
          v1305 -= 8;
          ++v1306;
          --v1307;
        }
        while ( v1307 );
        for ( ; v1305; --v1305 )
        {
          *(_BYTE *)v1306 = 0;
          v1306 = (_QWORD *)((char *)v1306 + 1);
        }
        *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x190) + 24LL) = 1LL;
      }
      v1308 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x190) + 48LL);
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v1308;
      if ( v1276 >= 8 )
      {
        v1309 = (unsigned __int64)v1276 >> 3;
        do
        {
          *v1308 = -1LL;
          v1276 -= 8;
          ++v1308;
          --v1309;
        }
        while ( v1309 );
      }
      for ( ; v1276; --v1276 )
      {
        *(_BYTE *)v1308 = -1;
        v1308 = (_QWORD *)((char *)v1308 + 1);
      }
      v1310 = 0;
      v1311 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
      v1312 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
      v1313 = -1;
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = 0;
      v1314 = *v1312;
      v1315 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
      v1316 = (unsigned int *)*v1;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = &v1312[3 * v1311];
      v1317 = (char *)(*((__int64 (__fastcall **)(unsigned int *, __int64, __int64))v1278 + 60))(v1316, v1315, v1314);
      if ( !v1317 )
        goto LABEL_2047;
LABEL_1985:
      v1318 = 0;
      if ( (*((_DWORD *)v1317 + 9) & 0x2000000) != 0
        || (v1319 = *(_DWORD *)v1317, *(_DWORD *)v1317 == 1414090313) && *((_DWORD *)v1317 + 1) == 1195525195
        || v1319 == 1162297680 && ((v1320 = *((_WORD *)v1317 + 2), v1320 == 30583) || v1320 == 29303 || v1320 == 30839)
        || v1319 == 1095914053 && *((_WORD *)v1317 + 2) == 16724 )
      {
LABEL_2012:
        v1318 = 1;
      }
      else
      {
        v1321 = (char *)*((_QWORD *)v1278 + 200);
        v1322 = 7;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x438) = *((_QWORD *)v1278 + 201);
        v1323 = v1317 - v1321;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x440) = *((_QWORD *)v1278 + 202);
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x448) = *((_QWORD *)v1278 + 203);
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x430) = v1321;
        while ( 1 )
        {
          v1324 = (unsigned __int8)v1321[v1323];
          v1325 = (unsigned __int8)*v1321++;
          if ( v1324 != v1325 )
            break;
          if ( !--v1322 )
            goto LABEL_2012;
        }
        v1326 = *(__int64 **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x438);
        v1327 = 8;
        v1328 = (__int64 *)v1317;
        while ( 1 )
        {
          v1329 = *v1328++;
          v1330 = *v1326++;
          if ( v1329 != v1330 )
            break;
          v1327 -= 8;
          if ( v1327 < 8 )
          {
            if ( !v1327 )
              goto LABEL_2012;
            while ( 1 )
            {
              v1331 = *(unsigned __int8 *)v1328;
              v1328 = (__int64 *)((char *)v1328 + 1);
              v1332 = *(unsigned __int8 *)v1326;
              v1326 = (__int64 *)((char *)v1326 + 1);
              if ( v1331 != v1332 )
                goto LABEL_2005;
              if ( !--v1327 )
                goto LABEL_2012;
            }
          }
        }
LABEL_2005:
        v1333 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x440);
        v1334 = v1317 - v1333;
        v1335 = 4;
        while ( 1 )
        {
          v1336 = (unsigned __int8)v1333[v1334];
          v1337 = (unsigned __int8)*v1333++;
          if ( v1336 != v1337 )
            break;
          if ( !--v1335 )
            goto LABEL_2012;
        }
        v1338 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x448);
        v1339 = v1317 - v1338;
        v1340 = 6;
        while ( 1 )
        {
          v1341 = (unsigned __int8)v1338[v1339];
          v1342 = (unsigned __int8)*v1338++;
          if ( v1341 != v1342 )
            break;
          if ( !--v1340 )
            goto LABEL_2012;
        }
      }
      if ( *((int *)v1317 + 9) < 0 )
        v1318 = 1;
      if ( v1318
        && *(_DWORD *)v1317 == 1414090313
        && *((_DWORD *)v1317 + 1) == 1195525195
        && (*((_DWORD *)v1278 + 420) & 0x10000000) != 0 )
      {
        v1318 = 0;
      }
      v1343 = *((_DWORD *)v1317 + 2);
      if ( *((_DWORD *)v1317 + 4) > v1343 )
        v1343 = *((_DWORD *)v1317 + 4);
      v1344 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
      v1345 = v1343 + *((_DWORD *)v1317 + 3);
      while ( 1 )
      {
        v1346 = v1312[2];
        if ( (v1346 & 1) == 0 )
        {
          if ( v1346 < v1313 )
            v1313 = v1312[2];
          if ( v1346 > v1310 )
            v1310 = v1312[2];
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v1310;
        }
        v1347 = *v1312;
        v1348 = v1312[1] - v1347;
        v1349 = (char *)(v1344 + v1347);
        if ( v1318 )
        {
          v1350 = *(_DWORD **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
          *v1350 = 0x80000000;
        }
        else
        {
          *((_DWORD *)v1278 + 358) += v1348;
          v1351 = (const char *)(v1344 + v1347);
          v1352 = *((_DWORD *)v1278 + 353);
          v1353 = *((_QWORD *)v1278 + 177);
          v1354 = &v1349[v1348];
          if ( v1349 < v1354 )
          {
            do
            {
              _mm_prefetch(v1351, 0);
              v1351 += 64;
            }
            while ( v1351 < v1354 );
          }
          if ( v1348 >= 8 )
          {
            v1355 = (unsigned __int64)v1348 >> 3;
            do
            {
              v1353 = __ROL8__(*(_QWORD *)v1349 ^ v1353, v1352);
              v1349 += 8;
              v1348 -= 8;
              --v1355;
            }
            while ( v1355 );
          }
          for ( ; v1348; --v1348 )
          {
            v1356 = (unsigned __int8)*v1349++;
            v1353 = __ROL8__(v1356 ^ v1353, v1352);
          }
          for ( i29 = v1353; ; LODWORD(v1353) = i29 ^ v1353 )
          {
            i29 >>= 31;
            if ( !i29 )
              break;
          }
          v1350 = *(_DWORD **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
          v1310 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
          *v1350 = v1353 & 0x7FFFFFFF;
          v1344 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
        }
        v1312 += 3;
        if ( v1312 == *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) )
          break;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v1350 + 1;
        if ( *v1312 < *((_DWORD *)v1317 + 3) || v1344 + (unsigned __int64)v1312[1] > v1345 )
        {
          v1317 = (char *)(*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD, char *))v1278 + 60))(
                            *v1,
                            v1344,
                            *v1312,
                            v1349);
          if ( !v1317 )
          {
            v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8);
            goto LABEL_2047;
          }
          goto LABEL_1985;
        }
      }
      if ( v1313 == -1 && !v1310 )
        v1313 = 0;
      v1359 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0);
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8) = v1278;
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x258) = v1310 - v1313;
      v85 = (unsigned __int64)v1278;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x378) = v1359 + v1313;
      LOBYTE(v1344) = 1;
      v1360 = (*((__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD *))v1278 + 56))(v1359, v1344, 0LL, v1 + 19);
      v1361 = v1360;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x380) = v1360;
      LOBYTE(v1361) = 1;
      v1362 = v1360 != 0 ? *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) : 0;
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) = v1362;
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x25C) = v1362;
      v1363 = (*((__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD *))v1278 + 56))(
                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0),
                v1361,
                12LL,
                v1 + 19);
      v1364 = v1363;
      *v1 = v1363;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x388) = v1363;
      LOBYTE(v1364) = 1;
      v1365 = v1363 != 0 ? *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) : 0;
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x54) = v1365;
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) = v1365;
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x260) = v1365;
      v1366 = (*((__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD *))v1278 + 56))(
                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0),
                v1364,
                10LL,
                v1 + 19);
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x390) = v1366;
      v1367 = v1366 != 0 ? *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) : 0;
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) = v1367;
      v1368 = *((unsigned int *)v1278 + 341);
      v1369 = *((unsigned int *)v1278 + 397);
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x264) = v1367;
      v1370 = v1368 + 192;
      if ( (unsigned int)(v1368 + 192) <= *((_DWORD *)v1278 + 453) )
      {
        v1054 = v1278;
        *((_DWORD *)v1278 + 341) = v1370;
      }
      else
      {
        v1054 = (_BYTE *)sub_140236718(v1278, v1370, v1369);
        if ( !v1054 )
        {
          v1054 = v1278;
          goto LABEL_2051;
        }
        v1371 = *((_DWORD *)v1278 + 420);
        if ( (v1371 & 4) == 0 )
        {
          v1372 = *((_DWORD *)v1278 + 341);
          v1373 = *((_QWORD *)v1278 + 167);
          v1374 = (v1371 & 0x20000000) != 0 ? *((_DWORD *)v1278 + 397) : 0;
          if ( v1372 >= 8 )
          {
            v1375 = (unsigned __int64)v1372 >> 3;
            do
            {
              *(_QWORD *)v1278 = 0LL;
              v1372 -= 8;
              v1278 += 8;
              --v1375;
            }
            while ( v1375 );
          }
          for ( ; v1372; --v1372 )
            *v1278++ = 0;
          v1376 = *((_DWORD *)v1054 + 397);
          *((_DWORD *)v1054 + 397) = v1374;
          if ( v1374 == 3 )
          {
            (*((void (__fastcall **)(__int64))v1054 + 100))(v1373);
          }
          else
          {
            v1377 = 0;
            if ( (*((_DWORD *)v1054 + 420) & 0x10000000) == 0 )
              v1377 = v1374;
            if ( v1377 )
              (*((void (__fastcall **)(__int64, _QWORD))v1054 + 63))(v1373 - 8, *(_QWORD *)(v1373 - 8));
            else
              (*((void (__fastcall **)(__int64))v1054 + 31))(v1373);
          }
          *((_DWORD *)v1054 + 397) = v1376;
        }
        *((_DWORD *)v1054 + 420) &= ~4u;
      }
      v1378 = (__int64)&v1054[v1368];
      *((_DWORD *)v1054 + 351) += 4;
      v1379 = v1 + 111;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2A0) = v1378;
      v1380 = (unsigned int *)(v1 + 75);
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C8) = v1378;
      v1381 = 4LL;
      do
      {
        v1382 = *v1380;
        v1383 = 48;
        v1226 = *v1379;
        v1384 = (_QWORD *)v1378;
        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v1382;
        v1385 = 6LL;
        do
        {
          *v1384 = 0LL;
          v1383 -= 8;
          ++v1384;
          --v1385;
        }
        while ( v1385 );
        for ( ; v1383; --v1383 )
        {
          *(_BYTE *)v1384 = 0;
          v1384 = (_QWORD *)((char *)v1384 + 1);
        }
        *(_DWORD *)v1378 = 11;
        *(_QWORD *)(v1378 + 8) = v1226;
        v1386 = (const char *)v1226;
        *(_DWORD *)(v1378 + 16) = v1382;
        *((_DWORD *)v1054 + 358) += v1382;
        v1387 = *((_DWORD *)v1054 + 353);
        v93 = *((_QWORD *)v1054 + 177);
        if ( v1226 < v1226 + v1382 )
        {
          do
          {
            _mm_prefetch(v1386, 0);
            v1386 += 64;
          }
          while ( (unsigned __int64)v1386 < v1226 + v1382 );
        }
        v1388 = v1382;
        if ( (unsigned int)v1382 >= 8 )
        {
          v1389 = v1382 >> 3;
          do
          {
            v93 = __ROL8__(*(_QWORD *)v1226 ^ v93, v1387);
            v1226 += 8LL;
            v1388 -= 8;
            --v1389;
          }
          while ( v1389 );
          LODWORD(v1382) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
        }
        if ( v1388 )
        {
          do
          {
            v1390 = *(unsigned __int8 *)v1226++;
            v93 = __ROL8__(v1390 ^ v93, v1387);
            --v1388;
          }
          while ( v1388 );
          LODWORD(v1382) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
        }
        for ( i30 = v93; ; v93 = (unsigned int)i30 ^ (unsigned int)v93 )
        {
          i30 >>= 31;
          if ( !i30 )
            break;
        }
        LODWORD(v93) = v93 & 0x7FFFFFFF;
        *(_DWORD *)(v1378 + 20) = v93;
        ++v1380;
        *((_DWORD *)v1054 + 358) += v1382;
        ++v1379;
        v1378 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2A0) + 48LL;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2A0) = v1378;
        --v1381;
      }
      while ( v1381 );
      v1392 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C8);
      v128 = v1392 == -96;
      v1393 = (_DWORD *)(v1392 + 96);
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8) = v1054;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C0) = v1393;
      v85 = (unsigned __int64)v1054;
      if ( v128 )
      {
        v1394 = *((unsigned int *)v1054 + 341);
        v1395 = v1394 + 48;
        if ( (unsigned int)(v1394 + 48) <= *((_DWORD *)v1054 + 453) )
        {
          v1396 = (__int64)v1054;
          *((_DWORD *)v1054 + 341) = v1395;
        }
        else
        {
          v1396 = sub_140236718(v1054, v1395, *((unsigned int *)v1054 + 397));
          if ( !v1396 )
            goto LABEL_2110;
          v1397 = *((_DWORD *)v1054 + 420);
          if ( (v1397 & 4) == 0 )
          {
            v1398 = *((_DWORD *)v1054 + 341);
            v1399 = *((_QWORD *)v1054 + 167);
            v1400 = (v1397 & 0x20000000) != 0 ? *((_DWORD *)v1054 + 397) : 0;
            if ( v1398 >= 8 )
            {
              v1401 = (unsigned __int64)v1398 >> 3;
              do
              {
                *(_QWORD *)v1054 = 0LL;
                v1398 -= 8;
                v1054 += 8;
                --v1401;
              }
              while ( v1401 );
            }
            for ( ; v1398; --v1398 )
              *v1054++ = 0;
            v1402 = *(_DWORD *)(v1396 + 1588);
            *(_DWORD *)(v1396 + 1588) = v1400;
            if ( v1400 == 3 )
            {
              (*(void (__fastcall **)(__int64, __int64))(v1396 + 800))(v1399, 1LL);
            }
            else
            {
              v1403 = 0;
              if ( (*(_DWORD *)(v1396 + 1680) & 0x10000000) == 0 )
                v1403 = v1400;
              if ( v1403 )
                (*(void (__fastcall **)(__int64, _QWORD))(v1396 + 504))(v1399 - 8, *(_QWORD *)(v1399 - 8));
              else
                (*(void (__fastcall **)(__int64, __int64))(v1396 + 248))(v1399, 1LL);
            }
            *(_DWORD *)(v1396 + 1588) = v1402;
          }
          *(_DWORD *)(v1396 + 1680) &= ~4u;
        }
        v1404 = v1396 + v1394;
        ++*(_DWORD *)(v1396 + 1404);
        v1405 = (_QWORD *)(v1396 + v1394);
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x310) = v1396 + v1394;
        v1406 = 48;
        v1407 = 6LL;
        do
        {
          *v1405 = 0LL;
          v1406 -= 8;
          ++v1405;
          --v1407;
        }
        while ( v1407 );
        for ( ; v1406; --v1406 )
        {
          *(_BYTE *)v1405 = 0;
          v1405 = (_QWORD *)((char *)v1405 + 1);
        }
        v1408 = *v1;
        v1409 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x54);
        v1226 = v1408;
        *(_DWORD *)v1404 = 14;
        v1410 = (const char *)v1408;
        *(_QWORD *)(v1404 + 8) = v1408;
        *(_DWORD *)(v1404 + 16) = v1409;
        *(_DWORD *)(v1396 + 1432) += v1409;
        v1411 = *(_DWORD *)(v1396 + 1412);
        v93 = *(_QWORD *)(v1396 + 1416);
        if ( v1408 < v1408 + v1409 )
        {
          do
          {
            _mm_prefetch(v1410, 0);
            v1410 += 64;
          }
          while ( (unsigned __int64)v1410 < v1408 + v1409 );
        }
        v1378 = (unsigned int)v1409;
        if ( (unsigned int)v1409 >= 8 )
        {
          v1412 = v1409 >> 3;
          do
          {
            v93 = __ROL8__(*(_QWORD *)v1226 ^ v93, v1411);
            v1226 += 8LL;
            v1378 = (unsigned int)(v1378 - 8);
            --v1412;
          }
          while ( v1412 );
          LODWORD(v1409) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x54);
        }
        if ( (_DWORD)v1378 )
        {
          do
          {
            v1413 = *(unsigned __int8 *)v1226++;
            v93 = __ROL8__(v1413 ^ v93, v1411);
            v128 = (_DWORD)v1378 == 1;
            v1378 = (unsigned int)(v1378 - 1);
          }
          while ( !v128 );
        }
        for ( i31 = v93; ; v93 = (unsigned int)i31 ^ (unsigned int)v93 )
        {
          i31 >>= 31;
          if ( !i31 )
            break;
        }
        LODWORD(v93) = v93 & 0x7FFFFFFF;
        v1054 = (_BYTE *)v1396;
        *(_DWORD *)(v1404 + 20) = v93;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C0) = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                           + 0x310);
        *(_DWORD *)(v1396 + 1432) += v1409;
      }
      else
      {
        LODWORD(v1409) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x54);
        v1408 = *v1;
        *v1393 = 14;
      }
      if ( (*((_DWORD *)v1054 + 420) & 0x40000000) != 0 && (_DWORD)v1409 )
        sub_14014F138(
          (__int64)v1054,
          v1408,
          v1409,
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C0) + 28LL);
      v1415 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C0);
      v85 = (unsigned __int64)v1054;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8) = v1054;
      *(_DWORD *)(v1415 + 24) = 0;
      *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C0) + 24LL) |= 1u;
      v1416 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C8);
      v1417 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0);
      *(_DWORD *)(v1416 + 144) = 35;
      *(_DWORD *)(v1416 + 184) |= 1u;
      if ( *(_DWORD *)(v1416 + 160) < 0x94u )
      {
LABEL_2140:
        v128 = (*((_DWORD *)v1054 + 420) & 0x400000) == 0;
        v1424 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0);
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v1424;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8) = v1054;
        if ( v128 )
          goto LABEL_2327;
        v1425 = (*((__int64 (__fastcall **)(ULONG_PTR, unsigned __int64, __int64, unsigned __int64))v1054 + 57))(
                  v1424,
                  v93,
                  v1378,
                  v1226);
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1425;
        v1426 = v1425;
        if ( v1425 )
        {
          v1427 = *(_WORD *)(v1425 + 6);
          v1428 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10)
                * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
          *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v1427;
          v1429 = *((_QWORD *)&v1428 + 1);
          v93 = 0LL;
          v1430 = v1429 >> 3;
          *v1 = v1430;
          if ( !v1427 )
          {
            if ( (*((_DWORD *)v1054 + 420) & 0x200000) == 0 )
            {
              *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x248) = 324608;
              KeBugCheckEx(
                __ROR4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x248), 170),
                0xAuLL,
                v1424,
                0LL,
                0LL);
            }
            if ( *((_DWORD *)v1054 + 386) )
              goto LABEL_2047;
            *((_QWORD *)v1054 + 194) = v1054 - 0x5C5FC0A76E374B18LL;
            *((_QWORD *)v1054 + 195) = 0LL;
            *((_QWORD *)v1054 + 196) = 271LL;
            *((_QWORD *)v1054 + 197) = v1424;
LABEL_2146:
            *((_DWORD *)v1054 + 386) = 1;
            goto LABEL_2047;
          }
          v1431 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
          v1226 = v1427;
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) = v1427;
          v1432 = &v1431[3 * (unsigned int)v1430];
          v1433 = *(unsigned __int16 *)(v1426 + 20) + v1426 + 24;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v1432;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v1433;
          v1434 = 0;
          v1435 = (int *)(v1433 + 8);
          while ( 1 )
          {
            v1436 = *v1435;
            v93 = (unsigned int)v1435[1];
            if ( v1435[2] > (unsigned int)*v1435 )
              v1436 = v1435[2];
            *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v93;
            v1437 = v1436 + v93;
            if ( v1434 )
            {
              if ( v1437 < *(_DWORD *)(v1433 + 40LL * (v1434 - 1) + 12) )
                break;
            }
            if ( v1431 != v1432 )
            {
              do
              {
                v1438 = v1431[1];
                if ( *v1431 >= v1437 || v1438 <= (unsigned int)v93 )
                  break;
                if ( *v1431 < (unsigned int)v93 || v1438 > v1437 )
                {
                  if ( (*((_DWORD *)v1054 + 420) & 0x200000) == 0 )
                  {
                    v1913 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D8) = 324608;
                    KeBugCheckEx(
                      __ROR4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D8), 170),
                      0xAuLL,
                      v1913,
                      2uLL,
                      0LL);
                  }
                  goto LABEL_2162;
                }
                __e6(
                  v1054,
                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38),
                  v1433 + 40LL * v1434,
                  v1431);
                v1432 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
                v1431 += 3;
                v93 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                v1433 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
              }
              while ( v1431 != v1432 );
              v1226 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0);
            }
            v1435 += 10;
            if ( ++v1434 >= (unsigned int)v1226 )
            {
              v1439 = *v1;
              v93 = 0LL;
              v1440 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
              v1441 = *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
              if ( v1431 != v1432 )
              {
                if ( (*((_DWORD *)v1054 + 420) & 0x200000) == 0 )
                {
                  v1914 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F0) = 324608;
                  KeBugCheckEx(
                    __ROR4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F0), 170),
                    0xAuLL,
                    v1914,
                    3uLL,
                    0LL);
                }
                if ( !*((_DWORD *)v1054 + 386) )
                {
                  *((_QWORD *)v1054 + 194) = v1054 - 0x5C5FC0A76E374B18LL;
                  v1443 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                  *((_QWORD *)v1054 + 195) = 0LL;
                  *((_QWORD *)v1054 + 196) = 271LL;
                  *((_QWORD *)v1054 + 197) = v1443;
                  *((_DWORD *)v1054 + 386) = 1;
                }
                goto LABEL_2047;
              }
              v1444 = *((unsigned int *)v1054 + 341);
              v1445 = v1444 + ((v1439 + 6) & 0xFFFFFFF8) + 24 * (v1226 + 2);
              if ( v1445 <= *((_DWORD *)v1054 + 453) )
              {
                v1446 = (__int64)v1054;
                *((_DWORD *)v1054 + 341) = v1445;
                goto LABEL_2188;
              }
              v1446 = sub_140236718(v1054, v1445, *((unsigned int *)v1054 + 397));
              if ( v1446 )
              {
                v1447 = *((_DWORD *)v1054 + 420);
                if ( (v1447 & 4) == 0 )
                {
                  v1448 = *((_DWORD *)v1054 + 341);
                  v1449 = *((_QWORD *)v1054 + 167);
                  v1450 = (v1447 & 0x20000000) != 0 ? *((_DWORD *)v1054 + 397) : 0;
                  if ( v1448 >= 8 )
                  {
                    v1451 = (unsigned __int64)v1448 >> 3;
                    do
                    {
                      *(_QWORD *)v1054 = 0LL;
                      v1448 -= 8;
                      v1054 += 8;
                      --v1451;
                    }
                    while ( v1451 );
                  }
                  for ( ; v1448; --v1448 )
                    *v1054++ = 0;
                  v1452 = *(_DWORD *)(v1446 + 1588);
                  *(_DWORD *)(v1446 + 1588) = v1450;
                  if ( v1450 == 3 )
                  {
                    (*(void (__fastcall **)(__int64, __int64))(v1446 + 800))(v1449, 1LL);
                  }
                  else
                  {
                    v1453 = 0;
                    if ( (*(_DWORD *)(v1446 + 1680) & 0x10000000) == 0 )
                      v1453 = v1450;
                    if ( v1453 )
                      (*(void (__fastcall **)(__int64, _QWORD))(v1446 + 504))(v1449 - 8, *(_QWORD *)(v1449 - 8));
                    else
                      (*(void (__fastcall **)(__int64, __int64))(v1446 + 248))(v1449, 1LL);
                  }
                  *(_DWORD *)(v1446 + 1588) = v1452;
                }
                *(_DWORD *)(v1446 + 1680) &= ~4u;
                LODWORD(v1226) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0);
                v1439 = *v1;
                v1432 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
LABEL_2188:
                v1454 = v1446 + v1444;
                ++*(_DWORD *)(v1446 + 1404);
                v1455 = (_QWORD *)(v1446 + v1444);
                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2F0) = v1446 + v1444;
                v1456 = 48;
                v1457 = 6LL;
                do
                {
                  *v1455 = 0LL;
                  v1456 -= 8;
                  ++v1455;
                  --v1457;
                }
                while ( v1457 );
                for ( ; v1456; --v1456 )
                {
                  *(_BYTE *)v1455 = 0;
                  v1455 = (_QWORD *)((char *)v1455 + 1);
                }
                v1458 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                *(_DWORD *)v1454 = 30;
                *(_QWORD *)(v1454 + 8) = v1458;
                *(_DWORD *)(v1454 + 16) = 0;
                v1459 = *(_QWORD *)(v1446 + 1416);
                for ( i32 = v1459; ; LODWORD(v1459) = i32 ^ v1459 )
                {
                  i32 >>= 31;
                  if ( !i32 )
                    break;
                }
                *(_DWORD *)(v1454 + 20) = v1459 & 0x7FFFFFFF;
                v1461 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2F0);
                v1462 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                v1054 = (_BYTE *)v1446;
                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x128) = v1461;
                *(_QWORD *)(v1461 + 24) = v1462;
                *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x128) + 32LL) = *(_DWORD *)(v1440 + 80);
                *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x128) + 36LL) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                *(_WORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x128) + 40LL) = v1441;
                v1463 = 0;
                *(_WORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x128) + 42LL) |= 1u;
                v1464 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x128);
                v1465 = *(unsigned __int16 *)(v1464 + 40);
                v93 = v1464 + 48;
                v1466 = v1464 + 48 + (((unsigned int)(v1439 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v1464 + 48;
                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v1466;
                v1467 = v1466 + 24 * v1465;
                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1467;
                if ( (_DWORD)v1439 )
                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v1458 + 3;
                else
                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v1432;
                if ( (_DWORD)v1226 )
                {
                  v93 = (unsigned int)v1226;
                  v1468 = (_DWORD *)(v1466 + 8);
                  v1226 = 1LL;
                  do
                  {
                    v1469 = 2LL;
                    do
                    {
                      *(v1468 - 2) = 0;
                      *(v1468 - 1) = 0;
                      *v1468 = 0x80000000;
                      v1468 += 3;
                      --v1469;
                    }
                    while ( v1469 );
                    --v93;
                  }
                  while ( v93 );
                }
                else
                {
                  v1226 = 1LL;
                }
                if ( v1466 != v1467 )
                {
                  v1470 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                  v1471 = (unsigned int *)v1466;
                  v1472 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                  v1473 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
                  while ( 1 )
                  {
                    v1474 = 0;
                    if ( (*((_DWORD *)v1470 + 9) & 0x2000000) != 0
                      || (v1475 = *(_DWORD *)v1470, *(_DWORD *)v1470 == 1414090313)
                      && *((_DWORD *)v1470 + 1) == 1195525195
                      || v1475 == 1162297680
                      && ((v1476 = *((_WORD *)v1470 + 2), v1476 == 30583) || v1476 == 29303 || v1476 == 30839)
                      || v1475 == 1095914053 && *((_WORD *)v1470 + 2) == 16724 )
                    {
LABEL_2234:
                      v1474 = 1;
                    }
                    else
                    {
                      v1477 = *(char **)(v1446 + 1600);
                      v1478 = 7;
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x418) = *(_QWORD *)(v1446 + 1608);
                      v1479 = v1470 - v1477;
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x420) = *(_QWORD *)(v1446 + 1616);
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x428) = *(_QWORD *)(v1446 + 1624);
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x410) = v1477;
                      while ( 1 )
                      {
                        v1480 = (unsigned __int8)v1477[v1479];
                        v1481 = (unsigned __int8)*v1477++;
                        if ( v1480 != v1481 )
                          break;
                        if ( !--v1478 )
                          goto LABEL_2234;
                      }
                      v1482 = *(__int64 **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x418);
                      v1483 = 8;
                      v1484 = (__int64 *)v1470;
                      while ( 1 )
                      {
                        v1485 = *v1484++;
                        v1486 = *v1482++;
                        if ( v1485 != v1486 )
                          break;
                        v1483 -= 8;
                        if ( v1483 < 8 )
                        {
                          if ( !v1483 )
                            goto LABEL_2234;
                          while ( 1 )
                          {
                            v1487 = *(unsigned __int8 *)v1484;
                            v1484 = (__int64 *)((char *)v1484 + 1);
                            v1488 = *(unsigned __int8 *)v1482;
                            v1482 = (__int64 *)((char *)v1482 + 1);
                            if ( v1487 != v1488 )
                              goto LABEL_2227;
                            if ( !--v1483 )
                              goto LABEL_2234;
                          }
                        }
                      }
LABEL_2227:
                      v1489 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x420);
                      v1490 = v1470 - v1489;
                      v1491 = 4;
                      while ( 1 )
                      {
                        v1492 = (unsigned __int8)v1489[v1490];
                        v1493 = (unsigned __int8)*v1489++;
                        if ( v1492 != v1493 )
                          break;
                        if ( !--v1491 )
                          goto LABEL_2234;
                      }
                      v1494 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x428);
                      v1495 = v1470 - v1494;
                      v1496 = 6;
                      while ( 1 )
                      {
                        v1497 = (unsigned __int8)v1494[v1495];
                        v1498 = (unsigned __int8)*v1494++;
                        if ( v1497 != v1498 )
                          break;
                        if ( !--v1496 )
                          goto LABEL_2234;
                      }
                    }
                    if ( *((int *)v1470 + 9) < 0 )
                      v1474 = 1;
                    if ( v1474
                      && *(_DWORD *)v1470 == 1414090313
                      && *((_DWORD *)v1470 + 1) == 1195525195
                      && (*(_DWORD *)(v1446 + 1680) & 0x10000000) != 0 )
                    {
                      v1474 = 0;
                    }
                    v1499 = *((_DWORD *)v1470 + 2);
                    v93 = *((unsigned int *)v1470 + 3);
                    if ( *((_DWORD *)v1470 + 4) > v1499 )
                      v1499 = *((_DWORD *)v1470 + 4);
                    v1500 = v93 + v1499;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v93;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1500;
                    if ( v1458 == v1473 )
                    {
                      v1501 = 0;
                    }
                    else
                    {
                      v1501 = *v1458;
                      v1463 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) + 4LL);
                    }
                    i33 = 0;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x54) = v93;
                    if ( *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) == v1473 )
                      goto LABEL_2268;
                    v1503 = v1501 < (unsigned int)v93;
                    if ( v1501 > (unsigned int)v93 )
                      break;
LABEL_2269:
                    v1458 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                    if ( v1503 )
                    {
                      v1516 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                    }
                    else
                    {
                      v698 = v1463 <= v1500;
                      v1516 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                      if ( v698 && v1458 != v1473 )
                      {
                        v1517 = v1516[1];
                        if ( v1517 <= v1500 )
                        {
                          v1518 = *(_BYTE **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
                          v93 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                          do
                          {
                            if ( v1516 == v1473 )
                              break;
                            if ( v1474 )
                            {
                              *v1518 = 0x80;
                            }
                            else
                            {
                              v1519 = *(unsigned int *)(v93 + 4);
                              v1520 = (unsigned int *)(v1 + 75);
                              v1521 = v1 + 111;
                              v1522 = *v1516;
                              *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x54) = *v1516;
                              v1523 = v1522 - v1519;
                              v1524 = (_QWORD *)(v1472 + v1519);
                              v1525 = v1472 + v1519 + v1523;
                              do
                              {
                                if ( (unsigned __int64)v1524 < *v1521 + *v1520 && v1525 > *v1521 )
                                  goto LABEL_2293;
                                ++i33;
                                ++v1520;
                                ++v1521;
                              }
                              while ( i33 < 4 );
                              if ( v1523 < 4 )
                              {
LABEL_2293:
                                i33 = 0;
                                **(_BYTE **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = 0x80;
                                goto LABEL_2294;
                              }
                              *(_DWORD *)(v1446 + 1432) += v1523;
                              v1526 = (const char *)(v1472 + v1519);
                              v1527 = *(_DWORD *)(v1446 + 1412);
                              v1528 = *(_QWORD *)(v1446 + 1416);
                              if ( (unsigned __int64)v1524 < v1525 )
                              {
                                do
                                {
                                  _mm_prefetch(v1526, 0);
                                  v1526 += 64;
                                }
                                while ( (unsigned __int64)v1526 < v1525 );
                              }
                              if ( v1523 >= 8 )
                              {
                                v1529 = (unsigned __int64)v1523 >> 3;
                                do
                                {
                                  v1523 -= 8;
                                  v1528 = __ROL8__(*v1524++ ^ v1528, v1527);
                                  --v1529;
                                }
                                while ( v1529 );
                              }
                              for ( i33 = 0; v1523; --v1523 )
                              {
                                v1530 = *(unsigned __int8 *)v1524;
                                v1524 = (_QWORD *)((char *)v1524 + 1);
                                v1528 = __ROL8__(v1530 ^ v1528, v1527);
                              }
                              for ( i34 = v1528; ; LOBYTE(v1528) = i34 ^ v1528 )
                              {
                                i34 >>= 7;
                                if ( !i34 )
                                  break;
                              }
                              **(_BYTE **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v1528 & 0x7F;
LABEL_2294:
                              v1500 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                              v1518 = *(_BYTE **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
                              v1473 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
                              v93 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                            }
                            v93 += 12LL;
                            ++v1518;
                            v1516 += 3;
                            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v93;
                            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v1518;
                            if ( v1516 != v1473 )
                              v1517 = v1516[1];
                          }
                          while ( v1517 <= v1500 );
                          v1471 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v1516;
                        }
                        v1458 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                      }
                    }
                    if ( !v1474 )
                    {
                      v1532 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x54);
                      if ( v1532 != v1500 )
                      {
                        v1471[3] = v1532;
                        v93 = (unsigned __int64)(v1 + 111);
                        v1471[4] = v1500;
                        v1533 = v1500;
                        v1534 = v1471[3];
                        v1535 = (unsigned int *)(v1 + 75);
                        v1536 = v1533 - v1534;
                        v1537 = (_QWORD *)(v1472 + v1534);
                        v1538 = v1472 + v1534 + v1536;
                        while ( (unsigned __int64)v1537 >= *(_QWORD *)v93 + (unsigned __int64)*v1535
                             || v1538 <= *(_QWORD *)v93 )
                        {
                          v93 += 8LL;
                          ++i33;
                          ++v1535;
                          if ( i33 >= 4 )
                          {
                            *(_DWORD *)(v1446 + 1432) += v1536;
                            v1539 = (const char *)(v1472 + v1534);
                            v1540 = *(_DWORD *)(v1446 + 1412);
                            v93 = *(_QWORD *)(v1446 + 1416);
                            if ( (unsigned __int64)v1537 < v1538 )
                            {
                              do
                              {
                                _mm_prefetch(v1539, 0);
                                v1539 += 64;
                              }
                              while ( (unsigned __int64)v1539 < v1538 );
                            }
                            if ( v1536 >= 8 )
                            {
                              v1541 = (unsigned __int64)v1536 >> 3;
                              do
                              {
                                v1536 -= 8;
                                v93 = __ROL8__(*v1537++ ^ v93, v1540);
                                --v1541;
                              }
                              while ( v1541 );
                            }
                            for ( ; v1536; --v1536 )
                            {
                              v1542 = *(unsigned __int8 *)v1537;
                              v1537 = (_QWORD *)((char *)v1537 + 1);
                              v93 = __ROL8__(v1542 ^ v93, v1540);
                            }
                            for ( i35 = v93; ; v93 = (unsigned int)i35 ^ (unsigned int)v93 )
                            {
                              i35 >>= 31;
                              if ( !i35 )
                                break;
                            }
                            LODWORD(v93) = v93 & 0x7FFFFFFF;
                            v1471[5] = v93;
                            break;
                          }
                        }
                        v1473 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
                      }
                    }
                    if ( v1458 != v1473
                      && *v1458 >= *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10)
                      && v1458[1] <= *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) )
                    {
                      if ( v1516 != v1473 )
                      {
                        v1544 = *(_BYTE **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
                        *v1544 = 0x80;
                        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v1544 + 1;
                        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v1516 + 3;
                      }
                      v1458 += 3;
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v1458;
                    }
                    v1471 += 6;
                    v1470 = (char *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) + 40LL);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v1471;
                    v1463 = 0;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v1470;
                    v1226 = 1LL;
                    if ( v1471 == *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) )
                    {
                      v1054 = (_BYTE *)v1446;
                      goto LABEL_2327;
                    }
                  }
                  if ( v1463 <= v1500 && !v1474 )
                  {
                    *v1471 = v93;
                    v1504 = (unsigned int *)(v1 + 75);
                    v1471[1] = v1501;
                    v1505 = v1 + 111;
                    v1506 = *v1471;
                    v1507 = v1501 - v1506;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x54) = v1501;
                    v1508 = (_QWORD *)(v1472 + v1506);
                    v1509 = v1472 + v1506 + v1501 - (unsigned int)v1506;
                    do
                    {
                      if ( (unsigned __int64)v1508 < *v1505 + *v1504 && v1509 > *v1505 )
                      {
                        i33 = 0;
                        goto LABEL_2267;
                      }
                      ++v1505;
                      ++i33;
                      ++v1504;
                    }
                    while ( i33 < 4 );
                    *(_DWORD *)(v1446 + 1432) += v1507;
                    v1510 = (const char *)(v1472 + v1506);
                    v1511 = *(_DWORD *)(v1446 + 1412);
                    v1512 = *(_QWORD *)(v1446 + 1416);
                    if ( (unsigned __int64)v1508 < v1509 )
                    {
                      do
                      {
                        _mm_prefetch(v1510, 0);
                        v1510 += 64;
                      }
                      while ( (unsigned __int64)v1510 < v1509 );
                    }
                    if ( v1507 >= 8 )
                    {
                      v1513 = (unsigned __int64)v1507 >> 3;
                      do
                      {
                        v1507 -= 8;
                        v1512 = __ROL8__(*v1508++ ^ v1512, v1511);
                        --v1513;
                      }
                      while ( v1513 );
                    }
                    for ( i33 = 0; v1507; --v1507 )
                    {
                      v1514 = *(unsigned __int8 *)v1508;
                      v1508 = (_QWORD *)((char *)v1508 + 1);
                      v1512 = __ROL8__(v1514 ^ v1512, v1511);
                    }
                    for ( i36 = v1512; ; LODWORD(v1512) = i36 ^ v1512 )
                    {
                      i36 >>= 31;
                      if ( !i36 )
                        break;
                    }
                    v1471[2] = v1512 & 0x7FFFFFFF;
LABEL_2267:
                    v1473 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
                    v93 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                    v1500 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                  }
LABEL_2268:
                  v1503 = v1501 < (unsigned int)v93;
                  goto LABEL_2269;
                }
LABEL_2327:
                v85 = (unsigned __int64)v1054;
                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8) = v1054;
                v1270 = 0;
LABEL_2048:
                *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = v1270;
                goto LABEL_2049;
              }
LABEL_1952:
              v1270 = -1073741670;
              goto LABEL_2048;
            }
          }
          if ( (*((_DWORD *)v1054 + 420) & 0x200000) == 0 )
          {
            v1912 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
            *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x270) = 324608;
            KeBugCheckEx(
              __ROR4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x270), 170),
              0xAuLL,
              v1912,
              1uLL,
              0LL);
          }
LABEL_2162:
          if ( !*((_DWORD *)v1054 + 386) )
          {
            *((_QWORD *)v1054 + 194) = v1054 - 0x5C5FC0A76E374B18LL;
            v1442 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
            *((_QWORD *)v1054 + 195) = 0LL;
            *((_QWORD *)v1054 + 196) = 271LL;
            *((_QWORD *)v1054 + 197) = v1442;
            goto LABEL_2146;
          }
        }
LABEL_2047:
        v1270 = -1073741701;
        goto LABEL_2048;
      }
      v1418 = *(_QWORD *)(v1416 + 152);
      v1419 = (*((__int64 (__fastcall **)(unsigned __int64, unsigned __int64, __int64, unsigned __int64))v1054 + 57))(
                v1417,
                v93,
                v1378,
                v1226);
      if ( v1419 )
      {
        v1420 = *(unsigned int *)(v1419 + 80);
        *(_DWORD *)(v1416 + 184) |= 2u;
        v1421 = v1417 + v1420;
        v1422 = *(_QWORD **)(v1418 + 112);
        if ( (unsigned __int64)v1422 >= v1417 && (unsigned __int64)v1422 < v1421 )
        {
          *(_QWORD *)(v1416 + 168) = *v1422;
          *(_DWORD *)(v1416 + 184) |= 4u;
        }
        v1423 = *(_QWORD **)(v1418 + 120);
        if ( (unsigned __int64)v1423 >= v1417 && (unsigned __int64)v1423 < v1421 )
        {
          *(_QWORD *)(v1416 + 176) = *v1423;
          *(_DWORD *)(v1416 + 184) |= 8u;
        }
        goto LABEL_2140;
      }
LABEL_2110:
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = -1073741670;
      goto LABEL_2051;
    }
    v1143 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
    v1196 = *((unsigned int *)v1148 + 341);
    v1197 = v1196 + 16 * *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) + 48;
    if ( v1197 <= *((_DWORD *)v1148 + 453) )
    {
      v85 = (unsigned __int64)v1148;
      *((_DWORD *)v1148 + 341) = v1197;
      goto LABEL_1808;
    }
    v85 = sub_140236718(v1148, v1197, *((unsigned int *)v1148 + 397));
    if ( v85 )
    {
      v1198 = *((_DWORD *)v1148 + 420);
      if ( (v1198 & 4) == 0 )
      {
        v1199 = *((_DWORD *)v1148 + 341);
        v1200 = *((_QWORD *)v1148 + 167);
        v1201 = (v1198 & 0x20000000) != 0 ? *((_DWORD *)v1148 + 397) : 0;
        if ( v1199 >= 8 )
        {
          v1202 = (unsigned __int64)v1199 >> 3;
          do
          {
            *(_QWORD *)v1148 = 0LL;
            v1199 -= 8;
            v1148 += 8;
            --v1202;
          }
          while ( v1202 );
        }
        for ( ; v1199; --v1199 )
          *v1148++ = 0;
        v1203 = *(_DWORD *)(v85 + 1588);
        *(_DWORD *)(v85 + 1588) = v1201;
        if ( v1201 == 3 )
        {
          (*(void (__fastcall **)(__int64))(v85 + 800))(v1200);
        }
        else
        {
          v1204 = 0;
          if ( (*(_DWORD *)(v85 + 1680) & 0x10000000) == 0 )
            v1204 = v1201;
          if ( v1204 )
            (*(void (__fastcall **)(__int64, _QWORD))(v85 + 504))(v1200 - 8, *(_QWORD *)(v1200 - 8));
          else
            (*(void (__fastcall **)(__int64))(v85 + 248))(v1200);
        }
        *(_DWORD *)(v85 + 1588) = v1203;
      }
      *(_DWORD *)(v85 + 1680) &= ~4u;
      v1143 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
LABEL_1808:
      ++*(_DWORD *)(v85 + 1404);
      v1206 = v85 + v1196;
      v1207 = 48;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2E8) = v85 + v1196;
      v1208 = (_QWORD *)(v85 + v1196);
      v1209 = 6LL;
      do
      {
        *v1208 = 0LL;
        v1207 -= 8;
        ++v1208;
        --v1209;
      }
      while ( v1209 );
      for ( ; v1207; --v1207 )
      {
        *(_BYTE *)v1208 = 0;
        v1208 = (_QWORD *)((char *)v1208 + 1);
      }
      *(_DWORD *)v1206 = 10;
      *(_QWORD *)(v1206 + 8) = 0LL;
      *(_DWORD *)(v1206 + 16) = 0;
      v1210 = *(_QWORD *)(v85 + 1416);
      for ( i37 = v1210; ; LODWORD(v1210) = i37 ^ v1210 )
      {
        i37 >>= 31;
        if ( !i37 )
          break;
      }
      v1148 = (_BYTE *)v85;
      *(_DWORD *)(v1206 + 20) = v1210 & 0x7FFFFFFF;
      v1054 = (_BYTE *)v85;
      v1212 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2E8);
      v93 = 0LL;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x250) = v1212;
      *(_DWORD *)(v1212 + 24) = 1;
      v1213 = 0;
      *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x250) + 28LL) = v1143;
      v1214 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x250);
      v1215 = v1214 + 12;
      if ( *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) + 16LL) )
      {
        do
        {
          v1216 = *v1 + ((__int64)*(int *)(*v1 + 4LL * v1213) >> 4);
          if ( (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD))(v85 + 552))(v1216, v1 + 95, 0LL) )
          {
            v1143 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
          }
          else
          {
            v1217 = 4;
            v1218 = (unsigned __int8 *)v1216;
            *(_DWORD *)(v85 + 1432) += 4;
            v1219 = (const char *)v1216;
            v93 = *(_QWORD *)(v85 + 1416);
            if ( v1216 < (unsigned __int64)(v1216 + 4) )
            {
              do
              {
                _mm_prefetch(v1219, 0);
                v1219 += 64;
              }
              while ( (unsigned __int64)v1219 < v1216 + 4 );
            }
            do
            {
              v1220 = *v1218++;
              v93 = __ROL8__(v1220 ^ v93, *(_DWORD *)(v85 + 1412));
              --v1217;
            }
            while ( v1217 );
            for ( i38 = v93; ; v93 = (unsigned int)i38 ^ (unsigned int)v93 )
            {
              i38 >>= 31;
              if ( !i38 )
                break;
            }
            v1222 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
            *v1215 ^= (v93 ^ *v1215) & 0x7FFFFFFF;
            v1215[1] = 4;
            *((_QWORD *)v1215 + 1) = v1216;
            v1215 += 4;
            v128 = v1222 == 1;
            v1143 = (unsigned int)(v1222 - 1);
            *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v1143;
            if ( v128 )
              goto LABEL_1824;
          }
          ++v1213;
        }
        while ( v1213 < *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) + 16LL) );
        v1214 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x250);
      }
      if ( (_DWORD)v1143 )
      {
        if ( !*(_DWORD *)(v85 + 1544) )
        {
          *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
          if ( v1214 )
            *(_QWORD *)(v85 + 1560) = (char *)v1214 - 0x4C48B4211BBACBEBLL;
          else
            *(_QWORD *)(v85 + 1560) = 0LL;
          if ( v1214 )
            *(_QWORD *)(v85 + 1568) = *v1214;
          else
            *(_QWORD *)(v85 + 1568) = 0LL;
          *(_QWORD *)(v85 + 1576) = 0LL;
          *(_DWORD *)(v85 + 1544) = 1;
        }
        goto LABEL_2346;
      }
      goto LABEL_1824;
    }
LABEL_1806:
    v1205 = -1073741267;
    goto LABEL_1825;
  }
LABEL_2382:
  if ( (*(_DWORD *)(v85 + 1680) & 0x2000000) != 0 )
  {
    v1565 = *(_QWORD *)(v85 + 1688);
    if ( (*(unsigned int (__fastcall **)(__int64, unsigned __int64))(v85 + 840))(v1565, v93) && !*(_DWORD *)(v85 + 1544) )
    {
      *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v85 + 1560) = 0LL;
      *(_QWORD *)(v85 + 1568) = 272LL;
      *(_QWORD *)(v85 + 1576) = 0LL;
      *(_DWORD *)(v85 + 1544) = 1;
    }
    (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(), unsigned __int64, _QWORD))(v85 + 832))(
      v1565,
      sub_140237994,
      v85,
      0LL);
  }
  if ( (*(_DWORD *)(v85 + 1680) & 0x40000) != 0 )
  {
    v1566 = __rdtsc();
    v1567 = (__ROR8__(v1566, 3) ^ v1566) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x640) = *((_QWORD *)&v1567 + 1);
    v1568 = v1567 ^ *((_QWORD *)&v1567 + 1);
    v93 = ((unsigned __int64)v1567 ^ *((_QWORD *)&v1567 + 1)) / 0xA;
    if ( v1568 - 10 * v93 < 2 && !*(_DWORD *)(v85 + 1544) )
    {
      *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v85 + 1560) = 0LL;
      *(_QWORD *)(v85 + 1568) = 264LL;
      *(_QWORD *)(v85 + 1576) = 0LL;
      *(_DWORD *)(v85 + 1544) = 1;
    }
  }
  if ( (*(_DWORD *)(v85 + 1680) & 0x8000) != 0 || !*(_DWORD *)(v85 + 1544) )
  {
    v1569 = *(unsigned int *)(v85 + 1824);
    if ( (_DWORD)v1569 )
    {
      v1570 = (int *)(v85 + v1569);
      v1571 = *(_QWORD **)(v85 + v1569 + 8);
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v85 + v1569;
      if ( v1571 )
      {
        if ( *v1570 != 11 || *(_QWORD *)(v85 + 1672) )
        {
          v1572 = (unsigned int)v1570[4];
          v1573 = (const char *)v1571;
          *(_DWORD *)(v85 + 1432) += v1572;
          v1574 = *(_DWORD *)(v85 + 1412);
          v93 = *(_QWORD *)(v85 + 1416);
          if ( v1571 < (_QWORD *)((char *)v1571 + v1572) )
          {
            do
            {
              _mm_prefetch(v1573, 0);
              v1573 += 64;
            }
            while ( v1573 < (const char *)v1571 + v1572 );
          }
          if ( (unsigned int)v1572 >= 8 )
          {
            v1575 = v1572 >> 3;
            do
            {
              v93 = __ROL8__(*v1571++ ^ v93, v1574);
              LODWORD(v1572) = v1572 - 8;
              --v1575;
            }
            while ( v1575 );
          }
          for ( ; (_DWORD)v1572; LODWORD(v1572) = v1572 - 1 )
          {
            v1576 = *(unsigned __int8 *)v1571;
            v1571 = (_QWORD *)((char *)v1571 + 1);
            v93 = __ROL8__(v1576 ^ v93, v1574);
          }
          for ( i39 = v93; ; v93 = (unsigned int)i39 ^ (unsigned int)v93 )
          {
            i39 >>= 31;
            if ( !i39 )
              break;
          }
          v1578 = (unsigned int)v1570[5];
          LODWORD(v93) = v93 & 0x7FFFFFFF;
          if ( (_DWORD)v93 != (_DWORD)v1578 )
          {
            if ( !*(_DWORD *)(v85 + 1544) )
              *(_QWORD *)(*(_QWORD *)(v85 + 1176) + 24LL) = v1578 ^ (unsigned int)v93;
            v1579 = *((_QWORD *)v1570 + 1);
            if ( !*(_DWORD *)(v85 + 1544) )
            {
              *(_QWORD *)(v85 + 1552) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1560) = (char *)v1570 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1568) = *v1570;
              *(_QWORD *)(v85 + 1576) = v1579;
              *(_DWORD *)(v85 + 1544) = 1;
            }
          }
        }
        (*(void (__fastcall **)(_QWORD, unsigned __int64))(v85 + 248))(*((_QWORD *)v1570 + 3), v93);
        *((_QWORD *)v1570 + 1) = 0LL;
        v1570[4] = 0;
        v1580 = *(_QWORD *)(v85 + 1416);
        for ( i40 = v1580; ; LODWORD(v1580) = i40 ^ v1580 )
        {
          i40 >>= 31;
          if ( !i40 )
            break;
        }
        v1570[5] = v1580 & 0x7FFFFFFF;
      }
      v1582 = __rdtsc();
      v1583 = (__ROR8__(v1582, 3) ^ v1582) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x4A0) = *((_QWORD *)&v1583 + 1);
      v1584 = v1583 ^ *((_QWORD *)&v1583 + 1);
      v93 = ((unsigned __int64)v1583 ^ *((_QWORD *)&v1583 + 1)) / 3;
      if ( v1584 == 3 * v93 )
      {
        v1585 = (__int64 *)(v1570 + 6);
        v1586 = *(unsigned int *)(v85 + 1408);
        v128 = (*(_DWORD *)(v85 + 1680) & 0x10000000) == 0;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1570 + 6;
        v1587 = __rdtsc();
        v1588 = __ROR8__(v1587, 3);
        v1589 = (v1588 ^ v1587) * (unsigned __int128)0x7010008004002001uLL;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x5E8) = *((_QWORD *)&v1589 + 1);
        v1590 = ((unsigned __int16)(8193 * (v1588 ^ v1587)) ^ WORD4(v1589)) & 0x7FF;
        v1591 = __rdtsc();
        v1592 = (__ROR8__(v1591, 3) ^ v1591) * (unsigned __int128)0x7010008004002001uLL;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x4B0) = *((_QWORD *)&v1592 + 1);
        v1593 = (*((_QWORD *)&v1592 + 1) ^ (unsigned __int64)v1592) % (unsigned int)(v1590 + 1);
        v1594 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v85 + 240))(
                  !v128 ? 0x200 : 0,
                  (unsigned int)(v1590 + 1872),
                  v1586);
        v1595 = v1594;
        if ( !v1594 )
        {
          ++*(_DWORD *)(v85 + 1808);
          goto LABEL_2492;
        }
        v1596 = v1593;
        v1597 = (unsigned __int64 *)v1594;
        if ( (unsigned int)v1593 >= 8 )
        {
          v1598 = (unsigned __int64)(unsigned int)v1593 >> 3;
          do
          {
            v1596 -= 8;
            v1599 = __rdtsc();
            v1600 = (__ROR8__(v1599, 3) ^ v1599) * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x670) = *((_QWORD *)&v1600 + 1);
            v93 = v1600 ^ *((_QWORD *)&v1600 + 1);
            *v1597++ = v93;
            --v1598;
          }
          while ( v1598 );
          v1570 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
          v1585 = *(__int64 **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
        }
        if ( v1596 )
        {
          v1601 = __rdtsc();
          v1602 = __ROR8__(v1601, 3) ^ v1601;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x4C0) = (v1602
                                                                                  * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v93 = (0x7010008004002001LL * v1602) ^ ((v1602 * (unsigned __int128)0x7010008004002001uLL) >> 64);
          do
          {
            *(_BYTE *)v1597 = v93;
            v1597 = (unsigned __int64 *)((char *)v1597 + 1);
            v93 >>= 8;
            --v1596;
          }
          while ( v1596 );
        }
        v1603 = v1590 - v1593;
        v1604 = v1595 + (unsigned int)v1593;
        v1605 = (unsigned __int64 *)(v1604 + 1872);
        if ( v1603 >= 8 )
        {
          v1606 = (unsigned __int64)v1603 >> 3;
          do
          {
            v1603 -= 8;
            v1607 = __rdtsc();
            v1608 = (__ROR8__(v1607, 3) ^ v1607) * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x5F8) = *((_QWORD *)&v1608 + 1);
            v93 = v1608 ^ *((_QWORD *)&v1608 + 1);
            *v1605++ = v93;
            --v1606;
          }
          while ( v1606 );
          v1585 = (__int64 *)(v1570 + 6);
        }
        if ( v1603 )
        {
          v1609 = __rdtsc();
          v1610 = __ROR8__(v1609, 3) ^ v1609;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x4D0) = (v1610
                                                                                  * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v93 = (0x7010008004002001LL * v1610) ^ ((v1610 * (unsigned __int128)0x7010008004002001uLL) >> 64);
          do
          {
            *(_BYTE *)v1605 = v93;
            v1605 = (unsigned __int64 *)((char *)v1605 + 1);
            v93 >>= 8;
            --v1603;
          }
          while ( v1603 );
        }
        if ( v1585 )
          *v1585 = v1595;
        if ( v1604 )
        {
          *((_QWORD *)v1570 + 1) = v1604;
          v1570[4] = 1872;
          v1611 = 1872;
          v1612 = (char *)v85;
          v1613 = (_QWORD *)(v1595 + (unsigned int)v1593);
          v1614 = 234LL;
          do
          {
            v1611 -= 8;
            *v1613 = *(_QWORD *)v1612;
            v1612 += 8;
            ++v1613;
            --v1614;
          }
          while ( v1614 );
          for ( ; v1611; --v1611 )
          {
            v1615 = *v1612++;
            *(_BYTE *)v1613 = v1615;
            v1613 = (_QWORD *)((char *)v1613 + 1);
          }
          *(_DWORD *)(v1604 + 1680) |= 0x80000u;
          *(_DWORD *)(v1604 + 1364) = 1872;
          *(_DWORD *)(v1604 + 1400) = 1872;
          v1616 = *(_DWORD *)(v1604 + 1680) & 0xFFFFFFFD;
          *(_DWORD *)(v1604 + 1680) = v1616;
          if ( (v1616 & 2) != 0 )
            v1617 = *(_DWORD *)(v1604 + 1364);
          else
            v1617 = *(_DWORD *)(v1604 + 1400);
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74) = (v1616 >> 19) & 1;
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB4) = (v1616 >> 9) & 1;
          v1618 = (v1616 >> 8) & 1;
          *v1 = *(_QWORD *)(v1604 + 1024);
          v1619 = (unsigned int)(v1617 - 200) >> 3;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = *(_QWORD *)(v1604 + 1224);
          *(_DWORD *)(v1604 + 196) = v1619;
          v1620 = (_QWORD *)(v1604 + 1288);
          v1621 = v1 + 223;
          v1622 = __rdtsc();
          v1623 = 32;
          v1624 = (__ROR8__(v1622, 3) ^ v1622) * (unsigned __int128)0x7010008004002001uLL;
          v1625 = (char *)(v1604 + 1288);
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x650) = *((_QWORD *)&v1624 + 1);
          v1626 = v1624 ^ *((_QWORD *)&v1624 + 1);
          v1627 = 4LL;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = *(_QWORD *)(v1604 + 1320);
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = *(_DWORD *)(v1604 + 1432);
          do
          {
            v1623 -= 8;
            *v1621 = *(_QWORD *)v1625;
            v1625 += 8;
            ++v1621;
            --v1627;
          }
          while ( v1627 );
          for ( ; v1623; --v1623 )
          {
            v1628 = *v1625++;
            *(_BYTE *)v1621 = v1628;
            v1621 = (_QWORD *)((char *)v1621 + 1);
          }
          v1629 = (_QWORD *)(v1604 + 1288);
          *(_QWORD *)(v1604 + 1320) = 0LL;
          v1630 = 4LL;
          *(_DWORD *)(v1604 + 1432) = 0;
          v1631 = 32;
          do
          {
            *v1629 = 0LL;
            v1631 -= 8;
            ++v1629;
            --v1630;
          }
          while ( v1630 );
          for ( ; v1631; --v1631 )
          {
            *(_BYTE *)v1629 = 0;
            v1629 = (_QWORD *)((char *)v1629 + 1);
          }
          v1632 = (_QWORD *)v1604;
          *(_DWORD *)(v1604 + 1432) += *(_DWORD *)(v1604 + 1364);
          v1633 = (const char *)v1604;
          v1634 = *(unsigned int *)(v1604 + 1364);
          v1635 = *(_DWORD *)(v1604 + 1412);
          v1636 = *(_QWORD *)(v1604 + 1416);
          if ( v1604 < v1604 + v1634 )
          {
            do
            {
              _mm_prefetch(v1633, 0);
              v1633 += 64;
            }
            while ( (unsigned __int64)v1633 < v1604 + v1634 );
          }
          if ( (unsigned int)v1634 >= 8 )
          {
            v1637 = v1634 >> 3;
            do
            {
              v1636 = __ROL8__(*v1632++ ^ v1636, v1635);
              LODWORD(v1634) = v1634 - 8;
              --v1637;
            }
            while ( v1637 );
          }
          for ( ; (_DWORD)v1634; LODWORD(v1634) = v1634 - 1 )
          {
            v1638 = *(unsigned __int8 *)v1632;
            v1632 = (_QWORD *)((char *)v1632 + 1);
            v1636 = __ROL8__(v1638 ^ v1636, v1635);
          }
          v1639 = (char *)(v1 + 223);
          v1640 = 32;
          *(_QWORD *)(v1604 + 1320) = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
          *(_DWORD *)(v1604 + 1432) += *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
          v1641 = 4LL;
          do
          {
            v1640 -= 8;
            *v1620 = *(_QWORD *)v1639;
            v1639 += 8;
            ++v1620;
            --v1641;
          }
          while ( v1641 );
          v1642 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
          if ( v1640 )
          {
            do
            {
              v1643 = *v1639++;
              *(_BYTE *)v1620 = v1643;
              v1620 = (_QWORD *)((char *)v1620 + 1);
              --v1640;
            }
            while ( v1640 );
            v1642 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
          }
          *(_QWORD *)(v1604 + 1320) = v1636;
          if ( (*(_DWORD *)(v1604 + 1680) & 0x40000000) != 0 )
            goto LABEL_2481;
          v1644 = (_QWORD *)v1604;
          v1645 = 0;
          do
          {
            *v1644 ^= v1626;
            ++v1645;
            ++v1644;
          }
          while ( (unsigned __int64)v1645 < 0x19 );
          if ( v1619 )
          {
            v1646 = &v1644[v1619 - 1];
            do
            {
              *v1646 ^= v1626;
              v1626 = __ROR8__(v1626, v1619);
              --v1646;
              --v1619;
            }
            while ( v1619 );
          }
          if ( *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74) )
          {
            v1647 = __rdtsc();
            v1648 = (__ROR8__(v1647, 3) ^ v1647) * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x4E0) = *((_QWORD *)&v1648 + 1);
            if ( ((unsigned __int64)v1648 ^ *((_QWORD *)&v1648 + 1)) != 3
                                                                      * (((unsigned __int64)v1648 ^ *((_QWORD *)&v1648 + 1))
                                                                       / 3) )
              goto LABEL_2481;
          }
          else if ( v1618 )
          {
LABEL_2481:
            v1663 = *(_QWORD **)(v1642 + 8);
            v1664 = *(unsigned int *)(v1642 + 16);
            v1665 = (const char *)v1663;
            *(_DWORD *)(v85 + 1432) += v1664;
            v1666 = *(_DWORD *)(v85 + 1412);
            v93 = *(_QWORD *)(v85 + 1416);
            if ( v1663 < (_QWORD *)((char *)v1663 + v1664) )
            {
              do
              {
                _mm_prefetch(v1665, 0);
                v1665 += 64;
              }
              while ( v1665 < (const char *)v1663 + v1664 );
            }
            if ( (unsigned int)v1664 >= 8 )
            {
              v1667 = v1664 >> 3;
              do
              {
                v93 = __ROL8__(*v1663++ ^ v93, v1666);
                LODWORD(v1664) = v1664 - 8;
                --v1667;
              }
              while ( v1667 );
            }
            for ( ; (_DWORD)v1664; LODWORD(v1664) = v1664 - 1 )
            {
              v1668 = *(unsigned __int8 *)v1663;
              v1663 = (_QWORD *)((char *)v1663 + 1);
              v93 = __ROL8__(v1668 ^ v93, v1666);
            }
            for ( i41 = v93; ; v93 = (unsigned int)i41 ^ (unsigned int)v93 )
            {
              i41 >>= 31;
              if ( !i41 )
                break;
            }
            LODWORD(v93) = v93 & 0x7FFFFFFF;
            *(_DWORD *)(v1642 + 20) = v93;
            goto LABEL_2492;
          }
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10B) = 1;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x110) = 3;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x108) = 0;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x109) = 12;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10E) = 4;
          v1649 = *v1;
          v1650 = 0;
          v1651 = 0LL;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10D) = 2;
          v1652 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB4);
          v1653 = (__int64 *)v1604;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x111) = 5;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x114) = 6;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10F) = 7;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x115) = 8;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x112) = 9;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x116) = 10;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10C) = 11;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x117) = 13;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x113) = 14;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10A) = 15;
          v1654 = __ROR8__(v1604, v1604);
          do
          {
            v1655 = *v1653;
            v1656 = 16LL;
            do
            {
              v1655 = __ROR8__(
                        *(unsigned __int8 *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                           + 0x108
                                           + (*(_BYTE *)v1653 & 0xF)) | v1655 & 0xFFFFFFFFFFFFFFF0uLL,
                        4);
              *v1653 = v1655;
              --v1656;
            }
            while ( v1656 );
            v1657 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
            v1658 = v1655 - v1651;
            *v1653 = v1658;
            if ( v1652 )
              v1659 = v1654 ^ v1658;
            else
              v1659 = v1657 ^ __ROR8__(v1654 ^ _byteswap_uint64(v1649 ^ v1658), v1657);
            *v1653 = v1659;
            v1660 = v1659;
            v1651 += v1604;
            v1661 = v1650 * (200 - v1650);
            ++v1650;
            v1662 = __ROL8__(__ROR8__(v1661, ~v1660) ^ v1654, *(_DWORD *)v1653++);
            v1654 = v1604 + v1662;
          }
          while ( v1650 < 0x19 );
          v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
          v1642 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
          goto LABEL_2481;
        }
      }
    }
  }
LABEL_2492:
  v1670 = *(_DWORD *)(v85 + 1680);
  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x54) = 0;
  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = 0LL;
  if ( (v1670 & 0x40000000) == 0 )
  {
    v1671 = a1;
    if ( v85 != a1 )
    {
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = *(_QWORD *)(v85 + 1336);
      if ( (v1670 & 2) != 0 )
        v1756 = *(_DWORD *)(v85 + 1364);
      else
        v1756 = *(_DWORD *)(v85 + 1400);
      v1757 = v1670 >> 9;
      v1758 = (v1670 >> 19) & 1;
      v1759 = (v1670 >> 8) & 1;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = *(_QWORD *)(v85 + 1024);
      v1760 = *(_QWORD *)(v85 + 1224);
      v1761 = (unsigned int)(v1756 - 200) >> 3;
      *(_DWORD *)(v85 + 196) = v1761;
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1757 & 1;
      *v1 = v1760;
      v1762 = (_QWORD *)(v85 + 1288);
      v1763 = v1 + 235;
      v1764 = __rdtsc();
      v1765 = (__ROR8__(v1764, 3) ^ v1764) * (unsigned __int128)0x7010008004002001uLL;
      v1766 = (char *)(v85 + 1288);
      v1767 = *((_QWORD *)&v1765 + 1);
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x690) = *((_QWORD *)&v1765 + 1);
      v1768 = 32;
      v1769 = v1765 ^ v1767;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = *(_QWORD *)(v85 + 1320);
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = *(_DWORD *)(v85 + 1432);
      v1770 = 4LL;
      do
      {
        v1768 -= 8;
        *v1763 = *(_QWORD *)v1766;
        v1766 += 8;
        ++v1763;
        --v1770;
      }
      while ( v1770 );
      for ( ; v1768; --v1768 )
      {
        v1771 = *v1766++;
        *(_BYTE *)v1763 = v1771;
        v1763 = (_QWORD *)((char *)v1763 + 1);
      }
      v1772 = 32;
      *(_QWORD *)(v85 + 1320) = 0LL;
      *(_DWORD *)(v85 + 1432) = 0;
      v1773 = (_QWORD *)(v85 + 1288);
      v1774 = 4LL;
      do
      {
        *v1773 = 0LL;
        v1772 -= 8;
        ++v1773;
        --v1774;
      }
      while ( v1774 );
      for ( ; v1772; --v1772 )
      {
        *(_BYTE *)v1773 = 0;
        v1773 = (_QWORD *)((char *)v1773 + 1);
      }
      v1775 = (_QWORD *)v85;
      *(_DWORD *)(v85 + 1432) += *(_DWORD *)(v85 + 1364);
      v1776 = (const char *)v85;
      v1777 = *(unsigned int *)(v85 + 1364);
      v1778 = *(_DWORD *)(v85 + 1412);
      v1779 = *(_QWORD *)(v85 + 1416);
      if ( v85 < v85 + v1777 )
      {
        do
        {
          _mm_prefetch(v1776, 0);
          v1776 += 64;
        }
        while ( (unsigned __int64)v1776 < v85 + v1777 );
      }
      if ( (unsigned int)v1777 >= 8 )
      {
        v1780 = v1777 >> 3;
        do
        {
          v1779 = __ROL8__(*v1775++ ^ v1779, v1778);
          LODWORD(v1777) = v1777 - 8;
          --v1780;
        }
        while ( v1780 );
      }
      for ( ; (_DWORD)v1777; LODWORD(v1777) = v1777 - 1 )
      {
        v1781 = *(unsigned __int8 *)v1775;
        v1775 = (_QWORD *)((char *)v1775 + 1);
        v1779 = __ROL8__(v1781 ^ v1779, v1778);
      }
      v1782 = (char *)(v1 + 235);
      *(_QWORD *)(v85 + 1320) = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
      v1783 = 4LL;
      *(_DWORD *)(v85 + 1432) += *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
      v1784 = 32;
      do
      {
        v1784 -= 8;
        *v1762 = *(_QWORD *)v1782;
        v1782 += 8;
        ++v1762;
        --v1783;
      }
      while ( v1783 );
      for ( ; v1784; --v1784 )
      {
        v1785 = *v1782++;
        *(_BYTE *)v1762 = v1785;
        v1762 = (_QWORD *)((char *)v1762 + 1);
      }
      *(_QWORD *)(v85 + 1320) = v1779;
      if ( (*(_DWORD *)(v85 + 1680) & 0x40000000) != 0 )
        goto LABEL_2605;
      v1786 = (_QWORD *)v85;
      v1787 = 0;
      do
      {
        *v1786 ^= v1769;
        ++v1787;
        ++v1786;
      }
      while ( (unsigned __int64)v1787 < 0x19 );
      if ( v1761 )
      {
        v1788 = &v1786[v1761 - 1];
        do
        {
          *v1788 ^= v1769;
          v1769 = __ROR8__(v1769, v1761);
          --v1788;
          --v1761;
        }
        while ( v1761 );
      }
      if ( v1758 )
      {
        v1789 = __rdtsc();
        v1790 = (__ROR8__(v1789, 3) ^ v1789) * (unsigned __int128)0x7010008004002001uLL;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x500) = *((_QWORD *)&v1790 + 1);
        if ( (*((_QWORD *)&v1790 + 1) ^ (unsigned __int64)v1790) != 3
                                                                  * ((*((_QWORD *)&v1790 + 1) ^ (unsigned __int64)v1790)
                                                                   / 3) )
          goto LABEL_2605;
      }
      else if ( v1759 )
      {
        goto LABEL_2605;
      }
      v1791 = *v1;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xE0) = 3;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xDB) = 1;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD9) = 12;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xDE) = 4;
      v1792 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
      v1793 = (__int64 *)v85;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8) = 0;
      v1794 = 0;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xDD) = 2;
      v1795 = 0LL;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xE1) = 5;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xE4) = 6;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xDF) = 7;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xE5) = 8;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xE2) = 9;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xE6) = 10;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xDC) = 11;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xE7) = 13;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xE3) = 14;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xDA) = 15;
      v1796 = __ROR8__(v85, v85);
      do
      {
        v1797 = *v1793;
        v1798 = 16LL;
        do
        {
          v1797 = __ROR8__(
                    *(unsigned __int8 *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                       + 0xD8
                                       + (*(_BYTE *)v1793 & 0xF)) | v1797 & 0xFFFFFFFFFFFFFFF0uLL,
                    4);
          *v1793 = v1797;
          --v1798;
        }
        while ( v1798 );
        v1799 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
        v1800 = v1797 - v1795;
        *v1793 = v1800;
        if ( v1799 )
          v1801 = v1796 ^ v1800;
        else
          v1801 = v1791 ^ __ROR8__(v1796 ^ _byteswap_uint64(v1792 ^ v1800), v1791);
        *v1793 = v1801;
        v1802 = v1801;
        v1795 += v85;
        v1803 = v1794 * (200 - v1794);
        ++v1794;
        v1804 = __ROL8__(__ROR8__(v1803, ~v1802) ^ v1796, *(_DWORD *)v1793++);
        v1796 = v85 + v1804;
      }
      while ( v1794 < 0x19 );
      goto LABEL_2605;
    }
    if ( (v1670 & 0x8000) != 0 || !*(_DWORD *)(v85 + 1544) )
    {
      v1672 = sub_140236718(a1, *(unsigned int *)(a1 + 1364), *(unsigned int *)(a1 + 1588));
      v85 = v1672;
      if ( v1672 )
      {
        v1673 = *(_DWORD *)(v1672 + 1680);
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = *(_QWORD *)(v1672 + 1336);
        if ( (v1673 & 2) != 0 )
          v1674 = *(_DWORD *)(v1672 + 1364);
        else
          v1674 = *(_DWORD *)(v1672 + 1400);
        v1675 = v1673 >> 9;
        v1676 = (v1673 >> 19) & 1;
        v1677 = (v1673 >> 8) & 1;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = *(_QWORD *)(v1672 + 1024);
        v1678 = *(_QWORD *)(v1672 + 1224);
        v1679 = (unsigned int)(v1674 - 200) >> 3;
        *(_DWORD *)(v85 + 196) = v1679;
        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1675 & 1;
        *v1 = v1678;
        v1680 = (_QWORD *)(v85 + 1288);
        v1681 = v1 + 231;
        v1682 = __rdtsc();
        v1683 = (__ROR8__(v1682, 3) ^ v1682) * (unsigned __int128)0x7010008004002001uLL;
        v1684 = (char *)(v85 + 1288);
        v1685 = *((_QWORD *)&v1683 + 1);
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x608) = *((_QWORD *)&v1683 + 1);
        v1686 = 32;
        v1687 = v1683 ^ v1685;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = *(_QWORD *)(v85 + 1320);
        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = *(_DWORD *)(v85 + 1432);
        v1688 = 4LL;
        do
        {
          v1686 -= 8;
          *v1681 = *(_QWORD *)v1684;
          v1684 += 8;
          ++v1681;
          --v1688;
        }
        while ( v1688 );
        for ( ; v1686; --v1686 )
        {
          v1689 = *v1684++;
          *(_BYTE *)v1681 = v1689;
          v1681 = (_QWORD *)((char *)v1681 + 1);
        }
        v1690 = 32;
        *(_QWORD *)(v85 + 1320) = 0LL;
        *(_DWORD *)(v85 + 1432) = 0;
        v1691 = (_QWORD *)(v85 + 1288);
        v1692 = 4LL;
        do
        {
          *v1691 = 0LL;
          v1690 -= 8;
          ++v1691;
          --v1692;
        }
        while ( v1692 );
        for ( ; v1690; --v1690 )
        {
          *(_BYTE *)v1691 = 0;
          v1691 = (_QWORD *)((char *)v1691 + 1);
        }
        v1693 = (_QWORD *)v85;
        *(_DWORD *)(v85 + 1432) += *(_DWORD *)(v85 + 1364);
        v1694 = (const char *)v85;
        v1695 = *(unsigned int *)(v85 + 1364);
        v1696 = *(_DWORD *)(v85 + 1412);
        v1697 = *(_QWORD *)(v85 + 1416);
        if ( v85 < v85 + v1695 )
        {
          do
          {
            _mm_prefetch(v1694, 0);
            v1694 += 64;
          }
          while ( (unsigned __int64)v1694 < v85 + v1695 );
        }
        if ( (unsigned int)v1695 >= 8 )
        {
          v1698 = v1695 >> 3;
          do
          {
            v1697 = __ROL8__(*v1693++ ^ v1697, v1696);
            LODWORD(v1695) = v1695 - 8;
            --v1698;
          }
          while ( v1698 );
        }
        for ( ; (_DWORD)v1695; LODWORD(v1695) = v1695 - 1 )
        {
          v1699 = *(unsigned __int8 *)v1693;
          v1693 = (_QWORD *)((char *)v1693 + 1);
          v1697 = __ROL8__(v1699 ^ v1697, v1696);
        }
        v1700 = (char *)(v1 + 231);
        *(_QWORD *)(v85 + 1320) = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
        v1701 = 4LL;
        *(_DWORD *)(v85 + 1432) += *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
        v1702 = 32;
        do
        {
          v1702 -= 8;
          *v1680 = *(_QWORD *)v1700;
          v1700 += 8;
          ++v1680;
          --v1701;
        }
        while ( v1701 );
        for ( ; v1702; --v1702 )
        {
          v1703 = *v1700++;
          *(_BYTE *)v1680 = v1703;
          v1680 = (_QWORD *)((char *)v1680 + 1);
        }
        *(_QWORD *)(v85 + 1320) = v1697;
        if ( (*(_DWORD *)(v85 + 1680) & 0x40000000) != 0 )
          goto LABEL_2605;
        v1704 = 0;
        v1705 = (_QWORD *)v85;
        do
        {
          *v1705 ^= v1687;
          ++v1704;
          ++v1705;
        }
        while ( (unsigned __int64)v1704 < 0x19 );
        if ( v1679 )
        {
          v1706 = &v1705[v1679 - 1];
          do
          {
            *v1706 ^= v1687;
            v1687 = __ROR8__(v1687, v1679);
            --v1706;
            --v1679;
          }
          while ( v1679 );
        }
        if ( v1676 )
        {
          v1707 = __rdtsc();
          v1708 = (__ROR8__(v1707, 3) ^ v1707) * (unsigned __int128)0x7010008004002001uLL;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x4F0) = *((_QWORD *)&v1708 + 1);
          if ( ((unsigned __int64)v1708 ^ *((_QWORD *)&v1708 + 1)) != 3
                                                                    * (((unsigned __int64)v1708 ^ *((_QWORD *)&v1708 + 1))
                                                                     / 3) )
            goto LABEL_2605;
LABEL_2529:
          v1709 = *v1;
          v1710 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x100) = 3;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xFB) = 1;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xF9) = 12;
          v1711 = (__int64 *)v85;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xFE) = 4;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xF8) = 0;
          v1712 = 0;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xFD) = 2;
          v1713 = 0LL;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x101) = 5;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x104) = 6;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xFF) = 7;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x105) = 8;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x102) = 9;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x106) = 10;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xFC) = 11;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x107) = 13;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x103) = 14;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xFA) = 15;
          v1714 = __ROR8__(v85, v85);
          do
          {
            v1715 = *v1711;
            v1716 = 16LL;
            do
            {
              v1715 = __ROR8__(
                        *(unsigned __int8 *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                           + 0xF8
                                           + (*(_BYTE *)v1711 & 0xF)) | v1715 & 0xFFFFFFFFFFFFFFF0uLL,
                        4);
              *v1711 = v1715;
              --v1716;
            }
            while ( v1716 );
            v1717 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
            v1718 = v1715 - v1713;
            *v1711 = v1718;
            if ( v1717 )
              *v1711 = v1718 ^ v1714;
            else
              *v1711 = v1709 ^ __ROR8__(v1714 ^ _byteswap_uint64(v1710 ^ v1718), v1709);
            v1719 = v1712 * (200 - v1712);
            v1713 += v85;
            ++v1712;
            v1720 = __ROL8__(__ROR8__(v1719, ~(unsigned __int8)*(_DWORD *)v1711) ^ v1714, *(_DWORD *)v1711);
            ++v1711;
            v1714 = v85 + v1720;
          }
          while ( v1712 < 0x19 );
          goto LABEL_2605;
        }
        if ( !v1677 )
          goto LABEL_2529;
LABEL_2605:
        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x54) = 1;
        v1805 = __rdtsc();
        v1806 = __ROR8__(v1805, 3) ^ v1805;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x620) = (v1806
                                                                                * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v1743 = (0x7010008004002001LL * v1806) ^ ((v1806 * (unsigned __int128)0x7010008004002001uLL) >> 64);
        goto LABEL_2610;
      }
    }
    v1721 = 32;
    *(_DWORD *)(a1 + 196) = 1;
    v1722 = *(_QWORD *)(a1 + 1320);
    v1723 = (_QWORD *)(a1 + 1288);
    v1724 = *(_DWORD *)(a1 + 1432);
    v1725 = v1 + 219;
    v85 = a1;
    v1726 = 32;
    v1727 = (char *)(a1 + 1288);
    v1728 = 4LL;
    do
    {
      v1726 -= 8;
      *v1725 = *(_QWORD *)v1727;
      v1727 += 8;
      ++v1725;
      --v1728;
    }
    while ( v1728 );
    for ( ; v1726; --v1726 )
    {
      v1729 = *v1727++;
      *(_BYTE *)v1725 = v1729;
      v1725 = (_QWORD *)((char *)v1725 + 1);
    }
    *(_QWORD *)(a1 + 1320) = 0LL;
    v1730 = 32;
    *(_DWORD *)(a1 + 1432) = 0;
    v1731 = (_QWORD *)(a1 + 1288);
    v1732 = 4LL;
    do
    {
      *v1731 = 0LL;
      v1730 -= 8;
      ++v1731;
      --v1732;
    }
    while ( v1732 );
    for ( ; v1730; --v1730 )
    {
      *(_BYTE *)v1731 = 0;
      v1731 = (_QWORD *)((char *)v1731 + 1);
    }
    v1733 = (_QWORD *)a1;
    *(_DWORD *)(a1 + 1432) += *(_DWORD *)(a1 + 1364);
    v1734 = (const char *)a1;
    v1735 = *(unsigned int *)(a1 + 1364);
    v1736 = *(_DWORD *)(a1 + 1412);
    v93 = *(_QWORD *)(a1 + 1416);
    if ( a1 < a1 + v1735 )
    {
      do
      {
        _mm_prefetch(v1734, 0);
        v1734 += 64;
      }
      while ( (unsigned __int64)v1734 < a1 + v1735 );
    }
    if ( (unsigned int)v1735 >= 8 )
    {
      v1737 = v1735 >> 3;
      do
      {
        v93 = __ROL8__(*v1733++ ^ v93, v1736);
        LODWORD(v1735) = v1735 - 8;
        --v1737;
      }
      while ( v1737 );
      v1671 = a1;
    }
    if ( (_DWORD)v1735 )
    {
      do
      {
        v1738 = *(unsigned __int8 *)v1733;
        v1733 = (_QWORD *)((char *)v1733 + 1);
        v93 = __ROL8__(v1738 ^ v93, v1736);
        LODWORD(v1735) = v1735 - 1;
      }
      while ( (_DWORD)v1735 );
      v1671 = a1;
    }
    *(_QWORD *)(v1671 + 1320) = v1722;
    v1739 = (char *)(v1 + 219);
    *(_DWORD *)(v1671 + 1432) += v1724;
    v1740 = 4LL;
    do
    {
      v1721 -= 8;
      *v1723 = *(_QWORD *)v1739;
      v1739 += 8;
      ++v1723;
      --v1740;
    }
    while ( v1740 );
    for ( ; v1721; --v1721 )
    {
      v1741 = *v1739++;
      *(_BYTE *)v1723 = v1741;
      v1723 = (_QWORD *)((char *)v1723 + 1);
    }
    *(_QWORD *)(v1671 + 1320) = v93;
  }
  v1742 = *(_DWORD *)(v85 + 1680);
  v1743 = 0LL;
  *v1 = 0LL;
  if ( (v1742 & 0x40000000) == 0 )
  {
    if ( (v1742 & 0x100) == 0 )
    {
      v1744 = *(_QWORD *)(v85 + 1224);
      v1745 = *(_QWORD *)(v85 + 1024);
      v1746 = (__int64 *)v85;
      v1747 = (v1742 >> 9) & 1;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xEB) = 1;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1744;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0) = 3;
      v1748 = 0;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xE8) = 0;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xE9) = 12;
      v1749 = 0LL;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xED) = 2;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xEA) = 15;
      v1750 = __ROR8__(v85, v85);
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xEE) = 4;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xF1) = 5;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xF4) = 6;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xEF) = 7;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xF5) = 8;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xF2) = 9;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xF6) = 10;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xEC) = 11;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xF7) = 13;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xF3) = 14;
      do
      {
        v1751 = *v1746;
        v1752 = 16LL;
        do
        {
          v1751 = __ROR8__(
                    *(unsigned __int8 *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                       + 0xE8
                                       + (*(_BYTE *)v1746 & 0xF)) | v1751 & 0xFFFFFFFFFFFFFFF0uLL,
                    4);
          *v1746 = v1751;
          --v1752;
        }
        while ( v1752 );
        v1753 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
        v1754 = v1751 - v1749;
        *v1746 = v1754;
        if ( v1747 )
          v1755 = v1750 ^ v1754;
        else
          v1755 = v1753 ^ __ROR8__(v1750 ^ _byteswap_uint64(v1745 ^ v1754), v1753);
        *v1746 = v1755;
        v1807 = v1755;
        v1749 += v85;
        v1808 = v1748 * (200 - v1748);
        ++v1748;
        v93 = __ROR8__(v1808, ~v1807);
        v1809 = __ROL8__(v93 ^ v1750, *(_DWORD *)v1746++);
        v1750 = v85 + v1809;
      }
      while ( v1748 < 0x19 );
      v1743 = *v1;
    }
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64))(v85 + 560))(v85 + 1392, v93);
  }
LABEL_2610:
  i42 = a1;
  v1811 = *(_DWORD **)(a1 + 1352);
  if ( (*(_DWORD *)(a1 + 1680) & 0x10000000) != 0 )
  {
    v1812 = __rdtsc();
    v1813 = __ROR8__(v1812, 3);
    v1814 = (v1813 ^ v1812) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x510) = *((_QWORD *)&v1814 + 1);
    v1811 = (_DWORD *)(*(_QWORD *)(a1 + 1240) + 10LL * (((unsigned __int8)(v1813 ^ v1812) ^ BYTE8(v1814)) & 0xF));
  }
  v1815 = 40;
  v1816 = (char *)(a1 + 1544);
  v1817 = (char *)(a1 + 1544);
  v1818 = v1 + 138;
  v1819 = 5LL;
  do
  {
    v1815 -= 8;
    *v1818 = *(_QWORD *)v1817;
    v1817 += 8;
    ++v1818;
    --v1819;
  }
  while ( v1819 );
  for ( ; v1815; --v1815 )
  {
    v1820 = *v1817++;
    *(_BYTE *)v1818 = v1820;
    v1818 = (_QWORD *)((char *)v1818 + 1);
  }
  v1821 = *(_DWORD *)(a1 + 1680);
  if ( (v1821 & 0x8000) != 0 || !*(_DWORD *)v1816 )
  {
    if ( (v1821 & 0x40000000) != 0 )
      goto LABEL_2706;
    v1822 = (unsigned __int8)(*(_BYTE *)(a1 + 1584) - 1);
    v1823 = __rdtsc();
    v1824 = (__ROR8__(v1823, 3) ^ v1823) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x660) = *((_QWORD *)&v1824 + 1);
    v1825 = v1822 + (*((_QWORD *)&v1824 + 1) ^ (unsigned __int64)v1824) % (unsigned int)(63 - v1822);
    do
    {
      v1826 = __rdtsc();
      v1827 = (__ROR8__(v1826, 3) ^ v1826) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x520) = *((_QWORD *)&v1827 + 1);
      v1828 = v1822 + (*((_QWORD *)&v1827 + 1) ^ (unsigned __int64)v1827) % (unsigned int)(63 - v1822);
    }
    while ( v1828 == v1825 );
    i42 = a1;
    v1829 = (v85 ^ v1743 | (1LL << v1825)) & ~(1LL << v1828);
    v1830 = *(_QWORD *)(a1 + 1280);
    v1831 = *(_QWORD *)(a1 + 1272);
    if ( *(_DWORD *)(a1 + 1588) == 3 )
    {
      v1832 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
      if ( v1832 )
      {
        v1833 = *(_QWORD *)(a1 + 808);
        *(_BYTE *)v1830 = 19;
        *(_BYTE *)(v1830 + 1) = 1;
        *(_WORD *)(v1830 + 2) = 0;
        *(_QWORD *)(v1830 + 24) = v1833;
        *(_QWORD *)(v1830 + 32) = v1832;
        *(_QWORD *)(v1830 + 56) = 0LL;
        *(_QWORD *)(v1830 + 16) = 0LL;
        *(_QWORD *)(v1830 + 40) = v1829;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 792))(
          *(_QWORD *)(v1832 + 8),
          *(unsigned int *)(v1832 + 16),
          *(_QWORD *)v1832);
        v1834 = *(_QWORD *)v1832;
        v1835 = v1832 ^ __ROL8__(v1832, 17);
        v1836 = 4;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x488) = ((unsigned __int64)v1835
                                                                                * (unsigned __int128)0x5851F42D4C957F2DuLL) >> 64;
        v1837 = (0x5851F42D4C957F2DLL * v1835) ^ (((unsigned __int64)v1835 * (unsigned __int128)0x5851F42D4C957F2DuLL) >> 64);
        v1838 = (_QWORD *)(v1832 + 24);
        v1839 = v1837;
        do
        {
          *v1838 ^= v1839;
          v1839 = __ROL8__(v1839, v1836);
          --v1838;
          --v1836;
        }
        while ( v1836 );
        if ( ((unsigned __int8)v1837 & 0xFu) < 7 )
        {
          v1840 = 6;
          v1841 = v1834 ^ __ROL8__(v1834, 17);
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x530) = ((unsigned __int64)v1841
                                                                                  * (unsigned __int128)0x5851F42D4C957F2DuLL) >> 64;
          v1842 = ((0x5851F42D4C957F2DLL * v1841) ^ (((unsigned __int64)v1841 * (unsigned __int128)0x5851F42D4C957F2DuLL) >> 64))
                + v1839;
          v1843 = (_QWORD *)(v1834 + 40);
          v1844 = (unsigned int)*(__int16 *)(v1834 + 8);
          do
          {
            *v1843 ^= v1842;
            v1842 = __ROL8__(v1842, v1840);
            --v1843;
            --v1840;
          }
          while ( v1840 );
          v1845 = (unsigned __int64)(v1844 - 48) >> 3;
          if ( (_DWORD)v1845 )
          {
            v1846 = (_QWORD *)(v1834 + 8 * ((int)v1845 + 5LL));
            do
            {
              *v1846 ^= v1842;
              v1842 = __ROL8__(v1842, v1845);
              --v1846;
              LODWORD(v1845) = v1845 - 1;
            }
            while ( (_DWORD)v1845 );
          }
        }
        i42 = a1;
        goto LABEL_2632;
      }
      i42 = a1;
    }
    *(_BYTE *)v1830 = 19;
    *(_BYTE *)(v1830 + 1) = 1;
    *(_WORD *)(v1830 + 2) = 0;
    *(_QWORD *)(v1830 + 24) = v1811;
    *(_QWORD *)(v1830 + 32) = v1829;
    *(_QWORD *)(v1830 + 56) = 0LL;
    *(_QWORD *)(v1830 + 16) = 0LL;
LABEL_2632:
    *(_QWORD *)(v1830 + 64) = v1743;
    if ( (*(_DWORD *)(i42 + 1680) & 0x100) != 0 )
    {
      v1847 = (ULONG_PTR)(v1811 - 18);
      *((_QWORD *)v1811 - 1) = v1830;
      v1848 = 25LL;
      v1849 = __rdtsc();
      v1850 = (__ROR8__(v1849, 3) ^ v1849) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x680) = *((_QWORD *)&v1850 + 1);
      v1851 = v1850 ^ *((_QWORD *)&v1850 + 1);
      v1852 = v1811;
      do
      {
        *v1852++ ^= v1851;
        --v1848;
      }
      while ( v1848 );
      *v1811 = 1213280584;
      *(_QWORD *)(v1847 + 32) = v1851;
    }
    else
    {
      v1847 = v1830;
    }
    _InterlockedOr(v1915, 0);
    v1853 = *(_DWORD *)(i42 + 1448);
    if ( v1853 )
    {
      v1854 = v1853 - 1;
      if ( v1854 )
      {
        v1855 = v1854 - 1;
        if ( v1855 )
        {
          v1856 = v1855 - 1;
          if ( v1856 )
          {
            if ( v1856 == 1 )
            {
              v1860 = *(_QWORD *)(i42 + 1760);
              v1861 = *(_QWORD *)(i42 + 1776);
              v1862 = *(_QWORD *)(i42 + 1688);
              v1863 = *(_QWORD *)(i42 + 1768);
              *(_BYTE *)v1860 = 18;
              *(_BYTE *)(v1860 + 2) = 88;
              *(_BYTE *)(v1860 + 80) = 0;
              *(_QWORD *)(v1860 + 8) = v1862;
              *(_QWORD *)(v1860 + 32) = v1863;
              *(_QWORD *)(v1860 + 40) = 0LL;
              *(_QWORD *)(v1860 + 48) = v1861;
              *(_BYTE *)(v1860 + 81) = 0;
              *(_QWORD *)(v1860 + 56) = 0LL;
              *(_BYTE *)(v1860 + 82) = 0;
              if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(i42 + 632))(
                      *(_QWORD *)(i42 + 1760),
                      v1830,
                      0LL,
                      0LL) )
              {
                if ( !*(_DWORD *)v1816 )
                {
                  *(_QWORD *)(i42 + 1552) = i42 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(i42 + 1560) = 0LL;
                  *(_QWORD *)(i42 + 1568) = 260LL;
                  *(_QWORD *)(i42 + 1576) = v1862;
                  *(_DWORD *)v1816 = 1;
                }
                v1864 = 40;
                v1865 = v1 + 138;
                v1866 = 5LL;
                do
                {
                  v1864 -= 8;
                  *v1865 = *(_QWORD *)v1816;
                  v1816 += 8;
                  ++v1865;
                  --v1866;
                }
                while ( v1866 );
                for ( i42 = a1; v1864; --v1864 )
                {
                  v1867 = *v1816++;
                  *(_BYTE *)v1865 = v1867;
                  v1865 = (_QWORD *)((char *)v1865 + 1);
                }
              }
            }
            else
            {
              v1857 = *(_QWORD *)(i42 + 1688);
              *(_QWORD *)(v1857 + 72) = v1847;
              _InterlockedOr(v1915, 0);
              v1858 = __rdtsc();
              v1859 = (__ROR8__(v1858, 3) ^ v1858) * (unsigned __int128)0x7010008004002001uLL;
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x548) = *((_QWORD *)&v1859 + 1);
              *(_DWORD *)v1857 = (__int64)(((unsigned __int64)v1859 ^ *((_QWORD *)&v1859 + 1)) % 0x5F5E100 + 1200000000)
                               / 10000000;
            }
          }
          else
          {
            v1868 = *(_QWORD *)(i42 + 1688);
            v1869 = *(_QWORD *)(v1868 + 1544);
            if ( v1869 )
            {
              if ( !*(_DWORD *)v1816 )
              {
                *(_QWORD *)(i42 + 1552) = i42 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(i42 + 1560) = 0LL;
                *(_QWORD *)(i42 + 1568) = 260LL;
                *(_QWORD *)(i42 + 1576) = v1869;
                *(_DWORD *)v1816 = 1;
              }
              v1870 = 40;
              v1871 = v1 + 138;
              v1872 = 5LL;
              do
              {
                v1870 -= 8;
                *v1871 = *(_QWORD *)v1816;
                v1816 += 8;
                ++v1871;
                --v1872;
              }
              while ( v1872 );
              for ( i42 = a1; v1870; --v1870 )
              {
                v1873 = *v1816++;
                *(_BYTE *)v1871 = v1873;
                v1871 = (_QWORD *)((char *)v1871 + 1);
              }
            }
            _InterlockedOr(v1915, 0);
            *(_QWORD *)(v1868 + 1544) = v1830;
          }
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(i42 + 1328) + 1584LL) = v1847;
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(i42 + 1328) + 1632LL) = v1847;
      }
    }
    else
    {
      v1874 = __rdtsc();
      v1875 = (__ROR8__(v1874, 3) ^ v1874) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x5A8) = *((_QWORD *)&v1875 + 1);
      v1876 = -1200000000LL - ((unsigned __int64)v1875 ^ *((_QWORD *)&v1875 + 1)) % 0x5F5E100;
      *(_QWORD *)&v1875 = __rdtsc();
      BugCheckParameter4 = v1847;
      v1877 = (__ROR8__(v1875, 3) ^ (unsigned __int64)v1875) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x560) = *((_QWORD *)&v1877 + 1);
      (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD, unsigned __int64, ULONG_PTR))(i42 + 424))(
        v1831,
        v1876,
        0LL,
        ((unsigned __int64)v1877 ^ *((_QWORD *)&v1877 + 1)) % 0x2710,
        BugCheckParameter4);
    }
  }
  if ( *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x450) && (*(_DWORD *)(i42 + 1680) & 0x8000) == 0 )
  {
    v1878 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x468);
    v1879 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x470);
    v1880 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x460);
    v1881 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x458);
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v1878;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v1879;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v1880;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v1881;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x130) = i42;
    if ( KeGetCurrentIrql() < 2u )
      __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v1883 = KeGetCurrentThread();
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v1883;
    DpcStack = (unsigned __int64)CurrentPrcb->DpcStack;
    LOBYTE(CurrentPrcb) = CurrentPrcb->DpcRoutineActive;
    *v1 = DpcStack;
    if ( !(_BYTE)CurrentPrcb || (unsigned __int64)(v1 + 38) > DpcStack || (unsigned __int64)(v1 + 38) < DpcStack - 24576 )
    {
      DpcStack = (unsigned __int64)v1883->InitialStack;
      *v1 = DpcStack;
    }
    v1885 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x130);
    if ( (*(_DWORD *)(v1885 + 1680) & 0x8000000) == 0 )
    {
      v1886 = __readcr0();
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v1886;
      __writecr0(v1886 & 0xFFFFFFFFFFFEFFFFuLL);
      v1887 = v1885 + 1880;
      v1888 = v1885 + 1880 + 16LL * *(unsigned int *)(v1885 + 1872);
      v1889 = (__int64 **)v1888;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1888;
      if ( *(_DWORD *)(v1885 + 1876) )
      {
        v1890 = 0;
        do
        {
          v1891 = *v1889;
          v1892 = (__int64)v1889[1];
          *v1891 = v1892;
          if ( MiPteInShadowRange((__int64)v1891) )
            MiWritePteShadow((__int64)v1891, v1892);
          v1893 = __readcr4();
          if ( (v1893 & 0x20080) != 0 )
          {
            __writecr4(v1893 ^ 0x80);
            __writecr4(v1893);
          }
          else
          {
            v1894 = __readcr3();
            __writecr3(v1894);
          }
          v1889 += 2;
          ++v1890;
        }
        while ( v1890 < *(_DWORD *)(v1885 + 1876) );
        v1888 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
        v1887 = v1885 + 1880;
        DpcStack = *v1;
        v1886 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
        v1880 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
      }
      if ( v1887 < v1888 )
      {
        do
        {
          v1895 = *(unsigned int *)(v1887 + 8);
          v1896 = v1889;
          v1897 = *(char **)v1887;
          v1898 = v1895;
          if ( (unsigned int)v1895 >= 8 )
          {
            v1899 = (unsigned __int64)(unsigned int)v1895 >> 3;
            do
            {
              v1898 -= 8;
              *(_QWORD *)v1897 = *v1896++;
              v1897 += 8;
              --v1899;
            }
            while ( v1899 );
          }
          if ( v1898 )
          {
            v1900 = v1897 - (char *)v1896;
            do
            {
              *((_BYTE *)v1896 + v1900) = *(_BYTE *)v1896;
              v1896 = (__int64 **)((char *)v1896 + 1);
              --v1898;
            }
            while ( v1898 );
          }
          v1889 = (__int64 **)((char *)v1889 + v1895);
          v1887 += 16LL;
        }
        while ( v1887 < v1888 );
        v1880 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
      }
      **(_BYTE **)(v1885 + 488) = -61;
      __writecr0(v1886);
      v1885 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x130);
      v1883 = *(struct _KTHREAD **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
      v1878 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
      v1879 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
      v1881 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
    }
    if ( *(_DWORD *)(v1885 + 1592) && KeGetCurrentIrql() < 2u )
      __writecr8(2uLL);
    v1901 = *(_DWORD *)(v1885 + 1592);
    if ( v1901 )
    {
      v1902 = v1901 - 1;
      if ( v1902 )
      {
        v1903 = v1902 - 1;
        if ( v1903 )
        {
          v1904 = v1903 - 1;
          if ( v1904 )
          {
            v1905 = v1904 - 1;
            if ( v1905 )
            {
              if ( v1905 == 1 )
                _interlockedbittestandset(&KeGetCurrentThread()->Header.Lock, (*(_DWORD *)(v1885 + 1680) >> 10) & 0x1F);
              else
                _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(v1885 + 1216) + 832LL), 1uLL);
            }
            else
            {
              _interlockedbittestandset(
                &KeGetCurrentThread()->ApcState.Process->Header.Lock,
                (*(_DWORD *)(v1885 + 1680) >> 10) & 0x1F);
            }
            goto LABEL_2723;
          }
          v1906 = *(volatile signed __int32 **)(v1885 + 1136);
        }
        else
        {
          v1906 = *(volatile signed __int32 **)(v1885 + 1128);
        }
      }
      else
      {
        v1906 = *(volatile signed __int32 **)(v1885 + 1112);
      }
      _interlockedbittestandset64(v1906, 0LL);
    }
LABEL_2723:
    v1883[1].InitialStack = 0LL;
    v1883[1].ApcState.ApcListHead[1].Flink = 0LL;
    SdbpCheckDll(
      265,
      v1881,
      v1880,
      v1879,
      v1878,
      *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x130) + 336LL),
      DpcStack);
    JUMPOUT(0x1402347E8LL);
  }
LABEL_2706:
  if ( (*(_DWORD *)(i42 + 1680) & 0x40000000) == 0
    && *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x54) )
  {
    if ( *(_DWORD *)(i42 + 1588) == 1 )
    {
      *(_QWORD *)(i42 + 1336) -= 8LL;
      *(_DWORD *)(i42 + 1344) = **(_DWORD **)(i42 + 1336);
      v1907 = *(_QWORD *)(i42 + 504);
      goto LABEL_2712;
    }
    if ( *(_DWORD *)(i42 + 1588) == 3 )
    {
      v1907 = *(_QWORD *)(i42 + 800);
LABEL_2712:
      *(_QWORD *)(i42 + 248) = v1907;
    }
  }
  return i42;
}
