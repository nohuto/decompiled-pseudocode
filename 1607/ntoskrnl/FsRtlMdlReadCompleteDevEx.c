/*
 * XREFs of FsRtlMdlReadCompleteDevEx @ 0x140242000
 * Callers:
 *     KiDecodeMcaFault @ 0x140156DA0 (KiDecodeMcaFault.c)
 *     sub_1401586D8 @ 0x1401586D8 (sub_1401586D8.c)
 *     FsRtlUninitializeSmallMcb @ 0x140253520 (FsRtlUninitializeSmallMcb.c)
 * Callees:
 *     sub_1401588B8 @ 0x1401588B8 (sub_1401588B8.c)
 *     sub_140158998 @ 0x140158998 (sub_140158998.c)
 *     sub_14015936C @ 0x14015936C (sub_14015936C.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     sub_14024FE34 @ 0x14024FE34 (sub_14024FE34.c)
 *     sub_140251E08 @ 0x140251E08 (sub_140251E08.c)
 *     $$6d @ 0x140252664 ($$6d.c)
 *     $$87 @ 0x140252848 ($$87.c)
 *     $$f4 @ 0x140253298 ($$f4.c)
 *     $$120 @ 0x140253424 ($$120.c)
 *     KiGetGdtIdt @ 0x140253480 (KiGetGdtIdt.c)
 *     SdbpCheckDll @ 0x1402534D0 (SdbpCheckDll.c)
 *     sub_140777D18 @ 0x140777D18 (sub_140777D18.c)
 */

unsigned __int64 __fastcall FsRtlMdlReadCompleteDevEx(unsigned __int64 a1)
{
  unsigned int *v1; // rbp
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
  __int64 v15; // rdx
  _QWORD *v16; // rax
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
  __int64 v28; // rax
  int v29; // ecx
  int v30; // eax
  int v31; // r13d
  unsigned int v32; // esi
  __int64 v33; // r12
  __int64 v34; // r10
  __int64 v35; // r15
  int v36; // r13d
  void (__fastcall *v37)(_QWORD, _QWORD, unsigned int *); // r9
  void (__fastcall *v38)(unsigned __int64, _QWORD, unsigned int *, void (__fastcall *)(_QWORD, _QWORD, _QWORD), __int64); // r11
  unsigned __int64 v39; // rcx
  unsigned __int128 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  unsigned __int128 v43; // rax
  unsigned __int64 v44; // rdx
  unsigned __int128 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // r14
  int v48; // eax
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
  int v86; // ebx
  __int64 v87; // rbx
  int v88; // r14d
  __int64 v89; // rbx
  __int64 v90; // rax
  int v91; // eax
  int v92; // ecx
  _BYTE *v93; // rax
  unsigned int v94; // ecx
  _DWORD *v95; // r13
  int v96; // eax
  unsigned __int64 v97; // r9
  unsigned int v98; // r8d
  char *v99; // r12
  __int64 v100; // r10
  int v101; // ecx
  int v102; // ecx
  int v103; // ecx
  int v104; // ecx
  int v105; // ecx
  __int64 v106; // rax
  int v107; // eax
  int v108; // ecx
  unsigned int v109; // ecx
  int *v110; // r10
  _BYTE *v111; // r12
  _BYTE *v112; // rdx
  _BYTE *v113; // r14
  _QWORD *v114; // r15
  unsigned __int64 v115; // r9
  _QWORD *v116; // r11
  const char *v117; // rax
  int v118; // ebx
  unsigned __int64 v119; // r8
  unsigned __int64 v120; // r10
  __int64 v121; // rax
  unsigned __int64 ii; // rax
  unsigned int v123; // r8d
  bool v124; // zf
  __int64 v125; // rdx
  int v126; // ecx
  int v127; // eax
  __int64 v128; // rcx
  _QWORD *v129; // r9
  unsigned __int64 v130; // r8
  const char *v131; // rax
  int v132; // r10d
  unsigned __int64 v133; // rdx
  unsigned __int64 v134; // rax
  __int64 v135; // rax
  unsigned __int64 n; // rax
  unsigned int v137; // eax
  unsigned int v138; // edx
  __int64 v139; // rcx
  __int16 v140; // ax
  __int64 v141; // rcx
  unsigned int m; // r10d
  __int64 v143; // rdx
  unsigned __int64 v144; // r9
  unsigned __int64 v145; // rcx
  int v146; // eax
  unsigned __int64 v147; // rcx
  bool v148; // zf
  char *v149; // rax
  int v150; // ecx
  BOOL v151; // r13d
  unsigned __int64 v152; // rcx
  unsigned __int128 v153; // rax
  __int64 v154; // rbx
  unsigned int v155; // r14d
  _QWORD **v156; // rcx
  _QWORD *v157; // rax
  unsigned int **v158; // rax
  int *v159; // rdi
  unsigned __int64 v160; // rbx
  __int64 v161; // r12
  unsigned __int64 v162; // r15
  __int64 *v163; // rdx
  _BYTE *v164; // rcx
  char v165; // al
  __int64 v166; // rax
  unsigned int v167; // r14d
  int v168; // r14d
  __int64 v169; // rbx
  _QWORD **v170; // rcx
  _QWORD *k; // rax
  __int64 v172; // rcx
  __int64 CurrentIrql; // rbx
  _QWORD **v174; // r8
  _QWORD *v175; // rcx
  _QWORD *v176; // rdx
  _QWORD *v177; // r9
  unsigned __int64 v178; // r8
  const char *v179; // rax
  int v180; // r10d
  unsigned __int64 v181; // rdx
  unsigned __int64 v182; // rax
  __int64 v183; // rax
  unsigned __int64 nn; // rax
  unsigned int v185; // eax
  unsigned int v186; // edx
  bool v187; // zf
  unsigned int v188; // eax
  unsigned __int64 v189; // rbx
  unsigned __int64 i; // r14
  _QWORD *v191; // r9
  unsigned __int64 v192; // r8
  const char *v193; // rax
  int v194; // r10d
  unsigned __int64 v195; // rax
  __int64 v196; // rax
  unsigned __int64 j; // rax
  __int64 v198; // r14
  __int64 v199; // rax
  __int64 v200; // rbx
  unsigned __int64 v201; // rcx
  unsigned __int64 v202; // r8
  __int64 v203; // rax
  unsigned __int64 v204; // rdx
  int v205; // eax
  unsigned int v206; // ecx
  _QWORD *v207; // r9
  unsigned __int64 v208; // r8
  const char *v209; // rax
  int v210; // r11d
  unsigned __int64 v211; // rdx
  unsigned __int64 v212; // r10
  __int64 v213; // rax
  unsigned __int64 i1; // rax
  unsigned int v215; // edx
  __int64 v216; // rcx
  unsigned int v217; // r8d
  unsigned int v218; // r8d
  __int64 *v219; // r9
  __int64 *v220; // r10
  __int64 v221; // rcx
  __int64 v222; // rax
  __int64 v223; // rdx
  __int64 v224; // rax
  __int64 v225; // rcx
  unsigned int v226; // eax
  __int64 v227; // r15
  __int64 v228; // r8
  __int64 v229; // rdx
  __int64 v230; // rax
  __int64 v231; // rcx
  __int64 v232; // rbx
  __int64 v233; // r14
  unsigned __int64 v234; // rbx
  unsigned __int64 v235; // r14
  __int64 v236; // rcx
  unsigned __int64 v237; // rbx
  unsigned __int8 v238; // r13
  unsigned int *v239; // rax
  __int64 v240; // rdx
  __int64 v241; // r14
  BOOL v242; // r12d
  unsigned __int64 v243; // r15
  __int64 v244; // r8
  __int64 *v245; // r9
  __int64 *v246; // r10
  __int64 v247; // rcx
  __int64 v248; // rax
  __int64 v249; // rax
  int *v250; // rcx
  __int64 v251; // rax
  int v252; // ecx
  unsigned __int64 v253; // rbx
  unsigned __int64 v254; // r14
  _QWORD *v255; // r9
  unsigned __int64 v256; // r8
  const char *v257; // rax
  int v258; // r10d
  unsigned __int64 v259; // rdx
  unsigned __int64 v260; // rax
  __int64 v261; // rax
  unsigned __int64 jj; // rax
  __int64 v263; // rax
  unsigned int v264; // edx
  __int64 v265; // rcx
  _QWORD *v266; // r9
  unsigned __int64 v267; // r8
  const char *v268; // rax
  int v269; // r10d
  unsigned __int64 v270; // rax
  __int64 v271; // rax
  unsigned __int64 kk; // rax
  __int64 v273; // r12
  __int64 v274; // r8
  int *v275; // rdi
  unsigned int *v276; // r10
  unsigned __int64 v277; // rdx
  int *v278; // r14
  unsigned int *v279; // r15
  _QWORD *v280; // rbx
  unsigned int v281; // r8d
  _QWORD *v282; // r9
  int v283; // r11d
  const char *v284; // rax
  unsigned __int64 v285; // rdx
  unsigned __int64 v286; // rcx
  unsigned __int64 v287; // rax
  __int64 v288; // rax
  unsigned __int64 mm; // rax
  bool v290; // zf
  __int64 v291; // rcx
  unsigned __int64 v292; // rbx
  unsigned __int8 v293; // r13
  unsigned int *v294; // rax
  __int64 v295; // rdx
  __int64 v296; // r14
  BOOL v297; // r12d
  unsigned __int64 v298; // r15
  __int64 v299; // r8
  __int64 *v300; // r9
  __int64 *v301; // r10
  __int64 v302; // rcx
  __int64 v303; // rax
  __int64 v304; // rax
  int *v305; // rcx
  unsigned int v306; // eax
  __int64 v307; // r9
  unsigned __int64 v308; // rcx
  __int64 v309; // r8
  __int64 v310; // rbx
  _DWORD *v311; // r15
  unsigned __int64 v312; // r13
  unsigned int v313; // edx
  __int64 v314; // rax
  int *v315; // r9
  char *v316; // r14
  unsigned __int64 v317; // r12
  __int64 v318; // rax
  unsigned __int64 v319; // rdi
  int *v320; // r12
  _DWORD *v321; // r13
  _QWORD *v322; // r11
  unsigned int v323; // r8d
  _QWORD *v324; // r9
  int v325; // r10d
  const char *v326; // rax
  unsigned __int64 v327; // rdx
  unsigned __int64 v328; // rcx
  unsigned __int64 v329; // rax
  __int64 v330; // rax
  unsigned __int64 i24; // rax
  __int64 v332; // rcx
  unsigned int v333; // ecx
  unsigned __int64 v334; // r14
  int *v335; // r12
  _DWORD *v336; // r10
  __int64 v337; // r15
  _QWORD *v338; // rbx
  unsigned int v339; // r8d
  _QWORD *v340; // r9
  int v341; // r11d
  const char *v342; // rax
  unsigned __int64 v343; // rdx
  unsigned __int64 v344; // rcx
  unsigned __int64 v345; // rax
  __int64 v346; // rax
  unsigned __int64 i25; // rax
  unsigned int v348; // edx
  __int64 v349; // r14
  _QWORD *v350; // r9
  unsigned __int64 v351; // r8
  const char *v352; // rax
  int v353; // r11d
  unsigned __int64 v354; // rdx
  unsigned __int64 v355; // r10
  __int64 v356; // rax
  unsigned __int64 i23; // rax
  __int64 v358; // rax
  unsigned int v359; // edx
  __int64 v360; // rcx
  __int64 v361; // r9
  __int64 **v362; // r12
  unsigned int v363; // eax
  __int64 v364; // r13
  char *v365; // rdi
  char *v366; // rbx
  __int64 v367; // r15
  __int64 v368; // r14
  _QWORD *v369; // rcx
  int v370; // edx
  __int64 v371; // r8
  char v372; // al
  __int64 v373; // rax
  __int64 v374; // rax
  unsigned __int64 v375; // r8
  __int16 v376; // ax
  __int64 v377; // rax
  __int64 v378; // rax
  unsigned int v379; // ebx
  __int64 v380; // rax
  unsigned int v381; // r13d
  unsigned __int8 v382; // dl
  unsigned __int64 v383; // r10
  unsigned __int64 v384; // r11
  __int64 v385; // r15
  unsigned __int64 v386; // r9
  _QWORD *v387; // r9
  unsigned __int64 v388; // r8
  const char *v389; // rax
  int v390; // r11d
  unsigned __int64 v391; // rdx
  unsigned __int64 v392; // r10
  __int64 v393; // rax
  unsigned __int64 i21; // rax
  unsigned int v395; // r9d
  const char *v396; // r8
  unsigned __int8 v397; // r10
  unsigned int v398; // r11d
  unsigned __int64 v399; // rbx
  unsigned __int64 v400; // r14
  unsigned __int64 v401; // rcx
  const char *v402; // rax
  int v403; // r11d
  unsigned __int64 v404; // rdx
  const char *v405; // rcx
  unsigned __int64 v406; // r10
  __int64 v407; // rax
  unsigned __int64 i22; // rax
  __int64 v409; // rax
  _QWORD *v410; // rcx
  int v411; // edx
  __int64 v412; // r8
  char v413; // al
  __int64 v414; // rax
  __int64 v415; // rcx
  bool v416; // zf
  _QWORD *v417; // r9
  const char *v418; // rax
  int v419; // r11d
  unsigned __int64 v420; // rdx
  unsigned __int64 v421; // r10
  __int64 v422; // rax
  unsigned __int64 i19; // rax
  __int64 v424; // rax
  unsigned int v425; // edx
  __int64 v426; // rcx
  unsigned int v427; // r8d
  __int64 v428; // rax
  unsigned int *v429; // r11
  unsigned int *v430; // r10
  int v431; // ebx
  const char *v432; // rax
  unsigned __int64 v433; // rdx
  unsigned int *v434; // rcx
  unsigned __int64 v435; // r9
  __int64 v436; // rax
  unsigned __int64 i20; // rax
  __int64 v438; // rax
  unsigned int v439; // edx
  __int64 v440; // r12
  _QWORD *v441; // r15
  unsigned int v442; // r14d
  __int64 v443; // rbx
  _QWORD **v444; // rdx
  _QWORD *i18; // rcx
  _QWORD **v446; // r9
  _QWORD *v447; // rdx
  int *v448; // rdi
  _QWORD *v449; // r8
  _QWORD *v450; // rax
  __int64 v451; // rcx
  __int64 v452; // r15
  _QWORD *v453; // r12
  __int64 v454; // rbx
  _QWORD **v455; // rcx
  _QWORD *v456; // rax
  _QWORD **v457; // r9
  _QWORD *v458; // r8
  int *v459; // rdi
  __int64 v460; // rdx
  unsigned int *v461; // rbx
  _QWORD **v462; // r12
  __int64 v463; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v465; // r13
  _QWORD *v466; // rax
  __int64 v467; // r8
  unsigned __int64 v468; // rcx
  __int64 v469; // rax
  unsigned __int128 v470; // rt2
  int v471; // ebx
  unsigned __int64 v472; // rcx
  unsigned __int128 v473; // rax
  unsigned __int64 v474; // r14
  __int64 v475; // rax
  unsigned __int64 v476; // rdx
  unsigned __int64 *v477; // r8
  __int64 v478; // r9
  __int64 v479; // r11
  int v480; // r10d
  unsigned __int64 *v481; // r9
  unsigned __int64 v482; // r8
  unsigned __int64 v483; // rcx
  unsigned __int128 v484; // rax
  unsigned __int64 v485; // rcx
  unsigned __int64 v486; // rcx
  unsigned int v487; // ebx
  unsigned __int64 v488; // r9
  unsigned __int64 v489; // rcx
  unsigned __int128 v490; // rax
  unsigned __int64 v491; // rcx
  unsigned __int128 v492; // rax
  __int64 v493; // r15
  _QWORD *v494; // rbx
  unsigned int v495; // edi
  __int64 v496; // r14
  __int64 v497; // rax
  unsigned int v498; // r14d
  unsigned __int64 v499; // r12
  unsigned __int64 v500; // r13
  int *v501; // rdi
  __int64 v502; // rbx
  unsigned __int64 v503; // rcx
  unsigned __int128 v504; // rax
  int v505; // ecx
  int v506; // ecx
  int v507; // ecx
  int v508; // ecx
  int v509; // ecx
  char *v510; // rbx
  int v511; // r13d
  unsigned int v512; // r14d
  __int64 v513; // r15
  _QWORD *v514; // rcx
  int v515; // edx
  __int64 v516; // r8
  char v517; // al
  __int64 v518; // rax
  __int64 v519; // rcx
  __int64 v520; // r15
  char *v521; // rdi
  char *v522; // rbx
  int v523; // r12d
  __int64 v524; // r14
  _QWORD *v525; // rcx
  int v526; // edx
  __int64 v527; // r8
  char v528; // al
  __int64 v529; // rax
  __int64 v530; // rax
  _BYTE *v531; // r14
  __int64 *v532; // rax
  __int64 v533; // rbx
  __int64 v534; // rax
  __int64 v535; // rax
  __int64 v536; // rax
  __int64 v537; // rax
  __int64 v538; // rdx
  __int64 v539; // r9
  __int64 v540; // r12
  int v541; // ecx
  __int64 v542; // r14
  _BYTE *v543; // rax
  unsigned int v544; // r15d
  int v545; // ecx
  unsigned int v546; // ebx
  unsigned int v547; // ecx
  unsigned __int64 v548; // r11
  unsigned int v549; // r10d
  unsigned __int64 v550; // r8
  __int64 v551; // r9
  int v552; // ecx
  int v553; // ecx
  int v554; // ecx
  int v555; // ecx
  int v556; // ecx
  __int64 v557; // rax
  int v558; // eax
  int v559; // eax
  unsigned int v560; // eax
  unsigned int v561; // r14d
  unsigned __int64 v562; // rbx
  int v563; // eax
  __int64 v564; // rcx
  __int64 v565; // rax
  __int64 v566; // r8
  unsigned __int64 v567; // r12
  int v568; // ecx
  unsigned int v569; // eax
  __int64 v570; // r14
  int v571; // r15d
  unsigned int v572; // eax
  _BYTE *v573; // r13
  int v574; // edx
  unsigned int v575; // ecx
  __int64 v576; // r9
  _QWORD *v577; // rax
  int v578; // r8d
  unsigned __int64 v579; // rdx
  int v580; // ebx
  int v581; // ecx
  int v582; // ecx
  _BYTE *v583; // rbx
  _QWORD *v584; // rax
  __int64 v585; // rdx
  unsigned __int64 v586; // r8
  _QWORD *v587; // rcx
  _QWORD *v588; // r10
  const char *v589; // rax
  int v590; // r11d
  unsigned __int64 v591; // rcx
  unsigned __int64 v592; // rdx
  __int64 v593; // r9
  __int64 v594; // rax
  unsigned __int64 i6; // rax
  int v596; // r14d
  __int64 v597; // r15
  unsigned __int64 v598; // rbx
  __int64 v599; // rcx
  unsigned __int8 v600; // r12
  unsigned __int64 v601; // rcx
  int v602; // ecx
  _QWORD *v603; // rax
  __int64 v604; // rdx
  unsigned int v605; // edx
  _QWORD *v606; // rax
  unsigned __int64 v607; // rcx
  __int64 v608; // rax
  unsigned int *v609; // r12
  __int64 v610; // rdx
  __int64 v611; // r8
  __int64 v612; // rcx
  _DWORD *v613; // rbx
  int v614; // r15d
  int v615; // ecx
  __int16 v616; // ax
  char *v617; // r8
  int v618; // r10d
  signed __int64 v619; // r9
  __int64 v620; // rdx
  __int64 v621; // rax
  __int64 *v622; // r9
  unsigned int v623; // r8d
  __int64 *v624; // r10
  __int64 v625; // rcx
  __int64 v626; // rax
  __int64 v627; // rdx
  __int64 v628; // rax
  char *v629; // r8
  signed __int64 v630; // r9
  int v631; // r10d
  __int64 v632; // rdx
  __int64 v633; // rax
  char *v634; // r8
  signed __int64 v635; // r9
  int v636; // r10d
  __int64 v637; // rdx
  __int64 v638; // rax
  unsigned int v639; // ecx
  __int64 v640; // r10
  unsigned int v641; // r14d
  unsigned int v642; // eax
  unsigned int v643; // ecx
  unsigned int v644; // ecx
  __int64 v645; // rax
  unsigned int v646; // edx
  char *v647; // r9
  _DWORD *v648; // rax
  const char *v649; // rax
  int v650; // r11d
  unsigned __int64 v651; // r8
  const char *v652; // rcx
  unsigned __int64 v653; // r10
  __int64 v654; // rax
  unsigned __int64 i7; // rax
  _BYTE *v656; // rax
  _BYTE *v657; // r12
  __int64 v658; // rdx
  int v659; // r8d
  __int64 v660; // rcx
  __int64 v661; // rax
  __int64 v662; // rdx
  int v663; // ecx
  __int64 v664; // rax
  __int64 v665; // rdx
  int v666; // ecx
  __int64 v667; // rdx
  unsigned int v668; // eax
  int v669; // ecx
  __int64 v670; // r15
  __int64 v671; // r8
  int v672; // ecx
  unsigned int v673; // eax
  _BYTE *v674; // rbx
  int v675; // edx
  unsigned int v676; // ecx
  __int64 v677; // r9
  int v678; // r8d
  unsigned __int64 v679; // rax
  int v680; // r14d
  int v681; // ecx
  int v682; // edi
  unsigned int *v683; // r10
  _QWORD **v684; // r13
  __int64 v685; // r15
  __int64 v686; // r11
  unsigned __int64 v687; // r12
  int v688; // ecx
  _QWORD *v689; // r14
  _QWORD *v690; // rax
  __int64 v691; // rdx
  const char *v692; // rax
  int v693; // r9d
  unsigned __int64 v694; // rdx
  __int64 v695; // r8
  unsigned __int64 v696; // rax
  __int64 v697; // rax
  unsigned __int64 i8; // rax
  __int64 v699; // r9
  unsigned int v700; // r13d
  int *v701; // rcx
  int v702; // r14d
  __int64 v703; // r15
  unsigned int v704; // eax
  __int64 v705; // rax
  __int64 v706; // r12
  int v707; // edx
  unsigned int v708; // ecx
  __int64 v709; // r9
  int v710; // r8d
  unsigned __int64 v711; // rax
  int v712; // ebx
  int v713; // ecx
  __int64 v714; // rbx
  int v715; // ecx
  _QWORD *v716; // rax
  __int64 v717; // rdx
  unsigned __int64 v718; // r15
  unsigned int v719; // r14d
  const char *v720; // rax
  int v721; // r10d
  unsigned __int64 v722; // rcx
  unsigned __int64 v723; // rax
  __int64 v724; // rax
  unsigned __int64 i9; // rax
  __int64 v726; // rbx
  unsigned __int64 v727; // r14
  __int64 v728; // r15
  __int64 v729; // rax
  __int64 v730; // rcx
  unsigned __int64 v731; // rcx
  _QWORD *v732; // rax
  _QWORD *v733; // rax
  ULONG_PTR v734; // rbx
  __int64 v735; // rax
  __int64 v736; // r15
  unsigned __int16 v737; // r13
  unsigned __int128 v738; // rax
  unsigned int v739; // r14d
  unsigned int *v740; // rbx
  unsigned int v741; // r10d
  unsigned int *v742; // r8
  int *v744; // r12
  int v745; // ecx
  unsigned int v746; // r13d
  unsigned int v747; // r15d
  unsigned int v748; // eax
  _BYTE *v749; // r12
  __int64 v750; // r9
  __int64 v751; // r15
  __int16 v752; // r13
  __int64 v753; // rax
  __int64 v754; // rcx
  __int64 v755; // rax
  __int64 v756; // r14
  unsigned int v757; // eax
  __int64 v758; // rax
  __int64 v759; // rbx
  int v760; // edx
  unsigned int v761; // ecx
  __int64 v762; // r9
  int v763; // r8d
  unsigned __int64 v764; // rax
  __int64 v765; // r12
  int v766; // ebx
  int v767; // ecx
  __int64 v768; // rdx
  _QWORD *v769; // rax
  int v770; // ecx
  __int64 v771; // r8
  __int64 v772; // r8
  unsigned __int64 v773; // rcx
  unsigned __int64 i10; // rax
  __int64 v775; // rax
  __int64 v776; // rcx
  unsigned int *v777; // r13
  __int64 v778; // rcx
  __int64 v779; // rax
  unsigned int *v780; // r8
  unsigned int *v781; // r11
  _DWORD *v782; // rax
  __int64 v783; // rdx
  _DWORD *v784; // rax
  __int64 v785; // rcx
  char *v786; // r14
  int v787; // r11d
  int v788; // ecx
  __int16 v789; // ax
  char *v790; // r8
  int v791; // r10d
  signed __int64 v792; // r9
  __int64 v793; // rdx
  __int64 v794; // rax
  __int64 *v795; // r9
  unsigned int v796; // r8d
  __int64 *v797; // r10
  __int64 v798; // rcx
  __int64 v799; // rax
  __int64 v800; // rdx
  __int64 v801; // rax
  char *v802; // r8
  signed __int64 v803; // r9
  int v804; // r10d
  __int64 v805; // rdx
  __int64 v806; // rax
  char *v807; // r8
  signed __int64 v808; // r9
  int v809; // r10d
  __int64 v810; // rdx
  __int64 v811; // rax
  unsigned int v812; // ecx
  unsigned int v813; // edx
  unsigned int *v814; // rax
  unsigned int v815; // ecx
  unsigned int v816; // r14d
  unsigned int v817; // r15d
  unsigned int *v818; // r9
  unsigned int v819; // r13d
  bool v820; // cf
  _QWORD *v821; // r9
  unsigned int *v822; // rdx
  const char *v823; // r10
  unsigned int v824; // r8d
  const char *v825; // rbx
  unsigned int i11; // r11d
  __int64 v827; // rdx
  const char *v828; // rax
  int v829; // ecx
  unsigned __int64 v830; // rdx
  unsigned __int64 v831; // r9
  __int64 v832; // rax
  unsigned __int64 i12; // rax
  bool v834; // cc
  unsigned int *v835; // r15
  unsigned int v836; // r14d
  _BYTE *v837; // rax
  __int64 v838; // rcx
  __int64 v839; // r10
  unsigned int *v840; // rdx
  unsigned int v841; // r8d
  _QWORD *v842; // r9
  const char *v843; // r10
  const char *v844; // rbx
  unsigned int i13; // r11d
  __int64 v846; // rdx
  const char *v847; // rax
  int v848; // ecx
  unsigned __int64 v849; // rdx
  unsigned __int64 v850; // r9
  __int64 v851; // rax
  unsigned __int64 i14; // rax
  __int64 v853; // rax
  unsigned int *v854; // rdx
  unsigned int v855; // r11d
  _QWORD *v856; // r10
  unsigned int v857; // r8d
  const char *v858; // r9
  const char *v859; // rbx
  __int64 v860; // rax
  int v861; // ecx
  unsigned __int64 v862; // rdx
  const char *i15; // rax
  unsigned __int64 v864; // rax
  __int64 v865; // rax
  unsigned __int64 i16; // rax
  __int64 v867; // r8
  unsigned int *v868; // rdx
  _BYTE *v869; // rax
  char *v870; // rbx
  unsigned int v871; // r12d
  int v872; // r15d
  __int64 v873; // r13
  __int64 v874; // rax
  __int64 v875; // r14
  __int64 v876; // r15
  _QWORD *v877; // rcx
  int v878; // edx
  __int64 v879; // r8
  char v880; // al
  __int64 v881; // rax
  __int64 v882; // rax
  char *v883; // rbx
  __int64 v884; // r15
  __int64 v885; // r14
  _QWORD *v886; // rcx
  int v887; // edx
  __int64 v888; // r8
  char v889; // al
  __int64 v890; // rax
  __int64 v891; // rax
  char *v892; // rbx
  __int64 i17; // r14
  _QWORD *v894; // rcx
  int v895; // edx
  __int64 v896; // r8
  char v897; // al
  __int64 v898; // rax
  __int64 v899; // rax
  int v900; // r14d
  unsigned __int64 v901; // rbx
  unsigned int *v902; // rcx
  __int64 v903; // rdx
  unsigned __int64 v904; // r8
  int v905; // eax
  __int64 v906; // rbx
  _QWORD *v907; // r15
  int v908; // r12d
  __int64 v909; // r14
  char *v910; // rdi
  char *v911; // r13
  unsigned __int8 v912; // bl
  char v913; // al
  char v914; // r15
  char v915; // dl
  char v916; // r9
  __int64 v917; // r8
  unsigned __int64 v918; // rcx
  _QWORD *v919; // r15
  _QWORD *v920; // rbx
  unsigned __int8 v921; // di
  __int64 v922; // r15
  __int64 v923; // rdx
  unsigned __int64 v924; // r12
  __int64 v925; // rcx
  _QWORD *v926; // rcx
  int v927; // edx
  __int64 v928; // r8
  char v929; // al
  char *v930; // r15
  char *v931; // r13
  unsigned __int8 v932; // bl
  unsigned __int8 v933; // di
  char v934; // dl
  char v935; // r9
  __int64 v936; // r8
  unsigned __int64 v937; // rcx
  _QWORD *v938; // rbx
  __int64 v939; // r15
  __int64 v940; // rdx
  unsigned __int64 v941; // r12
  __int64 v942; // rcx
  _QWORD *v943; // rcx
  int v944; // edx
  __int64 v945; // r8
  char v946; // al
  __int64 v947; // r14
  unsigned __int8 v948; // bl
  unsigned __int8 v949; // r13
  int *v950; // r10
  char v951; // dl
  char v952; // r9
  __int64 v953; // r8
  unsigned __int64 v954; // rcx
  unsigned __int64 v955; // rdx
  _QWORD *v956; // rbx
  __int64 v957; // rdi
  char *v958; // r15
  __int64 v959; // rdx
  unsigned __int64 v960; // r12
  __int64 v961; // rcx
  _QWORD *v962; // rcx
  __int64 v963; // r8
  char v964; // al
  unsigned __int64 v965; // r8
  _QWORD *v966; // rdx
  int v967; // r11d
  const char *v968; // rax
  __int64 v969; // r9
  unsigned __int64 v970; // r10
  __int64 v971; // rax
  __int64 v972; // rcx
  int v973; // ecx
  int v974; // ecx
  __int64 v975; // rbx
  unsigned int v976; // ebx
  unsigned __int64 v977; // rax
  __int64 v978; // r14
  unsigned int v979; // r14d
  unsigned __int64 v980; // rax
  __int64 v981; // rcx
  unsigned __int64 v982; // rcx
  __int64 v983; // rcx
  unsigned __int64 v984; // rcx
  char *v985; // rax
  _QWORD *v986; // r8
  unsigned __int64 v987; // rdx
  const char *v988; // rax
  __int64 v989; // r9
  unsigned __int64 v990; // rbx
  unsigned __int64 v991; // rax
  __int64 v992; // rax
  unsigned __int64 i26; // rax
  unsigned int v994; // ebx
  _QWORD *v995; // rcx
  int v996; // edx
  __int64 v997; // r8
  char v998; // al
  __int64 v999; // rdx
  __int64 v1000; // rdi
  __int64 v1001; // rcx
  unsigned int v1002; // r9d
  unsigned __int16 *v1003; // rdi
  __int64 v1004; // r8
  __int64 v1005; // r14
  unsigned __int64 v1006; // r13
  __int64 v1007; // r15
  unsigned __int8 v1008; // r12
  __int64 v1009; // rcx
  __int64 v1010; // rdx
  unsigned __int64 v1011; // rbx
  __int64 v1012; // r15
  __int64 v1013; // rax
  __int64 v1014; // rax
  int v1015; // r15d
  unsigned __int64 v1016; // rdx
  __int64 v1017; // rax
  unsigned int *v1018; // rax
  __int64 v1019; // rcx
  _QWORD *v1020; // r11
  int v1021; // edx
  _QWORD *v1022; // r8
  int v1023; // r9d
  const char *v1024; // rax
  unsigned __int64 v1025; // r14
  __int64 v1026; // rax
  __int64 v1027; // rax
  unsigned __int64 i27; // rax
  unsigned int *v1029; // rax
  __int64 v1030; // rdx
  __int64 v1031; // rax
  _QWORD *v1032; // rdx
  unsigned int v1033; // r14d
  int v1034; // r9d
  const char *v1035; // rax
  unsigned __int64 v1036; // rbx
  __int64 v1037; // rax
  __int64 v1038; // r8
  __int64 v1039; // rax
  unsigned __int64 i28; // rax
  unsigned int v1041; // ebx
  int *v1042; // r8
  __int64 v1043; // rcx
  __int64 v1044; // rax
  __int64 v1045; // rcx
  __int64 v1046; // rax
  __int64 v1047; // rdx
  char v1048; // al
  _QWORD *v1049; // r9
  unsigned __int64 v1050; // r8
  const char *v1051; // rax
  int v1052; // r11d
  unsigned __int64 v1053; // rdx
  unsigned __int64 v1054; // r10
  __int64 v1055; // rax
  unsigned __int64 i2; // rax
  __int64 v1057; // rax
  __int64 v1058; // rcx
  __int64 v1059; // rcx
  unsigned __int64 v1060; // rbx
  unsigned __int8 v1061; // r13
  __int64 v1062; // rdx
  unsigned int *v1063; // rax
  __int64 v1064; // r14
  BOOL v1065; // r12d
  unsigned __int64 v1066; // r15
  __int64 v1067; // r8
  __int64 *v1068; // r9
  __int64 *v1069; // r10
  __int64 v1070; // rcx
  __int64 v1071; // rax
  __int64 v1072; // rax
  int *v1073; // r12
  __int64 v1074; // rcx
  unsigned __int8 v1075; // r15
  unsigned __int64 v1076; // rdx
  unsigned __int64 v1077; // r14
  unsigned __int64 v1078; // rcx
  unsigned __int64 v1079; // rax
  unsigned int v1080; // eax
  unsigned int v1081; // eax
  unsigned __int64 v1082; // rbx
  unsigned __int64 i3; // r14
  int v1084; // eax
  __int64 v1085; // rdx
  __int64 v1086; // r8
  __int64 v1087; // rcx
  __int64 v1088; // rax
  __int64 v1089; // rcx
  __int64 v1090; // r8
  __int64 v1091; // rcx
  __int64 v1092; // rax
  _QWORD *v1093; // r9
  unsigned __int64 v1094; // r8
  const char *v1095; // rax
  int v1096; // r10d
  unsigned __int64 v1097; // rdx
  unsigned __int64 v1098; // rax
  __int64 v1099; // rax
  unsigned __int64 i4; // rax
  __int64 v1101; // rax
  unsigned int v1102; // edx
  __int64 v1103; // rcx
  _QWORD *v1104; // r9
  unsigned __int64 v1105; // r8
  const char *v1106; // rax
  int v1107; // r11d
  unsigned __int64 v1108; // rdx
  unsigned __int64 v1109; // r10
  __int64 v1110; // rax
  unsigned __int64 i5; // rax
  __int64 v1112; // rax
  unsigned int v1113; // edx
  __int64 v1114; // rbx
  int v1115; // eax
  __int64 v1116; // rax
  int v1117; // r13d
  __int64 v1118; // r11
  __int64 v1119; // r9
  unsigned int v1120; // r14d
  __int64 v1121; // r12
  int v1122; // r13d
  void (__fastcall *v1123)(_QWORD, _QWORD, unsigned int *); // r10
  unsigned __int64 v1124; // rcx
  unsigned __int128 v1125; // rax
  unsigned __int64 v1126; // rcx
  unsigned __int64 v1127; // rdx
  unsigned __int128 v1128; // rax
  unsigned __int64 v1129; // rdx
  unsigned __int128 v1130; // rax
  int v1131; // eax
  __int64 v1132; // rbx
  __int64 v1133; // r15
  unsigned __int64 v1134; // rcx
  unsigned __int128 v1135; // rax
  int v1136; // ecx
  _QWORD *v1137; // rax
  __int64 v1138; // r10
  unsigned __int64 v1139; // r8
  __int64 *v1140; // r9
  __int64 v1141; // rdx
  __int64 v1142; // rcx
  _QWORD *v1143; // rdx
  _QWORD *v1144; // rax
  __int64 v1145; // r9
  int v1146; // ecx
  __int64 v1147; // r12
  __int64 v1148; // r11
  unsigned __int64 v1149; // r8
  __int64 *v1150; // r10
  __int64 v1151; // rdx
  unsigned int v1152; // r14d
  _QWORD *v1153; // rdx
  __int64 v1154; // rax
  int v1155; // ecx
  int v1156; // ecx
  _BYTE *v1157; // rbx
  __int64 v1158; // r14
  int v1159; // r15d
  __int64 v1160; // r14
  __int64 v1161; // rax
  int v1162; // eax
  __int64 v1163; // rdi
  __int64 v1164; // rbx
  unsigned __int64 v1165; // r8
  __int64 *v1166; // r12
  __int64 v1167; // rax
  __int64 v1168; // r13
  __int64 v1169; // r14
  unsigned __int64 v1170; // r8
  char v1171; // r11
  const char *v1172; // r15
  unsigned __int64 v1173; // r9
  const char *v1174; // r10
  const char *v1175; // rax
  unsigned int v1176; // edx
  unsigned __int64 v1177; // rcx
  __int64 v1178; // rdi
  unsigned __int64 v1179; // r8
  __int64 v1180; // rax
  __int64 v1181; // rdx
  _QWORD *v1182; // r8
  const char *v1183; // rax
  char v1184; // r11
  unsigned __int64 v1185; // r14
  unsigned __int64 v1186; // r10
  __int64 v1187; // rax
  __int64 v1188; // rax
  unsigned __int64 v1189; // rcx
  unsigned __int128 v1190; // rax
  unsigned __int64 v1191; // rcx
  int v1192; // ecx
  int v1193; // ecx
  unsigned int v1194; // r9d
  int v1195; // ecx
  int v1196; // ecx
  int v1197; // ecx
  unsigned __int64 v1198; // rcx
  __int64 v1199; // rax
  unsigned __int128 v1200; // rt2
  unsigned int v1201; // r9d
  __int64 *v1202; // rax
  __int64 *v1203; // r9
  int v1204; // ecx
  __int64 v1205; // rdx
  __int64 v1206; // rax
  __int64 v1207; // r15
  __int64 *v1208; // rax
  __int64 v1209; // rcx
  __int64 v1210; // rax
  __int64 v1211; // r13
  char *v1212; // r11
  char *v1213; // r9
  int v1214; // r14d
  int v1215; // ecx
  __int16 v1216; // ax
  char *v1217; // r8
  int v1218; // r10d
  signed __int64 v1219; // r9
  __int64 v1220; // rdx
  __int64 v1221; // rax
  __int64 *v1222; // r9
  unsigned int v1223; // r8d
  __int64 *v1224; // r10
  __int64 v1225; // rcx
  __int64 v1226; // rax
  __int64 v1227; // rdx
  __int64 v1228; // rax
  char *v1229; // r8
  signed __int64 v1230; // r9
  int v1231; // r10d
  __int64 v1232; // rdx
  __int64 v1233; // rax
  char *v1234; // r8
  signed __int64 v1235; // r9
  int v1236; // r10d
  __int64 v1237; // rdx
  __int64 v1238; // rax
  unsigned int v1239; // ecx
  unsigned int v1240; // edx
  const char *v1241; // r8
  const char *v1242; // rax
  const char *v1243; // rcx
  int v1244; // ecx
  unsigned __int64 v1245; // rax
  __int64 v1246; // rax
  int v1247; // edx
  __int64 v1248; // r12
  __int64 v1249; // rcx
  __int64 v1250; // rax
  __int64 v1251; // r12
  __int64 v1252; // r14
  __int64 v1253; // rax
  __int64 v1254; // r15
  unsigned int v1255; // ecx
  __int64 v1256; // r8
  _QWORD *v1257; // rax
  __int64 v1258; // r14
  unsigned int v1259; // edx
  int v1260; // r10d
  int ***v1261; // r15
  int v1262; // r12d
  unsigned __int64 v1263; // r9
  int *v1264; // r11
  unsigned int v1265; // r13d
  unsigned int v1266; // r8d
  int *v1267; // r14
  int v1268; // edx
  __int64 v1269; // rax
  unsigned int v1270; // r8d
  unsigned int v1271; // ecx
  int v1272; // eax
  __int64 v1273; // r12
  __int64 v1274; // rcx
  __int64 v1275; // r13
  const char *v1276; // r15
  unsigned int v1277; // eax
  unsigned int v1278; // r12d
  __int64 v1279; // r14
  int v1280; // edx
  unsigned int v1281; // ecx
  __int64 v1282; // r9
  int v1283; // r8d
  unsigned __int64 v1284; // rax
  int v1285; // ebx
  int v1286; // ecx
  _QWORD *v1287; // rax
  int v1288; // ecx
  __int64 v1289; // rdx
  const char *v1290; // rax
  int v1291; // r10d
  unsigned __int64 v1292; // rdx
  const char *v1293; // rcx
  unsigned int v1294; // r8d
  unsigned __int64 v1295; // rax
  __int64 v1296; // rax
  unsigned __int64 i40; // rax
  int v1298; // r15d
  __int64 v1299; // r13
  unsigned int v1300; // eax
  __int64 v1301; // r14
  int v1302; // edx
  unsigned int v1303; // ecx
  __int64 v1304; // r9
  int v1305; // r8d
  unsigned __int64 v1306; // rax
  int v1307; // ebx
  int v1308; // ecx
  __int64 v1309; // rbx
  _QWORD *v1310; // rax
  int v1311; // ecx
  __int64 v1312; // rdx
  int v1313; // r10d
  const char *v1314; // rax
  unsigned __int64 v1315; // rdx
  int v1316; // r8d
  __int64 v1317; // rax
  __int64 v1318; // rax
  unsigned __int64 i41; // rax
  __int64 v1320; // rax
  __int64 v1321; // r13
  int v1322; // r12d
  const char *v1323; // r15
  unsigned int v1324; // eax
  unsigned int v1325; // r12d
  __int64 v1326; // r14
  int v1327; // edx
  unsigned int v1328; // ecx
  __int64 v1329; // r9
  int v1330; // r8d
  unsigned __int64 v1331; // rax
  int v1332; // ebx
  int v1333; // ecx
  __int64 v1334; // r10
  _QWORD *v1335; // rax
  int v1336; // ecx
  __int64 v1337; // rdx
  const char *v1338; // rax
  int v1339; // r11d
  unsigned __int64 v1340; // rdx
  const char *v1341; // rcx
  unsigned int v1342; // r8d
  __int64 v1343; // rax
  unsigned __int64 i42; // rax
  int v1345; // r15d
  __int64 v1346; // r13
  unsigned int v1347; // eax
  __int64 v1348; // r14
  int v1349; // edx
  unsigned int v1350; // ecx
  __int64 v1351; // r9
  int v1352; // r8d
  unsigned __int64 v1353; // rax
  int v1354; // ebx
  int v1355; // ecx
  __int64 v1356; // rbx
  _QWORD *v1357; // rax
  int v1358; // ecx
  __int64 v1359; // rdx
  __int64 v1360; // rsi
  int v1361; // r11d
  const char *v1362; // rax
  unsigned __int64 v1363; // rdx
  int v1364; // r8d
  __int64 v1365; // r10
  __int64 v1366; // rax
  unsigned __int64 i43; // rax
  int v1368; // r13d
  __int64 *v1369; // r14
  __int64 v1370; // rax
  unsigned int v1371; // ebx
  __int64 v1372; // rdi
  __int64 v1373; // rax
  __int64 v1374; // r14
  unsigned int v1375; // ecx
  int v1376; // edx
  unsigned int v1377; // ecx
  __int64 v1378; // r9
  int v1379; // r8d
  unsigned __int64 v1380; // rax
  int v1381; // esi
  int v1382; // ecx
  int v1383; // eax
  unsigned int v1384; // r12d
  _BYTE *v1385; // rcx
  _QWORD *v1386; // rax
  int v1387; // edx
  __int64 v1388; // r8
  unsigned __int64 v1389; // rdx
  unsigned __int64 i44; // rax
  unsigned int v1391; // r12d
  __int64 v1392; // rax
  int *v1393; // rcx
  int *v1394; // r15
  __int64 v1395; // r14
  unsigned __int8 *v1396; // r8
  const char *v1397; // rax
  unsigned __int64 v1398; // rdx
  __int64 v1399; // rax
  unsigned __int64 i45; // rax
  int v1401; // r13d
  __int64 *v1402; // r14
  __int64 v1403; // rax
  unsigned int v1404; // ebx
  __int64 v1405; // rdi
  __int64 v1406; // rax
  __int64 v1407; // r14
  unsigned int v1408; // ecx
  int v1409; // edx
  unsigned int v1410; // ecx
  __int64 v1411; // r9
  int v1412; // r8d
  unsigned __int64 v1413; // rax
  int v1414; // esi
  int v1415; // ecx
  int v1416; // eax
  _BYTE *v1417; // rcx
  _QWORD *v1418; // rax
  int v1419; // edx
  __int64 v1420; // r8
  unsigned __int64 v1421; // rdx
  unsigned __int64 i46; // rax
  __int64 v1423; // rax
  int *v1424; // r15
  __int64 v1425; // r14
  unsigned __int8 *v1426; // r8
  const char *v1427; // rax
  unsigned __int64 v1428; // rdx
  __int64 v1429; // rax
  unsigned __int64 i47; // rax
  int v1431; // eax
  __int64 v1432; // rax
  __int64 v1433; // rcx
  __int64 v1434; // rax
  unsigned __int64 v1435; // r9
  __int64 v1436; // r15
  __int64 v1437; // r12
  _BYTE *v1438; // rax
  int v1439; // r13d
  int v1440; // ecx
  unsigned int v1441; // r14d
  int v1442; // ecx
  unsigned int v1443; // edx
  unsigned int v1444; // r10d
  _BYTE *v1445; // r11
  _BYTE *v1446; // r8
  __int64 v1447; // r9
  int v1448; // ecx
  int v1449; // ecx
  int v1450; // ecx
  int v1451; // ecx
  int v1452; // ecx
  __int64 v1453; // rax
  int v1454; // eax
  int v1455; // eax
  __int64 v1456; // r13
  __int64 v1457; // rax
  __int64 v1458; // rdx
  __int64 v1459; // r15
  _BYTE *v1460; // rax
  int v1461; // r12d
  int v1462; // ecx
  unsigned int v1463; // r14d
  int v1464; // ecx
  unsigned int v1465; // r10d
  _BYTE *v1466; // r11
  _BYTE *v1467; // r8
  __int64 v1468; // r9
  int v1469; // ecx
  int v1470; // ecx
  int v1471; // ecx
  int v1472; // ecx
  int v1473; // ecx
  __int64 v1474; // rax
  int v1475; // eax
  int v1476; // eax
  int v1477; // eax
  unsigned __int64 v1478; // r14
  int v1479; // eax
  int v1480; // ecx
  __int64 v1481; // rcx
  __int64 v1482; // rax
  __int64 v1483; // r15
  __int64 v1484; // r8
  unsigned __int64 v1485; // r12
  unsigned int v1486; // r13d
  unsigned int v1487; // eax
  _BYTE *v1488; // r14
  int v1489; // edx
  unsigned int v1490; // ecx
  __int64 v1491; // r9
  int v1492; // r8d
  unsigned __int64 v1493; // rax
  int v1494; // ebx
  int v1495; // ecx
  _BYTE *v1496; // r10
  _QWORD *v1497; // rax
  int v1498; // ecx
  __int64 v1499; // rdx
  _QWORD *v1500; // r8
  _QWORD *v1501; // r9
  const char *v1502; // rax
  int v1503; // r11d
  unsigned __int64 v1504; // rdx
  __int64 v1505; // r8
  unsigned __int64 v1506; // rax
  __int64 v1507; // rax
  unsigned __int64 i30; // rax
  __int64 v1509; // r15
  unsigned __int64 v1510; // rbx
  __int64 v1511; // rcx
  unsigned __int8 v1512; // r12
  unsigned __int64 v1513; // rcx
  __int128 v1514; // xmm0
  int v1515; // ecx
  _QWORD *v1516; // rax
  __int64 v1517; // rdx
  _QWORD *v1518; // rax
  unsigned __int64 v1519; // rcx
  unsigned int v1520; // ebx
  __int64 v1521; // rax
  unsigned int *v1522; // r15
  unsigned int v1523; // r13d
  __int64 v1524; // r8
  __int64 v1525; // rdx
  __int64 v1526; // rcx
  char *v1527; // r10
  int v1528; // esi
  int v1529; // ecx
  __int16 v1530; // ax
  char *v1531; // r8
  int v1532; // r11d
  signed __int64 v1533; // r9
  __int64 v1534; // rdx
  __int64 v1535; // rax
  __int64 *v1536; // r9
  unsigned int v1537; // r8d
  __int64 *v1538; // r11
  __int64 v1539; // rcx
  __int64 v1540; // rax
  __int64 v1541; // rdx
  __int64 v1542; // rax
  char *v1543; // r8
  signed __int64 v1544; // r9
  int v1545; // r11d
  __int64 v1546; // rdx
  __int64 v1547; // rax
  char *v1548; // r8
  signed __int64 v1549; // r9
  int v1550; // r11d
  __int64 v1551; // rdx
  __int64 v1552; // rax
  unsigned int v1553; // ecx
  __int64 v1554; // rdx
  unsigned int v1555; // r12d
  unsigned int v1556; // eax
  __int64 v1557; // rax
  unsigned int v1558; // r8d
  char *v1559; // r9
  _DWORD *v1560; // rax
  const char *v1561; // rax
  int v1562; // ebx
  unsigned __int64 v1563; // rdx
  const char *v1564; // rcx
  unsigned __int64 v1565; // r11
  __int64 v1566; // rax
  unsigned __int64 i31; // rax
  int v1568; // ecx
  __int64 v1569; // rcx
  __int64 v1570; // rax
  __int64 v1571; // rdx
  int v1572; // ecx
  __int64 v1573; // rax
  __int64 v1574; // rdx
  __int64 v1575; // rcx
  int v1576; // r13d
  __int64 v1577; // rax
  int v1578; // ecx
  __int64 v1579; // r15
  __int64 v1580; // r8
  unsigned int v1581; // eax
  int v1582; // edx
  unsigned int v1583; // ecx
  __int64 v1584; // r9
  int v1585; // r8d
  unsigned __int64 v1586; // rax
  int v1587; // esi
  int v1588; // ecx
  __int64 v1589; // r8
  unsigned __int64 *v1590; // r14
  unsigned int *v1591; // r15
  __int64 v1592; // r12
  unsigned __int64 v1593; // r11
  int v1594; // ecx
  _QWORD *v1595; // rax
  __int64 v1596; // rdx
  const char *v1597; // rax
  int v1598; // esi
  unsigned __int64 v1599; // rdx
  int v1600; // r10d
  unsigned __int64 v1601; // rax
  __int64 v1602; // rax
  unsigned __int64 i32; // rax
  __int64 v1604; // rax
  unsigned __int64 v1605; // r13
  _DWORD *v1606; // rax
  __int64 v1607; // r15
  unsigned int v1608; // eax
  __int64 v1609; // r14
  int v1610; // edx
  unsigned int v1611; // ecx
  __int64 v1612; // r9
  int v1613; // r8d
  unsigned __int64 v1614; // rax
  int v1615; // ebx
  int v1616; // ecx
  _QWORD *v1617; // rax
  int v1618; // ecx
  __int64 v1619; // rdx
  unsigned __int64 v1620; // rsi
  const char *v1621; // rax
  int v1622; // r11d
  int v1623; // r10d
  unsigned __int64 v1624; // rax
  __int64 v1625; // rax
  unsigned __int64 i33; // rax
  __int64 v1627; // rax
  __int64 v1628; // r14
  unsigned __int64 v1629; // r15
  __int64 v1630; // r13
  __int64 v1631; // rax
  __int64 v1632; // rcx
  unsigned __int64 v1633; // rcx
  _QWORD *v1634; // rax
  _QWORD *v1635; // rax
  ULONG_PTR v1636; // r14
  __int64 v1637; // rax
  __int64 v1638; // r13
  unsigned __int16 v1639; // r12
  unsigned __int128 v1640; // rax
  unsigned int *v1641; // r14
  unsigned int *v1642; // r11
  __int64 v1643; // r8
  unsigned int v1644; // r15d
  int *v1645; // r12
  int v1646; // ecx
  unsigned int v1647; // edx
  unsigned int v1648; // r13d
  unsigned int v1649; // eax
  __int64 v1650; // r10
  __int64 v1651; // r13
  __int16 v1652; // r12
  __int64 v1653; // rax
  __int64 v1654; // rax
  __int64 v1655; // r15
  unsigned int v1656; // eax
  __int64 v1657; // r14
  int v1658; // edx
  unsigned int v1659; // ecx
  __int64 v1660; // r9
  int v1661; // r8d
  unsigned __int64 v1662; // rax
  int v1663; // ebx
  int v1664; // ecx
  __int64 v1665; // rcx
  _QWORD *v1666; // rax
  int v1667; // edx
  __int64 v1668; // r8
  __int64 v1669; // rax
  unsigned __int64 v1670; // rdx
  unsigned __int64 i34; // rax
  ULONG_PTR v1672; // rsi
  __int64 v1673; // rax
  __int64 v1674; // rcx
  __int64 v1675; // rax
  unsigned int *v1676; // r8
  unsigned int *v1677; // r15
  __int64 v1678; // rdx
  _DWORD *v1679; // rax
  __int64 v1680; // rcx
  char *v1681; // r11
  unsigned int *v1682; // r15
  int v1683; // r13d
  int v1684; // ecx
  __int16 v1685; // ax
  char *v1686; // r8
  int v1687; // r10d
  signed __int64 v1688; // r9
  __int64 v1689; // rdx
  __int64 v1690; // rax
  __int64 *v1691; // r9
  unsigned int v1692; // r8d
  __int64 *v1693; // r10
  __int64 v1694; // rcx
  __int64 v1695; // rax
  __int64 v1696; // rdx
  __int64 v1697; // rax
  char *v1698; // r8
  signed __int64 v1699; // r9
  int v1700; // r10d
  __int64 v1701; // rdx
  __int64 v1702; // rax
  char *v1703; // r8
  signed __int64 v1704; // r9
  int v1705; // r10d
  __int64 v1706; // rdx
  __int64 v1707; // rax
  unsigned int v1708; // ecx
  unsigned int v1709; // edx
  unsigned int *v1710; // rcx
  unsigned int v1711; // r15d
  unsigned int i35; // r10d
  bool v1713; // cf
  unsigned int *v1714; // rcx
  ULONG_PTR *v1715; // rdx
  __int64 v1716; // rax
  unsigned int v1717; // r9d
  _QWORD *v1718; // r8
  ULONG_PTR v1719; // r11
  const char *v1720; // rax
  int v1721; // ecx
  unsigned __int64 v1722; // rdx
  unsigned __int64 v1723; // rax
  __int64 v1724; // rax
  unsigned __int64 i36; // rax
  unsigned int *v1726; // r12
  unsigned int v1727; // r15d
  _BYTE *v1728; // rax
  unsigned int v1729; // edx
  __int64 v1730; // rcx
  unsigned int v1731; // r8d
  unsigned __int64 *v1732; // rdx
  unsigned int *v1733; // rcx
  unsigned __int64 v1734; // rsi
  const char *v1735; // rax
  int v1736; // ecx
  unsigned __int64 v1737; // rdx
  unsigned __int64 v1738; // rax
  __int64 v1739; // rax
  unsigned __int64 i37; // rax
  __int64 v1741; // rcx
  unsigned int v1742; // r9d
  _QWORD *v1743; // rdx
  unsigned int v1744; // eax
  unsigned int *v1745; // rcx
  const char *v1746; // r8
  const char *v1747; // r11
  const char *v1748; // rax
  int v1749; // ecx
  unsigned __int64 i38; // rdx
  unsigned __int64 v1751; // r10
  __int64 v1752; // rax
  unsigned __int64 i39; // rax
  __int64 v1754; // r8
  unsigned int *v1755; // rdx
  _BYTE *v1756; // rax
  __int64 v1757; // rax
  __int64 v1758; // rcx
  __int64 v1759; // rax
  __int64 v1760; // r15
  __int64 v1761; // rcx
  __int64 v1762; // r15
  __int64 i29; // r14
  __int64 v1764; // rax
  __int64 v1765; // rdx
  int v1766; // eax
  __int64 v1767; // rax
  __int64 v1768; // r14
  int v1769; // eax
  __int64 v1770; // rax
  __int64 v1771; // rbx
  int v1772; // r14d
  __int64 v1773; // rbx
  __int64 v1774; // rax
  int v1775; // eax
  __int64 v1776; // rcx
  __int64 v1777; // rbx
  int v1778; // eax
  __int64 v1779; // rax
  __int64 v1780; // rbx
  unsigned __int64 v1781; // rcx
  unsigned __int128 v1782; // rax
  __int64 v1783; // rax
  int *v1784; // r14
  _QWORD *v1785; // r8
  unsigned __int64 v1786; // r9
  const char *v1787; // rax
  int v1788; // r11d
  unsigned __int64 v1789; // rdx
  unsigned __int64 v1790; // r10
  __int64 v1791; // rax
  unsigned __int64 i48; // rax
  __int64 v1793; // rax
  __int64 v1794; // rcx
  unsigned __int64 v1795; // rcx
  unsigned __int64 i49; // rax
  unsigned __int64 v1797; // rcx
  unsigned __int128 v1798; // rax
  __int64 *v1799; // r12
  __int64 v1800; // r8
  bool v1801; // r10
  unsigned __int64 v1802; // rcx
  __int64 v1803; // rax
  unsigned __int128 v1804; // rt2
  int v1805; // ebx
  unsigned __int64 v1806; // rcx
  unsigned __int128 v1807; // rax
  unsigned __int64 v1808; // r15
  __int64 v1809; // rax
  __int64 v1810; // r11
  unsigned int v1811; // r9d
  unsigned __int64 v1812; // r12
  __int64 v1813; // rax
  unsigned int v1814; // r14d
  int v1815; // r9d
  int v1816; // r9d
  _QWORD *v1817; // r8
  unsigned __int64 v1818; // r10
  unsigned __int64 v1819; // rcx
  unsigned __int128 v1820; // rax
  unsigned __int64 v1821; // rcx
  unsigned __int64 v1822; // rcx
  unsigned __int64 v1823; // rdx
  unsigned int v1824; // ebx
  unsigned __int64 v1825; // r9
  _QWORD *v1826; // r8
  unsigned __int64 v1827; // r10
  unsigned __int64 v1828; // rcx
  unsigned __int128 v1829; // rax
  unsigned __int64 v1830; // rcx
  unsigned __int64 v1831; // rcx
  unsigned __int64 v1832; // rdx
  int v1833; // r8d
  char *v1834; // rcx
  _QWORD *v1835; // rdx
  __int64 v1836; // rdi
  char v1837; // al
  unsigned int v1838; // r10d
  int v1839; // r15d
  int v1840; // r10d
  unsigned int v1841; // r15d
  _QWORD *v1842; // rbx
  _QWORD *v1843; // r8
  unsigned __int64 v1844; // rcx
  int v1845; // r11d
  unsigned __int128 v1846; // rax
  char *v1847; // rcx
  __int64 v1848; // r12
  __int64 v1849; // rdx
  char v1850; // al
  _QWORD *v1851; // rax
  __int64 v1852; // rdx
  int v1853; // ecx
  _QWORD *v1854; // r11
  const char *v1855; // rax
  unsigned __int64 v1856; // r8
  int v1857; // r13d
  __int64 v1858; // rdx
  unsigned __int64 v1859; // rax
  __int64 v1860; // rax
  char *v1861; // rcx
  int v1862; // r8d
  __int64 v1863; // r11
  __int64 v1864; // r14
  char v1865; // al
  _QWORD *v1866; // rcx
  int v1867; // edx
  _QWORD *v1868; // rdx
  unsigned __int64 v1869; // rcx
  unsigned __int128 v1870; // rax
  __int64 v1871; // rdi
  __int64 v1872; // r13
  unsigned int v1873; // ebx
  __int64 v1874; // r15
  int v1875; // r12d
  __int64 *v1876; // r11
  unsigned __int64 v1877; // r10
  __int64 v1878; // rdx
  __int64 v1879; // r8
  __int64 v1880; // rdx
  __int64 v1881; // rax
  __int64 v1882; // rdx
  _QWORD *v1883; // r9
  unsigned __int64 v1884; // r8
  const char *v1885; // rax
  int v1886; // r10d
  unsigned __int64 v1887; // rdx
  unsigned __int64 v1888; // rax
  __int64 v1889; // rax
  unsigned __int64 i50; // rax
  int v1891; // r12d
  int v1892; // r13d
  int v1893; // r14d
  __int64 v1894; // rax
  unsigned int v1895; // r9d
  _QWORD *v1896; // r10
  _QWORD *v1897; // r8
  unsigned __int64 v1898; // rcx
  unsigned __int128 v1899; // rax
  char *v1900; // rcx
  __int64 v1901; // r11
  int v1902; // edx
  __int64 v1903; // r11
  __int64 v1904; // rbx
  char v1905; // al
  int v1906; // ecx
  _QWORD *v1907; // rax
  __int64 v1908; // rdx
  _QWORD *v1909; // rbx
  const char *v1910; // rax
  unsigned __int64 v1911; // r8
  int v1912; // r15d
  __int64 v1913; // rdx
  unsigned __int64 v1914; // rax
  __int64 v1915; // rax
  char *v1916; // rcx
  __int64 v1917; // r8
  int v1918; // r15d
  char v1919; // al
  _QWORD *v1920; // rcx
  int v1921; // edx
  _QWORD *v1922; // rdx
  unsigned __int64 v1923; // rcx
  unsigned __int128 v1924; // rax
  __int64 v1925; // r14
  __int64 v1926; // r15
  __int64 *v1927; // r10
  unsigned int v1928; // r11d
  __int64 v1929; // rbx
  unsigned __int64 v1930; // r9
  __int64 v1931; // rdx
  __int64 v1932; // r8
  __int64 v1933; // rdx
  unsigned __int64 v1934; // rax
  __int64 v1935; // rdx
  int v1936; // r13d
  __int64 v1937; // r14
  _QWORD *v1938; // r9
  int v1939; // r15d
  _QWORD *v1940; // rdx
  int v1941; // r8d
  char *v1942; // rcx
  __int64 v1943; // r10
  char v1944; // al
  int v1945; // ecx
  _QWORD *v1946; // rax
  __int64 v1947; // rdx
  _QWORD *v1948; // r10
  const char *v1949; // rax
  unsigned __int64 v1950; // r8
  int v1951; // ebx
  __int64 v1952; // rdx
  unsigned __int64 v1953; // r11
  __int64 v1954; // rax
  char *v1955; // rcx
  __int64 v1956; // r8
  char v1957; // al
  unsigned int v1958; // r11d
  __int64 v1959; // r14
  __int64 v1960; // r12
  __int64 v1961; // r13
  __int64 *v1962; // r10
  int v1963; // r11d
  unsigned int v1964; // ebx
  __int64 v1965; // r15
  __int64 v1966; // r9
  __int64 v1967; // rdx
  __int64 v1968; // r8
  __int64 v1969; // rdx
  __int64 v1970; // rdx
  int v1971; // r10d
  int v1972; // r13d
  int v1973; // r15d
  int v1974; // r9d
  unsigned int v1975; // r10d
  _QWORD *v1976; // r8
  unsigned __int64 v1977; // rcx
  unsigned __int128 v1978; // rax
  _QWORD *v1979; // r11
  __int64 v1980; // rbx
  int v1981; // edx
  __int64 v1982; // rbx
  char *v1983; // rcx
  __int64 v1984; // r14
  char v1985; // al
  int v1986; // ecx
  _QWORD *v1987; // rax
  __int64 v1988; // rdx
  _QWORD *v1989; // r14
  const char *v1990; // rax
  unsigned __int64 v1991; // rdx
  int v1992; // r12d
  __int64 v1993; // r8
  unsigned __int64 v1994; // r15
  __int64 v1995; // rax
  char *v1996; // rcx
  __int64 v1997; // rdx
  int v1998; // r12d
  char v1999; // al
  int v2000; // edx
  _QWORD *v2001; // rcx
  _QWORD *v2002; // rdx
  unsigned __int64 v2003; // rcx
  unsigned __int128 v2004; // rax
  __int64 v2005; // rdi
  __int64 v2006; // r14
  __int64 *v2007; // r10
  unsigned int v2008; // r11d
  __int64 v2009; // rbx
  __int64 v2010; // r9
  __int64 v2011; // rdx
  __int64 v2012; // r8
  int v2013; // r15d
  __int64 v2014; // rdx
  __int64 v2015; // rdx
  char v2016; // cl
  __int64 v2017; // rdx
  __int64 v2018; // r9
  unsigned __int64 v2019; // rcx
  unsigned __int64 v2020; // rcx
  char v2021; // cl
  __int64 v2022; // rdx
  __int64 v2023; // r9
  unsigned __int64 i51; // r13
  _DWORD *v2025; // r15
  unsigned __int64 v2026; // rcx
  __int64 v2027; // rax
  unsigned __int128 v2028; // rt2
  int v2029; // r8d
  char *v2030; // rbx
  char *v2031; // rcx
  _QWORD *v2032; // rdx
  __int64 v2033; // r9
  char v2034; // al
  int v2035; // eax
  unsigned __int64 v2036; // r8
  int v2037; // r10d
  unsigned __int64 v2038; // rcx
  unsigned __int128 v2039; // rax
  int v2040; // r9d
  unsigned __int64 v2041; // rcx
  unsigned __int128 v2042; // rax
  int v2043; // edx
  ULONG_PTR v2044; // rsi
  __int64 v2045; // r12
  __int64 v2046; // r8
  __int64 v2047; // r13
  __int64 v2048; // rax
  __int64 v2049; // r9
  __int64 v2050; // rcx
  int v2051; // r10d
  __int64 v2052; // rdx
  _QWORD *v2053; // rax
  __int64 v2054; // r8
  int v2055; // r10d
  __int64 v2056; // rcx
  __int64 v2057; // r8
  _QWORD *v2058; // rax
  __int64 v2059; // rdx
  unsigned __int64 v2060; // rdx
  _QWORD *v2061; // r10
  ULONG_PTR v2062; // r9
  __int64 v2063; // r8
  unsigned __int64 v2064; // rcx
  unsigned __int128 v2065; // rax
  __int64 v2066; // rdx
  _QWORD *v2067; // rax
  int v2068; // ecx
  int v2069; // ecx
  int v2070; // ecx
  int v2071; // ecx
  __int64 v2072; // r8
  unsigned __int64 v2073; // rax
  unsigned __int128 v2074; // rax
  __int64 v2075; // rdx
  __int64 v2076; // rcx
  __int64 v2077; // rdi
  __int64 v2078; // rax
  int v2079; // edx
  _QWORD *v2080; // rcx
  __int64 v2081; // r13
  char v2082; // al
  __int64 v2083; // rdx
  __int64 v2084; // rcx
  int v2085; // r8d
  _QWORD *v2086; // rcx
  __int64 v2087; // r13
  char v2088; // al
  unsigned __int64 v2089; // rax
  unsigned __int128 v2090; // rax
  unsigned __int64 v2091; // rdi
  unsigned __int128 v2092; // rax
  __int64 v2093; // r13
  __int64 v2094; // r8
  __int64 v2095; // r11
  __int64 v2096; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  struct _KTHREAD *v2098; // r15
  unsigned __int64 DpcStack; // r14
  __int64 v2100; // rdx
  unsigned __int64 v2101; // r12
  unsigned __int64 v2102; // r8
  unsigned __int64 v2103; // r10
  unsigned int v2104; // r11d
  _QWORD *v2105; // r9
  unsigned __int64 v2106; // rcx
  unsigned __int64 v2107; // rax
  __int64 v2108; // rsi
  _QWORD *v2109; // rcx
  char *v2110; // r11
  int v2111; // ebx
  unsigned __int64 v2112; // rdi
  signed __int64 v2113; // r11
  int v2114; // ecx
  int v2115; // ecx
  int v2116; // ecx
  int v2117; // ecx
  int v2118; // ecx
  volatile signed __int32 *v2119; // rax
  __int64 v2120; // rax
  ULONG_PTR v2122; // r8
  ULONG_PTR v2123; // r8
  ULONG_PTR v2124; // r8
  ULONG_PTR v2125; // r8
  ULONG_PTR v2126; // r8
  ULONG_PTR v2127; // r8
  ULONG_PTR v2128; // r8
  signed __int32 v2129[8]; // [rsp+A00h] [rbp+A00h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A20h] [rbp+A20h]
  __int64 v2131; // [rsp+A28h] [rbp+A28h]
  unsigned int *v2132; // [rsp+A38h] [rbp+A38h]
  _BYTE v2133[2560]; // [rsp+AC0h] [rbp+AC0h] BYREF

  v1 = (unsigned int *)((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL);
  v2 = a1;
  if ( (*(_DWORD *)(a1 + 1752) & 0x110000) != 0x110000 )
  {
    v3 = v1 + 544;
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
    *(_OWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x890) = *(_OWORD *)(v2 + 1528);
    *(_OWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x8A0) = *(_OWORD *)(v2 + 1544);
    v6 = *(_OWORD *)(v2 + 1560);
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x2E2) = ((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL)
                                                                           + 2176;
    *(_WORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x890) = v2 + 1576;
    *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x898) = (v2 + 1576) >> 32;
    *(_OWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x9A0) = v6;
    *(_WORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x2E0) = 304;
    *(_WORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x896) = (unsigned int)(v2 + 1576) >> 16;
    _disable();
    if ( (*(_DWORD *)(v2 + 1752) & 0x80000000) != 0 )
    {
      __writedr(7u, 0LL);
    }
    else
    {
      __sidt(v1 + 286);
      __lidt(v1 + 184);
      __writedr(7u, 0LL);
      __lidt(v1 + 286);
    }
    _enable();
  }
  *(_DWORD *)(v2 + 1504) = 0;
  if ( (*(_DWORD *)(v2 + 1752) & 0x40000000) == 0 || !*(_QWORD *)(v2 + 1912) )
  {
    v7 = *(_QWORD *)(v2 + 1392);
    v8 = (_QWORD *)(v2 + 1360);
    v9 = (char *)(v2 + 1360);
    v10 = v1 + 486;
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
    *(_QWORD *)(v2 + 1392) = 0LL;
    v14 = 32;
    *(_DWORD *)(v2 + 1504) = 0;
    v15 = 4LL;
    v16 = (_QWORD *)(v2 + 1360);
    do
    {
      *v16 = 0LL;
      v14 -= 8;
      ++v16;
      --v15;
    }
    while ( v15 );
    for ( ; v14; --v14 )
    {
      *(_BYTE *)v16 = 0;
      v16 = (_QWORD *)((char *)v16 + 1);
    }
    v17 = (_QWORD *)v2;
    *(_DWORD *)(v2 + 1504) += *(_DWORD *)(v2 + 1436);
    v18 = (const char *)v2;
    v19 = *(unsigned int *)(v2 + 1436);
    v20 = *(_DWORD *)(v2 + 1484);
    v21 = *(_QWORD *)(v2 + 1488);
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
    *(_QWORD *)(v2 + 1392) = v7;
    v24 = (char *)(v1 + 486);
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
    if ( *(_QWORD *)(v2 + 1392) != v21 )
    {
      v28 = *(_QWORD *)(v2 + 1240);
      v29 = *(_DWORD *)(v2 + 1436);
      *(_QWORD *)v28 = v2;
      *(_DWORD *)(v28 + 16) = v29;
      if ( !*(_DWORD *)(v2 + 1616) )
      {
        *(_QWORD *)(*(_QWORD *)(v2 + 1240) + 24LL) = v21 ^ *(_QWORD *)(v2 + 1392);
        if ( !*(_DWORD *)(v2 + 1616) )
        {
          *(_QWORD *)(v2 + 1624) = v2 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v2 + 1632) = 0LL;
          *(_QWORD *)(v2 + 1640) = 257LL;
          *(_QWORD *)(v2 + 1648) = v21;
          *(_DWORD *)(v2 + 1616) = 1;
        }
      }
    }
  }
  *(_DWORD *)(v2 + 1752) |= 4u;
  ++*(_DWORD *)(v2 + 1516);
  v30 = *(_DWORD *)(v2 + 1752);
  if ( (v30 & 8) != 0 && (v30 & 0x800000) == 0 )
  {
    v31 = *(_DWORD *)(v2 + 1756);
    v32 = *(_DWORD *)(v2 + 1436);
    v33 = *(_QWORD *)(v2 + 1856);
    v34 = *(_QWORD *)(a1 + 1904);
    v35 = *(unsigned int *)(a1 + 1472);
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v34;
    v36 = v31 & 1;
    if ( v36 )
      v33 = *(_QWORD *)(a1 + 1312);
    v37 = *(void (__fastcall **)(_QWORD, _QWORD, unsigned int *))(a1 + 328);
    v38 = *(void (__fastcall **)(unsigned __int64, _QWORD, unsigned int *, void (__fastcall *)(_QWORD, _QWORD, _QWORD), __int64))(a1 + 800);
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = *(_QWORD *)(a1 + 1000);
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = *(_QWORD *)(a1 + 680);
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v37;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v38;
    v39 = __rdtsc();
    v40 = (__ROR8__(v39, 3) ^ v39) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x5C8) = *((_QWORD *)&v40 + 1);
    v41 = -1200000000LL - ((unsigned __int64)v40 ^ *((_QWORD *)&v40 + 1)) % 0x5F5E100;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x188) = v41;
    if ( (*(_DWORD *)(a1 + 1752) & 0x4000000) != 0 )
    {
      v42 = __rdtsc();
      v43 = (__ROR8__(v42, 3) ^ v42) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x5D0) = *((_QWORD *)&v43 + 1);
      if ( ((unsigned __int64)v43 ^ *((_QWORD *)&v43 + 1)) % 0xA < 2 )
      {
        v44 = __rdtsc();
        v45 = (__ROR8__(v44, 3) ^ v44) * (unsigned __int128)0x7010008004002001uLL;
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x5D8) = *((_QWORD *)&v45 + 1);
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x188) = (((unsigned __int64)v45 ^ *((_QWORD *)&v45 + 1))
                                                                                % 0xA
                                                                                + 1)
                                                                               * v41;
      }
    }
    v46 = 0LL;
    v47 = 0LL;
    v48 = *(_DWORD *)(a1 + 1752);
    if ( (v48 & 2) == 0 )
      v32 = v35;
    if ( (v48 & 0x80u) != 0 )
    {
      *v1 = 1;
      v49 = __rdtsc();
      v50 = (__ROR8__(v49, 3) ^ v49) * (unsigned __int128)0x7010008004002001uLL;
      v51 = 243;
      v52 = *((_QWORD *)&v50 + 1);
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x5E0) = *((_QWORD *)&v50 + 1);
      v53 = a1;
      v46 = v50 ^ v52;
      v54 = v46;
      v47 = a1 ^ v46;
      v55 = (_QWORD *)(a1 + 1936);
      do
      {
        *v55-- ^= v54;
        v54 = __ROR8__(v54, v51--);
      }
      while ( v51 );
      v56 = v35;
      v57 = (unsigned __int64)(v35 - 1944) >> 3;
      if ( (_DWORD)v57 )
      {
        v58 = (__int64 *)(a1 + 8 * ((int)v57 + 242LL));
        do
        {
          v59 = *v58--;
          v47 = (2 * v47) ^ __ROR8__(v59, v57);
          LODWORD(v57) = v57 - 1;
        }
        while ( (_DWORD)v57 );
        v34 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
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
      v37 = *(void (__fastcall **)(_QWORD, _QWORD, unsigned int *))(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL)
                                                                  + 0x40);
      v38 = *(void (__fastcall **)(unsigned __int64, _QWORD, unsigned int *, void (__fastcall *)(_QWORD, _QWORD, _QWORD), __int64))(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
    }
    else
    {
      *v1 = 0;
    }
    if ( v34 )
    {
      v2 = a1;
      v38(a1, v32, v1 + 98, (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v37, v34);
    }
    else
    {
      if ( v33 )
      {
        if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int *))(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                              + 8))(
                v33,
                0LL,
                0LL,
                0LL,
                v1 + 98)
          && v36 )
        {
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60))(
            v33,
            0LL,
            0LL);
        }
      }
      else
      {
        v37(0LL, 0LL, v1 + 98);
      }
      v2 = a1;
    }
    if ( *v1 )
    {
      v63 = (_QWORD *)(v2 + 1936);
      v64 = v2 ^ v46;
      v65 = 243;
      do
      {
        *v63-- ^= v46;
        v46 = __ROR8__(v46, v65--);
      }
      while ( v65 );
      v66 = v35;
      v67 = (unsigned __int64)(v35 - 1944) >> 3;
      if ( (_DWORD)v67 )
      {
        v68 = (__int64 *)(v2 + 8 * ((int)v67 + 242LL));
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
        v72 = *(_QWORD *)(v2 + 1240);
        v73 = *(_DWORD *)(v2 + 1436);
        *(_QWORD *)v72 = v2;
        *(_DWORD *)(v72 + 16) = v73;
        if ( !*(_DWORD *)(v2 + 1616) )
        {
          *(_QWORD *)(*(_QWORD *)(v2 + 1240) + 24LL) = v47 ^ v64;
          if ( !*(_DWORD *)(v2 + 1616) )
          {
            *(_QWORD *)(v2 + 1624) = v2 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v2 + 1632) = 0LL;
            *(_QWORD *)(v2 + 1640) = 270LL;
            *(_QWORD *)(v2 + 1648) = v64;
            *(_DWORD *)(v2 + 1616) = 1;
          }
        }
      }
    }
  }
  v74 = *(_DWORD *)(v2 + 196);
  *(_DWORD *)(v2 + 196) = 0;
  LODWORD(v75) = 1336;
  *(_DWORD *)(v2 + 1504) += 1336;
  v76 = (_QWORD *)v2;
  v77 = *(_DWORD *)(v2 + 1484);
  v78 = (const char *)v2;
  v79 = *(_QWORD *)(v2 + 1488);
  if ( v2 < v2 + 1336 )
  {
    do
    {
      _mm_prefetch(v78, 0);
      v78 += 64;
    }
    while ( (unsigned __int64)v78 < v2 + 1336 );
  }
  v80 = 167LL;
  do
  {
    v79 = __ROL8__(*v76++ ^ v79, v77);
    v75 = (unsigned int)(v75 - 8);
    --v80;
  }
  while ( v80 );
  for ( ; (_DWORD)v75; v75 = (unsigned int)(v75 - 1) )
  {
    v81 = *(unsigned __int8 *)v76;
    v76 = (_QWORD *)((char *)v76 + 1);
    v79 = __ROL8__(v81 ^ v79, v77);
  }
  *(_DWORD *)(v2 + 196) = v74;
  if ( *(_QWORD *)(v2 + 1888) != v79 )
  {
    v82 = *(_QWORD *)(v2 + 1240);
    v83 = *(_DWORD *)(v2 + 1436);
    *(_QWORD *)v82 = v2;
    *(_DWORD *)(v82 + 16) = v83;
    if ( !*(_DWORD *)(v2 + 1616) )
      *(_QWORD *)(*(_QWORD *)(v2 + 1240) + 24LL) = *(_QWORD *)(v2 + 1888) ^ v79;
    if ( !*(_DWORD *)(v2 + 1616) )
    {
      *(_QWORD *)(v2 + 1624) = v2 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v2 + 1632) = 0LL;
      *(_QWORD *)(v2 + 1640) = 265LL;
      *(_QWORD *)(v2 + 1648) = v79;
      *(_DWORD *)(v2 + 1616) = 1;
    }
  }
  v84 = *(unsigned int *)(v2 + 1728);
  v85 = v2;
  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v2;
  v86 = 0;
  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = 0;
  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = 0;
  if ( (_DWORD)v84 == -1 )
    goto LABEL_101;
  v87 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *))(v2 + 600))(v84, v79, v75, v76);
  if ( !v87 )
  {
    v87 = (*(__int64 (__fastcall **)(_QWORD))(v2 + 608))(0LL);
    if ( !v87 )
      goto LABEL_100;
  }
  v88 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(v2 + 624))(v87, v1 + 300);
  if ( v88 >= 0 )
  {
    *(_QWORD *)(v2 + 1744) = v87;
    v89 = (*(__int64 (**)(void))(v2 + 664))();
    v90 = (*(__int64 (__fastcall **)(__int64))(v2 + 696))(v89);
    v88 = 0;
    if ( v90 )
    {
      (*(void (__fastcall **)(__int64, __int64))(v2 + 712))(v89, v90);
      v91 = 0;
    }
    else
    {
      v91 = 1;
    }
    *(_DWORD *)(v2 + 1756) ^= (*(_DWORD *)(v2 + 1756) ^ (4 * v91)) & 4;
    *(_DWORD *)(v2 + 1504) += 0x10000;
  }
  else
  {
    (*(void (__fastcall **)(__int64))(v2 + 616))(v87);
  }
  if ( v88 < 0 )
  {
LABEL_100:
    v86 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
LABEL_101:
    *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = __6d(v2, v1 + 300, v1 + 450, v76);
    goto LABEL_102;
  }
  v86 = 1;
  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = 1;
LABEL_102:
  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x140) = 0LL;
  v92 = 4;
  v93 = v1 + 82;
  do
  {
    *v93++ = 0;
    --v92;
  }
  while ( v92 );
  v94 = *(_DWORD *)(v2 + 1496);
  v95 = (_DWORD *)(v2 + 1508);
  v96 = *(_DWORD *)(v2 + 1508);
  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x80) = v94;
  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v2 + 1508;
  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = -1073741670;
  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x6C) = -1073741275;
  if ( *(_DWORD *)(v2 + 1504) >= v96 )
    goto LABEL_1667;
  while ( 2 )
  {
    if ( (*(_DWORD *)(v85 + 1752) & 0x110000) != 0x110000 )
      __writedr(7u, 0LL);
    if ( v94 == *(_DWORD *)(v85 + 1476) )
    {
      ++*(_DWORD *)(v85 + 1512);
      v94 = 0;
      v124 = *(_DWORD *)(v85 + 1704) == 9;
      *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x80) = 0;
      if ( v124 )
      {
        if ( *(_DWORD *)(v85 + 1728) == -1 )
          *(_DWORD *)(v85 + 1728) = 0;
        else
          *(_DWORD *)(v85 + 1752) |= 1u;
      }
    }
    v97 = v85;
    if ( *(_QWORD *)(v85 + 1912) )
      v97 = *(_QWORD *)(v85 + 1912);
    v98 = 0;
    v99 = (char *)(v97 + *(unsigned int *)(v97 + 1472));
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v99;
    if ( *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x140)
      && *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x144) <= v94 )
    {
      v98 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x144);
      v99 = (char *)(v97 + *(unsigned int *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x148));
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v99;
    }
    if ( v98 != v94 )
    {
      v100 = v94 - v98;
      v98 = v94;
      while ( 1 )
      {
        v101 = *(_DWORD *)v99;
        if ( *(int *)v99 > 17 )
        {
          switch ( v101 )
          {
            case 19:
LABEL_139:
              v106 = 56LL;
              goto LABEL_140;
            case 28:
              v107 = *((unsigned __int16 *)v99 + 20);
              goto LABEL_129;
            case 30:
              v106 = (((*((_DWORD *)v99 + 9) - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v99 + 20) + 2);
              goto LABEL_140;
          }
          if ( (unsigned int)(v101 - 33) <= 1 )
          {
            v106 = 20
                 * (unsigned int)(((*((_DWORD *)v99 + 8) & 0xFFF) + (unsigned __int64)*((unsigned int *)v99 + 10) + 4095) >> 12)
                 + 48;
            goto LABEL_140;
          }
        }
        else
        {
          if ( v101 == 17 )
            goto LABEL_139;
          v102 = v101 - 1;
          if ( !v102 )
          {
LABEL_131:
            v106 = 4 * (*((_DWORD *)v99 + 4) / 0xCu) + 48;
            goto LABEL_140;
          }
          v103 = v102 - 6;
          if ( !v103 )
          {
            v106 = (unsigned int)(24 * (*((_DWORD *)v99 + 6) + 2));
            goto LABEL_140;
          }
          v104 = v103 - 1;
          if ( !v104 )
          {
            v107 = *((unsigned __int16 *)v99 + 16);
LABEL_129:
            v106 = (v107 + 55) & 0xFFFFFFF8;
            goto LABEL_140;
          }
          v105 = v104 - 2;
          if ( !v105 )
          {
            v106 = (unsigned int)(16 * (*((_DWORD *)v99 + 7) + 3));
            goto LABEL_140;
          }
          if ( v105 == 2 )
            goto LABEL_131;
        }
        v106 = 48LL;
LABEL_140:
        v99 += v106;
        if ( !--v100 )
        {
          v85 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
          v95 = *(_DWORD **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v99;
          break;
        }
      }
    }
    *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x140) = 1;
    *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x144) = v98;
    *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x148) = (_DWORD)v99 - v97;
    v108 = *(_DWORD *)v99;
    if ( *(int *)v99 <= 20 )
    {
      if ( v108 != 20 )
      {
        if ( v108 <= 11 )
        {
          if ( v108 == 11 )
          {
            if ( !*(_QWORD *)(v85 + 1744) )
              goto LABEL_171;
            v188 = *(_DWORD *)(v85 + 1756);
            if ( *(_DWORD *)(v85 + 1500) )
            {
              if ( (((v188 ^ (v188 >> 2)) >> 2) & 1) != 0 )
                goto LABEL_171;
            }
            else
            {
              *(_DWORD *)(v85 + 1756) = v188 ^ ((unsigned __int8)v188 ^ (unsigned __int8)(4 * v188)) & 0x10;
            }
            if ( (*(_DWORD *)(v85 + 1756) & 4) != 0 )
            {
              v189 = *((_QWORD *)v99 + 1) & 0xFFFFFFFFFFFFF000uLL;
              for ( i = (*((unsigned int *)v99 + 4) + (unsigned __int64)(*((_DWORD *)v99 + 2) & 0xFFF) + 4095) >> 12;
                    i;
                    v189 += 4096LL )
              {
                --i;
                if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v85 + 656))(v189) && !*(_DWORD *)(v85 + 1616) )
                {
                  *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1640) = *(int *)v99;
                  *(_QWORD *)(v85 + 1648) = v189;
                  *(_DWORD *)(v85 + 1616) = 1;
                }
                *(_DWORD *)(v85 + 1504) += 256;
              }
              goto LABEL_185;
            }
            v191 = (_QWORD *)*((_QWORD *)v99 + 1);
            v192 = *((unsigned int *)v99 + 4);
            v193 = (const char *)v191;
            *(_DWORD *)(v85 + 1504) += v192;
            v194 = *(_DWORD *)(v85 + 1484);
            v181 = *(_QWORD *)(v85 + 1488);
            if ( v191 < (_QWORD *)((char *)v191 + v192) )
            {
              do
              {
                _mm_prefetch(v193, 0);
                v193 += 64;
              }
              while ( v193 < (const char *)v191 + v192 );
            }
            if ( (unsigned int)v192 >= 8 )
            {
              v195 = v192 >> 3;
              do
              {
                v181 = __ROL8__(*v191++ ^ v181, v194);
                LODWORD(v192) = v192 - 8;
                --v195;
              }
              while ( v195 );
            }
            for ( ; (_DWORD)v192; LODWORD(v192) = v192 - 1 )
            {
              v196 = *(unsigned __int8 *)v191;
              v191 = (_QWORD *)((char *)v191 + 1);
              v181 = __ROL8__(v196 ^ v181, v194);
            }
            for ( j = v181; ; LODWORD(v181) = j ^ v181 )
            {
              j >>= 31;
              if ( !j )
                break;
            }
          }
          else
          {
            if ( v108 )
            {
              if ( v108 != 1 )
              {
                switch ( v108 )
                {
                  case 4:
                    if ( (*(_DWORD *)(v85 + 1512) & 1) != 0 )
                      goto LABEL_185;
                    v169 = *(_QWORD *)(v85 + 1168);
                    v168 = 0;
                    (*(void (**)(void))(v85 + 352))();
                    (*(void (__fastcall **)(__int64, _QWORD))(v85 + 272))(v169, 0LL);
                    v170 = *(_QWORD ***)(v85 + 1128);
                    for ( k = *v170; k != v170; k = (_QWORD *)*k )
                    {
                      *((_BYTE *)k - 306) = 1;
                      ++v168;
                    }
                    v172 = *(_QWORD *)(v85 + 1104);
                    CurrentIrql = KeGetCurrentIrql();
                    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = CurrentIrql;
                    __writecr8(0xCuLL);
                    (*(void (__fastcall **)(__int64, unsigned int *))(v85 + 304))(v172, v1 + 480);
                    v174 = *(_QWORD ***)(v85 + 1096);
                    v175 = *v174;
                    if ( *v174 != v174 )
                    {
                      do
                      {
                        v176 = v175 - 72;
                        if ( !*((_BYTE *)v175 - 130) && !*(_DWORD *)(v85 + 1616) )
                        {
                          *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v85 + 1640) = *(int *)v99;
                          *(_QWORD *)(v85 + 1648) = v176;
                          *(_DWORD *)(v85 + 1616) = 1;
                        }
                        *((_BYTE *)v176 + 446) = 0;
                        v175 = (_QWORD *)*v175;
                      }
                      while ( v175 != v174 );
                      CurrentIrql = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                    }
                    (*(void (__fastcall **)(unsigned int *))(v85 + 368))(v1 + 480);
                    __writecr8((unsigned __int8)CurrentIrql);
                    (*(void (__fastcall **)(_QWORD, _QWORD))(v85 + 280))(*(_QWORD *)(v85 + 1168), 0LL);
                    (*(void (**)(void))(v85 + 360))();
                    break;
                  case 5:
                    v150 = *(_DWORD *)(v85 + 1512);
                    if ( (v150 & 1) == 0 )
                      goto LABEL_185;
                    if ( (*(_DWORD *)(v85 + 1752) & 0x40000000) != 0 )
                    {
                      v152 = __rdtsc();
                      v153 = (__ROR8__(v152, 3) ^ v152) * (unsigned __int128)0x7010008004002001uLL;
                      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x5E8) = *((_QWORD *)&v153 + 1);
                      v151 = ((unsigned __int64)v153 ^ *((_QWORD *)&v153 + 1)) == 3
                                                                                * (((unsigned __int64)v153 ^ *((_QWORD *)&v153 + 1))
                                                                                 / 3);
                    }
                    else
                    {
                      v151 = (v150 & 3) == 3;
                    }
                    v154 = *(_QWORD *)(v85 + 1168);
                    v155 = 0;
                    *v1 = 0;
                    (*(void (**)(void))(v85 + 352))();
                    (*(void (__fastcall **)(__int64, _QWORD))(v85 + 272))(v154, 0LL);
                    v156 = *(_QWORD ***)(v85 + 1128);
                    v157 = *v156;
                    if ( *v156 != v156 )
                    {
                      do
                      {
                        *((_BYTE *)v157 - 306) = 1;
                        ++v155;
                        v157 = (_QWORD *)*v157;
                      }
                      while ( v157 != v156 );
                      *v1 = v155;
                    }
                    v158 = *(unsigned int ***)(v85 + 1176);
                    v159 = *(int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                    v160 = 4LL;
                    v161 = (__int64)*v158;
                    v162 = **v158;
                    do
                    {
                      v163 = (__int64 *)(*(__int64 (__fastcall **)(__int64, unsigned __int64))(v85 + 240))(v161, v160);
                      if ( v163 )
                      {
                        v164 = (_BYTE *)((*v163 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
                        v165 = *v164 & 0x7F;
                        if ( v165 == 3 )
                        {
                          if ( !*(_BYTE *)(((*v163 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x1BE)
                            && (*(_DWORD *)(((*v163 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x304) & 0x4000000) != 0
                            && !*(_DWORD *)(v85 + 1616) )
                          {
                            *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(v85 + 1632) = (char *)v159 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(v85 + 1640) = *v159;
                            *(_QWORD *)(v85 + 1648) = v164;
                            *(_DWORD *)(v85 + 1616) = 1;
                          }
                          v164[446] = 0;
                        }
                        else if ( v165 == 6 && v151 )
                        {
                          if ( (v166 = *(_QWORD *)(((*v163 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x2A8),
                                v166 != *(_QWORD *)(v85 + 768))
                            && v166 != *(_QWORD *)(v85 + 776)
                            || *(_QWORD *)(((*v163 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x2B8) != *(_QWORD *)(v85 + 784)
                            || *(_QWORD *)(((*v163 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x2B0) != *(_QWORD *)(v85 + 792) )
                          {
                            if ( !*(_DWORD *)(v85 + 1616) )
                            {
                              *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v85 + 1632) = (char *)v159 - 0x4C48B4211BBACBEBLL;
                              *(_QWORD *)(v85 + 1640) = *v159;
                              *(_QWORD *)(v85 + 1648) = v164;
                              *(_DWORD *)(v85 + 1616) = 1;
                            }
                          }
                        }
                        (*(void (__fastcall **)(__int64))(v85 + 264))(v161);
                      }
                      v160 += 4LL;
                    }
                    while ( v160 < v162 );
                    v167 = *v1;
                    (*(void (__fastcall **)(_QWORD, _QWORD))(v85 + 280))(*(_QWORD *)(v85 + 1168), 0LL);
                    (*(void (**)(void))(v85 + 360))();
                    v168 = (v162 >> 2) + v167;
                    break;
                  case 6:
                    goto LABEL_225;
                  case 7:
                    (*(void (__fastcall **)(unsigned int *, _QWORD))(v85 + 392))(v1 + 402, *((unsigned int *)v99 + 7));
                    (*(void (__fastcall **)(unsigned int *, unsigned int *))(v85 + 440))(v1 + 402, v1 + 406);
                    for ( m = 0; m < *((_DWORD *)v99 + 6); ++m )
                    {
                      v143 = *(_QWORD *)&v99[24 * m + 56];
                      v144 = *(_QWORD *)&v99[24 * m + 48] & __readmsr(*(_DWORD *)&v99[24 * m + 64]);
                      if ( v144 != v143 )
                      {
                        v145 = *(unsigned int *)&v99[24 * m + 64] | ((unsigned __int64)*((unsigned int *)v99 + 7) << 32);
                        if ( !*(_DWORD *)(v85 + 1616) )
                        {
                          *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v144 ^ v143;
                          if ( !*(_DWORD *)(v85 + 1616) )
                          {
                            *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(v85 + 1640) = *(int *)v99;
                            *(_QWORD *)(v85 + 1648) = v145;
                            *(_DWORD *)(v85 + 1616) = 1;
                          }
                        }
                      }
                    }
                    (*(void (__fastcall **)(unsigned int *))(v85 + 384))(v1 + 406);
                    v146 = *((_DWORD *)v99 + 6) << 15;
                    goto LABEL_224;
                  case 8:
                    v128 = *((_QWORD *)v99 + 3);
                    if ( *(_BYTE *)(v128 + 66) != v99[34] && !*(_DWORD *)(v85 + 1616) )
                    {
                      *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v85 + 1640) = *(int *)v99;
                      *(_QWORD *)(v85 + 1648) = v128;
                      *(_DWORD *)(v85 + 1616) = 1;
                    }
                    if ( (v99[34] & 0x40) == 0 && *(_QWORD *)(v128 + 200) != v128 + 200 && !*(_DWORD *)(v85 + 1616) )
                    {
                      *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v85 + 1640) = *(int *)v99;
                      *(_QWORD *)(v85 + 1648) = v128;
                      *(_DWORD *)(v85 + 1616) = 1;
                    }
                    v129 = (_QWORD *)*((_QWORD *)v99 + 1);
                    v130 = *((unsigned int *)v99 + 4);
                    v131 = (const char *)v129;
                    *(_DWORD *)(v85 + 1504) += v130;
                    v132 = *(_DWORD *)(v85 + 1484);
                    v133 = *(_QWORD *)(v85 + 1488);
                    if ( v129 < (_QWORD *)((char *)v129 + v130) )
                    {
                      do
                      {
                        _mm_prefetch(v131, 0);
                        v131 += 64;
                      }
                      while ( v131 < (const char *)v129 + v130 );
                    }
                    if ( (unsigned int)v130 >= 8 )
                    {
                      v134 = v130 >> 3;
                      do
                      {
                        v133 = __ROL8__(*v129++ ^ v133, v132);
                        LODWORD(v130) = v130 - 8;
                        --v134;
                      }
                      while ( v134 );
                    }
                    for ( ; (_DWORD)v130; LODWORD(v130) = v130 - 1 )
                    {
                      v135 = *(unsigned __int8 *)v129;
                      v129 = (_QWORD *)((char *)v129 + 1);
                      v133 = __ROL8__(v135 ^ v133, v132);
                    }
                    for ( n = v133; ; LODWORD(v133) = n ^ v133 )
                    {
                      n >>= 31;
                      if ( !n )
                        break;
                    }
                    v137 = *((_DWORD *)v99 + 5);
                    v138 = v133 & 0x7FFFFFFF;
                    if ( v138 != v137 )
                    {
                      if ( !*(_DWORD *)(v85 + 1616) )
                        *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v137 ^ (unsigned __int64)v138;
                      v139 = *((_QWORD *)v99 + 1);
                      if ( !*(_DWORD *)(v85 + 1616) )
                      {
                        *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v85 + 1640) = *(int *)v99;
                        *(_QWORD *)(v85 + 1648) = v139;
                        *(_DWORD *)(v85 + 1616) = 1;
                      }
                    }
                    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x370) = v99 + 48;
                    v140 = *((_WORD *)v99 + 16);
                    *(_WORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x368) = v140;
                    *(_WORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x36A) = v140;
                    LOBYTE(v2131) = 0;
                    if ( (*(int (__fastcall **)(unsigned int *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, unsigned int *))(v85 + 464))(
                           v1 + 218,
                           0LL,
                           0LL,
                           0LL,
                           *(_QWORD *)(v85 + 1112),
                           v2131,
                           0LL,
                           v1 + 170) < 0 )
                      goto LABEL_185;
                    v141 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x2A8);
                    if ( v141 != *((_QWORD *)v99 + 3) && !*(_DWORD *)(v85 + 1616) )
                    {
                      *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v85 + 1640) = *(int *)v99;
                      *(_QWORD *)(v85 + 1648) = v141;
                      *(_DWORD *)(v85 + 1616) = 1;
                      v141 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x2A8);
                    }
LABEL_216:
                    (*(void (__fastcall **)(__int64))(v85 + 456))(v141);
                    goto LABEL_185;
                  case 10:
                    if ( !*((_DWORD *)v99 + 6) )
                      goto LABEL_159;
                    if ( *(_QWORD *)(v85 + 1744) )
                    {
                      v109 = *(_DWORD *)(v85 + 1756);
                      if ( (v109 & 4) == 0 )
                      {
                        if ( !*(_DWORD *)(v85 + 1500) )
                        {
                          *(_DWORD *)(v85 + 1756) = v109 ^ ((unsigned __int8)v109 ^ (unsigned __int8)(4 * v109)) & 0x10;
                          goto LABEL_159;
                        }
                        if ( ((v109 >> 4) & 1) == 0 )
                        {
LABEL_159:
                          v110 = *(int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                          v111 = v99 + 48;
                          v112 = &v111[16 * *(unsigned int *)(v85 + 1500)];
                          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v111;
                          v113 = &v111[16 * v110[7]];
                          while ( 1 )
                          {
                            if ( (*(_DWORD *)v112 & 0x80000000) == 0 )
                            {
                              v114 = (_QWORD *)*((_QWORD *)v112 + 1);
                              v115 = *((unsigned int *)v112 + 1);
                              v116 = v114;
                              *(_DWORD *)(v85 + 1504) += v115;
                              v117 = (const char *)v114;
                              v118 = *(_DWORD *)(v85 + 1484);
                              v119 = *(_QWORD *)(v85 + 1488);
                              if ( v114 < (_QWORD *)((char *)v114 + v115) )
                              {
                                do
                                {
                                  _mm_prefetch(v117, 0);
                                  v117 += 64;
                                }
                                while ( v117 < (const char *)v114 + v115 );
                              }
                              if ( (unsigned int)v115 >= 8 )
                              {
                                v120 = v115 >> 3;
                                do
                                {
                                  v119 = __ROL8__(*v116++ ^ v119, v118);
                                  LODWORD(v115) = v115 - 8;
                                  --v120;
                                }
                                while ( v120 );
                                v110 = *(int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                              }
                              for ( ; (_DWORD)v115; LODWORD(v115) = v115 - 1 )
                              {
                                v121 = *(unsigned __int8 *)v116;
                                v116 = (_QWORD *)((char *)v116 + 1);
                                v119 = __ROL8__(v121 ^ v119, v118);
                              }
                              for ( ii = v119; ; LODWORD(v119) = ii ^ v119 )
                              {
                                ii >>= 31;
                                if ( !ii )
                                  break;
                              }
                              v123 = v119 & 0x7FFFFFFF;
                              if ( v123 != (*(_DWORD *)v112 & 0x7FFFFFFF) && !*(_DWORD *)(v85 + 1616) )
                              {
                                *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = *(_DWORD *)v112 & 0x7FFFFFFF ^ (unsigned __int64)v123;
                                if ( !*(_DWORD *)(v85 + 1616) )
                                {
                                  *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                                  *(_QWORD *)(v85 + 1632) = (char *)v110 - 0x4C48B4211BBACBEBLL;
                                  *(_QWORD *)(v85 + 1640) = *v110;
                                  *(_QWORD *)(v85 + 1648) = v114;
                                  *(_DWORD *)(v85 + 1616) = 1;
                                }
                              }
                            }
                            v112 += 16;
                            v124 = v112 == v113;
                            if ( v112 >= v113 )
                              break;
                            if ( *(_DWORD *)(v85 + 1504) >= *v95 )
                            {
                              v124 = v112 == v113;
                              break;
                            }
                          }
                          if ( v124 )
                            goto LABEL_171;
                          v125 = (__int64)&v112[-*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10)] >> 4;
LABEL_184:
                          *(_DWORD *)(v85 + 1500) = v125;
                          goto LABEL_185;
                        }
                      }
                    }
LABEL_171:
                    *(_DWORD *)(v85 + 1500) = 0;
                    goto LABEL_185;
                  default:
                    goto LABEL_1442;
                }
                *(_DWORD *)(v85 + 1504) += v168 << 8;
                goto LABEL_185;
              }
LABEL_378:
              if ( v108 == 12 )
              {
                if ( !*(_QWORD *)(v85 + 1744) )
                  goto LABEL_171;
                v226 = *(_DWORD *)(v85 + 1756);
                if ( *(_DWORD *)(v85 + 1500) )
                {
                  if ( (((v226 ^ (v226 >> 2)) >> 2) & 1) != 0 )
                    goto LABEL_171;
                }
                else
                {
                  *(_DWORD *)(v85 + 1756) = v226 ^ ((unsigned __int8)v226 ^ (unsigned __int8)(4 * v226)) & 0x10;
                }
                if ( (*(_DWORD *)(v85 + 1756) & 4) != 0 )
                {
                  v227 = *((_QWORD *)v99 + 4);
                  v228 = 0LL;
                  v229 = *((unsigned int *)v99 + 10);
                  if ( v227 )
                  {
                    v230 = *(unsigned int *)(v85 + 1500);
                    v229 = (unsigned int)(v229 - v230);
                    v231 = ((_WORD)v227 + (_WORD)v230) & 0xFFF;
                    v232 = v227 + v230;
                    v233 = (unsigned int)v229 + 4095LL;
                  }
                  else
                  {
                    v232 = *((_QWORD *)v99 + 1);
                    v231 = *((unsigned int *)v99 + 4);
                    v233 = (v232 & 0xFFF) + 4095;
                  }
                  v234 = v232 & 0xFFFFFFFFFFFFF000uLL;
                  v235 = (unsigned __int64)(v231 + v233) >> 12;
                  while ( v235 )
                  {
                    --v235;
                    if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64, __int64))(v85 + 656))(
                           v234,
                           v229,
                           v228)
                      && !*(_DWORD *)(v85 + 1616) )
                    {
                      *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v85 + 1640) = *(int *)v99;
                      *(_QWORD *)(v85 + 1648) = v234;
                      *(_DWORD *)(v85 + 1616) = 1;
                    }
                    *(_DWORD *)(v85 + 1504) += 256;
                    v234 += 4096LL;
                    if ( v227 )
                    {
                      *(_DWORD *)(v85 + 1500) += 4096;
                      if ( *(_DWORD *)(v85 + 1504) >= *v95 )
                        break;
                    }
                  }
                  if ( v227 && !v235 )
                    *(_DWORD *)(v85 + 1500) = 0;
                  if ( *(_DWORD *)(v85 + 1500) )
                    goto LABEL_185;
                  v236 = *(_QWORD *)(v85 + 1160);
                  v237 = *(_QWORD *)(v85 + 1136) + 16LL;
                  v238 = KeGetCurrentIrql();
                  __writecr8(0xFuLL);
                  (*(void (__fastcall **)(__int64, __int64, _QWORD))(v85 + 312))(v236, v229, 0LL);
                  v239 = *(unsigned int **)(v85 + 1136);
                  v240 = 0LL;
                  v241 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                  v242 = *((_BYTE *)v239 + 12) != 0;
                  v243 = v237 + 24LL * *v239;
                  do
                  {
                    v244 = 24LL;
                    v245 = (__int64 *)(v241 + 24);
                    v246 = (__int64 *)v237;
                    do
                    {
                      v247 = *v246++;
                      v248 = *v245++;
                      if ( v247 != v248 )
                        goto LABEL_407;
                      v244 = (unsigned int)(v244 - 8);
                    }
                    while ( (unsigned int)v244 >= 8 );
                    if ( !(_DWORD)v244 )
                      break;
                    while ( 1 )
                    {
                      v240 = *(unsigned __int8 *)v246;
                      v246 = (__int64 *)((char *)v246 + 1);
                      v249 = *(unsigned __int8 *)v245;
                      v245 = (__int64 *)((char *)v245 + 1);
                      if ( v240 != v249 )
                        break;
                      v124 = (_DWORD)v244 == 1;
                      v244 = (unsigned int)(v244 - 1);
                      if ( v124 )
                        goto LABEL_408;
                    }
                    v240 = 0LL;
LABEL_407:
                    v237 += 24LL;
                  }
                  while ( v237 < v243 );
LABEL_408:
                  (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v85 + 376))(
                    *(_QWORD *)(v85 + 1160),
                    v240,
                    v244,
                    v245);
                  __writecr8(v238);
                  if ( v242 && *(_QWORD *)(v241 + 24) == 1LL || v237 != v243 || *(_DWORD *)(v85 + 1616) )
                    goto LABEL_185;
                  v250 = *(int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                  *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1632) = (char *)v250 - 0x4C48B4211BBACBEBLL;
                  v251 = *v250;
                  goto LABEL_413;
                }
              }
              if ( !*(_DWORD *)(v85 + 1500) )
              {
                if ( v108 == 12 )
                {
                  if ( !*(_QWORD *)(v85 + 1744) )
                  {
                    *(_DWORD *)(v85 + 1500) = 0;
                    goto LABEL_451;
                  }
                  v252 = *(_DWORD *)(v85 + 1756) ^ ((unsigned __int8)*(_DWORD *)(v85 + 1756) ^ (unsigned __int8)(4 * *(_DWORD *)(v85 + 1756))) & 0x10;
                  *(_DWORD *)(v85 + 1756) = v252;
                  if ( (v252 & 4) != 0 )
                  {
                    v253 = *((_QWORD *)v99 + 1) & 0xFFFFFFFFFFFFF000uLL;
                    v254 = (*((unsigned int *)v99 + 4) + (unsigned __int64)(*((_DWORD *)v99 + 2) & 0xFFF) + 4095) >> 12;
                    if ( v254 )
                    {
                      do
                      {
                        --v254;
                        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v85 + 656))(v253)
                          && !*(_DWORD *)(v85 + 1616) )
                        {
                          *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v85 + 1640) = *(int *)v99;
                          *(_QWORD *)(v85 + 1648) = v253;
                          *(_DWORD *)(v85 + 1616) = 1;
                        }
                        *(_DWORD *)(v85 + 1504) += 256;
                        v253 += 4096LL;
                      }
                      while ( v254 );
                      v95 = *(_DWORD **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                    }
                    goto LABEL_451;
                  }
                  v255 = (_QWORD *)*((_QWORD *)v99 + 1);
                  v256 = *((unsigned int *)v99 + 4);
                  v257 = (const char *)v255;
                  *(_DWORD *)(v85 + 1504) += v256;
                  v258 = *(_DWORD *)(v85 + 1484);
                  v259 = *(_QWORD *)(v85 + 1488);
                  if ( v255 < (_QWORD *)((char *)v255 + v256) )
                  {
                    do
                    {
                      _mm_prefetch(v257, 0);
                      v257 += 64;
                    }
                    while ( v257 < (const char *)v255 + v256 );
                  }
                  if ( (unsigned int)v256 >= 8 )
                  {
                    v260 = v256 >> 3;
                    do
                    {
                      v259 = __ROL8__(*v255++ ^ v259, v258);
                      LODWORD(v256) = v256 - 8;
                      --v260;
                    }
                    while ( v260 );
                  }
                  for ( ; (_DWORD)v256; LODWORD(v256) = v256 - 1 )
                  {
                    v261 = *(unsigned __int8 *)v255;
                    v255 = (_QWORD *)((char *)v255 + 1);
                    v259 = __ROL8__(v261 ^ v259, v258);
                  }
                  for ( jj = v259; ; LODWORD(v259) = jj ^ v259 )
                  {
                    jj >>= 31;
                    if ( !jj )
                      break;
                  }
                }
                else
                {
                  v266 = (_QWORD *)*((_QWORD *)v99 + 1);
                  v267 = *((unsigned int *)v99 + 4);
                  v268 = (const char *)v266;
                  *(_DWORD *)(v85 + 1504) += v267;
                  v269 = *(_DWORD *)(v85 + 1484);
                  v259 = *(_QWORD *)(v85 + 1488);
                  if ( v266 < (_QWORD *)((char *)v266 + v267) )
                  {
                    do
                    {
                      _mm_prefetch(v268, 0);
                      v268 += 64;
                    }
                    while ( v268 < (const char *)v266 + v267 );
                  }
                  if ( (unsigned int)v267 >= 8 )
                  {
                    v270 = v267 >> 3;
                    do
                    {
                      v259 = __ROL8__(*v266++ ^ v259, v269);
                      LODWORD(v267) = v267 - 8;
                      --v270;
                    }
                    while ( v270 );
                  }
                  for ( ; (_DWORD)v267; LODWORD(v267) = v267 - 1 )
                  {
                    v271 = *(unsigned __int8 *)v266;
                    v266 = (_QWORD *)((char *)v266 + 1);
                    v259 = __ROL8__(v271 ^ v259, v269);
                  }
                  for ( kk = v259; ; LODWORD(v259) = kk ^ v259 )
                  {
                    kk >>= 31;
                    if ( !kk )
                      break;
                  }
                }
                v263 = *((unsigned int *)v99 + 5);
                v264 = v259 & 0x7FFFFFFF;
                if ( v264 != (_DWORD)v263 )
                {
                  if ( !*(_DWORD *)(v85 + 1616) )
                    *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v263 ^ v264;
                  v265 = *((_QWORD *)v99 + 1);
                  if ( !*(_DWORD *)(v85 + 1616) )
                  {
                    *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v85 + 1640) = *(int *)v99;
                    *(_QWORD *)(v85 + 1648) = v265;
                    *(_DWORD *)(v85 + 1616) = 1;
                  }
                }
              }
LABEL_451:
              v273 = *((_QWORD *)v99 + 1);
              v274 = *(unsigned int *)(v85 + 1500);
              v275 = *(int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
              *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v273;
              v276 = (unsigned int *)(v273 + 12 * v274);
              v277 = (unsigned int)v275[4] / 0xCuLL;
              v278 = &v275[v274 + 12];
              v279 = (unsigned int *)(v273 + 12 * v277);
              do
              {
                if ( (*v278 & 0x80000000) == 0 )
                {
                  v280 = (_QWORD *)(*((_QWORD *)v275 + 4) + *v276);
                  v281 = v276[1] - *v276;
                  *(_DWORD *)(v85 + 1504) += v281;
                  v282 = v280;
                  v283 = *(_DWORD *)(v85 + 1484);
                  v284 = (const char *)v280;
                  v285 = *(_QWORD *)(v85 + 1488);
                  v286 = (unsigned __int64)v280 + v281;
                  if ( (unsigned __int64)v280 < v286 )
                  {
                    do
                    {
                      _mm_prefetch(v284, 0);
                      v284 += 64;
                    }
                    while ( (unsigned __int64)v284 < v286 );
                  }
                  if ( v281 >= 8 )
                  {
                    v287 = (unsigned __int64)v281 >> 3;
                    do
                    {
                      v285 = __ROL8__(*v282++ ^ v285, v283);
                      v281 -= 8;
                      --v287;
                    }
                    while ( v287 );
                  }
                  for ( ; v281; --v281 )
                  {
                    v288 = *(unsigned __int8 *)v282;
                    v282 = (_QWORD *)((char *)v282 + 1);
                    v285 = __ROL8__(v288 ^ v285, v283);
                  }
                  for ( mm = v285 >> 31; mm; mm >>= 31 )
                    LODWORD(v285) = mm ^ v285;
                  v277 = v285 & 0x7FFFFFFF;
                  if ( (_DWORD)v277 != (*v278 & 0x7FFFFFFF) && !*(_DWORD *)(v85 + 1616) )
                  {
                    *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = *v278 & 0x7FFFFFFF ^ (unsigned __int64)(unsigned int)v277;
                    if ( !*(_DWORD *)(v85 + 1616) )
                    {
                      *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v85 + 1632) = (char *)v275 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v85 + 1640) = *v275;
                      *(_QWORD *)(v85 + 1648) = v280;
                      *(_DWORD *)(v85 + 1616) = 1;
                    }
                  }
                }
                ++v278;
                v276 += 3;
                v290 = v276 == v279;
                if ( v276 >= v279 )
                  goto LABEL_470;
              }
              while ( *(_DWORD *)(v85 + 1504) < *v95 );
              v290 = v276 == v279;
LABEL_470:
              if ( v290 )
              {
                v291 = *(_QWORD *)(v85 + 1160);
                v292 = *(_QWORD *)(v85 + 1136) + 16LL;
                v293 = KeGetCurrentIrql();
                __writecr8(0xFuLL);
                (*(void (__fastcall **)(__int64, unsigned __int64, __int64))(v85 + 312))(v291, v277, 12LL);
                v294 = *(unsigned int **)(v85 + 1136);
                v295 = 0LL;
                v296 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                v297 = *((_BYTE *)v294 + 12) != 0;
                v298 = v292 + 24LL * *v294;
                do
                {
                  v299 = 24LL;
                  v300 = (__int64 *)(v296 + 24);
                  v301 = (__int64 *)v292;
                  do
                  {
                    v302 = *v301++;
                    v303 = *v300++;
                    if ( v302 != v303 )
                      goto LABEL_480;
                    v299 = (unsigned int)(v299 - 8);
                  }
                  while ( (unsigned int)v299 >= 8 );
                  if ( !(_DWORD)v299 )
                    break;
                  while ( 1 )
                  {
                    v295 = *(unsigned __int8 *)v301;
                    v301 = (__int64 *)((char *)v301 + 1);
                    v304 = *(unsigned __int8 *)v300;
                    v300 = (__int64 *)((char *)v300 + 1);
                    if ( v295 != v304 )
                      break;
                    v124 = (_DWORD)v299 == 1;
                    v299 = (unsigned int)(v299 - 1);
                    if ( v124 )
                      goto LABEL_481;
                  }
                  v295 = 0LL;
LABEL_480:
                  v292 += 24LL;
                }
                while ( v292 < v298 );
LABEL_481:
                (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v85 + 376))(
                  *(_QWORD *)(v85 + 1160),
                  v295,
                  v299,
                  v300);
                __writecr8(v293);
                LODWORD(v125) = 0;
                if ( (!v297 || *(_QWORD *)(v296 + 24) != 1LL) && v292 == v298 && !*(_DWORD *)(v85 + 1616) )
                {
                  v305 = *(int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                  *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1632) = (char *)v305 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1640) = *v305;
                  *(_QWORD *)(v85 + 1648) = v292;
                  *(_DWORD *)(v85 + 1616) = 1;
                }
              }
              else
              {
                v125 = ((__int64)v276 - *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10)) / 12;
              }
              goto LABEL_184;
            }
            v177 = (_QWORD *)*((_QWORD *)v99 + 1);
            v178 = *((unsigned int *)v99 + 4);
            v179 = (const char *)v177;
            *(_DWORD *)(v85 + 1504) += v178;
            v180 = *(_DWORD *)(v85 + 1484);
            v181 = *(_QWORD *)(v85 + 1488);
            if ( v177 < (_QWORD *)((char *)v177 + v178) )
            {
              do
              {
                _mm_prefetch(v179, 0);
                v179 += 64;
              }
              while ( v179 < (const char *)v177 + v178 );
            }
            if ( (unsigned int)v178 >= 8 )
            {
              v182 = v178 >> 3;
              do
              {
                v181 = __ROL8__(*v177++ ^ v181, v180);
                LODWORD(v178) = v178 - 8;
                --v182;
              }
              while ( v182 );
            }
            for ( ; (_DWORD)v178; LODWORD(v178) = v178 - 1 )
            {
              v183 = *(unsigned __int8 *)v177;
              v177 = (_QWORD *)((char *)v177 + 1);
              v181 = __ROL8__(v183 ^ v181, v180);
            }
            for ( nn = v181; ; LODWORD(v181) = nn ^ v181 )
            {
              nn >>= 31;
              if ( !nn )
                break;
            }
          }
          v185 = *((_DWORD *)v99 + 5);
          v186 = v181 & 0x7FFFFFFF;
          if ( v186 == v185 )
            goto LABEL_185;
          if ( !*(_DWORD *)(v85 + 1616) )
            *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v185 ^ (unsigned __int64)v186;
          v147 = *((_QWORD *)v99 + 1);
          v187 = *(_DWORD *)(v85 + 1616) == 0;
LABEL_287:
          if ( !v187 )
            goto LABEL_185;
LABEL_230:
          *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
          v149 = v99 - 0x4C48B4211BBACBEBLL;
LABEL_231:
          *(_QWORD *)(v85 + 1632) = v149;
          *(_QWORD *)(v85 + 1640) = *(int *)v99;
LABEL_232:
          *(_QWORD *)(v85 + 1648) = v147;
          goto LABEL_233;
        }
        if ( v108 == 12 )
          goto LABEL_378;
        if ( v108 <= 14 )
        {
          if ( v108 == 14 )
          {
            v205 = 0;
            if ( !*(_QWORD *)(v85 + 1744) )
              goto LABEL_171;
            v206 = *(_DWORD *)(v85 + 1756);
            if ( ((v206 >> 2) & 1) != 0 )
              goto LABEL_171;
            if ( *(_DWORD *)(v85 + 1500) )
            {
              LOBYTE(v205) = ((*(_DWORD *)(v85 + 1756) >> 2) & 1) == ((v206 >> 4) & 1);
              if ( !v205 )
              {
                *(_DWORD *)(v85 + 1500) = 0;
                goto LABEL_185;
              }
            }
            else
            {
              *(_DWORD *)(v85 + 1756) = v206 ^ ((unsigned __int8)v206 ^ (unsigned __int8)(4 * v206)) & 0x10;
            }
          }
          v207 = (_QWORD *)*((_QWORD *)v99 + 1);
          v208 = *((unsigned int *)v99 + 4);
          v209 = (const char *)v207;
          *(_DWORD *)(v85 + 1504) += v208;
          v210 = *(_DWORD *)(v85 + 1484);
          v211 = *(_QWORD *)(v85 + 1488);
          if ( v207 < (_QWORD *)((char *)v207 + v208) )
          {
            do
            {
              _mm_prefetch(v209, 0);
              v209 += 64;
            }
            while ( v209 < (const char *)v207 + v208 );
          }
          if ( (unsigned int)v208 >= 8 )
          {
            v212 = v208 >> 3;
            do
            {
              v211 = __ROL8__(*v207++ ^ v211, v210);
              LODWORD(v208) = v208 - 8;
              --v212;
            }
            while ( v212 );
          }
          for ( ; (_DWORD)v208; LODWORD(v208) = v208 - 1 )
          {
            v213 = *(unsigned __int8 *)v207;
            v207 = (_QWORD *)((char *)v207 + 1);
            v211 = __ROL8__(v213 ^ v211, v210);
          }
          for ( i1 = v211 >> 31; i1; i1 >>= 31 )
            LODWORD(v211) = i1 ^ v211;
          v215 = v211 & 0x7FFFFFFF;
          if ( v215 != *((_DWORD *)v99 + 5) )
          {
            _InterlockedOr(v2129, 0);
            if ( (*((_DWORD *)v99 + 6) & 1) == 0 || !**(_BYTE **)(v85 + 1224) )
            {
              if ( !*(_DWORD *)(v85 + 1616) )
                *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = *((unsigned int *)v99 + 5) ^ (unsigned __int64)v215;
              v216 = *((_QWORD *)v99 + 1);
              if ( !*(_DWORD *)(v85 + 1616) )
              {
                *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v85 + 1640) = *(int *)v99;
                *(_QWORD *)(v85 + 1648) = v216;
                *(_DWORD *)(v85 + 1616) = 1;
              }
            }
          }
          if ( (*(_DWORD *)(v85 + 1752) & 0x40000000) == 0 )
            goto LABEL_185;
          v217 = *((_DWORD *)v99 + 4);
          if ( !v217 )
            goto LABEL_185;
          sub_1401588B8(v85, *((_QWORD *)v99 + 1), v217, (__int64)(v1 + 410));
          v218 = 16;
          v219 = (__int64 *)(v99 + 28);
          v220 = (__int64 *)(v1 + 410);
          do
          {
            v221 = *v220++;
            v222 = *v219++;
            if ( v221 != v222 )
              goto LABEL_373;
            v218 -= 8;
          }
          while ( v218 >= 8 );
          if ( v218 )
          {
            while ( 1 )
            {
              v223 = *(unsigned __int8 *)v220;
              v220 = (__int64 *)((char *)v220 + 1);
              v224 = *(unsigned __int8 *)v219;
              v219 = (__int64 *)((char *)v219 + 1);
              if ( v223 != v224 )
                break;
              if ( !--v218 )
                goto LABEL_377;
            }
LABEL_373:
            _InterlockedOr(v2129, 0);
            if ( (*((_DWORD *)v99 + 6) & 1) == 0 || !**(_BYTE **)(v85 + 1224) )
            {
              v225 = *((_QWORD *)v99 + 1);
              if ( !*(_DWORD *)(v85 + 1616) )
              {
                *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v85 + 1640) = *(int *)v99;
                *(_QWORD *)(v85 + 1648) = v225;
                *(_DWORD *)(v85 + 1616) = 1;
              }
            }
          }
LABEL_377:
          *(_DWORD *)(v85 + 1504) += 16 * *((_DWORD *)v99 + 4);
          goto LABEL_185;
        }
        switch ( v108 )
        {
          case 15:
            if ( *(_DWORD *)(v85 + 1704) == 9 )
            {
              *(_DWORD *)(v85 + 1504) += 256;
              v198 = *(_QWORD *)(v85 + 1232);
              v199 = (*(__int64 (__fastcall **)(__int64))(v85 + 696))(v198);
              v200 = v199;
              if ( v199 )
              {
                v201 = (*(__int64 (__fastcall **)(__int64))(v85 + 704))(v199);
                v203 = *((_QWORD *)v99 + 3);
                if ( v203 )
                {
                  if ( v203 != v201 && !*(_DWORD *)(v85 + 1616) )
                  {
                    *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v85 + 1640) = *(int *)v99;
                    *(_QWORD *)(v85 + 1648) = v201;
                    *(_DWORD *)(v85 + 1616) = 1;
                  }
                }
                else
                {
                  v204 = *(_QWORD *)(v85 + 1736);
                  if ( !*(_DWORD *)(v85 + 1732)
                    || (v202 = v204 + *(unsigned int *)(v85 + 1732) - 1LL, v201 < v204)
                    || v201 > v202 )
                  {
                    if ( !*(_DWORD *)(v85 + 1616) )
                    {
                      *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v85 + 1640) = *(int *)v99;
                      *(_QWORD *)(v85 + 1648) = v201;
                      *(_DWORD *)(v85 + 1616) = 1;
                    }
                  }
                  *((_QWORD *)v99 + 3) = v201;
                }
                (*(void (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD))(v85 + 712))(v198, v200, v202, 0LL);
              }
            }
            goto LABEL_185;
          case 16:
            v147 = **((_QWORD **)v99 + 4);
            if ( !v147 )
              goto LABEL_185;
            v148 = v147 == *((_QWORD *)v99 + 3);
LABEL_228:
            if ( v148 || *(_DWORD *)(v85 + 1616) )
              goto LABEL_185;
            goto LABEL_230;
          case 17:
            v147 = **((_QWORD **)v99 + 6);
            if ( !v147 || v147 == *((_QWORD *)v99 + 3) || v147 == *((_QWORD *)v99 + 4) )
              goto LABEL_185;
            v148 = v147 == *((_QWORD *)v99 + 5);
            goto LABEL_228;
        }
        if ( v108 != 18 )
        {
          v147 = **((_QWORD **)v99 + 5);
          if ( !v147 || v147 == *((_QWORD *)v99 + 3) || v147 == *((_QWORD *)v99 + 4) )
            goto LABEL_185;
          v148 = v147 == *((_QWORD *)v99 + 6);
          goto LABEL_228;
        }
      }
LABEL_225:
      v147 = **((_QWORD **)v99 + 5);
      if ( !v147 || v147 == *((_QWORD *)v99 + 3) )
        goto LABEL_185;
      v148 = v147 == *((_QWORD *)v99 + 4);
      goto LABEL_228;
    }
    if ( v108 > 31 )
    {
      if ( v108 == 32 )
      {
        sub_14015936C(v85, (int *)v99);
        goto LABEL_185;
      }
      if ( v108 == 33 )
      {
        sub_140158998(v85, (int *)v99);
        goto LABEL_185;
      }
      if ( v108 != 35 )
      {
        if ( v108 == 36 )
        {
          v1049 = (_QWORD *)*((_QWORD *)v99 + 1);
          v1050 = *((unsigned int *)v99 + 4);
          v1051 = (const char *)v1049;
          *(_DWORD *)(v85 + 1504) += v1050;
          v1052 = *(_DWORD *)(v85 + 1484);
          v1053 = *(_QWORD *)(v85 + 1488);
          if ( v1049 < (_QWORD *)((char *)v1049 + v1050) )
          {
            do
            {
              _mm_prefetch(v1051, 0);
              v1051 += 64;
            }
            while ( v1051 < (const char *)v1049 + v1050 );
          }
          if ( (unsigned int)v1050 >= 8 )
          {
            v1054 = v1050 >> 3;
            do
            {
              v1053 = __ROL8__(*v1049++ ^ v1053, v1052);
              v1050 = (unsigned int)(v1050 - 8);
              --v1054;
            }
            while ( v1054 );
          }
          if ( (_DWORD)v1050 )
          {
            do
            {
              v1055 = *(unsigned __int8 *)v1049;
              v1049 = (_QWORD *)((char *)v1049 + 1);
              v1053 = __ROL8__(v1055 ^ v1053, v1052);
              v124 = (_DWORD)v1050 == 1;
              v1050 = (unsigned int)(v1050 - 1);
            }
            while ( !v124 );
          }
          for ( i2 = v1053; ; v1053 = (unsigned int)i2 ^ (unsigned int)v1053 )
          {
            i2 >>= 31;
            if ( !i2 )
              break;
          }
          v1057 = *((unsigned int *)v99 + 5);
          LODWORD(v1053) = v1053 & 0x7FFFFFFF;
          if ( (_DWORD)v1053 != (_DWORD)v1057 )
          {
            if ( !*(_DWORD *)(v85 + 1616) )
              *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v1057 ^ (unsigned int)v1053;
            v1058 = *((_QWORD *)v99 + 1);
            if ( !*(_DWORD *)(v85 + 1616) )
            {
              *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1640) = *(int *)v99;
              *(_QWORD *)(v85 + 1648) = v1058;
              *(_DWORD *)(v85 + 1616) = 1;
            }
          }
          v1059 = *(_QWORD *)(v85 + 1160);
          v1060 = *(_QWORD *)(v85 + 1136) + 16LL;
          v1061 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64, _QWORD *))(v85 + 312))(
            v1059,
            v1053,
            v1050,
            v1049);
          v1063 = *(unsigned int **)(v85 + 1136);
          v1064 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
          v1065 = *((_BYTE *)v1063 + 12) != 0;
          v1066 = v1060 + 24LL * *v1063;
          do
          {
            v1067 = 24LL;
            v1068 = (__int64 *)(v1064 + 24);
            v1069 = (__int64 *)v1060;
            do
            {
              v1070 = *v1069++;
              v1071 = *v1068++;
              if ( v1070 != v1071 )
                goto LABEL_1584;
              v1067 = (unsigned int)(v1067 - 8);
            }
            while ( (unsigned int)v1067 >= 8 );
            if ( !(_DWORD)v1067 )
              break;
            while ( 1 )
            {
              v1062 = *(unsigned __int8 *)v1069;
              v1069 = (__int64 *)((char *)v1069 + 1);
              v1072 = *(unsigned __int8 *)v1068;
              v1068 = (__int64 *)((char *)v1068 + 1);
              if ( v1062 != v1072 )
                break;
              v124 = (_DWORD)v1067 == 1;
              v1067 = (unsigned int)(v1067 - 1);
              if ( v124 )
                goto LABEL_1585;
            }
LABEL_1584:
            v1060 += 24LL;
          }
          while ( v1060 < v1066 );
LABEL_1585:
          v85 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
          (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v85 + 376))(
            *(_QWORD *)(v85 + 1160),
            v1062,
            v1067,
            v1068);
          __writecr8(v1061);
          if ( v1065 && *(_QWORD *)(v1064 + 24) == 1LL || v1060 != v1066 )
          {
            v1073 = *(int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
          }
          else
          {
            v1073 = *(int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
            if ( !*(_DWORD *)(v85 + 1616) )
            {
              *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1632) = (char *)v1073 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1640) = *v1073;
              *(_QWORD *)(v85 + 1648) = v1060;
              *(_DWORD *)(v85 + 1616) = 1;
            }
          }
          v1074 = *(_QWORD *)(v85 + 1160);
          v237 = *(_QWORD *)(v85 + 1136) + 16LL;
          v1075 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          (*(void (__fastcall **)(__int64))(v85 + 312))(v1074);
          v1076 = 0LL;
          v1077 = v237 + 24LL * **(unsigned int **)(v85 + 1136);
          while ( 1 )
          {
            v237 += 24LL;
            if ( v237 >= v1077 )
              break;
            v1078 = *(_QWORD *)(v237 + 8);
            if ( v1078 < v1076 )
              break;
            if ( (v1078 & 0xFFFFFFFFFFFFF000uLL) != v1078 )
              break;
            v1079 = v1078 + *(unsigned int *)(v237 + 16);
            if ( v1079 <= v1078 || v1079 == v1076 )
              break;
            v1076 = v1078 + *(unsigned int *)(v237 + 16);
          }
          (*(void (__fastcall **)(_QWORD))(v85 + 376))(*(_QWORD *)(v85 + 1160));
          __writecr8(v1075);
          if ( v237 == v1077 || *(_DWORD *)(v85 + 1616) )
            goto LABEL_185;
          *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v85 + 1632) = (char *)v1073 - 0x4C48B4211BBACBEBLL;
          v251 = *v1073;
LABEL_413:
          *(_QWORD *)(v85 + 1640) = v251;
          *(_QWORD *)(v85 + 1648) = v237;
          goto LABEL_233;
        }
        if ( v108 == 37 )
        {
          if ( (*(_DWORD *)(v85 + 1756) & 2) != 0 )
            goto LABEL_185;
          v1048 = (*(__int64 (**)(void))(v85 + 1024))();
          v147 = 0LL;
          if ( !v1048 )
            goto LABEL_185;
          v187 = *(_DWORD *)(v85 + 1616) == 0;
          goto LABEL_287;
        }
        if ( v108 != 38 )
        {
          if ( (unsigned int)(v108 - 39) <= 2 )
          {
            *(_DWORD *)(v85 + 1504) += *((_DWORD *)v99 + 9);
            v965 = *((unsigned int *)v99 + 9);
            v966 = (_QWORD *)(v85 + *((unsigned int *)v99 + 8));
            v967 = *(_DWORD *)(v85 + 1484);
            v968 = (const char *)v966;
            v969 = *(_QWORD *)(v85 + 1488);
            if ( v966 < (_QWORD *)((char *)v966 + v965) )
            {
              do
              {
                _mm_prefetch(v968, 0);
                v968 += 64;
              }
              while ( v968 < (const char *)v966 + v965 );
            }
            if ( (unsigned int)v965 >= 8 )
            {
              v970 = v965 >> 3;
              do
              {
                v969 = __ROL8__(*v966++ ^ v969, v967);
                LODWORD(v965) = v965 - 8;
                --v970;
              }
              while ( v970 );
            }
            for ( ; (_DWORD)v965; LODWORD(v965) = v965 - 1 )
            {
              v971 = *(unsigned __int8 *)v966;
              v966 = (_QWORD *)((char *)v966 + 1);
              v969 = __ROL8__(v971 ^ v969, v967);
            }
            v972 = *((_QWORD *)v99 + 3);
            if ( v969 == v972 )
              goto LABEL_185;
            if ( !*(_DWORD *)(v85 + 1616) )
              *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v969 ^ v972;
            v147 = v85 + *((unsigned int *)v99 + 8);
            v187 = *(_DWORD *)(v85 + 1616) == 0;
            goto LABEL_287;
          }
          goto LABEL_1442;
        }
        (*(void (__fastcall **)(unsigned int *, _QWORD))(v85 + 392))(v1 + 442, *((unsigned int *)v99 + 11));
        v1046 = (*(__int64 (__fastcall **)(unsigned int *, unsigned int *))(v85 + 440))(v1 + 442, v1 + 446);
        __asm { xgetbv }
        v901 = v1046 | (v1047 << 32);
        v902 = v1 + 446;
        goto LABEL_1291;
      }
      if ( (*((_DWORD *)v99 + 10) & 1) != 0 && (!*(_QWORD *)(v85 + 1744) || (*(_DWORD *)(v85 + 1756) & 4) != 0) )
        goto LABEL_1604;
      if ( (*((_DWORD *)v99 + 10) & 1) != 0 )
      {
        v1080 = *(_DWORD *)(v85 + 1756);
        if ( *(_DWORD *)(v85 + 1500) )
        {
          if ( (((v1080 ^ (v1080 >> 2)) >> 2) & 1) != 0 )
            goto LABEL_1604;
        }
        else
        {
          *(_DWORD *)(v85 + 1756) ^= (*(_DWORD *)(v85 + 1756) ^ (4 * v1080)) & 0x10;
        }
        if ( !*(_QWORD *)(v85 + 1744) )
          goto LABEL_1610;
        v1081 = *(_DWORD *)(v85 + 1756);
        if ( *(_DWORD *)(v85 + 1500) )
        {
          if ( (((v1081 ^ (v1081 >> 2)) >> 2) & 1) != 0 )
          {
LABEL_1610:
            *(_DWORD *)(v85 + 1500) = 0;
            goto LABEL_1620;
          }
        }
        else
        {
          *(_DWORD *)(v85 + 1756) ^= (*(_DWORD *)(v85 + 1756) ^ (4 * v1081)) & 0x10;
        }
        if ( (*(_DWORD *)(v85 + 1756) & 4) != 0 )
        {
          v1082 = *((_QWORD *)v99 + 1) & 0xFFFFFFFFFFFFF000uLL;
          for ( i3 = (*((unsigned int *)v99 + 4) + (unsigned __int64)(*((_DWORD *)v99 + 2) & 0xFFF) + 4095) >> 12;
                i3;
                v1082 += 4096LL )
          {
            --i3;
            if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v85 + 656))(v1082) && !*(_DWORD *)(v85 + 1616) )
            {
              *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1640) = *(int *)v99;
              *(_QWORD *)(v85 + 1648) = v1082;
              *(_DWORD *)(v85 + 1616) = 1;
            }
            *(_DWORD *)(v85 + 1504) += 256;
          }
          goto LABEL_1620;
        }
        v1093 = (_QWORD *)*((_QWORD *)v99 + 1);
        v1094 = *((unsigned int *)v99 + 4);
        v1095 = (const char *)v1093;
        *(_DWORD *)(v85 + 1504) += v1094;
        v1096 = *(_DWORD *)(v85 + 1484);
        v1097 = *(_QWORD *)(v85 + 1488);
        if ( v1093 < (_QWORD *)((char *)v1093 + v1094) )
        {
          do
          {
            _mm_prefetch(v1095, 0);
            v1095 += 64;
          }
          while ( v1095 < (const char *)v1093 + v1094 );
        }
        if ( (unsigned int)v1094 >= 8 )
        {
          v1098 = v1094 >> 3;
          do
          {
            v1097 = __ROL8__(*v1093++ ^ v1097, v1096);
            LODWORD(v1094) = v1094 - 8;
            --v1098;
          }
          while ( v1098 );
        }
        for ( ; (_DWORD)v1094; LODWORD(v1094) = v1094 - 1 )
        {
          v1099 = *(unsigned __int8 *)v1093;
          v1093 = (_QWORD *)((char *)v1093 + 1);
          v1097 = __ROL8__(v1099 ^ v1097, v1096);
        }
        for ( i4 = v1097; ; LODWORD(v1097) = i4 ^ v1097 )
        {
          i4 >>= 31;
          if ( !i4 )
            break;
        }
        v1101 = *((unsigned int *)v99 + 5);
        v1102 = v1097 & 0x7FFFFFFF;
        if ( v1102 == (_DWORD)v1101 )
          goto LABEL_1620;
        if ( !*(_DWORD *)(v85 + 1616) )
          *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v1101 ^ v1102;
        v1103 = *((_QWORD *)v99 + 1);
        if ( *(_DWORD *)(v85 + 1616) )
          goto LABEL_1620;
      }
      else
      {
        v1104 = (_QWORD *)*((_QWORD *)v99 + 1);
        v1105 = *((unsigned int *)v99 + 4);
        v1106 = (const char *)v1104;
        *(_DWORD *)(v85 + 1504) += v1105;
        v1107 = *(_DWORD *)(v85 + 1484);
        v1108 = *(_QWORD *)(v85 + 1488);
        if ( v1104 < (_QWORD *)((char *)v1104 + v1105) )
        {
          do
          {
            _mm_prefetch(v1106, 0);
            v1106 += 64;
          }
          while ( v1106 < (const char *)v1104 + v1105 );
        }
        if ( (unsigned int)v1105 >= 8 )
        {
          v1109 = v1105 >> 3;
          do
          {
            v1108 = __ROL8__(*v1104++ ^ v1108, v1107);
            LODWORD(v1105) = v1105 - 8;
            --v1109;
          }
          while ( v1109 );
        }
        for ( ; (_DWORD)v1105; LODWORD(v1105) = v1105 - 1 )
        {
          v1110 = *(unsigned __int8 *)v1104;
          v1104 = (_QWORD *)((char *)v1104 + 1);
          v1108 = __ROL8__(v1110 ^ v1108, v1107);
        }
        for ( i5 = v1108; ; LODWORD(v1108) = i5 ^ v1108 )
        {
          i5 >>= 31;
          if ( !i5 )
            break;
        }
        v1112 = *((unsigned int *)v99 + 5);
        v1113 = v1108 & 0x7FFFFFFF;
        if ( v1113 == (_DWORD)v1112 )
          goto LABEL_1620;
        if ( !*(_DWORD *)(v85 + 1616) )
          *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v1112 ^ v1113;
        v1103 = *((_QWORD *)v99 + 1);
        if ( *(_DWORD *)(v85 + 1616) )
          goto LABEL_1620;
      }
      *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
      *(_QWORD *)(v85 + 1640) = *(int *)v99;
      *(_QWORD *)(v85 + 1648) = v1103;
      *(_DWORD *)(v85 + 1616) = 1;
LABEL_1620:
      v1084 = *((_DWORD *)v99 + 10);
      if ( (v1084 & 2) == 0 )
        goto LABEL_185;
      v1085 = *((_QWORD *)v99 + 1);
      if ( (v1084 & 4) != 0 )
      {
        v1086 = *((_QWORD *)v99 + 3);
        v1087 = **(_QWORD **)(v1085 + 112);
        if ( v1087 != v1086 )
        {
          v1088 = *(_QWORD *)(v85 + 1240);
          *(_QWORD *)v1088 = v1087;
          *(_DWORD *)(v1088 + 16) = 256;
          if ( !*(_DWORD *)(v85 + 1616) )
            *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v1086 ^ v1087;
          v1089 = *(_QWORD *)(v1085 + 112);
          if ( !*(_DWORD *)(v85 + 1616) )
          {
            *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v85 + 1640) = *(int *)v99;
            *(_QWORD *)(v85 + 1648) = v1089;
            *(_DWORD *)(v85 + 1616) = 1;
          }
        }
      }
      if ( (*((_DWORD *)v99 + 10) & 8) == 0 )
        goto LABEL_185;
      v1090 = *((_QWORD *)v99 + 4);
      v1091 = **(_QWORD **)(v1085 + 120);
      if ( v1091 == v1090 )
        goto LABEL_185;
      v1092 = *(_QWORD *)(v85 + 1240);
      *(_QWORD *)v1092 = v1091;
      *(_DWORD *)(v1092 + 16) = 256;
      if ( !*(_DWORD *)(v85 + 1616) )
        *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v1090 ^ v1091;
      v147 = *(_QWORD *)(v1085 + 120);
      if ( *(_DWORD *)(v85 + 1616) )
        goto LABEL_185;
      *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
      v149 = v99 - 0x4C48B4211BBACBEBLL;
      goto LABEL_231;
    }
    switch ( v108 )
    {
      case 31:
        if ( (*(_DWORD *)(v85 + 1512) & 1) == 0 )
          goto LABEL_185;
        if ( !*(_QWORD *)(v85 + 1744) || (*(_DWORD *)(v85 + 1756) & 4) != 0 )
        {
          v907 = 0LL;
          v906 = 0LL;
        }
        else
        {
          v905 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD))(v85 + 936))(26LL, v1 + 208, 0LL);
          v906 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x340);
          v907 = 0LL;
          if ( v905 < 0 )
            v906 = 0LL;
        }
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v906;
        v908 = 0;
        *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = 0;
        v909 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 912))(0LL);
        if ( !v909 )
        {
LABEL_1382:
          v947 = *(_QWORD *)(v85 + 1072);
          if ( (*(int (__fastcall **)(__int64))(v85 + 896))(v947) >= 0 )
          {
            v948 = (*(__int64 (__fastcall **)(__int64))(v85 + 952))(v947);
            v949 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(v85 + 960))(v947, v1 + 41);
            *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = (*(__int64 (__fastcall **)(__int64))(v85 + 968))(v947);
            if ( v948 == 114
              || *(_DWORD *)(v85 + 1616)
              || (*(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v948 ^ 0x72LL, *(_DWORD *)(v85 + 1616)) )
            {
              v950 = *(int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
            }
            else
            {
              v950 = *(int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
              *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1632) = (char *)v950 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1640) = *v950;
              *(_QWORD *)(v85 + 1648) = v947;
              *(_DWORD *)(v85 + 1616) = 1;
            }
            v951 = 0;
            v952 = 0;
            if ( (v948 & 7) == 1 )
            {
              v951 = 48;
            }
            else if ( (v948 & 7) == 2 )
            {
              v951 = 16;
              v952 = 16;
            }
            else if ( (v948 & 7) != 0 && !*(_DWORD *)(v85 + 1616) )
            {
              *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1632) = (char *)v950 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1640) = *v950;
              *(_QWORD *)(v85 + 1648) = v947;
              *(_DWORD *)(v85 + 1616) = 1;
            }
            v953 = *(_QWORD *)(v85 + 1296);
            v954 = (unsigned __int64)v948 >> 4;
            v124 = (*(_BYTE *)(v953 + 2 * v954) | (unsigned __int8)v951) == v949;
            v955 = 0xB3B74BDEE4453415uLL;
            if ( !v124 && !*(_DWORD *)(v85 + 1616) )
            {
              *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1632) = (char *)v950 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1640) = *v950;
              *(_QWORD *)(v85 + 1648) = v947;
              *(_DWORD *)(v85 + 1616) = 1;
            }
            if ( ((unsigned __int8)v952 | *(_BYTE *)(v953 + 2 * v954 + 1)) != *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                       + 0xA4)
              && !*(_DWORD *)(v85 + 1616) )
            {
              *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1632) = (char *)v950 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1640) = *v950;
              *(_QWORD *)(v85 + 1648) = v947;
              *(_DWORD *)(v85 + 1616) = 1;
            }
            if ( v947 != *(_QWORD *)(v85 + 1072) )
              v907 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(v85 + 944))(v947, 1LL);
            *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v907;
            if ( v907 )
            {
              v956 = v907;
              if ( *v907 )
              {
                v957 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                v958 = *(char **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                do
                {
                  *v956 &= 0xFFFFFFFFFFFFFFFCuLL;
                  (*(void (__fastcall **)(_QWORD, unsigned __int64))(v85 + 456))(*v956, v955);
                  v959 = *(unsigned __int8 *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xA4);
                  v960 = v956[1] & 0xFFFFFFFFFFFF0000uLL;
                  if ( v960 == v957 )
                    v959 = v949;
                  v961 = v956[1] >> 6;
                  LOBYTE(v961) = v961 & 0xF;
                  if ( !(*(unsigned int (__fastcall **)(__int64, __int64))(v85 + 976))(v961, v959) )
                  {
                    if ( (*(_DWORD *)(v85 + 1752) & 0x40000000) != 0 )
                    {
                      v962 = *(_QWORD **)(v85 + 1920);
                      LODWORD(v955) = 48;
                      v963 = 6LL;
                      do
                      {
                        v955 = (unsigned int)(v955 - 8);
                        *v962 = *(_QWORD *)v958;
                        v958 += 8;
                        ++v962;
                        --v963;
                      }
                      while ( v963 );
                      if ( (_DWORD)v955 )
                      {
                        do
                        {
                          v964 = *v958++;
                          *(_BYTE *)v962 = v964;
                          v962 = (_QWORD *)((char *)v962 + 1);
                          v124 = (_DWORD)v955 == 1;
                          v955 = (unsigned int)(v955 - 1);
                        }
                        while ( !v124 );
                      }
                      v958 = *(char **)(v85 + 1920);
                    }
                    *((_QWORD *)v958 + 3) = v960;
                    *((_QWORD *)v958 + 4) = *v956;
                    v958[40] = ((unsigned __int64)*((unsigned int *)v956 + 2) >> 6) & 0xF;
                    if ( !*(_DWORD *)(v85 + 1616) )
                    {
                      *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v85 + 1632) = v958 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v85 + 1640) = *(int *)v958;
                      *(_QWORD *)(v85 + 1648) = v947;
                      *(_DWORD *)(v85 + 1616) = 1;
                    }
                  }
                  v956 += 6;
                }
                while ( *v956 );
                v907 = *(_QWORD **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                v908 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
              }
              (*(void (__fastcall **)(_QWORD *, unsigned __int64))(v85 + 232))(v907, v955);
            }
            (*(void (__fastcall **)(__int64, unsigned __int64))(v85 + 904))(v947, v955);
            *(_DWORD *)(v85 + 1504) += 0x8000;
          }
          if ( *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) )
            (*(void (**)(void))(v85 + 456))();
          *(_DWORD *)(v85 + 1504) += v908 << 8;
          goto LABEL_185;
        }
        while ( 1 )
        {
          if ( v906 == v909 )
          {
            v910 = *(char **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
            v911 = v910;
            if ( (*(int (__fastcall **)(__int64))(v85 + 896))(v909) >= 0 )
            {
              v912 = (*(__int64 (__fastcall **)(__int64))(v85 + 952))(v909);
              v913 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(v85 + 960))(v909, v1 + 38);
              *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v913;
              v914 = v913;
              *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = (*(__int64 (__fastcall **)(__int64))(v85 + 968))(v909);
              if ( v912 != 97 && !*(_DWORD *)(v85 + 1616) )
              {
                *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v912 ^ 0x61LL;
                if ( !*(_DWORD *)(v85 + 1616) )
                {
                  *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1632) = v910 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1640) = *(int *)v910;
                  *(_QWORD *)(v85 + 1648) = v909;
                  *(_DWORD *)(v85 + 1616) = 1;
                }
              }
              v915 = 0;
              v916 = 0;
              if ( (v912 & 7) == 1 )
              {
                v915 = 48;
              }
              else if ( (v912 & 7) == 2 )
              {
                v915 = 16;
                v916 = 16;
              }
              else if ( (v912 & 7) != 0 && !*(_DWORD *)(v85 + 1616) )
              {
                *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v85 + 1632) = v910 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v85 + 1640) = *(int *)v910;
                *(_QWORD *)(v85 + 1648) = v909;
                *(_DWORD *)(v85 + 1616) = 1;
              }
              v917 = *(_QWORD *)(v85 + 1296);
              v918 = (unsigned __int64)v912 >> 4;
              if ( (*(_BYTE *)(v917 + 2 * v918) | (unsigned __int8)v915) != v914 && !*(_DWORD *)(v85 + 1616) )
              {
                *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v85 + 1632) = v910 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v85 + 1640) = *(int *)v910;
                *(_QWORD *)(v85 + 1648) = v909;
                *(_DWORD *)(v85 + 1616) = 1;
              }
              if ( ((unsigned __int8)v916 | *(_BYTE *)(v917 + 2 * v918 + 1)) != *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                         + 0x98)
                && !*(_DWORD *)(v85 + 1616) )
              {
                *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v85 + 1632) = v910 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v85 + 1640) = *(int *)v910;
                *(_QWORD *)(v85 + 1648) = v909;
                *(_DWORD *)(v85 + 1616) = 1;
              }
              if ( v909 == *(_QWORD *)(v85 + 1072) )
                v919 = 0LL;
              else
                v919 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(v85 + 944))(v909, 1LL);
              *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v919;
              if ( v919 )
              {
                v920 = v919;
                if ( *v919 )
                {
                  v921 = *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                  v922 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                  do
                  {
                    *v920 &= 0xFFFFFFFFFFFFFFFCuLL;
                    (*(void (__fastcall **)(_QWORD))(v85 + 456))(*v920);
                    v923 = *(unsigned __int8 *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x98);
                    v924 = v920[1] & 0xFFFFFFFFFFFF0000uLL;
                    if ( v924 == v922 )
                      v923 = v921;
                    v925 = v920[1] >> 6;
                    LOBYTE(v925) = v925 & 0xF;
                    if ( !(*(unsigned int (__fastcall **)(__int64, __int64))(v85 + 976))(v925, v923) )
                    {
                      if ( (*(_DWORD *)(v85 + 1752) & 0x40000000) != 0 )
                      {
                        v926 = *(_QWORD **)(v85 + 1920);
                        v927 = 48;
                        v928 = 6LL;
                        do
                        {
                          v927 -= 8;
                          *v926 = *(_QWORD *)v911;
                          v911 += 8;
                          ++v926;
                          --v928;
                        }
                        while ( v928 );
                        for ( ; v927; --v927 )
                        {
                          v929 = *v911++;
                          *(_BYTE *)v926 = v929;
                          v926 = (_QWORD *)((char *)v926 + 1);
                        }
                        v911 = *(char **)(v85 + 1920);
                      }
                      *((_QWORD *)v911 + 3) = v924;
                      *((_QWORD *)v911 + 4) = *v920;
                      v911[40] = ((unsigned __int64)*((unsigned int *)v920 + 2) >> 6) & 0xF;
                      if ( !*(_DWORD *)(v85 + 1616) )
                      {
                        *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v85 + 1632) = v911 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v85 + 1640) = *(int *)v911;
                        *(_QWORD *)(v85 + 1648) = v909;
                        *(_DWORD *)(v85 + 1616) = 1;
                      }
                    }
                    v920 += 6;
                  }
                  while ( *v920 );
                  goto LABEL_1377;
                }
                goto LABEL_1378;
              }
              goto LABEL_1379;
            }
          }
          else if ( (*(unsigned int (__fastcall **)(__int64))(v85 + 928))(v909) )
          {
            v930 = *(char **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
            v931 = v930;
            if ( (*(int (__fastcall **)(__int64))(v85 + 896))(v909) >= 0 )
            {
              v932 = (*(__int64 (__fastcall **)(__int64))(v85 + 952))(v909);
              v933 = (*(__int64 (__fastcall **)(__int64, __int64))(v85 + 960))(v909, (__int64)v1 + 165);
              *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = (*(__int64 (__fastcall **)(__int64))(v85 + 968))(v909);
              if ( v932 != 97 && !*(_DWORD *)(v85 + 1616) )
              {
                *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v932 ^ 0x61LL;
                if ( !*(_DWORD *)(v85 + 1616) )
                {
                  *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1632) = v930 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1640) = *(int *)v930;
                  *(_QWORD *)(v85 + 1648) = v909;
                  *(_DWORD *)(v85 + 1616) = 1;
                }
              }
              v934 = 0;
              v935 = 0;
              if ( (v932 & 7) == 1 )
              {
                v934 = 48;
              }
              else if ( (v932 & 7) == 2 )
              {
                v934 = 16;
                v935 = 16;
              }
              else if ( (v932 & 7) != 0 && !*(_DWORD *)(v85 + 1616) )
              {
                *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v85 + 1632) = v930 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v85 + 1640) = *(int *)v930;
                *(_QWORD *)(v85 + 1648) = v909;
                *(_DWORD *)(v85 + 1616) = 1;
              }
              v936 = *(_QWORD *)(v85 + 1296);
              v937 = (unsigned __int64)v932 >> 4;
              if ( ((unsigned __int8)v934 | *(_BYTE *)(v936 + 2 * v937)) != v933 && !*(_DWORD *)(v85 + 1616) )
              {
                *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v85 + 1632) = v930 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v85 + 1640) = *(int *)v930;
                *(_QWORD *)(v85 + 1648) = v909;
                *(_DWORD *)(v85 + 1616) = 1;
              }
              if ( ((unsigned __int8)v935 | *(_BYTE *)(v936 + 2 * v937 + 1)) != *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                         + 0xA5)
                && !*(_DWORD *)(v85 + 1616) )
              {
                *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v85 + 1632) = v930 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v85 + 1640) = *(int *)v930;
                *(_QWORD *)(v85 + 1648) = v909;
                *(_DWORD *)(v85 + 1616) = 1;
              }
              if ( v909 == *(_QWORD *)(v85 + 1072) )
                v919 = 0LL;
              else
                v919 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(v85 + 944))(v909, 1LL);
              *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v919;
              if ( v919 )
              {
                v938 = v919;
                if ( *v919 )
                {
                  v939 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                  do
                  {
                    *v938 &= 0xFFFFFFFFFFFFFFFCuLL;
                    (*(void (__fastcall **)(_QWORD))(v85 + 456))(*v938);
                    v940 = *(unsigned __int8 *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xA5);
                    v941 = v938[1] & 0xFFFFFFFFFFFF0000uLL;
                    if ( v941 == v939 )
                      v940 = v933;
                    v942 = v938[1] >> 6;
                    LOBYTE(v942) = v942 & 0xF;
                    if ( !(*(unsigned int (__fastcall **)(__int64, __int64))(v85 + 976))(v942, v940) )
                    {
                      if ( (*(_DWORD *)(v85 + 1752) & 0x40000000) != 0 )
                      {
                        v943 = *(_QWORD **)(v85 + 1920);
                        v944 = 48;
                        v945 = 6LL;
                        do
                        {
                          v944 -= 8;
                          *v943 = *(_QWORD *)v931;
                          v931 += 8;
                          ++v943;
                          --v945;
                        }
                        while ( v945 );
                        for ( ; v944; --v944 )
                        {
                          v946 = *v931++;
                          *(_BYTE *)v943 = v946;
                          v943 = (_QWORD *)((char *)v943 + 1);
                        }
                        v931 = *(char **)(v85 + 1920);
                      }
                      *((_QWORD *)v931 + 3) = v941;
                      *((_QWORD *)v931 + 4) = *v938;
                      v931[40] = ((unsigned __int64)*((unsigned int *)v938 + 2) >> 6) & 0xF;
                      if ( !*(_DWORD *)(v85 + 1616) )
                      {
                        *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v85 + 1632) = v931 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v85 + 1640) = *(int *)v931;
                        *(_QWORD *)(v85 + 1648) = v909;
                        *(_DWORD *)(v85 + 1616) = 1;
                      }
                    }
                    v938 += 6;
                  }
                  while ( *v938 );
LABEL_1377:
                  v919 = *(_QWORD **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                  v908 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                }
LABEL_1378:
                (*(void (__fastcall **)(_QWORD *))(v85 + 232))(v919);
              }
LABEL_1379:
              (*(void (__fastcall **)(__int64))(v85 + 904))(v909);
              v906 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
              *(_DWORD *)(v85 + 1504) += 0x8000;
            }
            v907 = 0LL;
          }
          *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = ++v908;
          v909 = (*(__int64 (__fastcall **)(__int64))(v85 + 912))(v909);
          if ( !v909 )
            goto LABEL_1382;
        }
      case 21:
        v900 = *((_DWORD *)v99 + 10);
        (*(void (__fastcall **)(unsigned int *, _QWORD))(v85 + 392))(v1 + 414, *((unsigned int *)v99 + 11));
        (*(void (__fastcall **)(unsigned int *, unsigned int *))(v85 + 440))(v1 + 414, v1 + 418);
        if ( v900 )
          v901 = __readcr4();
        else
          v901 = __readcr0();
        v902 = v1 + 418;
LABEL_1291:
        (*(void (__fastcall **)(unsigned int *))(v85 + 384))(v902);
        v903 = *((_QWORD *)v99 + 4);
        v904 = v901 & *((_QWORD *)v99 + 3);
        if ( v904 == v903 )
          goto LABEL_185;
        v415 = *((_QWORD *)v99 + 5);
        if ( *(_DWORD *)(v85 + 1616) )
          goto LABEL_185;
        *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v904 ^ v903;
        v416 = *(_DWORD *)(v85 + 1616) == 0;
        goto LABEL_649;
      case 24:
        if ( (*(_DWORD *)(v85 + 1752) & 0x40000000) != 0 )
        {
          v503 = __rdtsc();
          v504 = (__ROR8__(v503, 3) ^ v503) * (unsigned __int128)0x7010008004002001uLL;
          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x628) = *((_QWORD *)&v504 + 1);
          *(_DWORD *)(v85 + 1500) = ((unsigned __int64)v504 ^ *((_QWORD *)&v504 + 1)) % 5;
        }
        while ( 1 )
        {
          v505 = *(_DWORD *)(v85 + 1500);
          if ( v505 )
          {
            v506 = v505 - 1;
            if ( v506 )
            {
              v507 = v506 - 1;
              if ( v507 )
              {
                v508 = v507 - 1;
                if ( !v508 )
                {
                  v124 = (*(_DWORD *)(v85 + 1752) & 0x40000000) == 0;
                  v531 = (_BYTE *)v85;
                  v532 = *(__int64 **)(v85 + 1088);
                  v511 = 0;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v85;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v85;
                  v533 = *v532;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = *v532;
                  if ( !v124 )
                    goto LABEL_1283;
                  v534 = *((_QWORD *)v99 + 5);
                  if ( v534 )
                  {
                    v511 = 1;
                    if ( v533 != v534 )
                    {
                      *((_QWORD *)v99 + 3) = v533;
                      v535 = *(_QWORD *)(v85 + 1240);
                      *(_QWORD *)v535 = v99;
                      *(_DWORD *)(v535 + 16) = 48;
                      v536 = *(_QWORD *)(v85 + 1240);
                      *(_QWORD *)(v536 + 8) = v533;
                      *(_DWORD *)(v536 + 20) = 4096;
                      if ( !*(_DWORD *)(v85 + 1616) )
                      {
                        *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v85 + 1640) = *(int *)v99;
                        *(_QWORD *)(v85 + 1648) = 5LL;
                        *(_DWORD *)(v85 + 1616) = 1;
                      }
                    }
                    goto LABEL_1283;
                  }
                  if ( !v533 )
                    goto LABEL_1283;
                  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = 1;
                  v537 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *))(v85 + 488))(
                           v533,
                           v1 + 48,
                           v1 + 40);
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v537;
                  v540 = v537;
                  if ( !v537 )
                  {
                    v541 = -1073741701;
                    goto LABEL_959;
                  }
                  v542 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0);
                  v543 = v1 + 92;
                  v544 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0);
                  v545 = 4;
                  *v1 = v544;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v542;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x168) = 0LL;
                  do
                  {
                    *v543++ = 0;
                    --v545;
                  }
                  while ( v545 );
                  v546 = 0;
                  if ( *(_DWORD *)(v85 + 1476) )
                  {
                    v547 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x170);
                    LODWORD(v538) = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x16C);
                    LODWORD(v539) = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x168);
                    while ( 1 )
                    {
                      v548 = v85;
                      v549 = 0;
                      if ( *(_QWORD *)(v85 + 1912) )
                        v548 = *(_QWORD *)(v85 + 1912);
                      v550 = v548 + *(unsigned int *)(v548 + 1472);
                      if ( (_DWORD)v539 && (unsigned int)v538 <= v546 )
                      {
                        v549 = v538;
                        v550 = v548 + v547;
                      }
                      if ( v549 != v546 )
                        break;
LABEL_829:
                      v538 = v549;
                      *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x168) = 1;
                      *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x16C) = v549;
                      v547 = v550 - v548;
                      v539 = 1LL;
                      *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x170) = v550 - v548;
                      v559 = *(_DWORD *)v550;
                      if ( (*(_DWORD *)v550 == 1 || v559 == 12)
                        && *(_QWORD *)(v550 + 8) == v540
                        && *(_DWORD *)(v550 + 16) == v544
                        || (unsigned int)(v559 - 33) <= 1 && *(_QWORD *)(v550 + 32) == v542 )
                      {
                        goto LABEL_837;
                      }
                      if ( ++v546 >= *(_DWORD *)(v85 + 1476) )
                        goto LABEL_836;
                    }
                    v551 = v546 - v549;
                    v549 = v546;
                    while ( 2 )
                    {
                      v552 = *(_DWORD *)v550;
                      if ( *(int *)v550 > 17 )
                      {
                        if ( v552 != 19 )
                        {
                          if ( v552 != 28 )
                          {
                            if ( v552 == 30 )
                            {
                              v557 = (((*(_DWORD *)(v550 + 36) - 1) / 0xCu + 7) & 0xFFFFFFF8)
                                   + 24 * (*(unsigned __int16 *)(v550 + 40) + 2);
                            }
                            else if ( (unsigned int)(v552 - 33) > 1 )
                            {
LABEL_813:
                              v557 = 48LL;
                            }
                            else
                            {
                              v557 = 20
                                   * (unsigned int)(((*(_DWORD *)(v550 + 32) & 0xFFF)
                                                   + (unsigned __int64)*(unsigned int *)(v550 + 40)
                                                   + 4095) >> 12)
                                   + 48;
                            }
                            goto LABEL_827;
                          }
                          v558 = *(unsigned __int16 *)(v550 + 40);
LABEL_816:
                          v557 = (v558 + 55) & 0xFFFFFFF8;
                          goto LABEL_827;
                        }
                      }
                      else if ( v552 != 17 )
                      {
                        v553 = v552 - 1;
                        if ( !v553 )
                          goto LABEL_818;
                        v554 = v553 - 6;
                        if ( !v554 )
                        {
                          v557 = (unsigned int)(24 * (*(_DWORD *)(v550 + 24) + 2));
                          goto LABEL_827;
                        }
                        v555 = v554 - 1;
                        if ( v555 )
                        {
                          v556 = v555 - 2;
                          if ( v556 )
                          {
                            if ( v556 != 2 )
                              goto LABEL_813;
LABEL_818:
                            v557 = 4 * (*(_DWORD *)(v550 + 16) / 0xCu) + 48;
                          }
                          else
                          {
                            v557 = (unsigned int)(16 * (*(_DWORD *)(v550 + 28) + 3));
                          }
LABEL_827:
                          v550 += v557;
                          if ( !--v551 )
                          {
                            v85 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                            v542 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                            v544 = *v1;
                            v540 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                            goto LABEL_829;
                          }
                          continue;
                        }
                        v558 = *(unsigned __int16 *)(v550 + 32);
                        goto LABEL_816;
                      }
                      break;
                    }
                    v557 = 56LL;
                    goto LABEL_827;
                  }
LABEL_836:
                  v550 = 0LL;
LABEL_837:
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x220) = v550;
                  if ( v550 )
                  {
                    v541 = -1073741554;
                    goto LABEL_957;
                  }
                  v560 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(v85 + 648))(
                           *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x90),
                           v538,
                           0LL,
                           v539);
                  v124 = (*(_DWORD *)(v85 + 1752) & 0x40000000) == 0;
                  v561 = v560;
                  v562 = *(unsigned int *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0);
                  *v1 = v560;
                  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v562;
                  if ( !v124 )
                  {
                    v563 = sub_140777D18(
                             v1 + 50,
                             *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0),
                             1LL);
                    v531 = *(_BYTE **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8);
                    v541 = v563;
LABEL_958:
                    v533 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
LABEL_959:
                    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v531;
                    v656 = &v531[-v85];
                    v85 = (unsigned __int64)v531;
                    v657 = &v656[*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50)];
                    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v657;
                    if ( (int)(v541 + 0x80000000) < 0 || v541 == -1073741554 )
                      *((_QWORD *)v657 + 5) = v533;
                    v511 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
                    goto LABEL_1283;
                  }
                  v564 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0);
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v564;
                  v565 = (*(__int64 (__fastcall **)(__int64))(v85 + 480))(v564);
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v565;
                  if ( !v565 )
                    goto LABEL_956;
                  v566 = *(unsigned int *)(v85 + 1660);
                  v567 = v562;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v562 / 0xC;
                  v568 = 4 * (v562 / 0xC);
                  v569 = v561;
                  v570 = *(unsigned int *)(v85 + 1436);
                  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v568;
                  v571 = v569 != 0 ? 12 : 1;
                  v572 = v570 + v568 + 48;
                  if ( v572 > *(_DWORD *)(v85 + 1884) )
                  {
                    v573 = (_BYTE *)sub_140251E08(v85, v572, v566);
                    if ( v573 )
                    {
                      v574 = *(_DWORD *)(v85 + 1752);
                      if ( (v574 & 4) == 0 )
                      {
                        v575 = *(_DWORD *)(v85 + 1436);
                        v576 = *(_QWORD *)(v85 + 1408);
                        v577 = (_QWORD *)v85;
                        v578 = (v574 & 0x20000000) != 0 ? *(_DWORD *)(v85 + 1660) : 0;
                        if ( v575 >= 8 )
                        {
                          v579 = (unsigned __int64)v575 >> 3;
                          do
                          {
                            *v577 = 0LL;
                            v575 -= 8;
                            ++v577;
                            --v579;
                          }
                          while ( v579 );
                        }
                        for ( ; v575; --v575 )
                        {
                          *(_BYTE *)v577 = 0;
                          v577 = (_QWORD *)((char *)v577 + 1);
                        }
                        v580 = *((_DWORD *)v573 + 415);
                        *((_DWORD *)v573 + 415) = v578;
                        if ( v578 == 3 )
                        {
                          (*((void (__fastcall **)(__int64))v573 + 105))(v576);
                        }
                        else
                        {
                          v581 = 0;
                          if ( (*((_DWORD *)v573 + 438) & 0x10000000) == 0 )
                            v581 = v578;
                          if ( v581 )
                            (*((void (__fastcall **)(__int64, _QWORD))v573 + 66))(v576 - 8, *(_QWORD *)(v576 - 8));
                          else
                            (*((void (__fastcall **)(__int64))v573 + 29))(v576);
                        }
                        *((_DWORD *)v573 + 415) = v580;
                      }
                      *((_DWORD *)v573 + 438) &= ~4u;
                      goto LABEL_861;
                    }
LABEL_859:
                    v541 = -1073741670;
LABEL_957:
                    v531 = *(_BYTE **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                    goto LABEL_958;
                  }
                  v573 = (_BYTE *)v85;
                  *(_DWORD *)(v85 + 1436) = v572;
LABEL_861:
                  ++*((_DWORD *)v573 + 369);
                  v582 = 48;
                  v583 = &v573[v570];
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x328) = &v573[v570];
                  v584 = &v573[v570];
                  v585 = 6LL;
                  v586 = 1LL;
                  do
                  {
                    *v584 = 0LL;
                    v582 -= 8;
                    ++v584;
                    --v585;
                  }
                  while ( v585 );
                  for ( ; v582; --v582 )
                  {
                    *(_BYTE *)v584 = 0;
                    v584 = (_QWORD *)((char *)v584 + 1);
                  }
                  v587 = *(_QWORD **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                  *(_DWORD *)v583 = v571;
                  *((_QWORD *)v583 + 1) = v587;
                  *((_DWORD *)v583 + 4) = v567;
                  v588 = v587;
                  *((_DWORD *)v573 + 376) += v567;
                  v589 = (const char *)v587;
                  v590 = *((_DWORD *)v573 + 371);
                  v591 = (unsigned __int64)v587 + v567;
                  v592 = *((_QWORD *)v573 + 186);
                  if ( *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) < v591 )
                  {
                    do
                    {
                      _mm_prefetch(v589, 0);
                      v589 += 64;
                    }
                    while ( (unsigned __int64)v589 < v591 );
                  }
                  v593 = (unsigned int)v567;
                  if ( (unsigned int)v567 >= 8 )
                  {
                    v586 = (unsigned __int64)(unsigned int)v567 >> 3;
                    do
                    {
                      v592 = __ROL8__(*v588++ ^ v592, v590);
                      v593 = (unsigned int)(v593 - 8);
                      --v586;
                    }
                    while ( v586 );
                  }
                  if ( (_DWORD)v593 )
                  {
                    do
                    {
                      v594 = *(unsigned __int8 *)v588;
                      v588 = (_QWORD *)((char *)v588 + 1);
                      v592 = __ROL8__(v594 ^ v592, v590);
                      v124 = (_DWORD)v593 == 1;
                      v593 = (unsigned int)(v593 - 1);
                    }
                    while ( !v124 );
                  }
                  for ( i6 = v592; ; v592 = (unsigned int)i6 ^ (unsigned int)v592 )
                  {
                    i6 >>= 31;
                    if ( !i6 )
                      break;
                  }
                  LODWORD(v592) = v592 & 0x7FFFFFFF;
                  *((_DWORD *)v583 + 5) = v592;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x198) = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x328);
                  *((_DWORD *)v573 + 376) += v567;
                  v596 = -1073741275;
                  v597 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x198);
                  v598 = *((_QWORD *)v573 + 142) + 16LL;
                  v599 = *((_QWORD *)v573 + 145);
                  v600 = KeGetCurrentIrql();
                  __writecr8(0xFuLL);
                  (*((void (__fastcall **)(__int64, unsigned __int64, unsigned __int64, __int64))v573 + 39))(
                    v599,
                    v592,
                    v586,
                    v593);
                  v601 = v598 + 24LL * **((unsigned int **)v573 + 142);
                  while ( *(_QWORD *)(v598 + 8) != *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) )
                  {
                    v598 += 24LL;
                    if ( v598 >= v601 )
                      goto LABEL_880;
                  }
                  v596 = 0;
                  *(_OWORD *)(v597 + 24) = *(_OWORD *)v598;
                  *(_QWORD *)(v597 + 40) = *(_QWORD *)(v598 + 16);
LABEL_880:
                  (*((void (__fastcall **)(_QWORD))v573 + 47))(*((_QWORD *)v573 + 145));
                  __writecr8(v600);
                  if ( v596 < 0 )
                  {
                    v602 = 24;
                    v603 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x198) + 24LL);
                    v604 = 3LL;
                    do
                    {
                      *v603 = 0LL;
                      v602 -= 8;
                      ++v603;
                      --v604;
                    }
                    while ( v604 );
                    for ( ; v602; --v602 )
                    {
                      *(_BYTE *)v603 = 0;
                      v603 = (_QWORD *)((char *)v603 + 1);
                    }
                    *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x198) + 24LL) = 1LL;
                  }
                  v605 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                  v606 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x198) + 48LL);
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v606;
                  if ( v605 >= 8 )
                  {
                    v607 = (unsigned __int64)v605 >> 3;
                    do
                    {
                      *v606 = -1LL;
                      v605 -= 8;
                      ++v606;
                      --v607;
                    }
                    while ( v607 );
                  }
                  for ( ; v605; --v605 )
                  {
                    *(_BYTE *)v606 = -1;
                    v606 = (_QWORD *)((char *)v606 + 1);
                  }
                  v608 = *(unsigned int *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                  v609 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = -1;
                  v610 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = 0;
                  v611 = *v609;
                  v612 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = &v609[3 * v608];
                  v613 = (_DWORD *)(*((__int64 (__fastcall **)(__int64, __int64, __int64))v573 + 63))(v612, v610, v611);
                  if ( !v613 )
                    goto LABEL_956;
LABEL_892:
                  v614 = 0;
                  if ( (v613[9] & 0x2000000) != 0 )
                    goto LABEL_919;
                  v615 = *v613;
                  if ( *v613 == 1414090313 && v613[1] == 1195525195 )
                    goto LABEL_919;
                  if ( v615 == 1162297680 )
                  {
                    v616 = *((_WORD *)v613 + 2);
                    if ( v616 == 30583 || v616 == 29303 || v616 == 30839 )
                      goto LABEL_919;
                  }
                  if ( v615 == 1095914053 && *((_WORD *)v613 + 2) == 16724 )
                    goto LABEL_919;
                  v617 = (char *)*((_QWORD *)v573 + 209);
                  v618 = 7;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x400) = *((_QWORD *)v573 + 210);
                  v619 = (char *)v613 - v617;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x408) = *((_QWORD *)v573 + 211);
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x410) = *((_QWORD *)v573 + 212);
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x3F8) = v617;
                  while ( 1 )
                  {
                    v620 = (unsigned __int8)v617[v619];
                    v621 = (unsigned __int8)*v617++;
                    if ( v620 != v621 )
                      break;
                    if ( !--v618 )
                      goto LABEL_919;
                  }
                  v622 = *(__int64 **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x400);
                  v623 = 8;
                  v624 = (__int64 *)v613;
                  do
                  {
                    v625 = *v624++;
                    v626 = *v622++;
                    if ( v625 != v626 )
                      goto LABEL_912;
                    v623 -= 8;
                  }
                  while ( v623 >= 8 );
                  if ( !v623 )
                  {
LABEL_919:
                    v614 = 1;
                  }
                  else
                  {
                    while ( 1 )
                    {
                      v627 = *(unsigned __int8 *)v624;
                      v624 = (__int64 *)((char *)v624 + 1);
                      v628 = *(unsigned __int8 *)v622;
                      v622 = (__int64 *)((char *)v622 + 1);
                      if ( v627 != v628 )
                        break;
                      if ( !--v623 )
                        goto LABEL_919;
                    }
LABEL_912:
                    v629 = *(char **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x408);
                    v630 = (char *)v613 - v629;
                    v631 = 4;
                    while ( 1 )
                    {
                      v632 = (unsigned __int8)v629[v630];
                      v633 = (unsigned __int8)*v629++;
                      if ( v632 != v633 )
                        break;
                      if ( !--v631 )
                        goto LABEL_919;
                    }
                    v634 = *(char **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x410);
                    v635 = (char *)v613 - v634;
                    v636 = 6;
                    while ( 1 )
                    {
                      v637 = (unsigned __int8)v634[v635];
                      v638 = (unsigned __int8)*v634++;
                      if ( v637 != v638 )
                        break;
                      if ( !--v636 )
                        goto LABEL_919;
                    }
                  }
                  if ( (int)v613[9] < 0 )
                    v614 = 1;
                  if ( v614
                    && *v613 == 1414090313
                    && v613[1] == 1195525195
                    && (*((_DWORD *)v573 + 438) & 0x10000000) != 0 )
                  {
                    v614 = 0;
                  }
                  v639 = v613[2];
                  if ( v613[4] > v639 )
                    v639 = v613[4];
                  v640 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                  v641 = v639 + v613[3];
                  while ( 1 )
                  {
                    v642 = v609[2];
                    if ( (v642 & 1) == 0 )
                    {
                      v643 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                      if ( v642 < v643 )
                        v643 = v609[2];
                      *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v643;
                      v644 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                      if ( v642 > v644 )
                        v644 = v642;
                      *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v644;
                    }
                    v645 = *v609;
                    v646 = v609[1] - v645;
                    v647 = (char *)(v640 + v645);
                    if ( v614 )
                    {
                      v648 = *(_DWORD **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                      *v648 = 0x80000000;
                    }
                    else
                    {
                      *((_DWORD *)v573 + 376) += v646;
                      v649 = (const char *)(v640 + v645);
                      v650 = *((_DWORD *)v573 + 371);
                      v651 = *((_QWORD *)v573 + 186);
                      v652 = &v647[v646];
                      if ( v647 < v652 )
                      {
                        do
                        {
                          _mm_prefetch(v649, 0);
                          v649 += 64;
                        }
                        while ( v649 < v652 );
                      }
                      if ( v646 >= 8 )
                      {
                        v653 = (unsigned __int64)v646 >> 3;
                        do
                        {
                          v651 = __ROL8__(*(_QWORD *)v647 ^ v651, v650);
                          v647 += 8;
                          v646 -= 8;
                          --v653;
                        }
                        while ( v653 );
                        v85 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                        v640 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                      }
                      if ( v646 )
                      {
                        do
                        {
                          v654 = (unsigned __int8)*v647++;
                          v651 = __ROL8__(v654 ^ v651, v650);
                          --v646;
                        }
                        while ( v646 );
                        v85 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                      }
                      for ( i7 = v651 >> 31; i7; i7 >>= 31 )
                        LODWORD(v651) = i7 ^ v651;
                      v648 = *(_DWORD **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                      *v648 = v651 & 0x7FFFFFFF;
                    }
                    v609 += 3;
                    if ( v609 == *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) )
                      break;
                    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v648 + 1;
                    if ( *v609 < v613[3] || v640 + (unsigned __int64)v609[1] > v641 )
                    {
                      v613 = (_DWORD *)(*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD, char *))v573 + 63))(
                                         *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60),
                                         v640,
                                         *v609,
                                         v647);
                      if ( !v613 )
                      {
                        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8);
                        goto LABEL_956;
                      }
                      goto LABEL_892;
                    }
                  }
                  v658 = *(unsigned int *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                  v659 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                  if ( (_DWORD)v658 == -1 && !v659 )
                    v658 = 0LL;
                  v660 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0);
                  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x270) = v659 - v658;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v573;
                  v531 = v573;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x398) = v660 + (unsigned int)v658;
                  LOBYTE(v658) = 1;
                  v661 = (*((__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))v573 + 59))(
                           v660,
                           v658,
                           0LL,
                           v1 + 40);
                  v662 = v661;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x3A0) = v661;
                  LOBYTE(v662) = 1;
                  v663 = v661 != 0 ? *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) : 0;
                  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = v663;
                  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x274) = v663;
                  v664 = (*((__int64 (__fastcall **)(_QWORD, __int64, __int64, unsigned int *))v573 + 59))(
                           *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0),
                           v662,
                           12LL,
                           v1 + 40);
                  v665 = v664;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v664;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x3A8) = v664;
                  LOBYTE(v665) = 1;
                  v666 = v664 != 0 ? *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) : 0;
                  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v666;
                  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = v666;
                  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x278) = v666;
                  v667 = (*((__int64 (__fastcall **)(_QWORD, __int64, __int64, unsigned int *))v573 + 59))(
                           *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0),
                           v665,
                           10LL,
                           v1 + 40);
                  v668 = *v1;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x3B0) = v667;
                  v669 = v667 != 0 ? *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) : 0;
                  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = v669;
                  v670 = *((unsigned int *)v573 + 359);
                  v671 = *((unsigned int *)v573 + 415);
                  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x27C) = v669;
                  v672 = v668 != 0 ? 0xB : 0;
                  v673 = v670 + 192;
                  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v672;
                  if ( (unsigned int)(v670 + 192) <= *((_DWORD *)v573 + 471) )
                  {
                    v674 = v573;
                    *((_DWORD *)v573 + 359) = v673;
                  }
                  else
                  {
                    v674 = (_BYTE *)sub_140251E08(v573, v673, v671);
                    if ( !v674 )
                    {
                      v541 = -1073741670;
                      goto LABEL_958;
                    }
                    v675 = *((_DWORD *)v573 + 438);
                    if ( (v675 & 4) == 0 )
                    {
                      v676 = *((_DWORD *)v573 + 359);
                      v677 = *((_QWORD *)v573 + 176);
                      v678 = (v675 & 0x20000000) != 0 ? *((_DWORD *)v573 + 415) : 0;
                      if ( v676 >= 8 )
                      {
                        v679 = (unsigned __int64)v676 >> 3;
                        do
                        {
                          *(_QWORD *)v573 = 0LL;
                          v676 -= 8;
                          v573 += 8;
                          --v679;
                        }
                        while ( v679 );
                      }
                      for ( ; v676; --v676 )
                        *v573++ = 0;
                      v680 = *((_DWORD *)v674 + 415);
                      *((_DWORD *)v674 + 415) = v678;
                      if ( v678 == 3 )
                      {
                        (*((void (__fastcall **)(__int64))v674 + 105))(v677);
                      }
                      else
                      {
                        v681 = 0;
                        if ( (*((_DWORD *)v674 + 438) & 0x10000000) == 0 )
                          v681 = v678;
                        if ( v681 )
                          (*((void (__fastcall **)(__int64, _QWORD))v674 + 66))(v677 - 8, *(_QWORD *)(v677 - 8));
                        else
                          (*((void (__fastcall **)(__int64))v674 + 29))(v677);
                      }
                      *((_DWORD *)v674 + 415) = v680;
                    }
                    *((_DWORD *)v674 + 438) &= ~4u;
                  }
                  v682 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                  v683 = v1 + 156;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = ((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                        + 624;
                  *((_DWORD *)v674 + 369) += 4;
                  v684 = (_QWORD **)(v1 + 230);
                  v685 = (__int64)&v674[v670];
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = 4LL;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x298) = v685;
                  v686 = 4LL;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x220) = v685;
                  do
                  {
                    v687 = *v683;
                    v688 = 48;
                    v689 = *v684;
                    v690 = (_QWORD *)v685;
                    v691 = 6LL;
                    do
                    {
                      *v690 = 0LL;
                      v688 -= 8;
                      ++v690;
                      --v691;
                    }
                    while ( v691 );
                    for ( ; v688; --v688 )
                    {
                      *(_BYTE *)v690 = 0;
                      v690 = (_QWORD *)((char *)v690 + 1);
                    }
                    *(_DWORD *)v685 = v682;
                    *(_QWORD *)(v685 + 8) = v689;
                    if ( v682 == 32 && (_DWORD)v687 )
                    {
                      sub_1401588B8((__int64)v674, (__int64)v689, v687, v685 + 24);
                      v683 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                      v686 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                    }
                    *(_DWORD *)(v685 + 16) = v687;
                    *((_DWORD *)v674 + 376) += v687;
                    v692 = (const char *)v689;
                    v693 = *((_DWORD *)v674 + 371);
                    v694 = *((_QWORD *)v674 + 186);
                    if ( v689 < (_QWORD *)((char *)v689 + v687) )
                    {
                      do
                      {
                        _mm_prefetch(v692, 0);
                        v692 += 64;
                      }
                      while ( v692 < (const char *)v689 + v687 );
                    }
                    v695 = (unsigned int)v687;
                    if ( (unsigned int)v687 >= 8 )
                    {
                      v696 = v687 >> 3;
                      do
                      {
                        v694 = __ROL8__(*v689++ ^ v694, v693);
                        v695 = (unsigned int)(v695 - 8);
                        --v696;
                      }
                      while ( v696 );
                    }
                    if ( (_DWORD)v695 )
                    {
                      do
                      {
                        v697 = *(unsigned __int8 *)v689;
                        v689 = (_QWORD *)((char *)v689 + 1);
                        v694 = __ROL8__(v697 ^ v694, v693);
                        v124 = (_DWORD)v695 == 1;
                        v695 = (unsigned int)(v695 - 1);
                      }
                      while ( !v124 );
                    }
                    for ( i8 = v694; ; v694 = (unsigned int)i8 ^ (unsigned int)v694 )
                    {
                      i8 >>= 31;
                      if ( !i8 )
                        break;
                    }
                    LODWORD(v694) = v694 & 0x7FFFFFFF;
                    v699 = 1LL;
                    *(_DWORD *)(v685 + 20) = v694;
                    ++v683;
                    *((_DWORD *)v674 + 376) += v687;
                    ++v684;
                    v685 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x298) + 48LL;
                    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v683;
                    --v686;
                    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x298) = v685;
                    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v686;
                  }
                  while ( v686 );
                  v700 = *v1;
                  v701 = (int *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x220) + 96LL);
                  v85 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                  v820 = *v1 != 0;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v674;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v674;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) = v701;
                  v702 = v820 + 13;
                  if ( v701 )
                  {
                    v718 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
                    v706 = (__int64)v674;
                    *v701 = v702;
                    v719 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v674;
                  }
                  else
                  {
                    v703 = *((unsigned int *)v674 + 359);
                    v704 = v703 + 48;
                    if ( (unsigned int)(v703 + 48) <= *((_DWORD *)v674 + 471) )
                    {
                      v706 = (__int64)v674;
                      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v674;
                      *((_DWORD *)v674 + 359) = v704;
                    }
                    else
                    {
                      v705 = sub_140251E08(v674, v704, *((unsigned int *)v674 + 415));
                      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v705;
                      v706 = v705;
                      if ( !v705 )
                        goto LABEL_859;
                      v707 = *((_DWORD *)v674 + 438);
                      if ( (v707 & 4) == 0 )
                      {
                        v708 = *((_DWORD *)v674 + 359);
                        v709 = *((_QWORD *)v674 + 176);
                        v710 = (v707 & 0x20000000) != 0 ? *((_DWORD *)v674 + 415) : 0;
                        if ( v708 >= 8 )
                        {
                          v711 = (unsigned __int64)v708 >> 3;
                          do
                          {
                            *(_QWORD *)v674 = 0LL;
                            v708 -= 8;
                            v674 += 8;
                            --v711;
                          }
                          while ( v711 );
                        }
                        for ( ; v708; --v708 )
                          *v674++ = 0;
                        v712 = *(_DWORD *)(v706 + 1660);
                        *(_DWORD *)(v706 + 1660) = v710;
                        if ( v710 == 3 )
                        {
                          (*(void (__fastcall **)(__int64, __int64))(v706 + 840))(v709, 1LL);
                        }
                        else
                        {
                          v713 = 0;
                          if ( (*(_DWORD *)(v706 + 1752) & 0x10000000) == 0 )
                            v713 = v710;
                          if ( v713 )
                            (*(void (__fastcall **)(__int64, _QWORD))(v706 + 528))(v709 - 8, *(_QWORD *)(v709 - 8));
                          else
                            (*(void (__fastcall **)(__int64, __int64))(v706 + 232))(v709, 1LL);
                        }
                        *(_DWORD *)(v706 + 1660) = v712;
                      }
                      *(_DWORD *)(v706 + 1752) &= ~4u;
                    }
                    ++*(_DWORD *)(v706 + 1476);
                    v714 = v706 + v703;
                    v715 = 48;
                    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x330) = v706 + v703;
                    v716 = (_QWORD *)(v706 + v703);
                    v717 = 6LL;
                    do
                    {
                      *v716 = 0LL;
                      v715 -= 8;
                      ++v716;
                      --v717;
                    }
                    while ( v717 );
                    for ( ; v715; --v715 )
                    {
                      *(_BYTE *)v716 = 0;
                      v716 = (_QWORD *)((char *)v716 + 1);
                    }
                    v718 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
                    v124 = v702 == 32;
                    *(_DWORD *)v714 = v702;
                    v719 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                    *(_QWORD *)(v714 + 8) = v718;
                    if ( v124 && v719 )
                      sub_1401588B8(v706, v718, v719, v714 + 24);
                    *(_DWORD *)(v714 + 16) = v719;
                    v699 = v718;
                    *(_DWORD *)(v706 + 1504) += v719;
                    v720 = (const char *)v718;
                    v721 = *(_DWORD *)(v706 + 1484);
                    v694 = *(_QWORD *)(v706 + 1488);
                    v722 = v718 + v719;
                    if ( v718 < v722 )
                    {
                      do
                      {
                        _mm_prefetch(v720, 0);
                        v720 += 64;
                      }
                      while ( (unsigned __int64)v720 < v722 );
                    }
                    v695 = v719;
                    if ( v719 >= 8 )
                    {
                      v723 = (unsigned __int64)v719 >> 3;
                      do
                      {
                        v694 = __ROL8__(*(_QWORD *)v699 ^ v694, v721);
                        v699 += 8LL;
                        v695 = (unsigned int)(v695 - 8);
                        --v723;
                      }
                      while ( v723 );
                    }
                    if ( (_DWORD)v695 )
                    {
                      do
                      {
                        v724 = *(unsigned __int8 *)v699++;
                        v694 = __ROL8__(v724 ^ v694, v721);
                        v124 = (_DWORD)v695 == 1;
                        v695 = (unsigned int)(v695 - 1);
                      }
                      while ( !v124 );
                    }
                    for ( i9 = v694; ; v694 = (unsigned int)i9 ^ (unsigned int)v694 )
                    {
                      i9 >>= 31;
                      if ( !i9 )
                        break;
                    }
                    LODWORD(v694) = v694 & 0x7FFFFFFF;
                    *(_DWORD *)(v714 + 20) = v694;
                    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x330);
                    *(_DWORD *)(v706 + 1504) += v719;
                  }
                  if ( (*(_DWORD *)(v706 + 1752) & 0x40000000) != 0 && v719 )
                    sub_1401588B8(
                      v706,
                      v718,
                      v719,
                      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) + 28LL);
                  *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) + 24LL) = 0;
                  *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) + 24LL) |= 1u;
                  v726 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x220);
                  v727 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0);
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v706;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v706;
                  *(_DWORD *)(v726 + 144) = 35;
                  *(_DWORD *)(v726 + 184) ^= (*(_DWORD *)(v726 + 184) ^ (v700 != 0)) & 1;
                  if ( *(_DWORD *)(v726 + 160) >= 0x94u )
                  {
                    v728 = *(_QWORD *)(v726 + 152);
                    v729 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, __int64, __int64))(v706 + 480))(
                             v727,
                             v694,
                             v695,
                             v699);
                    if ( !v729 )
                      goto LABEL_859;
                    v730 = *(unsigned int *)(v729 + 80);
                    *(_DWORD *)(v726 + 184) |= 2u;
                    v731 = v727 + v730;
                    v732 = *(_QWORD **)(v728 + 112);
                    if ( (unsigned __int64)v732 >= v727 && (unsigned __int64)v732 < v731 )
                    {
                      *(_QWORD *)(v726 + 168) = *v732;
                      *(_DWORD *)(v726 + 184) |= 4u;
                    }
                    v733 = *(_QWORD **)(v728 + 120);
                    if ( (unsigned __int64)v733 >= v727 && (unsigned __int64)v733 < v731 )
                    {
                      *(_QWORD *)(v726 + 176) = *v733;
                      *(_DWORD *)(v726 + 184) |= 8u;
                    }
                  }
                  v124 = (*(_DWORD *)(v706 + 1752) & 0x400000) == 0;
                  v531 = (_BYTE *)v706;
                  v734 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0);
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v734;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v706;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v706;
                  if ( v124 )
                    goto LABEL_1242;
                  v735 = (*(__int64 (__fastcall **)(ULONG_PTR, unsigned __int64, __int64, __int64))(v706 + 480))(
                           v734,
                           v694,
                           v695,
                           v699);
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) = v735;
                  v736 = v735;
                  if ( !v735 )
                  {
LABEL_1055:
                    v541 = -1073741701;
                    goto LABEL_958;
                  }
                  v737 = *(_WORD *)(v735 + 6);
                  v738 = *(unsigned int *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x78)
                       * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
                  *(_WORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v737;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = *((_QWORD *)&v738 + 1) >> 3;
                  if ( !v737 )
                  {
                    if ( (*(_DWORD *)(v706 + 1752) & 0x200000) == 0 )
                    {
                      *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x248) = 649216;
                      KeBugCheckEx(
                        __ROR4__(*(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x248), 11),
                        0xAuLL,
                        v734,
                        0LL,
                        0LL);
                    }
                    if ( !*(_DWORD *)(v706 + 1616) )
                    {
                      *(_QWORD *)(v706 + 1624) = v706 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v706 + 1632) = 0LL;
                      *(_QWORD *)(v706 + 1640) = 271LL;
                      *(_QWORD *)(v706 + 1648) = v734;
                      *(_DWORD *)(v706 + 1616) = 1;
                    }
                    goto LABEL_1055;
                  }
                  v739 = 0;
                  v740 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                  v741 = v737;
                  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v737;
                  *(_QWORD *)&v738 = *(unsigned __int16 *)(v736 + 20);
                  v742 = &v740[3 * (unsigned int)(*((_QWORD *)&v738 + 1) >> 3)];
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v742;
                  *((_QWORD *)&v738 + 1) = v738 + v736 + 24;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = *((_QWORD *)&v738 + 1);
                  v744 = (int *)(*((_QWORD *)&v738 + 1) + 8LL);
                  do
                  {
                    v745 = *v744;
                    v746 = v744[1];
                    if ( v744[2] > (unsigned int)*v744 )
                      v745 = v744[2];
                    v747 = v745 + v746;
                    if ( v739 && v747 < *(_DWORD *)(*((_QWORD *)&v738 + 1) + 40LL * (v739 - 1) + 12) )
                    {
                      v754 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                      if ( (*(_DWORD *)(v754 + 1752) & 0x200000) == 0 )
                      {
                        v2122 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                        *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C8) = 649216;
                        KeBugCheckEx(
                          __ROR4__(*(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C8), 11),
                          0xAuLL,
                          v2122,
                          1uLL,
                          0LL);
                      }
                      if ( !*(_DWORD *)(v754 + 1616) )
                      {
LABEL_1079:
                        *(_QWORD *)(v754 + 1624) = v754 - 0x5C5FC0A76E374B18LL;
                        v755 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                        *(_QWORD *)(v754 + 1632) = 0LL;
                        *(_QWORD *)(v754 + 1640) = 271LL;
                        *(_QWORD *)(v754 + 1648) = v755;
                        *(_DWORD *)(v754 + 1616) = 1;
                      }
LABEL_956:
                      v541 = -1073741701;
                      goto LABEL_957;
                    }
                    if ( v740 != v742 )
                    {
                      do
                      {
                        v748 = v740[1];
                        if ( *v740 >= v747 || v748 <= v746 )
                          break;
                        if ( *v740 < v746 || v748 > v747 )
                        {
                          v754 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                          if ( (*(_DWORD *)(v754 + 1752) & 0x200000) == 0 )
                          {
                            v2123 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                            *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1CC) = 649216;
                            KeBugCheckEx(
                              __ROR4__(*(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1CC), 11),
                              0xAuLL,
                              v2123,
                              2uLL,
                              0LL);
                          }
                          if ( !*(_DWORD *)(v754 + 1616) )
                            goto LABEL_1079;
                          goto LABEL_956;
                        }
                        __f4(
                          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8),
                          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30),
                          *((_QWORD *)&v738 + 1) + 40LL * v739,
                          v740);
                        v742 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
                        v740 += 3;
                        *((_QWORD *)&v738 + 1) = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                      }
                      while ( v740 != v742 );
                      v741 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                    }
                    ++v739;
                    v744 += 10;
                  }
                  while ( v739 < v741 );
                  v749 = *(_BYTE **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                  v750 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                  v751 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                  v752 = *(_WORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                  if ( v740 != v742 )
                  {
                    if ( (*((_DWORD *)v749 + 438) & 0x200000) == 0 )
                    {
                      v2124 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                      *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D0) = 649216;
                      KeBugCheckEx(
                        __ROR4__(*(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D0), 11),
                        0xAuLL,
                        v2124,
                        3uLL,
                        0LL);
                    }
                    if ( !*((_DWORD *)v749 + 404) )
                    {
                      *((_QWORD *)v749 + 203) = v749 - 0x5C5FC0A76E374B18LL;
                      v753 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                      *((_QWORD *)v749 + 204) = 0LL;
                      *((_QWORD *)v749 + 205) = 271LL;
                      *((_QWORD *)v749 + 206) = v753;
                      *((_DWORD *)v749 + 404) = 1;
                    }
                    goto LABEL_956;
                  }
                  v756 = *((unsigned int *)v749 + 359);
                  v757 = v756 + ((v750 + 6) & 0xFFFFFFF8) + 24 * (v741 + 2);
                  if ( v757 <= *((_DWORD *)v749 + 471) )
                  {
                    v759 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                    *((_DWORD *)v749 + 359) = v757;
                    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) = v749;
                    goto LABEL_1101;
                  }
                  v758 = sub_140251E08(
                           *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8),
                           v757,
                           *((unsigned int *)v749 + 415));
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) = v758;
                  v759 = v758;
                  if ( !v758 )
                    goto LABEL_859;
                  v760 = *((_DWORD *)v749 + 438);
                  if ( (v760 & 4) == 0 )
                  {
                    v761 = *((_DWORD *)v749 + 359);
                    v762 = *((_QWORD *)v749 + 176);
                    v763 = (v760 & 0x20000000) != 0 ? *((_DWORD *)v749 + 415) : 0;
                    if ( v761 >= 8 )
                    {
                      v764 = (unsigned __int64)v761 >> 3;
                      do
                      {
                        *(_QWORD *)v749 = 0LL;
                        v761 -= 8;
                        v749 += 8;
                        --v764;
                      }
                      while ( v764 );
                    }
                    for ( ; v761; --v761 )
                      *v749++ = 0;
                    v765 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                    v766 = *(_DWORD *)(v759 + 1660);
                    *(_DWORD *)(v765 + 1660) = v763;
                    if ( v763 == 3 )
                    {
                      (*(void (__fastcall **)(__int64, __int64))(v765 + 840))(v762, 1LL);
                    }
                    else
                    {
                      v767 = 0;
                      if ( (*(_DWORD *)(v765 + 1752) & 0x10000000) == 0 )
                        v767 = v763;
                      if ( v767 )
                        (*(void (__fastcall **)(__int64, _QWORD))(v765 + 528))(v762 - 8, *(_QWORD *)(v762 - 8));
                      else
                        (*(void (__fastcall **)(__int64, __int64))(v765 + 232))(v762, 1LL);
                    }
                    *(_DWORD *)(v765 + 1660) = v766;
                    v759 = v765;
                  }
                  *(_DWORD *)(v759 + 1752) &= ~4u;
                  v750 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                  v741 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
LABEL_1101:
                  v768 = v759 + v756;
                  ++*(_DWORD *)(v759 + 1476);
                  v769 = (_QWORD *)(v759 + v756);
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x338) = v759 + v756;
                  v770 = 48;
                  v771 = 6LL;
                  do
                  {
                    *v769 = 0LL;
                    v770 -= 8;
                    ++v769;
                    --v771;
                  }
                  while ( v771 );
                  for ( ; v770; --v770 )
                  {
                    *(_BYTE *)v769 = 0;
                    v769 = (_QWORD *)((char *)v769 + 1);
                  }
                  v772 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                  *(_DWORD *)v768 = 30;
                  *(_QWORD *)(v768 + 8) = v772;
                  *(_DWORD *)(v768 + 16) = 0;
                  v773 = *(_QWORD *)(v759 + 1488);
                  for ( i10 = v773; ; LODWORD(v773) = i10 ^ v773 )
                  {
                    i10 >>= 31;
                    if ( !i10 )
                      break;
                  }
                  v124 = *v1 == 0;
                  v706 = v759;
                  *(_DWORD *)(v768 + 20) = v773 & 0x7FFFFFFF;
                  v775 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x338);
                  v776 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x128) = v775;
                  *(_QWORD *)(v775 + 24) = v776;
                  *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x128) + 32LL) = *(_DWORD *)(v751 + 80);
                  *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x128) + 36LL) = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                  *(_WORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x128) + 40LL) = v752;
                  v777 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                  *(_WORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x128) + 42LL) ^= (*(_WORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x128) + 42LL) ^ !v124) & 1;
                  v778 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x128);
                  v779 = *(unsigned __int16 *)(v778 + 40);
                  v780 = (unsigned int *)(v778 + 48 + (((unsigned int)(v750 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v778 + 48;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v780;
                  v781 = &v780[6 * v779];
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v781;
                  v782 = v777 + 3;
                  if ( !(_DWORD)v750 )
                    v782 = *(_DWORD **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v782;
                  if ( v741 )
                  {
                    v783 = v741;
                    v784 = v780 + 2;
                    do
                    {
                      v785 = 2LL;
                      do
                      {
                        *(v784 - 2) = 0;
                        *(v784 - 1) = 0;
                        *v784 = 0x80000000;
                        v784 += 3;
                        --v785;
                      }
                      while ( v785 );
                      --v783;
                    }
                    while ( v783 );
                  }
                  if ( v780 == v781 )
                  {
LABEL_1242:
                    v531 = (_BYTE *)v706;
                    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v706;
                    v541 = 0;
                    goto LABEL_958;
                  }
                  v786 = *(char **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                  while ( 2 )
                  {
                    v787 = 0;
                    if ( (*((_DWORD *)v786 + 9) & 0x2000000) != 0
                      || (v788 = *(_DWORD *)v786, *(_DWORD *)v786 == 1414090313) && *((_DWORD *)v786 + 1) == 1195525195
                      || v788 == 1162297680
                      && ((v789 = *((_WORD *)v786 + 2), v789 == 30583) || v789 == 29303 || v789 == 30839)
                      || v788 == 1095914053 && *((_WORD *)v786 + 2) == 16724 )
                    {
                      v787 = 1;
                    }
                    else
                    {
                      v790 = *(char **)(v759 + 1672);
                      v791 = 7;
                      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x420) = *(_QWORD *)(v759 + 1680);
                      v792 = v786 - v790;
                      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x428) = *(_QWORD *)(v759 + 1688);
                      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x430) = *(_QWORD *)(v759 + 1696);
                      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x418) = v790;
                      while ( 1 )
                      {
                        v793 = (unsigned __int8)v790[v792];
                        v794 = (unsigned __int8)*v790++;
                        if ( v793 != v794 )
                          break;
                        if ( !--v791 )
                          goto LABEL_1144;
                      }
                      v795 = *(__int64 **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x420);
                      v796 = 8;
                      v797 = (__int64 *)v786;
                      do
                      {
                        v798 = *v797++;
                        v799 = *v795++;
                        if ( v798 != v799 )
                          goto LABEL_1137;
                        v796 -= 8;
                      }
                      while ( v796 >= 8 );
                      if ( v796 )
                      {
                        while ( 1 )
                        {
                          v800 = *(unsigned __int8 *)v797;
                          v797 = (__int64 *)((char *)v797 + 1);
                          v801 = *(unsigned __int8 *)v795;
                          v795 = (__int64 *)((char *)v795 + 1);
                          if ( v800 != v801 )
                            break;
                          if ( !--v796 )
                            goto LABEL_1144;
                        }
LABEL_1137:
                        v802 = *(char **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x428);
                        v803 = v786 - v802;
                        v804 = 4;
                        while ( 1 )
                        {
                          v805 = (unsigned __int8)v802[v803];
                          v806 = (unsigned __int8)*v802++;
                          if ( v805 != v806 )
                            break;
                          if ( !--v804 )
                            goto LABEL_1144;
                        }
                        v807 = *(char **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x430);
                        v808 = v786 - v807;
                        v809 = 6;
                        while ( 1 )
                        {
                          v810 = (unsigned __int8)v807[v808];
                          v811 = (unsigned __int8)*v807++;
                          if ( v810 != v811 )
                            break;
                          if ( !--v809 )
                            goto LABEL_1144;
                        }
                      }
                      else
                      {
LABEL_1144:
                        v787 = 1;
                      }
                      v780 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                    }
                    if ( *((int *)v786 + 9) < 0 )
                      v787 = 1;
                    *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v787;
                    if ( v787 && *(_DWORD *)v786 == 1414090313 && *((_DWORD *)v786 + 1) == 1195525195 )
                    {
                      if ( (*(_DWORD *)(v759 + 1752) & 0x10000000) != 0 )
                        v787 = 0;
                      *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v787;
                    }
                    v812 = *((_DWORD *)v786 + 2);
                    v813 = *((_DWORD *)v786 + 3);
                    if ( *((_DWORD *)v786 + 4) > v812 )
                      v812 = *((_DWORD *)v786 + 4);
                    v814 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
                    v815 = v813 + v812;
                    *v1 = v813;
                    *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v815;
                    if ( v777 == v814 )
                    {
                      v816 = 0;
                      v817 = 0;
                    }
                    else
                    {
                      v816 = *v777;
                      v817 = v777[1];
                    }
                    v818 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                    v819 = v813;
                    if ( v818 == v814 )
                    {
LABEL_1180:
                      v820 = v816 < v813;
                    }
                    else
                    {
                      v820 = v816 < v813;
                      if ( v816 > v813 )
                      {
                        if ( v817 <= v815 && !v787 )
                        {
                          *v780 = v813;
                          v821 = v1 + 230;
                          v780[1] = v816;
                          v822 = v1 + 156;
                          v819 = v816;
                          v823 = (const char *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30)
                                              + *v780);
                          v824 = v816 - *v780;
                          v825 = &v823[v824];
                          for ( i11 = 0; i11 < 4; ++i11 )
                          {
                            if ( (unsigned __int64)v823 < *v821 + (unsigned __int64)*v822
                              && (unsigned __int64)v825 > *v821 )
                            {
                              goto LABEL_1179;
                            }
                            ++v822;
                            ++v821;
                          }
                          v827 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                          v828 = v823;
                          *(_DWORD *)(v827 + 1504) += v824;
                          v829 = *(_DWORD *)(v827 + 1484);
                          v830 = *(_QWORD *)(v827 + 1488);
                          if ( v823 < v825 )
                          {
                            do
                            {
                              _mm_prefetch(v828, 0);
                              v828 += 64;
                            }
                            while ( v828 < v825 );
                          }
                          if ( v824 >= 8 )
                          {
                            v831 = (unsigned __int64)v824 >> 3;
                            do
                            {
                              v824 -= 8;
                              v830 = __ROL8__(*(_QWORD *)v823 ^ v830, v829);
                              v823 += 8;
                              --v831;
                            }
                            while ( v831 );
                          }
                          for ( ; v824; --v824 )
                          {
                            v832 = *(unsigned __int8 *)v823++;
                            v830 = __ROL8__(v832 ^ v830, v829);
                          }
                          for ( i12 = v830 >> 31; i12; i12 >>= 31 )
                            LODWORD(v830) = i12 ^ v830;
                          *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) + 8LL) = v830 & 0x7FFFFFFF;
LABEL_1179:
                          v818 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                          v814 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
                          v759 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                          v813 = *v1;
                          v815 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                          v787 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                        }
                        goto LABEL_1180;
                      }
                    }
                    if ( v820 )
                    {
                      v835 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                    }
                    else
                    {
                      v834 = v817 <= v815;
                      v835 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                      if ( v834 && v818 != v814 )
                      {
                        v836 = v835[1];
                        if ( v836 <= v815 )
                        {
                          v837 = *(_BYTE **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                          while ( v835 != *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) )
                          {
                            if ( v787 )
                            {
                              *v837 = 0x80;
                            }
                            else
                            {
                              v838 = v818[1];
                              v819 = *v835;
                              if ( *v835 < (unsigned int)v838 )
                              {
                                if ( (*(_DWORD *)(v759 + 1752) & 0x200000) == 0 )
                                {
                                  v2125 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                                  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D4) = 649216;
                                  KeBugCheckEx(
                                    __ROR4__(*(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D4), 11),
                                    0xAuLL,
                                    v2125,
                                    6uLL,
                                    0LL);
                                }
                                if ( !*(_DWORD *)(v759 + 1616) )
                                {
                                  *(_QWORD *)(v759 + 1624) = v759 - 0x5C5FC0A76E374B18LL;
                                  *(_QWORD *)(v759 + 1632) = 0LL;
                                  v839 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                                  *(_QWORD *)(v759 + 1640) = 271LL;
                                  *(_QWORD *)(v759 + 1648) = v839;
                                  *(_DWORD *)(v759 + 1616) = 1;
                                }
                              }
                              v840 = v1 + 156;
                              v841 = v819 - v838;
                              v842 = v1 + 230;
                              v843 = (const char *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30)
                                                  + v838);
                              v844 = &v843[v819 - (unsigned int)v838];
                              for ( i13 = 0; i13 < 4; ++i13 )
                              {
                                if ( (unsigned __int64)v843 < *v842 + (unsigned __int64)*v840
                                  && (unsigned __int64)v844 > *v842 )
                                {
                                  goto LABEL_1210;
                                }
                                ++v840;
                                ++v842;
                              }
                              if ( v841 < 4 )
                              {
LABEL_1210:
                                **(_BYTE **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = 0x80;
                              }
                              else
                              {
                                v846 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                                v847 = (const char *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL)
                                                                + 0x30)
                                                    + v838);
                                *(_DWORD *)(v846 + 1504) += v841;
                                v848 = *(_DWORD *)(v846 + 1484);
                                v849 = *(_QWORD *)(v846 + 1488);
                                if ( v843 < v844 )
                                {
                                  do
                                  {
                                    _mm_prefetch(v847, 0);
                                    v847 += 64;
                                  }
                                  while ( v847 < v844 );
                                }
                                if ( v841 >= 8 )
                                {
                                  v850 = (unsigned __int64)v841 >> 3;
                                  do
                                  {
                                    v841 -= 8;
                                    v849 = __ROL8__(*(_QWORD *)v843 ^ v849, v848);
                                    v843 += 8;
                                    --v850;
                                  }
                                  while ( v850 );
                                }
                                for ( ; v841; --v841 )
                                {
                                  v851 = *(unsigned __int8 *)v843++;
                                  v849 = __ROL8__(v851 ^ v849, v848);
                                }
                                for ( i14 = v849 >> 7; i14; i14 >>= 7 )
                                  LOBYTE(v849) = i14 ^ v849;
                                **(_BYTE **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v849 & 0x7F;
                              }
                              v787 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                              v815 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                              v837 = *(_BYTE **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                              v818 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                            }
                            v818 += 3;
                            ++v837;
                            v835 += 3;
                            *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v818;
                            *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v837;
                            *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v835;
                            if ( v835 != *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) )
                              v836 = v835[1];
                            if ( v836 > v815 )
                              break;
                            v759 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                          }
                        }
                      }
                    }
                    if ( v787 || v819 == v815 )
                    {
LABEL_1234:
                      v867 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                    }
                    else
                    {
                      v853 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                      v854 = v1 + 156;
                      v855 = 0;
                      v856 = v1 + 230;
                      *(_DWORD *)(v853 + 12) = v819;
                      *(_DWORD *)(v853 + 16) = v815;
                      LODWORD(v853) = *(_DWORD *)(v853 + 12);
                      v857 = v815 - v853;
                      v858 = (const char *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30)
                                          + (unsigned int)v853);
                      v859 = &v858[v815 - (unsigned int)v853];
                      do
                      {
                        if ( (unsigned __int64)v858 < *v856 + (unsigned __int64)*v854 && (unsigned __int64)v859 > *v856 )
                          goto LABEL_1234;
                        ++v855;
                        ++v854;
                        ++v856;
                      }
                      while ( v855 < 4 );
                      v860 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                      *(_DWORD *)(v860 + 1504) += v857;
                      v861 = *(_DWORD *)(v860 + 1484);
                      v862 = *(_QWORD *)(v860 + 1488);
                      for ( i15 = v858; i15 < v859; i15 += 64 )
                        _mm_prefetch(i15, 0);
                      if ( v857 >= 8 )
                      {
                        v864 = (unsigned __int64)v857 >> 3;
                        do
                        {
                          v857 -= 8;
                          v862 = __ROL8__(*(_QWORD *)v858 ^ v862, v861);
                          v858 += 8;
                          --v864;
                        }
                        while ( v864 );
                      }
                      for ( ; v857; --v857 )
                      {
                        v865 = *(unsigned __int8 *)v858++;
                        v862 = __ROL8__(v865 ^ v862, v861);
                      }
                      for ( i16 = v862; ; LODWORD(v862) = i16 ^ v862 )
                      {
                        i16 >>= 31;
                        if ( !i16 )
                          break;
                      }
                      v867 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                      *(_DWORD *)(v867 + 20) = v862 & 0x7FFFFFFF;
                    }
                    v868 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
                    v777 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                    if ( v777 != v868
                      && *v777 >= *v1
                      && v777[1] <= *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) )
                    {
                      if ( v835 != v868 )
                      {
                        v869 = *(_BYTE **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                        *v869 = 0x80;
                        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v869 + 1;
                        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v835 + 3;
                      }
                      v777 += 3;
                      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v777;
                    }
                    v780 = (unsigned int *)(v867 + 24);
                    v759 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                    v786 = (char *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) + 40LL);
                    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v780;
                    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v786;
                    if ( v780 == *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) )
                      goto LABEL_1242;
                    continue;
                  }
                }
                v509 = v508 - 1;
                if ( v509 )
                {
                  if ( v509 != 1 )
                  {
                    *(_DWORD *)(v85 + 1500) = 0;
LABEL_1286:
                    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v85;
                    goto LABEL_185;
                  }
                  v510 = v99;
                  *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x99) = -1;
                  v511 = 0;
                  v512 = 0;
                  v513 = 0LL;
                  do
                  {
                    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x2B8) = 0LL;
                    while ( (*(unsigned int (__fastcall **)(_QWORD, unsigned int *, __int64, unsigned int *))(v85 + 1032))(
                              v512,
                              v1 + 174,
                              (__int64)v1 + 153,
                              v1 + 100) )
                    {
                      ++v511;
                      if ( !(*(__int64 (__fastcall **)(_QWORD, unsigned int *))(v85 + 496))(
                              *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x190),
                              v1 + 396) )
                      {
                        if ( (*(_DWORD *)(v85 + 1752) & 0x40000000) != 0 )
                        {
                          v514 = *(_QWORD **)(v85 + 1920);
                          v515 = 48;
                          v516 = 6LL;
                          do
                          {
                            v515 -= 8;
                            *v514 = *(_QWORD *)v510;
                            v510 += 8;
                            ++v514;
                            --v516;
                          }
                          while ( v516 );
                          for ( ; v515; --v515 )
                          {
                            v517 = *v510++;
                            *(_BYTE *)v514 = v517;
                            v514 = (_QWORD *)((char *)v514 + 1);
                          }
                          v510 = *(char **)(v85 + 1920);
                        }
                        *((_QWORD *)v510 + 3) = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x190);
                        v518 = *(_QWORD *)(v85 + 1240);
                        *(_QWORD *)v518 = v510;
                        *(_DWORD *)(v518 + 16) = 48;
                        v519 = *(_QWORD *)(v85 + 1240);
                        *(_QWORD *)(v519 + 8) = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x190);
                        *(_DWORD *)(v519 + 20) = 4096;
                        if ( !*(_DWORD *)(v85 + 1616) )
                        {
                          *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v85 + 1632) = v510 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v85 + 1640) = *(int *)v510;
                          *(_QWORD *)(v85 + 1648) = v513;
                          *(_DWORD *)(v85 + 1616) = 1;
                        }
                      }
                    }
                    ++v512;
                    ++v513;
                  }
                  while ( v512 < 2 );
                }
                else
                {
                  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = 0;
                  v511 = 0;
                  v520 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 760))(0LL);
                  if ( v520 )
                  {
                    v521 = *(char **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                    do
                    {
                      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x2C0) = 0LL;
                      v522 = v521;
                      v523 = 1;
                      v524 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(v85 + 752))(v520, v1 + 176);
                      if ( v524 )
                      {
                        do
                        {
                          ++v523;
                          if ( !(*(__int64 (__fastcall **)(__int64, unsigned int *))(v85 + 496))(v524, v1 + 398) )
                          {
                            if ( (*(_DWORD *)(v85 + 1752) & 0x40000000) != 0 )
                            {
                              v525 = *(_QWORD **)(v85 + 1920);
                              v526 = 48;
                              v527 = 6LL;
                              do
                              {
                                v526 -= 8;
                                *v525 = *(_QWORD *)v522;
                                v522 += 8;
                                ++v525;
                                --v527;
                              }
                              while ( v527 );
                              for ( ; v526; --v526 )
                              {
                                v528 = *v522++;
                                *(_BYTE *)v525 = v528;
                                v525 = (_QWORD *)((char *)v525 + 1);
                              }
                              v522 = *(char **)(v85 + 1920);
                            }
                            *((_QWORD *)v522 + 3) = v524;
                            *((_QWORD *)v522 + 4) = v520;
                            v529 = *(_QWORD *)(v85 + 1240);
                            *(_QWORD *)v529 = v522;
                            *(_DWORD *)(v529 + 16) = 48;
                            v530 = *(_QWORD *)(v85 + 1240);
                            *(_QWORD *)(v530 + 8) = v524;
                            *(_DWORD *)(v530 + 20) = 4096;
                            if ( !*(_DWORD *)(v85 + 1616) )
                            {
                              *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v85 + 1632) = v522 - 0x4C48B4211BBACBEBLL;
                              *(_QWORD *)(v85 + 1640) = *(int *)v522;
                              *(_QWORD *)(v85 + 1648) = 6LL;
                              *(_DWORD *)(v85 + 1616) = 1;
                            }
                          }
                          v524 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(v85 + 752))(v520, v1 + 176);
                        }
                        while ( v524 );
                        v521 = *(char **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                        v511 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
                      }
                      v511 += v523;
                      *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = v511;
                      v520 = (*(__int64 (__fastcall **)(__int64))(v85 + 760))(v520);
                    }
                    while ( v520 );
                  }
                }
              }
              else
              {
                v870 = v99;
                *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = 0;
                v871 = 0;
                v872 = 0;
                v873 = 0LL;
                do
                {
                  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x124) = 0;
                  while ( 1 )
                  {
                    do
                    {
                      if ( !(*(unsigned int (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(v85 + 728))(
                              v871,
                              v1 + 73,
                              v1 + 138) )
                        goto LABEL_1257;
                      v874 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 696))(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                       + 0x228));
                      v875 = v874;
                    }
                    while ( !v874 );
                    *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = v872 + 1;
                    v876 = (*(__int64 (__fastcall **)(__int64))(v85 + 704))(v874);
                    if ( !(*(__int64 (__fastcall **)(__int64, unsigned int *))(v85 + 496))(v876, v1 + 400) )
                      break;
                    (*(void (__fastcall **)(_QWORD, __int64))(v85 + 712))(
                      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x228),
                      v875);
                    v872 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
                  }
                  if ( (*(_DWORD *)(v85 + 1752) & 0x40000000) != 0 )
                  {
                    v877 = *(_QWORD **)(v85 + 1920);
                    v878 = 48;
                    v879 = 6LL;
                    do
                    {
                      v878 -= 8;
                      *v877 = *(_QWORD *)v870;
                      v870 += 8;
                      ++v877;
                      --v879;
                    }
                    while ( v879 );
                    for ( ; v878; --v878 )
                    {
                      v880 = *v870++;
                      *(_BYTE *)v877 = v880;
                      v877 = (_QWORD *)((char *)v877 + 1);
                    }
                    v870 = *(char **)(v85 + 1920);
                  }
                  *((_QWORD *)v870 + 3) = v876;
                  v881 = *(_QWORD *)(v85 + 1240);
                  *(_QWORD *)v881 = v870;
                  *(_DWORD *)(v881 + 16) = 48;
                  v882 = *(_QWORD *)(v85 + 1240);
                  *(_QWORD *)(v882 + 8) = v876;
                  *(_DWORD *)(v882 + 20) = 4096;
                  if ( !*(_DWORD *)(v85 + 1616) )
                  {
                    *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v85 + 1632) = v870 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v85 + 1640) = *(int *)v870;
                    *(_QWORD *)(v85 + 1648) = v873;
                    *(_DWORD *)(v85 + 1616) = 1;
                  }
LABEL_1257:
                  v872 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
                  ++v871;
                  ++v873;
                }
                while ( v871 < 3 );
                v511 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
              }
            }
            else
            {
              v883 = v99;
              *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x290) = 0LL;
              v511 = 0;
              v884 = KeGetCurrentIrql();
              *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v884;
              __writecr8(0xCuLL);
              v885 = (*(__int64 (__fastcall **)(unsigned int *))(v85 + 744))(v1 + 164);
              if ( v885 )
              {
                do
                {
                  ++v511;
                  if ( !(*(__int64 (__fastcall **)(__int64, unsigned int *))(v85 + 496))(v885, v1 + 454) )
                  {
                    if ( (*(_DWORD *)(v85 + 1752) & 0x40000000) != 0 )
                    {
                      v886 = *(_QWORD **)(v85 + 1920);
                      v887 = 48;
                      v888 = 6LL;
                      do
                      {
                        v887 -= 8;
                        *v886 = *(_QWORD *)v883;
                        v883 += 8;
                        ++v886;
                        --v888;
                      }
                      while ( v888 );
                      for ( ; v887; --v887 )
                      {
                        v889 = *v883++;
                        *(_BYTE *)v886 = v889;
                        v886 = (_QWORD *)((char *)v886 + 1);
                      }
                      v883 = *(char **)(v85 + 1920);
                    }
                    *((_QWORD *)v883 + 3) = v885;
                    v890 = *(_QWORD *)(v85 + 1240);
                    *(_QWORD *)v890 = v883;
                    *(_DWORD *)(v890 + 16) = 48;
                    v891 = *(_QWORD *)(v85 + 1240);
                    *(_QWORD *)(v891 + 8) = v885;
                    *(_DWORD *)(v891 + 20) = 4096;
                    if ( !*(_DWORD *)(v85 + 1616) )
                    {
                      *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v85 + 1632) = v883 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v85 + 1640) = *(int *)v883;
                      *(_QWORD *)(v85 + 1648) = 4LL;
                      *(_DWORD *)(v85 + 1616) = 1;
                    }
                  }
                  v885 = (*(__int64 (__fastcall **)(unsigned int *))(v85 + 744))(v1 + 164);
                }
                while ( v885 );
                v884 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
              }
              __writecr8((unsigned __int8)v884);
            }
          }
          else
          {
            *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x2A0) = 0LL;
            v892 = v99;
            v511 = 0;
            for ( i17 = (*(__int64 (__fastcall **)(unsigned int *))(v85 + 736))(v1 + 168);
                  i17;
                  i17 = (*(__int64 (__fastcall **)(unsigned int *))(v85 + 736))(v1 + 168) )
            {
              ++v511;
              if ( !(*(__int64 (__fastcall **)(__int64, unsigned int *))(v85 + 496))(i17, v1 + 456) )
              {
                if ( (*(_DWORD *)(v85 + 1752) & 0x40000000) != 0 )
                {
                  v894 = *(_QWORD **)(v85 + 1920);
                  v895 = 48;
                  v896 = 6LL;
                  do
                  {
                    v895 -= 8;
                    *v894 = *(_QWORD *)v892;
                    v892 += 8;
                    ++v894;
                    --v896;
                  }
                  while ( v896 );
                  for ( ; v895; --v895 )
                  {
                    v897 = *v892++;
                    *(_BYTE *)v894 = v897;
                    v894 = (_QWORD *)((char *)v894 + 1);
                  }
                  v892 = *(char **)(v85 + 1920);
                }
                *((_QWORD *)v892 + 3) = i17;
                v898 = *(_QWORD *)(v85 + 1240);
                *(_QWORD *)v898 = v892;
                *(_DWORD *)(v898 + 16) = 48;
                v899 = *(_QWORD *)(v85 + 1240);
                *(_QWORD *)(v899 + 8) = i17;
                *(_DWORD *)(v899 + 20) = 4096;
                if ( !*(_DWORD *)(v85 + 1616) )
                {
                  *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1632) = v892 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1640) = *(int *)v892;
                  *(_QWORD *)(v85 + 1648) = 3LL;
                  *(_DWORD *)(v85 + 1616) = 1;
                }
              }
            }
          }
LABEL_1283:
          *(_DWORD *)(v85 + 1504) += v511 << 15;
          ++*(_DWORD *)(v85 + 1500);
          if ( *(_DWORD *)(v85 + 1504) >= *(_DWORD *)(v85 + 1508) )
            goto LABEL_1286;
          v99 = *(char **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
        }
      case 25:
        v461 = *(unsigned int **)(v85 + 1136);
        v462 = *(_QWORD ***)(v85 + 1144);
        *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = 0;
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v461 + 4;
        v463 = (*(__int64 (**)(void))(v85 + 856))();
        CurrentThread = KeGetCurrentThread();
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v463;
        (*(void (__fastcall **)(struct _KTHREAD *))(v85 + 336))(CurrentThread);
        (*(void (__fastcall **)(_QWORD, __int64))(v85 + 216))(*(_QWORD *)(v85 + 1152), 1LL);
        v465 = *v461;
        *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = 0;
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = &v461[6 * v465 + 4];
        if ( *((_BYTE *)v461 + 12) )
        {
          v466 = *v462;
          for ( LODWORD(v465) = 0; v466 != v462; LODWORD(v465) = v465 + 1 )
            v466 = (_QWORD *)*v466;
        }
        v467 = *(unsigned int *)(v85 + 1480);
        v468 = __rdtsc();
        v469 = __ROR8__(v468, 3);
        v470 = (v469 ^ v468) * (unsigned __int128)0x7010008004002001uLL;
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x5F8) = *((_QWORD *)&v470 + 1);
        v471 = (WORD4(v470) ^ (unsigned __int16)(8193 * (v469 ^ v468))) & 0x7FF;
        v472 = __rdtsc();
        v473 = (__ROR8__(v472, 3) ^ v472) * (unsigned __int128)0x7010008004002001uLL;
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x600) = *((_QWORD *)&v473 + 1);
        v474 = (*((_QWORD *)&v473 + 1) ^ (unsigned __int64)v473) % (unsigned int)(v471 + 1);
        v475 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v85 + 224))(
                 512LL,
                 (unsigned int)(v471 + 8 * v465),
                 v467);
        v478 = 0LL;
        v479 = v475;
        if ( v475 )
        {
          v480 = v474;
          v481 = (unsigned __int64 *)v475;
          if ( (unsigned int)v474 >= 8 )
          {
            v482 = (unsigned __int64)(unsigned int)v474 >> 3;
            do
            {
              v480 -= 8;
              v483 = __rdtsc();
              v484 = (__ROR8__(v483, 3) ^ v483) * (unsigned __int128)0x7010008004002001uLL;
              *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x608) = *((_QWORD *)&v484 + 1);
              v476 = v484 ^ *((_QWORD *)&v484 + 1);
              *v481++ = v476;
              --v482;
            }
            while ( v482 );
            v85 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
          }
          if ( v480 )
          {
            v485 = __rdtsc();
            v486 = __ROR8__(v485, 3) ^ v485;
            *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x610) = (v486
                                                                                    * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v476 = (0x7010008004002001LL * v486) ^ ((v486 * (unsigned __int128)0x7010008004002001uLL) >> 64);
            do
            {
              *(_BYTE *)v481 = v476;
              v481 = (unsigned __int64 *)((char *)v481 + 1);
              v476 >>= 8;
              --v480;
            }
            while ( v480 );
          }
          v487 = v471 - v474;
          v477 = (unsigned __int64 *)((unsigned int)v474 + v479 + (unsigned int)(8 * v465));
          if ( v487 >= 8 )
          {
            v488 = (unsigned __int64)v487 >> 3;
            do
            {
              v487 -= 8;
              v489 = __rdtsc();
              v490 = (__ROR8__(v489, 3) ^ v489) * (unsigned __int128)0x7010008004002001uLL;
              *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x618) = *((_QWORD *)&v490 + 1);
              v476 = v490 ^ *((_QWORD *)&v490 + 1);
              *v477++ = v476;
              --v488;
            }
            while ( v488 );
          }
          v478 = 0LL;
          if ( v487 )
          {
            v491 = __rdtsc();
            v492 = (__ROR8__(v491, 3) ^ v491) * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x620) = *((_QWORD *)&v492 + 1);
            v476 = v492 ^ *((_QWORD *)&v492 + 1);
            do
            {
              *(_BYTE *)v477 = v476;
              v477 = (unsigned __int64 *)((char *)v477 + 1);
              v476 >>= 8;
              --v487;
            }
            while ( v487 );
          }
          v493 = v479 + (unsigned int)v474;
          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x218) = v479;
          if ( v493 )
          {
            v494 = *v462;
            if ( *v462 != v462 )
            {
              v495 = 0;
              do
              {
                v496 = v494[6];
                if ( !(*(unsigned int (__fastcall **)(__int64, unsigned __int64, unsigned __int64 *, __int64))(v85 + 648))(
                        v496,
                        v476,
                        v477,
                        v478)
                  && v495 < (unsigned int)v465 )
                {
                  v497 = v495++;
                  *(_QWORD *)(v493 + 8 * v497) = v496;
                }
                v494 = (_QWORD *)*v494;
                ++*(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
              }
              while ( v494 != v462 );
              *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v495;
            }
            v498 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
            (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64 *, __int64))(v85 + 888))(v493, v498, v477, v478);
            v499 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
            v500 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
            v501 = *(int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
            do
            {
              v502 = *(_QWORD *)(v499 + 8);
              if ( !(*(unsigned int (__fastcall **)(__int64))(v85 + 648))(v502)
                && !(unsigned int)__120(v493, v498, v502)
                && !*(_DWORD *)(v85 + 1616) )
              {
                *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v85 + 1632) = (char *)v501 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v85 + 1640) = *v501;
                *(_QWORD *)(v85 + 1648) = v502;
                *(_DWORD *)(v85 + 1616) = 1;
              }
              v499 += 24LL;
            }
            while ( v499 < v500 );
            goto LABEL_747;
          }
        }
        else
        {
          ++*(_DWORD *)(v85 + 1880);
        }
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x218) = 0LL;
LABEL_747:
        (*(void (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64 *, __int64))(v85 + 256))(
          *(_QWORD *)(v85 + 1152),
          v476,
          v477,
          v478);
        (*(void (**)(void))(v85 + 344))();
        (*(void (__fastcall **)(_QWORD))(v85 + 864))(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8));
        if ( *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x218) )
        {
          *(_DWORD *)(v85 + 1504) += *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) << 9;
          (*(void (__fastcall **)(_QWORD))(v85 + 232))(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL)
                                                                 + 0x218));
        }
        goto LABEL_185;
      case 26:
        if ( (*(_DWORD *)(v85 + 1512) & 1) != 0 )
          goto LABEL_185;
        v452 = *(_QWORD *)(v85 + 1264);
        v453 = *(_QWORD **)(v85 + 1272);
        v442 = 0;
        v454 = *(_QWORD *)(v85 + 1168);
        *v1 = 0;
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v452;
        (*(void (**)(void))(v85 + 352))();
        (*(void (__fastcall **)(__int64, _QWORD))(v85 + 272))(v454, 0LL);
        v455 = *(_QWORD ***)(v85 + 1128);
        v456 = *v455;
        if ( *v455 != v455 )
        {
          do
          {
            *((_BYTE *)v456 - 306) = 1;
            ++v442;
            v456 = (_QWORD *)*v456;
          }
          while ( v456 != v455 );
          *v1 = v442;
        }
        (*(void (__fastcall **)(__int64, _QWORD))(v85 + 288))(v452, 0LL);
        v457 = *(_QWORD ***)(v85 + 1256);
        v458 = *v457;
        if ( *v457 != v457 )
        {
          v459 = *(int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
          do
          {
            if ( v458 - 3 != v453 )
            {
              v460 = *(v458 - 1);
              if ( !*(_BYTE *)(v460 + 446) && (*(_DWORD *)(v460 + 772) & 0x4000000) != 0 && !*(_DWORD *)(v85 + 1616) )
              {
                *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v85 + 1632) = (char *)v459 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v85 + 1640) = *v459;
                *(_QWORD *)(v85 + 1648) = v460;
                *(_DWORD *)(v85 + 1616) = 1;
              }
              *(_BYTE *)(v460 + 446) = 0;
            }
            v458 = (_QWORD *)*v458;
          }
          while ( v458 != v457 );
          v442 = *v1;
          v452 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
        }
        v451 = v452;
LABEL_698:
        (*(void (__fastcall **)(__int64, _QWORD))(v85 + 296))(v451, 0LL);
        (*(void (__fastcall **)(_QWORD, _QWORD))(v85 + 280))(*(_QWORD *)(v85 + 1168), 0LL);
        (*(void (**)(void))(v85 + 360))();
        *(_DWORD *)(v85 + 1504) += v442 << 8;
        goto LABEL_185;
      case 27:
        if ( (*(_DWORD *)(v85 + 1512) & 1) == 0 )
          goto LABEL_185;
        v440 = *(_QWORD *)(v85 + 1264);
        v441 = *(_QWORD **)(v85 + 1272);
        v442 = 0;
        v443 = *(_QWORD *)(v85 + 1168);
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v440;
        (*(void (**)(void))(v85 + 352))();
        (*(void (__fastcall **)(__int64, _QWORD))(v85 + 272))(v443, 0LL);
        (*(void (__fastcall **)(__int64, _QWORD))(v85 + 288))(v440, 0LL);
        v444 = *(_QWORD ***)(v85 + 1256);
        for ( i18 = *v444; i18 != v444; i18 = (_QWORD *)*i18 )
        {
          if ( i18 - 3 != v441 )
            *(_BYTE *)(*(i18 - 1) + 446LL) = 1;
        }
        v446 = *(_QWORD ***)(v85 + 1128);
        v447 = *v446;
        if ( *v446 != v446 )
        {
          v448 = *(int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
          do
          {
            v449 = v447 - 94;
            if ( !*((_BYTE *)v447 - 306) )
            {
              v450 = (_QWORD *)v449[131];
              if ( v450 )
              {
                if ( v450 != v441 && !*(_DWORD *)(v85 + 1616) )
                {
                  *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1632) = (char *)v448 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1640) = *v448;
                  *(_QWORD *)(v85 + 1648) = v449;
                  *(_DWORD *)(v85 + 1616) = 1;
                }
              }
            }
            *((_BYTE *)v449 + 446) = 0;
            ++v442;
            v447 = (_QWORD *)*v447;
          }
          while ( v447 != v446 );
          v440 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
        }
        v451 = v440;
        goto LABEL_698;
      case 28:
        v375 = *((unsigned int *)v99 + 4);
        if ( (_DWORD)v375 )
        {
          v417 = (_QWORD *)*((_QWORD *)v99 + 1);
          *(_DWORD *)(v85 + 1504) += v375;
          v418 = (const char *)v417;
          v419 = *(_DWORD *)(v85 + 1484);
          v420 = *(_QWORD *)(v85 + 1488);
          if ( v417 < (_QWORD *)((char *)v417 + v375) )
          {
            do
            {
              _mm_prefetch(v418, 0);
              v418 += 64;
            }
            while ( v418 < (const char *)v417 + v375 );
          }
          if ( (unsigned int)v375 >= 8 )
          {
            v421 = v375 >> 3;
            do
            {
              v420 = __ROL8__(*v417++ ^ v420, v419);
              LODWORD(v375) = v375 - 8;
              --v421;
            }
            while ( v421 );
          }
          for ( ; (_DWORD)v375; LODWORD(v375) = v375 - 1 )
          {
            v422 = *(unsigned __int8 *)v417;
            v417 = (_QWORD *)((char *)v417 + 1);
            v420 = __ROL8__(v422 ^ v420, v419);
          }
          for ( i19 = v420; ; LODWORD(v420) = i19 ^ v420 )
          {
            i19 >>= 31;
            if ( !i19 )
              break;
          }
          v424 = *((unsigned int *)v99 + 5);
          v425 = v420 & 0x7FFFFFFF;
          if ( v425 != (_DWORD)v424 )
          {
            if ( !*(_DWORD *)(v85 + 1616) )
              *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v424 ^ v425;
            v426 = *((_QWORD *)v99 + 1);
            if ( !*(_DWORD *)(v85 + 1616) )
            {
              *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1640) = *(int *)v99;
              *(_QWORD *)(v85 + 1648) = v426;
              *(_DWORD *)(v85 + 1616) = 1;
            }
          }
          v427 = 0;
          v428 = *((_QWORD *)v99 + 1) - 112LL;
          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x118) = v428;
          v429 = *(unsigned int **)(v428 + 80);
          if ( v429 )
            v427 = *v429;
          *(_DWORD *)(v85 + 1504) += v427;
          v430 = v429;
          v431 = *(_DWORD *)(v85 + 1484);
          v432 = (const char *)v429;
          v433 = *(_QWORD *)(v85 + 1488);
          v434 = (unsigned int *)((char *)v429 + v427);
          if ( v429 < v434 )
          {
            do
            {
              _mm_prefetch(v432, 0);
              v432 += 64;
            }
            while ( v432 < (const char *)v434 );
          }
          if ( v427 >= 8 )
          {
            v435 = (unsigned __int64)v427 >> 3;
            do
            {
              v433 = __ROL8__(*(_QWORD *)v430 ^ v433, v431);
              v430 += 2;
              v427 -= 8;
              --v435;
            }
            while ( v435 );
          }
          for ( ; v427; --v427 )
          {
            v436 = *(unsigned __int8 *)v430;
            v430 = (unsigned int *)((char *)v430 + 1);
            v433 = __ROL8__(v436 ^ v433, v431);
          }
          for ( i20 = v433; ; LODWORD(v433) = i20 ^ v433 )
          {
            i20 >>= 31;
            if ( !i20 )
              break;
          }
          v438 = *((unsigned int *)v99 + 11);
          v439 = v433 & 0x7FFFFFFF;
          if ( v439 == (_DWORD)v438 )
            goto LABEL_185;
          if ( *(_DWORD *)(v85 + 1616) )
            goto LABEL_185;
          *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v438 ^ v439;
          if ( *(_DWORD *)(v85 + 1616) )
            goto LABEL_185;
          *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v85 + 1640) = *(int *)v99;
          *(_QWORD *)(v85 + 1648) = v429;
          goto LABEL_233;
        }
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x380) = v99 + 48;
        v376 = *((_WORD *)v99 + 20);
        *(_WORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x378) = v376;
        *(_WORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x37A) = v376;
        v2132 = v1 + 70;
        v377 = *(_QWORD *)(v85 + 1120);
        LOBYTE(v2131) = 0;
        if ( (*(int (__fastcall **)(unsigned int *, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, unsigned int *))(v85 + 464))(
               v1 + 222,
               0LL,
               0LL,
               0LL,
               v377,
               v2131,
               0LL,
               v1 + 70) < 0 )
          goto LABEL_185;
        if ( (*(_DWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x118) + 16LL) & 0x10) == 0 )
        {
          v141 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x118);
          goto LABEL_216;
        }
        if ( (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(v85 + 488))(
               *(_QWORD *)(v85 + 464),
               v1 + 130,
               v1 + 196)
          && (v378 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 480))(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL)
                                                                               + 0x208))) != 0 )
        {
          v379 = *(_DWORD *)(v378 + 80);
          *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x120) = v379;
        }
        else
        {
          v379 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x120);
        }
        if ( (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(v85 + 488))(
               *((_QWORD *)v99 + 3),
               v1 + 132,
               v1 + 197)
          && (v380 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 480))(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL)
                                                                               + 0x210))) != 0 )
        {
          v381 = *(_DWORD *)(v380 + 80);
          *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xAC) = v381;
        }
        else
        {
          v381 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xAC);
        }
        if ( (*(_DWORD *)(v85 + 1752) & 0x40000000) == 0 )
        {
          *((_QWORD *)v99 + 1) = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x118) + 112LL;
          *((_DWORD *)v99 + 4) = 224;
        }
        v382 = 0;
        v383 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x208);
        v384 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x210);
        v385 = v379;
        while ( 1 )
        {
          v386 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x118) + 8LL * v382 + 112);
          if ( (!v379 || v386 < v383 || v386 > v379 + v383 - 1) && (!v381 || v386 < v384 || v386 > v381 + v384 - 1) )
            break;
          if ( ++v382 >= 0x1Cu )
          {
            if ( (*(_DWORD *)(v85 + 1752) & 0x40000000) != 0 )
            {
              (*(void (**)(void))(v85 + 456))();
              goto LABEL_185;
            }
            v387 = (_QWORD *)*((_QWORD *)v99 + 1);
            v388 = *((unsigned int *)v99 + 4);
            v389 = (const char *)v387;
            *(_DWORD *)(v85 + 1504) += v388;
            v390 = *(_DWORD *)(v85 + 1484);
            v391 = *(_QWORD *)(v85 + 1488);
            if ( v387 < (_QWORD *)((char *)v387 + v388) )
            {
              do
              {
                _mm_prefetch(v389, 0);
                v389 += 64;
              }
              while ( v389 < (const char *)v387 + v388 );
            }
            if ( (unsigned int)v388 >= 8 )
            {
              v392 = v388 >> 3;
              do
              {
                v391 = __ROL8__(*v387++ ^ v391, v390);
                LODWORD(v388) = v388 - 8;
                --v392;
              }
              while ( v392 );
            }
            for ( ; (_DWORD)v388; LODWORD(v388) = v388 - 1 )
            {
              v393 = *(unsigned __int8 *)v387;
              v387 = (_QWORD *)((char *)v387 + 1);
              v391 = __ROL8__(v393 ^ v391, v390);
            }
            for ( i21 = v391; ; LODWORD(v391) = i21 ^ v391 )
            {
              i21 >>= 31;
              if ( !i21 )
                break;
            }
            v395 = 0;
            *((_DWORD *)v99 + 5) = v391 & 0x7FFFFFFF;
            v396 = *(const char **)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x118) + 80LL);
            if ( !v396 || (v395 = *(_DWORD *)v396, v397 = 0, (v398 = (unsigned int)(*(_DWORD *)v396 - 8) >> 3) == 0) )
            {
LABEL_629:
              *(_DWORD *)(v85 + 1504) += v395;
              v402 = v396;
              v403 = *(_DWORD *)(v85 + 1484);
              v404 = *(_QWORD *)(v85 + 1488);
              v405 = &v396[v395];
              if ( v396 < v405 )
              {
                do
                {
                  _mm_prefetch(v402, 0);
                  v402 += 64;
                }
                while ( v402 < v405 );
              }
              if ( v395 >= 8 )
              {
                v406 = (unsigned __int64)v395 >> 3;
                do
                {
                  v404 = __ROL8__(*(_QWORD *)v396 ^ v404, v403);
                  v396 += 8;
                  v395 -= 8;
                  --v406;
                }
                while ( v406 );
              }
              for ( ; v395; --v395 )
              {
                v407 = *(unsigned __int8 *)v396++;
                v404 = __ROL8__(v407 ^ v404, v403);
              }
              for ( i22 = v404; ; LODWORD(v404) = i22 ^ v404 )
              {
                i22 >>= 31;
                if ( !i22 )
                  break;
              }
              *((_DWORD *)v99 + 11) = v404 & 0x7FFFFFFF;
              goto LABEL_185;
            }
            v399 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x208);
            v400 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x210);
            while ( 1 )
            {
              v401 = *(_QWORD *)&v396[8 * v397 + 8];
              if ( v401
                && (!v385 || v401 < v399 || v401 > v385 + v399 - 1)
                && (!v381 || v401 < v400 || v401 > v381 + v400 - 1) )
              {
                break;
              }
              if ( ++v397 >= v398 )
                goto LABEL_629;
            }
            *((_QWORD *)v99 + 4) = v401;
            v409 = *(_QWORD *)(v85 + 1240);
            *(_QWORD *)v409 = v99;
            *(_DWORD *)(v409 + 16) = 48;
            if ( *(_DWORD *)(v85 + 1616) )
              goto LABEL_185;
            *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v85 + 1640) = *(int *)v99;
            *(_QWORD *)(v85 + 1648) = v396;
LABEL_233:
            *(_DWORD *)(v85 + 1616) = 1;
            goto LABEL_185;
          }
        }
        if ( (*(_DWORD *)(v85 + 1752) & 0x40000000) != 0 )
        {
          v410 = *(_QWORD **)(v85 + 1920);
          v411 = 48;
          v412 = 6LL;
          do
          {
            v411 -= 8;
            *v410 = *(_QWORD *)v99;
            v99 += 8;
            ++v410;
            --v412;
          }
          while ( v412 );
          for ( ; v411; --v411 )
          {
            v413 = *v99++;
            *(_BYTE *)v410 = v413;
            v410 = (_QWORD *)((char *)v410 + 1);
          }
          v99 = *(char **)(v85 + 1920);
        }
        *((_QWORD *)v99 + 4) = v386;
        v414 = *(_QWORD *)(v85 + 1240);
        *(_QWORD *)v414 = v99;
        *(_DWORD *)(v414 + 16) = 48;
        v415 = *((_QWORD *)v99 + 1);
        v416 = *(_DWORD *)(v85 + 1616) == 0;
LABEL_649:
        if ( !v416 )
          goto LABEL_185;
        *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v85 + 1640) = *(int *)v99;
        *(_QWORD *)(v85 + 1648) = v415;
        goto LABEL_233;
      case 29:
        v350 = (_QWORD *)*((_QWORD *)v99 + 1);
        v351 = *((unsigned int *)v99 + 4);
        v352 = (const char *)v350;
        *(_DWORD *)(v85 + 1504) += v351;
        v353 = *(_DWORD *)(v85 + 1484);
        v354 = *(_QWORD *)(v85 + 1488);
        if ( v350 < (_QWORD *)((char *)v350 + v351) )
        {
          do
          {
            _mm_prefetch(v352, 0);
            v352 += 64;
          }
          while ( v352 < (const char *)v350 + v351 );
        }
        if ( (unsigned int)v351 >= 8 )
        {
          v355 = v351 >> 3;
          do
          {
            v354 = __ROL8__(*v350++ ^ v354, v353);
            v351 = (unsigned int)(v351 - 8);
            --v355;
          }
          while ( v355 );
        }
        if ( (_DWORD)v351 )
        {
          do
          {
            v356 = *(unsigned __int8 *)v350;
            v350 = (_QWORD *)((char *)v350 + 1);
            v354 = __ROL8__(v356 ^ v354, v353);
            v124 = (_DWORD)v351 == 1;
            v351 = (unsigned int)(v351 - 1);
          }
          while ( !v124 );
        }
        for ( i23 = v354; ; LODWORD(v354) = i23 ^ v354 )
        {
          i23 >>= 31;
          if ( !i23 )
            break;
        }
        v358 = *((unsigned int *)v99 + 5);
        v359 = v354 & 0x7FFFFFFF;
        if ( v359 != (_DWORD)v358 )
        {
          if ( !*(_DWORD *)(v85 + 1616) )
            *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v358 ^ v359;
          v360 = *((_QWORD *)v99 + 1);
          if ( !*(_DWORD *)(v85 + 1616) )
          {
            *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v85 + 1640) = *(int *)v99;
            *(_QWORD *)(v85 + 1648) = v360;
            *(_DWORD *)(v85 + 1616) = 1;
          }
        }
        v361 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
        v362 = (__int64 **)*((_QWORD *)v99 + 1);
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v362;
        v363 = *(_DWORD *)(v361 + 16) >> 4;
        if ( v363 )
        {
          v364 = v363;
          v365 = (char *)v361;
          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v363;
          do
          {
            v366 = v365;
            v367 = **v362;
            *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x2B0) = 0LL;
            v368 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int64))(v85 + 752))(
                     v367,
                     v1 + 172,
                     v351);
            if ( v368 )
            {
              do
              {
                if ( !(*(__int64 (__fastcall **)(__int64, unsigned int *))(v85 + 496))(v368, v1 + 380) )
                {
                  if ( (*(_DWORD *)(v85 + 1752) & 0x40000000) != 0 )
                  {
                    v369 = *(_QWORD **)(v85 + 1920);
                    v370 = 48;
                    v371 = 6LL;
                    do
                    {
                      v370 -= 8;
                      *v369 = *(_QWORD *)v366;
                      v366 += 8;
                      ++v369;
                      --v371;
                    }
                    while ( v371 );
                    for ( ; v370; --v370 )
                    {
                      v372 = *v366++;
                      *(_BYTE *)v369 = v372;
                      v369 = (_QWORD *)((char *)v369 + 1);
                    }
                    v366 = *(char **)(v85 + 1920);
                  }
                  *((_QWORD *)v366 + 3) = v368;
                  *((_QWORD *)v366 + 4) = v367;
                  v373 = *(_QWORD *)(v85 + 1240);
                  *(_QWORD *)v373 = v366;
                  *(_DWORD *)(v373 + 16) = 48;
                  v374 = *(_QWORD *)(v85 + 1240);
                  *(_QWORD *)(v374 + 8) = v368;
                  *(_DWORD *)(v374 + 20) = 4096;
                  if ( !*(_DWORD *)(v85 + 1616) )
                  {
                    *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v85 + 1632) = v366 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v85 + 1640) = *(int *)v366;
                    *(_QWORD *)(v85 + 1648) = 6LL;
                    *(_DWORD *)(v85 + 1616) = 1;
                  }
                }
                v368 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(v85 + 752))(v367, v1 + 172);
              }
              while ( v368 );
              v362 = *(__int64 ***)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
              v364 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
              v365 = *(char **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
            }
            v362 += 2;
            --v364;
            *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v362;
            *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v364;
          }
          while ( v364 );
        }
        goto LABEL_185;
      case 30:
        if ( (v99[42] & 1) != 0 )
        {
          if ( *(_QWORD *)(v85 + 1744) )
          {
            v306 = *(_DWORD *)(v85 + 1756);
            if ( (v306 & 4) == 0 )
            {
              if ( !*(_DWORD *)(v85 + 1500) )
              {
                *(_DWORD *)(v85 + 1756) ^= (*(_DWORD *)(v85 + 1756) ^ (4 * v306)) & 0x10;
                goto LABEL_504;
              }
              if ( ((v306 >> 4) & 1) == 0 )
                goto LABEL_504;
            }
          }
          *(_DWORD *)(v85 + 1500) = 0;
          goto LABEL_185;
        }
LABEL_504:
        v307 = *((_QWORD *)v99 + 1);
        v308 = *((unsigned int *)v99 + 9);
        v309 = *(unsigned int *)(v85 + 1500);
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v307;
        v310 = v307 + 12 * v309;
        v311 = (_DWORD *)(v310 + 12);
        v312 = v308 / 0xC;
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = v308 / 0xC;
        v313 = v308 / 0xC - 1;
        *v1 = v313;
        v314 = v307 + 12LL * (unsigned int)(v308 / 0xC);
        v315 = *(int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v314;
        v316 = &v99[v309 + 48];
        v317 = (unsigned __int64)&v99[((v313 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
        v318 = *((unsigned __int16 *)v315 + 20);
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v317;
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) = v317 + 24 * v318;
        if ( (unsigned int)v309 < v313 )
        {
          v319 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
          v320 = v315;
          v321 = *(_DWORD **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
          do
          {
            if ( *v316 >= 0 )
            {
              v322 = (_QWORD *)(*((_QWORD *)v320 + 3) + *(unsigned int *)(v310 + 4));
              v323 = *v311 - *(_DWORD *)(v310 + 4);
              *(_DWORD *)(v85 + 1504) += v323;
              v324 = v322;
              v325 = *(_DWORD *)(v85 + 1484);
              v326 = (const char *)v322;
              v327 = *(_QWORD *)(v85 + 1488);
              v328 = (unsigned __int64)v322 + v323;
              if ( (unsigned __int64)v322 < v328 )
              {
                do
                {
                  _mm_prefetch(v326, 0);
                  v326 += 64;
                }
                while ( (unsigned __int64)v326 < v328 );
              }
              if ( v323 >= 8 )
              {
                v329 = (unsigned __int64)v323 >> 3;
                do
                {
                  v327 = __ROL8__(*v324++ ^ v327, v325);
                  v323 -= 8;
                  --v329;
                }
                while ( v329 );
                v319 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
              }
              if ( v323 )
              {
                do
                {
                  v330 = *(unsigned __int8 *)v324;
                  v324 = (_QWORD *)((char *)v324 + 1);
                  v327 = __ROL8__(v330 ^ v327, v325);
                  --v323;
                }
                while ( v323 );
                v321 = *(_DWORD **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
              }
              for ( i24 = v327 >> 7; i24; i24 >>= 7 )
                LOBYTE(v327) = i24 ^ v327;
              v332 = v327 & 0x7F;
              if ( (_DWORD)v332 != (*v316 & 0x7F) && !*(_DWORD *)(v85 + 1616) )
              {
                *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = *v316 & 0x7F ^ (unsigned __int64)v332;
                if ( !*(_DWORD *)(v85 + 1616) )
                {
                  *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1632) = (char *)v320 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1640) = *v320;
                  *(_QWORD *)(v85 + 1648) = v322;
                  *(_DWORD *)(v85 + 1616) = 1;
                }
              }
              *(_DWORD *)(v85 + 1504) += 64;
            }
            ++v316;
            v310 += 12LL;
            v311 += 3;
          }
          while ( (unsigned __int64)v311 < v319 && *(_DWORD *)(v85 + 1504) < *v321 );
          v317 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
          v312 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
          *(_DWORD *)(v85 + 1500) = ((int)v310 - *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10))
                                  / 12;
          v313 = *v1;
        }
        v333 = *(_DWORD *)(v85 + 1500);
        if ( v333 < v313 || *(_DWORD *)(v85 + 1504) >= *(_DWORD *)(v85 + 1508) )
          goto LABEL_185;
        v334 = v317 + 24LL * (v333 - (unsigned int)v312 + 1);
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v334;
        while ( 1 )
        {
          v335 = *(int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
          v336 = (_DWORD *)(v334 + 8);
          v337 = 2LL;
          do
          {
            if ( (*v336 & 0x80000000) == 0 )
            {
              v338 = (_QWORD *)(*((_QWORD *)v335 + 3) + (unsigned int)*(v336 - 2));
              v339 = *(v336 - 1) - *(v336 - 2);
              *(_DWORD *)(v85 + 1504) += v339;
              v340 = v338;
              v341 = *(_DWORD *)(v85 + 1484);
              v342 = (const char *)v338;
              v343 = *(_QWORD *)(v85 + 1488);
              v344 = (unsigned __int64)v338 + v339;
              if ( (unsigned __int64)v338 < v344 )
              {
                do
                {
                  _mm_prefetch(v342, 0);
                  v342 += 64;
                }
                while ( (unsigned __int64)v342 < v344 );
              }
              if ( v339 >= 8 )
              {
                v345 = (unsigned __int64)v339 >> 3;
                do
                {
                  v343 = __ROL8__(*v340++ ^ v343, v341);
                  v339 -= 8;
                  --v345;
                }
                while ( v345 );
                v85 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
              }
              for ( ; v339; --v339 )
              {
                v346 = *(unsigned __int8 *)v340;
                v340 = (_QWORD *)((char *)v340 + 1);
                v343 = __ROL8__(v346 ^ v343, v341);
              }
              for ( i25 = v343; ; LODWORD(v343) = i25 ^ v343 )
              {
                i25 >>= 31;
                if ( !i25 )
                  break;
              }
              v348 = v343 & 0x7FFFFFFF;
              if ( v348 != (*v336 & 0x7FFFFFFF) && !*(_DWORD *)(v85 + 1616) )
              {
                *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = *v336 & 0x7FFFFFFF ^ (unsigned __int64)v348;
                if ( !*(_DWORD *)(v85 + 1616) )
                {
                  *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1632) = (char *)v335 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1640) = *v335;
                  *(_QWORD *)(v85 + 1648) = v338;
                  *(_DWORD *)(v85 + 1616) = 1;
                }
              }
            }
            v336 += 3;
            --v337;
          }
          while ( v337 );
          v349 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
          ++*(_DWORD *)(v85 + 1500);
          v334 = v349 + 24;
          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v334;
          if ( v334 == *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) )
            break;
          if ( *(_DWORD *)(v85 + 1504) >= *(_DWORD *)(v85 + 1508) )
            goto LABEL_185;
        }
LABEL_1604:
        *(_DWORD *)(v85 + 1500) = 0;
        goto LABEL_185;
    }
LABEL_1442:
    v973 = v108 - 2;
    if ( v973 )
    {
      v974 = v973 - 1;
      if ( v974 )
      {
        if ( v974 != 20 )
        {
          v147 = 0LL;
          if ( *(_DWORD *)(v85 + 1616) )
            goto LABEL_185;
          *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v85 + 1640) = 257LL;
          goto LABEL_232;
        }
        (*(void (__fastcall **)(unsigned int *, _QWORD))(v85 + 392))(v1 + 422, *((unsigned int *)v99 + 10));
        (*(void (__fastcall **)(unsigned int *, unsigned int *))(v85 + 440))(v1 + 422, v1 + 426);
        v975 = *(_QWORD *)(v85 + 1872);
        if ( v975 )
        {
          v976 = *(_DWORD *)(v975 + 800);
        }
        else
        {
          v977 = __readmsr(0x832u);
          v976 = v977;
        }
        v978 = *(_QWORD *)(v85 + 1872);
        if ( v978 )
        {
          v979 = *(_DWORD *)(v978 + 832);
        }
        else
        {
          v980 = __readmsr(0x834u);
          v979 = v980;
        }
        (*(void (__fastcall **)(unsigned int *))(v85 + 384))(v1 + 426);
        v981 = *((unsigned int *)v99 + 6);
        if ( (v976 & *((_DWORD *)v99 + 7)) != (_DWORD)v981
          || (v976 & 0x10000) == 0 && (_BYTE)v976 != 0xD1 && (unsigned __int8)(v976 + 3) > 1u )
        {
          v982 = v981 | ((unsigned __int64)*((unsigned int *)v99 + 10) << 48) | 0x32000000000LL;
          if ( !*(_DWORD *)(v85 + 1616) )
          {
            *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v976 ^ (unsigned __int64)*((unsigned int *)v99 + 6);
            if ( !*(_DWORD *)(v85 + 1616) )
            {
              *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1632) = v99 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1640) = *(int *)v99;
              *(_QWORD *)(v85 + 1648) = v982;
              *(_DWORD *)(v85 + 1616) = 1;
            }
          }
        }
        v983 = *((unsigned int *)v99 + 8);
        if ( (v979 & *((_DWORD *)v99 + 9)) == (_DWORD)v983
          && ((v979 & 0x10000) != 0 || (_BYTE)v979 == 0xD1 || (unsigned __int8)(v979 + 3) <= 1u) )
        {
          goto LABEL_1468;
        }
        v984 = v983 | ((unsigned __int64)*((unsigned int *)v99 + 10) << 48) | 0x34000000000LL;
        if ( *(_DWORD *)(v85 + 1616) )
          goto LABEL_1468;
        *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v979 ^ (unsigned __int64)*((unsigned int *)v99 + 8);
        if ( *(_DWORD *)(v85 + 1616) )
          goto LABEL_1468;
        *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
        v985 = v99 - 0x4C48B4211BBACBEBLL;
      }
      else
      {
        (*(void (__fastcall **)(unsigned int *, _QWORD))(v85 + 392))(v1 + 430, *((unsigned int *)v99 + 10));
        (*(void (__fastcall **)(unsigned int *, unsigned int *))(v85 + 440))(v1 + 430, v1 + 434);
        KiGetGdtIdt(v1 + 160, v1 + 476);
        v986 = *(_QWORD **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x282);
        v987 = *((unsigned int *)v99 + 4);
        v988 = (const char *)v986;
        *(_DWORD *)(v85 + 1504) += v987;
        v989 = *(unsigned int *)(v85 + 1484);
        v990 = *(_QWORD *)(v85 + 1488);
        if ( v986 < (_QWORD *)((char *)v986 + v987) )
        {
          do
          {
            _mm_prefetch(v988, 0);
            v988 += 64;
          }
          while ( v988 < (const char *)v986 + v987 );
        }
        if ( (unsigned int)v987 >= 8 )
        {
          v991 = v987 >> 3;
          do
          {
            v990 = __ROL8__(*v986++ ^ v990, v989);
            v987 = (unsigned int)(v987 - 8);
            --v991;
          }
          while ( v991 );
        }
        if ( (_DWORD)v987 )
        {
          do
          {
            v992 = *(unsigned __int8 *)v986;
            v986 = (_QWORD *)((char *)v986 + 1);
            v990 = __ROL8__(v992 ^ v990, v989);
            v124 = (_DWORD)v987 == 1;
            v987 = (unsigned int)(v987 - 1);
          }
          while ( !v124 );
        }
        for ( i26 = v990; ; LODWORD(v990) = i26 ^ v990 )
        {
          i26 >>= 31;
          if ( !i26 )
            break;
        }
        v994 = v990 & 0x7FFFFFFF;
        (*(void (__fastcall **)(unsigned int *, unsigned __int64, _QWORD *, __int64))(v85 + 384))(
          v1 + 434,
          v987,
          v986,
          v989);
        if ( v994 == *((_DWORD *)v99 + 5)
          && *(_WORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x280) == *((_WORD *)v99 + 22) )
        {
          goto LABEL_1468;
        }
        if ( (*(_DWORD *)(v85 + 1752) & 0x40000000) != 0 )
        {
          v995 = *(_QWORD **)(v85 + 1920);
          v996 = 48;
          v997 = 6LL;
          do
          {
            v996 -= 8;
            *v995 = *(_QWORD *)v99;
            v99 += 8;
            ++v995;
            --v997;
          }
          while ( v997 );
          for ( ; v996; --v996 )
          {
            v998 = *v99++;
            *(_BYTE *)v995 = v998;
            v995 = (_QWORD *)((char *)v995 + 1);
          }
          v99 = *(char **)(v85 + 1920);
        }
        *((_QWORD *)v99 + 3) = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x282);
        *((_QWORD *)v99 + 4) = v994;
        if ( !*(_DWORD *)(v85 + 1616) )
          *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v994 ^ (unsigned __int64)*((unsigned int *)v99 + 5);
        v984 = *((_QWORD *)v99 + 1);
        if ( *(_DWORD *)(v85 + 1616) )
          goto LABEL_1468;
        *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
        v985 = v99 - 0x4C48B4211BBACBEBLL;
      }
      *(_QWORD *)(v85 + 1632) = v985;
      *(_QWORD *)(v85 + 1640) = *(int *)v99;
      *(_QWORD *)(v85 + 1648) = v984;
      *(_DWORD *)(v85 + 1616) = 1;
LABEL_1468:
      v146 = 0x8000;
LABEL_224:
      *(_DWORD *)(v85 + 1504) += v146;
      goto LABEL_185;
    }
    v999 = *((unsigned int *)v99 + 10);
    *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = 0;
    (*(void (__fastcall **)(unsigned int *, __int64))(v85 + 392))(v1 + 460, v999);
    (*(void (__fastcall **)(unsigned int *, unsigned int *))(v85 + 440))(v1 + 460, v1 + 438);
    KiGetGdtIdt(v1 + 472, v1 + 180);
    v1000 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x2D2);
    v1001 = 0LL;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v1000;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = 0LL;
    v1002 = 0;
    *v1 = 0;
    v1003 = (unsigned __int16 *)(v1000 + 4);
    do
    {
      v1004 = 0LL;
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x130) = *(_QWORD *)(v85 + 1592);
      v1005 = 0LL;
      v1006 = *(_QWORD *)(v85 + 1600);
      v1007 = *(unsigned int *)(v85 + 1588);
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = 0LL;
      v1008 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      v1010 = *v1003;
      v1009 = *(_QWORD *)(v85 + 1328) + v1001;
      *(_WORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = *(v1003 - 2);
      *(_WORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x42) = v1003[1];
      LOWORD(v1010) = ((unsigned __int16)v1010 >> 13) & 3;
      *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x44) = *((_DWORD *)v1003 + 1);
      v1011 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
      *(_WORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v1010;
      if ( v1011 != v1009 )
        goto LABEL_1502;
      if ( !(_WORD)v1010 )
      {
        v1005 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v85 + 1056))(v1002, v1010, 0LL);
        if ( v1005 )
        {
          v820 = *v1 < 0x30;
          v1012 = *(_QWORD *)(v1007 + v1005);
          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1012;
          if ( !v820 )
            goto LABEL_1503;
          v1004 = v1012;
          goto LABEL_1498;
        }
        v1005 = -1LL;
LABEL_1502:
        v1012 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
LABEL_1503:
        __writecr8(v1008);
        if ( v1005
          || (v1016 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x130), v1011 >= v1016)
          && v1011 <= v1006
          && (v1017 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v85 + 504))(
                        *(_QWORD *)(v85 + 1608),
                        v1016,
                        (unsigned int)(*(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) - v1016))) != 0
          && (*(_DWORD *)(v1017 + 36) & 0x2000000) == 0 )
        {
          if ( *(v1003 - 1) == 16 && (*v1003 & 0x1F00) == 0xE00 && (*v1003 & 0x8000u) != 0 )
          {
            v1018 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned __int64, unsigned int *, _QWORD))(v85 + 576))(
                                      v1011,
                                      v1 + 76,
                                      0LL);
            if ( v1018 )
            {
              v1019 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x130);
              if ( v1019 + *v1018 == v1011 && v1019 == *(_QWORD *)(v85 + 1592) )
              {
                if ( !v1005 )
                  goto LABEL_1515;
LABEL_1525:
                if ( !*(_WORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) )
                {
                  if ( v1005 == -1
                    || (v1029 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD))(v85 + 576))(
                                                  v1012,
                                                  v1 + 76,
                                                  0LL)) != 0LL
                    && (v1030 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x130),
                        v1030 + *v1029 == v1012)
                    && v1030 == *(_QWORD *)(v85 + 1592)
                    && (v1031 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v85 + 504))(
                                  *(_QWORD *)(v85 + 1608),
                                  v1030,
                                  (unsigned int)(v1012 - v1030))) != 0
                    && (*(_DWORD *)(v1031 + 36) & 0x2000000) == 0 )
                  {
LABEL_1515:
                    v1015 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                    goto LABEL_1516;
                  }
                }
                goto LABEL_1532;
              }
            }
            if ( v1005 )
              goto LABEL_1525;
          }
        }
LABEL_1532:
        v1004 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
      }
LABEL_1498:
      v1013 = *(_QWORD *)(v85 + 1240);
      *(_QWORD *)v1013 = v1011;
      *(_DWORD *)(v1013 + 16) = 128;
      if ( v1004 )
      {
        v1014 = *(_QWORD *)(v85 + 1240);
        *(_QWORD *)(v1014 + 8) = v1004;
        *(_DWORD *)(v1014 + 20) = 128;
      }
      v1015 = 1;
      *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = 1;
LABEL_1516:
      v1003 += 8;
      v1002 = *v1 + 1;
      v1001 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) + 8LL;
      *v1 = v1002;
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v1001;
    }
    while ( v1002 <= 0xFF );
    v1020 = *(_QWORD **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
    v1021 = 848;
    *(_DWORD *)(v85 + 1504) += 848;
    v1022 = v1020;
    v1023 = *(_DWORD *)(v85 + 1484);
    v1024 = (const char *)v1020;
    v1025 = *(_QWORD *)(v85 + 1488);
    if ( v1020 < v1020 + 106 )
    {
      do
      {
        _mm_prefetch(v1024, 0);
        v1024 += 64;
      }
      while ( v1024 < (const char *)v1020 + 848 );
    }
    v1026 = 106LL;
    do
    {
      v1025 = __ROL8__(*v1022++ ^ v1025, v1023);
      v1021 -= 8;
      --v1026;
    }
    while ( v1026 );
    for ( ; v1021; --v1021 )
    {
      v1027 = *(unsigned __int8 *)v1022;
      v1022 = (_QWORD *)((char *)v1022 + 1);
      v1025 = __ROL8__(v1027 ^ v1025, v1023);
    }
    for ( i27 = v1025; ; LODWORD(v1025) = i27 ^ v1025 )
    {
      i27 >>= 31;
      if ( !i27 )
        break;
    }
    v1032 = v1020 + 450;
    v1033 = v1025 & 0x7FFFFFFF;
    *(_DWORD *)(v85 + 1504) += 16;
    v1034 = *(_DWORD *)(v85 + 1484);
    v1035 = (const char *)(v1020 + 450);
    v1036 = *(_QWORD *)(v85 + 1488);
    if ( v1020 + 450 < v1020 + 452 )
    {
      do
      {
        _mm_prefetch(v1035, 0);
        v1035 += 64;
      }
      while ( v1035 < (const char *)v1020 + 3616 );
    }
    v1037 = 2LL;
    LODWORD(v1038) = 16;
    do
    {
      v1036 = __ROL8__(*v1032++ ^ v1036, v1034);
      v1038 = (unsigned int)(v1038 - 8);
      --v1037;
    }
    while ( v1037 );
    if ( (_DWORD)v1038 )
    {
      do
      {
        v1039 = *(unsigned __int8 *)v1032;
        v1032 = (_QWORD *)((char *)v1032 + 1);
        v1036 = __ROL8__(v1039 ^ v1036, v1034);
        v124 = (_DWORD)v1038 == 1;
        v1038 = (unsigned int)(v1038 - 1);
      }
      while ( !v124 );
    }
    for ( i28 = v1036; ; LODWORD(v1036) = i28 ^ v1036 )
    {
      i28 >>= 31;
      if ( !i28 )
        break;
    }
    v1041 = v1036 & 0x7FFFFFFF;
    (*(void (__fastcall **)(unsigned int *, _QWORD *, __int64))(v85 + 384))(v1 + 438, v1032, v1038);
    v1042 = *(int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
    if ( v1033 != v1042[5]
      || v1041 != *((_QWORD *)v1042 + 3)
      || *(_WORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x2D0) != *((_WORD *)v1042 + 22)
      || v1015 )
    {
      if ( !v1015 )
      {
        v1043 = v1041;
        if ( v1041 == *((_QWORD *)v1042 + 3) )
        {
          v1044 = (unsigned int)v1042[5];
          if ( !*(_DWORD *)(v85 + 1616) )
          {
            v1043 = v1033;
            goto LABEL_1553;
          }
        }
        else
        {
          v1044 = (unsigned int)v1042[6];
          if ( !*(_DWORD *)(v85 + 1616) )
LABEL_1553:
            *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v1044 ^ v1043;
        }
      }
      v1045 = *((_QWORD *)v1042 + 1);
      if ( !*(_DWORD *)(v85 + 1616) )
      {
        *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v85 + 1632) = (char *)v1042 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v85 + 1640) = *v1042;
        *(_QWORD *)(v85 + 1648) = v1045;
        *(_DWORD *)(v85 + 1616) = 1;
      }
    }
    *(_DWORD *)(v85 + 1504) += 0x10000;
LABEL_185:
    v126 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
    if ( *(_DWORD *)(v85 + 1500) )
      --v126;
    v94 = v126 + 1;
    *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x80) = v94;
    if ( *(_DWORD *)(v85 + 1616) )
    {
      v86 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
    }
    else
    {
      v95 = (_DWORD *)(v85 + 1508);
      v127 = *(_DWORD *)(v85 + 1508);
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v85 + 1508;
      if ( *(_DWORD *)(v85 + 1504) < v127 )
        continue;
      v86 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
    }
    break;
  }
LABEL_1667:
  *(_DWORD *)(v85 + 1496) = v94;
  if ( *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) )
    __87(v85, v1 + 300, v1 + 450);
  if ( v86 && ((*(_DWORD *)(v85 + 1752) & 0x8000) != 0 || !*(_DWORD *)(v85 + 1616)) )
  {
    v1114 = *(_QWORD *)(v85 + 1744);
    *(_QWORD *)(v85 + 1744) = 0LL;
    (*(void (__fastcall **)(__int64, unsigned int *))(v85 + 632))(v1114, v1 + 300);
    v1115 = *(_DWORD *)(v85 + 1752);
    if ( (v1115 & 1) != 0 )
    {
      *(_DWORD *)(v85 + 1752) = v1115 & 0xFFFFFFFE;
      v1116 = (*(__int64 (__fastcall **)(__int64))(v85 + 608))(v1114);
      v1114 = v1116;
      if ( v1116 )
        *(_DWORD *)(v85 + 1728) = (*(__int64 (__fastcall **)(__int64))(v85 + 640))(v1116);
      else
        *(_DWORD *)(v85 + 1728) = -1;
    }
    if ( v1114 )
      (*(void (__fastcall **)(__int64))(v85 + 616))(v1114);
  }
  if ( (*(_DWORD *)(v85 + 1752) & 0x800008) == 0x800008 )
  {
    v1117 = *(_DWORD *)(v85 + 1756);
    v1118 = *(unsigned int *)(v85 + 1472);
    v1119 = *(_QWORD *)(v85 + 1904);
    v1120 = *(_DWORD *)(v85 + 1436);
    v1121 = *(_QWORD *)(v85 + 1856);
    *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xAC) = v1118;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v1119;
    v1122 = v1117 & 1;
    if ( v1122 )
      v1121 = *(_QWORD *)(v85 + 1312);
    v1123 = *(void (__fastcall **)(_QWORD, _QWORD, unsigned int *))(v85 + 328);
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = *(_QWORD *)(v85 + 1000);
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = *(_QWORD *)(v85 + 680);
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = *(_QWORD *)(v85 + 800);
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v1123;
    v1124 = __rdtsc();
    v1125 = (__ROR8__(v1124, 3) ^ v1124) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x728) = *((_QWORD *)&v1125 + 1);
    v1126 = -1200000000LL - ((unsigned __int64)v1125 ^ *((_QWORD *)&v1125 + 1)) % 0x5F5E100;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A8) = v1126;
    if ( (*(_DWORD *)(v85 + 1752) & 0x4000000) != 0 )
    {
      v1127 = __rdtsc();
      v1128 = (__ROR8__(v1127, 3) ^ v1127) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x740) = *((_QWORD *)&v1128 + 1);
      if ( ((unsigned __int64)v1128 ^ *((_QWORD *)&v1128 + 1)) % 0xA < 2 )
      {
        v1129 = __rdtsc();
        v1130 = (__ROR8__(v1129, 3) ^ v1129) * (unsigned __int128)0x7010008004002001uLL;
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x748) = *((_QWORD *)&v1130 + 1);
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A8) = (((unsigned __int64)v1130 ^ *((_QWORD *)&v1130 + 1))
                                                                                % 0xA
                                                                                + 1)
                                                                               * v1126;
      }
    }
    v1131 = *(_DWORD *)(v85 + 1752);
    v1132 = 0LL;
    v1133 = 0LL;
    if ( (v1131 & 2) == 0 )
      v1120 = v1118;
    if ( (v1131 & 0x80u) != 0 )
    {
      *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = 1;
      v1134 = __rdtsc();
      v1135 = (__ROR8__(v1134, 3) ^ v1134) * (unsigned __int128)0x7010008004002001uLL;
      v1136 = 243;
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x750) = *((_QWORD *)&v1135 + 1);
      v1132 = v1135 ^ *((_QWORD *)&v1135 + 1);
      v1137 = (_QWORD *)(v85 + 1936);
      v1133 = v85 ^ v1132;
      v1138 = v1132;
      do
      {
        *v1137-- ^= v1138;
        v1138 = __ROR8__(v1138, v1136--);
      }
      while ( v1136 );
      v1139 = (unsigned __int64)(v1118 - 1944) >> 3;
      if ( (_DWORD)v1139 )
      {
        v1140 = (__int64 *)(v85 + 1936 + 8LL * (int)v1139);
        do
        {
          v1141 = *v1140--;
          v1133 = (2 * v1133) ^ __ROR8__(v1141, v1139);
          LODWORD(v1139) = v1139 - 1;
        }
        while ( (_DWORD)v1139 );
        v85 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
        v1119 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
      }
      v1142 = (v1120 - (unsigned int)v1118) >> 3;
      if ( (_DWORD)v1142 )
      {
        v1143 = (_QWORD *)(v85 + v1118 + 8 * v1142 - 8);
        do
        {
          *v1143-- ^= v1138;
          v1138 = __ROR8__(v1138, v1142);
          LODWORD(v1142) = v1142 - 1;
        }
        while ( (_DWORD)v1142 );
      }
      v1123 = *(void (__fastcall **)(_QWORD, _QWORD, unsigned int *))(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL)
                                                                    + 0x40);
    }
    else
    {
      *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = 0;
    }
    if ( v1119 )
    {
      (*(void (__fastcall **)(unsigned __int64, _QWORD, unsigned int *, void (__fastcall *)(_QWORD, _QWORD, unsigned int *), __int64))(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20))(
        v85,
        v1120,
        v1 + 106,
        v1123,
        v1119);
    }
    else if ( v1121 )
    {
      if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int *))(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                            + 8))(
              v1121,
              0LL,
              0LL,
              0LL,
              v1 + 106)
        && v1122 )
      {
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60))(
          v1121,
          0LL,
          0LL);
      }
    }
    else
    {
      v1123(0LL, 0LL, v1 + 106);
    }
    if ( *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) )
    {
      v1144 = (_QWORD *)(v85 + 1936);
      v1145 = v85 ^ v1132;
      v1146 = 243;
      do
      {
        *v1144-- ^= v1132;
        v1132 = __ROR8__(v1132, v1146--);
      }
      while ( v1146 );
      v1147 = *(unsigned int *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xAC);
      v1148 = v1147;
      v1149 = (unsigned __int64)(v1147 - 1944) >> 3;
      if ( (_DWORD)v1149 )
      {
        v1150 = (__int64 *)(v85 + 8 * ((int)v1149 + 242LL));
        do
        {
          v1151 = *v1150--;
          v1145 = (2 * v1145) ^ __ROR8__(v1151, v1149);
          LODWORD(v1149) = v1149 - 1;
        }
        while ( (_DWORD)v1149 );
        v1148 = *(unsigned int *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xAC);
      }
      v1152 = (v1120 - (unsigned int)v1147) >> 3;
      if ( v1152 )
      {
        v1153 = (_QWORD *)(v85 + v1148 + 8 * (v1152 - 1LL));
        do
        {
          *v1153 ^= v1132;
          v1132 = __ROR8__(v1132, v1152);
          --v1153;
          --v1152;
        }
        while ( v1152 );
      }
      if ( v1145 != v1133 )
      {
        v1154 = *(_QWORD *)(v85 + 1240);
        v1155 = *(_DWORD *)(v85 + 1436);
        *(_QWORD *)v1154 = v85;
        *(_DWORD *)(v1154 + 16) = v1155;
        if ( !*(_DWORD *)(v85 + 1616) )
        {
          *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v1133 ^ v1145;
          if ( !*(_DWORD *)(v85 + 1616) )
          {
            *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v85 + 1632) = 0LL;
            *(_QWORD *)(v85 + 1640) = 270LL;
            *(_QWORD *)(v85 + 1648) = v1145;
            *(_DWORD *)(v85 + 1616) = 1;
          }
        }
      }
    }
  }
  if ( ((*(_DWORD *)(v85 + 1704) - 1) & 0xFFFFFFF7) == 0 )
    goto LABEL_2679;
  if ( !*(_DWORD *)(v85 + 1616) )
  {
    if ( **(_QWORD **)(v85 + 1712) == *(_QWORD *)(v85 + 1720) )
    {
      if ( (*(_DWORD *)(v85 + 1512) & 1) != 0 )
      {
        v1771 = *(_DWORD *)(v85 + 1728) == -1 ? 0LL : (*(__int64 (**)(void))(v85 + 600))();
        if ( v1771 || (v1771 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 608))(0LL)) != 0 )
        {
          v1772 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(v85 + 624))(v1771, v1 + 300);
          if ( v1772 >= 0 )
          {
            *(_QWORD *)(v85 + 1744) = v1771;
            v1773 = (*(__int64 (**)(void))(v85 + 664))();
            v1774 = (*(__int64 (__fastcall **)(__int64))(v85 + 696))(v1773);
            if ( v1774 )
            {
              (*(void (__fastcall **)(__int64, __int64))(v85 + 712))(v1773, v1774);
              v1775 = 0;
            }
            else
            {
              v1775 = 1;
            }
            v1772 = 0;
            *(_DWORD *)(v85 + 1756) ^= (*(_DWORD *)(v85 + 1756) ^ (4 * v1775)) & 4;
            *(_DWORD *)(v85 + 1504) += 0x10000;
          }
          else
          {
            (*(void (__fastcall **)(__int64))(v85 + 616))(v1771);
          }
          if ( v1772 >= 0 )
          {
            if ( **(_QWORD **)(v85 + 1712) == *(_QWORD *)(v85 + 1720) )
            {
              if ( *(_DWORD *)(*(_QWORD *)(v85 + 1208) + 48LL) )
              {
                _InterlockedOr(v2129, 0);
                if ( **(_QWORD **)(v85 + 1712) == *(_QWORD *)(v85 + 1720) )
                {
                  if ( !*(_DWORD *)(v85 + 1616) )
                    *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = *(_QWORD *)(v85 + 1720) ^ **(_QWORD **)(v85 + 1712);
                  v1776 = *(_QWORD *)(v85 + 1720);
                  if ( !*(_DWORD *)(v85 + 1616) )
                  {
                    *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v85 + 1632) = 0LL;
                    *(_QWORD *)(v85 + 1640) = 259LL;
                    *(_QWORD *)(v85 + 1648) = v1776;
                    *(_DWORD *)(v85 + 1616) = 1;
                  }
                }
              }
            }
            if ( (*(_DWORD *)(v85 + 1752) & 0x8000) != 0 || !*(_DWORD *)(v85 + 1616) )
            {
              v1777 = *(_QWORD *)(v85 + 1744);
              *(_QWORD *)(v85 + 1744) = 0LL;
              (*(void (__fastcall **)(__int64, unsigned int *))(v85 + 632))(v1777, v1 + 300);
              v1778 = *(_DWORD *)(v85 + 1752);
              if ( (v1778 & 1) != 0 )
              {
                *(_DWORD *)(v85 + 1752) = v1778 & 0xFFFFFFFE;
                v1779 = (*(__int64 (__fastcall **)(__int64))(v85 + 608))(v1777);
                v1777 = v1779;
                if ( v1779 )
                  *(_DWORD *)(v85 + 1728) = (*(__int64 (__fastcall **)(__int64))(v85 + 640))(v1779);
                else
                  *(_DWORD *)(v85 + 1728) = -1;
              }
              if ( v1777 )
                (*(void (__fastcall **)(__int64))(v85 + 616))(v1777);
            }
          }
        }
      }
      goto LABEL_2679;
    }
    v1156 = *(_DWORD *)(v85 + 1728);
    v1157 = (_BYTE *)v85;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v85;
    if ( v1156 == -1 )
      v1158 = 0LL;
    else
      v1158 = (*(__int64 (**)(void))(v85 + 600))();
    if ( !v1158 )
    {
      v1158 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 608))(0LL);
      if ( !v1158 )
        goto LABEL_2679;
    }
    v1159 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(v85 + 624))(v1158, v1 + 300);
    if ( v1159 >= 0 )
    {
      *(_QWORD *)(v85 + 1744) = v1158;
      v1160 = (*(__int64 (**)(void))(v85 + 664))();
      v1161 = (*(__int64 (__fastcall **)(__int64))(v85 + 696))(v1160);
      if ( v1161 )
      {
        (*(void (__fastcall **)(__int64, __int64))(v85 + 712))(v1160, v1161);
        v1162 = 0;
      }
      else
      {
        v1162 = 1;
      }
      v1159 = 0;
      *(_DWORD *)(v85 + 1756) ^= (*(_DWORD *)(v85 + 1756) ^ (4 * v1162)) & 4;
      *(_DWORD *)(v85 + 1504) += 0x10000;
    }
    else
    {
      (*(void (__fastcall **)(__int64))(v85 + 616))(v1158);
    }
    if ( v1159 < 0 )
      goto LABEL_2679;
    if ( (*(unsigned int (__fastcall **)(_QWORD))(v85 + 640))(*(_QWORD *)(v85 + 1744)) )
      goto LABEL_2640;
    v1163 = *(_QWORD *)(v85 + 1712);
    v1164 = *(_QWORD *)(v85 + 1720);
    v1165 = 0LL;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x388) = *(_QWORD *)(v85 + 1216) + 32LL;
    v1166 = (__int64 *)(v1 + 226);
    v1167 = *(_QWORD *)(v85 + 1208);
    v1168 = 2LL;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v1163;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x390) = v1167 + 32;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v1164;
    do
    {
      v1169 = *v1166;
      v1170 = v1163 ^ v1165;
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v1170;
      v1171 = v1170 & 0x3F;
      v1172 = *(const char **)v1169;
      v1173 = *(unsigned int *)(v1169 + 16);
      v1174 = *(const char **)v1169;
      v1175 = *(const char **)v1169;
      v1176 = 4 * *(_DWORD *)(v1169 + 16);
      v1177 = *(_QWORD *)v1169 + v1176;
      if ( *(_QWORD *)v1169 < v1177 )
      {
        do
        {
          _mm_prefetch(v1175, 0);
          v1175 += 64;
        }
        while ( (unsigned __int64)v1175 < v1177 );
      }
      if ( v1176 >= 8 )
      {
        v1178 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
        v1179 = (unsigned __int64)v1176 >> 3;
        do
        {
          v1178 = __ROL8__(*(_QWORD *)v1174 ^ v1178, v1171);
          v1174 += 8;
          v1176 -= 8;
          --v1179;
        }
        while ( v1179 );
        v1164 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v1178;
        v1163 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
        v1170 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
      }
      if ( v1176 )
      {
        do
        {
          v1180 = *(unsigned __int8 *)v1174++;
          v1170 = __ROL8__(v1180 ^ v1170, v1171);
          --v1176;
        }
        while ( v1176 );
        v1163 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
      }
      v1181 = v1170 ^ v1164;
      v1182 = *(_QWORD **)(v1169 + 24);
      v1183 = (const char *)v1182;
      v1184 = v1181 & 0x3F;
      v1185 = v1173;
      if ( v1182 < (_QWORD *)((char *)v1182 + v1173) )
      {
        do
        {
          _mm_prefetch(v1183, 0);
          v1183 += 64;
        }
        while ( v1183 < (const char *)v1182 + v1173 );
      }
      if ( (unsigned int)v1173 >= 8 )
      {
        v1186 = v1173 >> 3;
        do
        {
          v1181 = __ROL8__(*v1182++ ^ v1181, v1184);
          LODWORD(v1173) = v1173 - 8;
          --v1186;
        }
        while ( v1186 );
        v1163 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
      }
      if ( (_DWORD)v1173 )
      {
        do
        {
          v1187 = *(unsigned __int8 *)v1182;
          v1182 = (_QWORD *)((char *)v1182 + 1);
          v1181 = __ROL8__(v1187 ^ v1181, v1184);
          LODWORD(v1173) = v1173 - 1;
        }
        while ( (_DWORD)v1173 );
        v1163 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
      }
      ++v1166;
      v1165 = v1181 ^ v1185 ^ (unsigned __int64)v1172;
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v1165;
      --v1168;
    }
    while ( v1168 );
    v85 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
    v1188 = (*(__int64 (__fastcall **)(const char *, unsigned int *, unsigned int *))(v85 + 488))(
              v1172,
              v1 + 210,
              v1 + 198);
    v1157 = *(_BYTE **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
    if ( !v1188 )
    {
      v1258 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
      goto LABEL_1862;
    }
    v1189 = __rdtsc();
    v1190 = (__ROR8__(v1189, 3) ^ v1189) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x758) = *((_QWORD *)&v1190 + 1);
    v1191 = ((unsigned __int64)v1190 ^ *((_QWORD *)&v1190 + 1)) % 0xB;
    if ( (unsigned int)v1191 > 5 )
    {
      v1195 = v1191 - 6;
      if ( v1195 )
      {
        v1196 = v1195 - 1;
        if ( v1196 )
        {
          v1197 = v1196 - 1;
          if ( v1197 )
          {
            if ( v1197 == 1 )
            {
              *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x268) = -1333354875;
              v1194 = __ROR4__(*(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x268) ^ 9, 33);
            }
            else
            {
              v1198 = __rdtsc();
              v1199 = __ROR8__(v1198, 3);
              v1200 = (v1199 ^ v1198) * (unsigned __int128)0x7010008004002001uLL;
              *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x4E0) = *((_QWORD *)&v1200 + 1);
              v1201 = DWORD2(v1200) ^ (67117057 * (v1199 ^ v1198));
              v1194 = ((((((v1201 % 0x1A + 97) << 8) | ((v1201 >> 5)
                                                      - 26
                                                      * ((unsigned int)((1321528399 * (unsigned __int64)(v1201 >> 5)) >> 32) >> 3)
                                                      + 65)) << 8) | ((v1201 >> 10) % 0x1A + 97)) << 8) | ((v1201 >> 15) % 0x1A + 65);
            }
          }
          else
          {
            *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x264) = 1684422978;
            v1194 = __ROR4__(*(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x264), 8);
          }
        }
        else
        {
          *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x260) = -2100910376;
          v1194 = __ROL4__(*(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x260), 7);
        }
      }
      else
      {
        *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x200) = 1314342514;
        v1194 = __ROR4__(*(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x200) ^ 6, 24);
      }
    }
    else if ( (_DWORD)v1191 == 5 )
    {
      *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x26C) = 680282605;
      v1194 = __ROR4__(*(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x26C), 5);
    }
    else if ( (_DWORD)v1191 )
    {
      v1192 = v1191 - 1;
      if ( v1192 )
      {
        v1193 = v1192 - 1;
        if ( v1193 )
        {
          if ( v1193 == 1 )
          {
            *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F4) = -1474152136;
            v1194 = __ROR4__(*(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F4) ^ 3, 15);
          }
          else
          {
            *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D8) = 1728537748;
            v1194 = __ROL4__(*(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D8), 4);
          }
        }
        else
        {
          *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x204) = -2051698419;
          v1194 = __ROR4__(*(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x204), 2);
        }
      }
      else
      {
        *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1DC) = -1297272415;
        v1194 = __ROL4__(*(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1DC), 1);
      }
    }
    else
    {
      *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E0) = -795291432;
      v1194 = __ROR4__(*(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E0), 6);
    }
    v1202 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v85 + 224))(512LL, 128LL, v1194);
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = v1202;
    v1203 = v1202;
    if ( !v1202 )
      goto LABEL_2640;
    v1204 = 128;
    v1205 = 16LL;
    do
    {
      *v1202 = 0LL;
      v1204 -= 8;
      ++v1202;
      --v1205;
    }
    while ( v1205 );
    for ( ; v1204; --v1204 )
    {
      *(_BYTE *)v1202 = 0;
      v1202 = (__int64 *)((char *)v1202 + 1);
    }
    v1206 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x348);
    v1207 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x110) = v1206;
    *v1203 = v1206;
    v1208 = v1203;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v1203;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1207;
    *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = 0;
    while ( 1 )
    {
      v1209 = *v1208;
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x110) = *v1208;
      if ( !v1209 )
        goto LABEL_1848;
      *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v1207 & 0x3F;
      v1210 = (*(__int64 (**)(void))(v85 + 480))();
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) = v1210;
      if ( !v1210 )
        break;
      v1211 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x110);
      v1212 = (char *)(v1210 + *(unsigned __int16 *)(v1210 + 20) + 24LL);
      v1213 = &v1212[40 * *(unsigned __int16 *)(v1210 + 6)];
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v1213;
      do
      {
        v1214 = 0;
        if ( (*((_DWORD *)v1212 + 9) & 0x2000000) != 0
          || (v1215 = *(_DWORD *)v1212, *(_DWORD *)v1212 == 1414090313) && *((_DWORD *)v1212 + 1) == 1195525195
          || v1215 == 1162297680
          && ((v1216 = *((_WORD *)v1212 + 2), v1216 == 30583) || v1216 == 29303 || v1216 == 30839)
          || v1215 == 1095914053 && *((_WORD *)v1212 + 2) == 16724 )
        {
LABEL_1815:
          v1214 = 1;
        }
        else
        {
          v1217 = *(char **)(v85 + 1672);
          v1218 = 7;
          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x3E0) = *(_QWORD *)(v85 + 1680);
          v1219 = v1212 - v1217;
          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x3E8) = *(_QWORD *)(v85 + 1688);
          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x3F0) = *(_QWORD *)(v85 + 1696);
          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x3D8) = v1217;
          while ( 1 )
          {
            v1220 = (unsigned __int8)v1217[v1219];
            v1221 = (unsigned __int8)*v1217++;
            if ( v1220 != v1221 )
              break;
            if ( !--v1218 )
            {
LABEL_1814:
              v1211 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x110);
              v1213 = *(char **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
              goto LABEL_1815;
            }
          }
          v1222 = *(__int64 **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x3E0);
          v1223 = 8;
          v1224 = (__int64 *)v1212;
          while ( 1 )
          {
            v1225 = *v1224++;
            v1226 = *v1222++;
            if ( v1225 != v1226 )
              break;
            v1223 -= 8;
            if ( v1223 < 8 )
            {
              if ( !v1223 )
                goto LABEL_1814;
              while ( 1 )
              {
                v1227 = *(unsigned __int8 *)v1224;
                v1224 = (__int64 *)((char *)v1224 + 1);
                v1228 = *(unsigned __int8 *)v1222;
                v1222 = (__int64 *)((char *)v1222 + 1);
                if ( v1227 != v1228 )
                  goto LABEL_1807;
                if ( !--v1223 )
                  goto LABEL_1814;
              }
            }
          }
LABEL_1807:
          v1229 = *(char **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x3E8);
          v1230 = v1212 - v1229;
          v1231 = 4;
          while ( 1 )
          {
            v1232 = (unsigned __int8)v1229[v1230];
            v1233 = (unsigned __int8)*v1229++;
            if ( v1232 != v1233 )
              break;
            if ( !--v1231 )
              goto LABEL_1814;
          }
          v1234 = *(char **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x3F0);
          v1235 = v1212 - v1234;
          v1236 = 6;
          while ( 1 )
          {
            v1237 = (unsigned __int8)v1234[v1235];
            v1238 = (unsigned __int8)*v1234++;
            if ( v1237 != v1238 )
              break;
            if ( !--v1236 )
              goto LABEL_1814;
          }
          v1211 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x110);
          v1213 = *(char **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
        }
        v1239 = *((_DWORD *)v1212 + 2);
        if ( *((int *)v1212 + 9) < 0 )
          v1214 = 1;
        if ( *((_DWORD *)v1212 + 4) > v1239 )
          v1239 = *((_DWORD *)v1212 + 4);
        if ( !v1214 )
        {
          v1240 = v1239;
          v1241 = (const char *)(*((unsigned int *)v1212 + 3) + v1211);
          v1242 = v1241;
          v1243 = &v1241[v1239];
          if ( v1241 < v1243 )
          {
            do
            {
              _mm_prefetch(v1242, 0);
              v1242 += 64;
            }
            while ( v1242 < v1243 );
          }
          v1244 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
          if ( v1240 >= 8 )
          {
            v1245 = (unsigned __int64)v1240 >> 3;
            do
            {
              v1240 -= 8;
              v1207 = __ROL8__(*(_QWORD *)v1241 ^ v1207, v1244);
              v1241 += 8;
              --v1245;
            }
            while ( v1245 );
            *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1207;
          }
          if ( v1240 )
          {
            do
            {
              v1246 = *(unsigned __int8 *)v1241++;
              v1207 = __ROL8__(v1246 ^ v1207, v1244);
              --v1240;
            }
            while ( v1240 );
            *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1207;
          }
        }
        v1212 += 40;
      }
      while ( v1212 != v1213 );
      v1247 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
      v1248 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1207;
      if ( !v1247 )
      {
        v1249 = *(unsigned int *)(v1248 + 148);
        if ( (unsigned int)v1249 >= 0x14 )
        {
          v1250 = *(unsigned int *)(v1248 + 144);
          v1251 = v1211 + v1250 + v1249;
          v1252 = v1250 + v1211;
          if ( v1250 + v1211 != v1251 )
          {
            while ( *(_DWORD *)(v1252 + 12) )
            {
              v1253 = *(unsigned int *)(v1252 + 16);
              if ( !(_DWORD)v1253 )
                break;
              v1254 = *(_QWORD *)(v1253 + v1211);
              if ( v1254
                && (*(unsigned int (__fastcall **)(_QWORD))(v85 + 648))(*(_QWORD *)(v1253 + v1211))
                && (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *))(v85 + 488))(
                     v1254,
                     v1 + 68,
                     v1 + 199) )
              {
                v1255 = 0;
                v1256 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x110);
                v1257 = *(_QWORD **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
                while ( *v1257 != v1256 )
                {
                  if ( !*v1257 )
                  {
                    *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) + 8LL * v1255) = v1256;
                    break;
                  }
                  ++v1255;
                  ++v1257;
                  if ( v1255 >= 0x10 )
                    break;
                }
                if ( v1255 == 16 )
                  goto LABEL_1847;
              }
              v1252 += 20LL;
              if ( v1252 == v1251 )
              {
                v1247 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                goto LABEL_1852;
              }
            }
            v1247 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
          }
        }
      }
LABEL_1852:
      v1207 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
      v1259 = v1247 + 1;
      v1208 = (__int64 *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) + 8LL);
      *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v1259;
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v1208;
      if ( v1259 >= 0x10 )
      {
LABEL_1847:
        v1207 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
LABEL_1848:
        v1258 = v1207;
        goto LABEL_1857;
      }
    }
    if ( !*(_DWORD *)(v85 + 1616) )
    {
      *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v85 + 1632) = 0LL;
      *(_QWORD *)(v85 + 1640) = 258LL;
      *(_QWORD *)(v85 + 1648) = -1073741701LL;
      *(_DWORD *)(v85 + 1616) = 1;
    }
    v1258 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
LABEL_1857:
    if ( v1258 == *(_QWORD *)(v85 + 1720) || !v1258 )
      v1258 ^= 0x95EA5DE843D5D824uLL;
    (*(void (__fastcall **)(_QWORD))(v85 + 232))(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x90));
LABEL_1862:
    if ( v1258 != **(_QWORD **)(v85 + 1712) && !*(_DWORD *)(v85 + 1616) )
    {
      *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = **(_QWORD **)(v85 + 1712) ^ v1258;
      if ( !*(_DWORD *)(v85 + 1616) )
      {
        *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v85 + 1632) = 0LL;
        *(_QWORD *)(v85 + 1640) = 258LL;
        *(_QWORD *)(v85 + 1648) = v1258;
        *(_DWORD *)(v85 + 1616) = 1;
      }
    }
    v1260 = 0;
    v1261 = (int ***)(v1 + 228);
    v1262 = 2;
    do
    {
      v1263 = 0LL;
      v1264 = **v1261;
      v1265 = *((_DWORD *)*v1261 + 4);
      v1266 = (unsigned int)*v1261 + v1260 + (_DWORD)v1264;
      if ( v1265 )
      {
        v1267 = **v1261;
        do
        {
          v1268 = *v1267;
          v1263 = (unsigned int)(v1263 + 1);
          v1269 = *v1267++;
          v1266 = v1263 * ((v1268 + *(int *)((char *)v1264 + (v1269 >> 4))) ^ v1266);
        }
        while ( (unsigned int)v1263 < v1265 );
      }
      v1260 += 2 * v1266;
      --v1261;
      v1270 = 2 * v1266;
      --v1262;
    }
    while ( v1262 );
    v1157 = *(_BYTE **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
    v1271 = **(_DWORD **)(v85 + 1248);
    if ( v1260 != v1271 && (*(_DWORD *)(v85 + 1752) & 0x20000) != 0 && !*(_DWORD *)(v85 + 1616) )
    {
      *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v1271 ^ (unsigned __int64)v1270;
      if ( !*(_DWORD *)(v85 + 1616) )
      {
        *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v85 + 1632) = 0LL;
        *(_QWORD *)(v85 + 1640) = 263LL;
        *(_QWORD *)(v85 + 1648) = v1270;
        *(_DWORD *)(v85 + 1616) = 1;
      }
    }
    v1272 = *(_DWORD *)(v85 + 1704);
    if ( v1272 >= 7 )
    {
      if ( v1272 != 7 )
      {
LABEL_2639:
        *((_DWORD *)v1157 + 426) = 9;
        goto LABEL_2640;
      }
LABEL_2131:
      v1432 = *((_QWORD *)v1157 + 151);
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) = v1157;
      v85 = (unsigned __int64)v1157;
      v1433 = *(_QWORD *)(v1432 + 32);
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v1433;
      v1434 = (*((__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *, unsigned __int64))v1157 + 61))(
                v1433,
                v1 + 112,
                v1 + 127,
                v1263);
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v1434;
      v1436 = v1434;
      if ( !v1434 )
        goto LABEL_2640;
      v1437 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C0);
      v1438 = v1 + 96;
      v1439 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1FC);
      *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v1439;
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v1437;
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x178) = 0LL;
      v1440 = 4;
      do
      {
        *v1438++ = 0;
        --v1440;
      }
      while ( v1440 );
      v1441 = 0;
      if ( *((_DWORD *)v1157 + 369) )
      {
        v1442 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x180);
        v1443 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x17C);
        LODWORD(v1435) = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x178);
        while ( 1 )
        {
          v1444 = 0;
          v1445 = v1157;
          if ( *((_QWORD *)v1157 + 239) )
            v1445 = (_BYTE *)*((_QWORD *)v1157 + 239);
          v1446 = &v1445[*((unsigned int *)v1445 + 368)];
          if ( (_DWORD)v1435 && v1443 <= v1441 )
          {
            v1444 = v1443;
            v1446 = &v1445[v1442];
          }
          if ( v1444 != v1441 )
            break;
LABEL_2167:
          v1443 = v1444;
          *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x178) = 1;
          *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x17C) = v1444;
          v1442 = (_DWORD)v1446 - (_DWORD)v1445;
          v1435 = 1LL;
          *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x180) = (_DWORD)v1446 - (_DWORD)v1445;
          v1455 = *(_DWORD *)v1446;
          if ( (*(_DWORD *)v1446 == 1 || v1455 == 12)
            && *((_QWORD *)v1446 + 1) == v1436
            && *((_DWORD *)v1446 + 4) == v1439
            || (unsigned int)(v1455 - 33) <= 1 && *((_QWORD *)v1446 + 4) == v1437 )
          {
            goto LABEL_2177;
          }
          if ( ++v1441 >= *((_DWORD *)v1157 + 369) )
            goto LABEL_2176;
        }
        v1447 = v1441 - v1444;
        v1444 = v1441;
        while ( 2 )
        {
          v1448 = *(_DWORD *)v1446;
          if ( *(int *)v1446 > 17 )
          {
            if ( v1448 != 19 )
            {
              if ( v1448 != 28 )
              {
                if ( v1448 == 30 )
                {
                  v1453 = (((*((_DWORD *)v1446 + 9) - 1) / 0xCu + 7) & 0xFFFFFFF8)
                        + 24 * (*((unsigned __int16 *)v1446 + 20) + 2);
                }
                else if ( (unsigned int)(v1448 - 33) > 1 )
                {
LABEL_2150:
                  v1453 = 48LL;
                }
                else
                {
                  v1453 = 20
                        * (unsigned int)(((*((_DWORD *)v1446 + 8) & 0xFFF)
                                        + (unsigned __int64)*((unsigned int *)v1446 + 10)
                                        + 4095) >> 12)
                        + 48;
                }
                goto LABEL_2165;
              }
              v1454 = *((unsigned __int16 *)v1446 + 20);
LABEL_2154:
              v1453 = (v1454 + 55) & 0xFFFFFFF8;
              goto LABEL_2165;
            }
          }
          else if ( v1448 != 17 )
          {
            v1449 = v1448 - 1;
            if ( !v1449 )
              goto LABEL_2156;
            v1450 = v1449 - 6;
            if ( !v1450 )
            {
              v1453 = (unsigned int)(24 * (*((_DWORD *)v1446 + 6) + 2));
              goto LABEL_2165;
            }
            v1451 = v1450 - 1;
            if ( v1451 )
            {
              v1452 = v1451 - 2;
              if ( v1452 )
              {
                if ( v1452 != 2 )
                  goto LABEL_2150;
LABEL_2156:
                v1453 = 4 * (*((_DWORD *)v1446 + 4) / 0xCu) + 48;
              }
              else
              {
                v1453 = (unsigned int)(16 * (*((_DWORD *)v1446 + 7) + 3));
              }
LABEL_2165:
              v1446 += v1453;
              if ( !--v1447 )
              {
                v1436 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                v1437 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                v1439 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
                goto LABEL_2167;
              }
              continue;
            }
            v1454 = *((unsigned __int16 *)v1446 + 16);
            goto LABEL_2154;
          }
          break;
        }
        v1453 = 56LL;
        goto LABEL_2165;
      }
LABEL_2176:
      v1446 = 0LL;
LABEL_2177:
      if ( v1446 )
        goto LABEL_2636;
      v1456 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
      v1457 = (*((__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *, unsigned __int64))v1157 + 61))(
                v1456,
                v1 + 46,
                v1 + 39,
                v1435);
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1457;
      if ( !v1457 )
      {
        *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = -1073741701;
        goto LABEL_2345;
      }
      v1459 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8);
      v1460 = v1 + 88;
      v1461 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x9C);
      *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v1461;
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v1459;
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x158) = 0LL;
      v1462 = 4;
      do
      {
        *v1460++ = 0;
        --v1462;
      }
      while ( v1462 );
      v1463 = 0;
      if ( *((_DWORD *)v1157 + 369) )
      {
        v1464 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x160);
        LODWORD(v1458) = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x15C);
        LODWORD(v1435) = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x158);
        while ( 1 )
        {
          v1465 = 0;
          v1466 = v1157;
          if ( *((_QWORD *)v1157 + 239) )
            v1466 = (_BYTE *)*((_QWORD *)v1157 + 239);
          v1467 = &v1466[*((unsigned int *)v1466 + 368)];
          if ( (_DWORD)v1435 && (unsigned int)v1458 <= v1463 )
          {
            v1465 = v1458;
            v1467 = &v1466[v1464];
          }
          if ( v1465 != v1463 )
            break;
LABEL_2214:
          *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x158) = 1;
          v1464 = (_DWORD)v1467 - (_DWORD)v1466;
          v1458 = v1465;
          *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x160) = (_DWORD)v1467 - (_DWORD)v1466;
          v1435 = 1LL;
          *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x15C) = v1465;
          v1476 = *(_DWORD *)v1467;
          if ( (*(_DWORD *)v1467 == 1 || v1476 == 12)
            && *((_QWORD *)v1467 + 1) == *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28)
            && *((_DWORD *)v1467 + 4) == v1461
            || (unsigned int)(v1476 - 33) <= 1 && *((_QWORD *)v1467 + 4) == v1459 )
          {
            goto LABEL_2224;
          }
          if ( ++v1463 >= *((_DWORD *)v1157 + 369) )
            goto LABEL_2223;
        }
        v1468 = v1463 - v1465;
        v1465 = v1463;
        while ( 2 )
        {
          v1469 = *(_DWORD *)v1467;
          if ( *(int *)v1467 > 17 )
          {
            if ( v1469 != 19 )
            {
              if ( v1469 != 28 )
              {
                if ( v1469 == 30 )
                {
                  v1474 = (((*((_DWORD *)v1467 + 9) - 1) / 0xCu + 7) & 0xFFFFFFF8)
                        + 24 * (*((unsigned __int16 *)v1467 + 20) + 2);
                }
                else if ( (unsigned int)(v1469 - 33) > 1 )
                {
LABEL_2198:
                  v1474 = 48LL;
                }
                else
                {
                  v1474 = 20
                        * (unsigned int)(((*((_DWORD *)v1467 + 8) & 0xFFF)
                                        + (unsigned __int64)*((unsigned int *)v1467 + 10)
                                        + 4095) >> 12)
                        + 48;
                }
                goto LABEL_2212;
              }
              v1475 = *((unsigned __int16 *)v1467 + 20);
LABEL_2201:
              v1474 = (v1475 + 55) & 0xFFFFFFF8;
              goto LABEL_2212;
            }
          }
          else if ( v1469 != 17 )
          {
            v1470 = v1469 - 1;
            if ( !v1470 )
              goto LABEL_2203;
            v1471 = v1470 - 6;
            if ( !v1471 )
            {
              v1474 = (unsigned int)(24 * (*((_DWORD *)v1467 + 6) + 2));
              goto LABEL_2212;
            }
            v1472 = v1471 - 1;
            if ( v1472 )
            {
              v1473 = v1472 - 2;
              if ( v1473 )
              {
                if ( v1473 != 2 )
                  goto LABEL_2198;
LABEL_2203:
                v1474 = 4 * (*((_DWORD *)v1467 + 4) / 0xCu) + 48;
              }
              else
              {
                v1474 = (unsigned int)(16 * (*((_DWORD *)v1467 + 7) + 3));
              }
LABEL_2212:
              v1467 += v1474;
              if ( !--v1468 )
              {
                v1459 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                v1461 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
                v1456 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                goto LABEL_2214;
              }
              continue;
            }
            v1475 = *((unsigned __int16 *)v1467 + 16);
            goto LABEL_2201;
          }
          break;
        }
        v1474 = 56LL;
        goto LABEL_2212;
      }
LABEL_2223:
      v1467 = 0LL;
LABEL_2224:
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x240) = v1467;
      if ( v1467 )
        goto LABEL_2622;
      v1477 = (*((__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned __int64))v1157 + 81))(
                v1456,
                v1458,
                0LL,
                v1435);
      v1478 = *(unsigned int *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x9C);
      *v1 = v1478;
      if ( !v1477 )
        goto LABEL_2622;
      if ( (*((_DWORD *)v1157 + 438) & 0x40000000) != 0 )
      {
        v1479 = sub_140777D18(v1 + 44, *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8), 7LL);
        v85 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0);
        v1480 = v1479;
        *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = v1479;
LABEL_2343:
        v1157 = (_BYTE *)v85;
        if ( (int)(v1480 + 0x80000000) >= 0 && v1480 != -1073741554 )
        {
LABEL_2345:
          v1568 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
LABEL_2634:
          if ( ((v1568 + 0x80000000) & 0x80000000) == 0 && v1568 != -1073741554 )
            goto LABEL_2640;
          goto LABEL_2636;
        }
LABEL_2622:
        v1757 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 480))(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL)
                                                                          + 0x1C0));
        v1758 = *(unsigned int *)(v1757 + 148);
        if ( (unsigned int)v1758 >= 0x14 )
        {
          v1759 = *(unsigned int *)(v1757 + 144);
          v1760 = v1759 + v1758;
          v1761 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C0);
          v1762 = v1761 + v1760;
          for ( i29 = v1759 + v1761; i29 != v1762; i29 += 20LL )
          {
            if ( !*(_DWORD *)(i29 + 12) )
              break;
            v1764 = *(unsigned int *)(i29 + 16);
            if ( !(_DWORD)v1764 )
              break;
            v1765 = *(_QWORD *)(v1764 + v1761);
            if ( v1765 )
            {
              v1766 = sub_14024FE34(v1 + 44, v1765, 2147483655LL);
              v85 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0);
              v1568 = v1766;
              v1157 = (_BYTE *)v85;
              if ( ((v1766 + 0x80000000) & 0x80000000) == 0 && v1766 != -1073741554 )
                goto LABEL_2634;
              v1761 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C0);
            }
          }
          v1568 = 0;
          goto LABEL_2634;
        }
        v85 = (unsigned __int64)v1157;
LABEL_2636:
        if ( (*((__int64 (__fastcall **)(_QWORD, _BYTE *, unsigned int *, unsigned __int64))v1157 + 61))(
               *(_QWORD *)(*((_QWORD *)v1157 + 151) + 32LL),
               v1157 + 1736,
               v1 + 200,
               v1435) )
        {
          v1767 = (*((__int64 (__fastcall **)(_QWORD))v1157 + 60))(*((_QWORD *)v1157 + 217));
          if ( v1767 )
          {
            *((_DWORD *)v1157 + 433) = *(_DWORD *)(v1767 + 80);
            *((_DWORD *)v1157 + 426) = 8;
            goto LABEL_2639;
          }
        }
        if ( !*((_DWORD *)v1157 + 404) )
        {
          *((_QWORD *)v1157 + 203) = v1157 - 0x5C5FC0A76E374B18LL;
          *((_QWORD *)v1157 + 204) = 0LL;
          *((_QWORD *)v1157 + 205) = 261LL;
          *((_QWORD *)v1157 + 206) = -1073741701LL;
          *((_DWORD *)v1157 + 404) = 1;
        }
LABEL_2640:
        if ( (*((_DWORD *)v1157 + 438) & 0x8000) != 0 || !*((_DWORD *)v1157 + 404) )
        {
          v1768 = *((_QWORD *)v1157 + 218);
          *((_QWORD *)v1157 + 218) = 0LL;
          (*((void (__fastcall **)(__int64, unsigned int *))v1157 + 79))(v1768, v1 + 300);
          v1769 = *((_DWORD *)v1157 + 438);
          if ( (v1769 & 1) != 0 )
          {
            *((_DWORD *)v1157 + 438) = v1769 & 0xFFFFFFFE;
            v1770 = (*((__int64 (__fastcall **)(__int64))v1157 + 76))(v1768);
            v1768 = v1770;
            if ( v1770 )
              *((_DWORD *)v1157 + 432) = (*((__int64 (__fastcall **)(__int64))v1157 + 80))(v1770);
            else
              *((_DWORD *)v1157 + 432) = -1;
          }
          if ( v1768 )
            (*((void (__fastcall **)(__int64))v1157 + 77))(v1768);
        }
LABEL_2679:
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v85;
        goto LABEL_2680;
      }
      v1481 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8);
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v1481;
      v1482 = (*((__int64 (__fastcall **)(__int64))v1157 + 60))(v1481);
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v1482;
      if ( !v1482 )
        goto LABEL_2341;
      v1483 = *((unsigned int *)v1157 + 359);
      v1484 = *((unsigned int *)v1157 + 415);
      v1485 = v1478;
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1478 / 0xC;
      v1486 = 4 * (v1478 / 0xC);
      v1487 = v1483 + v1486 + 48;
      if ( v1487 > *((_DWORD *)v1157 + 471) )
      {
        v1488 = (_BYTE *)sub_140251E08(v1157, v1487, v1484);
        if ( v1488 )
        {
          v1489 = *((_DWORD *)v1157 + 438);
          if ( (v1489 & 4) == 0 )
          {
            v1490 = *((_DWORD *)v1157 + 359);
            v1491 = *((_QWORD *)v1157 + 176);
            v1492 = (v1489 & 0x20000000) != 0 ? *((_DWORD *)v1157 + 415) : 0;
            if ( v1490 >= 8 )
            {
              v1493 = (unsigned __int64)v1490 >> 3;
              do
              {
                *(_QWORD *)v1157 = 0LL;
                v1490 -= 8;
                v1157 += 8;
                --v1493;
              }
              while ( v1493 );
            }
            for ( ; v1490; --v1490 )
              *v1157++ = 0;
            v1494 = *((_DWORD *)v1488 + 415);
            *((_DWORD *)v1488 + 415) = v1492;
            if ( v1492 == 3 )
            {
              (*((void (__fastcall **)(__int64, __int64))v1488 + 105))(v1491, 1LL);
            }
            else
            {
              v1495 = 0;
              if ( (*((_DWORD *)v1488 + 438) & 0x10000000) == 0 )
                v1495 = v1492;
              if ( v1495 )
                (*((void (__fastcall **)(__int64, _QWORD))v1488 + 66))(v1491 - 8, *(_QWORD *)(v1491 - 8));
              else
                (*((void (__fastcall **)(__int64, __int64))v1488 + 29))(v1491, 1LL);
            }
            *((_DWORD *)v1488 + 415) = v1494;
          }
          *((_DWORD *)v1488 + 438) &= ~4u;
          goto LABEL_2248;
        }
LABEL_2246:
        v1480 = -1073741670;
LABEL_2342:
        *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = v1480;
        goto LABEL_2343;
      }
      v1488 = v1157;
      *((_DWORD *)v1157 + 359) = v1487;
LABEL_2248:
      v1496 = &v1488[v1483];
      ++*((_DWORD *)v1488 + 369);
      v1497 = &v1488[v1483];
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x2F8) = &v1488[v1483];
      v1498 = 48;
      v1499 = 6LL;
      do
      {
        *v1497 = 0LL;
        v1498 -= 8;
        ++v1497;
        --v1499;
      }
      while ( v1499 );
      for ( ; v1498; --v1498 )
      {
        *(_BYTE *)v1497 = 0;
        v1497 = (_QWORD *)((char *)v1497 + 1);
      }
      v1500 = *(_QWORD **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
      *(_DWORD *)v1496 = 12;
      v1501 = v1500;
      *((_QWORD *)v1496 + 1) = v1500;
      v1502 = (const char *)v1500;
      *((_DWORD *)v1496 + 4) = v1485;
      *((_DWORD *)v1488 + 376) += v1485;
      v1503 = *((_DWORD *)v1488 + 371);
      v1504 = *((_QWORD *)v1488 + 186);
      if ( v1500 < (_QWORD *)((char *)v1500 + v1485) )
      {
        do
        {
          _mm_prefetch(v1502, 0);
          v1502 += 64;
        }
        while ( v1502 < (const char *)v1500 + v1485 );
      }
      v1505 = (unsigned int)v1485;
      if ( (unsigned int)v1485 >= 8 )
      {
        v1506 = (unsigned __int64)(unsigned int)v1485 >> 3;
        do
        {
          v1504 = __ROL8__(*v1501++ ^ v1504, v1503);
          v1505 = (unsigned int)(v1505 - 8);
          --v1506;
        }
        while ( v1506 );
      }
      if ( (_DWORD)v1505 )
      {
        do
        {
          v1507 = *(unsigned __int8 *)v1501;
          v1501 = (_QWORD *)((char *)v1501 + 1);
          v1504 = __ROL8__(v1507 ^ v1504, v1503);
          v124 = (_DWORD)v1505 == 1;
          v1505 = (unsigned int)(v1505 - 1);
        }
        while ( !v124 );
      }
      for ( i30 = v1504; ; v1504 = (unsigned int)i30 ^ (unsigned int)v1504 )
      {
        i30 >>= 31;
        if ( !i30 )
          break;
      }
      LODWORD(v1504) = v1504 & 0x7FFFFFFF;
      *((_DWORD *)v1496 + 5) = v1504;
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B8) = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                         + 0x2F8);
      *((_DWORD *)v1488 + 376) += v1485;
      v1509 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B8);
      v1510 = *((_QWORD *)v1488 + 142) + 16LL;
      v1511 = *((_QWORD *)v1488 + 145);
      v1512 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      (*((void (__fastcall **)(__int64, unsigned __int64, __int64, _QWORD *))v1488 + 39))(v1511, v1504, v1505, v1501);
      v1513 = v1510 + 24LL * **((unsigned int **)v1488 + 142);
      while ( *(_QWORD *)(v1510 + 8) != *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) )
      {
        v1510 += 24LL;
        if ( v1510 >= v1513 )
          goto LABEL_2267;
      }
      v1514 = *(_OWORD *)v1510;
      *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x6C) = 0;
      *(_OWORD *)(v1509 + 24) = v1514;
      *(_QWORD *)(v1509 + 40) = *(_QWORD *)(v1510 + 16);
LABEL_2267:
      (*((void (__fastcall **)(_QWORD))v1488 + 47))(*((_QWORD *)v1488 + 145));
      __writecr8(v1512);
      if ( *(int *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x6C) < 0 )
      {
        v1515 = 24;
        v1516 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B8) + 24LL);
        v1517 = 3LL;
        do
        {
          *v1516 = 0LL;
          v1515 -= 8;
          ++v1516;
          --v1517;
        }
        while ( v1517 );
        for ( ; v1515; --v1515 )
        {
          *(_BYTE *)v1516 = 0;
          v1516 = (_QWORD *)((char *)v1516 + 1);
        }
        *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B8) + 24LL) = 1LL;
      }
      v1518 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B8) + 48LL);
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v1518;
      if ( v1486 >= 8 )
      {
        v1519 = (unsigned __int64)v1486 >> 3;
        do
        {
          *v1518 = -1LL;
          v1486 -= 8;
          ++v1518;
          --v1519;
        }
        while ( v1519 );
      }
      for ( ; v1486; --v1486 )
      {
        *(_BYTE *)v1518 = -1;
        v1518 = (_QWORD *)((char *)v1518 + 1);
      }
      v1520 = 0;
      v1521 = *(unsigned int *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
      v1522 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
      v1523 = -1;
      *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x6C) = 0;
      v1524 = *v1522;
      v1525 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
      v1526 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = &v1522[3 * v1521];
      v1527 = (char *)(*((__int64 (__fastcall **)(__int64, __int64, __int64))v1488 + 63))(v1526, v1525, v1524);
      if ( v1527 )
      {
LABEL_2279:
        v1528 = 0;
        if ( (*((_DWORD *)v1527 + 9) & 0x2000000) != 0
          || (v1529 = *(_DWORD *)v1527, *(_DWORD *)v1527 == 1414090313) && *((_DWORD *)v1527 + 1) == 1195525195
          || v1529 == 1162297680
          && ((v1530 = *((_WORD *)v1527 + 2), v1530 == 30583) || v1530 == 29303 || v1530 == 30839)
          || v1529 == 1095914053 && *((_WORD *)v1527 + 2) == 16724 )
        {
LABEL_2306:
          v1528 = 1;
        }
        else
        {
          v1531 = (char *)*((_QWORD *)v1488 + 209);
          v1532 = 7;
          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x440) = *((_QWORD *)v1488 + 210);
          v1533 = v1527 - v1531;
          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x448) = *((_QWORD *)v1488 + 211);
          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x450) = *((_QWORD *)v1488 + 212);
          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x438) = v1531;
          while ( 1 )
          {
            v1534 = (unsigned __int8)v1531[v1533];
            v1535 = (unsigned __int8)*v1531++;
            if ( v1534 != v1535 )
              break;
            if ( !--v1532 )
              goto LABEL_2306;
          }
          v1536 = *(__int64 **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x440);
          v1537 = 8;
          v1538 = (__int64 *)v1527;
          while ( 1 )
          {
            v1539 = *v1538++;
            v1540 = *v1536++;
            if ( v1539 != v1540 )
              break;
            v1537 -= 8;
            if ( v1537 < 8 )
            {
              if ( !v1537 )
                goto LABEL_2306;
              while ( 1 )
              {
                v1541 = *(unsigned __int8 *)v1538;
                v1538 = (__int64 *)((char *)v1538 + 1);
                v1542 = *(unsigned __int8 *)v1536;
                v1536 = (__int64 *)((char *)v1536 + 1);
                if ( v1541 != v1542 )
                  goto LABEL_2299;
                if ( !--v1537 )
                  goto LABEL_2306;
              }
            }
          }
LABEL_2299:
          v1543 = *(char **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x448);
          v1544 = v1527 - v1543;
          v1545 = 4;
          while ( 1 )
          {
            v1546 = (unsigned __int8)v1543[v1544];
            v1547 = (unsigned __int8)*v1543++;
            if ( v1546 != v1547 )
              break;
            if ( !--v1545 )
              goto LABEL_2306;
          }
          v1548 = *(char **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x450);
          v1549 = v1527 - v1548;
          v1550 = 6;
          while ( 1 )
          {
            v1551 = (unsigned __int8)v1548[v1549];
            v1552 = (unsigned __int8)*v1548++;
            if ( v1551 != v1552 )
              break;
            if ( !--v1550 )
              goto LABEL_2306;
          }
        }
        if ( *((int *)v1527 + 9) < 0 )
          v1528 = 1;
        if ( v1528
          && *(_DWORD *)v1527 == 1414090313
          && *((_DWORD *)v1527 + 1) == 1195525195
          && (*((_DWORD *)v1488 + 438) & 0x10000000) != 0 )
        {
          v1528 = 0;
        }
        v1553 = *((_DWORD *)v1527 + 2);
        if ( *((_DWORD *)v1527 + 4) > v1553 )
          v1553 = *((_DWORD *)v1527 + 4);
        v1554 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
        v1555 = v1553 + *((_DWORD *)v1527 + 3);
        while ( 1 )
        {
          v1556 = v1522[2];
          if ( (v1556 & 1) == 0 )
          {
            if ( v1556 < v1523 )
              v1523 = v1522[2];
            if ( v1556 > v1520 )
              v1520 = v1522[2];
            *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x6C) = v1520;
          }
          v1557 = *v1522;
          v1558 = v1522[1] - v1557;
          v1559 = (char *)(v1554 + v1557);
          if ( v1528 )
          {
            v1560 = *(_DWORD **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
            *v1560 = 0x80000000;
          }
          else
          {
            *((_DWORD *)v1488 + 376) += v1558;
            v1561 = (const char *)(v1554 + v1557);
            v1562 = *((_DWORD *)v1488 + 371);
            v1563 = *((_QWORD *)v1488 + 186);
            v1564 = &v1559[v1558];
            if ( v1559 < v1564 )
            {
              do
              {
                _mm_prefetch(v1561, 0);
                v1561 += 64;
              }
              while ( v1561 < v1564 );
            }
            if ( v1558 >= 8 )
            {
              v1565 = (unsigned __int64)v1558 >> 3;
              do
              {
                v1563 = __ROL8__(*(_QWORD *)v1559 ^ v1563, v1562);
                v1559 += 8;
                v1558 -= 8;
                --v1565;
              }
              while ( v1565 );
            }
            for ( ; v1558; --v1558 )
            {
              v1566 = (unsigned __int8)*v1559++;
              v1563 = __ROL8__(v1566 ^ v1563, v1562);
            }
            for ( i31 = v1563; ; LODWORD(v1563) = i31 ^ v1563 )
            {
              i31 >>= 31;
              if ( !i31 )
                break;
            }
            v1560 = *(_DWORD **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
            v1520 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x6C);
            *v1560 = v1563 & 0x7FFFFFFF;
            v1554 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
          }
          v1522 += 3;
          if ( v1522 == *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) )
            break;
          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v1560 + 1;
          if ( *v1522 < *((_DWORD *)v1527 + 3) || v1554 + (unsigned __int64)v1522[1] > v1555 )
          {
            v1527 = (char *)(*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD, char *))v1488 + 63))(
                              *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10),
                              v1554,
                              *v1522,
                              v1559);
            if ( !v1527 )
            {
              v85 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0);
              goto LABEL_2341;
            }
            goto LABEL_2279;
          }
        }
        if ( v1523 == -1 && !v1520 )
          v1523 = 0;
        v1569 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8);
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) = v1488;
        *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x250) = v1520 - v1523;
        v85 = (unsigned __int64)v1488;
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x3B8) = v1569 + v1523;
        LOBYTE(v1554) = 1;
        v1570 = (*((__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))v1488 + 59))(
                  v1569,
                  v1554,
                  0LL,
                  v1 + 39);
        v1571 = v1570;
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x3C0) = v1570;
        LOBYTE(v1571) = 1;
        v1572 = v1570 != 0 ? *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x9C) : 0;
        *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x9C) = v1572;
        *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x254) = v1572;
        v1573 = (*((__int64 (__fastcall **)(_QWORD, __int64, __int64, unsigned int *))v1488 + 59))(
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8),
                  v1571,
                  12LL,
                  v1 + 39);
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v1573;
        LOBYTE(v1574) = 1;
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x3C8) = v1573;
        v1575 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8);
        v1576 = v1573 != 0 ? *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x9C) : 0;
        *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x6C) = v1576;
        *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x9C) = v1576;
        *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x258) = v1576;
        v1577 = (*((__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int *))v1488 + 59))(
                  v1575,
                  v1574,
                  10LL,
                  v1 + 39);
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x3D0) = v1577;
        v1578 = v1577 != 0 ? *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x9C) : 0;
        *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x9C) = v1578;
        v1579 = *((unsigned int *)v1488 + 359);
        v1580 = *((unsigned int *)v1488 + 415);
        *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x25C) = v1578;
        v1581 = v1579 + 192;
        if ( (unsigned int)(v1579 + 192) <= *((_DWORD *)v1488 + 471) )
        {
          v1157 = v1488;
          *((_DWORD *)v1488 + 359) = v1581;
        }
        else
        {
          v1157 = (_BYTE *)sub_140251E08(v1488, v1581, v1580);
          if ( !v1157 )
          {
            v1157 = v1488;
            goto LABEL_2345;
          }
          v1582 = *((_DWORD *)v1488 + 438);
          if ( (v1582 & 4) == 0 )
          {
            v1583 = *((_DWORD *)v1488 + 359);
            v1584 = *((_QWORD *)v1488 + 176);
            v1585 = (v1582 & 0x20000000) != 0 ? *((_DWORD *)v1488 + 415) : 0;
            if ( v1583 >= 8 )
            {
              v1586 = (unsigned __int64)v1583 >> 3;
              do
              {
                *(_QWORD *)v1488 = 0LL;
                v1583 -= 8;
                v1488 += 8;
                --v1586;
              }
              while ( v1586 );
            }
            for ( ; v1583; --v1583 )
              *v1488++ = 0;
            v1587 = *((_DWORD *)v1157 + 415);
            *((_DWORD *)v1157 + 415) = v1585;
            if ( v1585 == 3 )
            {
              (*((void (__fastcall **)(__int64, __int64))v1157 + 105))(v1584, 1LL);
            }
            else
            {
              v1588 = 0;
              if ( (*((_DWORD *)v1157 + 438) & 0x10000000) == 0 )
                v1588 = v1585;
              if ( v1588 )
                (*((void (__fastcall **)(__int64, _QWORD))v1157 + 66))(v1584 - 8, *(_QWORD *)(v1584 - 8));
              else
                (*((void (__fastcall **)(__int64, __int64))v1157 + 29))(v1584, 1LL);
            }
            *((_DWORD *)v1157 + 415) = v1587;
          }
          *((_DWORD *)v1157 + 438) &= ~4u;
        }
        v1589 = (__int64)&v1157[v1579];
        *((_DWORD *)v1157 + 369) += 4;
        v1590 = (unsigned __int64 *)(v1 + 238);
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x2C8) = &v1157[v1579];
        v1591 = v1 + 148;
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x240) = v1589;
        v1592 = 4LL;
        do
        {
          v1593 = *v1591;
          v1594 = 48;
          v1435 = *v1590;
          v1595 = (_QWORD *)v1589;
          v1596 = 6LL;
          do
          {
            *v1595 = 0LL;
            v1594 -= 8;
            ++v1595;
            --v1596;
          }
          while ( v1596 );
          for ( ; v1594; --v1594 )
          {
            *(_BYTE *)v1595 = 0;
            v1595 = (_QWORD *)((char *)v1595 + 1);
          }
          *(_DWORD *)v1589 = 11;
          *(_QWORD *)(v1589 + 8) = v1435;
          v1597 = (const char *)v1435;
          *(_DWORD *)(v1589 + 16) = v1593;
          *((_DWORD *)v1157 + 376) += v1593;
          v1598 = *((_DWORD *)v1157 + 371);
          v1599 = *((_QWORD *)v1157 + 186);
          if ( v1435 < v1435 + v1593 )
          {
            do
            {
              _mm_prefetch(v1597, 0);
              v1597 += 64;
            }
            while ( (unsigned __int64)v1597 < v1435 + v1593 );
          }
          v1600 = v1593;
          if ( (unsigned int)v1593 >= 8 )
          {
            v1601 = v1593 >> 3;
            do
            {
              v1599 = __ROL8__(*(_QWORD *)v1435 ^ v1599, v1598);
              v1435 += 8LL;
              v1600 -= 8;
              --v1601;
            }
            while ( v1601 );
          }
          for ( ; v1600; --v1600 )
          {
            v1602 = *(unsigned __int8 *)v1435++;
            v1599 = __ROL8__(v1602 ^ v1599, v1598);
          }
          for ( i32 = v1599; ; v1599 = (unsigned int)i32 ^ (unsigned int)v1599 )
          {
            i32 >>= 31;
            if ( !i32 )
              break;
          }
          LODWORD(v1599) = v1599 & 0x7FFFFFFF;
          ++v1591;
          *(_DWORD *)(v1589 + 20) = v1599;
          ++v1590;
          *((_DWORD *)v1157 + 376) += v1593;
          v1589 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x2C8) + 48LL;
          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x2C8) = v1589;
          --v1592;
        }
        while ( v1592 );
        v1604 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x240);
        v85 = (unsigned __int64)v1157;
        v1605 = *(unsigned int *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x6C);
        v124 = v1604 == -96;
        v1606 = (_DWORD *)(v1604 + 96);
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B0) = v1606;
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) = v1157;
        if ( !v124 )
        {
          v1620 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
          *v1606 = 14;
          goto LABEL_2420;
        }
        v1607 = *((unsigned int *)v1157 + 359);
        v1608 = v1607 + 48;
        if ( (unsigned int)(v1607 + 48) <= *((_DWORD *)v1157 + 471) )
        {
          v1609 = (__int64)v1157;
          *((_DWORD *)v1157 + 359) = v1608;
          goto LABEL_2404;
        }
        v1609 = sub_140251E08(v1157, v1608, *((unsigned int *)v1157 + 415));
        if ( !v1609 )
          goto LABEL_2402;
        v1610 = *((_DWORD *)v1157 + 438);
        if ( (v1610 & 4) == 0 )
        {
          v1611 = *((_DWORD *)v1157 + 359);
          v1612 = *((_QWORD *)v1157 + 176);
          v1613 = (v1610 & 0x20000000) != 0 ? *((_DWORD *)v1157 + 415) : 0;
          if ( v1611 >= 8 )
          {
            v1614 = (unsigned __int64)v1611 >> 3;
            do
            {
              *(_QWORD *)v1157 = 0LL;
              v1611 -= 8;
              v1157 += 8;
              --v1614;
            }
            while ( v1614 );
          }
          for ( ; v1611; --v1611 )
            *v1157++ = 0;
          v1615 = *(_DWORD *)(v1609 + 1660);
          *(_DWORD *)(v1609 + 1660) = v1613;
          if ( v1613 == 3 )
          {
            (*(void (__fastcall **)(__int64, __int64))(v1609 + 840))(v1612, 1LL);
          }
          else
          {
            v1616 = 0;
            if ( (*(_DWORD *)(v1609 + 1752) & 0x10000000) == 0 )
              v1616 = v1613;
            if ( v1616 )
              (*(void (__fastcall **)(__int64, _QWORD))(v1609 + 528))(v1612 - 8, *(_QWORD *)(v1612 - 8));
            else
              (*(void (__fastcall **)(__int64, __int64))(v1609 + 232))(v1612, 1LL);
          }
          *(_DWORD *)(v1609 + 1660) = v1615;
        }
        *(_DWORD *)(v1609 + 1752) &= ~4u;
LABEL_2404:
        v1589 = v1609 + v1607;
        ++*(_DWORD *)(v1609 + 1476);
        v1617 = (_QWORD *)(v1609 + v1607);
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x300) = v1609 + v1607;
        v1618 = 48;
        v1619 = 6LL;
        do
        {
          *v1617 = 0LL;
          v1618 -= 8;
          ++v1617;
          --v1619;
        }
        while ( v1619 );
        for ( ; v1618; --v1618 )
        {
          *(_BYTE *)v1617 = 0;
          v1617 = (_QWORD *)((char *)v1617 + 1);
        }
        v1620 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
        *(_DWORD *)v1589 = 14;
        v1435 = v1620;
        *(_QWORD *)(v1589 + 8) = v1620;
        v1621 = (const char *)v1620;
        *(_DWORD *)(v1589 + 16) = v1605;
        *(_DWORD *)(v1609 + 1504) += v1605;
        v1622 = *(_DWORD *)(v1609 + 1484);
        v1599 = *(_QWORD *)(v1609 + 1488);
        if ( v1620 < v1620 + v1605 )
        {
          do
          {
            _mm_prefetch(v1621, 0);
            v1621 += 64;
          }
          while ( (unsigned __int64)v1621 < v1620 + v1605 );
        }
        v1623 = v1605;
        if ( (unsigned int)v1605 >= 8 )
        {
          v1624 = v1605 >> 3;
          do
          {
            v1599 = __ROL8__(*(_QWORD *)v1435 ^ v1599, v1622);
            v1435 += 8LL;
            v1623 -= 8;
            --v1624;
          }
          while ( v1624 );
        }
        for ( ; v1623; --v1623 )
        {
          v1625 = *(unsigned __int8 *)v1435++;
          v1599 = __ROL8__(v1625 ^ v1599, v1622);
        }
        for ( i33 = v1599; ; v1599 = (unsigned int)i33 ^ (unsigned int)v1599 )
        {
          i33 >>= 31;
          if ( !i33 )
            break;
        }
        LODWORD(v1599) = v1599 & 0x7FFFFFFF;
        v1157 = (_BYTE *)v1609;
        *(_DWORD *)(v1589 + 20) = v1599;
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B0) = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                           + 0x300);
        *(_DWORD *)(v1609 + 1504) += v1605;
LABEL_2420:
        if ( (*((_DWORD *)v1157 + 438) & 0x40000000) != 0 && (_DWORD)v1605 )
          sub_1401588B8(
            (__int64)v1157,
            v1620,
            v1605,
            *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B0) + 28LL);
        v1627 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B0);
        v85 = (unsigned __int64)v1157;
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) = v1157;
        *(_DWORD *)(v1627 + 24) = 0;
        *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B0) + 24LL) |= 1u;
        v1628 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x240);
        v1629 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8);
        *(_DWORD *)(v1628 + 144) = 35;
        *(_DWORD *)(v1628 + 184) |= 1u;
        if ( *(_DWORD *)(v1628 + 160) >= 0x94u )
        {
          v1630 = *(_QWORD *)(v1628 + 152);
          v1631 = (*((__int64 (__fastcall **)(unsigned __int64, unsigned __int64, __int64, unsigned __int64))v1157 + 60))(
                    v1629,
                    v1599,
                    v1589,
                    v1435);
          if ( v1631 )
          {
            v1632 = *(unsigned int *)(v1631 + 80);
            *(_DWORD *)(v1628 + 184) |= 2u;
            v1633 = v1629 + v1632;
            v1634 = *(_QWORD **)(v1630 + 112);
            if ( (unsigned __int64)v1634 >= v1629 && (unsigned __int64)v1634 < v1633 )
            {
              *(_QWORD *)(v1628 + 168) = *v1634;
              *(_DWORD *)(v1628 + 184) |= 4u;
            }
            v1635 = *(_QWORD **)(v1630 + 120);
            if ( (unsigned __int64)v1635 >= v1629 && (unsigned __int64)v1635 < v1633 )
            {
              *(_QWORD *)(v1628 + 176) = *v1635;
              *(_DWORD *)(v1628 + 184) |= 8u;
            }
            goto LABEL_2431;
          }
LABEL_2402:
          *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = -1073741670;
          goto LABEL_2345;
        }
LABEL_2431:
        v124 = (*((_DWORD *)v1157 + 438) & 0x400000) == 0;
        v1636 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8);
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v1636;
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) = v1157;
        if ( v124 )
          goto LABEL_2621;
        v1637 = (*((__int64 (__fastcall **)(ULONG_PTR, unsigned __int64, __int64, unsigned __int64))v1157 + 60))(
                  v1636,
                  v1599,
                  v1589,
                  v1435);
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v1637;
        v1638 = v1637;
        if ( !v1637 )
          goto LABEL_2341;
        v1639 = *(_WORD *)(v1637 + 6);
        v1640 = *v1 * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
        *(_WORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v1639;
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = *((_QWORD *)&v1640 + 1) >> 3;
        if ( !v1639 )
        {
          if ( (*((_DWORD *)v1157 + 438) & 0x200000) == 0 )
          {
            *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F0) = 649216;
            KeBugCheckEx(
              __ROR4__(*(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F0), 11),
              0xAuLL,
              v1636,
              0LL,
              0LL);
          }
          if ( *((_DWORD *)v1157 + 404) )
            goto LABEL_2341;
          *((_QWORD *)v1157 + 203) = v1157 - 0x5C5FC0A76E374B18LL;
          *((_QWORD *)v1157 + 204) = 0LL;
          *((_QWORD *)v1157 + 205) = 271LL;
          *((_QWORD *)v1157 + 206) = v1636;
LABEL_2437:
          *((_DWORD *)v1157 + 404) = 1;
          goto LABEL_2341;
        }
        v1641 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
        v1435 = v1639;
        *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x80) = v1639;
        v1642 = &v1641[3 * (unsigned int)(*((_QWORD *)&v1640 + 1) >> 3)];
        v1643 = *(unsigned __int16 *)(v1638 + 20) + v1638 + 24;
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v1642;
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v1643;
        v1644 = 0;
        v1645 = (int *)(v1643 + 8);
        while ( 2 )
        {
          v1646 = *v1645;
          v1647 = v1645[1];
          if ( v1645[2] > (unsigned int)*v1645 )
            v1646 = v1645[2];
          *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x6C) = v1647;
          v1648 = v1647 + v1646;
          if ( !v1644 || v1648 >= *(_DWORD *)(v1643 + 40LL * (v1644 - 1) + 12) )
          {
            if ( v1641 != v1642 )
            {
              do
              {
                v1649 = v1641[1];
                if ( *v1641 >= v1648 || v1649 <= v1647 )
                  break;
                if ( *v1641 < v1647 || v1649 > v1648 )
                {
                  if ( (*((_DWORD *)v1157 + 438) & 0x200000) == 0 )
                  {
                    v2127 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                    *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F8) = 649216;
                    KeBugCheckEx(
                      __ROR4__(*(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F8), 11),
                      0xAuLL,
                      v2127,
                      2uLL,
                      0LL);
                  }
                  goto LABEL_2453;
                }
                __f4(
                  v1157,
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30),
                  v1643 + 40LL * v1644,
                  v1641);
                v1642 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                v1641 += 3;
                v1647 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x6C);
                v1643 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
              }
              while ( v1641 != v1642 );
              v1435 = *(unsigned int *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
            }
            v1645 += 10;
            if ( ++v1644 < (unsigned int)v1435 )
              continue;
            v1650 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
            v1651 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
            v1652 = *(_WORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
            if ( v1641 != v1642 )
            {
              if ( (*((_DWORD *)v1157 + 438) & 0x200000) == 0 )
              {
                v2128 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E8) = 649216;
                KeBugCheckEx(
                  __ROR4__(*(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E8), 11),
                  0xAuLL,
                  v2128,
                  3uLL,
                  0LL);
              }
              if ( !*((_DWORD *)v1157 + 404) )
              {
                *((_QWORD *)v1157 + 203) = v1157 - 0x5C5FC0A76E374B18LL;
                v1654 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                *((_QWORD *)v1157 + 204) = 0LL;
                *((_QWORD *)v1157 + 205) = 271LL;
                *((_QWORD *)v1157 + 206) = v1654;
                *((_DWORD *)v1157 + 404) = 1;
              }
              goto LABEL_2341;
            }
            v1655 = *((unsigned int *)v1157 + 359);
            v1656 = v1655 + ((v1650 + 6) & 0xFFFFFFF8) + 24 * (v1435 + 2);
            if ( v1656 <= *((_DWORD *)v1157 + 471) )
            {
              v1657 = (__int64)v1157;
              *((_DWORD *)v1157 + 359) = v1656;
              goto LABEL_2479;
            }
            v1657 = sub_140251E08(v1157, v1656, *((unsigned int *)v1157 + 415));
            if ( !v1657 )
              goto LABEL_2246;
            v1658 = *((_DWORD *)v1157 + 438);
            if ( (v1658 & 4) == 0 )
            {
              v1659 = *((_DWORD *)v1157 + 359);
              v1660 = *((_QWORD *)v1157 + 176);
              v1661 = (v1658 & 0x20000000) != 0 ? *((_DWORD *)v1157 + 415) : 0;
              if ( v1659 >= 8 )
              {
                v1662 = (unsigned __int64)v1659 >> 3;
                do
                {
                  *(_QWORD *)v1157 = 0LL;
                  v1659 -= 8;
                  v1157 += 8;
                  --v1662;
                }
                while ( v1662 );
              }
              for ( ; v1659; --v1659 )
                *v1157++ = 0;
              v1663 = *(_DWORD *)(v1657 + 1660);
              *(_DWORD *)(v1657 + 1660) = v1661;
              if ( v1661 == 3 )
              {
                (*(void (__fastcall **)(__int64, __int64))(v1657 + 840))(v1660, 1LL);
              }
              else
              {
                v1664 = 0;
                if ( (*(_DWORD *)(v1657 + 1752) & 0x10000000) == 0 )
                  v1664 = v1661;
                if ( v1664 )
                  (*(void (__fastcall **)(__int64, _QWORD))(v1657 + 528))(v1660 - 8, *(_QWORD *)(v1660 - 8));
                else
                  (*(void (__fastcall **)(__int64, __int64))(v1657 + 232))(v1660, 1LL);
              }
              *(_DWORD *)(v1657 + 1660) = v1663;
            }
            *(_DWORD *)(v1657 + 1752) &= ~4u;
            v1435 = *(unsigned int *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
            v1650 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
            v1642 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
LABEL_2479:
            v1665 = v1657 + v1655;
            ++*(_DWORD *)(v1657 + 1476);
            v1666 = (_QWORD *)(v1657 + v1655);
            *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x308) = v1657 + v1655;
            v1667 = 48;
            v1668 = 6LL;
            do
            {
              *v1666 = 0LL;
              v1667 -= 8;
              ++v1666;
              --v1668;
            }
            while ( v1668 );
            for ( ; v1667; --v1667 )
            {
              *(_BYTE *)v1666 = 0;
              v1666 = (_QWORD *)((char *)v1666 + 1);
            }
            v1669 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
            *(_DWORD *)v1665 = 30;
            *(_QWORD *)(v1665 + 8) = v1669;
            *(_DWORD *)(v1665 + 16) = 0;
            v1670 = *(_QWORD *)(v1657 + 1488);
            for ( i34 = v1670; ; LODWORD(v1670) = i34 ^ v1670 )
            {
              i34 >>= 31;
              if ( !i34 )
                break;
            }
            v1672 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
            *(_DWORD *)(v1665 + 20) = v1670 & 0x7FFFFFFF;
            v1673 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x308);
            v1157 = (_BYTE *)v1657;
            *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x150) = v1673;
            *(_QWORD *)(v1673 + 24) = v1672;
            *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x150) + 32LL) = *(_DWORD *)(v1651 + 80);
            *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x150) + 36LL) = *(_DWORD *)((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL);
            *(_WORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x150) + 40LL) = v1652;
            LODWORD(v1592) = 0;
            *(_WORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x150) + 42LL) |= 1u;
            v1674 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x150);
            v1675 = *(unsigned __int16 *)(v1674 + 40);
            v1676 = (unsigned int *)(v1674 + 48 + (((unsigned int)(v1650 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
            *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = v1674 + 48;
            *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) = v1676;
            v1677 = &v1676[6 * v1675];
            *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v1677;
            if ( (_DWORD)v1650 )
              *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                             + 0x28)
                                                                                 + 12LL;
            else
              *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1642;
            if ( (_DWORD)v1435 )
            {
              v1678 = (unsigned int)v1435;
              v1679 = v1676 + 2;
              v1435 = 0x80000000LL;
              do
              {
                v1680 = 2LL;
                do
                {
                  *(v1679 - 2) = 0;
                  *(v1679 - 1) = 0;
                  *v1679 = 0x80000000;
                  v1679 += 3;
                  --v1680;
                }
                while ( v1680 );
                --v1678;
              }
              while ( v1678 );
            }
            if ( v1676 != v1677 )
            {
              v1681 = *(char **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
              v1682 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
              while ( 1 )
              {
                v1683 = 0;
                if ( (*((_DWORD *)v1681 + 9) & 0x2000000) != 0
                  || (v1684 = *(_DWORD *)v1681, *(_DWORD *)v1681 == 1414090313) && *((_DWORD *)v1681 + 1) == 1195525195
                  || v1684 == 1162297680
                  && ((v1685 = *((_WORD *)v1681 + 2), v1685 == 30583) || v1685 == 29303 || v1685 == 30839)
                  || v1684 == 1095914053 && *((_WORD *)v1681 + 2) == 16724 )
                {
                  v1683 = 1;
                }
                else
                {
                  v1686 = *(char **)(v1657 + 1672);
                  v1687 = 7;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x460) = *(_QWORD *)(v1657 + 1680);
                  v1688 = v1681 - v1686;
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x468) = *(_QWORD *)(v1657 + 1688);
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x470) = *(_QWORD *)(v1657 + 1696);
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x458) = v1686;
                  while ( 1 )
                  {
                    v1689 = (unsigned __int8)v1686[v1688];
                    v1690 = (unsigned __int8)*v1686++;
                    if ( v1689 != v1690 )
                      break;
                    if ( !--v1687 )
                    {
LABEL_2523:
                      v1683 = 1;
                      goto LABEL_2524;
                    }
                  }
                  v1691 = *(__int64 **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x460);
                  v1692 = 8;
                  v1693 = (__int64 *)v1681;
                  while ( 1 )
                  {
                    v1694 = *v1693++;
                    v1695 = *v1691++;
                    if ( v1694 != v1695 )
                      break;
                    v1692 -= 8;
                    if ( v1692 < 8 )
                    {
                      if ( !v1692 )
                        goto LABEL_2523;
                      while ( 1 )
                      {
                        v1696 = *(unsigned __int8 *)v1693;
                        v1693 = (__int64 *)((char *)v1693 + 1);
                        v1697 = *(unsigned __int8 *)v1691;
                        v1691 = (__int64 *)((char *)v1691 + 1);
                        if ( v1696 != v1697 )
                          goto LABEL_2516;
                        if ( !--v1692 )
                          goto LABEL_2523;
                      }
                    }
                  }
LABEL_2516:
                  v1698 = *(char **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x468);
                  v1699 = v1681 - v1698;
                  v1700 = 4;
                  while ( 1 )
                  {
                    v1701 = (unsigned __int8)v1698[v1699];
                    v1702 = (unsigned __int8)*v1698++;
                    if ( v1701 != v1702 )
                      break;
                    if ( !--v1700 )
                      goto LABEL_2523;
                  }
                  v1703 = *(char **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x470);
                  v1704 = v1681 - v1703;
                  v1705 = 6;
                  while ( 1 )
                  {
                    v1706 = (unsigned __int8)v1703[v1704];
                    v1707 = (unsigned __int8)*v1703++;
                    if ( v1706 != v1707 )
                      break;
                    if ( !--v1705 )
                      goto LABEL_2523;
                  }
LABEL_2524:
                  v1676 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                }
                if ( *((int *)v1681 + 9) < 0 )
                  v1683 = 1;
                if ( v1683
                  && *(_DWORD *)v1681 == 1414090313
                  && *((_DWORD *)v1681 + 1) == 1195525195
                  && (*(_DWORD *)(v1657 + 1752) & 0x10000000) != 0 )
                {
                  v1683 = 0;
                }
                v1708 = *((_DWORD *)v1681 + 2);
                v1435 = *((unsigned int *)v1681 + 3);
                if ( *((_DWORD *)v1681 + 4) > v1708 )
                  v1708 = *((_DWORD *)v1681 + 4);
                *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x80) = v1435;
                v1709 = v1708 + v1435;
                v1710 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v1709;
                if ( v1710 == v1682 )
                {
                  v1711 = 0;
                }
                else
                {
                  v1711 = *v1710;
                  LODWORD(v1592) = v1710[1];
                }
                i35 = 0;
                *v1 = v1435;
                if ( v1710 != *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) )
                {
                  v1713 = v1711 < (unsigned int)v1435;
                  if ( v1711 <= (unsigned int)v1435 )
                    goto LABEL_2560;
                  if ( (unsigned int)v1592 <= v1709 && !v1683 )
                  {
                    *v1676 = v1435;
                    v1714 = v1 + 148;
                    v1676[1] = v1711;
                    v1715 = (ULONG_PTR *)(v1 + 238);
                    v1716 = *v1676;
                    v1717 = v1711 - v1716;
                    *v1 = v1711;
                    v1718 = (_QWORD *)(v1672 + v1716);
                    v1719 = v1672 + v1716 + v1711 - (unsigned int)v1716;
                    do
                    {
                      if ( (unsigned __int64)v1718 < *v1715 + *v1714 && v1719 > *v1715 )
                      {
                        i35 = 0;
                        goto LABEL_2558;
                      }
                      ++v1715;
                      ++i35;
                      ++v1714;
                    }
                    while ( i35 < 4 );
                    *(_DWORD *)(v1657 + 1504) += v1717;
                    v1720 = (const char *)(v1672 + v1716);
                    v1721 = *(_DWORD *)(v1657 + 1484);
                    v1722 = *(_QWORD *)(v1657 + 1488);
                    if ( (unsigned __int64)v1718 < v1719 )
                    {
                      do
                      {
                        _mm_prefetch(v1720, 0);
                        v1720 += 64;
                      }
                      while ( (unsigned __int64)v1720 < v1719 );
                    }
                    if ( v1717 >= 8 )
                    {
                      v1723 = (unsigned __int64)v1717 >> 3;
                      do
                      {
                        v1717 -= 8;
                        v1722 = __ROL8__(*v1718++ ^ v1722, v1721);
                        --v1723;
                      }
                      while ( v1723 );
                    }
                    for ( i35 = 0; v1717; --v1717 )
                    {
                      v1724 = *(unsigned __int8 *)v1718;
                      v1718 = (_QWORD *)((char *)v1718 + 1);
                      v1722 = __ROL8__(v1724 ^ v1722, v1721);
                    }
                    for ( i36 = v1722; ; LODWORD(v1722) = i36 ^ v1722 )
                    {
                      i36 >>= 31;
                      if ( !i36 )
                        break;
                    }
                    *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) + 8LL) = v1722 & 0x7FFFFFFF;
LABEL_2558:
                    v1710 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                    v1672 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                    v1435 = *(unsigned int *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
                    v1709 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                  }
                }
                v1713 = v1711 < (unsigned int)v1435;
LABEL_2560:
                v1682 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                if ( v1713 )
                {
                  v1726 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                }
                else
                {
                  v834 = (unsigned int)v1592 <= v1709;
                  v1726 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                  if ( v834 && v1710 != v1682 )
                  {
                    v1727 = v1726[1];
                    if ( v1727 <= v1709 )
                    {
                      v1728 = *(_BYTE **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
                      do
                      {
                        if ( v1726 == *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) )
                          break;
                        if ( v1683 )
                        {
                          *v1728 = 0x80;
                        }
                        else
                        {
                          v1729 = *v1726;
                          v1730 = v1710[1];
                          *v1 = *v1726;
                          if ( v1729 < (unsigned int)v1730 )
                          {
                            if ( (*(_DWORD *)(v1657 + 1752) & 0x200000) == 0 )
                            {
                              *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E4) = 649216;
                              KeBugCheckEx(
                                __ROR4__(*(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E4), 11),
                                0xAuLL,
                                v1672,
                                6uLL,
                                0LL);
                            }
                            if ( !*(_DWORD *)(v1657 + 1616) )
                            {
                              *(_QWORD *)(v1657 + 1624) = v1657 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v1657 + 1632) = 0LL;
                              *(_QWORD *)(v1657 + 1640) = 271LL;
                              *(_QWORD *)(v1657 + 1648) = v1672;
                              *(_DWORD *)(v1657 + 1616) = 1;
                            }
                          }
                          v1435 = v1672 + v1730;
                          v1731 = v1729 - v1730;
                          v1732 = (unsigned __int64 *)(v1 + 238);
                          v1733 = v1 + 148;
                          v1734 = v1435 + v1731;
                          do
                          {
                            if ( v1435 < *v1732 + *v1733 && v1734 > *v1732 )
                              goto LABEL_2585;
                            ++v1732;
                            ++i35;
                            ++v1733;
                          }
                          while ( i35 < 4 );
                          if ( v1731 < 4 )
                          {
LABEL_2585:
                            i35 = 0;
                            v1728 = *(_BYTE **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
                            *v1728 = 0x80;
                            goto LABEL_2586;
                          }
                          *(_DWORD *)(v1657 + 1504) += v1731;
                          v1735 = (const char *)v1435;
                          v1736 = *(_DWORD *)(v1657 + 1484);
                          v1737 = *(_QWORD *)(v1657 + 1488);
                          if ( v1435 < v1734 )
                          {
                            do
                            {
                              _mm_prefetch(v1735, 0);
                              v1735 += 64;
                            }
                            while ( (unsigned __int64)v1735 < v1734 );
                          }
                          if ( v1731 >= 8 )
                          {
                            v1738 = (unsigned __int64)v1731 >> 3;
                            do
                            {
                              v1731 -= 8;
                              v1737 = __ROL8__(*(_QWORD *)v1435 ^ v1737, v1736);
                              v1435 += 8LL;
                              --v1738;
                            }
                            while ( v1738 );
                          }
                          for ( i35 = 0; v1731; --v1731 )
                          {
                            v1739 = *(unsigned __int8 *)v1435++;
                            v1737 = __ROL8__(v1739 ^ v1737, v1736);
                          }
                          for ( i37 = v1737; ; LOBYTE(v1737) = i37 ^ v1737 )
                          {
                            i37 >>= 7;
                            if ( !i37 )
                              break;
                          }
                          v1728 = *(_BYTE **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
                          *v1728 = v1737 & 0x7F;
LABEL_2586:
                          v1709 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                          v1710 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                        }
                        v1710 += 3;
                        ++v1728;
                        v1726 += 3;
                        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1710;
                        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = v1728;
                        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1726;
                        if ( v1726 != *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) )
                          v1727 = v1726[1];
                        v1672 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                      }
                      while ( v1727 <= v1709 );
                    }
                    v1682 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                  }
                }
                if ( !v1683 && *v1 != v1709 )
                {
                  v1741 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                  v1742 = v1709;
                  *(_DWORD *)(v1741 + 12) = *v1;
                  *(_DWORD *)(v1741 + 16) = v1709;
                  v1743 = v1 + 238;
                  v1744 = *(_DWORD *)(v1741 + 12);
                  v1745 = v1 + 148;
                  v1435 = v1742 - v1744;
                  v1746 = (const char *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) + v1744);
                  v1747 = &v1746[(unsigned int)v1435];
                  while ( (unsigned __int64)v1746 >= *v1743 + (unsigned __int64)*v1745
                       || (unsigned __int64)v1747 <= *v1743 )
                  {
                    ++v1743;
                    ++i35;
                    ++v1745;
                    if ( i35 >= 4 )
                    {
                      *(_DWORD *)(v1657 + 1504) += v1435;
                      v1748 = v1746;
                      v1749 = *(_DWORD *)(v1657 + 1484);
                      for ( i38 = *(_QWORD *)(v1657 + 1488); v1748 < v1747; v1748 += 64 )
                        _mm_prefetch(v1748, 0);
                      if ( (unsigned int)v1435 >= 8 )
                      {
                        v1751 = (unsigned __int64)(unsigned int)v1435 >> 3;
                        do
                        {
                          v1435 = (unsigned int)(v1435 - 8);
                          i38 = __ROL8__(*(_QWORD *)v1746 ^ i38, v1749);
                          v1746 += 8;
                          --v1751;
                        }
                        while ( v1751 );
                      }
                      if ( (_DWORD)v1435 )
                      {
                        do
                        {
                          v1752 = *(unsigned __int8 *)v1746++;
                          i38 = __ROL8__(v1752 ^ i38, v1749);
                          v124 = (_DWORD)v1435 == 1;
                          v1435 = (unsigned int)(v1435 - 1);
                        }
                        while ( !v124 );
                      }
                      for ( i39 = i38; ; LODWORD(i38) = i39 ^ i38 )
                      {
                        i39 >>= 31;
                        if ( !i39 )
                          break;
                      }
                      v1754 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                      *(_DWORD *)(v1754 + 20) = i38 & 0x7FFFFFFF;
                      goto LABEL_2613;
                    }
                  }
                }
                v1754 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
LABEL_2613:
                v1755 = *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                if ( v1755 != v1682
                  && *v1755 >= *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x80)
                  && v1755[1] <= *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) )
                {
                  if ( v1726 != v1682 )
                  {
                    v1756 = *(_BYTE **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
                    *v1756 = 0x80;
                    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = v1756 + 1;
                    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1726 + 3;
                  }
                  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1755 + 3;
                }
                v1676 = (unsigned int *)(v1754 + 24);
                v1681 = (char *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) + 40LL);
                *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) = v1676;
                LODWORD(v1592) = 0;
                *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v1681;
                if ( v1676 == *(unsigned int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) )
                  break;
                v1672 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
              }
            }
LABEL_2621:
            v85 = (unsigned __int64)v1157;
            *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) = v1157;
            v1480 = v1592;
            goto LABEL_2342;
          }
          break;
        }
        if ( (*((_DWORD *)v1157 + 438) & 0x200000) == 0 )
        {
          v2126 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
          *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1EC) = 649216;
          KeBugCheckEx(
            __ROR4__(*(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x1EC), 11),
            0xAuLL,
            v2126,
            1uLL,
            0LL);
        }
LABEL_2453:
        if ( !*((_DWORD *)v1157 + 404) )
        {
          *((_QWORD *)v1157 + 203) = v1157 - 0x5C5FC0A76E374B18LL;
          v1653 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
          *((_QWORD *)v1157 + 204) = 0LL;
          *((_QWORD *)v1157 + 205) = 271LL;
          *((_QWORD *)v1157 + 206) = v1653;
          goto LABEL_2437;
        }
      }
LABEL_2341:
      v1480 = -1073741701;
      goto LABEL_2342;
    }
    v1273 = *(_QWORD *)(v85 + 1208) + 32LL;
    v1274 = *(_QWORD *)(v85 + 1216) + 32LL;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1273;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v1274;
    if ( v1272 >= 2 )
      goto LABEL_1913;
    v1275 = *(unsigned int *)(v85 + 1436);
    v1276 = **(const char ***)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
    v1277 = v1275 + 48;
    v1278 = 4 * *(_DWORD *)(v1273 + 16);
    if ( (unsigned int)(v1275 + 48) <= *(_DWORD *)(v85 + 1884) )
    {
      v1279 = v85;
      *(_DWORD *)(v85 + 1436) = v1277;
      goto LABEL_1898;
    }
    v1279 = sub_140251E08(v85, v1277, *(unsigned int *)(v85 + 1660));
    if ( !v1279 )
      goto LABEL_2151;
    v1280 = *(_DWORD *)(v85 + 1752);
    if ( (v1280 & 4) == 0 )
    {
      v1281 = *(_DWORD *)(v85 + 1436);
      v1282 = *(_QWORD *)(v85 + 1408);
      v1283 = (v1280 & 0x20000000) != 0 ? *(_DWORD *)(v85 + 1660) : 0;
      if ( v1281 >= 8 )
      {
        v1284 = (unsigned __int64)v1281 >> 3;
        do
        {
          *(_QWORD *)v85 = 0LL;
          v1281 -= 8;
          v85 += 8LL;
          --v1284;
        }
        while ( v1284 );
      }
      for ( ; v1281; --v1281 )
        *(_BYTE *)v85++ = 0;
      v1285 = *(_DWORD *)(v1279 + 1660);
      *(_DWORD *)(v1279 + 1660) = v1283;
      if ( v1283 == 3 )
      {
        (*(void (__fastcall **)(__int64, __int64))(v1279 + 840))(v1282, 1LL);
      }
      else
      {
        v1286 = 0;
        if ( (*(_DWORD *)(v1279 + 1752) & 0x10000000) == 0 )
          v1286 = v1283;
        if ( v1286 )
          (*(void (__fastcall **)(__int64, _QWORD))(v1279 + 528))(v1282 - 8, *(_QWORD *)(v1282 - 8));
        else
          (*(void (__fastcall **)(__int64, __int64))(v1279 + 232))(v1282, 1LL);
      }
      *(_DWORD *)(v1279 + 1660) = v1285;
    }
    *(_DWORD *)(v1279 + 1752) &= ~4u;
LABEL_1898:
    v1263 = v1279 + v1275;
    ++*(_DWORD *)(v1279 + 1476);
    v1287 = (_QWORD *)(v1279 + v1275);
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x4E8) = v1279 + v1275;
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
    *(_DWORD *)v1263 = 11;
    v1290 = v1276;
    *(_QWORD *)(v1263 + 8) = v1276;
    *(_DWORD *)(v1263 + 16) = v1278;
    *(_DWORD *)(v1279 + 1504) += v1278;
    v1291 = *(_DWORD *)(v1279 + 1484);
    v1292 = *(_QWORD *)(v1279 + 1488);
    v1293 = &v1276[v1278];
    if ( v1276 < v1293 )
    {
      do
      {
        _mm_prefetch(v1290, 0);
        v1290 += 64;
      }
      while ( v1290 < v1293 );
    }
    v1294 = v1278;
    if ( v1278 >= 8 )
    {
      v1295 = (unsigned __int64)v1278 >> 3;
      do
      {
        v1292 = __ROL8__(*(_QWORD *)v1276 ^ v1292, v1291);
        v1276 += 8;
        v1294 -= 8;
        --v1295;
      }
      while ( v1295 );
    }
    for ( ; v1294; --v1294 )
    {
      v1296 = *(unsigned __int8 *)v1276++;
      v1292 = __ROL8__(v1296 ^ v1292, v1291);
    }
    for ( i40 = v1292; ; LODWORD(v1292) = i40 ^ v1292 )
    {
      i40 >>= 31;
      if ( !i40 )
        break;
    }
    *(_DWORD *)(v1263 + 20) = v1292 & 0x7FFFFFFF;
    v85 = v1279;
    *(_DWORD *)(v1279 + 1504) += v1278;
    v1157 = (_BYTE *)v1279;
    v1273 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
    *(_DWORD *)(v1279 + 1704) = 2;
LABEL_1913:
    if ( *(int *)(v85 + 1704) >= 3 )
      goto LABEL_1950;
    v1298 = 0;
    if ( *(_DWORD *)(v85 + 1520) == 7 )
      v1298 = 32;
    v1299 = *(unsigned int *)(v85 + 1436);
    v1300 = v1299 + 48;
    if ( (unsigned int)(v1299 + 48) <= *(_DWORD *)(v85 + 1884) )
    {
      v1301 = v85;
      *(_DWORD *)(v85 + 1436) = v1300;
      goto LABEL_1934;
    }
    v1301 = sub_140251E08(v85, v1300, *(unsigned int *)(v85 + 1660));
    if ( !v1301 )
      goto LABEL_2151;
    v1302 = *(_DWORD *)(v85 + 1752);
    if ( (v1302 & 4) == 0 )
    {
      v1303 = *(_DWORD *)(v85 + 1436);
      v1304 = *(_QWORD *)(v85 + 1408);
      v1305 = (v1302 & 0x20000000) != 0 ? *(_DWORD *)(v85 + 1660) : 0;
      if ( v1303 >= 8 )
      {
        v1306 = (unsigned __int64)v1303 >> 3;
        do
        {
          *(_QWORD *)v85 = 0LL;
          v1303 -= 8;
          v85 += 8LL;
          --v1306;
        }
        while ( v1306 );
      }
      for ( ; v1303; --v1303 )
        *(_BYTE *)v85++ = 0;
      v1307 = *(_DWORD *)(v1301 + 1660);
      *(_DWORD *)(v1301 + 1660) = v1305;
      if ( v1305 == 3 )
      {
        (*(void (__fastcall **)(__int64, __int64))(v1301 + 840))(v1304, 1LL);
      }
      else
      {
        v1308 = 0;
        if ( (*(_DWORD *)(v1301 + 1752) & 0x10000000) == 0 )
          v1308 = v1305;
        if ( v1308 )
          (*(void (__fastcall **)(__int64, _QWORD))(v1301 + 528))(v1304 - 8, *(_QWORD *)(v1304 - 8));
        else
          (*(void (__fastcall **)(__int64, __int64))(v1301 + 232))(v1304, 1LL);
      }
      *(_DWORD *)(v1301 + 1660) = v1307;
    }
    *(_DWORD *)(v1301 + 1752) &= ~4u;
LABEL_1934:
    v1309 = v1301 + v1299;
    ++*(_DWORD *)(v1301 + 1476);
    v1310 = (_QWORD *)(v1301 + v1299);
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x4F0) = v1301 + v1299;
    v1311 = 48;
    v1312 = 6LL;
    do
    {
      *v1310 = 0LL;
      v1311 -= 8;
      ++v1310;
      --v1312;
    }
    while ( v1312 );
    for ( ; v1311; --v1311 )
    {
      *(_BYTE *)v1310 = 0;
      v1310 = (_QWORD *)((char *)v1310 + 1);
    }
    *(_DWORD *)v1309 = v1298;
    *(_QWORD *)(v1309 + 8) = v1273;
    if ( v1298 == 32 )
      sub_1401588B8(v1301, v1273, 0x20u, v1309 + 24);
    *(_DWORD *)(v1309 + 16) = 32;
    *(_DWORD *)(v1301 + 1504) += 32;
    v1263 = v1273;
    v1313 = *(_DWORD *)(v1301 + 1484);
    v1314 = (const char *)v1273;
    v1315 = *(_QWORD *)(v1301 + 1488);
    if ( v1273 < (unsigned __int64)(v1273 + 32) )
    {
      do
      {
        _mm_prefetch(v1314, 0);
        v1314 += 64;
      }
      while ( (unsigned __int64)v1314 < v1273 + 32 );
    }
    v1316 = 32;
    v1317 = 4LL;
    do
    {
      v1315 = __ROL8__(*(_QWORD *)v1263 ^ v1315, v1313);
      v1263 += 8LL;
      v1316 -= 8;
      --v1317;
    }
    while ( v1317 );
    for ( ; v1316; --v1316 )
    {
      v1318 = *(unsigned __int8 *)v1263++;
      v1315 = __ROL8__(v1318 ^ v1315, v1313);
    }
    for ( i41 = v1315; ; LODWORD(v1315) = i41 ^ v1315 )
    {
      i41 >>= 31;
      if ( !i41 )
        break;
    }
    *(_DWORD *)(v1309 + 20) = v1315 & 0x7FFFFFFF;
    v85 = v1301;
    *(_DWORD *)(v1301 + 1504) += 32;
    v1157 = (_BYTE *)v1301;
    *(_DWORD *)(v1301 + 1704) = 3;
LABEL_1950:
    if ( *(int *)(v85 + 1704) >= 4 )
      goto LABEL_1984;
    v1320 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
    v1321 = *(unsigned int *)(v85 + 1436);
    v1322 = *(_DWORD *)(v1320 + 16);
    v1323 = *(const char **)v1320;
    v1324 = v1321 + 48;
    v1325 = 4 * v1322;
    if ( (unsigned int)(v1321 + 48) <= *(_DWORD *)(v85 + 1884) )
    {
      v1326 = v85;
      *(_DWORD *)(v85 + 1436) = v1324;
      goto LABEL_1969;
    }
    v1326 = sub_140251E08(v85, v1324, *(unsigned int *)(v85 + 1660));
    if ( !v1326 )
      goto LABEL_2151;
    v1327 = *(_DWORD *)(v85 + 1752);
    if ( (v1327 & 4) == 0 )
    {
      v1328 = *(_DWORD *)(v85 + 1436);
      v1329 = *(_QWORD *)(v85 + 1408);
      v1330 = (v1327 & 0x20000000) != 0 ? *(_DWORD *)(v85 + 1660) : 0;
      if ( v1328 >= 8 )
      {
        v1331 = (unsigned __int64)v1328 >> 3;
        do
        {
          *(_QWORD *)v85 = 0LL;
          v1328 -= 8;
          v85 += 8LL;
          --v1331;
        }
        while ( v1331 );
      }
      for ( ; v1328; --v1328 )
        *(_BYTE *)v85++ = 0;
      v1332 = *(_DWORD *)(v1326 + 1660);
      *(_DWORD *)(v1326 + 1660) = v1330;
      if ( v1330 == 3 )
      {
        (*(void (__fastcall **)(__int64, __int64))(v1326 + 840))(v1329, 1LL);
      }
      else
      {
        v1333 = 0;
        if ( (*(_DWORD *)(v1326 + 1752) & 0x10000000) == 0 )
          v1333 = v1330;
        if ( v1333 )
          (*(void (__fastcall **)(__int64, _QWORD))(v1326 + 528))(v1329 - 8, *(_QWORD *)(v1329 - 8));
        else
          (*(void (__fastcall **)(__int64, __int64))(v1326 + 232))(v1329, 1LL);
      }
      *(_DWORD *)(v1326 + 1660) = v1332;
    }
    *(_DWORD *)(v1326 + 1752) &= ~4u;
LABEL_1969:
    v1334 = v1326 + v1321;
    ++*(_DWORD *)(v1326 + 1476);
    v1335 = (_QWORD *)(v1326 + v1321);
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x4F8) = v1326 + v1321;
    v1336 = 48;
    v1337 = 6LL;
    do
    {
      *v1335 = 0LL;
      v1336 -= 8;
      ++v1335;
      --v1337;
    }
    while ( v1337 );
    for ( ; v1336; --v1336 )
    {
      *(_BYTE *)v1335 = 0;
      v1335 = (_QWORD *)((char *)v1335 + 1);
    }
    *(_DWORD *)v1334 = 11;
    v1338 = v1323;
    *(_QWORD *)(v1334 + 8) = v1323;
    *(_DWORD *)(v1334 + 16) = v1325;
    *(_DWORD *)(v1326 + 1504) += v1325;
    v1339 = *(_DWORD *)(v1326 + 1484);
    v1340 = *(_QWORD *)(v1326 + 1488);
    v1341 = &v1323[v1325];
    if ( v1323 < v1341 )
    {
      do
      {
        _mm_prefetch(v1338, 0);
        v1338 += 64;
      }
      while ( v1338 < v1341 );
    }
    v1342 = v1325;
    if ( v1325 >= 8 )
    {
      v1263 = (unsigned __int64)v1325 >> 3;
      do
      {
        v1340 = __ROL8__(*(_QWORD *)v1323 ^ v1340, v1339);
        v1323 += 8;
        v1342 -= 8;
        --v1263;
      }
      while ( v1263 );
    }
    for ( ; v1342; --v1342 )
    {
      v1343 = *(unsigned __int8 *)v1323++;
      v1340 = __ROL8__(v1343 ^ v1340, v1339);
    }
    for ( i42 = v1340 >> 31; i42; i42 >>= 31 )
      LODWORD(v1340) = i42 ^ v1340;
    *(_DWORD *)(v1334 + 20) = v1340 & 0x7FFFFFFF;
    v85 = v1326;
    *(_DWORD *)(v1326 + 1504) += v1325;
    v1157 = (_BYTE *)v1326;
    *(_DWORD *)(v1326 + 1704) = 4;
LABEL_1984:
    if ( *(int *)(v85 + 1704) >= 5 )
      goto LABEL_2021;
    v1345 = 0;
    if ( *(_DWORD *)(v85 + 1520) == 7 )
      v1345 = 32;
    v1346 = *(unsigned int *)(v85 + 1436);
    v1347 = v1346 + 48;
    if ( (unsigned int)(v1346 + 48) <= *(_DWORD *)(v85 + 1884) )
    {
      v1348 = v85;
      *(_DWORD *)(v85 + 1436) = v1347;
      goto LABEL_2005;
    }
    v1348 = sub_140251E08(v85, v1347, *(unsigned int *)(v85 + 1660));
    if ( !v1348 )
      goto LABEL_2151;
    v1349 = *(_DWORD *)(v85 + 1752);
    if ( (v1349 & 4) == 0 )
    {
      v1350 = *(_DWORD *)(v85 + 1436);
      v1351 = *(_QWORD *)(v85 + 1408);
      v1352 = (v1349 & 0x20000000) != 0 ? *(_DWORD *)(v85 + 1660) : 0;
      if ( v1350 >= 8 )
      {
        v1353 = (unsigned __int64)v1350 >> 3;
        do
        {
          *(_QWORD *)v85 = 0LL;
          v1350 -= 8;
          v85 += 8LL;
          --v1353;
        }
        while ( v1353 );
      }
      for ( ; v1350; --v1350 )
        *(_BYTE *)v85++ = 0;
      v1354 = *(_DWORD *)(v1348 + 1660);
      *(_DWORD *)(v1348 + 1660) = v1352;
      if ( v1352 == 3 )
      {
        (*(void (__fastcall **)(__int64, __int64))(v1348 + 840))(v1351, 1LL);
      }
      else
      {
        v1355 = 0;
        if ( (*(_DWORD *)(v1348 + 1752) & 0x10000000) == 0 )
          v1355 = v1352;
        if ( v1355 )
          (*(void (__fastcall **)(__int64, _QWORD))(v1348 + 528))(v1351 - 8, *(_QWORD *)(v1351 - 8));
        else
          (*(void (__fastcall **)(__int64, __int64))(v1348 + 232))(v1351, 1LL);
      }
      *(_DWORD *)(v1348 + 1660) = v1354;
    }
    *(_DWORD *)(v1348 + 1752) &= ~4u;
LABEL_2005:
    v1356 = v1348 + v1346;
    ++*(_DWORD *)(v1348 + 1476);
    v1357 = (_QWORD *)(v1348 + v1346);
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x500) = v1348 + v1346;
    v1358 = 48;
    v1359 = 6LL;
    do
    {
      *v1357 = 0LL;
      v1358 -= 8;
      ++v1357;
      --v1359;
    }
    while ( v1359 );
    for ( ; v1358; --v1358 )
    {
      *(_BYTE *)v1357 = 0;
      v1357 = (_QWORD *)((char *)v1357 + 1);
    }
    v1360 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
    *(_DWORD *)v1356 = v1345;
    *(_QWORD *)(v1356 + 8) = v1360;
    if ( v1345 == 32 )
      sub_1401588B8(v1348, v1360, 0x20u, v1356 + 24);
    *(_DWORD *)(v1356 + 16) = 32;
    *(_DWORD *)(v1348 + 1504) += 32;
    v1263 = v1360;
    v1361 = *(_DWORD *)(v1348 + 1484);
    v1362 = (const char *)v1360;
    v1363 = *(_QWORD *)(v1348 + 1488);
    if ( v1360 < (unsigned __int64)(v1360 + 32) )
    {
      do
      {
        _mm_prefetch(v1362, 0);
        v1362 += 64;
      }
      while ( (unsigned __int64)v1362 < v1360 + 32 );
    }
    v1364 = 32;
    v1365 = 4LL;
    do
    {
      v1363 = __ROL8__(*(_QWORD *)v1263 ^ v1363, v1361);
      v1263 += 8LL;
      v1364 -= 8;
      --v1365;
    }
    while ( v1365 );
    for ( ; v1364; --v1364 )
    {
      v1366 = *(unsigned __int8 *)v1263++;
      v1363 = __ROL8__(v1366 ^ v1363, v1361);
    }
    for ( i43 = v1363 >> 31; i43; i43 >>= 31 )
      LODWORD(v1363) = i43 ^ v1363;
    v85 = v1348;
    *(_DWORD *)(v1356 + 20) = v1363 & 0x7FFFFFFF;
    v1157 = (_BYTE *)v1348;
    *(_DWORD *)(v1348 + 1504) += 32;
    *(_DWORD *)(v1348 + 1704) = 5;
LABEL_2021:
    if ( *(int *)(v85 + 1704) < 6 )
    {
      v124 = (*(_DWORD *)(v85 + 1752) & 0x40000000) == 0;
      v1368 = 0;
      v1369 = *(__int64 **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
      v1370 = *v1369;
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = *v1369;
      if ( !v124 )
        goto LABEL_2075;
      v1371 = 0;
      if ( !*((_DWORD *)v1369 + 4) )
        goto LABEL_2075;
      v1372 = v1370;
      do
      {
        v1373 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD, unsigned __int64))(v85 + 576))(
                  v1372 + ((__int64)*(int *)(v1372 + 4LL * v1371) >> 4),
                  v1 + 214,
                  0LL,
                  v1263);
        v1263 = 1LL;
        if ( !v1373 )
          ++v1368;
        ++v1371;
      }
      while ( v1371 < *((_DWORD *)v1369 + 4) );
      if ( !v1368 )
        goto LABEL_2075;
      v1374 = *(unsigned int *)(v85 + 1436);
      v1375 = v1374 + 16 * v1368 + 48;
      if ( v1375 <= *(_DWORD *)(v85 + 1884) )
      {
        v1157 = (_BYTE *)v85;
        *(_DWORD *)(v85 + 1436) = v1375;
        goto LABEL_2048;
      }
      v1157 = (_BYTE *)sub_140251E08(v85, v1375, *(unsigned int *)(v85 + 1660));
      if ( !v1157 )
      {
        v1383 = -1073741267;
        v1384 = 0;
        goto LABEL_2076;
      }
      v1376 = *(_DWORD *)(v85 + 1752);
      if ( (v1376 & 4) == 0 )
      {
        v1377 = *(_DWORD *)(v85 + 1436);
        v1378 = *(_QWORD *)(v85 + 1408);
        v1379 = (v1376 & 0x20000000) != 0 ? *(_DWORD *)(v85 + 1660) : 0;
        if ( v1377 >= 8 )
        {
          v1380 = (unsigned __int64)v1377 >> 3;
          do
          {
            *(_QWORD *)v85 = 0LL;
            v1377 -= 8;
            v85 += 8LL;
            --v1380;
          }
          while ( v1380 );
        }
        for ( ; v1377; --v1377 )
          *(_BYTE *)v85++ = 0;
        v1381 = *((_DWORD *)v1157 + 415);
        *((_DWORD *)v1157 + 415) = v1379;
        if ( v1379 == 3 )
        {
          (*((void (__fastcall **)(__int64, __int64))v1157 + 105))(v1378, 1LL);
        }
        else
        {
          v1382 = 0;
          if ( (*((_DWORD *)v1157 + 438) & 0x10000000) == 0 )
            v1382 = v1379;
          if ( v1382 )
            (*((void (__fastcall **)(__int64, _QWORD))v1157 + 66))(v1378 - 8, *(_QWORD *)(v1378 - 8));
          else
            (*((void (__fastcall **)(__int64, __int64))v1157 + 29))(v1378, 1LL);
        }
        *((_DWORD *)v1157 + 415) = v1381;
      }
      *((_DWORD *)v1157 + 438) &= ~4u;
      v1263 = 1LL;
LABEL_2048:
      ++*((_DWORD *)v1157 + 369);
      v1385 = &v1157[v1374];
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x350) = &v1157[v1374];
      v1386 = &v1157[v1374];
      v1387 = 48;
      v1388 = 6LL;
      do
      {
        *v1386 = 0LL;
        v1387 -= 8;
        ++v1386;
        --v1388;
      }
      while ( v1388 );
      for ( ; v1387; --v1387 )
      {
        *(_BYTE *)v1386 = 0;
        v1386 = (_QWORD *)((char *)v1386 + 1);
      }
      *(_DWORD *)v1385 = 10;
      *((_QWORD *)v1385 + 1) = 0LL;
      *((_DWORD *)v1385 + 4) = 0;
      v1389 = *((_QWORD *)v1157 + 186);
      for ( i44 = v1389; ; LODWORD(v1389) = i44 ^ v1389 )
      {
        i44 >>= 31;
        if ( !i44 )
          break;
      }
      v85 = (unsigned __int64)v1157;
      *((_DWORD *)v1385 + 5) = v1389 & 0x7FFFFFFF;
      v1391 = 0;
      v1392 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x350);
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x230) = v1392;
      *(_DWORD *)(v1392 + 24) = 1;
      *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x230) + 28LL) = v1368;
      v1393 = *(int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x230);
      v1394 = v1393 + 12;
      if ( *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) + 16LL) )
      {
        while ( 1 )
        {
          v1395 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10)
                + ((__int64)*(int *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) + 4LL * v1391) >> 4);
          if ( !(*((__int64 (__fastcall **)(__int64, unsigned int *, _QWORD, __int64))v1157 + 72))(
                  v1395,
                  v1 + 214,
                  0LL,
                  1LL) )
          {
            v1396 = (unsigned __int8 *)v1395;
            *((_DWORD *)v1157 + 376) += 4;
            v1397 = (const char *)v1395;
            v1398 = *((_QWORD *)v1157 + 186);
            if ( v1395 < (unsigned __int64)(v1395 + 4) )
            {
              do
              {
                _mm_prefetch(v1397, 0);
                v1397 += 64;
              }
              while ( (unsigned __int64)v1397 < v1395 + 4 );
            }
            LODWORD(v1263) = 4;
            do
            {
              v1399 = *v1396++;
              v1398 = __ROL8__(v1399 ^ v1398, *((_DWORD *)v1157 + 371));
              v124 = (_DWORD)v1263 == 1;
              v1263 = (unsigned int)(v1263 - 1);
            }
            while ( !v124 );
            for ( i45 = v1398; ; LODWORD(v1398) = i45 ^ v1398 )
            {
              i45 >>= 31;
              if ( !i45 )
                break;
            }
            *v1394 ^= (v1398 ^ *v1394) & 0x7FFFFFFF;
            v1394[1] = 4;
            *((_QWORD *)v1394 + 1) = v1395;
            v1394 += 4;
            if ( !--v1368 )
              break;
          }
          v1263 = 1LL;
          if ( ++v1391 >= *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) + 16LL) )
          {
            v1393 = *(int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x230);
            goto LABEL_2067;
          }
        }
LABEL_2075:
        v1384 = 0;
        v1383 = 0;
LABEL_2076:
        v1157 = (_BYTE *)v85;
        if ( v1383 >= 0 )
        {
          *(_DWORD *)(v85 + 1704) = 6;
          goto LABEL_2079;
        }
LABEL_2151:
        v1431 = -1073741267;
LABEL_2130:
        v85 = (unsigned __int64)v1157;
        if ( v1431 < 0 )
          goto LABEL_2640;
        goto LABEL_2131;
      }
LABEL_2067:
      if ( !*((_DWORD *)v1157 + 404) )
      {
        *((_QWORD *)v1157 + 203) = v1157 - 0x5C5FC0A76E374B18LL;
        if ( v1393 )
          *((_QWORD *)v1157 + 204) = (char *)v1393 - 0x4C48B4211BBACBEBLL;
        else
          *((_QWORD *)v1157 + 204) = 0LL;
        if ( v1393 )
          *((_QWORD *)v1157 + 205) = *v1393;
        else
          *((_QWORD *)v1157 + 205) = 0LL;
        *((_QWORD *)v1157 + 206) = 0LL;
        *((_DWORD *)v1157 + 404) = 1;
      }
      goto LABEL_2151;
    }
    v1384 = 0;
LABEL_2079:
    if ( *(int *)(v85 + 1704) < 7 )
    {
      v124 = (*(_DWORD *)(v85 + 1752) & 0x40000000) == 0;
      v1401 = 0;
      v1402 = *(__int64 **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
      v1403 = *v1402;
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = *v1402;
      if ( !v124 )
        goto LABEL_2126;
      v1404 = 0;
      if ( !*((_DWORD *)v1402 + 4) )
        goto LABEL_2126;
      v1405 = v1403;
      do
      {
        v1406 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD))(v85 + 576))(
                  v1405 + ((__int64)*(int *)(v1405 + 4LL * v1404) >> 4),
                  v1 + 188,
                  0LL);
        v1263 = 1LL;
        if ( !v1406 )
          ++v1401;
        ++v1404;
      }
      while ( v1404 < *((_DWORD *)v1402 + 4) );
      if ( !v1401 )
        goto LABEL_2126;
      v1407 = *(unsigned int *)(v85 + 1436);
      v1408 = v1407 + 16 * v1401 + 48;
      if ( v1408 <= *(_DWORD *)(v85 + 1884) )
      {
        v1157 = (_BYTE *)v85;
        *(_DWORD *)(v85 + 1436) = v1408;
        goto LABEL_2106;
      }
      v1157 = (_BYTE *)sub_140251E08(v85, v1408, *(unsigned int *)(v85 + 1660));
      if ( v1157 )
      {
        v1409 = *(_DWORD *)(v85 + 1752);
        if ( (v1409 & 4) == 0 )
        {
          v1410 = *(_DWORD *)(v85 + 1436);
          v1411 = *(_QWORD *)(v85 + 1408);
          v1412 = (v1409 & 0x20000000) != 0 ? *(_DWORD *)(v85 + 1660) : 0;
          if ( v1410 >= 8 )
          {
            v1413 = (unsigned __int64)v1410 >> 3;
            do
            {
              *(_QWORD *)v85 = 0LL;
              v1410 -= 8;
              v85 += 8LL;
              --v1413;
            }
            while ( v1413 );
          }
          for ( ; v1410; --v1410 )
            *(_BYTE *)v85++ = 0;
          v1414 = *((_DWORD *)v1157 + 415);
          *((_DWORD *)v1157 + 415) = v1412;
          if ( v1412 == 3 )
          {
            (*((void (__fastcall **)(__int64, __int64))v1157 + 105))(v1411, 1LL);
          }
          else
          {
            v1415 = 0;
            if ( (*((_DWORD *)v1157 + 438) & 0x10000000) == 0 )
              v1415 = v1412;
            if ( v1415 )
              (*((void (__fastcall **)(__int64, _QWORD))v1157 + 66))(v1411 - 8, *(_QWORD *)(v1411 - 8));
            else
              (*((void (__fastcall **)(__int64, __int64))v1157 + 29))(v1411, 1LL);
          }
          *((_DWORD *)v1157 + 415) = v1414;
        }
        *((_DWORD *)v1157 + 438) &= ~4u;
        v1263 = 1LL;
LABEL_2106:
        ++*((_DWORD *)v1157 + 369);
        v1417 = &v1157[v1407];
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x360) = &v1157[v1407];
        v1418 = &v1157[v1407];
        v1419 = 48;
        v1420 = 6LL;
        do
        {
          *v1418 = 0LL;
          v1419 -= 8;
          ++v1418;
          --v1420;
        }
        while ( v1420 );
        for ( ; v1419; --v1419 )
        {
          *(_BYTE *)v1418 = 0;
          v1418 = (_QWORD *)((char *)v1418 + 1);
        }
        *(_DWORD *)v1417 = 10;
        *((_QWORD *)v1417 + 1) = 0LL;
        *((_DWORD *)v1417 + 4) = 0;
        v1421 = *((_QWORD *)v1157 + 186);
        for ( i46 = v1421; ; LODWORD(v1421) = i46 ^ v1421 )
        {
          i46 >>= 31;
          if ( !i46 )
            break;
        }
        v85 = (unsigned __int64)v1157;
        *((_DWORD *)v1417 + 5) = v1421 & 0x7FFFFFFF;
        v1423 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x360);
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x238) = v1423;
        *(_DWORD *)(v1423 + 24) = 1;
        *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x238) + 28LL) = v1401;
        v1393 = *(int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x238);
        v1424 = v1393 + 12;
        if ( !*(_DWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) + 16LL) )
          goto LABEL_2067;
        while ( 1 )
        {
          v1425 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10)
                + ((__int64)*(int *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) + 4LL * v1384) >> 4);
          if ( !(*((__int64 (__fastcall **)(__int64, unsigned int *, _QWORD, __int64))v1157 + 72))(
                  v1425,
                  v1 + 188,
                  0LL,
                  1LL) )
          {
            v1426 = (unsigned __int8 *)v1425;
            *((_DWORD *)v1157 + 376) += 4;
            v1427 = (const char *)v1425;
            v1428 = *((_QWORD *)v1157 + 186);
            if ( v1425 < (unsigned __int64)(v1425 + 4) )
            {
              do
              {
                _mm_prefetch(v1427, 0);
                v1427 += 64;
              }
              while ( (unsigned __int64)v1427 < v1425 + 4 );
            }
            LODWORD(v1263) = 4;
            do
            {
              v1429 = *v1426++;
              v1428 = __ROL8__(v1429 ^ v1428, *((_DWORD *)v1157 + 371));
              v124 = (_DWORD)v1263 == 1;
              v1263 = (unsigned int)(v1263 - 1);
            }
            while ( !v124 );
            for ( i47 = v1428; ; LODWORD(v1428) = i47 ^ v1428 )
            {
              i47 >>= 31;
              if ( !i47 )
                break;
            }
            *v1424 ^= (v1428 ^ *v1424) & 0x7FFFFFFF;
            v1424[1] = 4;
            *((_QWORD *)v1424 + 1) = v1425;
            v1424 += 4;
            if ( !--v1401 )
              break;
          }
          v1263 = 1LL;
          if ( ++v1384 >= *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) + 16LL) )
          {
            v1393 = *(int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x238);
            goto LABEL_2067;
          }
        }
LABEL_2126:
        v1416 = 0;
      }
      else
      {
        v1416 = -1073741267;
      }
      v1157 = (_BYTE *)v85;
      if ( v1416 < 0 )
        goto LABEL_2151;
      *(_DWORD *)(v85 + 1704) = 7;
    }
    v1431 = 0;
    goto LABEL_2130;
  }
LABEL_2680:
  if ( (*(_DWORD *)(v85 + 1752) & 0x2000000) != 0 )
  {
    v1780 = *(_QWORD *)(v85 + 1760);
    if ( (*(unsigned int (__fastcall **)(__int64))(v85 + 880))(v1780) && !*(_DWORD *)(v85 + 1616) )
    {
      *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v85 + 1632) = 0LL;
      *(_QWORD *)(v85 + 1640) = 272LL;
      *(_QWORD *)(v85 + 1648) = 0LL;
      *(_DWORD *)(v85 + 1616) = 1;
    }
    (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(), unsigned __int64, _QWORD))(v85 + 872))(
      v1780,
      sub_140253254,
      v85,
      0LL);
  }
  if ( (*(_DWORD *)(v85 + 1752) & 0x40000) != 0 )
  {
    v1781 = __rdtsc();
    v1782 = (__ROR8__(v1781, 3) ^ v1781) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x508) = *((_QWORD *)&v1782 + 1);
    if ( ((unsigned __int64)v1782 ^ *((_QWORD *)&v1782 + 1)) % 0xA < 2 && !*(_DWORD *)(v85 + 1616) )
    {
      *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v85 + 1632) = 0LL;
      *(_QWORD *)(v85 + 1640) = 264LL;
      *(_QWORD *)(v85 + 1648) = 0LL;
      *(_DWORD *)(v85 + 1616) = 1;
    }
  }
  if ( (*(_DWORD *)(v85 + 1752) & 0x8000) != 0 || !*(_DWORD *)(v85 + 1616) )
  {
    v1783 = *(unsigned int *)(v85 + 1896);
    if ( (_DWORD)v1783 )
    {
      v1784 = (int *)(v85 + v1783);
      v1785 = *(_QWORD **)(v85 + v1783 + 8);
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v85 + v1783;
      if ( v1785 )
      {
        v1786 = (unsigned int)v1784[4];
        v1787 = (const char *)v1785;
        *(_DWORD *)(v85 + 1504) += v1786;
        v1788 = *(_DWORD *)(v85 + 1484);
        v1789 = *(_QWORD *)(v85 + 1488);
        if ( v1785 < (_QWORD *)((char *)v1785 + v1786) )
        {
          do
          {
            _mm_prefetch(v1787, 0);
            v1787 += 64;
          }
          while ( v1787 < (const char *)v1785 + v1786 );
        }
        if ( (unsigned int)v1786 >= 8 )
        {
          v1790 = v1786 >> 3;
          do
          {
            v1789 = __ROL8__(*v1785++ ^ v1789, v1788);
            v1786 = (unsigned int)(v1786 - 8);
            --v1790;
          }
          while ( v1790 );
        }
        if ( (_DWORD)v1786 )
        {
          do
          {
            v1791 = *(unsigned __int8 *)v1785;
            v1785 = (_QWORD *)((char *)v1785 + 1);
            v1789 = __ROL8__(v1791 ^ v1789, v1788);
            v124 = (_DWORD)v1786 == 1;
            v1786 = (unsigned int)(v1786 - 1);
          }
          while ( !v124 );
        }
        for ( i48 = v1789; ; v1789 = (unsigned int)i48 ^ (unsigned int)v1789 )
        {
          i48 >>= 31;
          if ( !i48 )
            break;
        }
        v1793 = (unsigned int)v1784[5];
        LODWORD(v1789) = v1789 & 0x7FFFFFFF;
        if ( (_DWORD)v1789 != (_DWORD)v1793 )
        {
          if ( !*(_DWORD *)(v85 + 1616) )
            *(_QWORD *)(*(_QWORD *)(v85 + 1240) + 24LL) = v1793 ^ (unsigned int)v1789;
          v1794 = *((_QWORD *)v1784 + 1);
          if ( !*(_DWORD *)(v85 + 1616) )
          {
            *(_QWORD *)(v85 + 1624) = v85 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v85 + 1632) = (char *)v1784 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v85 + 1640) = *v1784;
            *(_QWORD *)(v85 + 1648) = v1794;
            *(_DWORD *)(v85 + 1616) = 1;
          }
        }
        (*(void (__fastcall **)(_QWORD, unsigned __int64, _QWORD *, unsigned __int64))(v85 + 232))(
          *((_QWORD *)v1784 + 3),
          v1789,
          v1785,
          v1786);
        *((_QWORD *)v1784 + 1) = 0LL;
        v1784[4] = 0;
        v1795 = *(_QWORD *)(v85 + 1488);
        for ( i49 = v1795; ; LODWORD(v1795) = i49 ^ v1795 )
        {
          i49 >>= 31;
          if ( !i49 )
            break;
        }
        v1784[5] = v1795 & 0x7FFFFFFF;
      }
      v1797 = __rdtsc();
      v1798 = (__ROR8__(v1797, 3) ^ v1797) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x510) = *((_QWORD *)&v1798 + 1);
      if ( ((unsigned __int64)v1798 ^ *((_QWORD *)&v1798 + 1)) == 3
                                                                * (((unsigned __int64)v1798 ^ *((_QWORD *)&v1798 + 1))
                                                                 / 3) )
      {
        v1799 = (__int64 *)(v1784 + 6);
        v1800 = *(unsigned int *)(v85 + 1480);
        v1801 = (*(_DWORD *)(v85 + 1752) & 0x10000000) == 0;
        v1802 = __rdtsc();
        v1803 = __ROR8__(v1802, 3);
        v1804 = (v1803 ^ v1802) * (unsigned __int128)0x7010008004002001uLL;
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x518) = *((_QWORD *)&v1804 + 1);
        v1805 = (WORD4(v1804) ^ (unsigned __int16)(8193 * (v1803 ^ v1802))) & 0x7FF;
        v1806 = __rdtsc();
        v1807 = (__ROR8__(v1806, 3) ^ v1806) * (unsigned __int128)0x7010008004002001uLL;
        *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x520) = *((_QWORD *)&v1807 + 1);
        v1808 = (*((_QWORD *)&v1807 + 1) ^ (unsigned __int64)v1807) % (unsigned int)(v1805 + 1);
        v1809 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v85 + 224))(
                  !v1801 ? 0x200 : 0,
                  (unsigned int)(v1805 + 1944),
                  v1800);
        v1810 = v1809;
        if ( !v1809 )
        {
          ++*(_DWORD *)(v85 + 1880);
          goto LABEL_2715;
        }
        v1816 = v1808;
        v1817 = (_QWORD *)v1809;
        if ( (unsigned int)v1808 >= 8 )
        {
          v1818 = (unsigned __int64)(unsigned int)v1808 >> 3;
          do
          {
            v1816 -= 8;
            v1819 = __rdtsc();
            v1820 = (__ROR8__(v1819, 3) ^ v1819) * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x528) = *((_QWORD *)&v1820 + 1);
            *v1817++ = v1820 ^ *((_QWORD *)&v1820 + 1);
            --v1818;
          }
          while ( v1818 );
          v1784 = *(int **)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
        }
        if ( v1816 )
        {
          v1821 = __rdtsc();
          v1822 = __ROR8__(v1821, 3) ^ v1821;
          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x530) = (v1822
                                                                                  * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v1823 = (0x7010008004002001LL * v1822) ^ ((v1822 * (unsigned __int128)0x7010008004002001uLL) >> 64);
          do
          {
            *(_BYTE *)v1817 = v1823;
            v1817 = (_QWORD *)((char *)v1817 + 1);
            v1823 >>= 8;
            --v1816;
          }
          while ( v1816 );
        }
        v1824 = v1805 - v1808;
        v1825 = v1810 + (unsigned int)v1808;
        v1826 = (_QWORD *)(v1825 + 1944);
        if ( v1824 >= 8 )
        {
          v1827 = (unsigned __int64)v1824 >> 3;
          do
          {
            v1824 -= 8;
            v1828 = __rdtsc();
            v1829 = (__ROR8__(v1828, 3) ^ v1828) * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x538) = *((_QWORD *)&v1829 + 1);
            *v1826++ = v1829 ^ *((_QWORD *)&v1829 + 1);
            --v1827;
          }
          while ( v1827 );
        }
        if ( v1824 )
        {
          v1830 = __rdtsc();
          v1831 = __ROR8__(v1830, 3) ^ v1830;
          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x540) = (v1831
                                                                                  * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v1832 = (0x7010008004002001LL * v1831) ^ ((v1831 * (unsigned __int128)0x7010008004002001uLL) >> 64);
          do
          {
            *(_BYTE *)v1826 = v1832;
            v1826 = (_QWORD *)((char *)v1826 + 1);
            v1832 >>= 8;
            --v1824;
          }
          while ( v1824 );
        }
        if ( v1799 )
          *v1799 = v1810;
        if ( v1825 )
        {
          *((_QWORD *)v1784 + 1) = v1825;
          v1784[4] = 1944;
          v1833 = 1944;
          v1834 = (char *)v85;
          v1835 = (_QWORD *)(v1810 + (unsigned int)v1808);
          v1836 = 243LL;
          do
          {
            v1833 -= 8;
            *v1835 = *(_QWORD *)v1834;
            v1834 += 8;
            ++v1835;
            --v1836;
          }
          while ( v1836 );
          for ( ; v1833; --v1833 )
          {
            v1837 = *v1834++;
            *(_BYTE *)v1835 = v1837;
            v1835 = (_QWORD *)((char *)v1835 + 1);
          }
          *(_DWORD *)(v1825 + 1752) |= 0x80000u;
          *(_DWORD *)(v1825 + 1436) = 1944;
          *(_DWORD *)(v1825 + 1472) = 1944;
          v1838 = *(_DWORD *)(v1825 + 1752) & 0xFFFFFFFD;
          *(_DWORD *)(v1825 + 1752) = v1838;
          if ( (v1838 & 2) != 0 )
            v1839 = *(_DWORD *)(v1825 + 1436);
          else
            v1839 = *(_DWORD *)(v1825 + 1472);
          *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = (v1838 >> 19) & 1;
          *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xAC) = (v1838 >> 9) & 1;
          v1840 = (v1838 >> 8) & 1;
          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = *(_QWORD *)(v1825 + 1080);
          v1841 = (unsigned int)(v1839 - 200) >> 3;
          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = *(_QWORD *)(v1825 + 1288);
          *(_DWORD *)(v1825 + 196) = v1841;
          v1842 = (_QWORD *)(v1825 + 1360);
          v1843 = v1 + 494;
          v1844 = __rdtsc();
          v1845 = 32;
          v1846 = (__ROR8__(v1844, 3) ^ v1844) * (unsigned __int128)0x7010008004002001uLL;
          v1847 = (char *)(v1825 + 1360);
          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x548) = *((_QWORD *)&v1846 + 1);
          v1848 = v1846 ^ *((_QWORD *)&v1846 + 1);
          v1849 = 4LL;
          *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = *(_QWORD *)(v1825 + 1392);
          *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x6C) = *(_DWORD *)(v1825 + 1504);
          do
          {
            v1845 -= 8;
            *v1843 = *(_QWORD *)v1847;
            v1847 += 8;
            ++v1843;
            --v1849;
          }
          while ( v1849 );
          for ( ; v1845; --v1845 )
          {
            v1850 = *v1847++;
            *(_BYTE *)v1843 = v1850;
            v1843 = (_QWORD *)((char *)v1843 + 1);
          }
          v1851 = (_QWORD *)(v1825 + 1360);
          *(_QWORD *)(v1825 + 1392) = 0LL;
          v1852 = 4LL;
          *(_DWORD *)(v1825 + 1504) = 0;
          v1853 = 32;
          do
          {
            *v1851 = 0LL;
            v1853 -= 8;
            ++v1851;
            --v1852;
          }
          while ( v1852 );
          for ( ; v1853; --v1853 )
          {
            *(_BYTE *)v1851 = 0;
            v1851 = (_QWORD *)((char *)v1851 + 1);
          }
          v1854 = (_QWORD *)v1825;
          *(_DWORD *)(v1825 + 1504) += *(_DWORD *)(v1825 + 1436);
          v1855 = (const char *)v1825;
          v1856 = *(unsigned int *)(v1825 + 1436);
          v1857 = *(_DWORD *)(v1825 + 1484);
          v1858 = *(_QWORD *)(v1825 + 1488);
          if ( v1825 < v1825 + v1856 )
          {
            do
            {
              _mm_prefetch(v1855, 0);
              v1855 += 64;
            }
            while ( (unsigned __int64)v1855 < v1825 + v1856 );
          }
          if ( (unsigned int)v1856 >= 8 )
          {
            v1859 = v1856 >> 3;
            do
            {
              v1858 = __ROL8__(*v1854++ ^ v1858, v1857);
              LODWORD(v1856) = v1856 - 8;
              --v1859;
            }
            while ( v1859 );
          }
          for ( ; (_DWORD)v1856; LODWORD(v1856) = v1856 - 1 )
          {
            v1860 = *(unsigned __int8 *)v1854;
            v1854 = (_QWORD *)((char *)v1854 + 1);
            v1858 = __ROL8__(v1860 ^ v1858, v1857);
          }
          v1861 = (char *)(v1 + 494);
          v1862 = 32;
          *(_QWORD *)(v1825 + 1392) = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
          *(_DWORD *)(v1825 + 1504) += *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x6C);
          v1863 = 4LL;
          do
          {
            v1862 -= 8;
            *v1842 = *(_QWORD *)v1861;
            v1861 += 8;
            ++v1842;
            --v1863;
          }
          while ( v1863 );
          v1864 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
          if ( v1862 )
          {
            do
            {
              v1865 = *v1861++;
              *(_BYTE *)v1842 = v1865;
              v1842 = (_QWORD *)((char *)v1842 + 1);
              --v1862;
            }
            while ( v1862 );
            LODWORD(v1863) = 0;
          }
          *(_QWORD *)(v1825 + 1392) = v1858;
          if ( (*(_DWORD *)(v1825 + 1752) & 0x40000000) == 0 )
          {
            v1866 = (_QWORD *)v1825;
            v1867 = v1863;
            do
            {
              *v1866 ^= v1848;
              ++v1867;
              ++v1866;
            }
            while ( (unsigned __int64)v1867 < 0x19 );
            if ( v1841 )
            {
              v1868 = &v1866[v1841 - 1];
              do
              {
                *v1868 ^= v1848;
                v1848 = __ROR8__(v1848, v1841);
                --v1868;
                --v1841;
              }
              while ( v1841 );
            }
            if ( *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) )
            {
              v1869 = __rdtsc();
              v1870 = (__ROR8__(v1869, 3) ^ v1869) * (unsigned __int128)0x7010008004002001uLL;
              *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x550) = *((_QWORD *)&v1870 + 1);
              if ( ((unsigned __int64)v1870 ^ *((_QWORD *)&v1870 + 1)) != 3
                                                                        * (((unsigned __int64)v1870 ^ *((_QWORD *)&v1870 + 1))
                                                                         / 3) )
                goto LABEL_2783;
            }
            else if ( v1840 )
            {
              goto LABEL_2783;
            }
            v1871 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
            *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x108) = 3;
            *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x100) = 0;
            *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x101) = 12;
            *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x106) = 4;
            v1872 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
            v1873 = 0;
            v1874 = 0LL;
            *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x103) = 1;
            v1875 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xAC);
            v1876 = (__int64 *)v1825;
            *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x105) = 2;
            *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x109) = 5;
            *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10C) = 6;
            *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x107) = 7;
            *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10D) = 8;
            *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10A) = 9;
            *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10E) = 10;
            *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x104) = 11;
            *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10F) = 13;
            *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10B) = 14;
            *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x102) = 15;
            v1877 = __ROR8__(v1825, v1825);
            do
            {
              v1878 = *v1876;
              v1879 = 16LL;
              do
              {
                v1878 = __ROR8__(
                          *(unsigned __int8 *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL)
                                             + 0x100
                                             + (*(_BYTE *)v1876 & 0xF)) | v1878 & 0xFFFFFFFFFFFFFFF0uLL,
                          4);
                *v1876 = v1878;
                --v1879;
              }
              while ( v1879 );
              v1880 = v1878 - v1874;
              *v1876 = v1880;
              if ( v1875 )
                v1881 = v1880 ^ v1877;
              else
                v1881 = v1872 ^ __ROR8__(v1877 ^ _byteswap_uint64(v1880 ^ v1871), v1872);
              *v1876 = v1881;
              v1882 = v1873 * (200 - v1873);
              ++v1876;
              ++v1873;
              v1874 += v1825;
              v1877 = v1825 + __ROL8__(__ROR8__(v1882, ~(_BYTE)v1881) ^ v1877, v1881);
            }
            while ( v1873 < 0x19 );
            v85 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
            v1864 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
          }
LABEL_2783:
          v1883 = *(_QWORD **)(v1864 + 8);
          v1884 = *(unsigned int *)(v1864 + 16);
          v1885 = (const char *)v1883;
          *(_DWORD *)(v85 + 1504) += v1884;
          v1886 = *(_DWORD *)(v85 + 1484);
          v1887 = *(_QWORD *)(v85 + 1488);
          if ( v1883 < (_QWORD *)((char *)v1883 + v1884) )
          {
            do
            {
              _mm_prefetch(v1885, 0);
              v1885 += 64;
            }
            while ( v1885 < (const char *)v1883 + v1884 );
          }
          if ( (unsigned int)v1884 >= 8 )
          {
            v1888 = v1884 >> 3;
            do
            {
              v1887 = __ROL8__(*v1883++ ^ v1887, v1886);
              LODWORD(v1884) = v1884 - 8;
              --v1888;
            }
            while ( v1888 );
          }
          for ( ; (_DWORD)v1884; LODWORD(v1884) = v1884 - 1 )
          {
            v1889 = *(unsigned __int8 *)v1883;
            v1883 = (_QWORD *)((char *)v1883 + 1);
            v1887 = __ROL8__(v1889 ^ v1887, v1886);
          }
          for ( i50 = v1887; ; LODWORD(v1887) = i50 ^ v1887 )
          {
            i50 >>= 31;
            if ( !i50 )
              break;
          }
          *(_DWORD *)(v1864 + 20) = v1887 & 0x7FFFFFFF;
        }
      }
    }
  }
LABEL_2715:
  v1811 = *(_DWORD *)(v85 + 1752);
  *v1 = 0;
  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = 0LL;
  if ( (v1811 & 0x40000000) != 0 )
    goto LABEL_2857;
  v1812 = a1;
  if ( v85 != a1 )
  {
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = *(_QWORD *)(v85 + 1408);
    if ( (v1811 & 2) != 0 )
      v1971 = *(_DWORD *)(v85 + 1436);
    else
      v1971 = *(_DWORD *)(v85 + 1472);
    v1972 = (v1811 >> 19) & 1;
    v1973 = (v1811 >> 9) & 1;
    v1974 = (v1811 >> 8) & 1;
    *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v1973;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = *(_QWORD *)(v85 + 1080);
    v1975 = (unsigned int)(v1971 - 200) >> 3;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = *(_QWORD *)(v85 + 1288);
    *(_DWORD *)(v85 + 196) = v1975;
    v1976 = v1 + 518;
    v1977 = __rdtsc();
    v1978 = (__ROR8__(v1977, 3) ^ v1977) * (unsigned __int128)0x7010008004002001uLL;
    v1979 = (_QWORD *)(v85 + 1360);
    v1980 = *((_QWORD *)&v1978 + 1);
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x568) = *((_QWORD *)&v1978 + 1);
    v1981 = 32;
    v1982 = v1978 ^ v1980;
    v1983 = (char *)(v85 + 1360);
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = *(_QWORD *)(v85 + 1392);
    *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x6C) = *(_DWORD *)(v85 + 1504);
    v1984 = 4LL;
    do
    {
      v1981 -= 8;
      *v1976 = *(_QWORD *)v1983;
      v1983 += 8;
      ++v1976;
      --v1984;
    }
    while ( v1984 );
    for ( ; v1981; --v1981 )
    {
      v1985 = *v1983++;
      *(_BYTE *)v1976 = v1985;
      v1976 = (_QWORD *)((char *)v1976 + 1);
    }
    *(_QWORD *)(v85 + 1392) = 0LL;
    v1986 = 32;
    *(_DWORD *)(v85 + 1504) = 0;
    v1987 = (_QWORD *)(v85 + 1360);
    v1988 = 4LL;
    do
    {
      *v1987 = 0LL;
      v1986 -= 8;
      ++v1987;
      --v1988;
    }
    while ( v1988 );
    for ( ; v1986; --v1986 )
    {
      *(_BYTE *)v1987 = 0;
      v1987 = (_QWORD *)((char *)v1987 + 1);
    }
    v1989 = (_QWORD *)v85;
    *(_DWORD *)(v85 + 1504) += *(_DWORD *)(v85 + 1436);
    v1990 = (const char *)v85;
    v1991 = *(unsigned int *)(v85 + 1436);
    v1992 = *(_DWORD *)(v85 + 1484);
    v1993 = *(_QWORD *)(v85 + 1488);
    if ( v85 < v85 + v1991 )
    {
      do
      {
        _mm_prefetch(v1990, 0);
        v1990 += 64;
      }
      while ( (unsigned __int64)v1990 < v85 + v1991 );
    }
    if ( (unsigned int)v1991 >= 8 )
    {
      v1994 = v1991 >> 3;
      do
      {
        v1993 = __ROL8__(*v1989++ ^ v1993, v1992);
        LODWORD(v1991) = v1991 - 8;
        --v1994;
      }
      while ( v1994 );
    }
    for ( ; (_DWORD)v1991; LODWORD(v1991) = v1991 - 1 )
    {
      v1995 = *(unsigned __int8 *)v1989;
      v1989 = (_QWORD *)((char *)v1989 + 1);
      v1993 = __ROL8__(v1995 ^ v1993, v1992);
    }
    v1996 = (char *)(v1 + 518);
    *(_QWORD *)(v85 + 1392) = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
    v1997 = 4LL;
    *(_DWORD *)(v85 + 1504) += *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x6C);
    v1998 = 32;
    do
    {
      v1998 -= 8;
      *v1979 = *(_QWORD *)v1996;
      v1996 += 8;
      ++v1979;
      --v1997;
    }
    while ( v1997 );
    for ( ; v1998; --v1998 )
    {
      v1999 = *v1996++;
      *(_BYTE *)v1979 = v1999;
      v1979 = (_QWORD *)((char *)v1979 + 1);
    }
    *(_QWORD *)(v85 + 1392) = v1993;
    if ( (*(_DWORD *)(v85 + 1752) & 0x40000000) != 0 )
      goto LABEL_2903;
    v2000 = 0;
    v2001 = (_QWORD *)v85;
    do
    {
      *v2001 ^= v1982;
      ++v2000;
      ++v2001;
    }
    while ( (unsigned __int64)v2000 < 0x19 );
    if ( v1975 )
    {
      v2002 = &v2001[v1975 - 1];
      do
      {
        *v2002 ^= v1982;
        v1982 = __ROR8__(v1982, v1975);
        --v2002;
        --v1975;
      }
      while ( v1975 );
    }
    if ( v1972 )
    {
      v2003 = __rdtsc();
      v2004 = (__ROR8__(v2003, 3) ^ v2003) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x570) = *((_QWORD *)&v2004 + 1);
      if ( ((unsigned __int64)v2004 ^ *((_QWORD *)&v2004 + 1)) != 3
                                                                * (((unsigned __int64)v2004 ^ *((_QWORD *)&v2004 + 1))
                                                                 / 3) )
        goto LABEL_2903;
    }
    else if ( v1974 )
    {
LABEL_2903:
      *v1 = 1;
      goto LABEL_2904;
    }
    v2005 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xE8) = 3;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xE3) = 1;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xE1) = 12;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xE6) = 4;
    v2006 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
    v2007 = (__int64 *)v85;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xE0) = 0;
    v2008 = 0;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xE5) = 2;
    v2009 = 0LL;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xE9) = 5;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xEC) = 6;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xE7) = 7;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xED) = 8;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xEA) = 9;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xEE) = 10;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xE4) = 11;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xEF) = 13;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xEB) = 14;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xE2) = 15;
    v2010 = __ROR8__(v85, v85);
    do
    {
      v2011 = *v2007;
      v2012 = 16LL;
      do
      {
        v2011 = __ROR8__(
                  *(unsigned __int8 *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xE0 + (*(_BYTE *)v2007 & 0xF)) | v2011 & 0xFFFFFFFFFFFFFFF0uLL,
                  4);
        *v2007 = v2011;
        --v2012;
      }
      while ( v2012 );
      v2013 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
      v2014 = v2011 - v2009;
      *v2007 = v2014;
      if ( v2013 )
        v2015 = v2010 ^ v2014;
      else
        v2015 = v2005 ^ __ROR8__(v2010 ^ _byteswap_uint64(v2006 ^ v2014), v2005);
      *v2007 = v2015;
      v2016 = v2015;
      v2009 += v85;
      v2017 = v2008 * (200 - v2008);
      ++v2008;
      v2018 = __ROL8__(__ROR8__(v2017, ~v2016) ^ v2010, *(_DWORD *)v2007++);
      v2010 = v85 + v2018;
    }
    while ( v2008 < 0x19 );
    goto LABEL_2903;
  }
  if ( (v1811 & 0x8000) == 0 && *(_DWORD *)(v85 + 1616)
    || (v1813 = sub_140251E08(a1, *(unsigned int *)(a1 + 1436), *(unsigned int *)(a1 + 1660)), (v85 = v1813) == 0) )
  {
    v1936 = 32;
    *(_DWORD *)(a1 + 196) = 1;
    v1937 = *(_QWORD *)(a1 + 1392);
    v1938 = (_QWORD *)(a1 + 1360);
    v1939 = *(_DWORD *)(a1 + 1504);
    v1940 = v1 + 510;
    v85 = a1;
    v1941 = 32;
    v1942 = (char *)(a1 + 1360);
    v1943 = 4LL;
    do
    {
      v1941 -= 8;
      *v1940 = *(_QWORD *)v1942;
      v1942 += 8;
      ++v1940;
      --v1943;
    }
    while ( v1943 );
    for ( ; v1941; --v1941 )
    {
      v1944 = *v1942++;
      *(_BYTE *)v1940 = v1944;
      v1940 = (_QWORD *)((char *)v1940 + 1);
    }
    *(_QWORD *)(a1 + 1392) = 0LL;
    v1945 = 32;
    *(_DWORD *)(a1 + 1504) = 0;
    v1946 = (_QWORD *)(a1 + 1360);
    v1947 = 4LL;
    do
    {
      *v1946 = 0LL;
      v1945 -= 8;
      ++v1946;
      --v1947;
    }
    while ( v1947 );
    for ( ; v1945; --v1945 )
    {
      *(_BYTE *)v1946 = 0;
      v1946 = (_QWORD *)((char *)v1946 + 1);
    }
    v1948 = (_QWORD *)a1;
    *(_DWORD *)(a1 + 1504) += *(_DWORD *)(a1 + 1436);
    v1949 = (const char *)a1;
    v1950 = *(unsigned int *)(a1 + 1436);
    v1951 = *(_DWORD *)(a1 + 1484);
    v1952 = *(_QWORD *)(a1 + 1488);
    if ( a1 < a1 + v1950 )
    {
      do
      {
        _mm_prefetch(v1949, 0);
        v1949 += 64;
      }
      while ( (unsigned __int64)v1949 < a1 + v1950 );
    }
    if ( (unsigned int)v1950 >= 8 )
    {
      v1953 = v1950 >> 3;
      do
      {
        v1952 = __ROL8__(*v1948++ ^ v1952, v1951);
        LODWORD(v1950) = v1950 - 8;
        --v1953;
      }
      while ( v1953 );
      v1812 = a1;
    }
    if ( (_DWORD)v1950 )
    {
      do
      {
        v1954 = *(unsigned __int8 *)v1948;
        v1948 = (_QWORD *)((char *)v1948 + 1);
        v1952 = __ROL8__(v1954 ^ v1952, v1951);
        LODWORD(v1950) = v1950 - 1;
      }
      while ( (_DWORD)v1950 );
      v1812 = a1;
    }
    *(_QWORD *)(v1812 + 1392) = v1937;
    v1955 = (char *)(v1 + 510);
    *(_DWORD *)(v1812 + 1504) += v1939;
    v1956 = 4LL;
    do
    {
      v1936 -= 8;
      *v1938 = *(_QWORD *)v1955;
      v1955 += 8;
      ++v1938;
      --v1956;
    }
    while ( v1956 );
    for ( ; v1936; --v1936 )
    {
      v1957 = *v1955++;
      *(_BYTE *)v1938 = v1957;
      v1938 = (_QWORD *)((char *)v1938 + 1);
    }
    *(_QWORD *)(v1812 + 1392) = v1952;
LABEL_2857:
    v1958 = *(_DWORD *)(v85 + 1752);
    v1959 = 0LL;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = 0LL;
    if ( (v1958 & 0x40000000) == 0 )
    {
      if ( (v1958 & 0x100) == 0 )
      {
        v1960 = *(_QWORD *)(v85 + 1288);
        v1961 = *(_QWORD *)(v85 + 1080);
        v1962 = (__int64 *)v85;
        v1963 = (v1958 >> 9) & 1;
        *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xD3) = 1;
        *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0) = 0;
        *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8) = 3;
        *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xD5) = 2;
        *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xD1) = 12;
        v1964 = 0;
        *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xD6) = 4;
        *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xD2) = 15;
        v1965 = 0LL;
        *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xD9) = 5;
        v1966 = __ROR8__(v85, v85);
        *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xDC) = 6;
        *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xD7) = 7;
        *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xDD) = 8;
        *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xDA) = 9;
        *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xDE) = 10;
        *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xD4) = 11;
        *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xDF) = 13;
        *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xDB) = 14;
        do
        {
          v1967 = *v1962;
          v1968 = 16LL;
          do
          {
            v1967 = __ROR8__(
                      *(unsigned __int8 *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL)
                                         + 0xD0
                                         + (*(_BYTE *)v1962 & 0xF)) | v1967 & 0xFFFFFFFFFFFFFFF0uLL,
                      4);
            *v1962 = v1967;
            --v1968;
          }
          while ( v1968 );
          v1969 = v1967 - v1965;
          *v1962 = v1969;
          if ( v1963 )
            v1970 = v1966 ^ v1969;
          else
            v1970 = v1960 ^ __ROR8__(v1966 ^ _byteswap_uint64(v1961 ^ v1969), v1960);
          *v1962 = v1970;
          v2021 = v1970;
          v1965 += v85;
          v2022 = v1964 * (200 - v1964);
          ++v1964;
          v2023 = __ROL8__(__ROR8__(v2022, ~v2021) ^ v1966, *(_DWORD *)v1962++);
          v1966 = v85 + v2023;
        }
        while ( v1964 < 0x19 );
        v1959 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
      }
      (*(void (__fastcall **)(unsigned __int64))(v85 + 584))(v85 + 1464);
    }
    goto LABEL_2909;
  }
  v1814 = *(_DWORD *)(v1813 + 1752);
  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = *(_QWORD *)(v1813 + 1408);
  if ( (v1814 & 2) != 0 )
    v1815 = *(_DWORD *)(v1813 + 1436);
  else
    v1815 = *(_DWORD *)(v1813 + 1472);
  v1891 = (v1814 >> 19) & 1;
  v1892 = (v1814 >> 9) & 1;
  v1893 = (v1814 >> 8) & 1;
  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = *(_QWORD *)(v1813 + 1080);
  v1894 = *(_QWORD *)(v1813 + 1288);
  v1895 = (unsigned int)(v1815 - 200) >> 3;
  *(_DWORD *)(v85 + 196) = v1895;
  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x6C) = v1892;
  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v1894;
  v1896 = (_QWORD *)(v85 + 1360);
  v1897 = v1 + 502;
  v1898 = __rdtsc();
  v1899 = (__ROR8__(v1898, 3) ^ v1898) * (unsigned __int128)0x7010008004002001uLL;
  v1900 = (char *)(v85 + 1360);
  v1901 = *((_QWORD *)&v1899 + 1);
  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x558) = *((_QWORD *)&v1899 + 1);
  v1902 = 32;
  v1903 = v1899 ^ v1901;
  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = *(_QWORD *)(v85 + 1392);
  *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = *(_DWORD *)(v85 + 1504);
  v1904 = 4LL;
  do
  {
    v1902 -= 8;
    *v1897 = *(_QWORD *)v1900;
    v1900 += 8;
    ++v1897;
    --v1904;
  }
  while ( v1904 );
  for ( ; v1902; --v1902 )
  {
    v1905 = *v1900++;
    *(_BYTE *)v1897 = v1905;
    v1897 = (_QWORD *)((char *)v1897 + 1);
  }
  v1906 = 32;
  *(_QWORD *)(v85 + 1392) = 0LL;
  *(_DWORD *)(v85 + 1504) = 0;
  v1907 = (_QWORD *)(v85 + 1360);
  v1908 = 4LL;
  do
  {
    *v1907 = 0LL;
    v1906 -= 8;
    ++v1907;
    --v1908;
  }
  while ( v1908 );
  for ( ; v1906; --v1906 )
  {
    *(_BYTE *)v1907 = 0;
    v1907 = (_QWORD *)((char *)v1907 + 1);
  }
  v1909 = (_QWORD *)v85;
  *(_DWORD *)(v85 + 1504) += *(_DWORD *)(v85 + 1436);
  v1910 = (const char *)v85;
  v1911 = *(unsigned int *)(v85 + 1436);
  v1912 = *(_DWORD *)(v85 + 1484);
  v1913 = *(_QWORD *)(v85 + 1488);
  if ( v85 < v85 + v1911 )
  {
    do
    {
      _mm_prefetch(v1910, 0);
      v1910 += 64;
    }
    while ( (unsigned __int64)v1910 < v85 + v1911 );
  }
  if ( (unsigned int)v1911 >= 8 )
  {
    v1914 = v1911 >> 3;
    do
    {
      v1913 = __ROL8__(*v1909++ ^ v1913, v1912);
      LODWORD(v1911) = v1911 - 8;
      --v1914;
    }
    while ( v1914 );
    v1892 = *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x6C);
  }
  for ( ; (_DWORD)v1911; LODWORD(v1911) = v1911 - 1 )
  {
    v1915 = *(unsigned __int8 *)v1909;
    v1909 = (_QWORD *)((char *)v1909 + 1);
    v1913 = __ROL8__(v1915 ^ v1913, v1912);
  }
  v1916 = (char *)(v1 + 502);
  *(_QWORD *)(v85 + 1392) = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
  v1917 = 4LL;
  *(_DWORD *)(v85 + 1504) += *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
  v1918 = 32;
  do
  {
    v1918 -= 8;
    *v1896 = *(_QWORD *)v1916;
    v1916 += 8;
    ++v1896;
    --v1917;
  }
  while ( v1917 );
  for ( ; v1918; --v1918 )
  {
    v1919 = *v1916++;
    *(_BYTE *)v1896 = v1919;
    v1896 = (_QWORD *)((char *)v1896 + 1);
  }
  *(_QWORD *)(v85 + 1392) = v1913;
  if ( (*(_DWORD *)(v85 + 1752) & 0x40000000) == 0 )
  {
    v1920 = (_QWORD *)v85;
    v1921 = 0;
    do
    {
      *v1920 ^= v1903;
      ++v1921;
      ++v1920;
    }
    while ( (unsigned __int64)v1921 < 0x19 );
    if ( v1895 )
    {
      v1922 = &v1920[v1895 - 1];
      do
      {
        *v1922 ^= v1903;
        v1903 = __ROR8__(v1903, v1895);
        --v1922;
        --v1895;
      }
      while ( v1895 );
    }
    if ( v1891 )
    {
      v1923 = __rdtsc();
      v1924 = (__ROR8__(v1923, 3) ^ v1923) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x560) = *((_QWORD *)&v1924 + 1);
      if ( ((unsigned __int64)v1924 ^ *((_QWORD *)&v1924 + 1)) != 3
                                                                * (((unsigned __int64)v1924 ^ *((_QWORD *)&v1924 + 1))
                                                                 / 3) )
        goto LABEL_2834;
    }
    else if ( v1893 )
    {
      goto LABEL_2834;
    }
    v1925 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
    v1926 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xF8) = 3;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xF3) = 1;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xF1) = 12;
    v1927 = (__int64 *)v85;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xF6) = 4;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0) = 0;
    v1928 = 0;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xF5) = 2;
    v1929 = 0LL;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xF9) = 5;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xFC) = 6;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xF7) = 7;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xFD) = 8;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xFA) = 9;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xFE) = 10;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xF4) = 11;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xFF) = 13;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xFB) = 14;
    *(_BYTE *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xF2) = 15;
    v1930 = __ROR8__(v85, v85);
    do
    {
      v1931 = *v1927;
      v1932 = 16LL;
      do
      {
        v1931 = __ROR8__(
                  *(unsigned __int8 *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0 + (*(_BYTE *)v1927 & 0xF)) | v1931 & 0xFFFFFFFFFFFFFFF0uLL,
                  4);
        *v1927 = v1931;
        --v1932;
      }
      while ( v1932 );
      v1933 = v1931 - v1929;
      *v1927 = v1933;
      if ( v1892 )
        v1934 = v1933 ^ v1930;
      else
        v1934 = v1925 ^ __ROR8__(v1930 ^ _byteswap_uint64(v1933 ^ v1926), v1925);
      *v1927 = v1934;
      v1935 = v1928 * (200 - v1928);
      ++v1927;
      ++v1928;
      v1929 += v85;
      v1930 = v85 + __ROL8__(__ROR8__(v1935, ~(_BYTE)v1934) ^ v1930, v1934);
    }
    while ( v1928 < 0x19 );
  }
LABEL_2834:
  *v1 = 1;
LABEL_2904:
  v2019 = __rdtsc();
  v2020 = __ROR8__(v2019, 3) ^ v2019;
  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x578) = (v2020
                                                                          * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v1959 = (0x7010008004002001LL * v2020) ^ ((v2020 * (unsigned __int128)0x7010008004002001uLL) >> 64);
LABEL_2909:
  i51 = a1;
  v2025 = *(_DWORD **)(a1 + 1424);
  if ( (*(_DWORD *)(a1 + 1752) & 0x10000000) != 0 )
  {
    v2026 = __rdtsc();
    v2027 = __ROR8__(v2026, 3);
    v2028 = (v2027 ^ v2026) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x580) = *((_QWORD *)&v2028 + 1);
    v2025 = (_DWORD *)(*(_QWORD *)(a1 + 1304) + 10LL * (((unsigned __int8)(v2027 ^ v2026) ^ BYTE8(v2028)) & 0xF));
  }
  v2029 = 40;
  v2030 = (char *)(a1 + 1616);
  v2031 = (char *)(a1 + 1616);
  v2032 = v1 + 290;
  v2033 = 5LL;
  do
  {
    v2029 -= 8;
    *v2032 = *(_QWORD *)v2031;
    v2031 += 8;
    ++v2032;
    --v2033;
  }
  while ( v2033 );
  for ( ; v2029; --v2029 )
  {
    v2034 = *v2031++;
    *(_BYTE *)v2032 = v2034;
    v2032 = (_QWORD *)((char *)v2032 + 1);
  }
  v2035 = *(_DWORD *)(a1 + 1752);
  if ( (v2035 & 0x8000) == 0 && *(_DWORD *)v2030 )
    goto LABEL_2964;
  if ( (v2035 & 0x40000000) != 0 )
    goto LABEL_3003;
  v2036 = v85 ^ v1959;
  v2037 = (unsigned __int8)(*(_BYTE *)(a1 + 1656) - 1);
  v2038 = __rdtsc();
  v2039 = (__ROR8__(v2038, 3) ^ v2038) * (unsigned __int128)0x7010008004002001uLL;
  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x588) = *((_QWORD *)&v2039 + 1);
  v2040 = v2037 + (*((_QWORD *)&v2039 + 1) ^ (unsigned __int64)v2039) % (unsigned int)(63 - v2037);
  do
  {
    v2041 = __rdtsc();
    v2042 = (__ROR8__(v2041, 3) ^ v2041) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x590) = *((_QWORD *)&v2042 + 1);
    v2043 = v2037 + (*((_QWORD *)&v2042 + 1) ^ (unsigned __int64)v2042) % (unsigned int)(63 - v2037);
  }
  while ( v2043 == v2040 );
  v2044 = *(_QWORD *)(a1 + 1352);
  v2045 = *(_QWORD *)(a1 + 1344);
  v2046 = (v2036 | (1LL << v2040)) & ~(1LL << v2043);
  if ( *(_DWORD *)(a1 + 1660) != 3 )
  {
LABEL_2932:
    *(_BYTE *)v2044 = 19;
    *(_BYTE *)(v2044 + 1) = 1;
    *(_WORD *)(v2044 + 2) = 0;
    *(_QWORD *)(v2044 + 24) = v2025;
    *(_QWORD *)(v2044 + 32) = v2046;
    *(_QWORD *)(v2044 + 56) = 0LL;
    *(_QWORD *)(v2044 + 16) = 0LL;
    goto LABEL_2934;
  }
  v2047 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
  if ( !v2047 )
  {
    i51 = a1;
    goto LABEL_2932;
  }
  v2048 = *(_QWORD *)(a1 + 848);
  *(_BYTE *)v2044 = 19;
  *(_BYTE *)(v2044 + 1) = 1;
  *(_WORD *)(v2044 + 2) = 0;
  *(_QWORD *)(v2044 + 24) = v2048;
  *(_QWORD *)(v2044 + 32) = v2047;
  *(_QWORD *)(v2044 + 56) = 0LL;
  *(_QWORD *)(v2044 + 16) = 0LL;
  *(_QWORD *)(v2044 + 40) = v2046;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 832))(
    *(_QWORD *)(v2047 + 8),
    *(unsigned int *)(v2047 + 16),
    *(_QWORD *)v2047);
  v2049 = *(_QWORD *)v2047;
  v2050 = v2047 ^ __ROL8__(v2047, 17);
  v2051 = 4;
  *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x598) = ((unsigned __int64)v2050
                                                                          * (unsigned __int128)0x5851F42D4C957F2DuLL) >> 64;
  v2052 = (0x5851F42D4C957F2DLL * v2050) ^ (((unsigned __int64)v2050 * (unsigned __int128)0x5851F42D4C957F2DuLL) >> 64);
  v2053 = (_QWORD *)(v2047 + 24);
  v2054 = v2052;
  do
  {
    *v2053 ^= v2054;
    v2054 = __ROL8__(v2054, v2051);
    --v2053;
    --v2051;
  }
  while ( v2051 );
  if ( ((unsigned __int8)v2052 & 0xFu) < 7 )
  {
    v2055 = 6;
    v2056 = v2049 ^ __ROL8__(v2049, 17);
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x5A0) = ((unsigned __int64)v2056
                                                                            * (unsigned __int128)0x5851F42D4C957F2DuLL) >> 64;
    v2057 = ((0x5851F42D4C957F2DLL * v2056) ^ (((unsigned __int64)v2056 * (unsigned __int128)0x5851F42D4C957F2DuLL) >> 64))
          + v2054;
    v2058 = (_QWORD *)(v2049 + 40);
    v2059 = (unsigned int)*(__int16 *)(v2049 + 8);
    do
    {
      *v2058 ^= v2057;
      v2057 = __ROL8__(v2057, v2055);
      --v2058;
      --v2055;
    }
    while ( v2055 );
    v2060 = (unsigned __int64)(v2059 - 48) >> 3;
    if ( (_DWORD)v2060 )
    {
      v2061 = (_QWORD *)(v2049 + 8 * ((int)v2060 + 5LL));
      do
      {
        *v2061 ^= v2057;
        v2057 = __ROL8__(v2057, v2060);
        --v2061;
        LODWORD(v2060) = v2060 - 1;
      }
      while ( (_DWORD)v2060 );
    }
  }
  i51 = a1;
LABEL_2934:
  *(_QWORD *)(v2044 + 64) = v1959;
  if ( (*(_DWORD *)(i51 + 1752) & 0x100) != 0 )
  {
    v2062 = (ULONG_PTR)(v2025 - 18);
    *((_QWORD *)v2025 - 1) = v2044;
    v2063 = 25LL;
    v2064 = __rdtsc();
    v2065 = (__ROR8__(v2064, 3) ^ v2064) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x5A8) = *((_QWORD *)&v2065 + 1);
    v2066 = v2065 ^ *((_QWORD *)&v2065 + 1);
    v2067 = v2025;
    do
    {
      *v2067++ ^= v2066;
      --v2063;
    }
    while ( v2063 );
    *v2025 = 1213280584;
    *(_QWORD *)(v2062 + 32) = v2066;
  }
  else
  {
    v2062 = v2044;
  }
  _InterlockedOr(v2129, 0);
  v2068 = *(_DWORD *)(i51 + 1520);
  if ( v2068 )
  {
    v2069 = v2068 - 1;
    if ( v2069 )
    {
      v2070 = v2069 - 1;
      if ( v2070 )
      {
        v2071 = v2070 - 1;
        if ( v2071 )
        {
          if ( v2071 == 1 )
          {
            v2075 = *(_QWORD *)(i51 + 1832);
            v2076 = *(_QWORD *)(i51 + 1848);
            v2077 = *(_QWORD *)(i51 + 1760);
            v2078 = *(_QWORD *)(i51 + 1840);
            *(_BYTE *)v2075 = 18;
            *(_BYTE *)(v2075 + 2) = 88;
            *(_BYTE *)(v2075 + 80) = 0;
            *(_QWORD *)(v2075 + 8) = v2077;
            *(_QWORD *)(v2075 + 32) = v2078;
            *(_QWORD *)(v2075 + 40) = 0LL;
            *(_QWORD *)(v2075 + 48) = v2076;
            *(_BYTE *)(v2075 + 81) = 0;
            *(_QWORD *)(v2075 + 56) = 0LL;
            *(_BYTE *)(v2075 + 82) = 0;
            if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(i51 + 672))(
                    *(_QWORD *)(i51 + 1832),
                    v2044,
                    0LL,
                    0LL) )
            {
              if ( !*(_DWORD *)v2030 )
              {
                *(_QWORD *)(i51 + 1624) = i51 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(i51 + 1632) = 0LL;
                *(_QWORD *)(i51 + 1640) = 260LL;
                *(_QWORD *)(i51 + 1648) = v2077;
                *(_DWORD *)v2030 = 1;
              }
              v2079 = 40;
              v2080 = v1 + 290;
              v2081 = 5LL;
              do
              {
                v2079 -= 8;
                *v2080 = *(_QWORD *)v2030;
                v2030 += 8;
                ++v2080;
                --v2081;
              }
              while ( v2081 );
              for ( i51 = a1; v2079; --v2079 )
              {
                v2082 = *v2030++;
                *(_BYTE *)v2080 = v2082;
                v2080 = (_QWORD *)((char *)v2080 + 1);
              }
            }
          }
          else
          {
            v2072 = *(_QWORD *)(i51 + 1760);
            *(_QWORD *)(v2072 + 72) = v2062;
            _InterlockedOr(v2129, 0);
            v2073 = __rdtsc();
            v2074 = (__ROR8__(v2073, 3) ^ v2073) * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x5B0) = *((_QWORD *)&v2074 + 1);
            *(_DWORD *)v2072 = (__int64)(((unsigned __int64)v2074 ^ *((_QWORD *)&v2074 + 1)) % 0x5F5E100 + 1200000000)
                             / 10000000;
          }
        }
        else
        {
          v2083 = *(_QWORD *)(i51 + 1760);
          v2084 = *(_QWORD *)(v2083 + 1552);
          if ( v2084 )
          {
            if ( !*(_DWORD *)v2030 )
            {
              *(_QWORD *)(i51 + 1624) = i51 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(i51 + 1632) = 0LL;
              *(_QWORD *)(i51 + 1640) = 260LL;
              *(_QWORD *)(i51 + 1648) = v2084;
              *(_DWORD *)v2030 = 1;
            }
            v2085 = 40;
            v2086 = v1 + 290;
            v2087 = 5LL;
            do
            {
              v2085 -= 8;
              *v2086 = *(_QWORD *)v2030;
              v2030 += 8;
              ++v2086;
              --v2087;
            }
            while ( v2087 );
            for ( i51 = a1; v2085; --v2085 )
            {
              v2088 = *v2030++;
              *(_BYTE *)v2086 = v2088;
              v2086 = (_QWORD *)((char *)v2086 + 1);
            }
          }
          _InterlockedOr(v2129, 0);
          *(_QWORD *)(v2083 + 1552) = v2044;
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(i51 + 1400) + 1584LL) = v2062;
      }
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(i51 + 1400) + 1632LL) = v2062;
    }
  }
  else
  {
    v2089 = __rdtsc();
    v2090 = (__ROR8__(v2089, 3) ^ v2089) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x5B8) = *((_QWORD *)&v2090 + 1);
    v2091 = -1200000000LL - ((unsigned __int64)v2090 ^ *((_QWORD *)&v2090 + 1)) % 0x5F5E100;
    *(_QWORD *)&v2090 = __rdtsc();
    BugCheckParameter4 = v2062;
    v2092 = (__ROR8__(v2090, 3) ^ (unsigned __int64)v2090) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x5C0) = *((_QWORD *)&v2092 + 1);
    (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD, unsigned __int64, ULONG_PTR))(i51 + 448))(
      v2045,
      v2091,
      0LL,
      ((unsigned __int64)v2092 ^ *((_QWORD *)&v2092 + 1)) % 0x2710,
      BugCheckParameter4);
  }
LABEL_2964:
  if ( *(_DWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x488) && (*(_DWORD *)(i51 + 1752) & 0x8000) == 0 )
  {
    v2093 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x4A0);
    v2094 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x4A8);
    v2095 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x498);
    v2096 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x490);
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v2093;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v2094;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v2095;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v2096;
    *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x138) = a1;
    if ( KeGetCurrentIrql() < 2u )
      __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v2098 = KeGetCurrentThread();
    DpcStack = (unsigned __int64)CurrentPrcb->DpcStack;
    if ( !CurrentPrcb->DpcRoutineActive
      || (unsigned __int64)(v1 + 78) > DpcStack
      || (unsigned __int64)(v1 + 78) < DpcStack - 24576 )
    {
      DpcStack = (unsigned __int64)v2098->InitialStack;
    }
    v2100 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x138);
    if ( (*(_DWORD *)(v2100 + 1752) & 0x8000000) == 0 )
    {
      v2101 = __readcr0();
      __writecr0(v2101 & 0xFFFFFFFFFFFEFFFFuLL);
      v2102 = v2100 + 1952;
      v2103 = v2100 + 1952 + 16LL * *(unsigned int *)(v2100 + 1944);
      v2104 = 0;
      v2105 = (_QWORD *)v2103;
      if ( *(_DWORD *)(v2100 + 1948) )
      {
        do
        {
          *(_QWORD *)*v2105 = v2105[1];
          v2106 = __readcr4();
          if ( (v2106 & 0x20080) != 0 )
          {
            __writecr4(v2106 ^ 0x80);
            __writecr4(v2106);
          }
          else
          {
            v2107 = __readcr3();
            __writecr3(v2107);
          }
          v2105 += 2;
          ++v2104;
        }
        while ( v2104 < *(_DWORD *)(v2100 + 1948) );
        v2093 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
        v2096 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
      }
      if ( v2102 < v2103 )
      {
        do
        {
          v2108 = *(unsigned int *)(v2102 + 8);
          v2109 = v2105;
          v2110 = *(char **)v2102;
          v2111 = v2108;
          if ( (unsigned int)v2108 >= 8 )
          {
            v2112 = (unsigned __int64)(unsigned int)v2108 >> 3;
            do
            {
              v2111 -= 8;
              *(_QWORD *)v2110 = *v2109++;
              v2110 += 8;
              --v2112;
            }
            while ( v2112 );
          }
          if ( v2111 )
          {
            v2113 = v2110 - (char *)v2109;
            do
            {
              *((_BYTE *)v2109 + v2113) = *(_BYTE *)v2109;
              v2109 = (_QWORD *)((char *)v2109 + 1);
              --v2111;
            }
            while ( v2111 );
          }
          v2105 = (_QWORD *)((char *)v2105 + v2108);
          v2102 += 16LL;
        }
        while ( v2102 < v2103 );
        v2093 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
        v2096 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
      }
      **(_BYTE **)(v2100 + 512) = -61;
      __writecr0(v2101);
      v2100 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x138);
      v2094 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
      v2095 = *(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 8);
    }
    if ( *(_DWORD *)(v2100 + 1664) && KeGetCurrentIrql() < 2u )
      __writecr8(2uLL);
    v2114 = *(_DWORD *)(v2100 + 1664);
    if ( v2114 )
    {
      v2115 = v2114 - 1;
      if ( v2115 )
      {
        v2116 = v2115 - 1;
        if ( v2116 )
        {
          v2117 = v2116 - 1;
          if ( v2117 )
          {
            v2118 = v2117 - 1;
            if ( v2118 )
            {
              if ( v2118 == 1 )
                _interlockedbittestandset(&KeGetCurrentThread()->Header.Lock, (*(_DWORD *)(v2100 + 1752) >> 10) & 0x1F);
              else
                _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(v2100 + 1280) + 832LL), 1uLL);
            }
            else
            {
              _interlockedbittestandset(
                &KeGetCurrentThread()->ApcState.Process->Header.Lock,
                (*(_DWORD *)(v2100 + 1752) >> 10) & 0x1F);
            }
            goto LABEL_3022;
          }
          v2119 = *(volatile signed __int32 **)(v2100 + 1192);
        }
        else
        {
          v2119 = *(volatile signed __int32 **)(v2100 + 1184);
        }
      }
      else
      {
        v2119 = *(volatile signed __int32 **)(v2100 + 1168);
      }
      _interlockedbittestandset64(v2119, 0LL);
    }
LABEL_3022:
    v2098[1].InitialStack = 0LL;
    v2098[1].ApcState.ApcListHead[1].Flink = 0LL;
    SdbpCheckDll(
      265,
      v2096,
      v2095,
      v2094,
      v2093,
      *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v2133 & 0xFFFFFFFFFFFFFF80uLL) + 0x138) + 320LL),
      DpcStack);
    __debugbreak();
  }
LABEL_3003:
  if ( (*(_DWORD *)(i51 + 1752) & 0x40000000) == 0 && *v1 )
  {
    if ( *(_DWORD *)(i51 + 1660) == 1 )
    {
      *(_QWORD *)(i51 + 1408) -= 8LL;
      *(_DWORD *)(i51 + 1416) = **(_DWORD **)(i51 + 1408);
      v2120 = *(_QWORD *)(i51 + 528);
LABEL_3009:
      *(_QWORD *)(i51 + 232) = v2120;
    }
    else if ( *(_DWORD *)(i51 + 1660) == 3 )
    {
      v2120 = *(_QWORD *)(i51 + 840);
      goto LABEL_3009;
    }
  }
  return i51;
}
