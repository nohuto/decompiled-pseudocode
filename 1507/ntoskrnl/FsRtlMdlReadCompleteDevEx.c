/*
 * XREFs of FsRtlMdlReadCompleteDevEx @ 0x140277000
 * Callers:
 *     KiDecodeMcaFault @ 0x14017B51C (KiDecodeMcaFault.c)
 *     sub_14017D11C @ 0x14017D11C (sub_14017D11C.c)
 *     FsRtlUninitializeSmallMcb @ 0x140286ED0 (FsRtlUninitializeSmallMcb.c)
 * Callees:
 *     sub_14017D2FC @ 0x14017D2FC (sub_14017D2FC.c)
 *     sub_14017D3DC @ 0x14017D3DC (sub_14017D3DC.c)
 *     sub_14017DB84 @ 0x14017DB84 (sub_14017DB84.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     sub_140283BBC @ 0x140283BBC (sub_140283BBC.c)
 *     sub_140285DF0 @ 0x140285DF0 (sub_140285DF0.c)
 *     $$ea @ 0x140286C4C ($$ea.c)
 *     $$114 @ 0x140286DD8 ($$114.c)
 *     KiGetGdtIdt @ 0x140286E30 (KiGetGdtIdt.c)
 *     SdbpCheckDll @ 0x140286E80 (SdbpCheckDll.c)
 *     sub_14079AC8C @ 0x14079AC8C (sub_14079AC8C.c)
 */

__int64 __fastcall FsRtlMdlReadCompleteDevEx(unsigned __int64 a1)
{
  _QWORD *v1; // rbp
  int v2; // eax
  unsigned __int64 v3; // r13
  _QWORD *v4; // rax
  int v5; // ecx
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int64 v8; // rdi
  _QWORD *v9; // r8
  char *v10; // rcx
  _QWORD *v11; // rdx
  int v12; // r9d
  __int64 v13; // r10
  char v14; // al
  int v15; // ecx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  unsigned __int64 v18; // r11
  _QWORD *v19; // r9
  const char *v20; // rax
  __int64 v21; // rdx
  int v22; // r10d
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  char *v25; // rcx
  int v26; // r9d
  __int64 v27; // r10
  char v28; // al
  int v29; // ecx
  __int64 v30; // rax
  unsigned int v31; // esi
  int v32; // r12d
  __int64 v33; // rbx
  __int64 v34; // r13
  __int64 v35; // r10
  __int64 v36; // r15
  void (__fastcall *v37)(_QWORD, _QWORD, _QWORD *); // r9
  _DWORD *v38; // r11
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
  __int64 v53; // rdx
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
  int v74; // r10d
  _QWORD *v75; // r8
  const char *v76; // rax
  __int64 v77; // rdx
  int v78; // ecx
  unsigned __int64 i6; // r9
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  int v83; // ecx
  __int64 v84; // rcx
  __int64 v85; // rsi
  __int64 v86; // rbx
  int v87; // r14d
  _BYTE *v88; // rax
  int v89; // ecx
  unsigned int v90; // ecx
  _DWORD *v91; // r11
  int v92; // eax
  unsigned __int64 v93; // rdx
  __int64 i15; // r13
  unsigned int v95; // r8d
  char *v96; // r12
  __int64 v97; // r10
  int v98; // ecx
  int v99; // ecx
  int v100; // ecx
  int v101; // ecx
  int v102; // ecx
  __int64 v103; // rax
  int v104; // eax
  int v105; // ecx
  __int64 v106; // rcx
  _QWORD *v107; // r8
  unsigned __int64 v108; // r10
  const char *v109; // rax
  unsigned __int64 v110; // rdx
  int v111; // r9d
  unsigned __int64 v112; // rax
  __int64 v113; // rax
  unsigned __int64 k; // rax
  __int64 v115; // rax
  unsigned int v116; // edx
  __int64 v117; // rcx
  __int16 v118; // ax
  __int64 v119; // rax
  __int64 v120; // rcx
  unsigned int j; // r10d
  __int64 v122; // rdx
  unsigned __int64 v123; // r9
  unsigned __int64 v124; // rcx
  int v125; // eax
  __int64 v126; // rcx
  bool v127; // zf
  int v128; // ecx
  bool v129; // zf
  unsigned __int64 v130; // rcx
  unsigned __int128 v131; // rax
  __int64 v132; // rbx
  int v133; // r14d
  _QWORD **v134; // rcx
  _QWORD *v135; // rax
  unsigned int **v136; // rax
  int *v137; // rdi
  unsigned __int64 v138; // rbx
  __int64 v139; // r12
  unsigned __int64 v140; // r15
  __int64 *v141; // rax
  __int64 v142; // r8
  __int64 *v143; // rdx
  unsigned __int64 v144; // rcx
  char v145; // al
  __int64 v146; // rax
  int v147; // r14d
  int v148; // ecx
  int v149; // eax
  __int64 v150; // rbx
  int v151; // r14d
  _QWORD **v152; // rcx
  _QWORD *i; // rax
  __int64 v154; // rcx
  __int64 CurrentIrql; // rbx
  _QWORD **v156; // r8
  _QWORD *v157; // rcx
  _QWORD *v158; // rdx
  int *v159; // r13
  _BYTE *v160; // r12
  unsigned int *v161; // rdx
  unsigned int *v162; // r14
  _QWORD *v163; // r15
  unsigned __int64 v164; // rbx
  _QWORD *v165; // r11
  const char *v166; // rax
  unsigned __int64 v167; // r8
  unsigned int v168; // r10d
  unsigned __int64 v169; // r9
  __int64 v170; // rax
  unsigned __int64 m; // rax
  unsigned int v172; // r8d
  bool v173; // zf
  __int64 v174; // rdx
  __int64 v175; // r14
  __int64 v176; // rax
  __int64 v177; // rbx
  unsigned __int64 v178; // rcx
  __int64 v179; // rax
  unsigned __int64 v180; // rdx
  _QWORD *v181; // r8
  unsigned __int64 v182; // r11
  const char *v183; // rax
  unsigned __int64 v184; // rdx
  int v185; // r10d
  __int64 v186; // rax
  unsigned __int64 jj; // rax
  unsigned int v188; // edx
  __int64 v189; // rcx
  unsigned int v190; // r8d
  unsigned int v191; // r8d
  __int64 *v192; // r10
  __int64 v193; // rcx
  __int64 v194; // rax
  __int64 v195; // rdx
  __int64 v196; // rax
  __int64 v197; // rcx
  _QWORD *v198; // r8
  unsigned __int64 v199; // r10
  const char *v200; // rax
  unsigned __int64 v201; // rdx
  unsigned __int64 v202; // rax
  __int64 v203; // rax
  unsigned __int64 n; // rax
  __int64 v205; // rax
  unsigned int v206; // edx
  __int64 v207; // rcx
  __int64 v208; // r15
  unsigned __int64 v209; // rcx
  __int64 v210; // r8
  int *v211; // rdi
  _DWORD *v212; // r13
  unsigned int *v213; // r11
  unsigned __int64 v214; // rdx
  int *v215; // r14
  unsigned int *v216; // r12
  _QWORD *v217; // rbx
  _QWORD *v218; // r10
  const char *v219; // rax
  unsigned __int64 v220; // rdx
  int v221; // r8d
  unsigned __int64 v222; // rax
  __int64 v223; // rax
  unsigned __int64 ii; // rax
  bool v225; // zf
  __int64 v226; // rcx
  unsigned __int64 v227; // rbx
  unsigned __int8 v228; // r13
  __int64 v229; // rdx
  unsigned int *v230; // rax
  __int64 v231; // r14
  BOOL v232; // r12d
  unsigned __int64 v233; // r15
  __int64 v234; // r8
  __int64 *v235; // r9
  __int64 *v236; // r10
  __int64 v237; // rcx
  __int64 v238; // rax
  bool v239; // zf
  __int64 v240; // rax
  int *v241; // rcx
  _QWORD *v242; // r8
  unsigned __int64 v243; // r11
  const char *v244; // rax
  unsigned __int64 v245; // rdx
  int v246; // r10d
  __int64 v247; // rax
  unsigned __int64 kk; // rax
  __int64 v249; // rax
  unsigned int v250; // edx
  __int64 v251; // rcx
  char *v252; // rax
  unsigned __int64 v253; // r11
  __int16 v254; // ax
  __int64 v255; // rax
  __int64 v256; // rax
  unsigned int v257; // ebx
  __int64 v258; // rax
  unsigned int v259; // r13d
  unsigned __int64 v260; // r10
  unsigned __int8 v261; // dl
  unsigned __int64 v262; // r11
  __int64 v263; // r15
  _QWORD *v264; // r8
  unsigned __int64 v265; // r10
  const char *v266; // rax
  unsigned __int64 v267; // rdx
  int v268; // r9d
  unsigned __int64 v269; // rax
  __int64 v270; // rax
  unsigned __int64 i13; // rax
  unsigned int v272; // r11d
  const char *v273; // r8
  unsigned __int8 v274; // dl
  unsigned __int64 v275; // rbx
  unsigned __int64 v276; // r14
  unsigned __int64 v277; // rcx
  const char *v278; // rax
  const char *v279; // rcx
  unsigned __int64 v280; // rdx
  unsigned __int64 v281; // rax
  __int64 v282; // rax
  unsigned __int64 i14; // rax
  __int64 v284; // rax
  _QWORD *v285; // rcx
  int v286; // edx
  __int64 v287; // r8
  char v288; // al
  __int64 v289; // rax
  _QWORD *v290; // r8
  const char *v291; // rax
  unsigned __int64 v292; // rdx
  int v293; // r10d
  unsigned __int64 v294; // r9
  __int64 v295; // rax
  unsigned __int64 i11; // rax
  __int64 v297; // rax
  unsigned int v298; // edx
  __int64 v299; // rcx
  __int64 v300; // rax
  unsigned int *v301; // r11
  _QWORD *v302; // r10
  unsigned int *v303; // rcx
  const char *v304; // rax
  unsigned __int64 v305; // rdx
  int v306; // r8d
  unsigned __int64 v307; // rax
  __int64 v308; // rax
  unsigned __int64 i12; // rax
  __int64 v310; // rax
  unsigned int v311; // edx
  __int64 v312; // r12
  int v313; // r14d
  _QWORD *v314; // r15
  __int64 v315; // rbx
  _QWORD **v316; // rdx
  _QWORD *v317; // rcx
  _QWORD **v318; // r9
  _QWORD *v319; // rdx
  int *v320; // rdi
  _QWORD *v321; // r8
  _QWORD *v322; // rax
  __int64 v323; // rcx
  __int64 v324; // r15
  _QWORD *v325; // r12
  __int64 v326; // rbx
  _QWORD **v327; // rcx
  _QWORD *v328; // rax
  _QWORD **v329; // r9
  _QWORD *v330; // r8
  int *v331; // rdi
  __int64 v332; // rdx
  unsigned int *v333; // rbx
  _QWORD **v334; // r12
  __int64 v335; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v337; // rdx
  __int64 v338; // r13
  _QWORD *v339; // rax
  unsigned __int64 v340; // rcx
  __int64 v341; // rax
  unsigned __int128 v342; // rt2
  int v343; // ebx
  __int64 (__fastcall *v344)(__int64, _QWORD, _QWORD); // r9
  unsigned __int64 v345; // rcx
  unsigned __int128 v346; // rax
  unsigned __int64 v347; // r14
  __int64 v348; // rax
  unsigned __int64 v349; // rdx
  __int64 v350; // r11
  int v351; // r10d
  unsigned __int64 *v352; // r9
  unsigned __int64 v353; // r8
  unsigned __int64 v354; // rcx
  unsigned __int128 v355; // rax
  unsigned __int64 v356; // rcx
  unsigned __int64 v357; // rcx
  unsigned int v358; // ebx
  unsigned __int64 *v359; // r8
  unsigned __int64 v360; // r9
  unsigned __int64 v361; // rcx
  unsigned __int128 v362; // rax
  __int64 v363; // r9
  unsigned __int64 v364; // rcx
  unsigned __int128 v365; // rax
  __int64 v366; // r15
  _QWORD *v367; // rbx
  unsigned int v368; // edi
  __int64 v369; // r14
  unsigned int v370; // r14d
  unsigned __int64 v371; // r12
  unsigned __int64 v372; // r13
  int *v373; // rdi
  __int64 v374; // rbx
  unsigned __int64 v375; // rcx
  unsigned __int128 v376; // rax
  int v377; // ecx
  int v378; // ecx
  int v379; // ecx
  int v380; // ecx
  __int64 v381; // r15
  char *v382; // rdi
  char *v383; // rbx
  int v384; // r12d
  __int64 v385; // r14
  _QWORD *v386; // rcx
  int v387; // edx
  __int64 v388; // r8
  char v389; // al
  __int64 v390; // rax
  __int64 v391; // rax
  _BYTE *v392; // r14
  __int64 *v393; // rax
  __int64 v394; // rbx
  __int64 v395; // rax
  __int64 v396; // rax
  __int64 v397; // rax
  __int64 v398; // rax
  __int64 v399; // rdx
  __int64 v400; // r12
  int v401; // ecx
  __int64 v402; // r14
  _BYTE *v403; // rax
  int v404; // r15d
  int v405; // ecx
  unsigned int v406; // ebx
  unsigned int v407; // ecx
  __int64 v408; // r11
  unsigned int v409; // r10d
  __int64 v410; // r8
  __int64 v411; // r9
  int v412; // ecx
  int v413; // ecx
  int v414; // ecx
  int v415; // ecx
  int v416; // ecx
  __int64 v417; // rax
  int v418; // eax
  int v419; // eax
  int v420; // eax
  int v421; // r14d
  unsigned __int64 v422; // rbx
  int v423; // eax
  __int64 v424; // rcx
  __int64 v425; // rax
  __int64 v426; // r15
  int v427; // r8d
  unsigned __int64 v428; // r12
  int v429; // ecx
  int v430; // r14d
  __int64 v431; // rdx
  __int64 v432; // rcx
  __int64 v433; // rax
  __int64 v434; // rax
  __int64 v435; // r13
  int v436; // edx
  unsigned int v437; // ecx
  __int64 v438; // r10
  _QWORD *v439; // rax
  __int64 v440; // r8
  unsigned __int64 v441; // rdx
  int v442; // ebx
  void (__fastcall *v443)(__int64, _QWORD); // r9
  _BYTE *v444; // rbx
  _QWORD *v445; // rax
  int v446; // ecx
  __int64 v447; // rdx
  _QWORD *v448; // r15
  _QWORD *v449; // r9
  const char *v450; // rax
  unsigned __int64 v451; // rdx
  __int64 v452; // r8
  unsigned __int64 v453; // rax
  __int64 v454; // rax
  unsigned __int64 nn; // rax
  int v456; // r14d
  __int64 v457; // r15
  unsigned __int64 v458; // rbx
  __int64 v459; // rcx
  unsigned __int8 v460; // r12
  unsigned __int64 v461; // rcx
  int v462; // ecx
  _QWORD *v463; // rax
  __int64 v464; // rdx
  unsigned int v465; // edx
  _QWORD *v466; // rax
  unsigned __int64 v467; // rcx
  __int64 v468; // rax
  unsigned int *v469; // r12
  _DWORD *v470; // rdx
  __int64 v471; // r8
  __int64 v472; // rcx
  _DWORD *v473; // rbx
  int v474; // r15d
  __int16 v475; // ax
  int v476; // r10d
  char *v477; // r8
  signed __int64 v478; // r9
  __int64 v479; // rdx
  __int64 v480; // rax
  __int64 *v481; // r9
  unsigned int v482; // r8d
  __int64 *v483; // r10
  __int64 v484; // rcx
  __int64 v485; // rax
  __int64 v486; // rdx
  __int64 v487; // rax
  char *v488; // r8
  signed __int64 v489; // r9
  int v490; // r10d
  __int64 v491; // rdx
  __int64 v492; // rax
  char *v493; // r8
  signed __int64 v494; // r9
  int v495; // r10d
  __int64 v496; // rdx
  __int64 v497; // rax
  unsigned int v498; // ecx
  _DWORD *v499; // rdx
  unsigned int v500; // r14d
  unsigned int v501; // eax
  unsigned int v502; // ecx
  unsigned int v503; // ecx
  __int64 v504; // rax
  unsigned int v505; // r11d
  const char *v506; // r8
  _DWORD *v507; // rax
  const char *v508; // rax
  const char *v509; // rcx
  unsigned __int64 v510; // rdx
  unsigned int v511; // r10d
  unsigned __int64 v512; // r9
  __int64 v513; // rax
  unsigned __int64 i1; // rax
  __int64 v515; // rdx
  int v516; // r8d
  __int64 v517; // rcx
  __int64 v518; // rax
  __int64 v519; // rdx
  int v520; // ecx
  __int64 v521; // rax
  __int64 v522; // rdx
  int v523; // ecx
  __int64 v524; // rdx
  int v525; // eax
  int v526; // ecx
  __int64 v527; // r15
  int v528; // r8d
  __int64 v529; // rdx
  __int64 v530; // rcx
  __int64 v531; // rax
  __int64 v532; // rax
  __int64 v533; // rbx
  int v534; // edx
  unsigned int v535; // ecx
  __int64 v536; // r10
  __int64 v537; // rdx
  unsigned __int64 v538; // rax
  int v539; // r14d
  void (__fastcall *v540)(__int64, __int64, _QWORD, void (__fastcall *)(_QWORD, _QWORD, _QWORD)); // r8
  void (__fastcall *v541)(_QWORD, _QWORD, _QWORD); // r9
  __int64 v542; // r14
  int v543; // edi
  _QWORD **v544; // r13
  __int64 v545; // r10
  unsigned __int64 v546; // r12
  int v547; // ecx
  _QWORD *v548; // r15
  _QWORD *v549; // rax
  __int64 v550; // rdx
  const char *v551; // rax
  unsigned __int64 v552; // rdx
  int v553; // r8d
  unsigned __int64 v554; // rax
  __int64 v555; // rax
  unsigned __int64 i2; // rax
  int v557; // r13d
  int *v558; // rcx
  int v559; // r14d
  __int64 v560; // r15
  __int64 v561; // rcx
  __int64 v562; // rdx
  __int64 v563; // rax
  __int64 v564; // rax
  __int64 v565; // r12
  int v566; // edx
  unsigned int v567; // ecx
  __int64 v568; // r10
  __int64 v569; // rdx
  unsigned __int64 v570; // rax
  int v571; // ebx
  void (__fastcall *v572)(__int64, __int64, _QWORD, void (__fastcall *)(_QWORD, _QWORD, _QWORD)); // r8
  void (__fastcall *v573)(_QWORD, _QWORD, _QWORD); // r9
  __int64 v574; // rbx
  _QWORD *v575; // rax
  int v576; // ecx
  __int64 v577; // rdx
  __int64 v578; // r15
  unsigned int v579; // r14d
  _QWORD *v580; // r10
  unsigned __int64 v581; // rcx
  const char *v582; // rax
  unsigned __int64 v583; // rdx
  unsigned __int64 v584; // r8
  __int64 v585; // rax
  unsigned __int64 i3; // rax
  __int64 v587; // rbx
  unsigned __int64 v588; // r14
  __int64 v589; // r15
  __int64 v590; // rax
  __int64 v591; // rcx
  unsigned __int64 v592; // rcx
  _QWORD *v593; // rax
  _QWORD *v594; // rax
  ULONG_PTR v595; // rbx
  __int64 v596; // rax
  unsigned __int16 v597; // dx
  unsigned __int64 v598; // r15
  unsigned int v599; // r14d
  unsigned int *v600; // rbx
  __int64 v601; // r8
  int *v602; // r12
  int v603; // ecx
  unsigned int v604; // r13d
  unsigned int v605; // r15d
  unsigned int v606; // eax
  unsigned int v607; // r13d
  unsigned __int64 v608; // r12
  __int64 v609; // r15
  __int64 v610; // rax
  __int64 v611; // rcx
  __int64 v612; // rax
  __int64 v613; // r14
  __int64 v614; // rdx
  __int64 v615; // rcx
  __int64 v616; // rax
  __int64 v617; // rax
  int v618; // r11d
  int v619; // edx
  unsigned int v620; // ecx
  __int64 v621; // r10
  __int64 v622; // r8
  unsigned __int64 v623; // rax
  int v624; // ebx
  void (__fastcall *v625)(__int64, _QWORD, __int64, void (__fastcall *)(__int64, _QWORD)); // rdx
  void (__fastcall *v626)(__int64, _QWORD); // r9
  __int64 v627; // rdx
  _QWORD *v628; // rax
  int v629; // ecx
  __int64 v630; // r8
  unsigned int *v631; // r10
  unsigned __int64 v632; // rcx
  unsigned __int64 i4; // rax
  __int64 v634; // rbx
  __int64 v635; // rax
  __int64 v636; // rcx
  __int64 v637; // rax
  unsigned __int64 v638; // r8
  _DWORD *v639; // rax
  __int64 v640; // rdx
  _DWORD *v641; // rax
  __int64 v642; // rcx
  __int64 v643; // rdi
  unsigned int *v644; // r12
  _BYTE *v645; // rsi
  char *v646; // r14
  __int16 v647; // ax
  char *v648; // r8
  int v649; // r10d
  signed __int64 v650; // r9
  __int64 v651; // rdx
  __int64 v652; // rax
  __int64 *v653; // r9
  unsigned int v654; // r8d
  __int64 *v655; // r10
  __int64 v656; // rcx
  __int64 v657; // rax
  __int64 v658; // rdx
  __int64 v659; // rax
  char *v660; // r8
  signed __int64 v661; // r9
  int v662; // r10d
  __int64 v663; // rdx
  __int64 v664; // rax
  char *v665; // r8
  signed __int64 v666; // r9
  int v667; // r10d
  __int64 v668; // rdx
  __int64 v669; // rax
  unsigned int v670; // ecx
  unsigned int v671; // edx
  unsigned int *v672; // rax
  unsigned int v673; // ecx
  unsigned int v674; // r14d
  unsigned int v675; // r15d
  unsigned int v676; // r13d
  bool v677; // cf
  _QWORD *v678; // r8
  unsigned int *v679; // rdx
  __int64 v680; // rax
  const char *v681; // r10
  unsigned int v682; // ebx
  const char *v683; // r11
  const char *i5; // rax
  unsigned __int64 v685; // rdx
  unsigned int v686; // r8d
  unsigned __int64 v687; // rax
  __int64 v688; // rax
  unsigned __int64 i7; // rax
  unsigned int *v690; // r14
  bool v691; // cc
  unsigned int *v692; // r15
  unsigned int v693; // r14d
  __int64 v694; // r12
  unsigned int *v695; // rax
  __int64 v696; // rax
  unsigned int *v697; // rdx
  unsigned __int64 *v698; // r8
  unsigned int v699; // ebx
  _QWORD *v700; // r10
  unsigned __int64 v701; // r11
  const char *v702; // rax
  unsigned __int64 v703; // rdx
  unsigned int v704; // r8d
  unsigned __int64 v705; // rax
  __int64 v706; // rax
  unsigned __int64 i8; // rax
  unsigned int *v708; // rdx
  unsigned int v709; // r10d
  unsigned int v710; // ebx
  const char *v711; // r8
  const char *v712; // r11
  const char *v713; // rax
  unsigned __int64 v714; // rdx
  unsigned __int64 v715; // rax
  __int64 v716; // rax
  unsigned __int64 i9; // rax
  _BYTE *v718; // rax
  _BYTE *v719; // r12
  char *v720; // rbx
  unsigned int v721; // r12d
  int v722; // r15d
  __int64 v723; // rax
  __int64 v724; // r14
  __int64 v725; // r15
  _QWORD *v726; // rcx
  int v727; // edx
  __int64 v728; // r8
  char v729; // al
  __int64 v730; // rax
  __int64 v731; // rax
  char *v732; // rbx
  __int64 v733; // r15
  __int64 v734; // r14
  _QWORD *v735; // rcx
  int v736; // edx
  __int64 v737; // r8
  char v738; // al
  __int64 v739; // rax
  __int64 v740; // rax
  char *v741; // rbx
  __int64 i10; // r14
  _QWORD *v743; // rcx
  int v744; // edx
  __int64 v745; // r8
  char v746; // al
  __int64 v747; // rax
  __int64 v748; // rax
  int v749; // ebx
  unsigned __int64 v750; // rbx
  __int64 v751; // r8
  unsigned __int64 v752; // rdx
  __int64 v753; // rcx
  _QWORD *v754; // r8
  unsigned __int64 v755; // r10
  const char *v756; // rax
  unsigned __int64 v757; // rdx
  unsigned __int64 v758; // rax
  __int64 v759; // rax
  unsigned __int64 mm; // rax
  __int64 v761; // rax
  unsigned int v762; // edx
  __int64 v763; // rcx
  __int64 v764; // rdx
  __int64 **v765; // r12
  unsigned int v766; // eax
  unsigned __int64 v767; // r13
  char *v768; // rdi
  char *v769; // rbx
  __int64 v770; // r15
  __int64 v771; // r14
  _QWORD *v772; // rcx
  int v773; // edx
  __int64 v774; // r8
  char v775; // al
  __int64 v776; // rax
  __int64 v777; // rax
  int v778; // ecx
  int v779; // ecx
  __int64 v780; // rcx
  __int64 v781; // rbx
  unsigned int v782; // ebx
  unsigned __int64 v783; // rax
  __int64 v784; // r14
  unsigned int v785; // r14d
  unsigned __int64 v786; // rax
  __int64 v787; // rcx
  unsigned __int64 v788; // rcx
  __int64 v789; // rcx
  unsigned __int64 v790; // rcx
  char *v791; // rax
  _QWORD *v792; // rdx
  unsigned __int64 v793; // r9
  const char *v794; // rax
  unsigned __int64 v795; // rcx
  unsigned __int64 v796; // rbx
  __int64 v797; // r8
  unsigned __int64 v798; // rax
  __int64 v799; // rax
  unsigned __int64 i16; // rax
  unsigned int v801; // ebx
  _QWORD *v802; // rcx
  int v803; // edx
  __int64 v804; // r8
  char v805; // al
  __int64 v806; // rdx
  __int64 v807; // rdi
  __int64 v808; // rcx
  unsigned int v809; // r9d
  __int64 v810; // rdi
  __int64 v811; // rdx
  __int64 v812; // r14
  unsigned __int64 v813; // r8
  __int64 v814; // r15
  unsigned __int8 v815; // r12
  unsigned __int16 v816; // r13
  __int64 v817; // rcx
  __int16 v818; // r13
  unsigned __int64 v819; // rbx
  __int64 v820; // r15
  unsigned __int64 v821; // rdx
  __int64 v822; // rax
  unsigned int *v823; // rax
  __int64 v824; // rcx
  int v825; // r15d
  _QWORD *v826; // r10
  _QWORD *v827; // r8
  const char *v828; // rax
  unsigned __int64 v829; // r14
  int v830; // edx
  int v831; // ecx
  __int64 v832; // rax
  __int64 v833; // rax
  unsigned __int64 i17; // rax
  unsigned int *v835; // rax
  __int64 v836; // rdx
  __int64 v837; // rax
  __int64 v838; // rax
  __int64 v839; // rax
  _QWORD *v840; // rdx
  unsigned int v841; // r14d
  const char *v842; // rax
  __int64 v843; // rcx
  __int64 v844; // r8
  unsigned __int64 v845; // rbx
  __int64 v846; // rax
  __int64 v847; // rax
  unsigned __int64 i18; // rax
  unsigned int v849; // ebx
  int *v850; // rdx
  __int64 v851; // rax
  __int64 v852; // rcx
  __int64 v853; // rcx
  _QWORD *v854; // r8
  unsigned __int64 v855; // r10
  const char *v856; // rax
  unsigned __int64 v857; // rdx
  int v858; // r9d
  unsigned __int64 v859; // rax
  __int64 v860; // rax
  unsigned __int64 i21; // rax
  __int64 v862; // rax
  unsigned int v863; // edx
  __int64 v864; // rcx
  __int64 v865; // rcx
  unsigned __int64 v866; // rbx
  unsigned __int8 v867; // r13
  __int64 v868; // rdx
  unsigned int *v869; // rax
  __int64 v870; // r14
  BOOL v871; // r12d
  unsigned __int64 v872; // r15
  __int64 v873; // r8
  __int64 *v874; // r9
  __int64 *v875; // r10
  __int64 v876; // rcx
  __int64 v877; // rax
  bool v878; // zf
  __int64 v879; // rax
  int *v880; // r12
  __int64 v881; // rcx
  unsigned __int64 v882; // rbx
  unsigned __int8 v883; // r15
  unsigned __int64 v884; // rdx
  unsigned __int64 v885; // r14
  unsigned __int64 v886; // rcx
  unsigned __int64 v887; // rax
  _QWORD *v888; // r8
  unsigned __int64 v889; // r11
  const char *v890; // rax
  unsigned __int64 v891; // rdx
  int v892; // r10d
  unsigned __int64 v893; // r9
  __int64 v894; // rax
  unsigned __int64 i20; // rax
  __int64 v896; // rax
  unsigned int v897; // edx
  __int64 v898; // rcx
  int v899; // eax
  __int64 v900; // rdx
  __int64 v901; // r8
  __int64 v902; // rcx
  __int64 v903; // rax
  __int64 v904; // rcx
  __int64 v905; // r8
  __int64 v906; // rcx
  __int64 v907; // rax
  __int64 v908; // rbx
  int v909; // eax
  _QWORD *v910; // r15
  __int64 v911; // r14
  unsigned __int8 v912; // bl
  char v913; // al
  char v914; // r15
  int *v915; // r10
  char v916; // dl
  char v917; // r9
  __int64 v918; // r8
  unsigned __int64 v919; // rcx
  _QWORD *v920; // rbx
  unsigned __int8 v921; // di
  __int64 v922; // r15
  __int64 v923; // rdx
  unsigned __int64 v924; // r13
  __int64 v925; // rcx
  _QWORD *v926; // rcx
  int v927; // edx
  __int64 v928; // r8
  char v929; // al
  unsigned __int8 v930; // bl
  unsigned __int8 v931; // di
  int *v932; // r10
  char v933; // dl
  char v934; // r9
  __int64 v935; // r8
  unsigned __int64 v936; // rcx
  char v937; // al
  unsigned __int64 v938; // rdx
  _QWORD *v939; // rbx
  __int64 v940; // r15
  __int64 v941; // rdx
  unsigned __int64 v942; // r13
  __int64 v943; // rcx
  _QWORD *v944; // rcx
  __int64 v945; // r8
  char v946; // al
  __int64 v947; // r14
  unsigned __int8 v948; // bl
  unsigned __int8 v949; // r13
  char v950; // dl
  char v951; // r9
  __int64 v952; // r8
  unsigned __int64 v953; // rcx
  char v954; // al
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
  __int64 v965; // r8
  int *v966; // r10
  unsigned __int64 v967; // rbx
  _DWORD *v968; // r12
  unsigned __int64 v969; // r13
  __int64 v970; // rax
  unsigned int v971; // edx
  unsigned __int64 v972; // r15
  char *v973; // r14
  __int64 v974; // rax
  unsigned __int64 v975; // rdi
  _QWORD *v976; // r11
  _QWORD *v977; // r10
  const char *v978; // rax
  unsigned __int64 v979; // rdx
  int v980; // r8d
  unsigned __int64 v981; // rax
  __int64 v982; // rax
  unsigned __int64 i19; // rax
  __int64 v984; // rcx
  unsigned int v985; // ecx
  unsigned __int64 v986; // r15
  int *v987; // r13
  _DWORD *v988; // r14
  __int64 v989; // r12
  _QWORD *v990; // rbx
  unsigned int v991; // r10d
  _QWORD *v992; // r11
  unsigned __int64 v993; // rcx
  const char *v994; // rax
  unsigned __int64 v995; // rdx
  int v996; // r9d
  unsigned __int64 v997; // r8
  __int64 v998; // rax
  unsigned __int64 v999; // rax
  unsigned int v1000; // edx
  __int64 v1001; // r15
  __int64 v1002; // rbx
  int v1003; // eax
  __int64 v1004; // rax
  __int64 v1005; // r9
  int v1006; // r13d
  __int64 v1007; // r10
  unsigned int v1008; // r14d
  __int64 v1009; // r12
  void (__fastcall *v1010)(_QWORD, _QWORD, _QWORD *); // r11
  unsigned __int64 v1011; // rcx
  unsigned __int128 v1012; // rax
  unsigned __int64 v1013; // rcx
  unsigned __int64 v1014; // rdx
  unsigned __int128 v1015; // rax
  unsigned __int64 v1016; // rdx
  unsigned __int128 v1017; // rax
  int v1018; // ecx
  __int64 v1019; // rbx
  __int64 v1020; // r15
  unsigned __int64 v1021; // rcx
  unsigned __int128 v1022; // rax
  int v1023; // ecx
  __int64 v1024; // r10
  _QWORD *v1025; // rax
  unsigned __int64 v1026; // r8
  __int64 v1027; // r11
  __int64 *v1028; // r9
  __int64 v1029; // rdx
  __int64 v1030; // rcx
  _QWORD *v1031; // rdx
  _QWORD *v1032; // rax
  int v1033; // ecx
  __int64 v1034; // r12
  __int64 v1035; // r11
  unsigned __int64 v1036; // r8
  __int64 *v1037; // r10
  __int64 v1038; // rdx
  unsigned int v1039; // r14d
  __int64 v1040; // rax
  int v1041; // ecx
  int v1042; // eax
  __int64 v1043; // rcx
  __int64 v1044; // rbx
  __int64 v1045; // r14
  int v1046; // r15d
  __int64 v1047; // rdx
  __int64 v1048; // r12
  char v1049; // r10
  unsigned __int64 v1050; // r14
  unsigned __int64 v1051; // r15
  _QWORD *v1052; // r9
  int v1053; // r8d
  unsigned int v1054; // r8d
  const char *v1055; // rax
  unsigned __int64 v1056; // rcx
  unsigned __int64 v1057; // rax
  __int64 v1058; // rax
  _QWORD *v1059; // r8
  const char *v1060; // rax
  __int64 v1061; // r13
  __int64 v1062; // r9
  int v1063; // edx
  unsigned __int64 v1064; // rax
  __int64 v1065; // rax
  __int64 v1066; // r13
  unsigned __int64 v1067; // rcx
  unsigned __int128 v1068; // rax
  unsigned __int64 v1069; // rcx
  int v1070; // ecx
  int v1071; // ecx
  unsigned int v1072; // r9d
  int v1073; // ecx
  int v1074; // ecx
  int v1075; // ecx
  unsigned __int64 v1076; // rcx
  __int64 v1077; // rax
  unsigned __int128 v1078; // rt2
  unsigned int v1079; // r9d
  __int64 *v1080; // rax
  __int64 v1081; // r8
  __int64 *v1082; // r14
  int v1083; // ecx
  __int64 v1084; // rdx
  __int64 v1085; // r9
  __int64 v1086; // rax
  __int64 v1087; // r15
  __int64 *v1088; // rax
  __int64 v1089; // rcx
  __int64 v1090; // rax
  int v1091; // edi
  char *v1092; // r11
  char *v1093; // r10
  int v1094; // r14d
  __int16 v1095; // ax
  char *v1096; // r8
  int v1097; // r10d
  signed __int64 v1098; // r9
  __int64 v1099; // rdx
  __int64 v1100; // rax
  __int64 *v1101; // r9
  unsigned int v1102; // r8d
  __int64 *v1103; // r10
  __int64 v1104; // rcx
  __int64 v1105; // rax
  __int64 v1106; // rdx
  __int64 v1107; // rax
  char *v1108; // r8
  signed __int64 v1109; // r9
  int v1110; // r10d
  __int64 v1111; // rdx
  __int64 v1112; // rax
  char *v1113; // r8
  signed __int64 v1114; // r9
  int v1115; // r10d
  __int64 v1116; // rdx
  __int64 v1117; // rax
  unsigned int v1118; // ecx
  unsigned int v1119; // edx
  const char *v1120; // r8
  const char *v1121; // rax
  const char *v1122; // rcx
  unsigned __int64 v1123; // rax
  __int64 v1124; // rax
  __int64 v1125; // r12
  __int64 v1126; // rcx
  __int64 v1127; // rax
  __int64 v1128; // r12
  __int64 v1129; // r15
  __int64 v1130; // rax
  __int64 v1131; // r14
  int v1132; // eax
  __int64 v1133; // rax
  unsigned int v1134; // ecx
  __int64 *v1135; // rax
  int v1136; // r8d
  int *v1137; // r10
  unsigned int v1138; // r8d
  unsigned int v1139; // ecx
  int v1140; // eax
  __int64 v1141; // r12
  unsigned __int64 v1142; // r14
  __int64 v1143; // r13
  const char *v1144; // r15
  unsigned int v1145; // r12d
  __int64 v1146; // rdx
  __int64 v1147; // rcx
  __int64 v1148; // rax
  __int64 v1149; // rax
  int v1150; // edx
  unsigned int v1151; // ecx
  __int64 v1152; // r9
  __int64 v1153; // rdx
  unsigned __int64 v1154; // rax
  int v1155; // ebx
  void (__fastcall *v1156)(__int64); // r8
  _BYTE *v1157; // r10
  _QWORD *v1158; // rax
  int v1159; // ecx
  __int64 v1160; // rdx
  const char *v1161; // rax
  const char *v1162; // rcx
  unsigned int v1163; // r8d
  __int64 v1164; // rax
  unsigned __int64 i22; // rax
  int v1166; // r15d
  __int64 v1167; // r13
  __int64 v1168; // rcx
  __int64 v1169; // rdx
  __int64 v1170; // rax
  __int64 v1171; // rax
  __int64 v1172; // rsi
  int v1173; // edx
  unsigned int v1174; // ecx
  __int64 v1175; // r8
  int v1176; // edx
  unsigned __int64 v1177; // rax
  int v1178; // ebx
  __int64 v1179; // rbx
  _QWORD *v1180; // rax
  int v1181; // ecx
  __int64 v1182; // rdx
  _QWORD *v1183; // r8
  const char *v1184; // rax
  int v1185; // ecx
  __int64 v1186; // r10
  __int64 v1187; // rax
  unsigned __int64 i23; // rax
  __int64 v1189; // rax
  unsigned int v1190; // r13d
  unsigned int v1191; // esi
  __int64 v1192; // rdi
  int v1193; // ebx
  int v1194; // r12d
  __int64 v1195; // r15
  __int64 v1196; // rdx
  __int64 v1197; // rcx
  __int64 v1198; // rax
  __int64 v1199; // rax
  int v1200; // edx
  unsigned int v1201; // ecx
  __int64 v1202; // r8
  int v1203; // edx
  unsigned __int64 v1204; // rax
  int v1205; // ebx
  __int64 v1206; // rcx
  _QWORD *v1207; // rax
  int v1208; // edx
  __int64 v1209; // r8
  unsigned __int64 i31; // rax
  __int64 v1211; // rax
  int *v1212; // rcx
  int *v1213; // r12
  __int64 v1214; // r15
  unsigned __int8 *v1215; // r8
  const char *v1216; // rax
  __int64 v1217; // rax
  unsigned __int64 i32; // rax
  int v1219; // eax
  __int64 v1220; // rax
  __int64 v1221; // rcx
  __int64 v1222; // rax
  __int64 v1223; // r15
  __int64 v1224; // r12
  _BYTE *v1225; // rax
  int v1226; // r13d
  int v1227; // ecx
  unsigned int v1228; // r14d
  unsigned int v1229; // ecx
  unsigned int v1230; // edx
  unsigned int v1231; // r10d
  __int64 v1232; // r11
  __int64 v1233; // r8
  __int64 v1234; // r9
  int v1235; // ecx
  int v1236; // ecx
  int v1237; // ecx
  int v1238; // ecx
  int v1239; // ecx
  __int64 v1240; // rax
  int v1241; // eax
  int v1242; // eax
  __int64 v1243; // r13
  __int64 v1244; // rax
  __int64 v1245; // r8
  __int64 v1246; // r15
  _BYTE *v1247; // rax
  int v1248; // r12d
  int v1249; // ecx
  unsigned int v1250; // r14d
  unsigned int v1251; // ecx
  unsigned int v1252; // edx
  int v1253; // r9d
  unsigned int v1254; // r10d
  __int64 v1255; // r11
  __int64 v1256; // r9
  int v1257; // ecx
  int v1258; // ecx
  int v1259; // ecx
  int v1260; // ecx
  int v1261; // ecx
  __int64 v1262; // rax
  int v1263; // eax
  int v1264; // eax
  int v1265; // eax
  unsigned __int64 v1266; // r14
  int v1267; // eax
  int v1268; // ecx
  __int64 v1269; // rcx
  __int64 v1270; // rax
  __int64 v1271; // r15
  int v1272; // r8d
  unsigned __int64 v1273; // r12
  unsigned int v1274; // r13d
  __int64 v1275; // rdx
  __int64 v1276; // rcx
  __int64 v1277; // rax
  __int64 v1278; // rax
  unsigned __int64 v1279; // r14
  int v1280; // edx
  unsigned int v1281; // ecx
  __int64 v1282; // r10
  __int64 v1283; // rdx
  unsigned __int64 v1284; // rax
  int v1285; // ebx
  void (__fastcall *v1286)(__int64, __int64, _QWORD, void (__fastcall *)(_QWORD, _QWORD, _QWORD)); // r8
  void (__fastcall *v1287)(_QWORD, _QWORD, _QWORD); // r9
  _BYTE *v1288; // r10
  _QWORD *v1289; // rax
  int v1290; // ecx
  __int64 v1291; // rdx
  _QWORD *v1292; // rdx
  _QWORD *v1293; // r9
  const char *v1294; // rax
  unsigned __int64 v1295; // rdx
  __int64 v1296; // r8
  unsigned __int64 v1297; // rax
  __int64 v1298; // rax
  unsigned __int64 i25; // rax
  __int64 v1300; // r15
  unsigned __int64 v1301; // rbx
  __int64 v1302; // rcx
  unsigned __int8 v1303; // r12
  unsigned __int64 v1304; // rcx
  __int128 v1305; // xmm0
  int v1306; // ecx
  _QWORD *v1307; // rax
  __int64 v1308; // rdx
  _QWORD *v1309; // rax
  unsigned __int64 v1310; // rcx
  unsigned int v1311; // ebx
  __int64 v1312; // rax
  unsigned int *v1313; // r15
  unsigned int v1314; // r13d
  __int64 v1315; // r8
  __int64 v1316; // rdx
  __int64 v1317; // rcx
  int v1318; // esi
  __int16 v1319; // ax
  unsigned __int8 *v1320; // r8
  int v1321; // r11d
  unsigned __int64 v1322; // r10
  __int64 v1323; // rdx
  __int64 v1324; // rax
  __int64 *v1325; // r10
  unsigned int v1326; // r8d
  __int64 *v1327; // r11
  __int64 v1328; // rcx
  __int64 v1329; // rax
  __int64 v1330; // rdx
  __int64 v1331; // rax
  unsigned __int8 *v1332; // r8
  unsigned __int64 v1333; // r10
  int v1334; // r11d
  __int64 v1335; // rdx
  __int64 v1336; // rax
  unsigned __int8 *v1337; // r8
  unsigned __int64 v1338; // r10
  int v1339; // r11d
  __int64 v1340; // rdx
  __int64 v1341; // rax
  unsigned int v1342; // ecx
  __int64 v1343; // rdx
  unsigned int v1344; // r12d
  unsigned int v1345; // eax
  __int64 v1346; // rax
  unsigned int v1347; // r10d
  const char *v1348; // r8
  _DWORD *v1349; // rax
  const char *v1350; // rax
  const char *v1351; // rcx
  unsigned __int64 v1352; // rdx
  unsigned int v1353; // r11d
  unsigned __int64 v1354; // rbx
  __int64 v1355; // rax
  unsigned __int64 i26; // rax
  __int64 v1357; // rcx
  __int64 v1358; // rax
  __int64 v1359; // rdx
  int v1360; // ecx
  __int64 v1361; // rax
  __int64 v1362; // rdx
  __int64 v1363; // rcx
  int v1364; // r13d
  __int64 v1365; // rax
  int v1366; // ecx
  __int64 v1367; // r15
  int v1368; // r8d
  bool v1369; // cf
  __int64 v1370; // rcx
  __int64 v1371; // rdx
  __int64 v1372; // rax
  __int64 v1373; // rax
  int v1374; // ecx
  __int64 v1375; // rdx
  __int64 v1376; // r8
  int v1377; // ecx
  unsigned __int64 v1378; // rax
  int v1379; // esi
  unsigned __int8 *v1380; // r8
  unsigned __int64 *v1381; // r14
  unsigned int *v1382; // r15
  __int64 v1383; // r12
  unsigned __int64 v1384; // rsi
  int v1385; // ecx
  unsigned __int8 *v1386; // rax
  __int64 v1387; // rdx
  const char *v1388; // rax
  int v1389; // r10d
  unsigned __int64 v1390; // r11
  __int64 v1391; // rax
  unsigned __int64 i27; // rax
  __int64 v1393; // rax
  unsigned __int64 v1394; // r13
  _DWORD *v1395; // rax
  __int64 v1396; // r15
  __int64 v1397; // rcx
  __int64 v1398; // rdx
  __int64 v1399; // rax
  __int64 v1400; // rax
  __int64 v1401; // r14
  int v1402; // ecx
  __int64 v1403; // rdx
  __int64 v1404; // r8
  int v1405; // ecx
  unsigned __int64 v1406; // rax
  int v1407; // ebx
  _QWORD *v1408; // rax
  int v1409; // ecx
  __int64 v1410; // rdx
  __int64 v1411; // rsi
  const char *v1412; // rax
  int v1413; // r10d
  unsigned __int64 v1414; // r11
  __int64 v1415; // rax
  unsigned __int64 i30; // rax
  __int64 v1417; // rax
  __int64 v1418; // r14
  unsigned __int64 v1419; // r15
  __int64 v1420; // r13
  __int64 v1421; // rax
  __int64 v1422; // rcx
  unsigned __int64 v1423; // rcx
  _QWORD *v1424; // rax
  _QWORD *v1425; // rax
  ULONG_PTR v1426; // r14
  __int64 v1427; // rax
  unsigned __int64 v1428; // r12
  unsigned int v1429; // r15d
  unsigned int *v1430; // r14
  __int64 v1431; // r8
  int *v1432; // r12
  int v1433; // ecx
  unsigned int v1434; // r13d
  unsigned int v1435; // eax
  unsigned int v1436; // r13d
  __int64 v1437; // r12
  __int64 v1438; // rax
  __int64 v1439; // rax
  __int64 v1440; // r15
  __int64 v1441; // rdx
  __int64 v1442; // rcx
  __int64 v1443; // rax
  __int64 v1444; // rax
  __int64 v1445; // r14
  int v1446; // ecx
  __int64 v1447; // rdx
  __int64 v1448; // r8
  int v1449; // ecx
  unsigned __int64 v1450; // rax
  int v1451; // ebx
  __int64 v1452; // rcx
  _QWORD *v1453; // rax
  int v1454; // edx
  __int64 v1455; // r8
  unsigned int *v1456; // r10
  unsigned __int64 v1457; // rdx
  unsigned __int64 i28; // rax
  __int64 v1459; // rsi
  unsigned int *v1460; // r15
  __int64 v1461; // rax
  __int64 v1462; // rcx
  __int64 v1463; // rax
  unsigned __int64 v1464; // r8
  _DWORD *v1465; // rax
  __int64 v1466; // rcx
  char *v1467; // r11
  unsigned int *v1468; // rbx
  int v1469; // r13d
  __int16 v1470; // ax
  char *v1471; // r8
  int v1472; // r10d
  signed __int64 v1473; // r9
  __int64 v1474; // rdx
  __int64 v1475; // rax
  __int64 *v1476; // r9
  unsigned int v1477; // r8d
  __int64 *v1478; // r10
  __int64 v1479; // rcx
  __int64 v1480; // rax
  __int64 v1481; // rdx
  __int64 v1482; // rax
  char *v1483; // r8
  signed __int64 v1484; // r9
  int v1485; // r10d
  __int64 v1486; // rdx
  __int64 v1487; // rax
  char *v1488; // r8
  signed __int64 v1489; // r9
  int v1490; // r10d
  __int64 v1491; // rdx
  __int64 v1492; // rax
  unsigned int v1493; // ecx
  unsigned int v1494; // ecx
  unsigned int v1495; // r15d
  unsigned int v1496; // r12d
  unsigned int v1497; // edi
  bool v1498; // cf
  unsigned int *v1499; // rcx
  unsigned __int64 *v1500; // rdx
  __int64 v1501; // rax
  unsigned int v1502; // r10d
  _QWORD *v1503; // r8
  unsigned __int64 v1504; // r11
  const char *v1505; // rax
  unsigned __int64 v1506; // rdx
  unsigned int v1507; // r9d
  unsigned __int64 v1508; // rax
  __int64 v1509; // rax
  unsigned __int64 v1510; // rax
  unsigned int *v1511; // r12
  unsigned int v1512; // r15d
  _BYTE *v1513; // rbx
  __int64 v1514; // rax
  unsigned int *v1515; // rcx
  unsigned int v1516; // r9d
  _QWORD *v1517; // r8
  unsigned __int64 v1518; // rsi
  unsigned int i29; // r10d
  const char *v1520; // rax
  unsigned int v1521; // r10d
  unsigned __int64 v1522; // rax
  __int64 v1523; // rax
  unsigned __int64 v1524; // rax
  unsigned int v1525; // r10d
  unsigned int *v1526; // rcx
  unsigned int v1527; // r10d
  const char *v1528; // r8
  const char *v1529; // r11
  const char *v1530; // rax
  unsigned int v1531; // r9d
  unsigned __int64 v1532; // rax
  __int64 v1533; // rax
  unsigned __int64 v1534; // rax
  _BYTE *v1535; // rax
  int v1536; // ecx
  __int64 v1537; // rax
  __int64 v1538; // rcx
  __int64 v1539; // rax
  __int64 v1540; // r15
  __int64 v1541; // rcx
  __int64 v1542; // r15
  __int64 i24; // r14
  __int64 v1544; // rax
  int v1545; // eax
  __int64 v1546; // rax
  __int64 v1547; // r14
  int v1548; // eax
  __int64 v1549; // rax
  __int64 v1550; // rbx
  unsigned __int64 v1551; // rcx
  unsigned __int128 v1552; // rax
  __int64 v1553; // rcx
  __int64 v1554; // rax
  int *v1555; // r15
  _QWORD *v1556; // r8
  unsigned __int64 v1557; // r10
  const char *v1558; // rax
  unsigned __int64 v1559; // rdx
  int v1560; // r9d
  unsigned __int64 v1561; // rax
  __int64 v1562; // rax
  unsigned __int64 i33; // rax
  __int64 v1564; // rcx
  __int64 v1565; // rbx
  int v1566; // r14d
  __int64 v1567; // rcx
  __int64 v1568; // rbx
  int v1569; // eax
  __int64 v1570; // rax
  __int64 v1571; // rax
  unsigned int v1572; // edx
  __int64 v1573; // rcx
  void (__fastcall *v1574)(_QWORD); // r8
  unsigned __int64 v1575; // rcx
  unsigned __int64 i34; // rax
  unsigned __int64 v1577; // rcx
  unsigned __int128 v1578; // rax
  __int64 v1579; // rcx
  __int64 *v1580; // r13
  unsigned __int64 v1581; // rcx
  __int64 v1582; // rax
  unsigned __int128 v1583; // rt2
  int v1584; // ebx
  __int64 (__fastcall *v1585)(__int64, __int64, __int64, unsigned __int64); // r11
  __int64 v1586; // r8
  unsigned __int64 v1587; // rcx
  __int64 (__fastcall *v1588)(_QWORD, _QWORD, __int64, unsigned __int64); // r10
  unsigned __int128 v1589; // rax
  unsigned __int64 v1590; // r12
  int v1591; // ecx
  unsigned __int64 v1592; // rcx
  __int64 v1593; // rax
  unsigned __int128 v1594; // rt2
  __int64 v1595; // r13
  __int64 v1596; // rax
  _QWORD *v1597; // r14
  __int64 v1598; // r14
  int v1599; // r9d
  unsigned __int64 *v1600; // r8
  unsigned __int64 v1601; // r10
  unsigned __int64 v1602; // rcx
  unsigned __int128 v1603; // rax
  unsigned __int64 v1604; // rcx
  unsigned __int64 v1605; // rcx
  unsigned int v1606; // ebx
  unsigned __int64 v1607; // r9
  unsigned __int64 *v1608; // r8
  unsigned __int64 v1609; // r10
  unsigned __int64 v1610; // rcx
  unsigned __int128 v1611; // rax
  unsigned __int64 v1612; // rcx
  unsigned __int128 v1613; // rax
  int v1614; // r8d
  char *v1615; // rcx
  _QWORD *v1616; // rdx
  __int64 v1617; // rdi
  char v1618; // al
  unsigned int v1619; // r10d
  int v1620; // r13d
  int v1621; // r10d
  unsigned int v1622; // r13d
  _QWORD *v1623; // rbx
  _QWORD *v1624; // r8
  unsigned __int64 v1625; // rcx
  int v1626; // r11d
  unsigned __int128 v1627; // rax
  char *v1628; // rcx
  __int64 v1629; // r14
  __int64 v1630; // rdx
  char v1631; // al
  _QWORD *v1632; // rax
  __int64 v1633; // rdx
  int v1634; // ecx
  unsigned __int64 v1635; // r12
  _QWORD *v1636; // r8
  const char *v1637; // rax
  __int64 v1638; // rdx
  int v1639; // r11d
  unsigned __int64 v1640; // r14
  __int64 v1641; // rax
  char *v1642; // rcx
  int v1643; // r8d
  __int64 v1644; // r11
  __int64 i35; // r15
  char v1646; // al
  _QWORD *v1647; // rcx
  int v1648; // edx
  _QWORD *v1649; // rdx
  unsigned __int64 v1650; // rcx
  unsigned __int128 v1651; // rax
  __int64 v1652; // rdi
  unsigned int v1653; // ebx
  int v1654; // r12d
  __int64 v1655; // r14
  __int64 v1656; // r13
  __int64 *v1657; // r11
  __int64 v1658; // r10
  __int64 v1659; // rdx
  __int64 v1660; // r8
  __int64 v1661; // rdx
  __int64 v1662; // rdx
  __int64 v1663; // r10
  _QWORD *v1664; // r8
  unsigned __int64 v1665; // r10
  const char *v1666; // rax
  int v1667; // r9d
  unsigned __int64 v1668; // rax
  __int64 v1669; // rax
  unsigned __int64 i36; // rax
  unsigned int v1671; // r8d
  unsigned __int64 v1672; // r15
  __int64 v1673; // rdx
  __int64 v1674; // rcx
  __int64 v1675; // rax
  __int64 v1676; // rax
  unsigned int v1677; // r15d
  int v1678; // r9d
  int v1679; // r12d
  int v1680; // r13d
  int v1681; // r15d
  __int64 v1682; // rax
  unsigned int v1683; // r9d
  _QWORD *v1684; // r10
  _QWORD *v1685; // r8
  unsigned __int64 v1686; // rcx
  unsigned __int128 v1687; // rax
  char *v1688; // rcx
  __int64 v1689; // r11
  int v1690; // edx
  __int64 v1691; // r11
  __int64 v1692; // rbx
  char v1693; // al
  int v1694; // ecx
  _QWORD *v1695; // rax
  __int64 v1696; // rdx
  unsigned __int64 v1697; // r14
  _QWORD *v1698; // r8
  const char *v1699; // rax
  __int64 v1700; // rdx
  int v1701; // ebx
  unsigned __int64 v1702; // rax
  __int64 v1703; // rax
  char *v1704; // rcx
  __int64 v1705; // r8
  int v1706; // r14d
  char v1707; // al
  _QWORD *v1708; // rcx
  int v1709; // edx
  _QWORD *v1710; // rdx
  unsigned __int64 v1711; // rcx
  unsigned __int128 v1712; // rax
  __int64 v1713; // rdi
  __int64 v1714; // r14
  __int64 *v1715; // r10
  unsigned int v1716; // r11d
  __int64 v1717; // rbx
  __int64 v1718; // r9
  __int64 v1719; // rdx
  __int64 v1720; // r8
  __int64 v1721; // rdx
  __int64 v1722; // rdx
  __int64 v1723; // r9
  int v1724; // r13d
  __int64 v1725; // rbx
  _QWORD *v1726; // r8
  int v1727; // r14d
  _QWORD *v1728; // rdx
  int v1729; // r9d
  char *v1730; // rcx
  __int64 v1731; // r10
  char v1732; // al
  int v1733; // ecx
  _QWORD *v1734; // rax
  __int64 v1735; // rdx
  unsigned __int64 v1736; // r11
  _QWORD *v1737; // r9
  const char *v1738; // rax
  int v1739; // r10d
  unsigned __int64 v1740; // rax
  __int64 v1741; // rax
  char *v1742; // rcx
  __int64 v1743; // r9
  char v1744; // al
  unsigned int v1745; // r11d
  __int64 v1746; // r14
  __int64 v1747; // r12
  __int64 v1748; // r13
  __int64 *v1749; // r10
  int v1750; // r11d
  unsigned int v1751; // ebx
  __int64 v1752; // r15
  __int64 v1753; // r9
  __int64 v1754; // rdx
  __int64 v1755; // r8
  __int64 v1756; // rdx
  __int64 v1757; // rdx
  int v1758; // r9d
  unsigned int v1759; // r12d
  int v1760; // r13d
  int v1761; // r8d
  __int64 v1762; // rax
  unsigned int v1763; // r9d
  int v1764; // r11d
  unsigned __int64 v1765; // rcx
  unsigned __int128 v1766; // rax
  _QWORD *v1767; // r10
  __int64 v1768; // r14
  _QWORD *v1769; // rdx
  char *v1770; // rcx
  __int64 v1771; // rbx
  char v1772; // al
  int v1773; // ecx
  _QWORD *v1774; // rax
  __int64 v1775; // rdx
  unsigned __int64 v1776; // r15
  _QWORD *v1777; // r11
  const char *v1778; // rax
  __int64 v1779; // rdx
  int v1780; // ebx
  unsigned __int64 v1781; // r12
  __int64 v1782; // rax
  char *v1783; // rcx
  __int64 v1784; // r11
  int v1785; // r15d
  int v1786; // r12d
  char v1787; // al
  _QWORD *v1788; // rcx
  int v1789; // edx
  _QWORD *v1790; // rdx
  unsigned __int64 v1791; // rcx
  unsigned __int128 v1792; // rax
  __int64 v1793; // r14
  __int64 v1794; // r15
  __int64 v1795; // r9
  __int64 *v1796; // r10
  __int64 v1797; // rbx
  __int64 v1798; // rdx
  __int64 v1799; // r8
  __int64 v1800; // rdx
  __int64 v1801; // rdx
  __int64 v1802; // r9
  unsigned __int64 v1803; // rcx
  unsigned __int64 v1804; // rcx
  char v1805; // cl
  __int64 v1806; // rdx
  __int64 v1807; // r9
  __int64 i37; // r13
  _DWORD *v1809; // r15
  unsigned __int64 v1810; // rcx
  __int64 v1811; // rax
  unsigned __int128 v1812; // rt2
  int v1813; // r8d
  char *v1814; // rbx
  char *v1815; // rcx
  _QWORD *v1816; // rdx
  __int64 v1817; // r9
  char v1818; // al
  int v1819; // r10d
  __int64 v1820; // r8
  int v1821; // r11d
  unsigned __int64 v1822; // rcx
  unsigned __int64 v1823; // rcx
  int v1824; // r9d
  unsigned __int64 v1825; // rcx
  unsigned __int128 v1826; // rax
  int v1827; // edx
  ULONG_PTR v1828; // rsi
  __int64 v1829; // r12
  __int64 v1830; // r8
  __int64 v1831; // r13
  __int64 v1832; // r9
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
  __int64 v1860; // r9
  __int64 v1861; // r11
  __int64 v1862; // rbx
  __int64 v1863; // rsi
  struct _KPRCB *CurrentPrcb; // rax
  struct _KTHREAD *v1865; // r8
  unsigned __int64 DpcStack; // r13
  __int64 v1867; // rdi
  unsigned __int64 v1868; // r11
  unsigned __int64 v1869; // rsi
  unsigned __int64 v1870; // r15
  __int64 **v1871; // r14
  unsigned int v1872; // esi
  __int64 *v1873; // r12
  __int64 v1874; // rbx
  unsigned __int64 v1875; // rcx
  __int64 v1876; // rdx
  __int64 v1877; // rcx
  __int64 v1878; // rdi
  __int64 v1879; // rax
  int v1880; // edx
  _QWORD *v1881; // rcx
  __int64 v1882; // r13
  char v1883; // al
  __int64 v1884; // rdx
  __int64 v1885; // rcx
  int v1886; // r8d
  _QWORD *v1887; // rcx
  __int64 v1888; // r13
  char v1889; // al
  unsigned __int64 v1890; // rax
  unsigned __int128 v1891; // rax
  unsigned __int64 v1892; // rdi
  unsigned __int128 v1893; // rax
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
  signed __int32 v1915[8]; // [rsp+980h] [rbp+980h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+9A0h] [rbp+9A0h]
  __int64 v1917; // [rsp+9A8h] [rbp+9A8h]
  _QWORD *v1918; // [rsp+9B8h] [rbp+9B8h]
  _BYTE v1919[2432]; // [rsp+A40h] [rbp+A40h] BYREF

  v1 = (_QWORD *)((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL);
  v2 = *(_DWORD *)(a1 + 1672);
  v3 = a1;
  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = a1;
  if ( (v2 & 0x110000) != 0x110000 )
  {
    v4 = v1 + 256;
    v5 = 304;
    v6 = 38LL;
    do
    {
      *v4 = 0LL;
      v5 -= 8;
      ++v4;
      --v6;
    }
    while ( v6 );
    for ( ; v5; --v5 )
    {
      *(_BYTE *)v4 = 0;
      v4 = (_QWORD *)((char *)v4 + 1);
    }
    *(_OWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x810) = *(_OWORD *)(v3 + 1448);
    *(_OWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x820) = *(_OWORD *)(v3 + 1464);
    v7 = *(_OWORD *)(v3 + 1480);
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2FA) = ((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                           + 2048;
    *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x810) = v3 + 1496;
    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x818) = (v3 + 1496) >> 32;
    *(_OWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x920) = v7;
    *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2F8) = 304;
    *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x816) = (unsigned int)(v3 + 1496) >> 16;
    _disable();
    if ( (*(_DWORD *)(v3 + 1672) & 0x80000000) != 0 )
    {
      __writedr(7u, 0LL);
    }
    else
    {
      __sidt(v1 + 149);
      __lidt(v1 + 95);
      __writedr(7u, 0LL);
      __lidt(v1 + 149);
    }
    _enable();
  }
  *(_DWORD *)(v3 + 1424) = 0;
  if ( (*(_DWORD *)(v3 + 1672) & 0x40000000) == 0 || !*(_QWORD *)(v3 + 1840) )
  {
    v8 = *(_QWORD *)(v3 + 1312);
    v9 = (_QWORD *)(v3 + 1280);
    v10 = (char *)(v3 + 1280);
    v11 = v1 + 234;
    v12 = 32;
    v13 = 4LL;
    do
    {
      v12 -= 8;
      *v11 = *(_QWORD *)v10;
      v10 += 8;
      ++v11;
      --v13;
    }
    while ( v13 );
    for ( ; v12; --v12 )
    {
      v14 = *v10++;
      *(_BYTE *)v11 = v14;
      v11 = (_QWORD *)((char *)v11 + 1);
    }
    *(_QWORD *)(v3 + 1312) = 0LL;
    v15 = 32;
    *(_DWORD *)(v3 + 1424) = 0;
    v16 = 4LL;
    v17 = (_QWORD *)(v3 + 1280);
    do
    {
      *v17 = 0LL;
      v15 -= 8;
      ++v17;
      --v16;
    }
    while ( v16 );
    for ( ; v15; --v15 )
    {
      *(_BYTE *)v17 = 0;
      v17 = (_QWORD *)((char *)v17 + 1);
    }
    v18 = *(unsigned int *)(v3 + 1356);
    v19 = (_QWORD *)v3;
    v20 = (const char *)v3;
    if ( v3 < v18 + v3 )
    {
      do
      {
        _mm_prefetch(v20, 0);
        v20 += 64;
      }
      while ( (unsigned __int64)v20 < v18 + v3 );
    }
    v21 = *(_QWORD *)(v3 + 1408);
    v22 = *(_DWORD *)(v3 + 1356);
    if ( (unsigned int)v18 >= 8 )
    {
      v23 = v18 >> 3;
      do
      {
        v22 -= 8;
        v21 = __ROL8__(*v19++ ^ v21, *(_DWORD *)(v3 + 1404));
        --v23;
      }
      while ( v23 );
    }
    for ( ; v22; --v22 )
    {
      v24 = *(unsigned __int8 *)v19;
      v19 = (_QWORD *)((char *)v19 + 1);
      v21 = __ROL8__(v24 ^ v21, *(_DWORD *)(v3 + 1404));
    }
    *(_DWORD *)(v3 + 1424) += v18;
    v25 = (char *)(v1 + 234);
    v26 = 32;
    *(_QWORD *)(v3 + 1312) = v8;
    v27 = 4LL;
    do
    {
      v26 -= 8;
      *v9 = *(_QWORD *)v25;
      v25 += 8;
      ++v9;
      --v27;
    }
    while ( v27 );
    for ( ; v26; --v26 )
    {
      v28 = *v25++;
      *(_BYTE *)v9 = v28;
      v9 = (_QWORD *)((char *)v9 + 1);
    }
    if ( *(_QWORD *)(v3 + 1312) != v21 )
    {
      v29 = *(_DWORD *)(v3 + 1356);
      v30 = *(_QWORD *)(v3 + 1160);
      *(_QWORD *)v30 = v3;
      *(_DWORD *)(v30 + 16) = v29;
      if ( !*(_DWORD *)(v3 + 1536) )
      {
        *(_QWORD *)(*(_QWORD *)(v3 + 1160) + 24LL) = v21 ^ *(_QWORD *)(v3 + 1312);
        if ( !*(_DWORD *)(v3 + 1536) )
        {
          *(_QWORD *)(v3 + 1544) = v3 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v3 + 1552) = 0LL;
          *(_QWORD *)(v3 + 1560) = 257LL;
          *(_QWORD *)(v3 + 1568) = v21;
          *(_DWORD *)(v3 + 1536) = 1;
        }
      }
    }
  }
  *(_DWORD *)(v3 + 1672) |= 4u;
  ++*(_DWORD *)(v3 + 1436);
  if ( (*(_DWORD *)(v3 + 1672) & 8) != 0 && (*(_DWORD *)(v3 + 1676) & 4) == 0 )
  {
    v31 = *(_DWORD *)(v3 + 1356);
    v32 = *(_DWORD *)(v3 + 1676) & 1;
    v33 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0);
    v34 = *(_QWORD *)(v3 + 1776);
    v35 = *(_QWORD *)(v33 + 1824);
    v36 = *(unsigned int *)(v33 + 1392);
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v35;
    if ( v32 )
      v34 = *(_QWORD *)(v33 + 1232);
    v37 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD *))(v33 + 336);
    v38 = *(_DWORD **)(v33 + 752);
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = *(_QWORD *)(v33 + 944);
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = *(_QWORD *)(v33 + 632);
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v37;
    *v1 = v38;
    v39 = __rdtsc();
    v40 = (__ROR8__(v39, 3) ^ v39) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x668) = *((_QWORD *)&v40 + 1);
    v41 = -1200000000LL - ((unsigned __int64)v40 ^ *((_QWORD *)&v40 + 1)) % 0x5F5E100;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A8) = v41;
    if ( (*(_DWORD *)(v33 + 1672) & 0x4000000) != 0 )
    {
      v42 = __rdtsc();
      v43 = (__ROR8__(v42, 3) ^ v42) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x618) = *((_QWORD *)&v43 + 1);
      if ( ((unsigned __int64)v43 ^ *((_QWORD *)&v43 + 1)) % 0xA < 2 )
      {
        v44 = __rdtsc();
        v45 = (__ROR8__(v44, 3) ^ v44) * (unsigned __int128)0x7010008004002001uLL;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x5B0) = *((_QWORD *)&v45 + 1);
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A8) = (((unsigned __int64)v45 ^ *((_QWORD *)&v45 + 1))
                                                                                % 0xA
                                                                                + 1)
                                                                               * v41;
      }
    }
    v46 = 0LL;
    v47 = 0LL;
    v48 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) + 1672LL);
    if ( (v48 & 2) == 0 )
      v31 = v36;
    if ( (v48 & 0x80u) != 0 )
    {
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C) = 1;
      v49 = __rdtsc();
      v50 = (__ROR8__(v49, 3) ^ v49) * (unsigned __int128)0x7010008004002001uLL;
      v51 = 234;
      v52 = *((_QWORD *)&v50 + 1);
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x628) = *((_QWORD *)&v50 + 1);
      v53 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0);
      v46 = v50 ^ v52;
      v54 = v46;
      v47 = v53 ^ v46;
      v55 = (_QWORD *)(v53 + 1864);
      do
      {
        *v55-- ^= v54;
        v54 = __ROR8__(v54, v51--);
      }
      while ( v51 );
      v56 = v36;
      v57 = (unsigned __int64)(v36 - 1872) >> 3;
      if ( (_DWORD)v57 )
      {
        v58 = (__int64 *)(v53 + 8 * ((int)v57 + 233LL));
        do
        {
          v59 = *v58--;
          v47 = (2 * v47) ^ __ROR8__(v59, v57);
          LODWORD(v57) = v57 - 1;
        }
        while ( (_DWORD)v57 );
        v35 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
        v53 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0);
        v56 = v36;
      }
      v60 = v56 + v53;
      v61 = (v31 - (unsigned int)v36) >> 3;
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
      v37 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD *))(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
      v38 = (_DWORD *)*v1;
    }
    else
    {
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C) = 0;
    }
    if ( v35 )
    {
      v3 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0);
      ((void (__fastcall *)(unsigned __int64, _QWORD, _QWORD *, void (__fastcall *)(_QWORD, _QWORD, _QWORD *), __int64))v38)(
        v3,
        v31,
        v1 + 53,
        v37,
        v35);
    }
    else
    {
      if ( v34 )
      {
        if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD *))(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                        + 0x68))(
                v34,
                0LL,
                0LL,
                0LL,
                v1 + 53)
          && v32 )
        {
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40))(
            v34,
            0LL,
            0LL);
        }
      }
      else
      {
        v37(0LL, 0LL, v1 + 53);
      }
      v3 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0);
    }
    if ( *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C) )
    {
      v63 = (_QWORD *)(v3 + 1864);
      v64 = v3 ^ v46;
      v65 = 234;
      do
      {
        *v63-- ^= v46;
        v46 = __ROR8__(v46, v65--);
      }
      while ( v65 );
      v66 = v36;
      v67 = (unsigned __int64)(v36 - 1872) >> 3;
      if ( (_DWORD)v67 )
      {
        v68 = (__int64 *)(v3 + 8LL * (int)v67 + 1864);
        do
        {
          v69 = *v68--;
          v64 = (2 * v64) ^ __ROR8__(v69, v67);
          LODWORD(v67) = v67 - 1;
        }
        while ( (_DWORD)v67 );
        v66 = v36;
      }
      v70 = (v31 - (unsigned int)v36) >> 3;
      if ( v70 )
      {
        v71 = (_QWORD *)(v66 + v3 + 8 * (v70 - 1LL));
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
        v72 = *(_QWORD *)(v3 + 1160);
        v73 = *(_DWORD *)(v3 + 1356);
        *(_QWORD *)v72 = v3;
        *(_DWORD *)(v72 + 16) = v73;
        if ( !*(_DWORD *)(v3 + 1536) )
        {
          *(_QWORD *)(*(_QWORD *)(v3 + 1160) + 24LL) = v47 ^ v64;
          if ( !*(_DWORD *)(v3 + 1536) )
          {
            *(_QWORD *)(v3 + 1544) = v3 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v3 + 1552) = 0LL;
            *(_QWORD *)(v3 + 1560) = 270LL;
            *(_QWORD *)(v3 + 1568) = v64;
            *(_DWORD *)(v3 + 1536) = 1;
          }
        }
      }
    }
  }
  v74 = *(_DWORD *)(v3 + 196);
  *(_DWORD *)(v3 + 196) = 0;
  v75 = (_QWORD *)v3;
  v76 = (const char *)v3;
  if ( v3 < v3 + 1248 )
  {
    do
    {
      _mm_prefetch(v76, 0);
      v76 += 64;
    }
    while ( (unsigned __int64)v76 < v3 + 1248 );
  }
  v77 = *(_QWORD *)(v3 + 1408);
  v78 = *(_DWORD *)(v3 + 1404);
  LODWORD(i6) = 1248;
  v80 = 156LL;
  do
  {
    i6 = (unsigned int)(i6 - 8);
    v77 = __ROL8__(*v75++ ^ v77, v78);
    --v80;
  }
  while ( v80 );
  for ( ; (_DWORD)i6; i6 = (unsigned int)(i6 - 1) )
  {
    v81 = *(unsigned __int8 *)v75;
    v75 = (_QWORD *)((char *)v75 + 1);
    v77 = __ROL8__(v81 ^ v77, v78);
  }
  *(_DWORD *)(v3 + 1424) += 1248;
  *(_DWORD *)(v3 + 196) = v74;
  if ( *(_QWORD *)(v3 + 1808) != v77 )
  {
    v82 = *(_QWORD *)(v3 + 1160);
    v83 = *(_DWORD *)(v3 + 1356);
    *(_QWORD *)v82 = v3;
    *(_DWORD *)(v82 + 16) = v83;
    if ( !*(_DWORD *)(v3 + 1536) )
    {
      *(_QWORD *)(*(_QWORD *)(v3 + 1160) + 24LL) = *(_QWORD *)(v3 + 1808) ^ v77;
      if ( !*(_DWORD *)(v3 + 1536) )
      {
        *(_QWORD *)(v3 + 1544) = v3 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v3 + 1552) = 0LL;
        *(_QWORD *)(v3 + 1560) = 265LL;
        *(_QWORD *)(v3 + 1568) = v77;
        *(_DWORD *)(v3 + 1536) = 1;
      }
    }
  }
  v84 = *(unsigned int *)(v3 + 1648);
  v85 = v3;
  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v3;
  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C) = 0;
  if ( (_DWORD)v84 != -1 )
  {
    v86 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(v3 + 568))(v84, v77, v75);
    if ( v86 || (v86 = (*(__int64 (__fastcall **)(_QWORD))(v3 + 576))(0LL)) != 0 )
    {
      v87 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(v3 + 592))(v86, v1 + 189);
      if ( v87 >= 0 )
      {
        *(_QWORD *)(v3 + 1664) = v86;
        v87 = 0;
        *(_DWORD *)(v3 + 1424) += 0x10000;
      }
      else
      {
        (*(void (__fastcall **)(__int64))(v3 + 584))(v86);
      }
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C) = v87 >= 0;
    }
  }
  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x150) = 0LL;
  v88 = v1 + 43;
  v89 = 4;
  do
  {
    *v88++ = 0;
    --v89;
  }
  while ( v89 );
  v90 = *(_DWORD *)(v3 + 1416);
  v91 = (_DWORD *)(v3 + 1428);
  v92 = *(_DWORD *)(v3 + 1428);
  v93 = 0x8000LL;
  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0) = v90;
  *v1 = v3 + 1428;
  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = -1073741275;
  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = -1073741670;
  if ( *(_DWORD *)(v3 + 1424) < v92 )
  {
    i15 = 0LL;
    while ( 1 )
    {
      if ( (*(_DWORD *)(v85 + 1672) & 0x110000) != 0x110000 )
        __writedr(7u, 0LL);
      if ( v90 == *(_DWORD *)(v85 + 1396) )
      {
        ++*(_DWORD *)(v85 + 1432);
        v90 = 0;
        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0) = 0;
        if ( *(_DWORD *)(v85 + 1624) == 6 )
        {
          if ( *(_DWORD *)(v85 + 1648) == -1 )
            *(_DWORD *)(v85 + 1648) = 0;
          else
            *(_DWORD *)(v85 + 1672) |= 1u;
        }
      }
      i6 = v85;
      v95 = 0;
      if ( *(_QWORD *)(v85 + 1840) )
        i6 = *(_QWORD *)(v85 + 1840);
      v96 = (char *)(i6 + *(unsigned int *)(i6 + 1392));
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v96;
      if ( *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x150)
        && *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x154) <= v90 )
      {
        v95 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x154);
        v96 = (char *)(i6 + *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x158));
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v96;
      }
      if ( v95 != v90 )
      {
        v97 = v90 - v95;
        v95 = v90;
        while ( 1 )
        {
          v98 = *(_DWORD *)v96;
          if ( *(int *)v96 > 17 )
          {
            switch ( v98 )
            {
              case 19:
LABEL_133:
                v103 = 56LL;
                goto LABEL_134;
              case 28:
                v104 = *((unsigned __int16 *)v96 + 20);
                goto LABEL_123;
              case 30:
                v103 = (((*((_DWORD *)v96 + 9) - 1) / 0xCu + 7) & 0xFFFFFFF8)
                     + 24 * (*((unsigned __int16 *)v96 + 20) + 2);
                goto LABEL_134;
            }
            if ( (unsigned int)(v98 - 33) <= 1 )
            {
              v103 = 20
                   * (unsigned int)(((*((_DWORD *)v96 + 8) & 0xFFF)
                                   + (unsigned __int64)*((unsigned int *)v96 + 10)
                                   + 4095) >> 12)
                   + 48;
              goto LABEL_134;
            }
          }
          else
          {
            if ( v98 == 17 )
              goto LABEL_133;
            v99 = v98 - 1;
            if ( !v99 )
            {
LABEL_125:
              v103 = 4 * (*((_DWORD *)v96 + 4) / 0xCu) + 48;
              goto LABEL_134;
            }
            v100 = v99 - 6;
            if ( !v100 )
            {
              v103 = (unsigned int)(24 * (*((_DWORD *)v96 + 6) + 2));
              goto LABEL_134;
            }
            v101 = v100 - 1;
            if ( !v101 )
            {
              v104 = *((unsigned __int16 *)v96 + 16);
LABEL_123:
              v103 = (v104 + 55) & 0xFFFFFFF8;
              goto LABEL_134;
            }
            v102 = v101 - 2;
            if ( !v102 )
            {
              v103 = (unsigned int)(16 * (*((_DWORD *)v96 + 7) + 3));
              goto LABEL_134;
            }
            if ( v102 == 2 )
              goto LABEL_125;
          }
          v103 = 48LL;
LABEL_134:
          v96 += v103;
          if ( !--v97 )
          {
            v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
            v91 = (_DWORD *)*v1;
            i15 = 0LL;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v96;
            break;
          }
        }
      }
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x150) = 1;
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x154) = v95;
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x158) = (_DWORD)v96 - i6;
      v105 = *(_DWORD *)v96;
      if ( *(int *)v96 <= 19 )
      {
        if ( v105 == 19 )
        {
          v126 = **((_QWORD **)v96 + 5);
          if ( !v126 || v126 == *((_QWORD *)v96 + 3) || v126 == *((_QWORD *)v96 + 4) )
            goto LABEL_217;
          v127 = v126 == *((_QWORD *)v96 + 6);
          goto LABEL_187;
        }
        if ( v105 <= 10 )
        {
          if ( v105 != 10 )
          {
            switch ( v105 )
            {
              case 0:
                goto LABEL_378;
              case 1:
                goto LABEL_322;
              case 4:
                if ( (*(_DWORD *)(v85 + 1432) & 1) == 0 )
                {
                  v150 = *(_QWORD *)(v85 + 1096);
                  v151 = 0;
                  (*(void (**)(void))(v85 + 360))();
                  (*(void (__fastcall **)(__int64, _QWORD))(v85 + 280))(v150, 0LL);
                  v152 = *(_QWORD ***)(v85 + 1056);
                  for ( i = *v152; i != v152; i = (_QWORD *)*i )
                  {
                    *((_BYTE *)i - 306) = 1;
                    ++v151;
                  }
                  v154 = *(_QWORD *)(v85 + 1032);
                  CurrentIrql = KeGetCurrentIrql();
                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = CurrentIrql;
                  __writecr8(0xCuLL);
                  (*(void (__fastcall **)(__int64, _QWORD *))(v85 + 312))(v154, v1 + 223);
                  v156 = *(_QWORD ***)(v85 + 1024);
                  v157 = *v156;
                  if ( *v156 != v156 )
                  {
                    do
                    {
                      v158 = v157 - 72;
                      if ( !*((_BYTE *)v157 - 130) && !*(_DWORD *)(v85 + 1536) )
                      {
                        *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v85 + 1560) = *(int *)v96;
                        *(_QWORD *)(v85 + 1568) = v158;
                        *(_DWORD *)(v85 + 1536) = 1;
                      }
                      *((_BYTE *)v158 + 446) = 0;
                      v157 = (_QWORD *)*v157;
                    }
                    while ( v157 != v156 );
                    CurrentIrql = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                  }
                  (*(void (__fastcall **)(_QWORD *))(v85 + 376))(v1 + 223);
                  __writecr8((unsigned __int8)CurrentIrql);
                  (*(void (__fastcall **)(_QWORD, _QWORD))(v85 + 288))(*(_QWORD *)(v85 + 1096), 0LL);
                  (*(void (**)(void))(v85 + 368))();
                  *(_DWORD *)(v85 + 1424) += v151 << 8;
                }
                goto LABEL_217;
              case 5:
                v128 = *(_DWORD *)(v85 + 1432);
                if ( (v128 & 1) == 0 )
                  goto LABEL_217;
                if ( (*(_DWORD *)(v85 + 1672) & 0x40000000) != 0 )
                {
                  v130 = __rdtsc();
                  v131 = (__ROR8__(v130, 3) ^ v130) * (unsigned __int128)0x7010008004002001uLL;
                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x5C8) = *((_QWORD *)&v131 + 1);
                  v129 = ((unsigned __int64)v131 ^ *((_QWORD *)&v131 + 1)) == 3
                                                                            * (((unsigned __int64)v131 ^ *((_QWORD *)&v131 + 1))
                                                                             / 3);
                }
                else
                {
                  v129 = (v128 & 3) == 3;
                }
                v132 = *(_QWORD *)(v85 + 1096);
                LOBYTE(i15) = v129;
                v133 = 0;
                *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = 0;
                (*(void (**)(void))(v85 + 360))();
                (*(void (__fastcall **)(__int64, _QWORD))(v85 + 280))(v132, 0LL);
                v134 = *(_QWORD ***)(v85 + 1056);
                v135 = *v134;
                if ( *v134 != v134 )
                {
                  do
                  {
                    *((_BYTE *)v135 - 306) = 1;
                    ++v133;
                    v135 = (_QWORD *)*v135;
                  }
                  while ( v135 != v134 );
                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v133;
                }
                v136 = *(unsigned int ***)(v85 + 1104);
                v137 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                v138 = 4LL;
                v139 = (__int64)*v136;
                v140 = **v136;
                do
                {
                  v141 = (__int64 *)(*(__int64 (__fastcall **)(__int64, unsigned __int64))(v85 + 248))(v139, v138);
                  v142 = 0LL;
                  v143 = v141;
                  if ( v141 )
                  {
                    v144 = (*v141 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                    v145 = *(_BYTE *)v144 & 0x7F;
                    if ( v145 == 3 )
                    {
                      if ( !*(_BYTE *)(v144 + 446)
                        && (*(_DWORD *)(v144 + 772) & 0x4000000) != 0
                        && !*(_DWORD *)(v85 + 1536) )
                      {
                        *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v85 + 1552) = (char *)v137 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v85 + 1560) = *v137;
                        *(_QWORD *)(v85 + 1568) = v144;
                        *(_DWORD *)(v85 + 1536) = 1;
                      }
                      *(_BYTE *)(v144 + 446) = 0;
                    }
                    else if ( v145 == 6 && (_DWORD)i15 )
                    {
                      if ( (v146 = *(_QWORD *)(v144 + 680), v146 != *(_QWORD *)(v85 + 720))
                        && v146 != *(_QWORD *)(v85 + 728)
                        || *(_QWORD *)(v144 + 696) != *(_QWORD *)(v85 + 736)
                        || *(_QWORD *)(v144 + 688) != *(_QWORD *)(v85 + 744) )
                      {
                        if ( !*(_DWORD *)(v85 + 1536) )
                        {
                          *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v85 + 1552) = (char *)v137 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v85 + 1560) = *v137;
                          *(_QWORD *)(v85 + 1568) = v144;
                          *(_DWORD *)(v85 + 1536) = 1;
                        }
                      }
                    }
                    (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(v85 + 272))(v139, v143, 0LL);
                  }
                  v138 += 4LL;
                }
                while ( v138 < v140 );
                v147 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(v85 + 288))(*(_QWORD *)(v85 + 1096), 0LL, v142);
                (*(void (**)(void))(v85 + 368))();
                *(_DWORD *)(v85 + 1424) += ((unsigned int)(v140 >> 2) + v147) << 8;
                goto LABEL_216;
              case 6:
                goto LABEL_184;
              case 7:
                (*(void (__fastcall **)(_QWORD *, _QWORD))(v85 + 400))(v1 + 174, *((unsigned int *)v96 + 7));
                (*(void (__fastcall **)(_QWORD *, _QWORD))(v85 + 408))(v1 + 174, 0LL);
                for ( j = 0; j < *((_DWORD *)v96 + 6); ++j )
                {
                  v122 = *(_QWORD *)&v96[24 * j + 56];
                  v123 = *(_QWORD *)&v96[24 * j + 48] & __readmsr(*(_DWORD *)&v96[24 * j + 64]);
                  if ( v123 != v122 )
                  {
                    v124 = *(unsigned int *)&v96[24 * j + 64] | ((unsigned __int64)*((unsigned int *)v96 + 7) << 32);
                    if ( !*(_DWORD *)(v85 + 1536) )
                    {
                      *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v123 ^ v122;
                      if ( !*(_DWORD *)(v85 + 1536) )
                      {
                        *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v85 + 1560) = *(int *)v96;
                        *(_QWORD *)(v85 + 1568) = v124;
                        *(_DWORD *)(v85 + 1536) = 1;
                      }
                    }
                  }
                }
                (*(void (**)(void))(v85 + 392))();
                v125 = *((_DWORD *)v96 + 6) << 15;
                goto LABEL_183;
              case 8:
                v106 = *((_QWORD *)v96 + 3);
                if ( *(_BYTE *)(v106 + 66) != v96[34] && !*(_DWORD *)(v85 + 1536) )
                {
                  *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1560) = *(int *)v96;
                  *(_QWORD *)(v85 + 1568) = v106;
                  *(_DWORD *)(v85 + 1536) = 1;
                }
                if ( (v96[34] & 0x40) == 0 && *(_QWORD *)(v106 + 200) != v106 + 200 && !*(_DWORD *)(v85 + 1536) )
                {
                  *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1560) = *(int *)v96;
                  *(_QWORD *)(v85 + 1568) = v106;
                  *(_DWORD *)(v85 + 1536) = 1;
                }
                if ( *(_DWORD *)v96 != 11 || *(_QWORD *)(v85 + 1664) )
                {
                  v107 = (_QWORD *)*((_QWORD *)v96 + 1);
                  v108 = *((unsigned int *)v96 + 4);
                  v109 = (const char *)v107;
                  if ( v107 < (_QWORD *)((char *)v107 + v108) )
                  {
                    do
                    {
                      _mm_prefetch(v109, 0);
                      v109 += 64;
                    }
                    while ( v109 < (const char *)v107 + v108 );
                  }
                  v110 = *(_QWORD *)(v85 + 1408);
                  v111 = *((_DWORD *)v96 + 4);
                  if ( (unsigned int)v108 >= 8 )
                  {
                    v112 = v108 >> 3;
                    do
                    {
                      v111 -= 8;
                      v110 = __ROL8__(*v107++ ^ v110, *(_DWORD *)(v85 + 1404));
                      --v112;
                    }
                    while ( v112 );
                  }
                  for ( ; v111; --v111 )
                  {
                    v113 = *(unsigned __int8 *)v107;
                    v107 = (_QWORD *)((char *)v107 + 1);
                    v110 = __ROL8__(v113 ^ v110, *(_DWORD *)(v85 + 1404));
                  }
                  *(_DWORD *)(v85 + 1424) += v108;
                  for ( k = v110; ; LODWORD(v110) = k ^ v110 )
                  {
                    k >>= 31;
                    if ( !k )
                      break;
                  }
                  v115 = *((unsigned int *)v96 + 5);
                  v116 = v110 & 0x7FFFFFFF;
                  if ( v116 != (_DWORD)v115 )
                  {
                    if ( !*(_DWORD *)(v85 + 1536) )
                      *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v115 ^ v116;
                    v117 = *((_QWORD *)v96 + 1);
                    if ( !*(_DWORD *)(v85 + 1536) )
                    {
                      *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v85 + 1560) = *(int *)v96;
                      *(_QWORD *)(v85 + 1568) = v117;
                      *(_DWORD *)(v85 + 1536) = 1;
                    }
                  }
                }
                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x380) = v96 + 48;
                v118 = *((_WORD *)v96 + 16);
                *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x378) = v118;
                *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x37A) = v118;
                v1918 = v1 + 89;
                v119 = *(_QWORD *)(v85 + 1040);
                LOBYTE(v1917) = 0;
                if ( (*(int (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, _QWORD *))(v85 + 432))(
                       v1 + 111,
                       0LL,
                       0LL,
                       0LL,
                       v119,
                       v1917,
                       0LL,
                       v1 + 89) < 0 )
                  goto LABEL_217;
                v120 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2C8);
                if ( v120 != *((_QWORD *)v96 + 3) && !*(_DWORD *)(v85 + 1536) )
                {
                  *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1560) = *(int *)v96;
                  *(_QWORD *)(v85 + 1568) = v120;
                  *(_DWORD *)(v85 + 1536) = 1;
                  v120 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2C8);
                }
                goto LABEL_175;
            }
            goto LABEL_1151;
          }
          if ( *((_DWORD *)v96 + 6) && !*(_QWORD *)(v85 + 1664) )
          {
LABEL_236:
            *(_DWORD *)(v85 + 1420) = 0;
            goto LABEL_217;
          }
          v159 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
          v160 = v96 + 48;
          v161 = (unsigned int *)&v160[16 * *(unsigned int *)(v85 + 1420)];
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v160;
          v162 = (unsigned int *)&v160[16 * v159[7]];
          do
          {
            if ( (*v161 & 0x80000000) == 0 )
            {
              v163 = (_QWORD *)*((_QWORD *)v161 + 1);
              v164 = v161[1];
              v165 = v163;
              v166 = (const char *)v163;
              if ( v163 < (_QWORD *)((char *)v163 + v164) )
              {
                do
                {
                  _mm_prefetch(v166, 0);
                  v166 += 64;
                }
                while ( v166 < (const char *)v163 + v164 );
              }
              v167 = *(_QWORD *)(v85 + 1408);
              v168 = v161[1];
              if ( (unsigned int)v164 >= 8 )
              {
                v169 = v164 >> 3;
                do
                {
                  v168 -= 8;
                  v167 = __ROL8__(*v165++ ^ v167, *(_DWORD *)(v85 + 1404));
                  --v169;
                }
                while ( v169 );
                v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
              }
              if ( v168 )
              {
                do
                {
                  v170 = *(unsigned __int8 *)v165;
                  v165 = (_QWORD *)((char *)v165 + 1);
                  v167 = __ROL8__(v170 ^ v167, *(_DWORD *)(v85 + 1404));
                  --v168;
                }
                while ( v168 );
                v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
              }
              *(_DWORD *)(v85 + 1424) += v164;
              for ( m = v167 >> 31; m; m >>= 31 )
                LODWORD(v167) = m ^ v167;
              i6 = *v161;
              v172 = v167 & 0x7FFFFFFF;
              if ( v172 != (*v161 & 0x7FFFFFFF) )
              {
                i6 &= 0x7FFFFFFFu;
                if ( !*(_DWORD *)(v85 + 1536) )
                {
                  *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = i6 ^ v172;
                  if ( !*(_DWORD *)(v85 + 1536) )
                  {
                    *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v85 + 1552) = (char *)v159 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v85 + 1560) = *v159;
                    *(_QWORD *)(v85 + 1568) = v163;
                    *(_DWORD *)(v85 + 1536) = 1;
                  }
                }
              }
              v91 = (_DWORD *)*v1;
            }
            v161 += 4;
            v173 = v161 == v162;
            if ( v161 >= v162 )
              goto LABEL_259;
          }
          while ( *(_DWORD *)(v85 + 1424) < *v91 );
          v173 = v161 == v162;
LABEL_259:
          if ( v173 )
          {
LABEL_260:
            i15 = 0LL;
            goto LABEL_236;
          }
          v174 = ((__int64)v161 - *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8)) >> 4;
          goto LABEL_262;
        }
        if ( v105 != 11 )
        {
          if ( v105 == 12 )
          {
LABEL_322:
            if ( v105 == 12 && !*(_QWORD *)(v85 + 1664) )
              goto LABEL_236;
            if ( !*(_DWORD *)(v85 + 1420) )
            {
              v198 = (_QWORD *)*((_QWORD *)v96 + 1);
              v199 = *((unsigned int *)v96 + 4);
              v200 = (const char *)v198;
              if ( v198 < (_QWORD *)((char *)v198 + v199) )
              {
                do
                {
                  _mm_prefetch(v200, 0);
                  v200 += 64;
                }
                while ( v200 < (const char *)v198 + v199 );
              }
              v201 = *(_QWORD *)(v85 + 1408);
              i6 = (unsigned int)v199;
              if ( (unsigned int)v199 >= 8 )
              {
                v202 = v199 >> 3;
                do
                {
                  i6 = (unsigned int)(i6 - 8);
                  v201 = __ROL8__(*v198++ ^ v201, *(_DWORD *)(v85 + 1404));
                  --v202;
                }
                while ( v202 );
              }
              if ( (_DWORD)i6 )
              {
                do
                {
                  v203 = *(unsigned __int8 *)v198;
                  v198 = (_QWORD *)((char *)v198 + 1);
                  v201 = __ROL8__(v203 ^ v201, *(_DWORD *)(v85 + 1404));
                  v127 = (_DWORD)i6 == 1;
                  i6 = (unsigned int)(i6 - 1);
                }
                while ( !v127 );
              }
              *(_DWORD *)(v85 + 1424) += v199;
              for ( n = v201; ; LODWORD(v201) = n ^ v201 )
              {
                n >>= 31;
                if ( !n )
                  break;
              }
              v205 = *((unsigned int *)v96 + 5);
              v206 = v201 & 0x7FFFFFFF;
              if ( v206 != (_DWORD)v205 )
              {
                if ( !*(_DWORD *)(v85 + 1536) )
                  *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v205 ^ v206;
                v207 = *((_QWORD *)v96 + 1);
                if ( !*(_DWORD *)(v85 + 1536) )
                {
                  *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1560) = *(int *)v96;
                  *(_QWORD *)(v85 + 1568) = v207;
                  *(_DWORD *)(v85 + 1536) = 1;
                }
              }
            }
            v208 = *((_QWORD *)v96 + 1);
            v209 = *((unsigned int *)v96 + 4);
            v210 = *(unsigned int *)(v85 + 1420);
            v211 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
            v212 = (_DWORD *)*v1;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v208;
            v213 = (unsigned int *)(v208 + 12 * v210);
            v214 = v209 / 0xC;
            v215 = &v211[v210 + 12];
            v216 = (unsigned int *)(v208 + 12 * (v209 / 0xC));
            do
            {
              if ( (*v215 & 0x80000000) == 0 )
              {
                v217 = (_QWORD *)(*((_QWORD *)v211 + 4) + *v213);
                i6 = v213[1] - *v213;
                v218 = v217;
                v219 = (const char *)v217;
                if ( v217 < (_QWORD *)((char *)v217 + i6) )
                {
                  do
                  {
                    _mm_prefetch(v219, 0);
                    v219 += 64;
                  }
                  while ( v219 < (const char *)v217 + i6 );
                }
                v220 = *(_QWORD *)(v85 + 1408);
                v221 = i6;
                if ( (unsigned int)i6 >= 8 )
                {
                  v222 = (unsigned __int64)(unsigned int)i6 >> 3;
                  do
                  {
                    v221 -= 8;
                    v220 = __ROL8__(*v218++ ^ v220, *(_DWORD *)(v85 + 1404));
                    --v222;
                  }
                  while ( v222 );
                }
                for ( ; v221; --v221 )
                {
                  v223 = *(unsigned __int8 *)v218;
                  v218 = (_QWORD *)((char *)v218 + 1);
                  v220 = __ROL8__(v223 ^ v220, *(_DWORD *)(v85 + 1404));
                }
                *(_DWORD *)(v85 + 1424) += i6;
                for ( ii = v220; ; LODWORD(v220) = ii ^ v220 )
                {
                  ii >>= 31;
                  if ( !ii )
                    break;
                }
                v214 = v220 & 0x7FFFFFFF;
                if ( (_DWORD)v214 != (*v215 & 0x7FFFFFFF) && !*(_DWORD *)(v85 + 1536) )
                {
                  *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = *v215 & 0x7FFFFFFF ^ (unsigned __int64)(unsigned int)v214;
                  if ( !*(_DWORD *)(v85 + 1536) )
                  {
                    *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v85 + 1552) = (char *)v211 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v85 + 1560) = *v211;
                    *(_QWORD *)(v85 + 1568) = v217;
                    *(_DWORD *)(v85 + 1536) = 1;
                  }
                }
              }
              ++v215;
              v213 += 3;
              v225 = v213 == v216;
              if ( v213 >= v216 )
                goto LABEL_359;
            }
            while ( *(_DWORD *)(v85 + 1424) < *v212 );
            v225 = v213 == v216;
LABEL_359:
            if ( v225 )
            {
              v226 = *(_QWORD *)(v85 + 1088);
              v227 = *(_QWORD *)(v85 + 1064) + 16LL;
              v228 = KeGetCurrentIrql();
              __writecr8(0xFuLL);
              (*(void (__fastcall **)(__int64, unsigned __int64, __int64))(v85 + 320))(v226, v214, 12LL);
              v230 = *(unsigned int **)(v85 + 1064);
              v231 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
              v232 = *((_BYTE *)v230 + 12) != 0;
              v233 = v227 + 24LL * *v230;
              while ( 1 )
              {
                v234 = 24LL;
                v235 = (__int64 *)(v231 + 24);
                v236 = (__int64 *)v227;
                while ( 1 )
                {
                  v237 = *v236++;
                  v238 = *v235++;
                  if ( v237 != v238 )
                    break;
                  v234 = (unsigned int)(v234 - 8);
                  if ( (unsigned int)v234 < 8 )
                  {
                    v239 = (_DWORD)v234 == 0;
                    while ( !v239 )
                    {
                      v229 = *(unsigned __int8 *)v236;
                      v236 = (__int64 *)((char *)v236 + 1);
                      v240 = *(unsigned __int8 *)v235;
                      v235 = (__int64 *)((char *)v235 + 1);
                      if ( v229 != v240 )
                        goto LABEL_368;
                      v239 = (_DWORD)v234 == 1;
                      v234 = (unsigned int)(v234 - 1);
                    }
LABEL_369:
                    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v85 + 384))(
                      *(_QWORD *)(v85 + 1088),
                      v229,
                      v234,
                      v235);
                    __writecr8(v228);
                    i15 = 0LL;
                    if ( (!v232 || *(_QWORD *)(v231 + 24) != 1LL) && v227 == v233 && !*(_DWORD *)(v85 + 1536) )
                    {
                      v241 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                      *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v85 + 1552) = (char *)v241 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v85 + 1560) = *v241;
                      *(_QWORD *)(v85 + 1568) = v227;
                      *(_DWORD *)(v85 + 1536) = 1;
                    }
                    *(_DWORD *)(v85 + 1420) = 0;
                    goto LABEL_217;
                  }
                }
LABEL_368:
                v227 += 24LL;
                if ( v227 >= v233 )
                  goto LABEL_369;
              }
            }
            v174 = ((__int64)v213 - *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8)) / 12;
LABEL_262:
            *(_DWORD *)(v85 + 1420) = v174;
            goto LABEL_263;
          }
          if ( v105 <= 14 )
          {
            if ( v105 == 14 && !*(_QWORD *)(v85 + 1664) )
              goto LABEL_217;
            v181 = (_QWORD *)*((_QWORD *)v96 + 1);
            v182 = *((unsigned int *)v96 + 4);
            v183 = (const char *)v181;
            if ( v181 < (_QWORD *)((char *)v181 + v182) )
            {
              do
              {
                _mm_prefetch(v183, 0);
                v183 += 64;
              }
              while ( v183 < (const char *)v181 + v182 );
            }
            v184 = *(_QWORD *)(v85 + 1408);
            v185 = *((_DWORD *)v96 + 4);
            if ( (unsigned int)v182 >= 8 )
            {
              i6 = v182 >> 3;
              do
              {
                v185 -= 8;
                v184 = __ROL8__(*v181++ ^ v184, *(_DWORD *)(v85 + 1404));
                --i6;
              }
              while ( i6 );
            }
            for ( ; v185; --v185 )
            {
              v186 = *(unsigned __int8 *)v181;
              v181 = (_QWORD *)((char *)v181 + 1);
              v184 = __ROL8__(v186 ^ v184, *(_DWORD *)(v85 + 1404));
            }
            *(_DWORD *)(v85 + 1424) += v182;
            for ( jj = v184; ; LODWORD(v184) = jj ^ v184 )
            {
              jj >>= 31;
              if ( !jj )
                break;
            }
            v188 = v184 & 0x7FFFFFFF;
            if ( v188 != *((_DWORD *)v96 + 5) )
            {
              _InterlockedOr(v1915, 0);
              if ( (*((_DWORD *)v96 + 6) & 1) == 0 || !**(_BYTE **)(v85 + 1144) )
              {
                if ( !*(_DWORD *)(v85 + 1536) )
                  *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = *((unsigned int *)v96 + 5) ^ (unsigned __int64)v188;
                v189 = *((_QWORD *)v96 + 1);
                if ( !*(_DWORD *)(v85 + 1536) )
                {
                  *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1560) = *(int *)v96;
                  *(_QWORD *)(v85 + 1568) = v189;
                  *(_DWORD *)(v85 + 1536) = 1;
                }
              }
            }
            if ( (*(_DWORD *)(v85 + 1672) & 0x40000000) == 0 )
              goto LABEL_217;
            v190 = *((_DWORD *)v96 + 4);
            if ( !v190 )
              goto LABEL_217;
            sub_14017D2FC(v85, *((_QWORD *)v96 + 1), v190, (__int64)(v1 + 177));
            v191 = 16;
            i6 = (unsigned __int64)(v96 + 28);
            v192 = v1 + 177;
            do
            {
              v193 = *v192++;
              v194 = *(_QWORD *)i6;
              i6 += 8LL;
              if ( v193 != v194 )
                goto LABEL_317;
              v191 -= 8;
            }
            while ( v191 >= 8 );
            if ( v191 )
            {
              while ( 1 )
              {
                v195 = *(unsigned __int8 *)v192;
                v192 = (__int64 *)((char *)v192 + 1);
                v196 = *(unsigned __int8 *)i6++;
                if ( v195 != v196 )
                  break;
                if ( !--v191 )
                  goto LABEL_321;
              }
LABEL_317:
              _InterlockedOr(v1915, 0);
              if ( (*((_DWORD *)v96 + 6) & 1) == 0 || !**(_BYTE **)(v85 + 1144) )
              {
                v197 = *((_QWORD *)v96 + 1);
                if ( !*(_DWORD *)(v85 + 1536) )
                {
                  *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1560) = *(int *)v96;
                  *(_QWORD *)(v85 + 1568) = v197;
                  *(_DWORD *)(v85 + 1536) = 1;
                }
              }
            }
LABEL_321:
            v125 = 16 * *((_DWORD *)v96 + 4);
LABEL_183:
            *(_DWORD *)(v85 + 1424) += v125;
            goto LABEL_217;
          }
          switch ( v105 )
          {
            case 15:
              if ( *(_DWORD *)(v85 + 1624) == 6 )
              {
                *(_DWORD *)(v85 + 1424) += 256;
                v175 = *(_QWORD *)(v85 + 1152);
                v176 = (*(__int64 (__fastcall **)(__int64))(v85 + 648))(v175);
                v177 = v176;
                if ( v176 )
                {
                  v178 = (*(__int64 (__fastcall **)(__int64))(v85 + 656))(v176);
                  v179 = *((_QWORD *)v96 + 3);
                  if ( v179 )
                  {
                    if ( v179 != v178 && !*(_DWORD *)(v85 + 1536) )
                    {
                      *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v85 + 1560) = *(int *)v96;
                      *(_QWORD *)(v85 + 1568) = v178;
                      *(_DWORD *)(v85 + 1536) = 1;
                    }
                  }
                  else
                  {
                    v180 = *(_QWORD *)(v85 + 1656);
                    if ( (!*(_DWORD *)(v85 + 1652) || v178 < v180 || v178 > v180 + *(unsigned int *)(v85 + 1652) - 1LL)
                      && !*(_DWORD *)(v85 + 1536) )
                    {
                      *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v85 + 1560) = *(int *)v96;
                      *(_QWORD *)(v85 + 1568) = v178;
                      *(_DWORD *)(v85 + 1536) = 1;
                    }
                    *((_QWORD *)v96 + 3) = v178;
                  }
                  (*(void (__fastcall **)(__int64, __int64))(v85 + 664))(v175, v177);
                }
              }
              goto LABEL_217;
            case 16:
              v126 = **((_QWORD **)v96 + 4);
              if ( !v126 )
                goto LABEL_217;
              v127 = v126 == *((_QWORD *)v96 + 3);
              break;
            case 17:
              v126 = **((_QWORD **)v96 + 6);
              if ( !v126 || v126 == *((_QWORD *)v96 + 3) || v126 == *((_QWORD *)v96 + 4) )
                goto LABEL_217;
              v127 = v126 == *((_QWORD *)v96 + 5);
              break;
            default:
LABEL_184:
              v126 = **((_QWORD **)v96 + 5);
              if ( !v126 || v126 == *((_QWORD *)v96 + 3) )
                goto LABEL_217;
              v127 = v126 == *((_QWORD *)v96 + 4);
              break;
          }
LABEL_187:
          if ( v127 )
            goto LABEL_217;
          v93 = 0x8000LL;
          if ( !*(_DWORD *)(v85 + 1536) )
          {
            *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v85 + 1560) = *(int *)v96;
            *(_QWORD *)(v85 + 1568) = v126;
            *(_DWORD *)(v85 + 1536) = 1;
          }
          goto LABEL_218;
        }
        if ( !*(_QWORD *)(v85 + 1664) )
          goto LABEL_217;
LABEL_378:
        v242 = (_QWORD *)*((_QWORD *)v96 + 1);
        v243 = *((unsigned int *)v96 + 4);
        v244 = (const char *)v242;
        if ( v242 < (_QWORD *)((char *)v242 + v243) )
        {
          do
          {
            _mm_prefetch(v244, 0);
            v244 += 64;
          }
          while ( v244 < (const char *)v242 + v243 );
        }
        v245 = *(_QWORD *)(v85 + 1408);
        v246 = *((_DWORD *)v96 + 4);
        if ( (unsigned int)v243 >= 8 )
        {
          i6 = v243 >> 3;
          do
          {
            v246 -= 8;
            v245 = __ROL8__(*v242++ ^ v245, *(_DWORD *)(v85 + 1404));
            --i6;
          }
          while ( i6 );
        }
        for ( ; v246; --v246 )
        {
          v247 = *(unsigned __int8 *)v242;
          v242 = (_QWORD *)((char *)v242 + 1);
          v245 = __ROL8__(v247 ^ v245, *(_DWORD *)(v85 + 1404));
        }
        *(_DWORD *)(v85 + 1424) += v243;
        for ( kk = v245; ; LODWORD(v245) = kk ^ v245 )
        {
          kk >>= 31;
          if ( !kk )
            break;
        }
        v249 = *((unsigned int *)v96 + 5);
        v250 = v245 & 0x7FFFFFFF;
        if ( v250 == (_DWORD)v249 )
          goto LABEL_217;
        if ( !*(_DWORD *)(v85 + 1536) )
          *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v249 ^ v250;
        goto LABEL_391;
      }
      if ( v105 > 29 )
        break;
      switch ( v105 )
      {
        case 29:
          v754 = (_QWORD *)*((_QWORD *)v96 + 1);
          v755 = *((unsigned int *)v96 + 4);
          v756 = (const char *)v754;
          if ( v754 < (_QWORD *)((char *)v754 + v755) )
          {
            do
            {
              _mm_prefetch(v756, 0);
              v756 += 64;
            }
            while ( v756 < (const char *)v754 + v755 );
          }
          v757 = *(_QWORD *)(v85 + 1408);
          i6 = (unsigned int)v755;
          if ( (unsigned int)v755 >= 8 )
          {
            v758 = v755 >> 3;
            do
            {
              i6 = (unsigned int)(i6 - 8);
              v757 = __ROL8__(*v754++ ^ v757, *(_DWORD *)(v85 + 1404));
              --v758;
            }
            while ( v758 );
          }
          if ( (_DWORD)i6 )
          {
            do
            {
              v759 = *(unsigned __int8 *)v754;
              v754 = (_QWORD *)((char *)v754 + 1);
              v757 = __ROL8__(v759 ^ v757, *(_DWORD *)(v85 + 1404));
              v127 = (_DWORD)i6 == 1;
              i6 = (unsigned int)(i6 - 1);
            }
            while ( !v127 );
          }
          *(_DWORD *)(v85 + 1424) += v755;
          for ( mm = v757; ; LODWORD(v757) = mm ^ v757 )
          {
            mm >>= 31;
            if ( !mm )
              break;
          }
          v761 = *((unsigned int *)v96 + 5);
          v762 = v757 & 0x7FFFFFFF;
          if ( v762 != (_DWORD)v761 )
          {
            if ( !*(_DWORD *)(v85 + 1536) )
              *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v761 ^ v762;
            v763 = *((_QWORD *)v96 + 1);
            if ( !*(_DWORD *)(v85 + 1536) )
            {
              *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1560) = *(int *)v96;
              *(_QWORD *)(v85 + 1568) = v763;
              *(_DWORD *)(v85 + 1536) = 1;
            }
          }
          v764 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
          v765 = (__int64 **)*((_QWORD *)v96 + 1);
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v765;
          v766 = *(_DWORD *)(v764 + 16) >> 4;
          if ( !v766 )
            goto LABEL_217;
          v767 = v766;
          v768 = (char *)v764;
          *v1 = v766;
          do
          {
            v769 = v768;
            v770 = **v765;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2D0) = 0LL;
            v771 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD *, unsigned __int64))(v85 + 704))(
                     v770,
                     v1 + 90,
                     v754,
                     i6);
            if ( v771 )
            {
              do
              {
                (*(void (__fastcall **)(__int64, _QWORD *, _QWORD *))(v85 + 456))(v771, v1 + 88, v1 + 100);
                if ( !*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2C0)
                  && !(*(__int64 (__fastcall **)(__int64, _QWORD *))(v85 + 464))(v771, v1 + 88) )
                {
                  if ( (*(_DWORD *)(v85 + 1672) & 0x40000000) != 0 )
                  {
                    v772 = *(_QWORD **)(v85 + 1848);
                    v773 = 48;
                    v774 = 6LL;
                    do
                    {
                      v773 -= 8;
                      *v772 = *(_QWORD *)v769;
                      v769 += 8;
                      ++v772;
                      --v774;
                    }
                    while ( v774 );
                    for ( ; v773; --v773 )
                    {
                      v775 = *v769++;
                      *(_BYTE *)v772 = v775;
                      v772 = (_QWORD *)((char *)v772 + 1);
                    }
                    v769 = *(char **)(v85 + 1848);
                  }
                  *((_QWORD *)v769 + 3) = v771;
                  *((_QWORD *)v769 + 4) = v770;
                  v776 = *(_QWORD *)(v85 + 1160);
                  *(_QWORD *)v776 = v769;
                  *(_DWORD *)(v776 + 16) = 48;
                  v777 = *(_QWORD *)(v85 + 1160);
                  *(_QWORD *)(v777 + 8) = v771;
                  *(_DWORD *)(v777 + 20) = 4096;
                  if ( !*(_DWORD *)(v85 + 1536) )
                  {
                    *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v85 + 1552) = v769 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v85 + 1560) = *(int *)v769;
                    *(_QWORD *)(v85 + 1568) = 6LL;
                    *(_DWORD *)(v85 + 1536) = 1;
                  }
                }
                v771 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(v85 + 704))(v770, v1 + 90);
              }
              while ( v771 );
              v765 = *(__int64 ***)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
              v767 = *v1;
              v768 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
            }
            v765 += 2;
            --v767;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v765;
            *v1 = v767;
          }
          while ( v767 );
LABEL_263:
          i15 = 0LL;
          goto LABEL_217;
        case 20:
          goto LABEL_184;
        case 21:
          v749 = *((_DWORD *)v96 + 10);
          (*(void (__fastcall **)(_QWORD *, _QWORD))(v85 + 400))(v1 + 180, *((unsigned int *)v96 + 11));
          (*(void (__fastcall **)(_QWORD *, _QWORD))(v85 + 408))(v1 + 180, 0LL);
          v127 = v749 == 0;
          v750 = __readcr4();
          if ( v127 )
            v750 = __readcr0();
          (*(void (**)(void))(v85 + 392))();
          v751 = *((_QWORD *)v96 + 4);
          v752 = v750 & *((_QWORD *)v96 + 3);
          if ( v752 == v751 )
            goto LABEL_217;
          v753 = *((_QWORD *)v96 + 5);
          if ( *(_DWORD *)(v85 + 1536) )
            goto LABEL_217;
          *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v752 ^ v751;
          if ( *(_DWORD *)(v85 + 1536) )
            goto LABEL_217;
          *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v85 + 1560) = *(int *)v96;
          *(_QWORD *)(v85 + 1568) = v753;
          goto LABEL_394;
        case 24:
          if ( (*(_DWORD *)(v85 + 1672) & 0x40000000) != 0 )
          {
            v375 = __rdtsc();
            v376 = (__ROR8__(v375, 3) ^ v375) * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x510) = *((_QWORD *)&v376 + 1);
            *(_DWORD *)(v85 + 1420) = ((unsigned __int64)v376 ^ *((_QWORD *)&v376 + 1)) % 5;
          }
          while ( 1 )
          {
            v377 = *(_DWORD *)(v85 + 1420);
            if ( v377 )
            {
              v378 = v377 - 1;
              if ( v378 )
              {
                v379 = v378 - 1;
                if ( v379 )
                {
                  v380 = v379 - 1;
                  if ( !v380 )
                  {
                    v127 = (*(_DWORD *)(v85 + 1672) & 0x40000000) == 0;
                    v392 = (_BYTE *)v85;
                    v393 = *(__int64 **)(v85 + 1016);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v85;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v85;
                    v394 = *v393;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = *v393;
                    if ( !v127 )
                    {
                      LODWORD(i15) = 0;
                      goto LABEL_1102;
                    }
                    v395 = *((_QWORD *)v96 + 5);
                    if ( v395 )
                    {
                      LODWORD(i15) = 1;
                      if ( v394 != v395 )
                      {
                        *((_QWORD *)v96 + 3) = v394;
                        v396 = *(_QWORD *)(v85 + 1160);
                        *(_QWORD *)v396 = v96;
                        *(_DWORD *)(v396 + 16) = 48;
                        v397 = *(_QWORD *)(v85 + 1160);
                        *(_QWORD *)(v397 + 8) = v394;
                        *(_DWORD *)(v397 + 20) = 4096;
                        if ( !*(_DWORD *)(v85 + 1536) )
                        {
                          *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v85 + 1560) = *(int *)v96;
                          *(_QWORD *)(v85 + 1568) = 5LL;
                          *(_DWORD *)(v85 + 1536) = 1;
                        }
                      }
                      goto LABEL_1102;
                    }
                    if ( !v394 )
                      goto LABEL_1102;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) = 1;
                    v398 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD *))(v85 + 456))(v394, v1 + 27, v1 + 17);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v398;
                    v400 = v398;
                    if ( !v398 )
                    {
                      v401 = -1073741701;
                      goto LABEL_1055;
                    }
                    v402 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8);
                    v403 = v1 + 46;
                    v404 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                    v405 = 4;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v404;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v402;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x168) = 0LL;
                    do
                    {
                      *v403++ = 0;
                      --v405;
                    }
                    while ( v405 );
                    v406 = 0;
                    if ( *(_DWORD *)(v85 + 1396) )
                    {
                      v407 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x170);
                      LODWORD(v399) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x16C);
                      LODWORD(i6) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x168);
                      while ( 1 )
                      {
                        v408 = v85;
                        v409 = 0;
                        if ( *(_QWORD *)(v85 + 1840) )
                          v408 = *(_QWORD *)(v85 + 1840);
                        v410 = v408 + *(unsigned int *)(v408 + 1392);
                        if ( (_DWORD)i6 && (unsigned int)v399 <= v406 )
                        {
                          v409 = v399;
                          v410 = v408 + v407;
                        }
                        if ( v409 != v406 )
                          break;
LABEL_640:
                        v399 = v409;
                        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x168) = 1;
                        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x16C) = v409;
                        v407 = v410 - v408;
                        i6 = 1LL;
                        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x170) = v410 - v408;
                        v419 = *(_DWORD *)v410;
                        if ( (*(_DWORD *)v410 == 1 || v419 == 12)
                          && *(_QWORD *)(v410 + 8) == v400
                          && *(_DWORD *)(v410 + 16) == v404
                          || (unsigned int)(v419 - 33) <= 1 && *(_QWORD *)(v410 + 32) == v402 )
                        {
                          goto LABEL_648;
                        }
                        if ( ++v406 >= *(_DWORD *)(v85 + 1396) )
                          goto LABEL_647;
                      }
                      v411 = v406 - v409;
                      v409 = v406;
                      while ( 2 )
                      {
                        v412 = *(_DWORD *)v410;
                        if ( *(int *)v410 > 17 )
                        {
                          if ( v412 != 19 )
                          {
                            if ( v412 != 28 )
                            {
                              if ( v412 == 30 )
                              {
                                v417 = (((*(_DWORD *)(v410 + 36) - 1) / 0xCu + 7) & 0xFFFFFFF8)
                                     + 24 * (*(unsigned __int16 *)(v410 + 40) + 2);
                              }
                              else if ( (unsigned int)(v412 - 33) > 1 )
                              {
LABEL_624:
                                v417 = 48LL;
                              }
                              else
                              {
                                v417 = 20
                                     * (unsigned int)(((*(_DWORD *)(v410 + 32) & 0xFFF)
                                                     + (unsigned __int64)*(unsigned int *)(v410 + 40)
                                                     + 4095) >> 12)
                                     + 48;
                              }
                              goto LABEL_638;
                            }
                            v418 = *(unsigned __int16 *)(v410 + 40);
LABEL_627:
                            v417 = (v418 + 55) & 0xFFFFFFF8;
                            goto LABEL_638;
                          }
                        }
                        else if ( v412 != 17 )
                        {
                          v413 = v412 - 1;
                          if ( !v413 )
                            goto LABEL_629;
                          v414 = v413 - 6;
                          if ( !v414 )
                          {
                            v417 = (unsigned int)(24 * (*(_DWORD *)(v410 + 24) + 2));
                            goto LABEL_638;
                          }
                          v415 = v414 - 1;
                          if ( v415 )
                          {
                            v416 = v415 - 2;
                            if ( v416 )
                            {
                              if ( v416 != 2 )
                                goto LABEL_624;
LABEL_629:
                              v417 = 4 * (*(_DWORD *)(v410 + 16) / 0xCu) + 48;
                            }
                            else
                            {
                              v417 = (unsigned int)(16 * (*(_DWORD *)(v410 + 28) + 3));
                            }
LABEL_638:
                            v410 += v417;
                            if ( !--v411 )
                            {
                              v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                              v402 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                              v404 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                              v400 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                              goto LABEL_640;
                            }
                            continue;
                          }
                          v418 = *(unsigned __int16 *)(v410 + 32);
                          goto LABEL_627;
                        }
                        break;
                      }
                      v417 = 56LL;
                      goto LABEL_638;
                    }
LABEL_647:
                    v410 = 0LL;
LABEL_648:
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D0) = v410;
                    if ( v410 )
                    {
                      v401 = -1073741554;
                      goto LABEL_1053;
                    }
                    v420 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, unsigned __int64))(v85 + 616))(
                             *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68),
                             v399,
                             0LL,
                             i6);
                    v127 = (*(_DWORD *)(v85 + 1672) & 0x40000000) == 0;
                    v421 = v420;
                    v422 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v420;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = v422;
                    if ( !v127 )
                    {
                      v423 = sub_14079AC8C(
                               v1 + 25,
                               *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8),
                               1LL);
                      v392 = *(_BYTE **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8);
                      v401 = v423;
                      goto LABEL_1054;
                    }
                    v424 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8);
                    *v1 = v424;
                    v425 = (*(__int64 (__fastcall **)(__int64))(v85 + 448))(v424);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v425;
                    if ( !v425 )
                      goto LABEL_653;
                    v426 = *(unsigned int *)(v85 + 1356);
                    v427 = *(_DWORD *)(v85 + 1580);
                    v428 = v422;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) = v422 / 0xC;
                    v429 = 4 * (v422 / 0xC);
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v429;
                    v430 = v421 != 0 ? 12 : 1;
                    v431 = (unsigned int)(v426 + v429 + 48);
                    v432 = v85 & -(__int64)((*(_DWORD *)(v85 + 1672) & 0x20000000) != 0);
                    if ( v427 <= 1 )
                    {
                      if ( v432 )
                      {
                        v433 = *(unsigned int *)((v85 & -(__int64)((*(_DWORD *)(v85 + 1672) & 0x20000000) != 0)) + 0x55C);
LABEL_660:
                        v434 = ((__int64 (__fastcall *)(__int64, __int64))(v432 + v433))(v85, v431);
                      }
                      else
                      {
                        v434 = ((__int64 (__fastcall *)(__int64, __int64))sub_140285AAC)(v85, v431);
                      }
                    }
                    else
                    {
                      if ( v432 )
                      {
                        v433 = *(unsigned int *)((v85 & -(__int64)((*(_DWORD *)(v85 + 1672) & 0x20000000) != 0)) + 0x560);
                        goto LABEL_660;
                      }
                      v434 = sub_140285DF0(v85, v431);
                    }
                    v435 = v434;
                    if ( !v434 )
                      goto LABEL_1052;
                    v436 = *(_DWORD *)(v85 + 1672);
                    if ( (v436 & 4) == 0 )
                    {
                      v437 = *(_DWORD *)(v85 + 1356);
                      v438 = *(_QWORD *)(v85 + 1328);
                      v439 = (_QWORD *)v85;
                      v440 = *(_DWORD *)(v85 + 1580) & (unsigned int)-((v436 & 0x20000000) != 0);
                      if ( v437 >= 8 )
                      {
                        v441 = (unsigned __int64)v437 >> 3;
                        do
                        {
                          *v439 = 0LL;
                          v437 -= 8;
                          ++v439;
                          --v441;
                        }
                        while ( v441 );
                      }
                      for ( ; v437; --v437 )
                      {
                        *(_BYTE *)v439 = 0;
                        v439 = (_QWORD *)((char *)v439 + 1);
                      }
                      v442 = *(_DWORD *)(v435 + 1580);
                      *(_DWORD *)(v435 + 1580) = v440;
                      if ( (_DWORD)v440 == 3 )
                      {
                        (*(void (__fastcall **)(__int64))(v435 + 792))(v438);
                      }
                      else
                      {
                        v443 = *(void (__fastcall **)(__int64, _QWORD))(v435 + 496);
                        if ( (_DWORD)v440 == 1 )
                          v443(v438 - 8, *(_QWORD *)(v438 - 8));
                        else
                          (*(void (__fastcall **)(__int64, _QWORD, __int64, void (__fastcall *)(__int64, _QWORD)))(v435 + 240))(
                            v438,
                            *(_QWORD *)(v435 + 240),
                            v440,
                            v443);
                      }
                      *(_DWORD *)(v435 + 1580) = v442;
                    }
                    *(_DWORD *)(v435 + 1672) &= ~4u;
                    v444 = (_BYTE *)(v426 + v435);
                    v445 = (_QWORD *)(v426 + v435);
                    ++*(_DWORD *)(v435 + 1396);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x328) = v426 + v435;
                    v446 = 48;
                    v447 = 6LL;
                    do
                    {
                      *v445 = 0LL;
                      v446 -= 8;
                      ++v445;
                      --v447;
                    }
                    while ( v447 );
                    for ( ; v446; --v446 )
                    {
                      *(_BYTE *)v445 = 0;
                      v445 = (_QWORD *)((char *)v445 + 1);
                    }
                    v448 = *(_QWORD **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                    *(_DWORD *)v444 = v430;
                    *((_QWORD *)v444 + 1) = v448;
                    *((_DWORD *)v444 + 4) = v428;
                    v449 = v448;
                    v450 = (const char *)v448;
                    if ( v448 < (_QWORD *)((char *)v448 + v428) )
                    {
                      do
                      {
                        _mm_prefetch(v450, 0);
                        v450 += 64;
                      }
                      while ( v450 < (const char *)v448 + v428 );
                    }
                    v451 = *(_QWORD *)(v435 + 1408);
                    v452 = (unsigned int)v428;
                    if ( (unsigned int)v428 >= 8 )
                    {
                      v453 = (unsigned __int64)(unsigned int)v428 >> 3;
                      do
                      {
                        v452 = (unsigned int)(v452 - 8);
                        v451 = __ROL8__(*v449++ ^ v451, *(_DWORD *)(v435 + 1404));
                        --v453;
                      }
                      while ( v453 );
                    }
                    if ( (_DWORD)v452 )
                    {
                      do
                      {
                        v454 = *(unsigned __int8 *)v449;
                        v449 = (_QWORD *)((char *)v449 + 1);
                        v451 = __ROL8__(v454 ^ v451, *(_DWORD *)(v435 + 1404));
                        v127 = (_DWORD)v452 == 1;
                        v452 = (unsigned int)(v452 - 1);
                      }
                      while ( !v127 );
                    }
                    *(_DWORD *)(v435 + 1424) += v428;
                    for ( nn = v451; ; v451 = (unsigned int)nn ^ (unsigned int)v451 )
                    {
                      nn >>= 31;
                      if ( !nn )
                        break;
                    }
                    LODWORD(v451) = v451 & 0x7FFFFFFF;
                    *((_DWORD *)v444 + 5) = v451;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x328);
                    *(_DWORD *)(v435 + 1424) += v428;
                    v456 = -1073741275;
                    v457 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0);
                    v458 = *(_QWORD *)(v435 + 1064) + 16LL;
                    v459 = *(_QWORD *)(v435 + 1088);
                    v460 = KeGetCurrentIrql();
                    __writecr8(0xFuLL);
                    (*(void (__fastcall **)(__int64, unsigned __int64, __int64, _QWORD *))(v435 + 320))(
                      v459,
                      v451,
                      v452,
                      v449);
                    v461 = v458 + 24LL * **(unsigned int **)(v435 + 1064);
                    while ( *(_QWORD *)(v458 + 8) != *v1 )
                    {
                      v458 += 24LL;
                      if ( v458 >= v461 )
                        goto LABEL_694;
                    }
                    v456 = 0;
                    *(_OWORD *)(v457 + 24) = *(_OWORD *)v458;
                    *(_QWORD *)(v457 + 40) = *(_QWORD *)(v458 + 16);
LABEL_694:
                    (*(void (__fastcall **)(_QWORD))(v435 + 384))(*(_QWORD *)(v435 + 1088));
                    __writecr8(v460);
                    if ( v456 < 0 )
                    {
                      v462 = 24;
                      v463 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) + 24LL);
                      v464 = 3LL;
                      do
                      {
                        *v463 = 0LL;
                        v462 -= 8;
                        ++v463;
                        --v464;
                      }
                      while ( v464 );
                      for ( ; v462; --v462 )
                      {
                        *(_BYTE *)v463 = 0;
                        v463 = (_QWORD *)((char *)v463 + 1);
                      }
                      *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) + 24LL) = 1LL;
                    }
                    v465 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                    v466 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) + 48LL);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v466;
                    if ( v465 >= 8 )
                    {
                      v467 = (unsigned __int64)v465 >> 3;
                      do
                      {
                        *v466 = -1LL;
                        v465 -= 8;
                        ++v466;
                        --v467;
                      }
                      while ( v467 );
                    }
                    for ( ; v465; --v465 )
                    {
                      *(_BYTE *)v466 = -1;
                      v466 = (_QWORD *)((char *)v466 + 1);
                    }
                    v468 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0);
                    v469 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = -1;
                    v470 = (_DWORD *)*v1;
                    v471 = *v469;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = 0;
                    v472 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) = &v469[3 * v468];
                    v473 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _DWORD *, __int64))(v435 + 472))(
                                       v472,
                                       v470,
                                       v471);
                    if ( !v473 )
                      goto LABEL_653;
LABEL_706:
                    v474 = 0;
                    if ( (v473[9] & 0x2000000) != 0 || *v473 == 1414090313 && v473[1] == 1195525195 )
                      goto LABEL_731;
                    if ( *v473 == 1162297680 )
                    {
                      v475 = *((_WORD *)v473 + 2);
                      if ( v475 == 30583 || v475 == 29303 || v475 == 30839 )
                        goto LABEL_731;
                    }
                    v476 = 7;
                    v477 = *(char **)(v435 + 1592);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x410) = *(_QWORD *)(v435 + 1600);
                    v478 = (char *)v473 - v477;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x418) = *(_QWORD *)(v435 + 1608);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x420) = *(_QWORD *)(v435 + 1616);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x408) = v477;
                    while ( 1 )
                    {
                      v479 = (unsigned __int8)v477[v478];
                      v480 = (unsigned __int8)*v477++;
                      if ( v479 != v480 )
                        break;
                      if ( !--v476 )
                        goto LABEL_731;
                    }
                    v481 = *(__int64 **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x410);
                    v482 = 8;
                    v483 = (__int64 *)v473;
                    do
                    {
                      v484 = *v483++;
                      v485 = *v481++;
                      if ( v484 != v485 )
                        goto LABEL_724;
                      v482 -= 8;
                    }
                    while ( v482 >= 8 );
                    if ( !v482 )
                    {
LABEL_731:
                      v474 = 1;
                    }
                    else
                    {
                      while ( 1 )
                      {
                        v486 = *(unsigned __int8 *)v483;
                        v483 = (__int64 *)((char *)v483 + 1);
                        v487 = *(unsigned __int8 *)v481;
                        v481 = (__int64 *)((char *)v481 + 1);
                        if ( v486 != v487 )
                          break;
                        if ( !--v482 )
                          goto LABEL_731;
                      }
LABEL_724:
                      v488 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x418);
                      v489 = (char *)v473 - v488;
                      v490 = 4;
                      while ( 1 )
                      {
                        v491 = (unsigned __int8)v488[v489];
                        v492 = (unsigned __int8)*v488++;
                        if ( v491 != v492 )
                          break;
                        if ( !--v490 )
                          goto LABEL_731;
                      }
                      v493 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x420);
                      v494 = (char *)v473 - v493;
                      v495 = 6;
                      while ( 1 )
                      {
                        v496 = (unsigned __int8)v493[v494];
                        v497 = (unsigned __int8)*v493++;
                        if ( v496 != v497 )
                          break;
                        if ( !--v495 )
                          goto LABEL_731;
                      }
                    }
                    if ( (int)v473[9] < 0 )
                      v474 = 1;
                    if ( v474
                      && *v473 == 1414090313
                      && v473[1] == 1195525195
                      && (*(_DWORD *)(v435 + 1672) & 0x10000000) != 0 )
                    {
                      v474 = 0;
                    }
                    v498 = v473[2];
                    if ( v473[4] > v498 )
                      v498 = v473[4];
                    v499 = (_DWORD *)*v1;
                    v500 = v498 + v473[3];
                    while ( 1 )
                    {
                      v501 = v469[2];
                      if ( (v501 & 1) == 0 )
                      {
                        v502 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                        if ( v501 < v502 )
                          v502 = v469[2];
                        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v502;
                        v503 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                        if ( v501 > v503 )
                          v503 = v501;
                        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v503;
                      }
                      v504 = *v469;
                      v505 = v469[1] - v504;
                      v506 = (char *)v499 + v504;
                      if ( v474 )
                      {
                        v507 = *(_DWORD **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                        *v507 = 0x80000000;
                      }
                      else
                      {
                        v508 = (char *)v499 + v504;
                        v509 = &v506[v505];
                        if ( v506 < v509 )
                        {
                          do
                          {
                            _mm_prefetch(v508, 0);
                            v508 += 64;
                          }
                          while ( v508 < v509 );
                        }
                        v510 = *(_QWORD *)(v435 + 1408);
                        v511 = v505;
                        if ( v505 >= 8 )
                        {
                          v512 = (unsigned __int64)v505 >> 3;
                          do
                          {
                            v511 -= 8;
                            v510 = __ROL8__(*(_QWORD *)v506 ^ v510, *(_DWORD *)(v435 + 1404));
                            v506 += 8;
                            --v512;
                          }
                          while ( v512 );
                          v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                        }
                        for ( ; v511; --v511 )
                        {
                          v513 = *(unsigned __int8 *)v506++;
                          v510 = __ROL8__(v513 ^ v510, *(_DWORD *)(v435 + 1404));
                        }
                        *(_DWORD *)(v435 + 1424) += v505;
                        for ( i1 = v510; ; LODWORD(v510) = i1 ^ v510 )
                        {
                          i1 >>= 31;
                          if ( !i1 )
                            break;
                        }
                        v507 = *(_DWORD **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                        *v507 = v510 & 0x7FFFFFFF;
                        v499 = (_DWORD *)*v1;
                      }
                      v469 += 3;
                      if ( v469 == *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) )
                        break;
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v507 + 1;
                      if ( *v469 < v473[3] || (unsigned __int64)v499 + v469[1] > v500 )
                      {
                        v473 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD))(v435 + 472))(
                                           *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40),
                                           v499,
                                           *v469,
                                           0LL);
                        if ( !v473 )
                        {
                          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8);
                          goto LABEL_653;
                        }
                        goto LABEL_706;
                      }
                    }
                    v515 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                    v516 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                    if ( (_DWORD)v515 == -1 && !v516 )
                      v515 = 0LL;
                    v517 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8);
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x260) = v516 - v515;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v435;
                    v392 = (_BYTE *)v435;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3A8) = v517 + (unsigned int)v515;
                    LOBYTE(v515) = 1;
                    v518 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD *))(v435 + 440))(
                             v517,
                             v515,
                             0LL,
                             v1 + 17);
                    v519 = v518;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3B0) = v518;
                    LOBYTE(v519) = 1;
                    v520 = v518 != 0 ? *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) : 0;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) = v520;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x264) = v520;
                    v521 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD *))(v435 + 440))(
                             *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8),
                             v519,
                             12LL,
                             v1 + 17);
                    v522 = v521;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v521;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3B8) = v521;
                    LOBYTE(v522) = 1;
                    v523 = v521 != 0 ? *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) : 0;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v523;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) = v523;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x268) = v523;
                    v524 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD *))(v435 + 440))(
                             *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8),
                             v522,
                             10LL,
                             v1 + 17);
                    v525 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3C0) = v524;
                    v526 = v524 != 0 ? *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) : 0;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) = v526;
                    v527 = *(unsigned int *)(v435 + 1356);
                    v528 = *(_DWORD *)(v435 + 1580);
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x26C) = v526;
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v525 != 0 ? 0xB : 0;
                    v529 = (unsigned int)(v527 + 192);
                    v530 = v435 & -(__int64)((*(_DWORD *)(v435 + 1672) & 0x20000000) != 0);
                    if ( v528 <= 1 )
                    {
                      if ( v530 )
                      {
                        v531 = *(unsigned int *)((v435 & -(__int64)((*(_DWORD *)(v435 + 1672) & 0x20000000) != 0))
                                               + 0x55C);
LABEL_776:
                        v532 = ((__int64 (__fastcall *)(__int64, __int64))(v530 + v531))(v435, v529);
                      }
                      else
                      {
                        v532 = ((__int64 (__fastcall *)(__int64, __int64))sub_140285AAC)(v435, v529);
                      }
                    }
                    else
                    {
                      if ( v530 )
                      {
                        v531 = *(unsigned int *)((v435 & -(__int64)((*(_DWORD *)(v435 + 1672) & 0x20000000) != 0))
                                               + 0x560);
                        goto LABEL_776;
                      }
                      v532 = sub_140285DF0(v435, v529);
                    }
                    v533 = v532;
                    if ( !v532 )
                    {
                      v401 = -1073741670;
                      goto LABEL_1054;
                    }
                    v534 = *(_DWORD *)(v435 + 1672);
                    if ( (v534 & 4) == 0 )
                    {
                      v535 = *(_DWORD *)(v435 + 1356);
                      v536 = *(_QWORD *)(v435 + 1328);
                      v537 = *(_DWORD *)(v435 + 1580) & (unsigned int)-((v534 & 0x20000000) != 0);
                      if ( v535 >= 8 )
                      {
                        v538 = (unsigned __int64)v535 >> 3;
                        do
                        {
                          *(_QWORD *)v435 = 0LL;
                          v535 -= 8;
                          v435 += 8LL;
                          --v538;
                        }
                        while ( v538 );
                      }
                      for ( ; v535; --v535 )
                        *(_BYTE *)v435++ = 0;
                      v539 = *(_DWORD *)(v533 + 1580);
                      *(_DWORD *)(v533 + 1580) = v537;
                      if ( (_DWORD)v537 == 3 )
                      {
                        (*(void (__fastcall **)(__int64, __int64, _QWORD))(v533 + 792))(v536, v537, 0LL);
                      }
                      else
                      {
                        v540 = *(void (__fastcall **)(__int64, __int64, _QWORD, void (__fastcall *)(_QWORD, _QWORD, _QWORD)))(v533 + 240);
                        v541 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v533 + 496);
                        if ( (_DWORD)v537 == 1 )
                          v541(v536 - 8, *(_QWORD *)(v536 - 8), v540);
                        else
                          v540(v536, v537, v540, v541);
                      }
                      *(_DWORD *)(v533 + 1580) = v539;
                    }
                    *(_DWORD *)(v533 + 1672) &= ~4u;
                    v542 = v533 + v527;
                    *(_DWORD *)(v533 + 1396) += 4;
                    i6 = (unsigned __int64)(v1 + 76);
                    v543 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                    v544 = (_QWORD **)(v1 + 117);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2A8) = v533 + v527;
                    v545 = 4LL;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D0) = v533 + v527;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = ((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                       + 608;
                    *v1 = 4LL;
                    do
                    {
                      v546 = *(unsigned int *)i6;
                      v547 = 48;
                      v548 = *v544;
                      v549 = (_QWORD *)v542;
                      v550 = 6LL;
                      do
                      {
                        *v549 = 0LL;
                        v547 -= 8;
                        ++v549;
                        --v550;
                      }
                      while ( v550 );
                      for ( ; v547; --v547 )
                      {
                        *(_BYTE *)v549 = 0;
                        v549 = (_QWORD *)((char *)v549 + 1);
                      }
                      *(_DWORD *)v542 = v543;
                      *(_QWORD *)(v542 + 8) = v548;
                      if ( v543 == 32 && (_DWORD)v546 )
                      {
                        sub_14017D2FC(v533, (__int64)v548, v546, v542 + 24);
                        i6 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                        v545 = *v1;
                      }
                      *(_DWORD *)(v542 + 16) = v546;
                      v551 = (const char *)v548;
                      if ( v548 < (_QWORD *)((char *)v548 + v546) )
                      {
                        do
                        {
                          _mm_prefetch(v551, 0);
                          v551 += 64;
                        }
                        while ( v551 < (const char *)v548 + v546 );
                      }
                      v552 = *(_QWORD *)(v533 + 1408);
                      v553 = v546;
                      if ( (unsigned int)v546 >= 8 )
                      {
                        v554 = v546 >> 3;
                        do
                        {
                          v553 -= 8;
                          v552 = __ROL8__(*v548++ ^ v552, *(_DWORD *)(v533 + 1404));
                          --v554;
                        }
                        while ( v554 );
                      }
                      for ( ; v553; --v553 )
                      {
                        v555 = *(unsigned __int8 *)v548;
                        v548 = (_QWORD *)((char *)v548 + 1);
                        v552 = __ROL8__(v555 ^ v552, *(_DWORD *)(v533 + 1404));
                      }
                      *(_DWORD *)(v533 + 1424) += v546;
                      for ( i2 = v552 >> 31; i2; i2 >>= 31 )
                        LODWORD(v552) = i2 ^ v552;
                      i6 += 4LL;
                      *(_DWORD *)(v542 + 20) = v552 & 0x7FFFFFFF;
                      ++v544;
                      *(_DWORD *)(v533 + 1424) += v546;
                      v542 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2A8) + 48LL;
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = i6;
                      --v545;
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2A8) = v542;
                      *v1 = v545;
                    }
                    while ( v545 );
                    v557 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                    v558 = (int *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D0) + 96LL);
                    v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v533;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v533;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x198) = v558;
                    v559 = (v557 != 0) + 13;
                    if ( v558 )
                    {
                      v578 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                      v565 = v533;
                      *v558 = v559;
                      v579 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                      *v1 = v533;
                    }
                    else
                    {
                      v560 = *(unsigned int *)(v533 + 1356);
                      v561 = v533 & -(__int64)((*(_DWORD *)(v533 + 1672) & 0x20000000) != 0);
                      v562 = (unsigned int)(v560 + 48);
                      if ( *(int *)(v533 + 1580) <= 1 )
                      {
                        if ( v561 )
                        {
                          v563 = *(unsigned int *)((v533 & -(__int64)((*(_DWORD *)(v533 + 1672) & 0x20000000) != 0))
                                                 + 0x55C);
LABEL_817:
                          v564 = ((__int64 (__fastcall *)(__int64, __int64))(v561 + v563))(v533, v562);
                        }
                        else
                        {
                          v564 = ((__int64 (__fastcall *)(__int64, __int64))sub_140285AAC)(v533, v562);
                        }
                      }
                      else
                      {
                        if ( v561 )
                        {
                          v563 = *(unsigned int *)((v533 & -(__int64)((*(_DWORD *)(v533 + 1672) & 0x20000000) != 0))
                                                 + 0x560);
                          goto LABEL_817;
                        }
                        v564 = sub_140285DF0(v533, v562);
                      }
                      *v1 = v564;
                      v565 = v564;
                      if ( !v564 )
                        goto LABEL_1052;
                      v566 = *(_DWORD *)(v533 + 1672);
                      if ( (v566 & 4) == 0 )
                      {
                        v567 = *(_DWORD *)(v533 + 1356);
                        v568 = *(_QWORD *)(v533 + 1328);
                        v569 = *(_DWORD *)(v533 + 1580) & (unsigned int)-((v566 & 0x20000000) != 0);
                        if ( v567 >= 8 )
                        {
                          v570 = (unsigned __int64)v567 >> 3;
                          do
                          {
                            *(_QWORD *)v533 = 0LL;
                            v567 -= 8;
                            v533 += 8LL;
                            --v570;
                          }
                          while ( v570 );
                        }
                        for ( ; v567; --v567 )
                          *(_BYTE *)v533++ = 0;
                        v571 = *(_DWORD *)(v565 + 1580);
                        *(_DWORD *)(v565 + 1580) = v569;
                        if ( (_DWORD)v569 == 3 )
                        {
                          (*(void (__fastcall **)(__int64, __int64, __int64))(v565 + 792))(v568, v569, 1LL);
                        }
                        else
                        {
                          v572 = *(void (__fastcall **)(__int64, __int64, _QWORD, void (__fastcall *)(_QWORD, _QWORD, _QWORD)))(v565 + 240);
                          v573 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v565 + 496);
                          if ( (_DWORD)v569 == 1 )
                            v573(v568 - 8, *(_QWORD *)(v568 - 8), v572);
                          else
                            v572(v568, v569, v572, v573);
                        }
                        *(_DWORD *)(v565 + 1580) = v571;
                      }
                      *(_DWORD *)(v565 + 1672) &= ~4u;
                      v574 = v565 + v560;
                      v575 = (_QWORD *)(v565 + v560);
                      ++*(_DWORD *)(v565 + 1396);
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x318) = v565 + v560;
                      v576 = 48;
                      v577 = 6LL;
                      do
                      {
                        *v575 = 0LL;
                        v576 -= 8;
                        ++v575;
                        --v577;
                      }
                      while ( v577 );
                      for ( ; v576; --v576 )
                      {
                        *(_BYTE *)v575 = 0;
                        v575 = (_QWORD *)((char *)v575 + 1);
                      }
                      v578 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                      v127 = v559 == 32;
                      *(_DWORD *)v574 = v559;
                      v579 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                      *(_QWORD *)(v574 + 8) = v578;
                      if ( v127 && v579 )
                        sub_14017D2FC(v565, v578, v579, v574 + 24);
                      v580 = (_QWORD *)v578;
                      v581 = v578 + v579;
                      *(_DWORD *)(v574 + 16) = v579;
                      v582 = (const char *)v578;
                      if ( v578 < v581 )
                      {
                        do
                        {
                          _mm_prefetch(v582, 0);
                          v582 += 64;
                        }
                        while ( (unsigned __int64)v582 < v581 );
                      }
                      v583 = *(_QWORD *)(v565 + 1408);
                      i6 = v579;
                      if ( v579 >= 8 )
                      {
                        v584 = (unsigned __int64)v579 >> 3;
                        do
                        {
                          i6 = (unsigned int)(i6 - 8);
                          v583 = __ROL8__(*v580++ ^ v583, *(_DWORD *)(v565 + 1404));
                          --v584;
                        }
                        while ( v584 );
                      }
                      if ( (_DWORD)i6 )
                      {
                        do
                        {
                          v585 = *(unsigned __int8 *)v580;
                          v580 = (_QWORD *)((char *)v580 + 1);
                          v583 = __ROL8__(v585 ^ v583, *(_DWORD *)(v565 + 1404));
                          v127 = (_DWORD)i6 == 1;
                          i6 = (unsigned int)(i6 - 1);
                        }
                        while ( !v127 );
                      }
                      *(_DWORD *)(v565 + 1424) += v579;
                      for ( i3 = v583; ; LODWORD(v583) = i3 ^ v583 )
                      {
                        i3 >>= 31;
                        if ( !i3 )
                          break;
                      }
                      *(_DWORD *)(v574 + 20) = v583 & 0x7FFFFFFF;
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x198) = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x318);
                      *(_DWORD *)(v565 + 1424) += v579;
                    }
                    if ( (*(_DWORD *)(v565 + 1672) & 0x40000000) != 0 && v579 )
                      sub_14017D2FC(
                        v565,
                        v578,
                        v579,
                        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x198) + 28LL);
                    *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x198) + 24LL) = 0;
                    *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x198) + 24LL) |= 1u;
                    v587 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D0);
                    v588 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v565;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v565;
                    *(_DWORD *)(v587 + 144) = 35;
                    *(_DWORD *)(v587 + 184) ^= (*(_DWORD *)(v587 + 184) ^ (v557 != 0)) & 1;
                    if ( *(_DWORD *)(v587 + 160) >= 0x94u )
                    {
                      v589 = *(_QWORD *)(v587 + 152);
                      v590 = (*(__int64 (__fastcall **)(unsigned __int64))(v565 + 448))(v588);
                      if ( !v590 )
                        goto LABEL_1052;
                      v591 = *(unsigned int *)(v590 + 80);
                      *(_DWORD *)(v587 + 184) |= 2u;
                      v592 = v588 + v591;
                      v593 = *(_QWORD **)(v589 + 112);
                      if ( (unsigned __int64)v593 >= v588 && (unsigned __int64)v593 < v592 )
                      {
                        *(_QWORD *)(v587 + 168) = *v593;
                        *(_DWORD *)(v587 + 184) |= 4u;
                      }
                      v594 = *(_QWORD **)(v589 + 120);
                      if ( (unsigned __int64)v594 >= v588 && (unsigned __int64)v594 < v592 )
                      {
                        *(_QWORD *)(v587 + 176) = *v594;
                        *(_DWORD *)(v587 + 184) |= 8u;
                      }
                    }
                    v127 = (*(_DWORD *)(v565 + 1672) & 0x400000) == 0;
                    v392 = (_BYTE *)v565;
                    v595 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v595;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v565;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v565;
                    if ( v127 )
                      goto LABEL_1050;
                    v596 = (*(__int64 (__fastcall **)(ULONG_PTR))(v565 + 448))(v595);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v596;
                    if ( v596 )
                    {
                      v597 = *(_WORD *)(v596 + 6);
                      v598 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) / 0xCuLL;
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v598;
                      *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v597;
                      if ( v597 )
                      {
                        v599 = 0;
                        v600 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                        i6 = (unsigned __int64)&v600[3 * (unsigned int)v598];
                        v601 = *(unsigned __int16 *)(v596 + 20) + v596 + 24;
                        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) = i6;
                        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v601;
                        v602 = (int *)(v601 + 8);
                        while ( 1 )
                        {
                          v603 = *v602;
                          v604 = v602[1];
                          if ( v602[2] > (unsigned int)*v602 )
                            v603 = v602[2];
                          v605 = v603 + v604;
                          if ( v599 )
                          {
                            if ( v605 < *(_DWORD *)(v601 + 40LL * (v599 - 1) + 12) )
                              break;
                          }
                          if ( v600 != (unsigned int *)i6 )
                          {
                            do
                            {
                              v606 = v600[1];
                              if ( *v600 >= v605 || v606 <= v604 )
                                break;
                              if ( *v600 < v604 || v606 > v605 )
                              {
                                v611 = *v1;
                                if ( (*(_DWORD *)(*v1 + 1672LL) & 0x200000) == 0 )
                                {
                                  v1910 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20C) = 5072;
                                  KeBugCheckEx(
                                    __ROL4__(
                                      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20C),
                                      188),
                                    0xAuLL,
                                    v1910,
                                    2uLL,
                                    0LL);
                                }
                                if ( !*(_DWORD *)(v611 + 1536) )
                                  goto LABEL_888;
                                goto LABEL_653;
                              }
                              __ea(
                                *v1,
                                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40),
                                v601 + 40LL * v599,
                                v600);
                              i6 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0);
                              v600 += 3;
                              v601 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                            }
                            while ( v600 != (unsigned int *)i6 );
                            v597 = *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                          }
                          ++v599;
                          v607 = v597;
                          v602 += 10;
                          if ( v599 >= v597 )
                          {
                            v608 = *v1;
                            v609 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                            if ( v600 != (unsigned int *)i6 )
                            {
                              if ( (*(_DWORD *)(v608 + 1672) & 0x200000) == 0 )
                              {
                                v1911 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                                *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x238) = 5072;
                                KeBugCheckEx(
                                  __ROL4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x238), 188),
                                  0xAuLL,
                                  v1911,
                                  3uLL,
                                  0LL);
                              }
                              if ( !*(_DWORD *)(v608 + 1536) )
                              {
                                *(_QWORD *)(v608 + 1544) = v608 - 0x5C5FC0A76E374B18LL;
                                v610 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                                *(_QWORD *)(v608 + 1552) = 0LL;
                                *(_QWORD *)(v608 + 1560) = 271LL;
                                *(_QWORD *)(v608 + 1568) = v610;
                                *(_DWORD *)(v608 + 1536) = 1;
                              }
                              goto LABEL_653;
                            }
                            v613 = *(unsigned int *)(v608 + 1356);
                            v614 = (unsigned int)v613 + (((_DWORD)v609 + 6) & 0xFFFFFFF8) + 24 * (v597 + 2);
                            v615 = v608 & -(__int64)((*(_DWORD *)(v608 + 1672) & 0x20000000) != 0);
                            if ( *(int *)(v608 + 1580) <= 1 )
                            {
                              if ( v615 )
                              {
                                v616 = *(unsigned int *)((v608 & -(__int64)((*(_DWORD *)(v608 + 1672) & 0x20000000) != 0))
                                                       + 0x55C);
LABEL_898:
                                v617 = ((__int64 (__fastcall *)(_QWORD, __int64))(v615 + v616))(*v1, v614);
                              }
                              else
                              {
                                v617 = ((__int64 (__fastcall *)(_QWORD, __int64))sub_140285AAC)(*v1, v614);
                              }
                            }
                            else
                            {
                              if ( v615 )
                              {
                                v616 = *(unsigned int *)((v608 & -(__int64)((*(_DWORD *)(v608 + 1672) & 0x20000000) != 0))
                                                       + 0x560);
                                goto LABEL_898;
                              }
                              v617 = sub_140285DF0(*v1, v614);
                            }
                            v618 = 0;
                            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v617;
                            i6 = v617;
                            if ( v617 )
                            {
                              v619 = *(_DWORD *)(v608 + 1672);
                              if ( (v619 & 4) == 0 )
                              {
                                v620 = *(_DWORD *)(v608 + 1356);
                                v621 = *(_QWORD *)(v608 + 1328);
                                v622 = *(_DWORD *)(v608 + 1580) & (unsigned int)-((v619 & 0x20000000) != 0);
                                if ( v620 >= 8 )
                                {
                                  v623 = (unsigned __int64)v620 >> 3;
                                  do
                                  {
                                    *(_QWORD *)v608 = 0LL;
                                    v620 -= 8;
                                    v608 += 8LL;
                                    --v623;
                                  }
                                  while ( v623 );
                                }
                                for ( ; v620; --v620 )
                                  *(_BYTE *)v608++ = 0;
                                v624 = *(_DWORD *)(i6 + 1580);
                                *(_DWORD *)(i6 + 1580) = v622;
                                if ( (_DWORD)v622 == 3 )
                                {
                                  (*(void (__fastcall **)(__int64, __int64))(i6 + 792))(v621, 1LL);
                                }
                                else
                                {
                                  v625 = *(void (__fastcall **)(__int64, _QWORD, __int64, void (__fastcall *)(__int64, _QWORD)))(i6 + 240);
                                  v626 = *(void (__fastcall **)(__int64, _QWORD))(i6 + 496);
                                  if ( (_DWORD)v622 == 1 )
                                    v626(v621 - 8, *(_QWORD *)(v621 - 8));
                                  else
                                    v625(v621, v625, v622, v626);
                                }
                                i6 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                                v618 = 0;
                                *(_DWORD *)(i6 + 1580) = v624;
                              }
                              *(_DWORD *)(i6 + 1672) &= ~4u;
                              v627 = i6 + v613;
                              v628 = (_QWORD *)(i6 + v613);
                              ++*(_DWORD *)(i6 + 1396);
                              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x348) = i6 + v613;
                              v629 = 48;
                              v630 = 6LL;
                              do
                              {
                                *v628 = 0LL;
                                v629 -= 8;
                                ++v628;
                                --v630;
                              }
                              while ( v630 );
                              for ( ; v629; --v629 )
                              {
                                *(_BYTE *)v628 = 0;
                                v628 = (_QWORD *)((char *)v628 + 1);
                              }
                              v631 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                              *(_DWORD *)v627 = 30;
                              *(_QWORD *)(v627 + 8) = v631;
                              *(_DWORD *)(v627 + 16) = 0;
                              v632 = *(_QWORD *)(i6 + 1408);
                              for ( i4 = v632; ; LODWORD(v632) = i4 ^ v632 )
                              {
                                i4 >>= 31;
                                if ( !i4 )
                                  break;
                              }
                              v634 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                              *v1 = i6;
                              v127 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) == 0;
                              v565 = i6;
                              *(_DWORD *)(v627 + 20) = v632 & 0x7FFFFFFF;
                              v635 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x348);
                              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x160) = v635;
                              *(_QWORD *)(v635 + 24) = v634;
                              *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x160) + 32LL) = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) + 80LL);
                              *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x160) + 36LL) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
                              *(_WORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x160) + 40LL) = *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                              *(_WORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x160) + 42LL) ^= (*(_WORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x160) + 42LL) ^ !v127) & 1;
                              v636 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x160);
                              v637 = *(unsigned __int16 *)(v636 + 40);
                              v638 = v636 + 48 + (((unsigned int)(v609 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
                              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v636 + 48;
                              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = v638;
                              i6 = v638 + 24 * v637;
                              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = i6;
                              v639 = v631 + 3;
                              if ( !(_DWORD)v609 )
                                v639 = *(_DWORD **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0);
                              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v639;
                              if ( v607 )
                              {
                                v640 = v607;
                                v641 = (_DWORD *)(v638 + 8);
                                do
                                {
                                  v642 = 2LL;
                                  do
                                  {
                                    *(v641 - 2) = 0;
                                    *(v641 - 1) = 0;
                                    *v641 = 0x80000000;
                                    v641 += 3;
                                    --v642;
                                  }
                                  while ( v642 );
                                  --v640;
                                }
                                while ( v640 );
                              }
                              if ( v638 == i6 )
                              {
LABEL_1050:
                                v392 = (_BYTE *)v565;
                                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v565;
                                v401 = 0;
                                goto LABEL_1054;
                              }
                              v643 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                              v644 = (unsigned int *)v638;
                              v645 = *(_BYTE **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                              v646 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                              while ( 2 )
                              {
                                if ( (*((_DWORD *)v646 + 9) & 0x2000000) != 0
                                  || *(_DWORD *)v646 == 1414090313 && *((_DWORD *)v646 + 1) == 1195525195
                                  || *(_DWORD *)v646 == 1162297680
                                  && ((v647 = *((_WORD *)v646 + 2), v647 == 30583) || v647 == 29303 || v647 == 30839) )
                                {
                                  v618 = 1;
                                }
                                else
                                {
                                  v648 = *(char **)(v643 + 1592);
                                  v649 = 7;
                                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x430) = *(_QWORD *)(v643 + 1600);
                                  v650 = v646 - v648;
                                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x438) = *(_QWORD *)(v643 + 1608);
                                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x440) = *(_QWORD *)(v643 + 1616);
                                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x428) = v648;
                                  while ( 1 )
                                  {
                                    v651 = (unsigned __int8)v648[v650];
                                    v652 = (unsigned __int8)*v648++;
                                    if ( v651 != v652 )
                                      break;
                                    if ( !--v649 )
                                      goto LABEL_954;
                                  }
                                  v653 = *(__int64 **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x430);
                                  v654 = 8;
                                  v655 = (__int64 *)v646;
                                  do
                                  {
                                    v656 = *v655++;
                                    v657 = *v653++;
                                    if ( v656 != v657 )
                                      goto LABEL_947;
                                    v654 -= 8;
                                  }
                                  while ( v654 >= 8 );
                                  if ( v654 )
                                  {
                                    while ( 1 )
                                    {
                                      v658 = *(unsigned __int8 *)v655;
                                      v655 = (__int64 *)((char *)v655 + 1);
                                      v659 = *(unsigned __int8 *)v653;
                                      v653 = (__int64 *)((char *)v653 + 1);
                                      if ( v658 != v659 )
                                        break;
                                      if ( !--v654 )
                                        goto LABEL_954;
                                    }
LABEL_947:
                                    v660 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x438);
                                    v661 = v646 - v660;
                                    v662 = 4;
                                    while ( 1 )
                                    {
                                      v663 = (unsigned __int8)v660[v661];
                                      v664 = (unsigned __int8)*v660++;
                                      if ( v663 != v664 )
                                        break;
                                      if ( !--v662 )
                                        goto LABEL_954;
                                    }
                                    v665 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x440);
                                    v666 = v646 - v665;
                                    v667 = 6;
                                    while ( 1 )
                                    {
                                      v668 = (unsigned __int8)v665[v666];
                                      v669 = (unsigned __int8)*v665++;
                                      if ( v668 != v669 )
                                        break;
                                      if ( !--v667 )
                                        goto LABEL_954;
                                    }
                                  }
                                  else
                                  {
LABEL_954:
                                    v618 = 1;
                                  }
                                  v631 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                                }
                                i6 = 0LL;
                                if ( *((int *)v646 + 9) < 0 )
                                  v618 = 1;
                                *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v618;
                                if ( v618 && *(_DWORD *)v646 == 1414090313 && *((_DWORD *)v646 + 1) == 1195525195 )
                                {
                                  if ( (*(_DWORD *)(v643 + 1672) & 0x10000000) != 0 )
                                    v618 = 0;
                                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v618;
                                }
                                v670 = *((_DWORD *)v646 + 2);
                                v671 = *((_DWORD *)v646 + 3);
                                if ( *((_DWORD *)v646 + 4) > v670 )
                                  v670 = *((_DWORD *)v646 + 4);
                                v672 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0);
                                v673 = v671 + v670;
                                *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v671;
                                *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v673;
                                if ( v631 == v672 )
                                {
                                  v674 = 0;
                                  v675 = 0;
                                }
                                else
                                {
                                  v674 = *v631;
                                  v675 = v631[1];
                                }
                                v676 = v671;
                                if ( v631 == v672 )
                                {
LABEL_991:
                                  v677 = v674 < v671;
                                }
                                else
                                {
                                  v677 = v674 < v671;
                                  if ( v674 > v671 )
                                  {
                                    if ( v675 <= v673 && !v618 )
                                    {
                                      *v644 = v671;
                                      v678 = v1 + 117;
                                      v644[1] = v674;
                                      v679 = (unsigned int *)(v1 + 76);
                                      v680 = *v644;
                                      v676 = v674;
                                      v681 = (const char *)(v634 + v680);
                                      v682 = v674 - v680;
                                      v683 = &v681[v674 - (unsigned int)v680];
                                      do
                                      {
                                        if ( (unsigned __int64)v681 < *v678 + (unsigned __int64)*v679
                                          && (unsigned __int64)v683 > *v678 )
                                        {
                                          i6 = 0LL;
                                          goto LABEL_990;
                                        }
                                        LODWORD(i6) = i6 + 1;
                                        ++v679;
                                        ++v678;
                                      }
                                      while ( (unsigned int)i6 < 4 );
                                      for ( i5 = v681; i5 < v683; i5 += 64 )
                                        _mm_prefetch(i5, 0);
                                      v685 = *(_QWORD *)(v643 + 1408);
                                      v686 = v682;
                                      if ( v682 >= 8 )
                                      {
                                        v687 = (unsigned __int64)v682 >> 3;
                                        do
                                        {
                                          v686 -= 8;
                                          v685 = __ROL8__(*(_QWORD *)v681 ^ v685, *(_DWORD *)(v643 + 1404));
                                          v681 += 8;
                                          --v687;
                                        }
                                        while ( v687 );
                                      }
                                      for ( i6 = 0LL; v686; --v686 )
                                      {
                                        v688 = *(unsigned __int8 *)v681++;
                                        v685 = __ROL8__(v688 ^ v685, *(_DWORD *)(v643 + 1404));
                                      }
                                      *(_DWORD *)(v643 + 1424) += v682;
                                      for ( i7 = v685; ; LODWORD(v685) = i7 ^ v685 )
                                      {
                                        i7 >>= 31;
                                        if ( !i7 )
                                          break;
                                      }
                                      v644[2] = v685 & 0x7FFFFFFF;
LABEL_990:
                                      v631 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                                      v671 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                                      v673 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                                      v618 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                                    }
                                    goto LABEL_991;
                                  }
                                }
                                v690 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0);
                                if ( v677 )
                                {
                                  v692 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                                  goto LABEL_1022;
                                }
                                v691 = v675 <= v673;
                                v692 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                                if ( v691 && v631 != v690 )
                                {
                                  v693 = v692[1];
                                  if ( v693 > v673 )
                                    goto LABEL_1021;
                                  v694 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                                  v695 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0);
                                  while ( 2 )
                                  {
                                    if ( v692 == v695 )
                                    {
LABEL_1020:
                                      v644 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
                                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v692;
LABEL_1021:
                                      v690 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0);
                                      goto LABEL_1022;
                                    }
                                    if ( !v618 )
                                    {
                                      v696 = v631[1];
                                      v697 = (unsigned int *)(v1 + 76);
                                      v676 = *v692;
                                      v698 = v1 + 117;
                                      v699 = *v692 - v696;
                                      v700 = (_QWORD *)(v694 + v696);
                                      v701 = v694 + v696 + v699;
                                      do
                                      {
                                        if ( (unsigned __int64)v700 < *v698 + *v697 && v701 > *v698 )
                                          goto LABEL_1015;
                                        LODWORD(i6) = i6 + 1;
                                        ++v697;
                                        ++v698;
                                      }
                                      while ( (unsigned int)i6 < 4 );
                                      if ( v699 >= 4 )
                                      {
                                        v702 = (const char *)(v694 + v696);
                                        if ( (unsigned __int64)v700 < v701 )
                                        {
                                          do
                                          {
                                            _mm_prefetch(v702, 0);
                                            v702 += 64;
                                          }
                                          while ( (unsigned __int64)v702 < v701 );
                                        }
                                        v703 = *(_QWORD *)(v643 + 1408);
                                        v704 = v699;
                                        if ( v699 >= 8 )
                                        {
                                          v705 = (unsigned __int64)v699 >> 3;
                                          do
                                          {
                                            v704 -= 8;
                                            v703 = __ROL8__(*v700++ ^ v703, *(_DWORD *)(v643 + 1404));
                                            --v705;
                                          }
                                          while ( v705 );
                                        }
                                        for ( i6 = 0LL; v704; --v704 )
                                        {
                                          v706 = *(unsigned __int8 *)v700;
                                          v700 = (_QWORD *)((char *)v700 + 1);
                                          v703 = __ROL8__(v706 ^ v703, *(_DWORD *)(v643 + 1404));
                                        }
                                        *(_DWORD *)(v643 + 1424) += v699;
                                        for ( i8 = v703; ; LOBYTE(v703) = i8 ^ v703 )
                                        {
                                          i8 >>= 7;
                                          if ( !i8 )
                                            break;
                                        }
                                        v618 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                                        v673 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                                        v695 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                + 0xB0);
                                        v631 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                + 0x48);
                                        *v645 = v703 & 0x7F;
LABEL_1017:
                                        v631 += 3;
                                        ++v645;
                                        v692 += 3;
                                        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v631;
                                        if ( v692 != v695 )
                                          v693 = v692[1];
                                        if ( v693 > v673 )
                                          goto LABEL_1020;
                                        continue;
                                      }
LABEL_1015:
                                      v631 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                                      v695 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0);
                                      i6 = 0LL;
                                      v673 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                                      v618 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                                    }
                                    break;
                                  }
                                  *v645 = 0x80;
                                  goto LABEL_1017;
                                }
LABEL_1022:
                                if ( v618 || v676 == v673 )
                                  goto LABEL_1041;
                                v644[3] = v676;
                                v708 = (unsigned int *)(v1 + 76);
                                v644[4] = v673;
                                v709 = 0;
                                v710 = v673 - v644[3];
                                i6 = (unsigned __int64)(v1 + 117);
                                v711 = (const char *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                + 0x40)
                                                    + v644[3]);
                                v712 = &v711[v710];
                                do
                                {
                                  if ( (unsigned __int64)v711 < *(_QWORD *)i6 + (unsigned __int64)*v708
                                    && (unsigned __int64)v712 > *(_QWORD *)i6 )
                                  {
                                    v631 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
LABEL_1041:
                                    v618 = 0;
                                    goto LABEL_1042;
                                  }
                                  ++v709;
                                  ++v708;
                                  i6 += 8LL;
                                }
                                while ( v709 < 4 );
                                v713 = (const char *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                + 0x40)
                                                    + v644[3]);
                                if ( v711 < v712 )
                                {
                                  do
                                  {
                                    _mm_prefetch(v713, 0);
                                    v713 += 64;
                                  }
                                  while ( v713 < v712 );
                                }
                                v714 = *(_QWORD *)(v643 + 1408);
                                i6 = v710;
                                if ( v710 >= 8 )
                                {
                                  v715 = (unsigned __int64)v710 >> 3;
                                  do
                                  {
                                    i6 = (unsigned int)(i6 - 8);
                                    v714 = __ROL8__(*(_QWORD *)v711 ^ v714, *(_DWORD *)(v643 + 1404));
                                    v711 += 8;
                                    --v715;
                                  }
                                  while ( v715 );
                                }
                                v618 = 0;
                                if ( (_DWORD)i6 )
                                {
                                  do
                                  {
                                    v716 = *(unsigned __int8 *)v711++;
                                    v714 = __ROL8__(v716 ^ v714, *(_DWORD *)(v643 + 1404));
                                    v127 = (_DWORD)i6 == 1;
                                    i6 = (unsigned int)(i6 - 1);
                                  }
                                  while ( !v127 );
                                }
                                *(_DWORD *)(v643 + 1424) += v710;
                                for ( i9 = v714; ; LODWORD(v714) = i9 ^ v714 )
                                {
                                  i9 >>= 31;
                                  if ( !i9 )
                                    break;
                                }
                                v631 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                                v644[5] = v714 & 0x7FFFFFFF;
LABEL_1042:
                                if ( v631 != v690
                                  && *v631 >= *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18)
                                  && v631[1] <= *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) )
                                {
                                  if ( v692 != v690 )
                                  {
                                    *v645++ = 0x80;
                                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v692 + 3;
                                  }
                                  v631 += 3;
                                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v631;
                                }
                                v644 += 6;
                                v634 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                                v646 = (char *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) + 40LL);
                                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = v644;
                                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v646;
                                if ( v644 == *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) )
                                {
                                  v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                                  v565 = *v1;
                                  goto LABEL_1050;
                                }
                                continue;
                              }
                            }
LABEL_1052:
                            v401 = -1073741670;
LABEL_1053:
                            v392 = *(_BYTE **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                            goto LABEL_1054;
                          }
                        }
                        v611 = *v1;
                        if ( (*(_DWORD *)(*v1 + 1672LL) & 0x200000) == 0 )
                        {
                          v1909 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x228) = 5072;
                          KeBugCheckEx(
                            __ROL4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x228), 188),
                            0xAuLL,
                            v1909,
                            1uLL,
                            0LL);
                        }
                        if ( !*(_DWORD *)(v611 + 1536) )
                        {
LABEL_888:
                          *(_QWORD *)(v611 + 1544) = v611 - 0x5C5FC0A76E374B18LL;
                          v612 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                          *(_QWORD *)(v611 + 1552) = 0LL;
                          *(_QWORD *)(v611 + 1560) = 271LL;
                          *(_QWORD *)(v611 + 1568) = v612;
                          *(_DWORD *)(v611 + 1536) = 1;
                        }
LABEL_653:
                        v401 = -1073741701;
                        goto LABEL_1053;
                      }
                      if ( (*(_DWORD *)(v565 + 1672) & 0x200000) == 0 )
                      {
                        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x24C) = 5072;
                        KeBugCheckEx(
                          __ROL4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x24C), 188),
                          0xAuLL,
                          v595,
                          0LL,
                          0LL);
                      }
                      if ( !*(_DWORD *)(v565 + 1536) )
                      {
                        *(_QWORD *)(v565 + 1544) = v565 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v565 + 1552) = 0LL;
                        *(_QWORD *)(v565 + 1560) = 271LL;
                        *(_QWORD *)(v565 + 1568) = v595;
                        *(_DWORD *)(v565 + 1536) = 1;
                      }
                    }
                    v401 = -1073741701;
LABEL_1054:
                    v394 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
LABEL_1055:
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v392;
                    v718 = &v392[-v85];
                    v85 = (__int64)v392;
                    v719 = &v718[*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38)];
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v719;
                    if ( (int)(v401 + 0x80000000) < 0 || v401 == -1073741554 )
                      *((_QWORD *)v719 + 5) = v394;
                    LODWORD(i15) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x98);
                    goto LABEL_1102;
                  }
                  if ( v380 != 1 )
                  {
                    *(_DWORD *)(v85 + 1420) = 0;
LABEL_1105:
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v85;
                    goto LABEL_217;
                  }
                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) = 0;
                  v381 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 712))(0LL);
                  if ( v381 )
                  {
                    v382 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                    do
                    {
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2D8) = 0LL;
                      v383 = v382;
                      v384 = 1;
                      v385 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(v85 + 704))(v381, v1 + 91);
                      if ( v385 )
                      {
                        do
                        {
                          ++v384;
                          (*(void (__fastcall **)(__int64, _QWORD *, __int64))(v85 + 456))(
                            v385,
                            v1 + 94,
                            (__int64)v1 + 868);
                          if ( !*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2F0)
                            && !(*(__int64 (__fastcall **)(__int64, _QWORD *))(v85 + 464))(v385, v1 + 94) )
                          {
                            if ( (*(_DWORD *)(v85 + 1672) & 0x40000000) != 0 )
                            {
                              v386 = *(_QWORD **)(v85 + 1848);
                              v387 = 48;
                              v388 = 6LL;
                              do
                              {
                                v387 -= 8;
                                *v386 = *(_QWORD *)v383;
                                v383 += 8;
                                ++v386;
                                --v388;
                              }
                              while ( v388 );
                              for ( ; v387; --v387 )
                              {
                                v389 = *v383++;
                                *(_BYTE *)v386 = v389;
                                v386 = (_QWORD *)((char *)v386 + 1);
                              }
                              v383 = *(char **)(v85 + 1848);
                            }
                            *((_QWORD *)v383 + 3) = v385;
                            *((_QWORD *)v383 + 4) = v381;
                            v390 = *(_QWORD *)(v85 + 1160);
                            *(_QWORD *)v390 = v383;
                            *(_DWORD *)(v390 + 16) = 48;
                            v391 = *(_QWORD *)(v85 + 1160);
                            *(_QWORD *)(v391 + 8) = v385;
                            *(_DWORD *)(v391 + 20) = 4096;
                            if ( !*(_DWORD *)(v85 + 1536) )
                            {
                              *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v85 + 1552) = v383 - 0x4C48B4211BBACBEBLL;
                              *(_QWORD *)(v85 + 1560) = *(int *)v383;
                              *(_QWORD *)(v85 + 1568) = 6LL;
                              *(_DWORD *)(v85 + 1536) = 1;
                            }
                          }
                          v385 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(v85 + 704))(v381, v1 + 91);
                        }
                        while ( v385 );
                        v382 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                        LODWORD(i15) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x98);
                      }
                      LODWORD(i15) = v384 + i15;
                      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) = i15;
                      v381 = (*(__int64 (__fastcall **)(__int64))(v85 + 712))(v381);
                    }
                    while ( v381 );
                  }
                }
                else
                {
                  v720 = v96;
                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) = 0;
                  v721 = 0;
                  v722 = 0;
                  do
                  {
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x140) = 0;
                    while ( 1 )
                    {
                      do
                      {
                        if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD *, _QWORD *))(v85 + 680))(
                                v721,
                                v1 + 40,
                                v1 + 70) )
                          goto LABEL_1074;
                        v723 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 648))(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                         + 0x230));
                        v724 = v723;
                      }
                      while ( !v723 );
                      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) = v722 + 1;
                      v725 = (*(__int64 (__fastcall **)(__int64))(v85 + 656))(v723);
                      (*(void (__fastcall **)(__int64, _QWORD *, _QWORD *))(v85 + 456))(v725, v1 + 87, v1 + 110);
                      if ( !*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2B8)
                        && !(*(__int64 (__fastcall **)(__int64, _QWORD *))(v85 + 464))(v725, v1 + 87) )
                      {
                        break;
                      }
                      (*(void (__fastcall **)(_QWORD, __int64))(v85 + 664))(
                        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x230),
                        v724);
                      v722 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x98);
                    }
                    i6 = 1LL;
                    if ( (*(_DWORD *)(v85 + 1672) & 0x40000000) != 0 )
                    {
                      v726 = *(_QWORD **)(v85 + 1848);
                      v727 = 48;
                      v728 = 6LL;
                      do
                      {
                        v727 -= 8;
                        *v726 = *(_QWORD *)v720;
                        v720 += 8;
                        ++v726;
                        --v728;
                      }
                      while ( v728 );
                      for ( ; v727; --v727 )
                      {
                        v729 = *v720++;
                        *(_BYTE *)v726 = v729;
                        v726 = (_QWORD *)((char *)v726 + 1);
                      }
                      v720 = *(char **)(v85 + 1848);
                    }
                    *((_QWORD *)v720 + 3) = v725;
                    v730 = *(_QWORD *)(v85 + 1160);
                    *(_QWORD *)v730 = v720;
                    *(_DWORD *)(v730 + 16) = 48;
                    v731 = *(_QWORD *)(v85 + 1160);
                    *(_QWORD *)(v731 + 8) = v725;
                    *(_DWORD *)(v731 + 20) = 4096;
                    if ( !*(_DWORD *)(v85 + 1536) )
                    {
                      *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v85 + 1552) = v720 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v85 + 1560) = *(int *)v720;
                      *(_QWORD *)(v85 + 1568) = i15;
                      *(_DWORD *)(v85 + 1536) = 1;
                    }
LABEL_1074:
                    v722 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x98);
                    ++v721;
                    ++i15;
                  }
                  while ( v721 < 3 );
                  LODWORD(i15) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x98);
                }
              }
              else
              {
                v732 = v96;
                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2E8) = 0LL;
                v733 = KeGetCurrentIrql();
                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v733;
                __writecr8(0xCuLL);
                v734 = (*(__int64 (__fastcall **)(_QWORD *))(v85 + 696))(v1 + 93);
                if ( v734 )
                {
                  do
                  {
                    LODWORD(i15) = i15 + 1;
                    (*(void (__fastcall **)(__int64, _QWORD *, _QWORD *))(v85 + 456))(v734, v1 + 83, v1 + 126);
                    if ( !*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x298)
                      && !(*(__int64 (__fastcall **)(__int64, _QWORD *))(v85 + 464))(v734, v1 + 83) )
                    {
                      if ( (*(_DWORD *)(v85 + 1672) & 0x40000000) != 0 )
                      {
                        v735 = *(_QWORD **)(v85 + 1848);
                        v736 = 48;
                        v737 = 6LL;
                        do
                        {
                          v736 -= 8;
                          *v735 = *(_QWORD *)v732;
                          v732 += 8;
                          ++v735;
                          --v737;
                        }
                        while ( v737 );
                        for ( ; v736; --v736 )
                        {
                          v738 = *v732++;
                          *(_BYTE *)v735 = v738;
                          v735 = (_QWORD *)((char *)v735 + 1);
                        }
                        v732 = *(char **)(v85 + 1848);
                      }
                      *((_QWORD *)v732 + 3) = v734;
                      v739 = *(_QWORD *)(v85 + 1160);
                      *(_QWORD *)v739 = v732;
                      *(_DWORD *)(v739 + 16) = 48;
                      v740 = *(_QWORD *)(v85 + 1160);
                      *(_QWORD *)(v740 + 8) = v734;
                      *(_DWORD *)(v740 + 20) = 4096;
                      if ( !*(_DWORD *)(v85 + 1536) )
                      {
                        *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v85 + 1552) = v732 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v85 + 1560) = *(int *)v732;
                        *(_QWORD *)(v85 + 1568) = 4LL;
                        *(_DWORD *)(v85 + 1536) = 1;
                      }
                    }
                    v734 = (*(__int64 (__fastcall **)(_QWORD *))(v85 + 696))(v1 + 93);
                  }
                  while ( v734 );
                  v733 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                }
                __writecr8((unsigned __int8)v733);
              }
            }
            else
            {
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2B0) = 0LL;
              v741 = v96;
              for ( i10 = (*(__int64 (__fastcall **)(_QWORD *))(v85 + 688))(v1 + 86);
                    i10;
                    i10 = (*(__int64 (__fastcall **)(_QWORD *))(v85 + 688))(v1 + 86) )
              {
                LODWORD(i15) = i15 + 1;
                (*(void (__fastcall **)(__int64, _QWORD *, _QWORD *))(v85 + 456))(i10, v1 + 84, v1 + 113);
                if ( !*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2A0)
                  && !(*(__int64 (__fastcall **)(__int64, _QWORD *))(v85 + 464))(i10, v1 + 84) )
                {
                  if ( (*(_DWORD *)(v85 + 1672) & 0x40000000) != 0 )
                  {
                    v743 = *(_QWORD **)(v85 + 1848);
                    v744 = 48;
                    v745 = 6LL;
                    do
                    {
                      v744 -= 8;
                      *v743 = *(_QWORD *)v741;
                      v741 += 8;
                      ++v743;
                      --v745;
                    }
                    while ( v745 );
                    for ( ; v744; --v744 )
                    {
                      v746 = *v741++;
                      *(_BYTE *)v743 = v746;
                      v743 = (_QWORD *)((char *)v743 + 1);
                    }
                    v741 = *(char **)(v85 + 1848);
                  }
                  *((_QWORD *)v741 + 3) = i10;
                  v747 = *(_QWORD *)(v85 + 1160);
                  *(_QWORD *)v747 = v741;
                  *(_DWORD *)(v747 + 16) = 48;
                  v748 = *(_QWORD *)(v85 + 1160);
                  *(_QWORD *)(v748 + 8) = i10;
                  *(_DWORD *)(v748 + 20) = 4096;
                  if ( !*(_DWORD *)(v85 + 1536) )
                  {
                    *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v85 + 1552) = v741 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v85 + 1560) = *(int *)v741;
                    *(_QWORD *)(v85 + 1568) = 3LL;
                    *(_DWORD *)(v85 + 1536) = 1;
                  }
                }
              }
            }
LABEL_1102:
            *(_DWORD *)(v85 + 1424) += (_DWORD)i15 << 15;
            i15 = 0LL;
            ++*(_DWORD *)(v85 + 1420);
            if ( *(_DWORD *)(v85 + 1424) >= *(_DWORD *)(v85 + 1428) )
              goto LABEL_1105;
            v96 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
          }
        case 25:
          v333 = *(unsigned int **)(v85 + 1064);
          v334 = *(_QWORD ***)(v85 + 1072);
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = 0;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v333 + 4;
          v335 = (*(__int64 (**)(void))(v85 + 808))();
          CurrentThread = KeGetCurrentThread();
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v335;
          (*(void (__fastcall **)(struct _KTHREAD *))(v85 + 344))(CurrentThread);
          LOBYTE(v337) = 1;
          (*(void (__fastcall **)(_QWORD, __int64))(v85 + 224))(*(_QWORD *)(v85 + 1080), v337);
          v338 = *v333;
          *v1 = &v333[6 * v338 + 4];
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = 0;
          if ( *((_BYTE *)v333 + 12) )
          {
            LODWORD(v338) = 0;
            v339 = *v334;
            while ( v339 != v334 )
            {
              v339 = (_QWORD *)*v339;
              LODWORD(v338) = v338 + 1;
            }
          }
          v340 = __rdtsc();
          v341 = __ROR8__(v340, 3);
          v342 = (v341 ^ v340) * (unsigned __int128)0x7010008004002001uLL;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x638) = *((_QWORD *)&v342 + 1);
          v343 = (WORD4(v342) ^ (unsigned __int16)(8193 * (v341 ^ v340))) & 0x7FF;
          v344 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v85 + 232);
          v345 = __rdtsc();
          v346 = (__ROR8__(v345, 3) ^ v345) * (unsigned __int128)0x7010008004002001uLL;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x678) = *((_QWORD *)&v346 + 1);
          v347 = (*((_QWORD *)&v346 + 1) ^ (unsigned __int64)v346) % (unsigned int)(v343 + 1);
          v348 = v344(512LL, (unsigned int)(v343 + 8 * v338), *(unsigned int *)(v85 + 1400));
          v350 = v348;
          if ( v348 )
          {
            v351 = v347;
            v352 = (unsigned __int64 *)v348;
            if ( (unsigned int)v347 >= 8 )
            {
              v353 = (unsigned __int64)(unsigned int)v347 >> 3;
              do
              {
                v351 -= 8;
                v354 = __rdtsc();
                v355 = (__ROR8__(v354, 3) ^ v354) * (unsigned __int128)0x7010008004002001uLL;
                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x620) = *((_QWORD *)&v355 + 1);
                v349 = v355 ^ *((_QWORD *)&v355 + 1);
                *v352++ = v349;
                --v353;
              }
              while ( v353 );
              v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
            }
            if ( v351 )
            {
              v356 = __rdtsc();
              v357 = __ROR8__(v356, 3) ^ v356;
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x4E8) = (v357
                                                                                      * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v349 = (0x7010008004002001LL * v357) ^ ((v357 * (unsigned __int128)0x7010008004002001uLL) >> 64);
              do
              {
                *(_BYTE *)v352 = v349;
                v352 = (unsigned __int64 *)((char *)v352 + 1);
                v349 >>= 8;
                --v351;
              }
              while ( v351 );
            }
            v358 = v343 - v347;
            v359 = (unsigned __int64 *)(v350 + (unsigned int)v347 + (unsigned __int64)(unsigned int)(8 * v338));
            if ( v358 >= 8 )
            {
              v360 = (unsigned __int64)v358 >> 3;
              do
              {
                v358 -= 8;
                v361 = __rdtsc();
                v362 = (__ROR8__(v361, 3) ^ v361) * (unsigned __int128)0x7010008004002001uLL;
                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x4F0) = *((_QWORD *)&v362 + 1);
                v349 = v362 ^ *((_QWORD *)&v362 + 1);
                *v359++ = v349;
                --v360;
              }
              while ( v360 );
            }
            v363 = 0LL;
            if ( v358 )
            {
              v364 = __rdtsc();
              v365 = (__ROR8__(v364, 3) ^ v364) * (unsigned __int128)0x7010008004002001uLL;
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x500) = *((_QWORD *)&v365 + 1);
              v349 = v365 ^ *((_QWORD *)&v365 + 1);
              do
              {
                *(_BYTE *)v359 = v349;
                v359 = (unsigned __int64 *)((char *)v359 + 1);
                v349 >>= 8;
                --v358;
              }
              while ( v358 );
            }
            v366 = (unsigned int)v347 + v350;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x220) = v350;
            if ( v366 )
            {
              v367 = *v334;
              if ( *v334 != v334 )
              {
                v368 = 0;
                do
                {
                  v369 = v367[6];
                  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned __int64, unsigned __int64 *, __int64))(v85 + 616))(
                          v369,
                          v349,
                          v359,
                          v363)
                    && v368 < (unsigned int)v338 )
                  {
                    *(_QWORD *)(v366 + 8LL * v368++) = v369;
                  }
                  v367 = (_QWORD *)*v367;
                  ++*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                }
                while ( v367 != v334 );
                *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = v368;
              }
              v370 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
              (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64 *, __int64))(v85 + 840))(v366, v370, v359, v363);
              v371 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
              v372 = *v1;
              v373 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
              do
              {
                v374 = *(_QWORD *)(v371 + 8);
                if ( !(*(unsigned int (__fastcall **)(__int64))(v85 + 616))(v374)
                  && !(unsigned int)__114(v366, v370, v374)
                  && !*(_DWORD *)(v85 + 1536) )
                {
                  *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1552) = (char *)v373 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1560) = *v373;
                  *(_QWORD *)(v85 + 1568) = v374;
                  *(_DWORD *)(v85 + 1536) = 1;
                }
                v371 += 24LL;
              }
              while ( v371 < v372 );
              i15 = 0LL;
              goto LABEL_571;
            }
          }
          else
          {
            ++*(_DWORD *)(v85 + 1800);
          }
          i15 = 0LL;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x220) = 0LL;
LABEL_571:
          (*(void (__fastcall **)(_QWORD))(v85 + 264))(*(_QWORD *)(v85 + 1080));
          (*(void (**)(void))(v85 + 352))();
          (*(void (__fastcall **)(_QWORD))(v85 + 816))(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                 + 0x68));
          if ( *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x220) )
          {
            *(_DWORD *)(v85 + 1424) += *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) << 9;
            (*(void (__fastcall **)(_QWORD))(v85 + 240))(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                   + 0x220));
          }
          goto LABEL_217;
        case 26:
          if ( (*(_DWORD *)(v85 + 1432) & 1) != 0 )
            goto LABEL_217;
          v324 = *(_QWORD *)(v85 + 1184);
          v313 = 0;
          v325 = *(_QWORD **)(v85 + 1192);
          v326 = *(_QWORD *)(v85 + 1096);
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v324;
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = 0;
          (*(void (**)(void))(v85 + 360))();
          (*(void (__fastcall **)(__int64, _QWORD))(v85 + 280))(v326, 0LL);
          v327 = *(_QWORD ***)(v85 + 1056);
          v328 = *v327;
          if ( *v327 != v327 )
          {
            do
            {
              *((_BYTE *)v328 - 306) = 1;
              ++v313;
              v328 = (_QWORD *)*v328;
            }
            while ( v328 != v327 );
            *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v313;
          }
          (*(void (__fastcall **)(__int64, _QWORD))(v85 + 296))(v324, 0LL);
          v329 = *(_QWORD ***)(v85 + 1176);
          v330 = *v329;
          if ( *v329 != v329 )
          {
            v331 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
            do
            {
              if ( v330 - 3 != v325 )
              {
                v332 = *(v330 - 1);
                if ( !*(_BYTE *)(v332 + 446) && (*(_DWORD *)(v332 + 772) & 0x4000000) != 0 && !*(_DWORD *)(v85 + 1536) )
                {
                  *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1552) = (char *)v331 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1560) = *v331;
                  *(_QWORD *)(v85 + 1568) = v332;
                  *(_DWORD *)(v85 + 1536) = 1;
                }
                *(_BYTE *)(v332 + 446) = 0;
              }
              v330 = (_QWORD *)*v330;
            }
            while ( v330 != v329 );
            v313 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
            v324 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
          }
          v323 = v324;
LABEL_520:
          (*(void (__fastcall **)(__int64, _QWORD))(v85 + 304))(v323, 0LL);
          (*(void (__fastcall **)(_QWORD, _QWORD))(v85 + 288))(*(_QWORD *)(v85 + 1096), 0LL);
          (*(void (**)(void))(v85 + 368))();
          *(_DWORD *)(v85 + 1424) += v313 << 8;
          goto LABEL_217;
        case 27:
          if ( (*(_DWORD *)(v85 + 1432) & 1) == 0 )
            goto LABEL_217;
          v312 = *(_QWORD *)(v85 + 1184);
          v313 = 0;
          v314 = *(_QWORD **)(v85 + 1192);
          v315 = *(_QWORD *)(v85 + 1096);
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v312;
          (*(void (**)(void))(v85 + 360))();
          (*(void (__fastcall **)(__int64, _QWORD))(v85 + 280))(v315, 0LL);
          (*(void (__fastcall **)(__int64, _QWORD))(v85 + 296))(v312, 0LL);
          v316 = *(_QWORD ***)(v85 + 1176);
          v317 = *v316;
          if ( *v316 != v316 )
          {
            do
            {
              if ( v317 - 3 != v314 )
                *(_BYTE *)(*(v317 - 1) + 446LL) = 1;
              v317 = (_QWORD *)*v317;
            }
            while ( v317 != v316 );
            i15 = 0LL;
          }
          v318 = *(_QWORD ***)(v85 + 1056);
          v319 = *v318;
          if ( *v318 != v318 )
          {
            v320 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
            do
            {
              v321 = v319 - 94;
              if ( !*((_BYTE *)v319 - 306) )
              {
                v322 = (_QWORD *)v321[131];
                if ( v322 )
                {
                  if ( v322 != v314 && !*(_DWORD *)(v85 + 1536) )
                  {
                    *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v85 + 1552) = (char *)v320 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v85 + 1560) = *v320;
                    *(_QWORD *)(v85 + 1568) = v321;
                    *(_DWORD *)(v85 + 1536) = 1;
                  }
                }
              }
              *((_BYTE *)v321 + 446) = 0;
              ++v313;
              v319 = (_QWORD *)*v319;
            }
            while ( v319 != v318 );
            v312 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
          }
          v323 = v312;
          goto LABEL_520;
        case 28:
          v253 = *((unsigned int *)v96 + 4);
          if ( (_DWORD)v253 )
          {
            v290 = (_QWORD *)*((_QWORD *)v96 + 1);
            v291 = (const char *)v290;
            if ( v290 < (_QWORD *)((char *)v290 + v253) )
            {
              do
              {
                _mm_prefetch(v291, 0);
                v291 += 64;
              }
              while ( v291 < (const char *)v290 + v253 );
            }
            v292 = *(_QWORD *)(v85 + 1408);
            v293 = *((_DWORD *)v96 + 4);
            if ( (unsigned int)v253 >= 8 )
            {
              v294 = v253 >> 3;
              do
              {
                v293 -= 8;
                v292 = __ROL8__(*v290++ ^ v292, *(_DWORD *)(v85 + 1404));
                --v294;
              }
              while ( v294 );
            }
            for ( ; v293; --v293 )
            {
              v295 = *(unsigned __int8 *)v290;
              v290 = (_QWORD *)((char *)v290 + 1);
              v292 = __ROL8__(v295 ^ v292, *(_DWORD *)(v85 + 1404));
            }
            *(_DWORD *)(v85 + 1424) += v253;
            for ( i11 = v292; ; LODWORD(v292) = i11 ^ v292 )
            {
              i11 >>= 31;
              if ( !i11 )
                break;
            }
            v297 = *((unsigned int *)v96 + 5);
            v298 = v292 & 0x7FFFFFFF;
            if ( v298 != (_DWORD)v297 )
            {
              if ( !*(_DWORD *)(v85 + 1536) )
                *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v297 ^ v298;
              v299 = *((_QWORD *)v96 + 1);
              if ( !*(_DWORD *)(v85 + 1536) )
              {
                *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v85 + 1560) = *(int *)v96;
                *(_QWORD *)(v85 + 1568) = v299;
                *(_DWORD *)(v85 + 1536) = 1;
              }
            }
            i6 = 0LL;
            v300 = *((_QWORD *)v96 + 1) - 112LL;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x138) = v300;
            v301 = *(unsigned int **)(v300 + 80);
            if ( v301 )
              i6 = *v301;
            v302 = *(_QWORD **)(v300 + 80);
            v303 = (unsigned int *)((char *)v301 + (unsigned int)i6);
            v304 = (const char *)v302;
            if ( v301 < v303 )
            {
              do
              {
                _mm_prefetch(v304, 0);
                v304 += 64;
              }
              while ( v304 < (const char *)v303 );
            }
            v305 = *(_QWORD *)(v85 + 1408);
            v306 = i6;
            if ( (unsigned int)i6 >= 8 )
            {
              v307 = (unsigned __int64)(unsigned int)i6 >> 3;
              do
              {
                v306 -= 8;
                v305 = __ROL8__(*v302++ ^ v305, *(_DWORD *)(v85 + 1404));
                --v307;
              }
              while ( v307 );
            }
            for ( ; v306; --v306 )
            {
              v308 = *(unsigned __int8 *)v302;
              v302 = (_QWORD *)((char *)v302 + 1);
              v305 = __ROL8__(v308 ^ v305, *(_DWORD *)(v85 + 1404));
            }
            *(_DWORD *)(v85 + 1424) += i6;
            for ( i12 = v305; ; LODWORD(v305) = i12 ^ v305 )
            {
              i12 >>= 31;
              if ( !i12 )
                break;
            }
            v310 = *((unsigned int *)v96 + 11);
            v311 = v305 & 0x7FFFFFFF;
            if ( v311 == (_DWORD)v310 )
              goto LABEL_217;
            if ( *(_DWORD *)(v85 + 1536) )
              goto LABEL_217;
            *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v310 ^ v311;
            if ( *(_DWORD *)(v85 + 1536) )
              goto LABEL_217;
            *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v85 + 1560) = *(int *)v96;
            *(_QWORD *)(v85 + 1568) = v301;
            goto LABEL_394;
          }
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x398) = v96 + 48;
          v254 = *((_WORD *)v96 + 20);
          *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x390) = v254;
          *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x392) = v254;
          v1918 = v1 + 39;
          v255 = *(_QWORD *)(v85 + 1048);
          LOBYTE(v1917) = 0;
          if ( (*(int (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, _QWORD *))(v85 + 432))(
                 v1 + 114,
                 0LL,
                 0LL,
                 0LL,
                 v255,
                 v1917,
                 0LL,
                 v1 + 39) < 0 )
            goto LABEL_217;
          v120 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x138);
          if ( (*(_DWORD *)(v120 + 16) & 0x10) == 0 )
          {
LABEL_175:
            (*(void (__fastcall **)(__int64))(v85 + 424))(v120);
            goto LABEL_217;
          }
          if ( (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))(v85 + 456))(
                 *(_QWORD *)(v85 + 432),
                 v1 + 79,
                 (__int64)v1 + 860)
            && (v256 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 448))(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                 + 0x278))) != 0 )
          {
            v257 = *(_DWORD *)(v256 + 80);
            *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = v257;
          }
          else
          {
            v257 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
          }
          if ( (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD *))(v85 + 456))(
                 *((_QWORD *)v96 + 3),
                 v1 + 67,
                 v1 + 128)
            && (v258 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 448))(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                 + 0x218))) != 0 )
          {
            v259 = *(_DWORD *)(v258 + 80);
            *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74) = v259;
          }
          else
          {
            v259 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74);
          }
          if ( (*(_DWORD *)(v85 + 1672) & 0x40000000) == 0 )
          {
            *((_QWORD *)v96 + 1) = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x138) + 112LL;
            *((_DWORD *)v96 + 4) = 224;
          }
          v260 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x278);
          v261 = 0;
          v262 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x218);
          v263 = v257;
          while ( 1 )
          {
            i6 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x138) + 8LL * v261 + 112);
            if ( (!v257 || i6 < v260 || i6 > v257 + v260 - 1) && (!v259 || i6 < v262 || i6 > v259 + v262 - 1) )
              break;
            if ( ++v261 >= 0x1Cu )
            {
              if ( (*(_DWORD *)(v85 + 1672) & 0x40000000) != 0 )
              {
                (*(void (**)(void))(v85 + 424))();
                goto LABEL_263;
              }
              v264 = (_QWORD *)*((_QWORD *)v96 + 1);
              v265 = *((unsigned int *)v96 + 4);
              v266 = (const char *)v264;
              if ( v264 < (_QWORD *)((char *)v264 + v265) )
              {
                do
                {
                  _mm_prefetch(v266, 0);
                  v266 += 64;
                }
                while ( v266 < (const char *)v264 + v265 );
              }
              v267 = *(_QWORD *)(v85 + 1408);
              v268 = *((_DWORD *)v96 + 4);
              if ( (unsigned int)v265 >= 8 )
              {
                v269 = v265 >> 3;
                do
                {
                  v268 -= 8;
                  v267 = __ROL8__(*v264++ ^ v267, *(_DWORD *)(v85 + 1404));
                  --v269;
                }
                while ( v269 );
              }
              for ( ; v268; --v268 )
              {
                v270 = *(unsigned __int8 *)v264;
                v264 = (_QWORD *)((char *)v264 + 1);
                v267 = __ROL8__(v270 ^ v267, *(_DWORD *)(v85 + 1404));
              }
              *(_DWORD *)(v85 + 1424) += v265;
              for ( i13 = v267 >> 31; i13; i13 >>= 31 )
                LODWORD(v267) = i13 ^ v267;
              v272 = 0;
              *((_DWORD *)v96 + 5) = v267 & 0x7FFFFFFF;
              v273 = *(const char **)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x138) + 80LL);
              if ( !v273
                || (v272 = *(_DWORD *)v273, v274 = 0, i6 = (unsigned int)(*(_DWORD *)v273 - 8) >> 3, !(_DWORD)i6) )
              {
LABEL_452:
                v278 = *(const char **)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x138) + 80LL);
                v279 = &v273[v272];
                if ( v273 < v279 )
                {
                  do
                  {
                    _mm_prefetch(v278, 0);
                    v278 += 64;
                  }
                  while ( v278 < v279 );
                }
                v280 = *(_QWORD *)(v85 + 1408);
                i6 = v272;
                if ( v272 >= 8 )
                {
                  v281 = (unsigned __int64)v272 >> 3;
                  do
                  {
                    i6 = (unsigned int)(i6 - 8);
                    v280 = __ROL8__(*(_QWORD *)v273 ^ v280, *(_DWORD *)(v85 + 1404));
                    v273 += 8;
                    --v281;
                  }
                  while ( v281 );
                }
                i15 = 0LL;
                if ( (_DWORD)i6 )
                {
                  do
                  {
                    v282 = *(unsigned __int8 *)v273++;
                    v280 = __ROL8__(v282 ^ v280, *(_DWORD *)(v85 + 1404));
                    v127 = (_DWORD)i6 == 1;
                    i6 = (unsigned int)(i6 - 1);
                  }
                  while ( !v127 );
                }
                *(_DWORD *)(v85 + 1424) += v272;
                for ( i14 = v280; ; LODWORD(v280) = i14 ^ v280 )
                {
                  i14 >>= 31;
                  if ( !i14 )
                    break;
                }
                *((_DWORD *)v96 + 11) = v280 & 0x7FFFFFFF;
                goto LABEL_217;
              }
              v275 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x278);
              v276 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x218);
              while ( 1 )
              {
                v277 = *(_QWORD *)&v273[8 * v274 + 8];
                if ( v277
                  && (!v263 || v277 < v275 || v277 > v263 + v275 - 1)
                  && (!v259 || v277 < v276 || v277 > v259 + v276 - 1) )
                {
                  break;
                }
                if ( ++v274 >= (unsigned int)i6 )
                  goto LABEL_452;
              }
              *((_QWORD *)v96 + 4) = v277;
              i15 = 0LL;
              v284 = *(_QWORD *)(v85 + 1160);
              *(_QWORD *)v284 = v96;
              *(_DWORD *)(v284 + 16) = 48;
              if ( *(_DWORD *)(v85 + 1536) )
                goto LABEL_217;
              *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1560) = *(int *)v96;
              *(_QWORD *)(v85 + 1568) = v273;
LABEL_394:
              *(_DWORD *)(v85 + 1536) = 1;
              goto LABEL_217;
            }
          }
          if ( (*(_DWORD *)(v85 + 1672) & 0x40000000) != 0 )
          {
            v285 = *(_QWORD **)(v85 + 1848);
            v286 = 48;
            v287 = 6LL;
            do
            {
              v286 -= 8;
              *v285 = *(_QWORD *)v96;
              v96 += 8;
              ++v285;
              --v287;
            }
            while ( v287 );
            for ( i15 = 0LL; v286; --v286 )
            {
              v288 = *v96++;
              *(_BYTE *)v285 = v288;
              v285 = (_QWORD *)((char *)v285 + 1);
            }
            v96 = *(char **)(v85 + 1848);
          }
          else
          {
            i15 = 0LL;
          }
          *((_QWORD *)v96 + 4) = i6;
          v289 = *(_QWORD *)(v85 + 1160);
          *(_QWORD *)v289 = v96;
          *(_DWORD *)(v289 + 16) = 48;
LABEL_391:
          v251 = *((_QWORD *)v96 + 1);
          if ( *(_DWORD *)(v85 + 1536) )
            goto LABEL_217;
          *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
          v252 = v96 - 0x4C48B4211BBACBEBLL;
          goto LABEL_393;
      }
LABEL_1151:
      v778 = v105 - 2;
      if ( v778 )
      {
        v779 = v778 - 1;
        if ( v779 )
        {
          if ( v779 != 20 )
          {
            if ( *(_DWORD *)(v85 + 1536) )
              goto LABEL_217;
            *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v85 + 1560) = 257LL;
LABEL_1156:
            *(_QWORD *)(v85 + 1568) = 0LL;
            goto LABEL_394;
          }
          (*(void (__fastcall **)(_QWORD *, _QWORD))(v85 + 400))(v1 + 183, *((unsigned int *)v96 + 10));
          (*(void (__fastcall **)(_QWORD *, _QWORD))(v85 + 408))(v1 + 183, 0LL);
          v781 = *(_QWORD *)(v85 + 1792);
          if ( v781 )
          {
            v782 = *(_DWORD *)(v781 + 800);
          }
          else
          {
            v780 = 2098LL;
            v783 = __readmsr(0x832u);
            v782 = v783;
          }
          v784 = *(_QWORD *)(v85 + 1792);
          if ( v784 )
          {
            v785 = *(_DWORD *)(v784 + 832);
          }
          else
          {
            v780 = 2100LL;
            v786 = __readmsr(0x834u);
            v785 = v786;
          }
          (*(void (__fastcall **)(__int64))(v85 + 392))(v780);
          v787 = *((unsigned int *)v96 + 6);
          if ( (v782 & *((_DWORD *)v96 + 7)) == (_DWORD)v787
            && ((v782 & 0x10000) != 0 || (_BYTE)v782 == 0xD1 || (unsigned __int8)(v782 + 3) <= 1u)
            || (v788 = v787 | ((unsigned __int64)*((unsigned int *)v96 + 10) << 48) | 0x32000000000LL,
                *(_DWORD *)(v85 + 1536))
            || (*(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v782 ^ (unsigned __int64)*((unsigned int *)v96 + 6),
                *(_DWORD *)(v85 + 1536)) )
          {
            i6 = 0xB3B74BDEE4453415uLL;
          }
          else
          {
            i6 = 0xB3B74BDEE4453415uLL;
            *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v85 + 1560) = *(int *)v96;
            *(_QWORD *)(v85 + 1568) = v788;
            *(_DWORD *)(v85 + 1536) = 1;
          }
          v789 = *((unsigned int *)v96 + 8);
          if ( (v785 & *((_DWORD *)v96 + 9)) == (_DWORD)v789
            && ((v785 & 0x10000) != 0 || (_BYTE)v785 == 0xD1 || (unsigned __int8)(v785 + 3) <= 1u)
            || (v790 = v789 | ((unsigned __int64)*((unsigned int *)v96 + 10) << 48) | 0x34000000000LL,
                *(_DWORD *)(v85 + 1536))
            || (*(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v785 ^ (unsigned __int64)*((unsigned int *)v96 + 8),
                *(_DWORD *)(v85 + 1536)) )
          {
LABEL_1202:
            v93 = 0x8000LL;
            *(_DWORD *)(v85 + 1424) += 0x8000;
            goto LABEL_218;
          }
          *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
          v791 = v96 - 0x4C48B4211BBACBEBLL;
        }
        else
        {
          (*(void (__fastcall **)(_QWORD *, _QWORD))(v85 + 400))(v1 + 186, *((unsigned int *)v96 + 10));
          (*(void (__fastcall **)(_QWORD *, _QWORD))(v85 + 408))(v1 + 186, 0LL);
          KiGetGdtIdt(v1 + 81, v1 + 221);
          v792 = *(_QWORD **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28A);
          v793 = *((unsigned int *)v96 + 4);
          v794 = (const char *)v792;
          v795 = (unsigned __int64)v792 + v793;
          if ( v792 < (_QWORD *)((char *)v792 + v793) )
          {
            do
            {
              _mm_prefetch(v794, 0);
              v794 += 64;
            }
            while ( (unsigned __int64)v794 < v795 );
          }
          v796 = *(_QWORD *)(v85 + 1408);
          v797 = (unsigned int)v793;
          if ( (unsigned int)v793 >= 8 )
          {
            v795 = *(unsigned int *)(v85 + 1404);
            v798 = v793 >> 3;
            do
            {
              v797 = (unsigned int)(v797 - 8);
              v796 = __ROL8__(*v792++ ^ v796, v795);
              --v798;
            }
            while ( v798 );
          }
          if ( (_DWORD)v797 )
          {
            v795 = *(unsigned int *)(v85 + 1404);
            do
            {
              v799 = *(unsigned __int8 *)v792;
              v792 = (_QWORD *)((char *)v792 + 1);
              v796 = __ROL8__(v799 ^ v796, v795);
              v127 = (_DWORD)v797 == 1;
              v797 = (unsigned int)(v797 - 1);
            }
            while ( !v127 );
          }
          *(_DWORD *)(v85 + 1424) += v793;
          for ( i16 = v796; ; LODWORD(v796) = i16 ^ v796 )
          {
            i16 >>= 31;
            if ( !i16 )
              break;
          }
          v801 = v796 & 0x7FFFFFFF;
          (*(void (__fastcall **)(unsigned __int64, _QWORD *, __int64))(v85 + 392))(v795, v792, v797);
          if ( v801 == *((_DWORD *)v96 + 5)
            && *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x288) == *((_WORD *)v96 + 22) )
          {
            goto LABEL_1202;
          }
          if ( (*(_DWORD *)(v85 + 1672) & 0x40000000) != 0 )
          {
            v802 = *(_QWORD **)(v85 + 1848);
            v803 = 48;
            v804 = 6LL;
            do
            {
              v803 -= 8;
              *v802 = *(_QWORD *)v96;
              v96 += 8;
              ++v802;
              --v804;
            }
            while ( v804 );
            for ( ; v803; --v803 )
            {
              v805 = *v96++;
              *(_BYTE *)v802 = v805;
              v802 = (_QWORD *)((char *)v802 + 1);
            }
            v96 = *(char **)(v85 + 1848);
          }
          *((_QWORD *)v96 + 3) = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28A);
          *((_QWORD *)v96 + 4) = v801;
          if ( !*(_DWORD *)(v85 + 1536) )
            *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v801 ^ (unsigned __int64)*((unsigned int *)v96 + 5);
          v790 = *((_QWORD *)v96 + 1);
          if ( *(_DWORD *)(v85 + 1536) )
            goto LABEL_1202;
          *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
          v791 = v96 - 0x4C48B4211BBACBEBLL;
        }
        *(_QWORD *)(v85 + 1552) = v791;
        *(_QWORD *)(v85 + 1560) = *(int *)v96;
        *(_QWORD *)(v85 + 1568) = v790;
        *(_DWORD *)(v85 + 1536) = 1;
        goto LABEL_1202;
      }
      v806 = *((unsigned int *)v96 + 10);
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = 0;
      (*(void (__fastcall **)(_QWORD *, __int64))(v85 + 400))(v1 + 201, v806);
      (*(void (__fastcall **)(_QWORD *, _QWORD))(v85 + 408))(v1 + 201, 0LL);
      KiGetGdtIdt(v1 + 219, v1 + 97);
      v807 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30A);
      v808 = 0LL;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v807;
      v809 = 0;
      *v1 = 0LL;
      v810 = v807 + 4;
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = 0;
      do
      {
        v811 = 0LL;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x148) = *(_QWORD *)(v85 + 1512);
        v812 = 0LL;
        v813 = *(_QWORD *)(v85 + 1520);
        v814 = *(unsigned int *)(v85 + 1508);
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v813;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = 0LL;
        v815 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        v816 = *(_WORD *)v810;
        v817 = *(_QWORD *)(v85 + 1240) + v808;
        *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = *(_WORD *)(v810 - 4);
        *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2A) = *(_WORD *)(v810 + 2);
        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2C) = *(_DWORD *)(v810 + 4);
        v818 = (v816 >> 13) & 3;
        v819 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
        if ( v819 == v817 )
        {
          if ( v818 )
            goto LABEL_1243;
          v812 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(v85 + 976))(v809);
          if ( v812 )
          {
            v677 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) < 0x30u;
            v820 = *(_QWORD *)(v814 + v812);
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v820;
            if ( v677 )
              goto LABEL_1242;
            v813 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
            goto LABEL_1211;
          }
          v813 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
          v812 = -1LL;
        }
        v820 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
LABEL_1211:
        __writecr8(v815);
        if ( !v812 )
        {
          v821 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x148);
          if ( v819 < v821 )
            goto LABEL_1242;
          if ( v819 > v813 )
            goto LABEL_1242;
          v822 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v85 + 472))(
                   *(_QWORD *)(v85 + 1528),
                   v821,
                   (unsigned int)(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) - v821));
          if ( !v822 || (*(_DWORD *)(v822 + 36) & 0x2000000) != 0 )
            goto LABEL_1242;
        }
        if ( *(_WORD *)(v810 - 2) != 16 || (*(_WORD *)v810 & 0x1F00) != 0xE00 || *(__int16 *)v810 >= 0 )
          goto LABEL_1242;
        v823 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, _QWORD))(v85 + 544))(
                                 v819,
                                 v1 + 41,
                                 0LL);
        if ( v823
          && (v824 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x148), v824 + *v823 == v819)
          && v824 == *(_QWORD *)(v85 + 1512) )
        {
          if ( !v812 )
            goto LABEL_1223;
        }
        else if ( !v812 )
        {
          goto LABEL_1242;
        }
        if ( v818 )
        {
LABEL_1242:
          v811 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
LABEL_1243:
          i15 = 0LL;
          goto LABEL_1244;
        }
        if ( v812 == -1 )
        {
LABEL_1223:
          i15 = 0LL;
LABEL_1224:
          v825 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
          goto LABEL_1225;
        }
        v835 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD))(v85 + 544))(v820, v1 + 41, 0LL);
        i15 = 0LL;
        if ( v835 )
        {
          v836 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x148);
          if ( v836 + *v835 == v820 && v836 == *(_QWORD *)(v85 + 1512) )
          {
            v837 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v85 + 472))(
                     *(_QWORD *)(v85 + 1528),
                     v836,
                     (unsigned int)(v820 - v836));
            if ( v837 )
            {
              if ( (*(_DWORD *)(v837 + 36) & 0x2000000) == 0 )
                goto LABEL_1224;
            }
          }
        }
        v811 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
LABEL_1244:
        v838 = *(_QWORD *)(v85 + 1160);
        *(_QWORD *)v838 = v819;
        *(_DWORD *)(v838 + 16) = 128;
        if ( v811 )
        {
          v839 = *(_QWORD *)(v85 + 1160);
          *(_QWORD *)(v839 + 8) = v811;
          *(_DWORD *)(v839 + 20) = 128;
        }
        v825 = 1;
        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = 1;
LABEL_1225:
        v809 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) + 1;
        v808 = *v1 + 8LL;
        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v809;
        v810 += 16LL;
        *v1 = v808;
      }
      while ( v809 <= 0xFF );
      v826 = *(_QWORD **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
      v827 = v826;
      v828 = (const char *)v826;
      if ( v826 < v826 + 106 )
      {
        do
        {
          _mm_prefetch(v828, 0);
          v828 += 64;
        }
        while ( v828 < (const char *)v826 + 848 );
      }
      v829 = *(_QWORD *)(v85 + 1408);
      v830 = 848;
      v831 = *(_DWORD *)(v85 + 1404);
      v832 = 106LL;
      do
      {
        v830 -= 8;
        v829 = __ROL8__(*v827++ ^ v829, v831);
        --v832;
      }
      while ( v832 );
      for ( ; v830; --v830 )
      {
        v833 = *(unsigned __int8 *)v827;
        v827 = (_QWORD *)((char *)v827 + 1);
        v829 = __ROL8__(v833 ^ v829, v831);
      }
      *(_DWORD *)(v85 + 1424) += 848;
      for ( i17 = v829; ; LODWORD(v829) = i17 ^ v829 )
      {
        i17 >>= 31;
        if ( !i17 )
          break;
      }
      v840 = v826 + 450;
      v841 = v829 & 0x7FFFFFFF;
      v842 = (const char *)(v826 + 450);
      if ( v826 + 450 < v826 + 452 )
      {
        do
        {
          _mm_prefetch(v842, 0);
          v842 += 64;
        }
        while ( v842 < (const char *)v826 + 3616 );
      }
      v843 = *(unsigned int *)(v85 + 1404);
      LODWORD(v844) = 16;
      v845 = *(_QWORD *)(v85 + 1408);
      v846 = 2LL;
      do
      {
        v844 = (unsigned int)(v844 - 8);
        v845 = __ROL8__(*v840++ ^ v845, v843);
        --v846;
      }
      while ( v846 );
      if ( (_DWORD)v844 )
      {
        do
        {
          v847 = *(unsigned __int8 *)v840;
          v840 = (_QWORD *)((char *)v840 + 1);
          v845 = __ROL8__(v847 ^ v845, v843);
          v127 = (_DWORD)v844 == 1;
          v844 = (unsigned int)(v844 - 1);
        }
        while ( !v127 );
      }
      *(_DWORD *)(v85 + 1424) += 16;
      for ( i18 = v845; ; LODWORD(v845) = i18 ^ v845 )
      {
        i18 >>= 31;
        if ( !i18 )
          break;
      }
      v849 = v845 & 0x7FFFFFFF;
      (*(void (__fastcall **)(__int64, _QWORD *, __int64))(v85 + 392))(v843, v840, v844);
      v850 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
      if ( v841 != v850[5]
        || v849 != *((_QWORD *)v850 + 3)
        || *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x308) != *((_WORD *)v850 + 22)
        || v825 )
      {
        if ( !v825 )
        {
          v851 = v849;
          if ( v849 == *((_QWORD *)v850 + 3) )
          {
            v851 = (unsigned int)v850[5];
            if ( !*(_DWORD *)(v85 + 1536) )
            {
              v852 = v841;
              goto LABEL_1267;
            }
          }
          else
          {
            v852 = (unsigned int)v850[6];
            if ( !*(_DWORD *)(v85 + 1536) )
LABEL_1267:
              *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v851 ^ v852;
          }
        }
        v853 = *((_QWORD *)v850 + 1);
        if ( !*(_DWORD *)(v85 + 1536) )
        {
          *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v85 + 1552) = (char *)v850 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v85 + 1560) = *v850;
          *(_QWORD *)(v85 + 1568) = v853;
          *(_DWORD *)(v85 + 1536) = 1;
        }
      }
      *(_DWORD *)(v85 + 1424) += 0x10000;
LABEL_217:
      v93 = 0x8000LL;
LABEL_218:
      v148 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0);
      if ( *(_DWORD *)(v85 + 1420) )
        --v148;
      v90 = v148 + 1;
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0) = v90;
      if ( !*(_DWORD *)(v85 + 1536) )
      {
        v91 = (_DWORD *)(v85 + 1428);
        v149 = *(_DWORD *)(v85 + 1428);
        *v1 = v85 + 1428;
        if ( *(_DWORD *)(v85 + 1424) < v149 )
          continue;
      }
      goto LABEL_1525;
    }
    switch ( v105 )
    {
      case 30:
        if ( (v96[42] & 1) != 0 && !*(_QWORD *)(v85 + 1664) )
          goto LABEL_236;
        v965 = *(unsigned int *)(v85 + 1420);
        i6 = *((_QWORD *)v96 + 1);
        v966 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = i6;
        v967 = i6 + 12 * v965;
        v968 = (_DWORD *)(v967 + 12);
        v969 = (unsigned int)v966[9] / 0xCuLL;
        v970 = v966[9] / 0xCu;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v969;
        v971 = v969 - 1;
        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v969 - 1;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = i6 + 12 * v970;
        v972 = (unsigned __int64)v966 + (((unsigned int)(v969 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48;
        v973 = (char *)v966 + v965 + 48;
        v974 = *((unsigned __int16 *)v966 + 20);
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v972;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v972 + 24 * v974;
        if ( (unsigned int)v965 < (int)v969 - 1 )
        {
          v975 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
          do
          {
            if ( *v973 >= 0 )
            {
              v976 = (_QWORD *)(*((_QWORD *)v966 + 3) + *(unsigned int *)(v967 + 4));
              i6 = (unsigned int)(*v968 - *(_DWORD *)(v967 + 4));
              v977 = v976;
              v978 = (const char *)v976;
              if ( v976 < (_QWORD *)((char *)v976 + i6) )
              {
                do
                {
                  _mm_prefetch(v978, 0);
                  v978 += 64;
                }
                while ( v978 < (const char *)v976 + i6 );
              }
              v979 = *(_QWORD *)(v85 + 1408);
              v980 = i6;
              if ( (unsigned int)i6 >= 8 )
              {
                v981 = (unsigned __int64)(unsigned int)i6 >> 3;
                do
                {
                  v980 -= 8;
                  v979 = __ROL8__(*v977++ ^ v979, *(_DWORD *)(v85 + 1404));
                  --v981;
                }
                while ( v981 );
              }
              for ( ; v980; --v980 )
              {
                v982 = *(unsigned __int8 *)v977;
                v977 = (_QWORD *)((char *)v977 + 1);
                v979 = __ROL8__(v982 ^ v979, *(_DWORD *)(v85 + 1404));
              }
              *(_DWORD *)(v85 + 1424) += i6;
              for ( i19 = v979 >> 7; i19; i19 >>= 7 )
                LOBYTE(v979) = i19 ^ v979;
              v984 = v979 & 0x7F;
              if ( (_DWORD)v984 == (*v973 & 0x7F)
                || *(_DWORD *)(v85 + 1536)
                || (*(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = *v973 & 0x7F ^ (unsigned __int64)v984,
                    *(_DWORD *)(v85 + 1536)) )
              {
                v966 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
              }
              else
              {
                v966 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v85 + 1552) = (char *)v966 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v85 + 1560) = *v966;
                *(_QWORD *)(v85 + 1568) = v976;
                *(_DWORD *)(v85 + 1536) = 1;
              }
              *(_DWORD *)(v85 + 1424) += 64;
              v91 = (_DWORD *)*v1;
            }
            ++v973;
            v967 += 12LL;
            v968 += 3;
          }
          while ( (unsigned __int64)v968 < v975 && *(_DWORD *)(v85 + 1424) < *v91 );
          v972 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
          v969 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
          *(_DWORD *)(v85 + 1420) = ((int)v967 - *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78))
                                  / 12;
          v971 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
        }
        v985 = *(_DWORD *)(v85 + 1420);
        if ( v985 >= v971 )
        {
          if ( *(_DWORD *)(v85 + 1424) >= *(_DWORD *)(v85 + 1428) )
            goto LABEL_263;
          v986 = v972 + 24LL * (v985 - (unsigned int)v969 + 1);
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v986;
          while ( 1 )
          {
            v987 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
            v988 = (_DWORD *)(v986 + 8);
            v989 = 2LL;
            do
            {
              if ( (*v988 & 0x80000000) == 0 )
              {
                v990 = (_QWORD *)(*((_QWORD *)v987 + 3) + (unsigned int)*(v988 - 2));
                v991 = *(v988 - 1) - *(v988 - 2);
                v992 = v990;
                v993 = (unsigned __int64)v990 + v991;
                v994 = (const char *)v990;
                if ( (unsigned __int64)v990 < v993 )
                {
                  do
                  {
                    _mm_prefetch(v994, 0);
                    v994 += 64;
                  }
                  while ( (unsigned __int64)v994 < v993 );
                }
                v995 = *(_QWORD *)(v85 + 1408);
                v996 = *(v988 - 1) - *(v988 - 2);
                if ( v991 >= 8 )
                {
                  v997 = (unsigned __int64)v991 >> 3;
                  do
                  {
                    v996 -= 8;
                    v995 = __ROL8__(*v992++ ^ v995, *(_DWORD *)(v85 + 1404));
                    --v997;
                  }
                  while ( v997 );
                  v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                }
                if ( v996 )
                {
                  do
                  {
                    v998 = *(unsigned __int8 *)v992;
                    v992 = (_QWORD *)((char *)v992 + 1);
                    v995 = __ROL8__(v998 ^ v995, *(_DWORD *)(v85 + 1404));
                    --v996;
                  }
                  while ( v996 );
                  v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                }
                *(_DWORD *)(v85 + 1424) += v991;
                v999 = v995 >> 31;
                i6 = 0LL;
                while ( v999 )
                {
                  LODWORD(v995) = v999 ^ v995;
                  v999 >>= 31;
                }
                v1000 = v995 & 0x7FFFFFFF;
                if ( v1000 != (*v988 & 0x7FFFFFFF) && !*(_DWORD *)(v85 + 1536) )
                {
                  *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = *v988 & 0x7FFFFFFF ^ (unsigned __int64)v1000;
                  if ( !*(_DWORD *)(v85 + 1536) )
                  {
                    *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v85 + 1552) = (char *)v987 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v85 + 1560) = *v987;
                    *(_QWORD *)(v85 + 1568) = v990;
                    *(_DWORD *)(v85 + 1536) = 1;
                  }
                }
              }
              v988 += 3;
              --v989;
            }
            while ( v989 );
            v1001 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
            ++*(_DWORD *)(v85 + 1420);
            v986 = v1001 + 24;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v986;
            if ( v986 == *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) )
              goto LABEL_260;
            if ( *(_DWORD *)(v85 + 1424) >= *(_DWORD *)(v85 + 1428) )
              goto LABEL_263;
          }
        }
        break;
      case 31:
        if ( (*(_DWORD *)(v85 + 1432) & 1) == 0 )
          goto LABEL_217;
        if ( *(_QWORD *)(v85 + 1664) )
        {
          v909 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD))(v85 + 880))(26LL, v1 + 109, 0LL);
          v908 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x368);
          if ( v909 < 0 )
            v908 = 0LL;
        }
        else
        {
          v908 = 0LL;
        }
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v908;
        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = 0;
        v910 = 0LL;
        v911 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 864))(0LL);
        if ( v911 )
        {
          while ( v908 != v911 )
          {
            if ( (*(unsigned int (__fastcall **)(__int64))(v85 + 872))(v911) )
            {
              if ( (*(int (__fastcall **)(__int64))(v85 + 848))(v911) >= 0 )
              {
                v930 = (*(__int64 (__fastcall **)(__int64))(v85 + 896))(v911);
                v931 = (*(__int64 (__fastcall **)(__int64, __int64))(v85 + 904))(v911, (__int64)v1 + 141);
                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = (*(__int64 (__fastcall **)(__int64))(v85 + 912))(v911);
                if ( v930 == 97
                  || *(_DWORD *)(v85 + 1536)
                  || (*(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v930 ^ 0x61LL, *(_DWORD *)(v85 + 1536)) )
                {
                  v932 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                }
                else
                {
                  v932 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                  *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1552) = (char *)v932 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1560) = *v932;
                  *(_QWORD *)(v85 + 1568) = v911;
                  *(_DWORD *)(v85 + 1536) = 1;
                }
                v933 = 0;
                v934 = 0;
                if ( (v930 & 7) == 1 )
                {
                  v933 = 48;
                }
                else if ( (v930 & 7) == 2 )
                {
                  v933 = 16;
                  v934 = 16;
                }
                else if ( (v930 & 7) != 0 && !*(_DWORD *)(v85 + 1536) )
                {
                  *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1552) = (char *)v932 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1560) = *v932;
                  *(_QWORD *)(v85 + 1568) = v911;
                  *(_DWORD *)(v85 + 1536) = 1;
                }
                v935 = *(_QWORD *)(v85 + 1216);
                v936 = (unsigned __int64)v930 >> 4;
                v937 = v933 | *(_BYTE *)(v935 + 2 * v936);
                v938 = 0xB3B74BDEE4453415uLL;
                if ( v937 != v931 && !*(_DWORD *)(v85 + 1536) )
                {
                  *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1552) = (char *)v932 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1560) = *v932;
                  *(_QWORD *)(v85 + 1568) = v911;
                  *(_DWORD *)(v85 + 1536) = 1;
                }
                if ( ((unsigned __int8)v934 | *(_BYTE *)(v935 + 2 * v936 + 1)) != *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                           + 0x8D)
                  && !*(_DWORD *)(v85 + 1536) )
                {
                  *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1552) = (char *)v932 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1560) = *v932;
                  *(_QWORD *)(v85 + 1568) = v911;
                  *(_DWORD *)(v85 + 1536) = 1;
                }
                if ( v911 != *(_QWORD *)(v85 + 1000) )
                  v910 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(v85 + 888))(v911, 1LL);
                *v1 = v910;
                if ( v910 )
                {
                  v939 = v910;
                  if ( *v910 )
                  {
                    v940 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                    do
                    {
                      *v939 &= 0xFFFFFFFFFFFFFFFCuLL;
                      (*(void (__fastcall **)(_QWORD, unsigned __int64))(v85 + 424))(*v939, v938);
                      v941 = *(unsigned __int8 *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x8D);
                      v942 = v939[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( v942 == v940 )
                        v941 = v931;
                      v943 = v939[1] >> 6;
                      LOBYTE(v943) = v943 & 0xF;
                      if ( !(*(unsigned int (__fastcall **)(__int64, __int64))(v85 + 920))(v943, v941) )
                      {
                        if ( (*(_DWORD *)(v85 + 1672) & 0x40000000) != 0 )
                        {
                          v944 = *(_QWORD **)(v85 + 1848);
                          LODWORD(v938) = 48;
                          v945 = 6LL;
                          do
                          {
                            v938 = (unsigned int)(v938 - 8);
                            *v944 = *(_QWORD *)v96;
                            v96 += 8;
                            ++v944;
                            --v945;
                          }
                          while ( v945 );
                          if ( (_DWORD)v938 )
                          {
                            do
                            {
                              v946 = *v96++;
                              *(_BYTE *)v944 = v946;
                              v944 = (_QWORD *)((char *)v944 + 1);
                              v127 = (_DWORD)v938 == 1;
                              v938 = (unsigned int)(v938 - 1);
                            }
                            while ( !v127 );
                          }
                          v96 = *(char **)(v85 + 1848);
                        }
                        *((_QWORD *)v96 + 3) = v942;
                        *((_QWORD *)v96 + 4) = *v939;
                        v96[40] = ((unsigned __int64)*((unsigned int *)v939 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v85 + 1536) )
                        {
                          *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v85 + 1560) = *(int *)v96;
                          *(_QWORD *)(v85 + 1568) = v911;
                          *(_DWORD *)(v85 + 1536) = 1;
                        }
                      }
                      v939 += 6;
                    }
                    while ( *v939 );
LABEL_1430:
                    v910 = (_QWORD *)*v1;
                    LODWORD(i15) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
                  }
LABEL_1431:
                  (*(void (__fastcall **)(_QWORD *))(v85 + 240))(v910);
                }
LABEL_1432:
                (*(void (__fastcall **)(__int64))(v85 + 856))(v911);
                v908 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                *(_DWORD *)(v85 + 1424) += 0x8000;
                v910 = 0LL;
              }
LABEL_1433:
              v96 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
            }
            LODWORD(i15) = i15 + 1;
            *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = i15;
            v911 = (*(__int64 (__fastcall **)(__int64))(v85 + 864))(v911);
            if ( !v911 )
              goto LABEL_1435;
          }
          if ( (*(int (__fastcall **)(__int64))(v85 + 848))(v911) >= 0 )
          {
            v912 = (*(__int64 (__fastcall **)(__int64))(v85 + 896))(v911);
            v913 = (*(__int64 (__fastcall **)(__int64, __int64))(v85 + 904))(v911, (__int64)v1 + 132);
            *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v913;
            v914 = v913;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = (*(__int64 (__fastcall **)(__int64))(v85 + 912))(v911);
            if ( v912 == 97
              || *(_DWORD *)(v85 + 1536)
              || (*(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v912 ^ 0x61LL, *(_DWORD *)(v85 + 1536)) )
            {
              v915 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
            }
            else
            {
              v915 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
              *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1552) = (char *)v915 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1560) = *v915;
              *(_QWORD *)(v85 + 1568) = v911;
              *(_DWORD *)(v85 + 1536) = 1;
            }
            v916 = 0;
            v917 = 0;
            if ( (v912 & 7) == 1 )
            {
              v916 = 48;
            }
            else if ( (v912 & 7) == 2 )
            {
              v916 = 16;
              v917 = 16;
            }
            else if ( (v912 & 7) != 0 && !*(_DWORD *)(v85 + 1536) )
            {
              *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1552) = (char *)v915 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1560) = *v915;
              *(_QWORD *)(v85 + 1568) = v911;
              *(_DWORD *)(v85 + 1536) = 1;
            }
            v918 = *(_QWORD *)(v85 + 1216);
            v919 = (unsigned __int64)v912 >> 4;
            if ( ((unsigned __int8)v916 | *(_BYTE *)(v918 + 2 * v919)) != v914 && !*(_DWORD *)(v85 + 1536) )
            {
              *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1552) = (char *)v915 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1560) = *v915;
              *(_QWORD *)(v85 + 1568) = v911;
              *(_DWORD *)(v85 + 1536) = 1;
            }
            if ( ((unsigned __int8)v917 | *(_BYTE *)(v918 + 2 * v919 + 1)) != *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                       + 0x84)
              && !*(_DWORD *)(v85 + 1536) )
            {
              *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1552) = (char *)v915 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1560) = *v915;
              *(_QWORD *)(v85 + 1568) = v911;
              *(_DWORD *)(v85 + 1536) = 1;
            }
            if ( v911 == *(_QWORD *)(v85 + 1000) )
              v910 = 0LL;
            else
              v910 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(v85 + 888))(v911, 1LL);
            *v1 = v910;
            if ( v910 )
            {
              v920 = v910;
              if ( *v910 )
              {
                v921 = *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                v922 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                do
                {
                  *v920 &= 0xFFFFFFFFFFFFFFFCuLL;
                  (*(void (__fastcall **)(_QWORD))(v85 + 424))(*v920);
                  v923 = *(unsigned __int8 *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x84);
                  v924 = v920[1] & 0xFFFFFFFFFFFF0000uLL;
                  if ( v924 == v922 )
                    v923 = v921;
                  v925 = v920[1] >> 6;
                  LOBYTE(v925) = v925 & 0xF;
                  if ( !(*(unsigned int (__fastcall **)(__int64, __int64))(v85 + 920))(v925, v923) )
                  {
                    if ( (*(_DWORD *)(v85 + 1672) & 0x40000000) != 0 )
                    {
                      v926 = *(_QWORD **)(v85 + 1848);
                      v927 = 48;
                      v928 = 6LL;
                      do
                      {
                        v927 -= 8;
                        *v926 = *(_QWORD *)v96;
                        v96 += 8;
                        ++v926;
                        --v928;
                      }
                      while ( v928 );
                      for ( ; v927; --v927 )
                      {
                        v929 = *v96++;
                        *(_BYTE *)v926 = v929;
                        v926 = (_QWORD *)((char *)v926 + 1);
                      }
                      v96 = *(char **)(v85 + 1848);
                    }
                    *((_QWORD *)v96 + 3) = v924;
                    *((_QWORD *)v96 + 4) = *v920;
                    v96[40] = ((unsigned __int64)*((unsigned int *)v920 + 2) >> 6) & 0xF;
                    if ( !*(_DWORD *)(v85 + 1536) )
                    {
                      *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v85 + 1560) = *(int *)v96;
                      *(_QWORD *)(v85 + 1568) = v911;
                      *(_DWORD *)(v85 + 1536) = 1;
                    }
                  }
                  v920 += 6;
                }
                while ( *v920 );
                goto LABEL_1430;
              }
              goto LABEL_1431;
            }
            goto LABEL_1432;
          }
          goto LABEL_1433;
        }
LABEL_1435:
        v947 = *(_QWORD *)(v85 + 1000);
        if ( (*(int (__fastcall **)(__int64))(v85 + 848))(v947) >= 0 )
        {
          v948 = (*(__int64 (__fastcall **)(__int64))(v85 + 896))(v947);
          v949 = (*(__int64 (__fastcall **)(__int64, __int64))(v85 + 904))(v947, (__int64)v1 + 140);
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = (*(__int64 (__fastcall **)(__int64))(v85 + 912))(v947);
          if ( v948 != 98 && !*(_DWORD *)(v85 + 1536) )
          {
            *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v948 ^ 0x62LL;
            if ( !*(_DWORD *)(v85 + 1536) )
            {
              *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1560) = *(int *)v96;
              *(_QWORD *)(v85 + 1568) = v947;
              *(_DWORD *)(v85 + 1536) = 1;
            }
          }
          v950 = 0;
          v951 = 0;
          if ( (v948 & 7) == 1 )
          {
            v950 = 48;
          }
          else if ( (v948 & 7) == 2 )
          {
            v950 = 16;
            v951 = 16;
          }
          else if ( (v948 & 7) != 0 && !*(_DWORD *)(v85 + 1536) )
          {
            *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v85 + 1560) = *(int *)v96;
            *(_QWORD *)(v85 + 1568) = v947;
            *(_DWORD *)(v85 + 1536) = 1;
          }
          v952 = *(_QWORD *)(v85 + 1216);
          v953 = (unsigned __int64)v948 >> 4;
          v954 = v950 | *(_BYTE *)(v952 + 2 * v953);
          v955 = 0xA3A03F5891C8B4E8uLL;
          if ( v954 != v949 && !*(_DWORD *)(v85 + 1536) )
          {
            *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v85 + 1560) = *(int *)v96;
            *(_QWORD *)(v85 + 1568) = v947;
            *(_DWORD *)(v85 + 1536) = 1;
          }
          if ( ((unsigned __int8)v951 | *(_BYTE *)(v952 + 2 * v953 + 1)) != *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                     + 0x8C)
            && !*(_DWORD *)(v85 + 1536) )
          {
            *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v85 + 1560) = *(int *)v96;
            *(_QWORD *)(v85 + 1568) = v947;
            *(_DWORD *)(v85 + 1536) = 1;
          }
          if ( v947 != *(_QWORD *)(v85 + 1000) )
            v910 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(v85 + 888))(v947, 1LL);
          *v1 = v910;
          if ( v910 )
          {
            v956 = v910;
            if ( *v910 )
            {
              v957 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
              v958 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
              do
              {
                *v956 &= 0xFFFFFFFFFFFFFFFCuLL;
                (*(void (__fastcall **)(_QWORD, unsigned __int64))(v85 + 424))(*v956, v955);
                v959 = *(unsigned __int8 *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x8C);
                v960 = v956[1] & 0xFFFFFFFFFFFF0000uLL;
                if ( v960 == v957 )
                  v959 = v949;
                v961 = v956[1] >> 6;
                LOBYTE(v961) = v961 & 0xF;
                if ( !(*(unsigned int (__fastcall **)(__int64, __int64))(v85 + 920))(v961, v959) )
                {
                  if ( (*(_DWORD *)(v85 + 1672) & 0x40000000) != 0 )
                  {
                    v962 = *(_QWORD **)(v85 + 1848);
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
                        v127 = (_DWORD)v955 == 1;
                        v955 = (unsigned int)(v955 - 1);
                      }
                      while ( !v127 );
                    }
                    v958 = *(char **)(v85 + 1848);
                  }
                  *((_QWORD *)v958 + 3) = v960;
                  *((_QWORD *)v958 + 4) = *v956;
                  v958[40] = ((unsigned __int64)*((unsigned int *)v956 + 2) >> 6) & 0xF;
                  if ( !*(_DWORD *)(v85 + 1536) )
                  {
                    *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v85 + 1552) = v958 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v85 + 1560) = *(int *)v958;
                    *(_QWORD *)(v85 + 1568) = v947;
                    *(_DWORD *)(v85 + 1536) = 1;
                  }
                }
                v956 += 6;
              }
              while ( *v956 );
              v910 = (_QWORD *)*v1;
            }
            (*(void (__fastcall **)(_QWORD *, unsigned __int64))(v85 + 240))(v910, v955);
          }
          (*(void (__fastcall **)(__int64, unsigned __int64))(v85 + 856))(v947, v955);
          LODWORD(i15) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
          *(_DWORD *)(v85 + 1424) += 0x8000;
        }
        if ( *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) )
          (*(void (**)(void))(v85 + 424))();
        *(_DWORD *)(v85 + 1424) += (_DWORD)i15 << 8;
        break;
      case 32:
        sub_14017DB84(v85, (int *)v96);
        goto LABEL_217;
      case 33:
        sub_14017D3DC(v85, (int *)v96);
        goto LABEL_217;
      case 35:
        if ( (*((_DWORD *)v96 + 10) & 1) != 0 && !*(_QWORD *)(v85 + 1664) )
          goto LABEL_217;
        v888 = (_QWORD *)*((_QWORD *)v96 + 1);
        v889 = *((unsigned int *)v96 + 4);
        v890 = (const char *)v888;
        if ( v888 < (_QWORD *)((char *)v888 + v889) )
        {
          do
          {
            _mm_prefetch(v890, 0);
            v890 += 64;
          }
          while ( v890 < (const char *)v888 + v889 );
        }
        v891 = *(_QWORD *)(v85 + 1408);
        v892 = *((_DWORD *)v96 + 4);
        if ( (unsigned int)v889 >= 8 )
        {
          v893 = v889 >> 3;
          do
          {
            v892 -= 8;
            v891 = __ROL8__(*v888++ ^ v891, *(_DWORD *)(v85 + 1404));
            --v893;
          }
          while ( v893 );
        }
        for ( ; v892; --v892 )
        {
          v894 = *(unsigned __int8 *)v888;
          v888 = (_QWORD *)((char *)v888 + 1);
          v891 = __ROL8__(v894 ^ v891, *(_DWORD *)(v85 + 1404));
        }
        *(_DWORD *)(v85 + 1424) += v889;
        for ( i20 = v891; ; LODWORD(v891) = i20 ^ v891 )
        {
          i20 >>= 31;
          if ( !i20 )
            break;
        }
        v896 = *((unsigned int *)v96 + 5);
        v897 = v891 & 0x7FFFFFFF;
        if ( v897 == (_DWORD)v896 )
        {
          i6 = 0xB3B74BDEE4453415uLL;
        }
        else
        {
          if ( !*(_DWORD *)(v85 + 1536) )
            *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v896 ^ v897;
          i6 = 0xB3B74BDEE4453415uLL;
          v898 = *((_QWORD *)v96 + 1);
          if ( !*(_DWORD *)(v85 + 1536) )
          {
            *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v85 + 1560) = *(int *)v96;
            *(_QWORD *)(v85 + 1568) = v898;
            *(_DWORD *)(v85 + 1536) = 1;
          }
        }
        v899 = *((_DWORD *)v96 + 10);
        if ( (v899 & 2) == 0 )
          goto LABEL_217;
        v900 = *((_QWORD *)v96 + 1);
        if ( (v899 & 4) != 0 )
        {
          v901 = *((_QWORD *)v96 + 3);
          v902 = **(_QWORD **)(v900 + 112);
          if ( v902 != v901 )
          {
            v903 = *(_QWORD *)(v85 + 1160);
            *(_QWORD *)v903 = v902;
            *(_DWORD *)(v903 + 16) = 256;
            if ( !*(_DWORD *)(v85 + 1536) )
              *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v901 ^ v902;
            v904 = *(_QWORD *)(v900 + 112);
            if ( !*(_DWORD *)(v85 + 1536) )
            {
              *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1560) = *(int *)v96;
              *(_QWORD *)(v85 + 1568) = v904;
              *(_DWORD *)(v85 + 1536) = 1;
            }
          }
        }
        if ( (*((_DWORD *)v96 + 10) & 8) == 0 )
          goto LABEL_217;
        v905 = *((_QWORD *)v96 + 4);
        v906 = **(_QWORD **)(v900 + 120);
        if ( v906 == v905 )
          goto LABEL_217;
        v907 = *(_QWORD *)(v85 + 1160);
        *(_QWORD *)v907 = v906;
        *(_DWORD *)(v907 + 16) = 256;
        if ( !*(_DWORD *)(v85 + 1536) )
          *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v905 ^ v906;
        v251 = *(_QWORD *)(v900 + 120);
        if ( *(_DWORD *)(v85 + 1536) )
          goto LABEL_217;
        *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
        v252 = v96 - 0x4C48B4211BBACBEBLL;
LABEL_393:
        *(_QWORD *)(v85 + 1552) = v252;
        *(_QWORD *)(v85 + 1560) = *(int *)v96;
        *(_QWORD *)(v85 + 1568) = v251;
        goto LABEL_394;
      case 36:
        v854 = (_QWORD *)*((_QWORD *)v96 + 1);
        v855 = *((unsigned int *)v96 + 4);
        v856 = (const char *)v854;
        if ( v854 < (_QWORD *)((char *)v854 + v855) )
        {
          do
          {
            _mm_prefetch(v856, 0);
            v856 += 64;
          }
          while ( v856 < (const char *)v854 + v855 );
        }
        v857 = *(_QWORD *)(v85 + 1408);
        v858 = *((_DWORD *)v96 + 4);
        if ( (unsigned int)v855 >= 8 )
        {
          v859 = v855 >> 3;
          do
          {
            v858 -= 8;
            v857 = __ROL8__(*v854++ ^ v857, *(_DWORD *)(v85 + 1404));
            --v859;
          }
          while ( v859 );
        }
        for ( ; v858; --v858 )
        {
          v860 = *(unsigned __int8 *)v854;
          v854 = (_QWORD *)((char *)v854 + 1);
          v857 = __ROL8__(v860 ^ v857, *(_DWORD *)(v85 + 1404));
        }
        *(_DWORD *)(v85 + 1424) += v855;
        for ( i21 = v857; ; LODWORD(v857) = i21 ^ v857 )
        {
          i21 >>= 31;
          if ( !i21 )
            break;
        }
        v862 = *((unsigned int *)v96 + 5);
        v863 = v857 & 0x7FFFFFFF;
        if ( v863 != (_DWORD)v862 )
        {
          if ( !*(_DWORD *)(v85 + 1536) )
            *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v862 ^ v863;
          v864 = *((_QWORD *)v96 + 1);
          if ( !*(_DWORD *)(v85 + 1536) )
          {
            *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v85 + 1560) = *(int *)v96;
            *(_QWORD *)(v85 + 1568) = v864;
            *(_DWORD *)(v85 + 1536) = 1;
          }
        }
        v865 = *(_QWORD *)(v85 + 1088);
        v866 = *(_QWORD *)(v85 + 1064) + 16LL;
        v867 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        (*(void (__fastcall **)(__int64))(v85 + 320))(v865);
        v869 = *(unsigned int **)(v85 + 1064);
        v870 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
        v871 = *((_BYTE *)v869 + 12) != 0;
        v872 = v866 + 24LL * *v869;
        while ( 1 )
        {
          v873 = 24LL;
          v874 = (__int64 *)(v870 + 24);
          v875 = (__int64 *)v866;
          while ( 1 )
          {
            v876 = *v875++;
            v877 = *v874++;
            if ( v876 != v877 )
              break;
            v873 = (unsigned int)(v873 - 8);
            if ( (unsigned int)v873 < 8 )
            {
              v878 = (_DWORD)v873 == 0;
              while ( !v878 )
              {
                v868 = *(unsigned __int8 *)v875;
                v875 = (__int64 *)((char *)v875 + 1);
                v879 = *(unsigned __int8 *)v874;
                v874 = (__int64 *)((char *)v874 + 1);
                if ( v868 != v879 )
                  goto LABEL_1298;
                v878 = (_DWORD)v873 == 1;
                v873 = (unsigned int)(v873 - 1);
              }
LABEL_1299:
              (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v85 + 384))(
                *(_QWORD *)(v85 + 1088),
                v868,
                v873,
                v874);
              __writecr8(v867);
              i15 = 0LL;
              if ( v871 && *(_QWORD *)(v870 + 24) == 1LL || v866 != v872 )
              {
                v880 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
              }
              else
              {
                v880 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                if ( !*(_DWORD *)(v85 + 1536) )
                {
                  *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v85 + 1552) = (char *)v880 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v85 + 1560) = *v880;
                  *(_QWORD *)(v85 + 1568) = v866;
                  *(_DWORD *)(v85 + 1536) = 1;
                }
              }
              v881 = *(_QWORD *)(v85 + 1088);
              v882 = *(_QWORD *)(v85 + 1064) + 16LL;
              v883 = KeGetCurrentIrql();
              __writecr8(0xFuLL);
              (*(void (__fastcall **)(__int64))(v85 + 320))(v881);
              v884 = 0LL;
              v885 = v882 + 24LL * **(unsigned int **)(v85 + 1064);
              while ( 1 )
              {
                v882 += 24LL;
                if ( v882 >= v885 )
                  break;
                v886 = *(_QWORD *)(v882 + 8);
                if ( v886 < v884 )
                  break;
                if ( (v886 & 0xFFFFFFFFFFFFF000uLL) != v886 )
                  break;
                v887 = v886 + *(unsigned int *)(v882 + 16);
                if ( v887 <= v886 || v887 == v884 )
                  break;
                v884 = v886 + *(unsigned int *)(v882 + 16);
              }
              (*(void (__fastcall **)(_QWORD))(v85 + 384))(*(_QWORD *)(v85 + 1088));
              __writecr8(v883);
              if ( v882 == v885 || *(_DWORD *)(v85 + 1536) )
                goto LABEL_217;
              *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1552) = (char *)v880 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1560) = *v880;
              *(_QWORD *)(v85 + 1568) = v882;
              goto LABEL_394;
            }
          }
LABEL_1298:
          v866 += 24LL;
          if ( v866 >= v872 )
            goto LABEL_1299;
        }
      case 37:
        if ( (*(_DWORD *)(v85 + 1676) & 2) != 0
          || !(*(unsigned __int8 (**)(void))(v85 + 968))()
          || *(_DWORD *)(v85 + 1536) )
        {
          goto LABEL_217;
        }
        *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v85 + 1552) = v96 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v85 + 1560) = *(int *)v96;
        goto LABEL_1156;
      default:
        goto LABEL_1151;
    }
LABEL_216:
    i15 = 0LL;
    goto LABEL_217;
  }
LABEL_1525:
  *(_DWORD *)(v85 + 1416) = v90;
  if ( *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C)
    && ((*(_DWORD *)(v85 + 1672) & 0x8000) != 0 || !*(_DWORD *)(v85 + 1536)) )
  {
    v1002 = *(_QWORD *)(v85 + 1664);
    *(_QWORD *)(v85 + 1664) = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD *))(v85 + 600))(v1002, v1 + 189);
    v1003 = *(_DWORD *)(v85 + 1672);
    if ( (v1003 & 1) != 0 )
    {
      *(_DWORD *)(v85 + 1672) = v1003 & 0xFFFFFFFE;
      v1004 = (*(__int64 (__fastcall **)(__int64))(v85 + 576))(v1002);
      v1002 = v1004;
      if ( v1004 )
        *(_DWORD *)(v85 + 1648) = (*(__int64 (__fastcall **)(__int64))(v85 + 608))(v1004);
      else
        *(_DWORD *)(v85 + 1648) = -1;
    }
    if ( v1002 )
      (*(void (__fastcall **)(__int64))(v85 + 584))(v1002);
  }
  if ( (*(_DWORD *)(v85 + 1672) & 8) != 0 && (*(_DWORD *)(v85 + 1676) & 4) != 0 )
  {
    v1005 = *(unsigned int *)(v85 + 1392);
    v1006 = *(_DWORD *)(v85 + 1676) & 1;
    v1007 = *(_QWORD *)(v85 + 1824);
    v1008 = *(_DWORD *)(v85 + 1356);
    v1009 = *(_QWORD *)(v85 + 1776);
    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = v1005;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v1007;
    if ( v1006 )
      v1009 = *(_QWORD *)(v85 + 1232);
    v1010 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD *))(v85 + 336);
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = *(_QWORD *)(v85 + 944);
    *v1 = *(_QWORD *)(v85 + 632);
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = *(_QWORD *)(v85 + 752);
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1010;
    v1011 = __rdtsc();
    v1012 = (__ROR8__(v1011, 3) ^ v1011) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x520) = *((_QWORD *)&v1012 + 1);
    v1013 = -1200000000LL - ((unsigned __int64)v1012 ^ *((_QWORD *)&v1012 + 1)) % 0x5F5E100;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B8) = v1013;
    if ( (*(_DWORD *)(v85 + 1672) & 0x4000000) != 0 )
    {
      v1014 = __rdtsc();
      v1015 = (__ROR8__(v1014, 3) ^ v1014) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x530) = *((_QWORD *)&v1015 + 1);
      if ( ((unsigned __int64)v1015 ^ *((_QWORD *)&v1015 + 1)) % 0xA < 2 )
      {
        v1016 = __rdtsc();
        v1017 = (__ROR8__(v1016, 3) ^ v1016) * (unsigned __int128)0x7010008004002001uLL;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x540) = *((_QWORD *)&v1017 + 1);
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B8) = (((unsigned __int64)v1017 ^ *((_QWORD *)&v1017 + 1))
                                                                                % 0xA
                                                                                + 1)
                                                                               * v1013;
      }
    }
    v1018 = *(_DWORD *)(v85 + 1672);
    v1019 = 0LL;
    v1020 = 0LL;
    if ( (v1018 & 2) == 0 )
      v1008 = v1005;
    if ( (v1018 & 0x80u) != 0 )
    {
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74) = 1;
      v1021 = __rdtsc();
      v1022 = (__ROR8__(v1021, 3) ^ v1021) * (unsigned __int128)0x7010008004002001uLL;
      v1023 = 234;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x550) = *((_QWORD *)&v1022 + 1);
      v1019 = v1022 ^ *((_QWORD *)&v1022 + 1);
      v1024 = v1019;
      v1025 = (_QWORD *)(v85 + 1864);
      v1020 = v1019 ^ v85;
      do
      {
        *v1025-- ^= v1024;
        v1024 = __ROR8__(v1024, v1023--);
      }
      while ( v1023 );
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v1005;
      v1026 = (unsigned __int64)(v1005 - 1872) >> 3;
      v1027 = v1005;
      if ( (_DWORD)v1026 )
      {
        v1028 = (__int64 *)(v85 + 1864 + 8LL * (int)v1026);
        do
        {
          v1029 = *v1028--;
          v1020 = (2 * v1020) ^ __ROR8__(v1029, v1026);
          LODWORD(v1026) = v1026 - 1;
        }
        while ( (_DWORD)v1026 );
        v1027 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
        v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
        LODWORD(v1005) = v1027;
      }
      v1030 = (v1008 - (unsigned int)v1005) >> 3;
      if ( (_DWORD)v1030 )
      {
        v1031 = (_QWORD *)(v85 + v1027 + 8 * v1030 - 8);
        do
        {
          *v1031-- ^= v1024;
          v1024 = __ROR8__(v1024, v1030);
          LODWORD(v1030) = v1030 - 1;
        }
        while ( (_DWORD)v1030 );
      }
      v1007 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
      v1010 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD *))(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
    }
    else
    {
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74) = 0;
    }
    if ( v1007 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD *, void (__fastcall *)(_QWORD, _QWORD, _QWORD *), __int64))(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8))(
        v85,
        v1008,
        v1 + 55,
        v1010,
        v1007);
    }
    else if ( v1009 )
    {
      if ( !((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD *))*v1)(v1009, 0LL, 0LL, 0LL, v1 + 55)
        && v1006 )
      {
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68))(
          v1009,
          0LL,
          0LL);
      }
    }
    else
    {
      v1010(0LL, 0LL, v1 + 55);
    }
    if ( *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74) )
    {
      v1032 = (_QWORD *)(v85 + 1864);
      i6 = v1019 ^ v85;
      v1033 = 234;
      do
      {
        *v1032-- ^= v1019;
        v1019 = __ROR8__(v1019, v1033--);
      }
      while ( v1033 );
      v1034 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
      v1035 = v1034;
      v1036 = (unsigned __int64)(v1034 - 1872) >> 3;
      if ( (_DWORD)v1036 )
      {
        v1037 = (__int64 *)(v85 + 8 * ((int)v1036 + 233LL));
        do
        {
          v1038 = *v1037--;
          v93 = __ROR8__(v1038, v1036);
          i6 = (2 * i6) ^ v93;
          LODWORD(v1036) = v1036 - 1;
        }
        while ( (_DWORD)v1036 );
        v1035 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
      }
      v1039 = (v1008 - (unsigned int)v1034) >> 3;
      if ( v1039 )
      {
        v93 = v85 + v1035 + 8 * (v1039 - 1LL);
        do
        {
          *(_QWORD *)v93 ^= v1019;
          v1019 = __ROR8__(v1019, v1039);
          v93 -= 8LL;
          --v1039;
        }
        while ( v1039 );
      }
      if ( i6 != v1020 )
      {
        v1040 = *(_QWORD *)(v85 + 1160);
        v1041 = *(_DWORD *)(v85 + 1356);
        *(_QWORD *)v1040 = v85;
        *(_DWORD *)(v1040 + 16) = v1041;
        if ( !*(_DWORD *)(v85 + 1536) )
        {
          *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v1020 ^ i6;
          if ( !*(_DWORD *)(v85 + 1536) )
          {
            *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v85 + 1552) = 0LL;
            *(_QWORD *)(v85 + 1560) = 270LL;
            *(_QWORD *)(v85 + 1568) = i6;
            *(_DWORD *)(v85 + 1536) = 1;
          }
        }
      }
    }
  }
  v1042 = *(_DWORD *)(v85 + 1624);
  if ( v1042 == 6 || v1042 == 1 )
    goto LABEL_2383;
  if ( !*(_DWORD *)(v85 + 1536) )
  {
    if ( **(_QWORD **)(v85 + 1632) == *(_QWORD *)(v85 + 1640) )
    {
      if ( (*(_DWORD *)(v85 + 1432) & 1) != 0 )
      {
        v1564 = *(unsigned int *)(v85 + 1648);
        v1565 = (_DWORD)v1564 == -1
              ? 0LL
              : (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v85 + 568))(v1564, v93);
        if ( v1565 || (v1565 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 576))(0LL)) != 0 )
        {
          v1566 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(v85 + 592))(v1565, v1 + 189);
          if ( v1566 >= 0 )
          {
            *(_QWORD *)(v85 + 1664) = v1565;
            v1566 = 0;
            *(_DWORD *)(v85 + 1424) += 0x10000;
          }
          else
          {
            (*(void (__fastcall **)(__int64))(v85 + 584))(v1565);
          }
          if ( v1566 >= 0 )
          {
            if ( **(_QWORD **)(v85 + 1632) == *(_QWORD *)(v85 + 1640) )
            {
              if ( *(_DWORD *)(*(_QWORD *)(v85 + 1136) + 48LL) )
              {
                _InterlockedOr(v1915, 0);
                if ( **(_QWORD **)(v85 + 1632) == *(_QWORD *)(v85 + 1640) )
                {
                  v93 = **(_QWORD **)(v85 + 1632);
                  if ( !*(_DWORD *)(v85 + 1536) )
                    *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v93 ^ *(_QWORD *)(v85 + 1640);
                  v1567 = *(_QWORD *)(v85 + 1640);
                  if ( !*(_DWORD *)(v85 + 1536) )
                  {
                    *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v85 + 1552) = 0LL;
                    *(_QWORD *)(v85 + 1560) = 259LL;
                    *(_QWORD *)(v85 + 1568) = v1567;
                    *(_DWORD *)(v85 + 1536) = 1;
                  }
                }
              }
            }
            if ( (*(_DWORD *)(v85 + 1672) & 0x8000) != 0 || !*(_DWORD *)(v85 + 1536) )
            {
              v1568 = *(_QWORD *)(v85 + 1664);
              *(_QWORD *)(v85 + 1664) = 0LL;
              (*(void (__fastcall **)(__int64, _QWORD *))(v85 + 600))(v1568, v1 + 189);
              v1569 = *(_DWORD *)(v85 + 1672);
              if ( (v1569 & 1) != 0 )
              {
                *(_DWORD *)(v85 + 1672) = v1569 & 0xFFFFFFFE;
                v1570 = (*(__int64 (__fastcall **)(__int64))(v85 + 576))(v1568);
                v1568 = v1570;
                if ( v1570 )
                  *(_DWORD *)(v85 + 1648) = (*(__int64 (__fastcall **)(__int64))(v85 + 608))(v1570);
                else
                  *(_DWORD *)(v85 + 1648) = -1;
              }
              if ( v1568 )
                (*(void (__fastcall **)(__int64))(v85 + 584))(v1568);
            }
          }
        }
      }
      goto LABEL_2383;
    }
    v1043 = *(unsigned int *)(v85 + 1648);
    v1044 = v85;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v85;
    if ( (_DWORD)v1043 == -1 )
      v1045 = 0LL;
    else
      v1045 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v85 + 568))(v1043, v93);
    if ( !v1045 )
    {
      v1045 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 576))(0LL);
      if ( !v1045 )
        goto LABEL_2383;
    }
    v1046 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(v85 + 592))(v1045, v1 + 189);
    if ( v1046 >= 0 )
    {
      *(_QWORD *)(v85 + 1664) = v1045;
      v1046 = 0;
      *(_DWORD *)(v85 + 1424) += 0x10000;
    }
    else
    {
      (*(void (__fastcall **)(__int64))(v85 + 584))(v1045);
    }
    if ( v1046 < 0 )
    {
LABEL_2383:
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v85;
      goto LABEL_2384;
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD))(v85 + 608))(*(_QWORD *)(v85 + 1664)) )
      goto LABEL_2375;
    v1047 = *(_QWORD *)(v85 + 1632);
    v1048 = *(_QWORD *)(v85 + 1136) + 32LL;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v1048;
    v1049 = v1047 & 0x3F;
    v1050 = *(_QWORD *)v1048;
    v1051 = *(unsigned int *)(v1048 + 16);
    v1052 = (_QWORD *)v1050;
    v1053 = *(_DWORD *)(v1048 + 16);
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) = *(_QWORD *)v1048;
    v1054 = 4 * v1053;
    v1055 = (const char *)v1050;
    v1056 = v1050 + v1054;
    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = v1051;
    if ( v1050 < v1056 )
    {
      do
      {
        _mm_prefetch(v1055, 0);
        v1055 += 64;
      }
      while ( (unsigned __int64)v1055 < v1056 );
    }
    if ( v1054 >= 8 )
    {
      v1057 = (unsigned __int64)v1054 >> 3;
      do
      {
        v1054 -= 8;
        v1047 = __ROL8__(*v1052++ ^ v1047, v1049);
        --v1057;
      }
      while ( v1057 );
    }
    for ( ; v1054; --v1054 )
    {
      v1058 = *(unsigned __int8 *)v1052;
      v1052 = (_QWORD *)((char *)v1052 + 1);
      v1047 = __ROL8__(v1058 ^ v1047, v1049);
    }
    v1059 = *(_QWORD **)(v1048 + 24);
    v1060 = (const char *)v1059;
    v1061 = v1047 ^ *(_QWORD *)(v85 + 1640);
    v1062 = ((unsigned __int8)v1047 ^ *(_BYTE *)(v85 + 1640)) & 0x3F;
    if ( v1059 < (_QWORD *)((char *)v1059 + v1051) )
    {
      do
      {
        _mm_prefetch(v1060, 0);
        v1060 += 64;
      }
      while ( v1060 < (const char *)v1059 + v1051 );
    }
    v1063 = v1051;
    if ( (unsigned int)v1051 >= 8 )
    {
      v1064 = v1051 >> 3;
      do
      {
        v1063 -= 8;
        v1061 = __ROL8__(*v1059++ ^ v1061, v1062);
        --v1064;
      }
      while ( v1064 );
    }
    for ( ; v1063; --v1063 )
    {
      v1065 = *(unsigned __int8 *)v1059;
      v1059 = (_QWORD *)((char *)v1059 + 1);
      v1061 = __ROL8__(v1065 ^ v1061, v1062);
    }
    v1066 = v1050 ^ v1051 ^ v1061;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v1066;
    if ( (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, _QWORD *, __int64))(v85 + 456))(
           v1050,
           v1 + 121,
           v1 + 103,
           v1062) )
    {
      v1067 = __rdtsc();
      v1068 = (__ROR8__(v1067, 3) ^ v1067) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x560) = *((_QWORD *)&v1068 + 1);
      v1069 = (*((_QWORD *)&v1068 + 1) ^ (unsigned __int64)v1068) % 0xB;
      if ( (unsigned int)v1069 > 5 )
      {
        v1073 = v1069 - 6;
        if ( v1073 )
        {
          v1074 = v1073 - 1;
          if ( v1074 )
          {
            v1075 = v1074 - 1;
            if ( v1075 )
            {
              if ( v1075 == 1 )
              {
                *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x254) = -1333354875;
                v1072 = __ROR4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x254) ^ 9, 33);
              }
              else
              {
                v1076 = __rdtsc();
                v1077 = __ROR8__(v1076, 3);
                v1078 = (v1077 ^ v1076) * (unsigned __int128)0x7010008004002001uLL;
                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x660) = *((_QWORD *)&v1078 + 1);
                v1079 = DWORD2(v1078) ^ (67117057 * (v1077 ^ v1076));
                v1072 = ((((((v1079 % 0x1A + 97) << 8) | ((v1079 >> 5)
                                                        - 26
                                                        * ((unsigned int)((1321528399 * (unsigned __int64)(v1079 >> 5)) >> 32) >> 3)
                                                        + 65)) << 8) | ((v1079 >> 10) % 0x1A + 97)) << 8) | ((v1079 >> 15) % 0x1A + 65);
              }
            }
            else
            {
              *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x244) = 1684422978;
              v1072 = __ROR4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x244), 8);
            }
          }
          else
          {
            *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x23C) = -2100910376;
            v1072 = __ROL4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x23C), 7);
          }
        }
        else
        {
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F0) = 1314342514;
          v1072 = __ROR4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F0) ^ 6, 24);
        }
      }
      else if ( (_DWORD)v1069 == 5 )
      {
        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E8) = 680282605;
        v1072 = __ROR4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E8), 5);
      }
      else if ( (_DWORD)v1069 )
      {
        v1070 = v1069 - 1;
        if ( v1070 )
        {
          v1071 = v1070 - 1;
          if ( v1071 )
          {
            if ( v1071 == 1 )
            {
              *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x248) = -1474152136;
              v1072 = __ROR4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x248) ^ 3, 15);
            }
            else
            {
              *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x240) = 1728537748;
              v1072 = __ROL4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x240), 4);
            }
          }
          else
          {
            *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x250) = -2051698419;
            v1072 = __ROR4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x250), 2);
          }
        }
        else
        {
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x280) = -1297272415;
          v1072 = __ROL4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x280), 1);
        }
      }
      else
      {
        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1EC) = -795291432;
        v1072 = __ROR4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1EC), 6);
      }
      v1080 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v85 + 232))(512LL, 128LL, v1072);
      v1081 = 0LL;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1080;
      v1082 = v1080;
      if ( !v1080 )
        goto LABEL_2375;
      v1083 = 128;
      v1084 = 16LL;
      v1085 = 1LL;
      do
      {
        *v1080 = 0LL;
        v1083 -= 8;
        ++v1080;
        --v1084;
      }
      while ( v1084 );
      for ( ; v1083; --v1083 )
      {
        *(_BYTE *)v1080 = 0;
        v1080 = (__int64 *)((char *)v1080 + 1);
      }
      v1086 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3C8);
      v1087 = v1066;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x120) = v1086;
      *v1082 = v1086;
      v1088 = v1082;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v1082;
      *v1 = v1066;
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = 0;
      while ( 1 )
      {
        v1089 = *v1088;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x120) = *v1088;
        if ( !v1089 )
          goto LABEL_1702;
        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74) = v1087 & 0x3F;
        v1090 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(v85 + 448))(v1089, v1084, 0LL, v1085);
        v1081 = 0LL;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v1090;
        if ( !v1090 )
          break;
        v1085 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x120);
        v1091 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74);
        v1092 = (char *)(v1090 + *(unsigned __int16 *)(v1090 + 20) + 24LL);
        v1093 = &v1092[40 * *(unsigned __int16 *)(v1090 + 6)];
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1093;
        do
        {
          v1094 = 0;
          if ( (*((_DWORD *)v1092 + 9) & 0x2000000) != 0
            || *(_DWORD *)v1092 == 1414090313 && *((_DWORD *)v1092 + 1) == 1195525195
            || *(_DWORD *)v1092 == 1162297680
            && ((v1095 = *((_WORD *)v1092 + 2), v1095 == 30583) || v1095 == 29303 || v1095 == 30839) )
          {
LABEL_1661:
            v1094 = 1;
          }
          else
          {
            v1096 = *(char **)(v85 + 1592);
            v1097 = 7;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x450) = *(_QWORD *)(v85 + 1600);
            v1098 = v1092 - v1096;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x458) = *(_QWORD *)(v85 + 1608);
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x460) = *(_QWORD *)(v85 + 1616);
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x448) = v1096;
            while ( 1 )
            {
              v1099 = (unsigned __int8)v1096[v1098];
              v1100 = (unsigned __int8)*v1096++;
              if ( v1099 != v1100 )
                break;
              if ( !--v1097 )
              {
LABEL_1660:
                v1085 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x120);
                v1081 = 0LL;
                v1093 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                goto LABEL_1661;
              }
            }
            v1101 = *(__int64 **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x450);
            v1102 = 8;
            v1103 = (__int64 *)v1092;
            while ( 1 )
            {
              v1104 = *v1103++;
              v1105 = *v1101++;
              if ( v1104 != v1105 )
                break;
              v1102 -= 8;
              if ( v1102 < 8 )
              {
                if ( !v1102 )
                  goto LABEL_1660;
                while ( 1 )
                {
                  v1106 = *(unsigned __int8 *)v1103;
                  v1103 = (__int64 *)((char *)v1103 + 1);
                  v1107 = *(unsigned __int8 *)v1101;
                  v1101 = (__int64 *)((char *)v1101 + 1);
                  if ( v1106 != v1107 )
                    goto LABEL_1653;
                  if ( !--v1102 )
                    goto LABEL_1660;
                }
              }
            }
LABEL_1653:
            v1108 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x458);
            v1109 = v1092 - v1108;
            v1110 = 4;
            while ( 1 )
            {
              v1111 = (unsigned __int8)v1108[v1109];
              v1112 = (unsigned __int8)*v1108++;
              if ( v1111 != v1112 )
                break;
              if ( !--v1110 )
                goto LABEL_1660;
            }
            v1113 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x460);
            v1114 = v1092 - v1113;
            v1115 = 6;
            while ( 1 )
            {
              v1116 = (unsigned __int8)v1113[v1114];
              v1117 = (unsigned __int8)*v1113++;
              if ( v1116 != v1117 )
                break;
              if ( !--v1115 )
                goto LABEL_1660;
            }
            v1085 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x120);
            v1081 = 0LL;
            v1093 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
          }
          v1118 = *((_DWORD *)v1092 + 2);
          if ( *((int *)v1092 + 9) < 0 )
            v1094 = 1;
          if ( *((_DWORD *)v1092 + 4) > v1118 )
            v1118 = *((_DWORD *)v1092 + 4);
          if ( !v1094 )
          {
            v1119 = v1118;
            v1120 = (const char *)(v1085 + *((unsigned int *)v1092 + 3));
            v1121 = v1120;
            v1122 = &v1120[v1118];
            if ( v1120 < v1122 )
            {
              do
              {
                _mm_prefetch(v1121, 0);
                v1121 += 64;
              }
              while ( v1121 < v1122 );
            }
            if ( v1119 >= 8 )
            {
              v1123 = (unsigned __int64)v1119 >> 3;
              do
              {
                v1119 -= 8;
                v1087 = __ROL8__(*(_QWORD *)v1120 ^ v1087, v1091);
                v1120 += 8;
                --v1123;
              }
              while ( v1123 );
              *v1 = v1087;
            }
            if ( v1119 )
            {
              do
              {
                v1124 = *(unsigned __int8 *)v1120++;
                v1087 = __ROL8__(v1124 ^ v1087, v1091);
                --v1119;
              }
              while ( v1119 );
              *v1 = v1087;
            }
            v1081 = 0LL;
          }
          v1092 += 40;
        }
        while ( v1092 != v1093 );
        v1084 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
        v1066 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
        v1044 = v85;
        v1125 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
        *v1 = v1087;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v1085;
        if ( !(_DWORD)v1084 )
        {
          v1126 = *(unsigned int *)(v1125 + 148);
          if ( (unsigned int)v1126 >= 0x14 )
          {
            v1127 = *(unsigned int *)(v1125 + 144);
            v1128 = v1085 + v1127 + v1126;
            v1129 = v1127 + v1085;
            if ( v1127 + v1085 != v1128 )
            {
              while ( *(_DWORD *)(v1129 + 12) )
              {
                v1130 = *(unsigned int *)(v1129 + 16);
                if ( !(_DWORD)v1130 )
                  break;
                v1131 = *(_QWORD *)(v1130 + v1085);
                if ( v1131 )
                {
                  v1132 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v85 + 616))(
                            *(_QWORD *)(v1130 + v1085),
                            v1084,
                            0LL);
                  v1081 = 0LL;
                  if ( v1132 )
                  {
                    v1133 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD *))(v85 + 456))(
                              v1131,
                              v1 + 36,
                              v1 + 107);
                    v1081 = 0LL;
                    if ( v1133 )
                    {
                      v1082 = *(__int64 **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                      v1134 = 0;
                      v1081 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x120);
                      v1135 = v1082;
                      do
                      {
                        v1084 = *v1135;
                        if ( *v1135 == v1081 )
                          break;
                        if ( !v1084 )
                        {
                          v1082[v1134] = v1081;
                          break;
                        }
                        ++v1134;
                        ++v1135;
                      }
                      while ( v1134 < 0x10 );
                      if ( v1134 == 16 )
                        goto LABEL_1701;
                      v1085 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
                      v1081 = 0LL;
                    }
                    else
                    {
                      v1085 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
                    }
                  }
                  else
                  {
                    v1085 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
                  }
                }
                v1129 += 20LL;
                if ( v1129 == v1128 )
                {
                  LODWORD(v1084) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                  goto LABEL_1700;
                }
              }
              LODWORD(v1084) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
            }
          }
        }
LABEL_1700:
        v1084 = (unsigned int)(v1084 + 1);
        v1087 = *v1;
        v1088 = (__int64 *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) + 8LL);
        v1082 = *(__int64 **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v1084;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v1088;
        if ( (unsigned int)v1084 >= 0x10 )
        {
LABEL_1701:
          v1087 = *v1;
LABEL_1702:
          v1066 = v1087;
          goto LABEL_1703;
        }
      }
      if ( !*(_DWORD *)(v85 + 1536) )
      {
        *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v85 + 1552) = 0LL;
        *(_QWORD *)(v85 + 1560) = 258LL;
        *(_QWORD *)(v85 + 1568) = -1073741701LL;
        *(_DWORD *)(v85 + 1536) = 1;
      }
LABEL_1703:
      if ( v1066 == *(_QWORD *)(v85 + 1640) || !v1066 )
        v1066 ^= 0x95EA5DE843D5D824uLL;
      (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64))(v85 + 240))(v1082, v1084, v1081, v1085);
      v1050 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0);
      LODWORD(v1051) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
      v1048 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
    }
    if ( v1066 != **(_QWORD **)(v85 + 1632) && !*(_DWORD *)(v85 + 1536) )
    {
      *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v1066 ^ **(_QWORD **)(v85 + 1632);
      if ( !*(_DWORD *)(v85 + 1536) )
      {
        *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v85 + 1552) = 0LL;
        *(_QWORD *)(v85 + 1560) = 258LL;
        *(_QWORD *)(v85 + 1568) = v1066;
        *(_DWORD *)(v85 + 1536) = 1;
      }
    }
    v1136 = v1050 + v1048;
    i6 = 0LL;
    if ( (_DWORD)v1051 )
    {
      v1137 = (int *)v1050;
      do
      {
        v93 = *v1137;
        i6 = (unsigned int)(i6 + 1);
        ++v1137;
        v1136 = i6 * ((v93 + *(_DWORD *)(((__int64)v93 >> 4) + v1050)) ^ v1136);
      }
      while ( (unsigned int)i6 < (unsigned int)v1051 );
      v1044 = v85;
    }
    v1138 = 2 * v1136;
    v1139 = **(_DWORD **)(v85 + 1168);
    if ( v1138 != v1139 && (*(_DWORD *)(v85 + 1672) & 0x20000) != 0 && !*(_DWORD *)(v85 + 1536) )
    {
      *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v1139 ^ (unsigned __int64)v1138;
      if ( !*(_DWORD *)(v85 + 1536) )
      {
        *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v85 + 1552) = 0LL;
        *(_QWORD *)(v85 + 1560) = 263LL;
        *(_QWORD *)(v85 + 1568) = v1138;
        *(_DWORD *)(v85 + 1536) = 1;
      }
    }
    v1140 = *(_DWORD *)(v85 + 1624);
    if ( v1140 >= 4 )
    {
      if ( v1140 != 4 )
      {
LABEL_2372:
        *(_DWORD *)(v1044 + 1624) = 6;
        goto LABEL_2375;
      }
      goto LABEL_1861;
    }
    v1141 = *(_QWORD *)(v85 + 1136) + 32LL;
    v1142 = v85;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1141;
    if ( v1140 >= 2 )
      goto LABEL_1762;
    v1143 = *(unsigned int *)(v85 + 1356);
    v1144 = **(const char ***)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
    v1145 = 4 * *(_DWORD *)(v1141 + 16);
    v1146 = (unsigned int)(v1143 + 48);
    v1147 = v85 & -(__int64)((*(_DWORD *)(v85 + 1672) & 0x20000000) != 0);
    if ( *(int *)(v85 + 1580) <= 1 )
    {
      if ( !v1147 )
      {
        v1149 = ((__int64 (__fastcall *)(__int64, __int64))sub_140285AAC)(v85, v1146);
        goto LABEL_1734;
      }
      v1148 = *(unsigned int *)((v85 & -(__int64)((*(_DWORD *)(v85 + 1672) & 0x20000000) != 0)) + 0x55C);
    }
    else
    {
      if ( !v1147 )
      {
        v1149 = sub_140285DF0(v85, v1146);
LABEL_1734:
        v1142 = v1149;
        if ( !v1149 )
          goto LABEL_1858;
        v1150 = *(_DWORD *)(v85 + 1672);
        if ( (v1150 & 4) == 0 )
        {
          v1151 = *(_DWORD *)(v85 + 1356);
          v1152 = *(_QWORD *)(v85 + 1328);
          v1153 = *(_DWORD *)(v85 + 1580) & (unsigned int)-((v1150 & 0x20000000) != 0);
          if ( v1151 >= 8 )
          {
            v1154 = (unsigned __int64)v1151 >> 3;
            do
            {
              *(_QWORD *)v85 = 0LL;
              v1151 -= 8;
              v85 += 8LL;
              --v1154;
            }
            while ( v1154 );
          }
          for ( ; v1151; --v1151 )
            *(_BYTE *)v85++ = 0;
          v1155 = *(_DWORD *)(v1142 + 1580);
          *(_DWORD *)(v1142 + 1580) = v1153;
          if ( (_DWORD)v1153 == 3 )
          {
            (*(void (__fastcall **)(__int64, __int64, __int64))(v1142 + 792))(v1152, v1153, 1LL);
          }
          else
          {
            v1156 = *(void (__fastcall **)(__int64))(v1142 + 240);
            if ( (_DWORD)v1153 == 1 )
              (*(void (__fastcall **)(__int64, _QWORD, void (__fastcall *)(__int64)))(v1142 + 496))(
                v1152 - 8,
                *(_QWORD *)(v1152 - 8),
                v1156);
            else
              v1156(v1152);
          }
          *(_DWORD *)(v1142 + 1580) = v1155;
        }
        *(_DWORD *)(v1142 + 1672) &= ~4u;
        v1157 = (_BYTE *)(v1142 + v1143);
        v1158 = (_QWORD *)(v1142 + v1143);
        ++*(_DWORD *)(v1142 + 1396);
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x670) = v1142 + v1143;
        v1159 = 48;
        v1160 = 6LL;
        do
        {
          *v1158 = 0LL;
          v1159 -= 8;
          ++v1158;
          --v1160;
        }
        while ( v1160 );
        for ( ; v1159; --v1159 )
        {
          *(_BYTE *)v1158 = 0;
          v1158 = (_QWORD *)((char *)v1158 + 1);
        }
        *(_DWORD *)v1157 = 11;
        v1161 = v1144;
        v1162 = &v1144[v1145];
        *((_QWORD *)v1157 + 1) = v1144;
        *((_DWORD *)v1157 + 4) = v1145;
        if ( v1144 < v1162 )
        {
          do
          {
            _mm_prefetch(v1161, 0);
            v1161 += 64;
          }
          while ( v1161 < v1162 );
        }
        v93 = *(_QWORD *)(v1142 + 1408);
        v1163 = v1145;
        if ( v1145 >= 8 )
        {
          i6 = (unsigned __int64)v1145 >> 3;
          do
          {
            v1163 -= 8;
            v93 = __ROL8__(*(_QWORD *)v1144 ^ v93, *(_DWORD *)(v1142 + 1404));
            v1144 += 8;
            --i6;
          }
          while ( i6 );
        }
        for ( ; v1163; --v1163 )
        {
          v1164 = *(unsigned __int8 *)v1144++;
          v93 = __ROL8__(v1164 ^ v93, *(_DWORD *)(v1142 + 1404));
        }
        *(_DWORD *)(v1142 + 1424) += v1145;
        for ( i22 = v93; ; v93 = (unsigned int)i22 ^ (unsigned int)v93 )
        {
          i22 >>= 31;
          if ( !i22 )
            break;
        }
        LODWORD(v93) = v93 & 0x7FFFFFFF;
        *((_DWORD *)v1157 + 5) = v93;
        v1044 = v1142;
        *(_DWORD *)(v1142 + 1424) += v1145;
        v1141 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
        *(_DWORD *)(v1142 + 1624) = 2;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v1142;
LABEL_1762:
        if ( *(int *)(v1142 + 1624) >= 3 )
          goto LABEL_1802;
        v1166 = 0;
        if ( *(_DWORD *)(v1142 + 1440) == 7 )
          v1166 = 32;
        v1167 = *(unsigned int *)(v1142 + 1356);
        v1168 = v1142 & -(__int64)((*(_DWORD *)(v1142 + 1672) & 0x20000000) != 0);
        v1169 = (unsigned int)(v1167 + 48);
        if ( *(int *)(v1142 + 1580) <= 1 )
        {
          if ( !v1168 )
          {
            v1171 = ((__int64 (__fastcall *)(unsigned __int64, __int64))sub_140285AAC)(v1142, v1169);
            goto LABEL_1773;
          }
          v1170 = *(unsigned int *)((v1142 & -(__int64)((*(_DWORD *)(v1142 + 1672) & 0x20000000) != 0)) + 0x55C);
        }
        else
        {
          if ( !v1168 )
          {
            v1171 = sub_140285DF0(v1142, v1169);
LABEL_1773:
            v1172 = v1171;
            if ( !v1171 )
              goto LABEL_1858;
            v1173 = *(_DWORD *)(v1142 + 1672);
            if ( (v1173 & 4) == 0 )
            {
              v1174 = *(_DWORD *)(v1142 + 1356);
              v1175 = *(_QWORD *)(v1142 + 1328);
              v1176 = (v1173 & 0x20000000) != 0 ? *(_DWORD *)(v1142 + 1580) : 0;
              if ( v1174 >= 8 )
              {
                v1177 = (unsigned __int64)v1174 >> 3;
                do
                {
                  *(_QWORD *)v1142 = 0LL;
                  v1174 -= 8;
                  v1142 += 8LL;
                  --v1177;
                }
                while ( v1177 );
              }
              for ( ; v1174; --v1174 )
                *(_BYTE *)v1142++ = 0;
              v1178 = *(_DWORD *)(v1172 + 1580);
              *(_DWORD *)(v1172 + 1580) = v1176;
              if ( v1176 == 3 )
              {
                (*(void (__fastcall **)(__int64))(v1172 + 792))(v1175);
              }
              else if ( v1176 == 1 )
              {
                (*(void (__fastcall **)(__int64, _QWORD))(v1172 + 496))(v1175 - 8, *(_QWORD *)(v1175 - 8));
              }
              else
              {
                (*(void (__fastcall **)(__int64))(v1172 + 240))(v1175);
              }
              *(_DWORD *)(v1172 + 1580) = v1178;
            }
            *(_DWORD *)(v1172 + 1672) &= ~4u;
            v1179 = v1172 + v1167;
            v1180 = (_QWORD *)(v1172 + v1167);
            ++*(_DWORD *)(v1172 + 1396);
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x680) = v1172 + v1167;
            v1181 = 48;
            v1182 = 6LL;
            do
            {
              *v1180 = 0LL;
              v1181 -= 8;
              ++v1180;
              --v1182;
            }
            while ( v1182 );
            for ( ; v1181; --v1181 )
            {
              *(_BYTE *)v1180 = 0;
              v1180 = (_QWORD *)((char *)v1180 + 1);
            }
            *(_DWORD *)v1179 = v1166;
            *(_QWORD *)(v1179 + 8) = v1141;
            if ( v1166 == 32 )
              sub_14017D2FC(v1172, v1141, 0x20u, v1179 + 24);
            *(_DWORD *)(v1179 + 16) = 32;
            v1183 = (_QWORD *)v1141;
            v1184 = (const char *)v1141;
            if ( v1141 < (unsigned __int64)(v1141 + 32) )
            {
              do
              {
                _mm_prefetch(v1184, 0);
                v1184 += 64;
              }
              while ( (unsigned __int64)v1184 < v1141 + 32 );
            }
            v93 = *(_QWORD *)(v1172 + 1408);
            LODWORD(i6) = 32;
            v1185 = *(_DWORD *)(v1172 + 1404);
            v1186 = 4LL;
            do
            {
              i6 = (unsigned int)(i6 - 8);
              v93 = __ROL8__(*v1183++ ^ v93, v1185);
              --v1186;
            }
            while ( v1186 );
            if ( (_DWORD)i6 )
            {
              do
              {
                v1187 = *(unsigned __int8 *)v1183;
                v1183 = (_QWORD *)((char *)v1183 + 1);
                v93 = __ROL8__(v1187 ^ v93, v1185);
                v127 = (_DWORD)i6 == 1;
                i6 = (unsigned int)(i6 - 1);
              }
              while ( !v127 );
            }
            *(_DWORD *)(v1172 + 1424) += 32;
            for ( i23 = v93; ; v93 = (unsigned int)i23 ^ (unsigned int)v93 )
            {
              i23 >>= 31;
              if ( !i23 )
                break;
            }
            LODWORD(v93) = v93 & 0x7FFFFFFF;
            *(_DWORD *)(v1179 + 20) = v93;
            v1142 = v1172;
            *(_DWORD *)(v1172 + 1424) += 32;
            v1044 = v1172;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v1172;
            *(_DWORD *)(v1172 + 1624) = 3;
LABEL_1802:
            v1189 = *(_QWORD *)v1141;
            v1190 = 0;
            v127 = (*(_DWORD *)(v1142 + 1672) & 0x40000000) == 0;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = *(_QWORD *)v1141;
            if ( !v127 )
              goto LABEL_1859;
            v1191 = 0;
            if ( !*(_DWORD *)(v1141 + 16) )
              goto LABEL_1859;
            v1192 = v1189;
            v1193 = 0;
            do
            {
              if ( !(*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD))(v1142 + 544))(
                      v1192 + ((__int64)*(int *)(v1192 + 4LL * v1191) >> 4),
                      v1 + 116,
                      0LL) )
                ++v1193;
              ++v1191;
            }
            while ( v1191 < *(_DWORD *)(v1141 + 16) );
            *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v1193;
            v127 = v1193 == 0;
            v1044 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
            if ( v127 )
            {
LABEL_1859:
              *(_DWORD *)(v1142 + 1624) = 4;
              v1219 = 0;
LABEL_1860:
              v85 = v1044;
              if ( v1219 < 0 )
                goto LABEL_2375;
LABEL_1861:
              v1220 = *(_QWORD *)(v1044 + 1136);
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8) = v1044;
              v85 = v1044;
              v1221 = *(_QWORD *)(v1220 + 32);
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1221;
              v1222 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, unsigned __int64))(v1044 + 456))(
                        v1221,
                        v1 + 54,
                        (__int64)v1 + 500,
                        i6);
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v1222;
              v1223 = v1222;
              if ( !v1222 )
                goto LABEL_2375;
              v1224 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B0);
              v1225 = v1 + 50;
              v1226 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F4);
              *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74) = v1226;
              v1227 = 4;
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1224;
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x188) = 0LL;
              do
              {
                *v1225++ = 0;
                --v1227;
              }
              while ( v1227 );
              v1228 = 0;
              if ( *(_DWORD *)(v1044 + 1396) )
              {
                v1229 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x190);
                v1230 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18C);
                LODWORD(i6) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x188);
                while ( 1 )
                {
                  v1231 = 0;
                  v1232 = v1044;
                  if ( *(_QWORD *)(v1044 + 1840) )
                    v1232 = *(_QWORD *)(v1044 + 1840);
                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v1232;
                  v1233 = v1232 + *(unsigned int *)(v1232 + 1392);
                  if ( (_DWORD)i6 && v1230 <= v1228 )
                  {
                    v1231 = v1230;
                    v1233 = v1232 + v1229;
                  }
                  if ( v1231 != v1228 )
                    break;
LABEL_1896:
                  v1230 = v1231;
                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x188) = 1;
                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18C) = v1231;
                  v1229 = v1233 - v1232;
                  i6 = 1LL;
                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x190) = v1233 - v1232;
                  v1242 = *(_DWORD *)v1233;
                  if ( (*(_DWORD *)v1233 == 1 || v1242 == 12)
                    && *(_QWORD *)(v1233 + 8) == v1223
                    && *(_DWORD *)(v1233 + 16) == v1226
                    || (unsigned int)(v1242 - 33) <= 1 && *(_QWORD *)(v1233 + 32) == v1224 )
                  {
                    goto LABEL_1906;
                  }
                  if ( ++v1228 >= *(_DWORD *)(v1044 + 1396) )
                    goto LABEL_1905;
                }
                v1234 = v1228 - v1231;
                v1231 = v1228;
                while ( 1 )
                {
                  v1235 = *(_DWORD *)v1233;
                  if ( *(int *)v1233 > 17 )
                  {
                    switch ( v1235 )
                    {
                      case 19:
LABEL_1893:
                        v1240 = 56LL;
                        goto LABEL_1894;
                      case 28:
                        v1241 = *(unsigned __int16 *)(v1233 + 40);
                        goto LABEL_1883;
                      case 30:
                        v1240 = (((*(_DWORD *)(v1233 + 36) - 1) / 0xCu + 7) & 0xFFFFFFF8)
                              + 24 * (*(unsigned __int16 *)(v1233 + 40) + 2);
                        goto LABEL_1894;
                    }
                    if ( (unsigned int)(v1235 - 33) <= 1 )
                    {
                      v1240 = 20
                            * (unsigned int)(((*(_DWORD *)(v1233 + 32) & 0xFFF)
                                            + (unsigned __int64)*(unsigned int *)(v1233 + 40)
                                            + 4095) >> 12)
                            + 48;
                      goto LABEL_1894;
                    }
                  }
                  else
                  {
                    if ( v1235 == 17 )
                      goto LABEL_1893;
                    v1236 = v1235 - 1;
                    if ( !v1236 )
                    {
LABEL_1885:
                      v1240 = 4 * (*(_DWORD *)(v1233 + 16) / 0xCu) + 48;
                      goto LABEL_1894;
                    }
                    v1237 = v1236 - 6;
                    if ( !v1237 )
                    {
                      v1240 = (unsigned int)(24 * (*(_DWORD *)(v1233 + 24) + 2));
                      goto LABEL_1894;
                    }
                    v1238 = v1237 - 1;
                    if ( !v1238 )
                    {
                      v1241 = *(unsigned __int16 *)(v1233 + 32);
LABEL_1883:
                      v1240 = (v1241 + 55) & 0xFFFFFFF8;
                      goto LABEL_1894;
                    }
                    v1239 = v1238 - 2;
                    if ( !v1239 )
                    {
                      v1240 = (unsigned int)(16 * (*(_DWORD *)(v1233 + 28) + 3));
                      goto LABEL_1894;
                    }
                    if ( v1239 == 2 )
                      goto LABEL_1885;
                  }
                  v1240 = 48LL;
LABEL_1894:
                  v1233 += v1240;
                  if ( !--v1234 )
                  {
                    v1044 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                    v1232 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                    v1223 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                    v1224 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                    v1226 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74);
                    goto LABEL_1896;
                  }
                }
              }
LABEL_1905:
              v1233 = 0LL;
LABEL_1906:
              if ( v1233 )
                goto LABEL_1907;
              v1243 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
              v1244 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD *, unsigned __int64))(v1044 + 456))(
                        v1243,
                        v1 + 26,
                        v1 + 16,
                        i6);
              v1245 = 0LL;
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v1244;
              if ( !v1244 )
              {
                *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = -1073741701;
                goto LABEL_2355;
              }
              v1246 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0);
              v1247 = v1 + 48;
              v1248 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
              v1249 = 4;
              *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74) = v1248;
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v1246;
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x178) = 0LL;
              do
              {
                *v1247++ = 0;
                --v1249;
              }
              while ( v1249 );
              v1250 = 0;
              if ( *(_DWORD *)(v1044 + 1396) )
              {
                v1251 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x180);
                v1252 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x17C);
                v1253 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x178);
                while ( 1 )
                {
                  v1254 = 0;
                  v1255 = v1044;
                  if ( *(_QWORD *)(v1044 + 1840) )
                    v1255 = *(_QWORD *)(v1044 + 1840);
                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v1255;
                  v1245 = v1255 + *(unsigned int *)(v1255 + 1392);
                  if ( v1253 && v1252 <= v1250 )
                  {
                    v1254 = v1252;
                    v1245 = v1255 + v1251;
                  }
                  if ( v1254 != v1250 )
                    break;
LABEL_1945:
                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x178) = 1;
                  v1251 = v1245 - v1255;
                  v1252 = v1254;
                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x180) = v1245 - v1255;
                  v1253 = 1;
                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x17C) = v1254;
                  v1264 = *(_DWORD *)v1245;
                  if ( (*(_DWORD *)v1245 != 1 && v1264 != 12
                     || *(_QWORD *)(v1245 + 8) != *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48)
                     || *(_DWORD *)(v1245 + 16) != v1248)
                    && ((unsigned int)(v1264 - 33) > 1 || *(_QWORD *)(v1245 + 32) != v1246) )
                  {
                    ++v1250;
                    v1245 = 0LL;
                    if ( v1250 < *(_DWORD *)(v1044 + 1396) )
                      continue;
                  }
                  goto LABEL_1952;
                }
                v1256 = v1250 - v1254;
                v1254 = v1250;
                while ( 1 )
                {
                  v1257 = *(_DWORD *)v1245;
                  if ( *(int *)v1245 > 17 )
                  {
                    switch ( v1257 )
                    {
                      case 19:
LABEL_1942:
                        v1262 = 56LL;
                        goto LABEL_1943;
                      case 28:
                        v1263 = *(unsigned __int16 *)(v1245 + 40);
                        goto LABEL_1932;
                      case 30:
                        v1262 = (((*(_DWORD *)(v1245 + 36) - 1) / 0xCu + 7) & 0xFFFFFFF8)
                              + 24 * (*(unsigned __int16 *)(v1245 + 40) + 2);
                        goto LABEL_1943;
                    }
                    if ( (unsigned int)(v1257 - 33) <= 1 )
                    {
                      v1262 = 20
                            * (unsigned int)(((*(_DWORD *)(v1245 + 32) & 0xFFF)
                                            + (unsigned __int64)*(unsigned int *)(v1245 + 40)
                                            + 4095) >> 12)
                            + 48;
                      goto LABEL_1943;
                    }
                  }
                  else
                  {
                    if ( v1257 == 17 )
                      goto LABEL_1942;
                    v1258 = v1257 - 1;
                    if ( !v1258 )
                    {
LABEL_1934:
                      v1262 = 4 * (*(_DWORD *)(v1245 + 16) / 0xCu) + 48;
                      goto LABEL_1943;
                    }
                    v1259 = v1258 - 6;
                    if ( !v1259 )
                    {
                      v1262 = (unsigned int)(24 * (*(_DWORD *)(v1245 + 24) + 2));
                      goto LABEL_1943;
                    }
                    v1260 = v1259 - 1;
                    if ( !v1260 )
                    {
                      v1263 = *(unsigned __int16 *)(v1245 + 32);
LABEL_1932:
                      v1262 = (v1263 + 55) & 0xFFFFFFF8;
                      goto LABEL_1943;
                    }
                    v1261 = v1260 - 2;
                    if ( !v1261 )
                    {
                      v1262 = (unsigned int)(16 * (*(_DWORD *)(v1245 + 28) + 3));
                      goto LABEL_1943;
                    }
                    if ( v1261 == 2 )
                      goto LABEL_1934;
                  }
                  v1262 = 48LL;
LABEL_1943:
                  v1245 += v1262;
                  if ( !--v1256 )
                  {
                    v1044 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                    v1255 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                    v1246 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                    v1248 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74);
                    v1243 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                    goto LABEL_1945;
                  }
                }
              }
LABEL_1952:
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E0) = v1245;
              if ( v1245
                || (v1265 = (*(__int64 (__fastcall **)(__int64))(v1044 + 616))(v1243),
                    v1266 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x80),
                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v1266,
                    !v1265) )
              {
LABEL_2356:
                v1537 = (*(__int64 (__fastcall **)(_QWORD))(v85 + 448))(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                  + 0x1B0));
                v1538 = *(unsigned int *)(v1537 + 148);
                if ( (unsigned int)v1538 < 0x14 )
                {
LABEL_1907:
                  v85 = v1044;
LABEL_2369:
                  if ( !(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *, unsigned __int64))(v1044 + 456))(
                          *(_QWORD *)(*(_QWORD *)(v1044 + 1136) + 32LL),
                          v1044 + 1656,
                          v1 + 108,
                          i6)
                    || (v1546 = (*(__int64 (__fastcall **)(_QWORD))(v1044 + 448))(*(_QWORD *)(v1044 + 1656))) == 0 )
                  {
                    if ( !*(_DWORD *)(v1044 + 1536) )
                    {
                      *(_QWORD *)(v1044 + 1544) = v1044 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v1044 + 1552) = 0LL;
                      *(_QWORD *)(v1044 + 1560) = 261LL;
                      *(_QWORD *)(v1044 + 1568) = -1073741701LL;
                      *(_DWORD *)(v1044 + 1536) = 1;
                    }
                    goto LABEL_2375;
                  }
                  *(_DWORD *)(v1044 + 1652) = *(_DWORD *)(v1546 + 80);
                  *(_DWORD *)(v1044 + 1624) = 5;
                  goto LABEL_2372;
                }
                v1539 = *(unsigned int *)(v1537 + 144);
                v1540 = v1539 + v1538;
                v1541 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B0);
                v1542 = v1541 + v1540;
                for ( i24 = v1539 + v1541; i24 != v1542; i24 += 20LL )
                {
                  if ( !*(_DWORD *)(i24 + 12) )
                    break;
                  v1544 = *(unsigned int *)(i24 + 16);
                  if ( !(_DWORD)v1544 )
                    break;
                  v93 = *(_QWORD *)(v1544 + v1541);
                  if ( v93 )
                  {
                    v1545 = sub_140283BBC(v1 + 23, v93, 2147483655LL);
                    v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8);
                    v1536 = v1545;
                    v1044 = v85;
                    if ( ((v1545 + 0x80000000) & 0x80000000) == 0 && v1545 != -1073741554 )
                      goto LABEL_2367;
                    v1541 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B0);
                  }
                }
                v1536 = 0;
                goto LABEL_2367;
              }
              if ( (*(_DWORD *)(v1044 + 1672) & 0x40000000) != 0 )
              {
                v1267 = sub_14079AC8C(
                          v1 + 23,
                          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0),
                          7LL);
                v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8);
                v1268 = v1267;
                *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v1267;
LABEL_2353:
                v1044 = v85;
                if ( (int)(v1268 + 0x80000000) >= 0 && v1268 != -1073741554 )
                  goto LABEL_2355;
                goto LABEL_2356;
              }
              v1269 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0);
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1269;
              v1270 = (*(__int64 (__fastcall **)(__int64))(v1044 + 448))(v1269);
              *v1 = v1270;
              if ( !v1270 )
              {
LABEL_1957:
                v1268 = -1073741701;
LABEL_2352:
                *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v1268;
                goto LABEL_2353;
              }
              v1271 = *(unsigned int *)(v1044 + 1356);
              v1272 = *(_DWORD *)(v1044 + 1580);
              v1273 = v1266;
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v1266 / 0xC;
              v1274 = 4 * (v1266 / 0xC);
              v1275 = (unsigned int)v1271 + v1274 + 48;
              v1276 = v1044 & -(__int64)((*(_DWORD *)(v1044 + 1672) & 0x20000000) != 0);
              if ( v1272 <= 1 )
              {
                if ( !v1276 )
                {
                  v1278 = ((__int64 (__fastcall *)(__int64, __int64))sub_140285AAC)(v1044, v1275);
LABEL_1966:
                  v1279 = v1278;
                  if ( !v1278 )
                    goto LABEL_2351;
                  v1280 = *(_DWORD *)(v1044 + 1672);
                  if ( (v1280 & 4) == 0 )
                  {
                    v1281 = *(_DWORD *)(v1044 + 1356);
                    v1282 = *(_QWORD *)(v1044 + 1328);
                    v1283 = *(_DWORD *)(v1044 + 1580) & (unsigned int)-((v1280 & 0x20000000) != 0);
                    if ( v1281 >= 8 )
                    {
                      v1284 = (unsigned __int64)v1281 >> 3;
                      do
                      {
                        *(_QWORD *)v1044 = 0LL;
                        v1281 -= 8;
                        v1044 += 8LL;
                        --v1284;
                      }
                      while ( v1284 );
                    }
                    for ( ; v1281; --v1281 )
                      *(_BYTE *)v1044++ = 0;
                    v1285 = *(_DWORD *)(v1279 + 1580);
                    *(_DWORD *)(v1279 + 1580) = v1283;
                    if ( (_DWORD)v1283 == 3 )
                    {
                      (*(void (__fastcall **)(__int64, __int64, __int64))(v1279 + 792))(v1282, v1283, 1LL);
                    }
                    else
                    {
                      v1286 = *(void (__fastcall **)(__int64, __int64, _QWORD, void (__fastcall *)(_QWORD, _QWORD, _QWORD)))(v1279 + 240);
                      v1287 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v1279 + 496);
                      if ( (_DWORD)v1283 == 1 )
                        v1287(v1282 - 8, *(_QWORD *)(v1282 - 8), v1286);
                      else
                        v1286(v1282, v1283, v1286, v1287);
                    }
                    *(_DWORD *)(v1279 + 1580) = v1285;
                  }
                  *(_DWORD *)(v1279 + 1672) &= ~4u;
                  v1288 = (_BYTE *)(v1279 + v1271);
                  v1289 = (_QWORD *)(v1279 + v1271);
                  ++*(_DWORD *)(v1279 + 1396);
                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x340) = v1279 + v1271;
                  v1290 = 48;
                  v1291 = 6LL;
                  do
                  {
                    *v1289 = 0LL;
                    v1290 -= 8;
                    ++v1289;
                    --v1291;
                  }
                  while ( v1291 );
                  for ( ; v1290; --v1290 )
                  {
                    *(_BYTE *)v1289 = 0;
                    v1289 = (_QWORD *)((char *)v1289 + 1);
                  }
                  v1292 = *(_QWORD **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                  *(_DWORD *)v1288 = 12;
                  v1293 = v1292;
                  v1294 = (const char *)v1292;
                  *((_QWORD *)v1288 + 1) = v1292;
                  *((_DWORD *)v1288 + 4) = v1273;
                  if ( v1292 < (_QWORD *)((char *)v1292 + v1273) )
                  {
                    do
                    {
                      _mm_prefetch(v1294, 0);
                      v1294 += 64;
                    }
                    while ( v1294 < (const char *)v1292 + v1273 );
                  }
                  v1295 = *(_QWORD *)(v1279 + 1408);
                  v1296 = (unsigned int)v1273;
                  if ( (unsigned int)v1273 >= 8 )
                  {
                    v1297 = (unsigned __int64)(unsigned int)v1273 >> 3;
                    do
                    {
                      v1296 = (unsigned int)(v1296 - 8);
                      v1295 = __ROL8__(*v1293++ ^ v1295, *(_DWORD *)(v1279 + 1404));
                      --v1297;
                    }
                    while ( v1297 );
                  }
                  if ( (_DWORD)v1296 )
                  {
                    do
                    {
                      v1298 = *(unsigned __int8 *)v1293;
                      v1293 = (_QWORD *)((char *)v1293 + 1);
                      v1295 = __ROL8__(v1298 ^ v1295, *(_DWORD *)(v1279 + 1404));
                      v127 = (_DWORD)v1296 == 1;
                      v1296 = (unsigned int)(v1296 - 1);
                    }
                    while ( !v127 );
                  }
                  *(_DWORD *)(v1279 + 1424) += v1273;
                  for ( i25 = v1295; ; v1295 = (unsigned int)i25 ^ (unsigned int)v1295 )
                  {
                    i25 >>= 31;
                    if ( !i25 )
                      break;
                  }
                  LODWORD(v1295) = v1295 & 0x7FFFFFFF;
                  *((_DWORD *)v1288 + 5) = v1295;
                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C8) = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x340);
                  *(_DWORD *)(v1279 + 1424) += v1273;
                  v1300 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C8);
                  v1301 = *(_QWORD *)(v1279 + 1064) + 16LL;
                  v1302 = *(_QWORD *)(v1279 + 1088);
                  v1303 = KeGetCurrentIrql();
                  __writecr8(0xFuLL);
                  (*(void (__fastcall **)(__int64, unsigned __int64, __int64, _QWORD *))(v1279 + 320))(
                    v1302,
                    v1295,
                    v1296,
                    v1293);
                  v1304 = v1301 + 24LL * **(unsigned int **)(v1279 + 1064);
                  while ( *(_QWORD *)(v1301 + 8) != *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) )
                  {
                    v1301 += 24LL;
                    if ( v1301 >= v1304 )
                      goto LABEL_1998;
                  }
                  v1305 = *(_OWORD *)v1301;
                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = 0;
                  *(_OWORD *)(v1300 + 24) = v1305;
                  *(_QWORD *)(v1300 + 40) = *(_QWORD *)(v1301 + 16);
LABEL_1998:
                  (*(void (__fastcall **)(_QWORD))(v1279 + 384))(*(_QWORD *)(v1279 + 1088));
                  __writecr8(v1303);
                  if ( *(int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) < 0 )
                  {
                    v1306 = 24;
                    v1307 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C8) + 24LL);
                    v1308 = 3LL;
                    do
                    {
                      *v1307 = 0LL;
                      v1306 -= 8;
                      ++v1307;
                      --v1308;
                    }
                    while ( v1308 );
                    for ( ; v1306; --v1306 )
                    {
                      *(_BYTE *)v1307 = 0;
                      v1307 = (_QWORD *)((char *)v1307 + 1);
                    }
                    *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C8) + 24LL) = 1LL;
                  }
                  v1309 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C8) + 48LL);
                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1309;
                  if ( v1274 >= 8 )
                  {
                    v1310 = (unsigned __int64)v1274 >> 3;
                    do
                    {
                      *v1309 = -1LL;
                      v1274 -= 8;
                      ++v1309;
                      --v1310;
                    }
                    while ( v1310 );
                  }
                  for ( ; v1274; --v1274 )
                  {
                    *(_BYTE *)v1309 = -1;
                    v1309 = (_QWORD *)((char *)v1309 + 1);
                  }
                  v1311 = 0;
                  v1312 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                  v1313 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                  v1314 = -1;
                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C) = 0;
                  v1315 = *v1313;
                  v1316 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                  v1317 = *v1;
                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = &v1313[3 * v1312];
                  i6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v1279 + 472))(v1317, v1316, v1315);
                  if ( !i6 )
                  {
LABEL_2072:
                    v1268 = -1073741701;
                    goto LABEL_2352;
                  }
LABEL_2010:
                  v1318 = 0;
                  if ( (*(_DWORD *)(i6 + 36) & 0x2000000) != 0
                    || *(_DWORD *)i6 == 1414090313 && *(_DWORD *)(i6 + 4) == 1195525195
                    || *(_DWORD *)i6 == 1162297680
                    && ((v1319 = *(_WORD *)(i6 + 4), v1319 == 30583) || v1319 == 29303 || v1319 == 30839) )
                  {
LABEL_2035:
                    v1318 = 1;
                  }
                  else
                  {
                    v1320 = *(unsigned __int8 **)(v1279 + 1592);
                    v1321 = 7;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x490) = *(_QWORD *)(v1279 + 1600);
                    v1322 = i6 - (_QWORD)v1320;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x498) = *(_QWORD *)(v1279 + 1608);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x4A0) = *(_QWORD *)(v1279 + 1616);
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x488) = v1320;
                    while ( 1 )
                    {
                      v1323 = v1320[v1322];
                      v1324 = *v1320++;
                      if ( v1323 != v1324 )
                        break;
                      if ( !--v1321 )
                        goto LABEL_2035;
                    }
                    v1325 = *(__int64 **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x490);
                    v1326 = 8;
                    v1327 = (__int64 *)i6;
                    while ( 1 )
                    {
                      v1328 = *v1327++;
                      v1329 = *v1325++;
                      if ( v1328 != v1329 )
                        break;
                      v1326 -= 8;
                      if ( v1326 < 8 )
                      {
                        if ( !v1326 )
                          goto LABEL_2035;
                        while ( 1 )
                        {
                          v1330 = *(unsigned __int8 *)v1327;
                          v1327 = (__int64 *)((char *)v1327 + 1);
                          v1331 = *(unsigned __int8 *)v1325;
                          v1325 = (__int64 *)((char *)v1325 + 1);
                          if ( v1330 != v1331 )
                            goto LABEL_2028;
                          if ( !--v1326 )
                            goto LABEL_2035;
                        }
                      }
                    }
LABEL_2028:
                    v1332 = *(unsigned __int8 **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x498);
                    v1333 = i6 - (_QWORD)v1332;
                    v1334 = 4;
                    while ( 1 )
                    {
                      v1335 = v1332[v1333];
                      v1336 = *v1332++;
                      if ( v1335 != v1336 )
                        break;
                      if ( !--v1334 )
                        goto LABEL_2035;
                    }
                    v1337 = *(unsigned __int8 **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x4A0);
                    v1338 = i6 - (_QWORD)v1337;
                    v1339 = 6;
                    while ( 1 )
                    {
                      v1340 = v1337[v1338];
                      v1341 = *v1337++;
                      if ( v1340 != v1341 )
                        break;
                      if ( !--v1339 )
                        goto LABEL_2035;
                    }
                  }
                  if ( *(int *)(i6 + 36) < 0 )
                    v1318 = 1;
                  if ( v1318
                    && *(_DWORD *)i6 == 1414090313
                    && *(_DWORD *)(i6 + 4) == 1195525195
                    && (*(_DWORD *)(v1279 + 1672) & 0x10000000) != 0 )
                  {
                    v1318 = 0;
                  }
                  v1342 = *(_DWORD *)(i6 + 8);
                  if ( *(_DWORD *)(i6 + 16) > v1342 )
                    v1342 = *(_DWORD *)(i6 + 16);
                  v1343 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                  v1344 = v1342 + *(_DWORD *)(i6 + 12);
                  while ( 1 )
                  {
                    v1345 = v1313[2];
                    if ( (v1345 & 1) == 0 )
                    {
                      if ( v1345 < v1314 )
                        v1314 = v1313[2];
                      if ( v1345 > v1311 )
                        v1311 = v1313[2];
                      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C) = v1311;
                    }
                    v1346 = *v1313;
                    v1347 = v1313[1] - v1346;
                    v1348 = (const char *)(v1343 + v1346);
                    if ( v1318 )
                    {
                      v1349 = *(_DWORD **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                      *v1349 = 0x80000000;
                    }
                    else
                    {
                      v1350 = (const char *)(v1343 + v1346);
                      v1351 = &v1348[v1347];
                      if ( v1348 < v1351 )
                      {
                        do
                        {
                          _mm_prefetch(v1350, 0);
                          v1350 += 64;
                        }
                        while ( v1350 < v1351 );
                      }
                      v1352 = *(_QWORD *)(v1279 + 1408);
                      v1353 = v1347;
                      if ( v1347 >= 8 )
                      {
                        v1354 = (unsigned __int64)v1347 >> 3;
                        do
                        {
                          v1353 -= 8;
                          v1352 = __ROL8__(*(_QWORD *)v1348 ^ v1352, *(_DWORD *)(v1279 + 1404));
                          v1348 += 8;
                          --v1354;
                        }
                        while ( v1354 );
                        v1311 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C);
                      }
                      if ( v1353 )
                      {
                        do
                        {
                          v1355 = *(unsigned __int8 *)v1348++;
                          v1352 = __ROL8__(v1355 ^ v1352, *(_DWORD *)(v1279 + 1404));
                          --v1353;
                        }
                        while ( v1353 );
                        v1311 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C);
                      }
                      *(_DWORD *)(v1279 + 1424) += v1347;
                      for ( i26 = v1352; ; LODWORD(v1352) = i26 ^ v1352 )
                      {
                        i26 >>= 31;
                        if ( !i26 )
                          break;
                      }
                      v1349 = *(_DWORD **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                      *v1349 = v1352 & 0x7FFFFFFF;
                      v1343 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                    }
                    v1313 += 3;
                    if ( v1313 == *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) )
                      break;
                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1349 + 1;
                    if ( *v1313 < *(_DWORD *)(i6 + 12) || v1343 + (unsigned __int64)v1313[1] > v1344 )
                    {
                      i6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v1279 + 472))(*v1, v1343, *v1313);
                      if ( !i6 )
                      {
                        v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8);
                        goto LABEL_2072;
                      }
                      goto LABEL_2010;
                    }
                  }
                  if ( v1314 == -1 && !v1311 )
                    v1314 = 0;
                  v1357 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0);
                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8) = v1279;
                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3D0) = v1357 + v1314;
                  v85 = v1279;
                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F8) = v1311 - v1314;
                  LOBYTE(v1343) = 1;
                  v1358 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD *))(v1279 + 440))(
                            v1357,
                            v1343,
                            0LL,
                            v1 + 16);
                  v1359 = v1358;
                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3D8) = v1358;
                  LOBYTE(v1359) = 1;
                  v1360 = v1358 != 0 ? *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x80) : 0;
                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x80) = v1360;
                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1FC) = v1360;
                  v1361 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD *))(v1279 + 440))(
                            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0),
                            v1359,
                            12LL,
                            v1 + 16);
                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1361;
                  LOBYTE(v1362) = 1;
                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3E0) = v1361;
                  v1363 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0);
                  v1364 = v1361 != 0 ? *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x80) : 0;
                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = v1364;
                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x80) = v1364;
                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x200) = v1364;
                  v1365 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *))(v1279 + 440))(
                            v1363,
                            v1362,
                            10LL,
                            v1 + 16);
                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3E8) = v1365;
                  v1366 = v1365 != 0 ? *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x80) : 0;
                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x80) = v1366;
                  v1367 = *(unsigned int *)(v1279 + 1356);
                  v1368 = *(_DWORD *)(v1279 + 1580);
                  v1369 = (*(_DWORD *)(v1279 + 1672) & 0x20000000) != 0;
                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x204) = v1366;
                  v1370 = v1279 & -(__int64)v1369;
                  v1371 = (unsigned int)(v1367 + 192);
                  if ( v1368 <= 1 )
                  {
                    if ( !v1370 )
                    {
                      v1373 = ((__int64 (__fastcall *)(unsigned __int64, __int64))sub_140285AAC)(v1279, v1371);
LABEL_2084:
                      v1044 = v1373;
                      if ( !v1373 )
                      {
                        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = -1073741670;
                        v1044 = v1279;
                        goto LABEL_2355;
                      }
                      v1374 = *(_DWORD *)(v1279 + 1672);
                      if ( (v1374 & 4) == 0 )
                      {
                        v1375 = *(unsigned int *)(v1279 + 1356);
                        v1376 = *(_QWORD *)(v1279 + 1328);
                        v1377 = (v1374 & 0x20000000) != 0 ? *(_DWORD *)(v1279 + 1580) : 0;
                        if ( (unsigned int)v1375 >= 8 )
                        {
                          v1378 = (unsigned __int64)(unsigned int)v1375 >> 3;
                          do
                          {
                            *(_QWORD *)v1279 = 0LL;
                            v1375 = (unsigned int)(v1375 - 8);
                            v1279 += 8LL;
                            --v1378;
                          }
                          while ( v1378 );
                        }
                        if ( (_DWORD)v1375 )
                        {
                          do
                          {
                            *(_BYTE *)v1279++ = 0;
                            v127 = (_DWORD)v1375 == 1;
                            v1375 = (unsigned int)(v1375 - 1);
                          }
                          while ( !v127 );
                        }
                        v1379 = *(_DWORD *)(v1044 + 1580);
                        *(_DWORD *)(v1044 + 1580) = v1377;
                        if ( v1377 == 3 )
                        {
                          (*(void (__fastcall **)(__int64, __int64))(v1044 + 792))(v1376, v1375);
                        }
                        else if ( v1377 == 1 )
                        {
                          (*(void (__fastcall **)(__int64, _QWORD))(v1044 + 496))(v1376 - 8, *(_QWORD *)(v1376 - 8));
                        }
                        else
                        {
                          (*(void (__fastcall **)(__int64))(v1044 + 240))(v1376);
                        }
                        *(_DWORD *)(v1044 + 1580) = v1379;
                      }
                      *(_DWORD *)(v1044 + 1672) &= ~4u;
                      v1380 = (unsigned __int8 *)(v1044 + v1367);
                      *(_DWORD *)(v1044 + 1396) += 4;
                      v1381 = v1 + 122;
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2E0) = v1044 + v1367;
                      v1382 = (unsigned int *)(v1 + 63);
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E0) = v1380;
                      v1383 = 4LL;
                      do
                      {
                        v1384 = *v1382;
                        v1385 = 48;
                        i6 = *v1381;
                        v1386 = v1380;
                        v1387 = 6LL;
                        do
                        {
                          *(_QWORD *)v1386 = 0LL;
                          v1385 -= 8;
                          v1386 += 8;
                          --v1387;
                        }
                        while ( v1387 );
                        for ( ; v1385; --v1385 )
                          *v1386++ = 0;
                        *(_DWORD *)v1380 = 11;
                        *((_QWORD *)v1380 + 1) = i6;
                        v1388 = (const char *)i6;
                        *((_DWORD *)v1380 + 4) = v1384;
                        if ( i6 < i6 + v1384 )
                        {
                          do
                          {
                            _mm_prefetch(v1388, 0);
                            v1388 += 64;
                          }
                          while ( (unsigned __int64)v1388 < i6 + v1384 );
                        }
                        v93 = *(_QWORD *)(v1044 + 1408);
                        v1389 = v1384;
                        if ( (unsigned int)v1384 >= 8 )
                        {
                          v1390 = v1384 >> 3;
                          do
                          {
                            v1389 -= 8;
                            v93 = __ROL8__(*(_QWORD *)i6 ^ v93, *(_DWORD *)(v1044 + 1404));
                            i6 += 8LL;
                            --v1390;
                          }
                          while ( v1390 );
                        }
                        for ( ; v1389; --v1389 )
                        {
                          v1391 = *(unsigned __int8 *)i6++;
                          v93 = __ROL8__(v1391 ^ v93, *(_DWORD *)(v1044 + 1404));
                        }
                        *(_DWORD *)(v1044 + 1424) += v1384;
                        for ( i27 = v93 >> 31; i27; i27 >>= 31 )
                          v93 = (unsigned int)i27 ^ (unsigned int)v93;
                        LODWORD(v93) = v93 & 0x7FFFFFFF;
                        ++v1382;
                        *((_DWORD *)v1380 + 5) = v93;
                        ++v1381;
                        *(_DWORD *)(v1044 + 1424) += v1384;
                        v1380 = (unsigned __int8 *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2E0)
                                                  + 48LL);
                        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x2E0) = v1380;
                        --v1383;
                      }
                      while ( v1383 );
                      v1393 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E0);
                      v85 = v1044;
                      v1394 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
                      v127 = v1393 == -96;
                      v1395 = (_DWORD *)(v1393 + 96);
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C0) = v1395;
                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8) = v1044;
                      if ( !v127 )
                      {
                        v1411 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                        *v1395 = 14;
LABEL_2151:
                        if ( (*(_DWORD *)(v1044 + 1672) & 0x40000000) != 0 && (_DWORD)v1394 )
                          sub_14017D2FC(
                            v1044,
                            v1411,
                            v1394,
                            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C0) + 28LL);
                        v1417 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C0);
                        v85 = v1044;
                        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8) = v1044;
                        *(_DWORD *)(v1417 + 24) = 0;
                        *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C0) + 24LL) |= 1u;
                        v1418 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E0);
                        v1419 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0);
                        *(_DWORD *)(v1418 + 144) = 35;
                        *(_DWORD *)(v1418 + 184) |= 1u;
                        if ( *(_DWORD *)(v1418 + 160) < 0x94u )
                        {
LABEL_2162:
                          v127 = (*(_DWORD *)(v1044 + 1672) & 0x400000) == 0;
                          v1426 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0);
                          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v1426;
                          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8) = v1044;
                          if ( v127 )
                            goto LABEL_2349;
                          v1427 = (*(__int64 (__fastcall **)(ULONG_PTR, unsigned __int64, unsigned __int8 *))(v1044 + 448))(
                                    v1426,
                                    v93,
                                    v1380);
                          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v1427;
                          if ( !v1427 )
                            goto LABEL_1957;
                          v93 = *(unsigned __int16 *)(v1427 + 6);
                          v1428 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) / 0xCuLL;
                          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v1428;
                          *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v93;
                          if ( (_WORD)v93 )
                          {
                            v1429 = 0;
                            v1430 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                            i6 = (unsigned __int64)&v1430[3 * (unsigned int)v1428];
                            v1431 = *(unsigned __int16 *)(v1427 + 20) + v1427 + 24;
                            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = i6;
                            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1431;
                            v1432 = (int *)(v1431 + 8);
                            while ( 1 )
                            {
                              v1433 = *v1432;
                              v93 = (unsigned int)v1432[1];
                              if ( v1432[2] > (unsigned int)*v1432 )
                                v1433 = v1432[2];
                              *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = v93;
                              v1434 = v1433 + v93;
                              if ( v1429 && v1434 < *(_DWORD *)(v1431 + 40LL * (v1429 - 1) + 12) )
                              {
                                if ( (*(_DWORD *)(v1044 + 1672) & 0x200000) == 0 )
                                {
                                  v1913 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                                  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x210) = 5072;
                                  KeBugCheckEx(
                                    __ROL4__(
                                      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x210),
                                      188),
                                    0xAuLL,
                                    v1913,
                                    1uLL,
                                    0LL);
                                }
LABEL_2187:
                                if ( !*(_DWORD *)(v1044 + 1536) )
                                {
                                  *(_QWORD *)(v1044 + 1544) = v1044 - 0x5C5FC0A76E374B18LL;
                                  v1438 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                                  *(_QWORD *)(v1044 + 1552) = 0LL;
                                  *(_QWORD *)(v1044 + 1560) = 271LL;
                                  *(_QWORD *)(v1044 + 1568) = v1438;
                                  *(_DWORD *)(v1044 + 1536) = 1;
                                }
                                goto LABEL_1957;
                              }
                              if ( v1430 != (unsigned int *)i6 )
                                break;
LABEL_2182:
                              ++v1429;
                              v1432 += 10;
                              v1436 = *(unsigned __int16 *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                              if ( v1429 >= v1436 )
                              {
                                v1437 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                                if ( v1430 != (unsigned int *)i6 )
                                {
                                  if ( (*(_DWORD *)(v1044 + 1672) & 0x200000) == 0 )
                                  {
                                    v1912 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x270) = 5072;
                                    KeBugCheckEx(
                                      __ROL4__(
                                        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x270),
                                        188),
                                      0xAuLL,
                                      v1912,
                                      3uLL,
                                      0LL);
                                  }
                                  goto LABEL_2187;
                                }
                                v1440 = *(unsigned int *)(v1044 + 1356);
                                v1441 = (unsigned int)v1440 + (((_DWORD)v1437 + 6) & 0xFFFFFFF8) + 24 * (v1436 + 2);
                                v1442 = v1044 & -(__int64)((*(_DWORD *)(v1044 + 1672) & 0x20000000) != 0);
                                if ( *(int *)(v1044 + 1580) <= 1 )
                                {
                                  if ( v1442 )
                                  {
                                    v1443 = *(unsigned int *)((v1044 & -(__int64)((*(_DWORD *)(v1044 + 1672) & 0x20000000) != 0))
                                                            + 0x55C);
LABEL_2198:
                                    v1444 = ((__int64 (__fastcall *)(__int64, __int64))(v1442 + v1443))(v1044, v1441);
                                  }
                                  else
                                  {
                                    v1444 = ((__int64 (__fastcall *)(__int64, __int64))sub_140285AAC)(v1044, v1441);
                                  }
                                }
                                else
                                {
                                  if ( v1442 )
                                  {
                                    v1443 = *(unsigned int *)((v1044 & -(__int64)((*(_DWORD *)(v1044 + 1672) & 0x20000000) != 0))
                                                            + 0x560);
                                    goto LABEL_2198;
                                  }
                                  v1444 = sub_140285DF0(v1044, v1441);
                                }
                                v1445 = v1444;
                                if ( v1444 )
                                {
                                  v1446 = *(_DWORD *)(v1044 + 1672);
                                  if ( (v1446 & 4) == 0 )
                                  {
                                    v1447 = *(unsigned int *)(v1044 + 1356);
                                    v1448 = *(_QWORD *)(v1044 + 1328);
                                    v1449 = (v1446 & 0x20000000) != 0 ? *(_DWORD *)(v1044 + 1580) : 0;
                                    if ( (unsigned int)v1447 >= 8 )
                                    {
                                      v1450 = (unsigned __int64)(unsigned int)v1447 >> 3;
                                      do
                                      {
                                        *(_QWORD *)v1044 = 0LL;
                                        v1447 = (unsigned int)(v1447 - 8);
                                        v1044 += 8LL;
                                        --v1450;
                                      }
                                      while ( v1450 );
                                    }
                                    if ( (_DWORD)v1447 )
                                    {
                                      do
                                      {
                                        *(_BYTE *)v1044++ = 0;
                                        v127 = (_DWORD)v1447 == 1;
                                        v1447 = (unsigned int)(v1447 - 1);
                                      }
                                      while ( !v127 );
                                    }
                                    v1451 = *(_DWORD *)(v1445 + 1580);
                                    *(_DWORD *)(v1445 + 1580) = v1449;
                                    if ( v1449 == 3 )
                                    {
                                      (*(void (__fastcall **)(__int64, __int64))(v1445 + 792))(v1448, v1447);
                                    }
                                    else if ( v1449 == 1 )
                                    {
                                      (*(void (__fastcall **)(__int64, _QWORD))(v1445 + 496))(
                                        v1448 - 8,
                                        *(_QWORD *)(v1448 - 8));
                                    }
                                    else
                                    {
                                      (*(void (__fastcall **)(__int64))(v1445 + 240))(v1448);
                                    }
                                    *(_DWORD *)(v1445 + 1580) = v1451;
                                  }
                                  *(_DWORD *)(v1445 + 1672) &= ~4u;
                                  v1452 = v1445 + v1440;
                                  v1453 = (_QWORD *)(v1445 + v1440);
                                  ++*(_DWORD *)(v1445 + 1396);
                                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x350) = v1445 + v1440;
                                  v1454 = 48;
                                  v1455 = 6LL;
                                  do
                                  {
                                    *v1453 = 0LL;
                                    v1454 -= 8;
                                    ++v1453;
                                    --v1455;
                                  }
                                  while ( v1455 );
                                  for ( ; v1454; --v1454 )
                                  {
                                    *(_BYTE *)v1453 = 0;
                                    v1453 = (_QWORD *)((char *)v1453 + 1);
                                  }
                                  v1456 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                                  *(_DWORD *)v1452 = 30;
                                  *(_QWORD *)(v1452 + 8) = v1456;
                                  *(_DWORD *)(v1452 + 16) = 0;
                                  v1457 = *(_QWORD *)(v1445 + 1408);
                                  for ( i28 = v1457; ; LODWORD(v1457) = i28 ^ v1457 )
                                  {
                                    i28 >>= 31;
                                    if ( !i28 )
                                      break;
                                  }
                                  v1459 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                                  v1460 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                                  *(_DWORD *)(v1452 + 20) = v1457 & 0x7FFFFFFF;
                                  v1461 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x350);
                                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x128) = v1461;
                                  v1044 = v1445;
                                  *(_QWORD *)(v1461 + 24) = v1459;
                                  *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x128)
                                            + 32LL) = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                            + 0x78)
                                                                + 80LL);
                                  *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x128)
                                            + 36LL) = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                + 0x18);
                                  *(_WORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x128)
                                           + 40LL) = *(_WORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                                  *(_WORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x128)
                                           + 42LL) |= 1u;
                                  v1462 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x128);
                                  v1463 = *(unsigned __int16 *)(v1462 + 40);
                                  v93 = v1462 + 48;
                                  v1464 = v1462 + 48 + (((unsigned int)(v1437 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
                                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1462 + 48;
                                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v1464;
                                  i6 = v1464 + 24 * v1463;
                                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = i6;
                                  if ( (_DWORD)v1437 )
                                    *v1 = v1456 + 3;
                                  else
                                    *v1 = v1460;
                                  if ( v1436 )
                                  {
                                    v93 = v1436;
                                    v1465 = (_DWORD *)(v1464 + 8);
                                    do
                                    {
                                      v1466 = 2LL;
                                      do
                                      {
                                        *(v1465 - 2) = 0;
                                        *(v1465 - 1) = 0;
                                        *v1465 = 0x80000000;
                                        v1465 += 3;
                                        --v1466;
                                      }
                                      while ( v1466 );
                                      --v93;
                                    }
                                    while ( v93 );
                                  }
                                  if ( v1464 == i6 )
                                  {
LABEL_2349:
                                    v85 = v1044;
                                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8) = v1044;
                                    v1268 = 0;
                                    goto LABEL_2352;
                                  }
                                  v1467 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                                  v1468 = (unsigned int *)v1464;
                                  i6 = 0LL;
                                  while ( 2 )
                                  {
                                    v1469 = 0;
                                    if ( (*((_DWORD *)v1467 + 9) & 0x2000000) != 0
                                      || *(_DWORD *)v1467 == 1414090313 && *((_DWORD *)v1467 + 1) == 1195525195
                                      || *(_DWORD *)v1467 == 1162297680
                                      && ((v1470 = *((_WORD *)v1467 + 2), v1470 == 30583)
                                       || v1470 == 29303
                                       || v1470 == 30839) )
                                    {
                                      v1469 = 1;
                                    }
                                    else
                                    {
                                      v1471 = *(char **)(v1445 + 1592);
                                      v1472 = 7;
                                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x470) = *(_QWORD *)(v1445 + 1600);
                                      v1473 = v1467 - v1471;
                                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x478) = *(_QWORD *)(v1445 + 1608);
                                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x480) = *(_QWORD *)(v1445 + 1616);
                                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x468) = v1471;
                                      while ( 1 )
                                      {
                                        v1474 = (unsigned __int8)v1471[v1473];
                                        v1475 = (unsigned __int8)*v1471++;
                                        if ( v1474 != v1475 )
                                          break;
                                        if ( !--v1472 )
                                        {
LABEL_2255:
                                          v1469 = 1;
                                          goto LABEL_2256;
                                        }
                                      }
                                      v1476 = *(__int64 **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x470);
                                      v1477 = 8;
                                      v1478 = (__int64 *)v1467;
                                      while ( 1 )
                                      {
                                        v1479 = *v1478++;
                                        v1480 = *v1476++;
                                        if ( v1479 != v1480 )
                                          break;
                                        v1477 -= 8;
                                        if ( v1477 < 8 )
                                        {
                                          if ( !v1477 )
                                            goto LABEL_2255;
                                          while ( 1 )
                                          {
                                            v1481 = *(unsigned __int8 *)v1478;
                                            v1478 = (__int64 *)((char *)v1478 + 1);
                                            v1482 = *(unsigned __int8 *)v1476;
                                            v1476 = (__int64 *)((char *)v1476 + 1);
                                            if ( v1481 != v1482 )
                                              goto LABEL_2248;
                                            if ( !--v1477 )
                                              goto LABEL_2255;
                                          }
                                        }
                                      }
LABEL_2248:
                                      v1483 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x478);
                                      v1484 = v1467 - v1483;
                                      v1485 = 4;
                                      while ( 1 )
                                      {
                                        v1486 = (unsigned __int8)v1483[v1484];
                                        v1487 = (unsigned __int8)*v1483++;
                                        if ( v1486 != v1487 )
                                          break;
                                        if ( !--v1485 )
                                          goto LABEL_2255;
                                      }
                                      v1488 = *(char **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x480);
                                      v1489 = v1467 - v1488;
                                      v1490 = 6;
                                      while ( 1 )
                                      {
                                        v1491 = (unsigned __int8)v1488[v1489];
                                        v1492 = (unsigned __int8)*v1488++;
                                        if ( v1491 != v1492 )
                                          break;
                                        if ( !--v1490 )
                                          goto LABEL_2255;
                                      }
LABEL_2256:
                                      v1456 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                                      i6 = 0LL;
                                    }
                                    if ( *((int *)v1467 + 9) < 0 )
                                      v1469 = 1;
                                    if ( v1469
                                      && *(_DWORD *)v1467 == 1414090313
                                      && *((_DWORD *)v1467 + 1) == 1195525195
                                      && (*(_DWORD *)(v1445 + 1672) & 0x10000000) != 0 )
                                    {
                                      v1469 = 0;
                                    }
                                    v1493 = *((_DWORD *)v1467 + 2);
                                    v93 = *((unsigned int *)v1467 + 3);
                                    if ( *((_DWORD *)v1467 + 4) > v1493 )
                                      v1493 = *((_DWORD *)v1467 + 4);
                                    v1494 = v93 + v1493;
                                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C) = v93;
                                    *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v1494;
                                    if ( v1456 == v1460 )
                                    {
                                      v1495 = 0;
                                      v1496 = 0;
                                    }
                                    else
                                    {
                                      v1495 = *v1456;
                                      v1496 = v1456[1];
                                    }
                                    v1497 = v93;
                                    if ( v1456 == *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                   + 0x40) )
                                    {
LABEL_2291:
                                      v1498 = v1495 < (unsigned int)v93;
                                    }
                                    else
                                    {
                                      v1498 = v1495 < (unsigned int)v93;
                                      if ( v1495 > (unsigned int)v93 )
                                      {
                                        if ( v1496 <= v1494 && !v1469 )
                                        {
                                          *v1468 = v93;
                                          v1499 = (unsigned int *)(v1 + 63);
                                          v1468[1] = v1495;
                                          v1500 = v1 + 122;
                                          v1501 = *v1468;
                                          v1502 = v1495 - v1501;
                                          v1497 = v1495;
                                          v1503 = (_QWORD *)(v1459 + v1501);
                                          v1504 = v1459 + v1501 + v1495 - (unsigned int)v1501;
                                          do
                                          {
                                            if ( (unsigned __int64)v1503 < *v1500 + *v1499 && v1504 > *v1500 )
                                            {
                                              i6 = 0LL;
                                              goto LABEL_2290;
                                            }
                                            ++v1500;
                                            LODWORD(i6) = i6 + 1;
                                            ++v1499;
                                          }
                                          while ( (unsigned int)i6 < 4 );
                                          v1505 = (const char *)(v1459 + v1501);
                                          if ( (unsigned __int64)v1503 < v1504 )
                                          {
                                            do
                                            {
                                              _mm_prefetch(v1505, 0);
                                              v1505 += 64;
                                            }
                                            while ( (unsigned __int64)v1505 < v1504 );
                                          }
                                          v1506 = *(_QWORD *)(v1445 + 1408);
                                          v1507 = v1502;
                                          if ( v1502 >= 8 )
                                          {
                                            v1508 = (unsigned __int64)v1502 >> 3;
                                            do
                                            {
                                              v1507 -= 8;
                                              v1506 = __ROL8__(*v1503++ ^ v1506, *(_DWORD *)(v1445 + 1404));
                                              --v1508;
                                            }
                                            while ( v1508 );
                                          }
                                          for ( ; v1507; --v1507 )
                                          {
                                            v1509 = *(unsigned __int8 *)v1503;
                                            v1503 = (_QWORD *)((char *)v1503 + 1);
                                            v1506 = __ROL8__(v1509 ^ v1506, *(_DWORD *)(v1445 + 1404));
                                          }
                                          *(_DWORD *)(v1445 + 1424) += v1502;
                                          v1510 = v1506 >> 31;
                                          i6 = 0LL;
                                          while ( v1510 )
                                          {
                                            LODWORD(v1506) = v1510 ^ v1506;
                                            v1510 >>= 31;
                                          }
                                          v1468[2] = v1506 & 0x7FFFFFFF;
LABEL_2290:
                                          v1456 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                   + 0x48);
                                          v1459 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                                          v93 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                + 0x1C);
                                          v1494 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                                        }
                                        goto LABEL_2291;
                                      }
                                    }
                                    v1460 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                                    if ( v1498 )
                                    {
                                      v1511 = (unsigned int *)*v1;
                                    }
                                    else
                                    {
                                      v691 = v1496 <= v1494;
                                      v1511 = (unsigned int *)*v1;
                                      if ( v691 && v1456 != v1460 )
                                      {
                                        v1512 = v1511[1];
                                        if ( v1512 <= v1494 )
                                        {
                                          v1513 = *(_BYTE **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                                          do
                                          {
                                            if ( v1511 == *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                           + 0x40) )
                                              break;
                                            if ( v1469 )
                                            {
LABEL_2313:
                                              *v1513 = 0x80;
                                            }
                                            else
                                            {
                                              v1514 = v1456[1];
                                              v1515 = (unsigned int *)(v1 + 63);
                                              v1497 = *v1511;
                                              v93 = (unsigned __int64)(v1 + 122);
                                              v1516 = *v1511 - v1514;
                                              v1517 = (_QWORD *)(v1459 + v1514);
                                              v1518 = v1459 + v1514 + v1516;
                                              for ( i29 = 0; i29 < 4; ++i29 )
                                              {
                                                if ( (unsigned __int64)v1517 < *(_QWORD *)v93 + (unsigned __int64)*v1515
                                                  && v1518 > *(_QWORD *)v93 )
                                                {
                                                  goto LABEL_2312;
                                                }
                                                v93 += 8LL;
                                                ++v1515;
                                              }
                                              if ( v1516 < 4 )
                                              {
LABEL_2312:
                                                v1456 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                         + 0x48);
                                                v1494 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                  + 0x10);
                                                i6 = 0LL;
                                                goto LABEL_2313;
                                              }
                                              v1520 = (const char *)v1517;
                                              if ( (unsigned __int64)v1517 < v1518 )
                                              {
                                                do
                                                {
                                                  _mm_prefetch(v1520, 0);
                                                  v1520 += 64;
                                                }
                                                while ( (unsigned __int64)v1520 < v1518 );
                                              }
                                              v93 = *(_QWORD *)(v1445 + 1408);
                                              v1521 = v1516;
                                              if ( v1516 >= 8 )
                                              {
                                                v1522 = (unsigned __int64)v1516 >> 3;
                                                do
                                                {
                                                  v1521 -= 8;
                                                  v93 = __ROL8__(*v1517++ ^ v93, *(_DWORD *)(v1445 + 1404));
                                                  --v1522;
                                                }
                                                while ( v1522 );
                                              }
                                              for ( ; v1521; --v1521 )
                                              {
                                                v1523 = *(unsigned __int8 *)v1517;
                                                v1517 = (_QWORD *)((char *)v1517 + 1);
                                                v93 = __ROL8__(v1523 ^ v93, *(_DWORD *)(v1445 + 1404));
                                              }
                                              *(_DWORD *)(v1445 + 1424) += v1516;
                                              v1524 = v93 >> 7;
                                              i6 = 0LL;
                                              while ( v1524 )
                                              {
                                                LOBYTE(v93) = v1524 ^ v93;
                                                v1524 >>= 7;
                                              }
                                              v1494 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                + 0x10);
                                              LOBYTE(v93) = v93 & 0x7F;
                                              v1456 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                       + 0x48);
                                              *v1513 = v93;
                                            }
                                            v1456 += 3;
                                            ++v1513;
                                            v1511 += 3;
                                            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v1456;
                                            if ( v1511 != *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                           + 0x40) )
                                              v1512 = v1511[1];
                                            v1459 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                                          }
                                          while ( v1512 <= v1494 );
                                          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1513;
                                          v1468 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                   + 0x68);
                                          *v1 = v1511;
                                        }
                                        v1460 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                 + 0x40);
                                      }
                                    }
                                    if ( !v1469 && v1497 != v1494 )
                                    {
                                      v1468[3] = v1497;
                                      v93 = (unsigned __int64)(v1 + 122);
                                      v1468[4] = v1494;
                                      v1525 = v1494;
                                      v1526 = (unsigned int *)(v1 + 63);
                                      v1527 = v1525 - v1468[3];
                                      v1528 = (const char *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                       + 0x58)
                                                           + v1468[3]);
                                      v1529 = &v1528[v1527];
                                      do
                                      {
                                        if ( (unsigned __int64)v1528 < *(_QWORD *)v93 + (unsigned __int64)*v1526
                                          && (unsigned __int64)v1529 > *(_QWORD *)v93 )
                                        {
                                          v1456 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                   + 0x48);
                                          i6 = 0LL;
                                          goto LABEL_2341;
                                        }
                                        v93 += 8LL;
                                        LODWORD(i6) = i6 + 1;
                                        ++v1526;
                                      }
                                      while ( (unsigned int)i6 < 4 );
                                      v1530 = (const char *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                       + 0x58)
                                                           + v1468[3]);
                                      if ( v1528 < v1529 )
                                      {
                                        do
                                        {
                                          _mm_prefetch(v1530, 0);
                                          v1530 += 64;
                                        }
                                        while ( v1530 < v1529 );
                                      }
                                      v93 = *(_QWORD *)(v1445 + 1408);
                                      v1531 = v1527;
                                      if ( v1527 >= 8 )
                                      {
                                        v1532 = (unsigned __int64)v1527 >> 3;
                                        do
                                        {
                                          v1531 -= 8;
                                          v93 = __ROL8__(*(_QWORD *)v1528 ^ v93, *(_DWORD *)(v1445 + 1404));
                                          v1528 += 8;
                                          --v1532;
                                        }
                                        while ( v1532 );
                                      }
                                      for ( ; v1531; --v1531 )
                                      {
                                        v1533 = *(unsigned __int8 *)v1528++;
                                        v93 = __ROL8__(v1533 ^ v93, *(_DWORD *)(v1445 + 1404));
                                      }
                                      *(_DWORD *)(v1445 + 1424) += v1527;
                                      v1534 = v93 >> 31;
                                      i6 = 0LL;
                                      while ( v1534 )
                                      {
                                        v93 = (unsigned int)v1534 ^ (unsigned int)v93;
                                        v1534 >>= 31;
                                      }
                                      v1456 = *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                                      LODWORD(v93) = v93 & 0x7FFFFFFF;
                                      v1468[5] = v93;
                                    }
LABEL_2341:
                                    if ( v1456 != v1460
                                      && *v1456 >= *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C)
                                      && v1456[1] <= *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) )
                                    {
                                      if ( v1511 != v1460 )
                                      {
                                        v1535 = *(_BYTE **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                                        *v1535 = 0x80;
                                        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1535 + 1;
                                        *v1 = v1511 + 3;
                                      }
                                      v1456 += 3;
                                      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v1456;
                                    }
                                    v1468 += 6;
                                    v1459 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                                    v1467 = (char *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8)
                                                   + 40LL);
                                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v1468;
                                    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1467;
                                    if ( v1468 == *(unsigned int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                   + 0x30) )
                                    {
                                      v1044 = v1445;
                                      goto LABEL_2349;
                                    }
                                    continue;
                                  }
                                }
LABEL_2351:
                                v1268 = -1073741670;
                                goto LABEL_2352;
                              }
                            }
                            while ( 1 )
                            {
                              v1435 = v1430[1];
                              if ( *v1430 >= v1434 || v1435 <= (unsigned int)v93 )
                                goto LABEL_2182;
                              if ( *v1430 < (unsigned int)v93 || v1435 > v1434 )
                                break;
                              __ea(
                                v1044,
                                *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58),
                                v1431 + 40LL * v1429,
                                v1430);
                              i6 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                              v1430 += 3;
                              v93 = *(unsigned int *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
                              v1431 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                              if ( v1430 == (unsigned int *)i6 )
                                goto LABEL_2182;
                            }
                            if ( (*(_DWORD *)(v1044 + 1672) & 0x200000) == 0 )
                            {
                              v1914 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                              *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x258) = 5072;
                              KeBugCheckEx(
                                __ROL4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x258), 188),
                                0xAuLL,
                                v1914,
                                2uLL,
                                0LL);
                            }
                            if ( !*(_DWORD *)(v1044 + 1536) )
                            {
                              *(_QWORD *)(v1044 + 1544) = v1044 - 0x5C5FC0A76E374B18LL;
                              v1439 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                              *(_QWORD *)(v1044 + 1552) = 0LL;
                              *(_QWORD *)(v1044 + 1560) = 271LL;
                              *(_QWORD *)(v1044 + 1568) = v1439;
LABEL_2170:
                              *(_DWORD *)(v1044 + 1536) = 1;
                            }
                          }
                          else
                          {
                            if ( (*(_DWORD *)(v1044 + 1672) & 0x200000) == 0 )
                            {
                              *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x208) = 5072;
                              KeBugCheckEx(
                                __ROL4__(*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x208), 188),
                                0xAuLL,
                                v1426,
                                0LL,
                                0LL);
                            }
                            if ( !*(_DWORD *)(v1044 + 1536) )
                            {
                              *(_QWORD *)(v1044 + 1544) = v1044 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v1044 + 1552) = 0LL;
                              *(_QWORD *)(v1044 + 1560) = 271LL;
                              *(_QWORD *)(v1044 + 1568) = v1426;
                              goto LABEL_2170;
                            }
                          }
                          goto LABEL_1957;
                        }
                        v1420 = *(_QWORD *)(v1418 + 152);
                        v1421 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, unsigned __int8 *))(v1044 + 448))(
                                  v1419,
                                  v93,
                                  v1380);
                        if ( v1421 )
                        {
                          v1422 = *(unsigned int *)(v1421 + 80);
                          *(_DWORD *)(v1418 + 184) |= 2u;
                          v1423 = v1419 + v1422;
                          v1424 = *(_QWORD **)(v1420 + 112);
                          if ( (unsigned __int64)v1424 >= v1419 && (unsigned __int64)v1424 < v1423 )
                          {
                            *(_QWORD *)(v1418 + 168) = *v1424;
                            *(_DWORD *)(v1418 + 184) |= 4u;
                          }
                          v1425 = *(_QWORD **)(v1420 + 120);
                          if ( (unsigned __int64)v1425 >= v1419 && (unsigned __int64)v1425 < v1423 )
                          {
                            *(_QWORD *)(v1418 + 176) = *v1425;
                            *(_DWORD *)(v1418 + 184) |= 8u;
                          }
                          goto LABEL_2162;
                        }
                        *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = -1073741670;
LABEL_2355:
                        v1536 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
LABEL_2367:
                        if ( ((v1536 + 0x80000000) & 0x80000000) != 0 || v1536 == -1073741554 )
                          goto LABEL_2369;
LABEL_2375:
                        if ( (*(_DWORD *)(v1044 + 1672) & 0x8000) != 0 || !*(_DWORD *)(v1044 + 1536) )
                        {
                          v1547 = *(_QWORD *)(v1044 + 1664);
                          *(_QWORD *)(v1044 + 1664) = 0LL;
                          (*(void (__fastcall **)(__int64, _QWORD *))(v1044 + 600))(v1547, v1 + 189);
                          v1548 = *(_DWORD *)(v1044 + 1672);
                          if ( (v1548 & 1) != 0 )
                          {
                            *(_DWORD *)(v1044 + 1672) = v1548 & 0xFFFFFFFE;
                            v1549 = (*(__int64 (__fastcall **)(__int64))(v1044 + 576))(v1547);
                            v1547 = v1549;
                            if ( v1549 )
                              *(_DWORD *)(v1044 + 1648) = (*(__int64 (__fastcall **)(__int64))(v1044 + 608))(v1549);
                            else
                              *(_DWORD *)(v1044 + 1648) = -1;
                          }
                          if ( v1547 )
                            (*(void (__fastcall **)(__int64))(v1044 + 584))(v1547);
                        }
                        goto LABEL_2383;
                      }
                      v1396 = *(unsigned int *)(v1044 + 1356);
                      v1397 = v1044 & -(__int64)((*(_DWORD *)(v1044 + 1672) & 0x20000000) != 0);
                      v1398 = (unsigned int)(v1396 + 48);
                      if ( *(int *)(v1044 + 1580) <= 1 )
                      {
                        if ( !v1397 )
                        {
                          v1400 = ((__int64 (__fastcall *)(__int64, __int64))sub_140285AAC)(v1044, v1398);
                          goto LABEL_2122;
                        }
                        v1399 = *(unsigned int *)((v1044 & -(__int64)((*(_DWORD *)(v1044 + 1672) & 0x20000000) != 0))
                                                + 0x55C);
                      }
                      else
                      {
                        if ( !v1397 )
                        {
                          v1400 = sub_140285DF0(v1044, v1398);
LABEL_2122:
                          v1401 = v1400;
                          if ( !v1400 )
                            goto LABEL_2355;
                          v1402 = *(_DWORD *)(v1044 + 1672);
                          if ( (v1402 & 4) == 0 )
                          {
                            v1403 = *(unsigned int *)(v1044 + 1356);
                            v1404 = *(_QWORD *)(v1044 + 1328);
                            v1405 = (v1402 & 0x20000000) != 0 ? *(_DWORD *)(v1044 + 1580) : 0;
                            if ( (unsigned int)v1403 >= 8 )
                            {
                              v1406 = (unsigned __int64)(unsigned int)v1403 >> 3;
                              do
                              {
                                *(_QWORD *)v1044 = 0LL;
                                v1403 = (unsigned int)(v1403 - 8);
                                v1044 += 8LL;
                                --v1406;
                              }
                              while ( v1406 );
                            }
                            if ( (_DWORD)v1403 )
                            {
                              do
                              {
                                *(_BYTE *)v1044++ = 0;
                                v127 = (_DWORD)v1403 == 1;
                                v1403 = (unsigned int)(v1403 - 1);
                              }
                              while ( !v127 );
                            }
                            v1407 = *(_DWORD *)(v1401 + 1580);
                            *(_DWORD *)(v1401 + 1580) = v1405;
                            if ( v1405 == 3 )
                            {
                              (*(void (__fastcall **)(__int64, __int64))(v1401 + 792))(v1404, v1403);
                            }
                            else if ( v1405 == 1 )
                            {
                              (*(void (__fastcall **)(__int64, _QWORD))(v1401 + 496))(v1404 - 8, *(_QWORD *)(v1404 - 8));
                            }
                            else
                            {
                              (*(void (__fastcall **)(__int64))(v1401 + 240))(v1404);
                            }
                            *(_DWORD *)(v1401 + 1580) = v1407;
                          }
                          *(_DWORD *)(v1401 + 1672) &= ~4u;
                          i6 = v1401 + v1396;
                          v1408 = (_QWORD *)(v1401 + v1396);
                          ++*(_DWORD *)(v1401 + 1396);
                          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3F8) = v1401 + v1396;
                          v1409 = 48;
                          v1410 = 6LL;
                          do
                          {
                            *v1408 = 0LL;
                            v1409 -= 8;
                            ++v1408;
                            --v1410;
                          }
                          while ( v1410 );
                          for ( ; v1409; --v1409 )
                          {
                            *(_BYTE *)v1408 = 0;
                            v1408 = (_QWORD *)((char *)v1408 + 1);
                          }
                          v1411 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                          *(_DWORD *)i6 = 14;
                          v1380 = (unsigned __int8 *)v1411;
                          *(_QWORD *)(i6 + 8) = v1411;
                          v1412 = (const char *)v1411;
                          *(_DWORD *)(i6 + 16) = v1394;
                          if ( v1411 < v1411 + v1394 )
                          {
                            do
                            {
                              _mm_prefetch(v1412, 0);
                              v1412 += 64;
                            }
                            while ( (unsigned __int64)v1412 < v1411 + v1394 );
                          }
                          v93 = *(_QWORD *)(v1401 + 1408);
                          v1413 = v1394;
                          if ( (unsigned int)v1394 >= 8 )
                          {
                            v1414 = v1394 >> 3;
                            do
                            {
                              v1413 -= 8;
                              v93 = __ROL8__(*(_QWORD *)v1380 ^ v93, *(_DWORD *)(v1401 + 1404));
                              v1380 += 8;
                              --v1414;
                            }
                            while ( v1414 );
                          }
                          for ( ; v1413; --v1413 )
                          {
                            v1415 = *v1380++;
                            v93 = __ROL8__(v1415 ^ v93, *(_DWORD *)(v1401 + 1404));
                          }
                          *(_DWORD *)(v1401 + 1424) += v1394;
                          for ( i30 = v93; ; v93 = (unsigned int)i30 ^ (unsigned int)v93 )
                          {
                            i30 >>= 31;
                            if ( !i30 )
                              break;
                          }
                          LODWORD(v93) = v93 & 0x7FFFFFFF;
                          v1044 = v1401;
                          *(_DWORD *)(i6 + 20) = v93;
                          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C0) = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x3F8);
                          *(_DWORD *)(v1401 + 1424) += v1394;
                          goto LABEL_2151;
                        }
                        v1399 = *(unsigned int *)((v1044 & -(__int64)((*(_DWORD *)(v1044 + 1672) & 0x20000000) != 0))
                                                + 0x560);
                      }
                      v1400 = ((__int64 (__fastcall *)(__int64, __int64))(v1397 + v1399))(v1044, v1398);
                      goto LABEL_2122;
                    }
                    v1372 = *(unsigned int *)((v1279 & -(__int64)v1369) + 0x55C);
                  }
                  else
                  {
                    if ( !v1370 )
                    {
                      v1373 = sub_140285DF0(v1279, v1371);
                      goto LABEL_2084;
                    }
                    v1372 = *(unsigned int *)((v1279 & -(__int64)v1369) + 0x560);
                  }
                  v1373 = ((__int64 (__fastcall *)(unsigned __int64, __int64))(v1370 + v1372))(v1279, v1371);
                  goto LABEL_2084;
                }
                v1277 = *(unsigned int *)((v1044 & -(__int64)((*(_DWORD *)(v1044 + 1672) & 0x20000000) != 0)) + 0x55C);
              }
              else
              {
                if ( !v1276 )
                {
                  v1278 = sub_140285DF0(v1044, v1275);
                  goto LABEL_1966;
                }
                v1277 = *(unsigned int *)((v1044 & -(__int64)((*(_DWORD *)(v1044 + 1672) & 0x20000000) != 0)) + 0x560);
              }
              v1278 = ((__int64 (__fastcall *)(__int64, __int64))(v1276 + v1277))(v1044, v1275);
              goto LABEL_1966;
            }
            v1194 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
            v1195 = *(unsigned int *)(v1142 + 1356);
            v1196 = (unsigned int)(v1195 + 16 * v1194 + 48);
            v1197 = v1142 & -(__int64)((*(_DWORD *)(v1142 + 1672) & 0x20000000) != 0);
            if ( *(int *)(v1142 + 1580) <= 1 )
            {
              if ( !v1197 )
              {
                v1199 = ((__int64 (__fastcall *)(unsigned __int64, __int64))sub_140285AAC)(v1142, v1196);
LABEL_1817:
                v85 = v1199;
                if ( v1199 )
                {
                  v1200 = *(_DWORD *)(v1142 + 1672);
                  if ( (v1200 & 4) == 0 )
                  {
                    v1201 = *(_DWORD *)(v1142 + 1356);
                    v1202 = *(_QWORD *)(v1142 + 1328);
                    v1203 = (v1200 & 0x20000000) != 0 ? *(_DWORD *)(v1142 + 1580) : 0;
                    if ( v1201 >= 8 )
                    {
                      v1204 = (unsigned __int64)v1201 >> 3;
                      do
                      {
                        *(_QWORD *)v1142 = 0LL;
                        v1201 -= 8;
                        v1142 += 8LL;
                        --v1204;
                      }
                      while ( v1204 );
                    }
                    for ( ; v1201; --v1201 )
                      *(_BYTE *)v1142++ = 0;
                    v1205 = *(_DWORD *)(v85 + 1580);
                    *(_DWORD *)(v85 + 1580) = v1203;
                    if ( v1203 == 3 )
                    {
                      (*(void (__fastcall **)(__int64))(v85 + 792))(v1202);
                    }
                    else if ( v1203 == 1 )
                    {
                      (*(void (__fastcall **)(__int64, _QWORD))(v85 + 496))(v1202 - 8, *(_QWORD *)(v1202 - 8));
                    }
                    else
                    {
                      (*(void (__fastcall **)(__int64))(v85 + 240))(v1202);
                    }
                    *(_DWORD *)(v85 + 1580) = v1205;
                  }
                  *(_DWORD *)(v85 + 1672) &= ~4u;
                  v1206 = v85 + v1195;
                  v1207 = (_QWORD *)(v85 + v1195);
                  ++*(_DWORD *)(v85 + 1396);
                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x330) = v85 + v1195;
                  v1208 = 48;
                  v1209 = 6LL;
                  do
                  {
                    *v1207 = 0LL;
                    v1208 -= 8;
                    ++v1207;
                    --v1209;
                  }
                  while ( v1209 );
                  for ( ; v1208; --v1208 )
                  {
                    *(_BYTE *)v1207 = 0;
                    v1207 = (_QWORD *)((char *)v1207 + 1);
                  }
                  *(_DWORD *)v1206 = 10;
                  *(_QWORD *)(v1206 + 8) = 0LL;
                  *(_DWORD *)(v1206 + 16) = 0;
                  v93 = *(_QWORD *)(v85 + 1408);
                  for ( i31 = v93; ; v93 = (unsigned int)i31 ^ (unsigned int)v93 )
                  {
                    i31 >>= 31;
                    if ( !i31 )
                      break;
                  }
                  LODWORD(v93) = v93 & 0x7FFFFFFF;
                  i6 = 0LL;
                  *(_DWORD *)(v1206 + 20) = v93;
                  v1044 = v85;
                  v1211 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x330);
                  v1142 = v85;
                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D8) = v1211;
                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v85;
                  *(_DWORD *)(v1211 + 24) = 1;
                  *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D8) + 28LL) = v1194;
                  v1212 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D8);
                  v1213 = v1212 + 12;
                  if ( *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) + 16LL) )
                  {
                    do
                    {
                      v1214 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8)
                            + ((__int64)*(int *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8)
                                               + 4LL * v1190) >> 4);
                      if ( !(*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD))(v85 + 544))(v1214, v1 + 116, 0LL) )
                      {
                        v1215 = (unsigned __int8 *)v1214;
                        v1216 = (const char *)v1214;
                        if ( v1214 < (unsigned __int64)(v1214 + 4) )
                        {
                          do
                          {
                            _mm_prefetch(v1216, 0);
                            v1216 += 64;
                          }
                          while ( (unsigned __int64)v1216 < v1214 + 4 );
                        }
                        v93 = *(_QWORD *)(v85 + 1408);
                        LODWORD(i6) = 4;
                        do
                        {
                          v1217 = *v1215++;
                          v93 = __ROL8__(v1217 ^ v93, *(_DWORD *)(v85 + 1404));
                          i6 = (unsigned int)(i6 - 1);
                        }
                        while ( (_DWORD)i6 );
                        *(_DWORD *)(v85 + 1424) += 4;
                        for ( i32 = v93; ; v93 = (unsigned int)i32 ^ (unsigned int)v93 )
                        {
                          i32 >>= 31;
                          if ( !i32 )
                            break;
                        }
                        *v1213 ^= (v93 ^ *v1213) & 0x7FFFFFFF;
                        v1213[1] = 4;
                        *((_QWORD *)v1213 + 1) = v1214;
                        v1213 += 4;
                        v127 = (*(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10))-- == 1;
                        if ( v127 )
                          goto LABEL_1859;
                      }
                      ++v1190;
                    }
                    while ( v1190 < *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28)
                                              + 16LL) );
                    v1212 = *(int **)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D8);
                  }
                  if ( *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) )
                  {
                    if ( !*(_DWORD *)(v85 + 1536) )
                    {
                      *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
                      if ( v1212 )
                        *(_QWORD *)(v85 + 1552) = (char *)v1212 - 0x4C48B4211BBACBEBLL;
                      else
                        *(_QWORD *)(v85 + 1552) = 0LL;
                      if ( v1212 )
                        *(_QWORD *)(v85 + 1560) = *v1212;
                      else
                        *(_QWORD *)(v85 + 1560) = 0LL;
                      *(_QWORD *)(v85 + 1568) = 0LL;
                      *(_DWORD *)(v85 + 1536) = 1;
                    }
                    goto LABEL_2375;
                  }
                  goto LABEL_1859;
                }
LABEL_1858:
                v1219 = -1073741267;
                goto LABEL_1860;
              }
              v1198 = *(unsigned int *)((v1142 & -(__int64)((*(_DWORD *)(v1142 + 1672) & 0x20000000) != 0)) + 0x55C);
            }
            else
            {
              if ( !v1197 )
              {
                v1199 = sub_140285DF0(v1142, v1196);
                goto LABEL_1817;
              }
              v1198 = *(unsigned int *)((v1142 & -(__int64)((*(_DWORD *)(v1142 + 1672) & 0x20000000) != 0)) + 0x560);
            }
            v1199 = ((__int64 (__fastcall *)(unsigned __int64, __int64))(v1197 + v1198))(v1142, v1196);
            goto LABEL_1817;
          }
          v1170 = *(unsigned int *)((v1142 & -(__int64)((*(_DWORD *)(v1142 + 1672) & 0x20000000) != 0)) + 0x560);
        }
        v1171 = ((__int64 (__fastcall *)(unsigned __int64, __int64))(v1168 + v1170))(v1142, v1169);
        goto LABEL_1773;
      }
      v1148 = *(unsigned int *)((v85 & -(__int64)((*(_DWORD *)(v85 + 1672) & 0x20000000) != 0)) + 0x560);
    }
    v1149 = ((__int64 (__fastcall *)(__int64, __int64))(v1147 + v1148))(v85, v1146);
    goto LABEL_1734;
  }
LABEL_2384:
  if ( (*(_DWORD *)(v85 + 1672) & 0x2000000) != 0 )
  {
    v1550 = *(_QWORD *)(v85 + 1680);
    if ( (*(unsigned int (__fastcall **)(__int64, unsigned __int64))(v85 + 832))(v1550, v93) && !*(_DWORD *)(v85 + 1536) )
    {
      *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v85 + 1552) = 0LL;
      *(_QWORD *)(v85 + 1560) = 272LL;
      *(_QWORD *)(v85 + 1568) = 0LL;
      *(_DWORD *)(v85 + 1536) = 1;
    }
    (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(), __int64, _QWORD))(v85 + 824))(
      v1550,
      sub_140286C08,
      v85,
      0LL);
  }
  if ( (*(_DWORD *)(v85 + 1672) & 0x40000) != 0 )
  {
    v1551 = __rdtsc();
    v1552 = (__ROR8__(v1551, 3) ^ v1551) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x690) = *((_QWORD *)&v1552 + 1);
    v1553 = v1552 ^ *((_QWORD *)&v1552 + 1);
    v93 = ((unsigned __int64)v1552 ^ *((_QWORD *)&v1552 + 1)) / 0xA;
    if ( v1553 - 10 * v93 < 2 && !*(_DWORD *)(v85 + 1536) )
    {
      *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v85 + 1552) = 0LL;
      *(_QWORD *)(v85 + 1560) = 264LL;
      *(_QWORD *)(v85 + 1568) = 0LL;
      *(_DWORD *)(v85 + 1536) = 1;
    }
  }
  if ( (*(_DWORD *)(v85 + 1672) & 0x8000) != 0 || !*(_DWORD *)(v85 + 1536) )
  {
    v1554 = *(unsigned int *)(v85 + 1816);
    if ( (_DWORD)v1554 )
    {
      v1555 = (int *)(v85 + v1554);
      v1556 = *(_QWORD **)(v85 + v1554 + 8);
      *v1 = v85 + v1554;
      if ( v1556 )
      {
        if ( *v1555 != 11 || *(_QWORD *)(v85 + 1664) )
        {
          v1557 = (unsigned int)v1555[4];
          v1558 = (const char *)v1556;
          if ( v1556 < (_QWORD *)((char *)v1556 + v1557) )
          {
            do
            {
              _mm_prefetch(v1558, 0);
              v1558 += 64;
            }
            while ( v1558 < (const char *)v1556 + v1557 );
          }
          v1559 = *(_QWORD *)(v85 + 1408);
          v1560 = v1555[4];
          if ( (unsigned int)v1557 >= 8 )
          {
            v1561 = v1557 >> 3;
            do
            {
              v1560 -= 8;
              v1559 = __ROL8__(*v1556++ ^ v1559, *(_DWORD *)(v85 + 1404));
              --v1561;
            }
            while ( v1561 );
          }
          for ( ; v1560; --v1560 )
          {
            v1562 = *(unsigned __int8 *)v1556;
            v1556 = (_QWORD *)((char *)v1556 + 1);
            v1559 = __ROL8__(v1562 ^ v1559, *(_DWORD *)(v85 + 1404));
          }
          *(_DWORD *)(v85 + 1424) += v1557;
          for ( i33 = v1559; ; LODWORD(v1559) = i33 ^ v1559 )
          {
            i33 >>= 31;
            if ( !i33 )
              break;
          }
          v1571 = (unsigned int)v1555[5];
          v1572 = v1559 & 0x7FFFFFFF;
          if ( v1572 != (_DWORD)v1571 )
          {
            if ( !*(_DWORD *)(v85 + 1536) )
              *(_QWORD *)(*(_QWORD *)(v85 + 1160) + 24LL) = v1571 ^ v1572;
            v1573 = *((_QWORD *)v1555 + 1);
            if ( !*(_DWORD *)(v85 + 1536) )
            {
              *(_QWORD *)(v85 + 1544) = v85 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v85 + 1552) = (char *)v1555 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v85 + 1560) = *v1555;
              *(_QWORD *)(v85 + 1568) = v1573;
              *(_DWORD *)(v85 + 1536) = 1;
            }
          }
        }
        v1574 = *(void (__fastcall **)(_QWORD))(v85 + 240);
        if ( *(_DWORD *)(v85 + 1580) == 1 )
          (*(void (__fastcall **)(__int64, _QWORD, void (__fastcall *)(_QWORD)))(v85 + 496))(
            *((_QWORD *)v1555 + 3) - 8LL,
            *(_QWORD *)(*((_QWORD *)v1555 + 3) - 8LL),
            v1574);
        else
          v1574(*((_QWORD *)v1555 + 3));
        *((_QWORD *)v1555 + 1) = 0LL;
        v1555[4] = 0;
        v1575 = *(_QWORD *)(v85 + 1408);
        for ( i34 = v1575; ; LODWORD(v1575) = i34 ^ v1575 )
        {
          i34 >>= 31;
          if ( !i34 )
            break;
        }
        v1555[5] = v1575 & 0x7FFFFFFF;
      }
      v1577 = __rdtsc();
      v1578 = (__ROR8__(v1577, 3) ^ v1577) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x6A0) = *((_QWORD *)&v1578 + 1);
      v1579 = v1578 ^ *((_QWORD *)&v1578 + 1);
      v93 = ((unsigned __int64)v1578 ^ *((_QWORD *)&v1578 + 1)) / 3;
      if ( v1579 == 3 * v93 )
      {
        v1580 = (__int64 *)(v1555 + 6);
        LOBYTE(i6) = 1;
        v1581 = __rdtsc();
        v1582 = __ROR8__(v1581, 3);
        v1583 = (v1582 ^ v1581) * (unsigned __int128)0x7010008004002001uLL;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x6B0) = *((_QWORD *)&v1583 + 1);
        v1584 = (WORD4(v1583) ^ (unsigned __int16)(8193 * (v1582 ^ v1581))) & 0x7FF;
        v1585 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64))(v85 + 488);
        v1586 = *(unsigned int *)(v85 + 1400);
        v1587 = __rdtsc();
        v1588 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, unsigned __int64))(v85 + 232);
        v1589 = (__ROR8__(v1587, 3) ^ v1587) * (unsigned __int128)0x7010008004002001uLL;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x6C0) = *((_QWORD *)&v1589 + 1);
        v127 = (*(_DWORD *)(v85 + 1672) & 0x10000000) == 0;
        v1590 = (*((_QWORD *)&v1589 + 1) ^ (unsigned __int64)v1589) % (unsigned int)(v1584 + 1);
        v1591 = *(_DWORD *)(v85 + 1580);
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = *(_QWORD *)(v85 + 496);
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = *(_QWORD *)(v85 + 504);
        if ( !v127 )
        {
          LOBYTE(i6) = 0;
          v1591 = 0;
        }
        if ( v1591 == 1 )
        {
          v1592 = __rdtsc();
          v1593 = __ROR8__(v1592, 3);
          v1594 = (v1593 ^ v1592) * (unsigned __int128)0x7010008004002001uLL;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x6D0) = *((_QWORD *)&v1594 + 1);
          v1584 += (((DWORD2(v1594) ^ (67117057 * ((unsigned int)v1593 ^ (unsigned int)v1592))) & 1) << 12) + 4096;
          v1595 = (unsigned int)(v1584 + 1872);
          v1596 = v1585(v1595 + 8, 0xFFFFFFFFLL, v1586, i6);
          v1597 = (_QWORD *)v1596;
          if ( !v1596 )
          {
LABEL_2456:
            ++*(_DWORD *)(v85 + 1800);
            goto LABEL_2529;
          }
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64))(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                                                            + 0x30))(
                  v1596,
                  (v1584 + 5967) & 0xFFFFF000,
                  64LL) )
          {
            (*(void (__fastcall **)(_QWORD *, _QWORD))(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78))(
              v1597,
              (unsigned int)v1595);
            goto LABEL_2456;
          }
          *v1597 = v1595 + 8;
          v1580 = (__int64 *)(v1555 + 6);
          v1598 = (__int64)(v1597 + 1);
        }
        else
        {
          LOBYTE(i6) = -(char)i6;
          v1598 = v1588((_BYTE)i6 == 0 ? 0x200 : 0, (unsigned int)(v1584 + 1872), v1586, i6);
        }
        if ( !v1598 )
          goto LABEL_2456;
        v1599 = v1590;
        v1600 = (unsigned __int64 *)v1598;
        if ( (unsigned int)v1590 >= 8 )
        {
          v1601 = (unsigned __int64)(unsigned int)v1590 >> 3;
          do
          {
            v1599 -= 8;
            v1602 = __rdtsc();
            v1603 = (__ROR8__(v1602, 3) ^ v1602) * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x6A8) = *((_QWORD *)&v1603 + 1);
            v93 = v1603 ^ *((_QWORD *)&v1603 + 1);
            *v1600++ = v93;
            --v1601;
          }
          while ( v1601 );
          v1555 = (int *)*v1;
        }
        if ( v1599 )
        {
          v1604 = __rdtsc();
          v1605 = __ROR8__(v1604, 3) ^ v1604;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x4F8) = (v1605
                                                                                  * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v93 = (0x7010008004002001LL * v1605) ^ ((v1605 * (unsigned __int128)0x7010008004002001uLL) >> 64);
          do
          {
            *(_BYTE *)v1600 = v93;
            v1600 = (unsigned __int64 *)((char *)v1600 + 1);
            v93 >>= 8;
            --v1599;
          }
          while ( v1599 );
        }
        v1606 = v1584 - v1590;
        v1607 = v1598 + (unsigned int)v1590;
        v1608 = (unsigned __int64 *)(v1607 + 1872);
        if ( v1606 >= 8 )
        {
          v1609 = (unsigned __int64)v1606 >> 3;
          do
          {
            v1606 -= 8;
            v1610 = __rdtsc();
            v1611 = (__ROR8__(v1610, 3) ^ v1610) * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x630) = *((_QWORD *)&v1611 + 1);
            v93 = v1611 ^ *((_QWORD *)&v1611 + 1);
            *v1608++ = v93;
            --v1609;
          }
          while ( v1609 );
        }
        if ( v1606 )
        {
          v1612 = __rdtsc();
          v1613 = (__ROR8__(v1612, 3) ^ v1612) * (unsigned __int128)0x7010008004002001uLL;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x508) = *((_QWORD *)&v1613 + 1);
          v93 = v1613 ^ *((_QWORD *)&v1613 + 1);
          do
          {
            *(_BYTE *)v1608 = v93;
            v1608 = (unsigned __int64 *)((char *)v1608 + 1);
            v93 >>= 8;
            --v1606;
          }
          while ( v1606 );
        }
        if ( v1580 )
          *v1580 = v1598;
        if ( v1607 )
        {
          *((_QWORD *)v1555 + 1) = v1607;
          v1555[4] = 1872;
          v1614 = 1872;
          v1615 = (char *)v85;
          v1616 = (_QWORD *)(v1598 + (unsigned int)v1590);
          v1617 = 234LL;
          do
          {
            v1614 -= 8;
            *v1616 = *(_QWORD *)v1615;
            v1615 += 8;
            ++v1616;
            --v1617;
          }
          while ( v1617 );
          for ( ; v1614; --v1614 )
          {
            v1618 = *v1615++;
            *(_BYTE *)v1616 = v1618;
            v1616 = (_QWORD *)((char *)v1616 + 1);
          }
          *(_DWORD *)(v1607 + 1672) |= 0x80000u;
          *(_DWORD *)(v1607 + 1356) = 1872;
          *(_DWORD *)(v1607 + 1392) = 1872;
          v1619 = *(_DWORD *)(v1607 + 1672) & 0xFFFFFFFD;
          *(_DWORD *)(v1607 + 1672) = v1619;
          if ( (v1619 & 2) != 0 )
            v1620 = *(_DWORD *)(v1607 + 1356);
          else
            v1620 = *(_DWORD *)(v1607 + 1392);
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74) = (v1619 >> 19) & 1;
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = (v1619 >> 9) & 1;
          v1621 = (v1619 >> 8) & 1;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = *(_QWORD *)(v1607 + 1008);
          v1622 = (unsigned int)(v1620 - 200) >> 3;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = *(_QWORD *)(v1607 + 1208);
          *(_DWORD *)(v1607 + 196) = v1622;
          v1623 = (_QWORD *)(v1607 + 1280);
          v1624 = v1 + 230;
          v1625 = __rdtsc();
          v1626 = 32;
          v1627 = (__ROR8__(v1625, 3) ^ v1625) * (unsigned __int128)0x7010008004002001uLL;
          v1628 = (char *)(v1607 + 1280);
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x688) = *((_QWORD *)&v1627 + 1);
          v1629 = v1627 ^ *((_QWORD *)&v1627 + 1);
          v1630 = 4LL;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = *(_QWORD *)(v1607 + 1312);
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = *(_DWORD *)(v1607 + 1424);
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v1629;
          do
          {
            v1626 -= 8;
            *v1624 = *(_QWORD *)v1628;
            v1628 += 8;
            ++v1624;
            --v1630;
          }
          while ( v1630 );
          for ( ; v1626; --v1626 )
          {
            v1631 = *v1628++;
            *(_BYTE *)v1624 = v1631;
            v1624 = (_QWORD *)((char *)v1624 + 1);
          }
          v1632 = (_QWORD *)(v1607 + 1280);
          *(_QWORD *)(v1607 + 1312) = 0LL;
          v1633 = 4LL;
          *(_DWORD *)(v1607 + 1424) = 0;
          v1634 = 32;
          do
          {
            *v1632 = 0LL;
            v1634 -= 8;
            ++v1632;
            --v1633;
          }
          while ( v1633 );
          for ( ; v1634; --v1634 )
          {
            *(_BYTE *)v1632 = 0;
            v1632 = (_QWORD *)((char *)v1632 + 1);
          }
          v1635 = *(unsigned int *)(v1607 + 1356);
          v1636 = (_QWORD *)v1607;
          v1637 = (const char *)v1607;
          if ( v1607 < v1607 + v1635 )
          {
            do
            {
              _mm_prefetch(v1637, 0);
              v1637 += 64;
            }
            while ( (unsigned __int64)v1637 < v1607 + v1635 );
          }
          v1638 = *(_QWORD *)(v1607 + 1408);
          v1639 = *(_DWORD *)(v1607 + 1356);
          if ( (unsigned int)v1635 >= 8 )
          {
            v1640 = v1635 >> 3;
            do
            {
              v1639 -= 8;
              v1638 = __ROL8__(*v1636++ ^ v1638, *(_DWORD *)(v1607 + 1404));
              --v1640;
            }
            while ( v1640 );
            v1629 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
          }
          for ( ; v1639; --v1639 )
          {
            v1641 = *(unsigned __int8 *)v1636;
            v1636 = (_QWORD *)((char *)v1636 + 1);
            v1638 = __ROL8__(v1641 ^ v1638, *(_DWORD *)(v1607 + 1404));
          }
          *(_DWORD *)(v1607 + 1424) += v1635;
          v1642 = (char *)(v1 + 230);
          v1643 = 32;
          *(_QWORD *)(v1607 + 1312) = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
          *(_DWORD *)(v1607 + 1424) += *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
          v1644 = 4LL;
          do
          {
            v1643 -= 8;
            *v1623 = *(_QWORD *)v1642;
            v1642 += 8;
            ++v1623;
            --v1644;
          }
          while ( v1644 );
          for ( i35 = *v1; v1643; --v1643 )
          {
            v1646 = *v1642++;
            *(_BYTE *)v1623 = v1646;
            v1623 = (_QWORD *)((char *)v1623 + 1);
          }
          *(_QWORD *)(v1607 + 1312) = v1638;
          if ( (*(_DWORD *)(v1607 + 1672) & 0x40000000) != 0 )
            goto LABEL_2518;
          v1647 = (_QWORD *)v1607;
          v1648 = 0;
          do
          {
            *v1647 ^= v1629;
            ++v1648;
            ++v1647;
          }
          while ( (unsigned __int64)v1648 < 0x19 );
          if ( v1622 )
          {
            v1649 = &v1647[v1622 - 1];
            do
            {
              *v1649 ^= v1629;
              v1629 = __ROR8__(v1629, v1622);
              --v1649;
              --v1622;
            }
            while ( v1622 );
          }
          if ( *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x74) )
          {
            v1650 = __rdtsc();
            v1651 = (__ROR8__(v1650, 3) ^ v1650) * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x518) = *((_QWORD *)&v1651 + 1);
            if ( ((unsigned __int64)v1651 ^ *((_QWORD *)&v1651 + 1)) != 3
                                                                      * (((unsigned __int64)v1651 ^ *((_QWORD *)&v1651 + 1))
                                                                       / 3) )
              goto LABEL_2518;
          }
          else if ( v1621 )
          {
LABEL_2518:
            v1664 = *(_QWORD **)(i35 + 8);
            v1665 = *(unsigned int *)(i35 + 16);
            v1666 = (const char *)v1664;
            if ( v1664 < (_QWORD *)((char *)v1664 + v1665) )
            {
              do
              {
                _mm_prefetch(v1666, 0);
                v1666 += 64;
              }
              while ( v1666 < (const char *)v1664 + v1665 );
            }
            v93 = *(_QWORD *)(v85 + 1408);
            v1667 = *(_DWORD *)(i35 + 16);
            if ( (unsigned int)v1665 >= 8 )
            {
              v1668 = v1665 >> 3;
              do
              {
                v1667 -= 8;
                v93 = __ROL8__(*v1664++ ^ v93, *(_DWORD *)(v85 + 1404));
                --v1668;
              }
              while ( v1668 );
            }
            for ( ; v1667; --v1667 )
            {
              v1669 = *(unsigned __int8 *)v1664;
              v1664 = (_QWORD *)((char *)v1664 + 1);
              v93 = __ROL8__(v1669 ^ v93, *(_DWORD *)(v85 + 1404));
            }
            *(_DWORD *)(v85 + 1424) += v1665;
            for ( i36 = v93; ; v93 = (unsigned int)i36 ^ (unsigned int)v93 )
            {
              i36 >>= 31;
              if ( !i36 )
                break;
            }
            LODWORD(v93) = v93 & 0x7FFFFFFF;
            *(_DWORD *)(i35 + 20) = v93;
            goto LABEL_2529;
          }
          v1652 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x108) = 3;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x103) = 1;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x101) = 12;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x100) = 0;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x106) = 4;
          v1653 = 0;
          v1654 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
          v1655 = 0LL;
          v1656 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
          v1657 = (__int64 *)v1607;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x105) = 2;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x109) = 5;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10C) = 6;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x107) = 7;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10D) = 8;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10A) = 9;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10E) = 10;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x104) = 11;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10F) = 13;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x10B) = 14;
          *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x102) = 15;
          v1658 = __ROR8__(v1607, v1607);
          do
          {
            v1659 = *v1657;
            v1660 = 16LL;
            do
            {
              v1659 = __ROR8__(
                        *(unsigned __int8 *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                           + 0x100
                                           + (*(_BYTE *)v1657 & 0xF)) | v1659 & 0xFFFFFFFFFFFFFFF0uLL,
                        4);
              *v1657 = v1659;
              --v1660;
            }
            while ( v1660 );
            v1661 = v1659 - v1655;
            *v1657 = v1661;
            if ( v1654 )
              *v1657 = v1661 ^ v1658;
            else
              *v1657 = v1652 ^ __ROR8__(v1658 ^ _byteswap_uint64(v1656 ^ v1661), v1652);
            v1662 = v1653 * (200 - v1653);
            v1655 += v1607;
            ++v1653;
            v1663 = __ROL8__(__ROR8__(v1662, ~(unsigned __int8)*(_DWORD *)v1657) ^ v1658, *(_DWORD *)v1657);
            ++v1657;
            v1658 = v1607 + v1663;
          }
          while ( v1653 < 0x19 );
          v85 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
          i35 = *v1;
          goto LABEL_2518;
        }
      }
    }
  }
LABEL_2529:
  v1671 = *(_DWORD *)(v85 + 1672);
  *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C) = 0;
  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = 0LL;
  if ( (v1671 & 0x40000000) == 0 )
  {
    v1672 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0);
    if ( v85 != v1672 )
    {
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = *(_QWORD *)(v85 + 1328);
      if ( (v1671 & 2) != 0 )
        v1758 = *(_DWORD *)(v85 + 1356);
      else
        v1758 = *(_DWORD *)(v85 + 1392);
      v1759 = v1671 >> 9;
      v1760 = (v1671 >> 19) & 1;
      v1761 = (v1671 >> 8) & 1;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = *(_QWORD *)(v85 + 1008);
      v1762 = *(_QWORD *)(v85 + 1208);
      v1763 = (unsigned int)(v1758 - 200) >> 3;
      *(_DWORD *)(v85 + 196) = v1763;
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C) = v1759 & 1;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v1762;
      v1764 = 32;
      v1765 = __rdtsc();
      v1766 = (__ROR8__(v1765, 3) ^ v1765) * (unsigned __int128)0x7010008004002001uLL;
      v1767 = (_QWORD *)(v85 + 1280);
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x6C8) = *((_QWORD *)&v1766 + 1);
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = *(_QWORD *)(v85 + 1312);
      v1768 = *((_QWORD *)&v1766 + 1) ^ v1766;
      *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = *(_DWORD *)(v85 + 1424);
      v1769 = v1 + 242;
      v1770 = (char *)(v85 + 1280);
      v1771 = 4LL;
      do
      {
        v1764 -= 8;
        *v1769 = *(_QWORD *)v1770;
        v1770 += 8;
        ++v1769;
        --v1771;
      }
      while ( v1771 );
      for ( ; v1764; --v1764 )
      {
        v1772 = *v1770++;
        *(_BYTE *)v1769 = v1772;
        v1769 = (_QWORD *)((char *)v1769 + 1);
      }
      *(_QWORD *)(v85 + 1312) = 0LL;
      v1773 = 32;
      *(_DWORD *)(v85 + 1424) = 0;
      v1774 = (_QWORD *)(v85 + 1280);
      v1775 = 4LL;
      do
      {
        *v1774 = 0LL;
        v1773 -= 8;
        ++v1774;
        --v1775;
      }
      while ( v1775 );
      for ( ; v1773; --v1773 )
      {
        *(_BYTE *)v1774 = 0;
        v1774 = (_QWORD *)((char *)v1774 + 1);
      }
      v1776 = *(unsigned int *)(v85 + 1356);
      v1777 = (_QWORD *)v85;
      v1778 = (const char *)v85;
      if ( v85 < v85 + v1776 )
      {
        do
        {
          _mm_prefetch(v1778, 0);
          v1778 += 64;
        }
        while ( (unsigned __int64)v1778 < v85 + v1776 );
      }
      v1779 = *(_QWORD *)(v85 + 1408);
      v1780 = *(_DWORD *)(v85 + 1356);
      if ( (unsigned int)v1776 >= 8 )
      {
        v1781 = v1776 >> 3;
        do
        {
          v1780 -= 8;
          v1779 = __ROL8__(*v1777++ ^ v1779, *(_DWORD *)(v85 + 1404));
          --v1781;
        }
        while ( v1781 );
      }
      for ( ; v1780; --v1780 )
      {
        v1782 = *(unsigned __int8 *)v1777;
        v1777 = (_QWORD *)((char *)v1777 + 1);
        v1779 = __ROL8__(v1782 ^ v1779, *(_DWORD *)(v85 + 1404));
      }
      *(_DWORD *)(v85 + 1424) += v1776;
      v1783 = (char *)(v1 + 242);
      *(_QWORD *)(v85 + 1312) = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
      v1784 = 4LL;
      *(_DWORD *)(v85 + 1424) += *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
      v1785 = 32;
      do
      {
        v1785 -= 8;
        *v1767 = *(_QWORD *)v1783;
        v1783 += 8;
        ++v1767;
        --v1784;
      }
      while ( v1784 );
      v1786 = *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C);
      if ( v1785 )
      {
        do
        {
          v1787 = *v1783++;
          *(_BYTE *)v1767 = v1787;
          v1767 = (_QWORD *)((char *)v1767 + 1);
          --v1785;
        }
        while ( v1785 );
        LODWORD(v1784) = 0;
      }
      *(_QWORD *)(v85 + 1312) = v1779;
      if ( (*(_DWORD *)(v85 + 1672) & 0x40000000) != 0 )
        goto LABEL_2649;
      v1788 = (_QWORD *)v85;
      v1789 = v1784;
      do
      {
        *v1788 ^= v1768;
        ++v1789;
        ++v1788;
      }
      while ( (unsigned __int64)v1789 < 0x19 );
      if ( v1763 )
      {
        v1790 = &v1788[v1763 - 1];
        do
        {
          *v1790 ^= v1768;
          v1768 = __ROR8__(v1768, v1763);
          --v1790;
          --v1763;
        }
        while ( v1763 );
      }
      if ( v1760 )
      {
        v1791 = __rdtsc();
        v1792 = (__ROR8__(v1791, 3) ^ v1791) * (unsigned __int128)0x7010008004002001uLL;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x538) = *((_QWORD *)&v1792 + 1);
        if ( ((unsigned __int64)v1792 ^ *((_QWORD *)&v1792 + 1)) != 3
                                                                  * (((unsigned __int64)v1792 ^ *((_QWORD *)&v1792 + 1))
                                                                   / 3) )
          goto LABEL_2649;
      }
      else if ( v1761 )
      {
        goto LABEL_2649;
      }
      v1793 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
      v1794 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x118) = 3;
      v1795 = __ROR8__(v85, v85);
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x111) = 12;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x113) = 1;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x116) = 4;
      v1796 = (__int64 *)v85;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x110) = v1784;
      v1797 = 0LL;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x115) = 2;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x119) = 5;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x11C) = 6;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x117) = 7;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x11D) = 8;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x11A) = 9;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x11E) = 10;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x114) = 11;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x11F) = 13;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x11B) = 14;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x112) = 15;
      do
      {
        v1798 = *v1796;
        v1799 = 16LL;
        do
        {
          v1798 = __ROR8__(
                    *(unsigned __int8 *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                       + 0x110
                                       + (*(_BYTE *)v1796 & 0xF)) | v1798 & 0xFFFFFFFFFFFFFFF0uLL,
                    4);
          *v1796 = v1798;
          --v1799;
        }
        while ( v1799 );
        v1800 = v1798 - v1797;
        *v1796 = v1800;
        if ( v1786 )
          *v1796 = v1795 ^ v1800;
        else
          *v1796 = v1793 ^ __ROR8__(v1795 ^ _byteswap_uint64(v1800 ^ v1794), v1793);
        v1801 = (unsigned int)(v1784 * (200 - v1784));
        v1797 += v85;
        LODWORD(v1784) = v1784 + 1;
        v1802 = __ROL8__(__ROR8__(v1801, ~(unsigned __int8)*(_DWORD *)v1796) ^ v1795, *(_DWORD *)v1796);
        ++v1796;
        v1795 = v85 + v1802;
      }
      while ( (unsigned int)v1784 < 0x19 );
      goto LABEL_2649;
    }
    if ( (v1671 & 0x8000) == 0 && *(_DWORD *)(v85 + 1536) )
      goto LABEL_2582;
    v1673 = *(unsigned int *)(v1672 + 1356);
    v1674 = v1672 & -(__int64)((*(_DWORD *)(v1672 + 1672) & 0x20000000) != 0);
    if ( *(int *)(v1672 + 1580) <= 1 )
    {
      if ( !v1674 )
      {
        v1676 = ((__int64 (__fastcall *)(_QWORD, __int64))sub_140285AAC)(
                  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0),
                  v1673);
LABEL_2541:
        v85 = v1676;
        if ( v1676 )
        {
          v1677 = *(_DWORD *)(v1676 + 1672);
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = *(_QWORD *)(v1676 + 1328);
          if ( (v1677 & 2) != 0 )
            v1678 = *(_DWORD *)(v1676 + 1356);
          else
            v1678 = *(_DWORD *)(v1676 + 1392);
          v1679 = (v1677 >> 19) & 1;
          v1680 = (v1677 >> 9) & 1;
          v1681 = (v1677 >> 8) & 1;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = *(_QWORD *)(v1676 + 1008);
          v1682 = *(_QWORD *)(v1676 + 1208);
          v1683 = (unsigned int)(v1678 - 200) >> 3;
          *(_DWORD *)(v85 + 196) = v1683;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v1682;
          v1684 = (_QWORD *)(v85 + 1280);
          v1685 = v1 + 238;
          v1686 = __rdtsc();
          v1687 = (__ROR8__(v1686, 3) ^ v1686) * (unsigned __int128)0x7010008004002001uLL;
          v1688 = (char *)(v85 + 1280);
          v1689 = *((_QWORD *)&v1687 + 1);
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x640) = *((_QWORD *)&v1687 + 1);
          v1690 = 32;
          v1691 = v1687 ^ v1689;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = *(_QWORD *)(v85 + 1312);
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = *(_DWORD *)(v85 + 1424);
          v1692 = 4LL;
          do
          {
            v1690 -= 8;
            *v1685 = *(_QWORD *)v1688;
            v1688 += 8;
            ++v1685;
            --v1692;
          }
          while ( v1692 );
          for ( ; v1690; --v1690 )
          {
            v1693 = *v1688++;
            *(_BYTE *)v1685 = v1693;
            v1685 = (_QWORD *)((char *)v1685 + 1);
          }
          v1694 = 32;
          *(_QWORD *)(v85 + 1312) = 0LL;
          *(_DWORD *)(v85 + 1424) = 0;
          v1695 = (_QWORD *)(v85 + 1280);
          v1696 = 4LL;
          do
          {
            *v1695 = 0LL;
            v1694 -= 8;
            ++v1695;
            --v1696;
          }
          while ( v1696 );
          for ( ; v1694; --v1694 )
          {
            *(_BYTE *)v1695 = 0;
            v1695 = (_QWORD *)((char *)v1695 + 1);
          }
          v1697 = *(unsigned int *)(v85 + 1356);
          v1698 = (_QWORD *)v85;
          v1699 = (const char *)v85;
          if ( v85 < v85 + v1697 )
          {
            do
            {
              _mm_prefetch(v1699, 0);
              v1699 += 64;
            }
            while ( (unsigned __int64)v1699 < v85 + v1697 );
          }
          v1700 = *(_QWORD *)(v85 + 1408);
          v1701 = *(_DWORD *)(v85 + 1356);
          if ( (unsigned int)v1697 >= 8 )
          {
            v1702 = v1697 >> 3;
            do
            {
              v1701 -= 8;
              v1700 = __ROL8__(*v1698++ ^ v1700, *(_DWORD *)(v85 + 1404));
              --v1702;
            }
            while ( v1702 );
          }
          for ( ; v1701; --v1701 )
          {
            v1703 = *(unsigned __int8 *)v1698;
            v1698 = (_QWORD *)((char *)v1698 + 1);
            v1700 = __ROL8__(v1703 ^ v1700, *(_DWORD *)(v85 + 1404));
          }
          *(_DWORD *)(v85 + 1424) += v1697;
          v1704 = (char *)(v1 + 238);
          *(_QWORD *)(v85 + 1312) = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
          v1705 = 4LL;
          *(_DWORD *)(v85 + 1424) += *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
          v1706 = 32;
          do
          {
            v1706 -= 8;
            *v1684 = *(_QWORD *)v1704;
            v1704 += 8;
            ++v1684;
            --v1705;
          }
          while ( v1705 );
          for ( ; v1706; --v1706 )
          {
            v1707 = *v1704++;
            *(_BYTE *)v1684 = v1707;
            v1684 = (_QWORD *)((char *)v1684 + 1);
          }
          *(_QWORD *)(v85 + 1312) = v1700;
          if ( (*(_DWORD *)(v85 + 1672) & 0x40000000) != 0 )
            goto LABEL_2649;
          v1708 = (_QWORD *)v85;
          v1709 = 0;
          do
          {
            *v1708 ^= v1691;
            ++v1709;
            ++v1708;
          }
          while ( (unsigned __int64)v1709 < 0x19 );
          if ( v1683 )
          {
            v1710 = &v1708[v1683 - 1];
            do
            {
              *v1710 ^= v1691;
              v1691 = __ROR8__(v1691, v1683);
              --v1710;
              --v1683;
            }
            while ( v1683 );
          }
          if ( v1679 )
          {
            v1711 = __rdtsc();
            v1712 = (__ROR8__(v1711, 3) ^ v1711) * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x528) = *((_QWORD *)&v1712 + 1);
            if ( ((unsigned __int64)v1712 ^ *((_QWORD *)&v1712 + 1)) != 3
                                                                      * (((unsigned __int64)v1712 ^ *((_QWORD *)&v1712 + 1))
                                                                       / 3) )
              goto LABEL_2649;
LABEL_2574:
            v1713 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
            v1714 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
            *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xF8) = 3;
            *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xF3) = 1;
            *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xF6) = 4;
            v1715 = (__int64 *)v85;
            *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0) = 0;
            v1716 = 0;
            *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xF5) = 2;
            v1717 = 0LL;
            *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xF9) = 5;
            *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xF2) = 15;
            *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xFC) = 6;
            *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xF7) = 7;
            *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xFD) = 8;
            *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xFA) = 9;
            *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xFE) = 10;
            *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xF4) = 11;
            *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xF1) = 12;
            *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xFF) = 13;
            *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xFB) = 14;
            v1718 = __ROR8__(v85, v85);
            do
            {
              v1719 = *v1715;
              v1720 = 16LL;
              do
              {
                v1719 = __ROR8__(
                          *(unsigned __int8 *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                             + 0xF0
                                             + (*(_BYTE *)v1715 & 0xF)) | v1719 & 0xFFFFFFFFFFFFFFF0uLL,
                          4);
                *v1715 = v1719;
                --v1720;
              }
              while ( v1720 );
              v1721 = v1719 - v1717;
              *v1715 = v1721;
              if ( v1680 )
                *v1715 = v1721 ^ v1718;
              else
                *v1715 = v1713 ^ __ROR8__(v1718 ^ _byteswap_uint64(v1714 ^ v1721), v1713);
              v1722 = v1716 * (200 - v1716);
              v1717 += v85;
              ++v1716;
              v1723 = __ROL8__(__ROR8__(v1722, ~(unsigned __int8)*(_DWORD *)v1715) ^ v1718, *(_DWORD *)v1715);
              ++v1715;
              v1718 = v85 + v1723;
            }
            while ( v1716 < 0x19 );
            goto LABEL_2649;
          }
          if ( !v1681 )
            goto LABEL_2574;
LABEL_2649:
          *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C) = 1;
          v1803 = __rdtsc();
          v1804 = __ROR8__(v1803, 3) ^ v1803;
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x658) = (v1804
                                                                                  * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v1746 = (0x7010008004002001LL * v1804) ^ ((v1804 * (unsigned __int128)0x7010008004002001uLL) >> 64);
          goto LABEL_2654;
        }
LABEL_2582:
        v1724 = 32;
        *(_DWORD *)(v1672 + 196) = 1;
        v1725 = *(_QWORD *)(v1672 + 1312);
        v1726 = (_QWORD *)(v1672 + 1280);
        v1727 = *(_DWORD *)(v1672 + 1424);
        v1728 = v1 + 226;
        v85 = v1672;
        v1729 = 32;
        v1730 = (char *)(v1672 + 1280);
        v1731 = 4LL;
        do
        {
          v1729 -= 8;
          *v1728 = *(_QWORD *)v1730;
          v1730 += 8;
          ++v1728;
          --v1731;
        }
        while ( v1731 );
        for ( ; v1729; --v1729 )
        {
          v1732 = *v1730++;
          *(_BYTE *)v1728 = v1732;
          v1728 = (_QWORD *)((char *)v1728 + 1);
        }
        *(_QWORD *)(v1672 + 1312) = 0LL;
        v1733 = 32;
        *(_DWORD *)(v1672 + 1424) = 0;
        v1734 = (_QWORD *)(v1672 + 1280);
        v1735 = 4LL;
        do
        {
          *v1734 = 0LL;
          v1733 -= 8;
          ++v1734;
          --v1735;
        }
        while ( v1735 );
        for ( ; v1733; --v1733 )
        {
          *(_BYTE *)v1734 = 0;
          v1734 = (_QWORD *)((char *)v1734 + 1);
        }
        v1736 = *(unsigned int *)(v1672 + 1356);
        v1737 = (_QWORD *)v1672;
        v1738 = (const char *)v1672;
        if ( v1672 < v1672 + v1736 )
        {
          do
          {
            _mm_prefetch(v1738, 0);
            v1738 += 64;
          }
          while ( (unsigned __int64)v1738 < v1672 + v1736 );
        }
        v93 = *(_QWORD *)(v1672 + 1408);
        v1739 = *(_DWORD *)(v1672 + 1356);
        if ( (unsigned int)v1736 >= 8 )
        {
          v1740 = v1736 >> 3;
          do
          {
            v1739 -= 8;
            v93 = __ROL8__(*v1737++ ^ v93, *(_DWORD *)(v1672 + 1404));
            --v1740;
          }
          while ( v1740 );
        }
        for ( ; v1739; --v1739 )
        {
          v1741 = *(unsigned __int8 *)v1737;
          v1737 = (_QWORD *)((char *)v1737 + 1);
          v93 = __ROL8__(v1741 ^ v93, *(_DWORD *)(v1672 + 1404));
        }
        *(_DWORD *)(v1672 + 1424) += v1736;
        v1742 = (char *)(v1 + 226);
        *(_QWORD *)(v1672 + 1312) = v1725;
        v1743 = 4LL;
        *(_DWORD *)(v1672 + 1424) += v1727;
        do
        {
          v1724 -= 8;
          *v1726 = *(_QWORD *)v1742;
          v1742 += 8;
          ++v1726;
          --v1743;
        }
        while ( v1743 );
        for ( ; v1724; --v1724 )
        {
          v1744 = *v1742++;
          *(_BYTE *)v1726 = v1744;
          v1726 = (_QWORD *)((char *)v1726 + 1);
        }
        *(_QWORD *)(v1672 + 1312) = v93;
        goto LABEL_2602;
      }
      v1675 = *(unsigned int *)((v1672 & -(__int64)((*(_DWORD *)(v1672 + 1672) & 0x20000000) != 0)) + 0x55C);
    }
    else
    {
      if ( !v1674 )
      {
        v1676 = sub_140285DF0(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0), v1673);
        goto LABEL_2541;
      }
      v1675 = *(unsigned int *)((v1672 & -(__int64)((*(_DWORD *)(v1672 + 1672) & 0x20000000) != 0)) + 0x560);
    }
    v1676 = ((__int64 (__fastcall *)(_QWORD, __int64))(v1674 + v1675))(
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0),
              v1673);
    goto LABEL_2541;
  }
LABEL_2602:
  v1745 = *(_DWORD *)(v85 + 1672);
  v1746 = 0LL;
  *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = 0LL;
  if ( (v1745 & 0x40000000) == 0 )
  {
    if ( (v1745 & 0x100) == 0 )
    {
      v1747 = *(_QWORD *)(v85 + 1208);
      v1748 = *(_QWORD *)(v85 + 1008);
      v1749 = (__int64 *)v85;
      v1750 = (v1745 >> 9) & 1;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xE3) = 1;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xE0) = 0;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xE8) = 3;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xE5) = 2;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xE1) = 12;
      v1751 = 0;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xE6) = 4;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xE2) = 15;
      v1752 = 0LL;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xE9) = 5;
      v1753 = __ROR8__(v85, v85);
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xEC) = 6;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xE7) = 7;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xED) = 8;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xEA) = 9;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xEE) = 10;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xE4) = 11;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xEF) = 13;
      *(_BYTE *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xEB) = 14;
      do
      {
        v1754 = *v1749;
        v1755 = 16LL;
        do
        {
          v1754 = __ROR8__(
                    *(unsigned __int8 *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL)
                                       + 0xE0
                                       + (*(_BYTE *)v1749 & 0xF)) | v1754 & 0xFFFFFFFFFFFFFFF0uLL,
                    4);
          *v1749 = v1754;
          --v1755;
        }
        while ( v1755 );
        v1756 = v1754 - v1752;
        *v1749 = v1756;
        if ( v1750 )
          v1757 = v1753 ^ v1756;
        else
          v1757 = v1747 ^ __ROR8__(v1753 ^ _byteswap_uint64(v1748 ^ v1756), v1747);
        *v1749 = v1757;
        v1805 = v1757;
        v1752 += v85;
        v1806 = v1751 * (200 - v1751);
        ++v1751;
        v93 = __ROR8__(v1806, ~v1805);
        v1807 = __ROL8__(v93 ^ v1753, *(_DWORD *)v1749++);
        v1753 = v85 + v1807;
      }
      while ( v1751 < 0x19 );
      v1746 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
    }
    (*(void (__fastcall **)(__int64, unsigned __int64))(v85 + 552))(v85 + 1384, v93);
  }
LABEL_2654:
  i37 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0);
  v1809 = *(_DWORD **)(i37 + 1344);
  if ( (*(_DWORD *)(i37 + 1672) & 0x10000000) != 0 )
  {
    v1810 = __rdtsc();
    v1811 = __ROR8__(v1810, 3);
    v1812 = (v1811 ^ v1810) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x548) = *((_QWORD *)&v1812 + 1);
    v1809 = (_DWORD *)(*(_QWORD *)(i37 + 1224) + 10LL * (((unsigned __int8)(v1811 ^ v1810) ^ BYTE8(v1812)) & 0xF));
  }
  v1813 = 40;
  v1814 = (char *)(i37 + 1536);
  v1815 = (char *)(i37 + 1536);
  v1816 = v1 + 151;
  v1817 = 5LL;
  do
  {
    v1813 -= 8;
    *v1816 = *(_QWORD *)v1815;
    v1815 += 8;
    ++v1816;
    --v1817;
  }
  while ( v1817 );
  for ( ; v1813; --v1813 )
  {
    v1818 = *v1815++;
    *(_BYTE *)v1816 = v1818;
    v1816 = (_QWORD *)((char *)v1816 + 1);
  }
  v1819 = *(_DWORD *)(i37 + 1672);
  if ( (v1819 & 0x8000) != 0 || !*(_DWORD *)v1814 )
  {
    if ( (v1819 & 0x40000000) != 0 )
      goto LABEL_2751;
    v1820 = v85 ^ v1746;
    v1821 = (unsigned __int8)(*(_BYTE *)(i37 + 1576) - 1);
    v1822 = __rdtsc();
    v1823 = __ROR8__(v1822, 3) ^ v1822;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x698) = (v1823
                                                                            * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v1824 = v1821
          + (((v1823 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (0x7010008004002001LL * v1823))
          % (unsigned int)(63 - v1821);
    do
    {
      v1825 = __rdtsc();
      v1826 = (__ROR8__(v1825, 3) ^ v1825) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x558) = *((_QWORD *)&v1826 + 1);
      v1827 = v1821 + (*((_QWORD *)&v1826 + 1) ^ (unsigned __int64)v1826) % (unsigned int)(63 - v1821);
    }
    while ( v1827 == v1824 );
    v1828 = *(_QWORD *)(i37 + 1272);
    v1829 = *(_QWORD *)(i37 + 1264);
    v1830 = (v1820 | (1LL << v1824)) & ~(1LL << v1827);
    if ( (v1819 & 0x800000) != 0 )
    {
      v1831 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
      if ( v1831 )
      {
        v1832 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0);
        v1833 = *(_QWORD *)(v1832 + 800);
        *(_BYTE *)v1828 = 19;
        *(_BYTE *)(v1828 + 1) = 1;
        *(_WORD *)(v1828 + 2) = 0;
        *(_QWORD *)(v1828 + 24) = v1833;
        *(_QWORD *)(v1828 + 32) = v1831;
        *(_QWORD *)(v1828 + 56) = 0LL;
        *(_QWORD *)(v1828 + 16) = 0LL;
        *(_QWORD *)(v1828 + 40) = v1830;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v1832 + 784))(
          *(_QWORD *)(v1831 + 8),
          *(unsigned int *)(v1831 + 16),
          *(_QWORD *)v1831);
        v1834 = *(_QWORD *)v1831;
        v1835 = v1831 ^ __ROL8__(v1831, 17);
        v1836 = 4;
        *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x4E0) = ((unsigned __int64)v1835
                                                                                * (unsigned __int128)0x5851F42D4C957F2DuLL) >> 64;
        v1837 = (0x5851F42D4C957F2DLL * v1835) ^ (((unsigned __int64)v1835 * (unsigned __int128)0x5851F42D4C957F2DuLL) >> 64);
        v1838 = (_QWORD *)(v1831 + 24);
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
          *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x568) = ((unsigned __int64)v1841
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
        i37 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0);
        goto LABEL_2676;
      }
      i37 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0);
    }
    *(_BYTE *)v1828 = 19;
    *(_BYTE *)(v1828 + 1) = 1;
    *(_WORD *)(v1828 + 2) = 0;
    *(_QWORD *)(v1828 + 24) = v1809;
    *(_QWORD *)(v1828 + 32) = v1830;
    *(_QWORD *)(v1828 + 56) = 0LL;
    *(_QWORD *)(v1828 + 16) = 0LL;
LABEL_2676:
    *(_QWORD *)(v1828 + 64) = v1746;
    if ( (*(_DWORD *)(i37 + 1672) & 0x100) != 0 )
    {
      v1847 = (ULONG_PTR)(v1809 - 18);
      *((_QWORD *)v1809 - 1) = v1828;
      v1848 = 25LL;
      v1849 = __rdtsc();
      v1850 = (__ROR8__(v1849, 3) ^ v1849) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x6B8) = *((_QWORD *)&v1850 + 1);
      v1851 = v1850 ^ *((_QWORD *)&v1850 + 1);
      v1852 = v1809;
      do
      {
        *v1852++ ^= v1851;
        --v1848;
      }
      while ( v1848 );
      *v1809 = 1213280584;
      *(_QWORD *)(v1847 + 32) = v1851;
    }
    else
    {
      v1847 = v1828;
    }
    _InterlockedOr(v1915, 0);
    v1853 = *(_DWORD *)(i37 + 1440);
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
              v1876 = *(_QWORD *)(i37 + 1752);
              v1877 = *(_QWORD *)(i37 + 1768);
              v1878 = *(_QWORD *)(i37 + 1680);
              v1879 = *(_QWORD *)(i37 + 1760);
              *(_BYTE *)v1876 = 18;
              *(_BYTE *)(v1876 + 2) = 88;
              *(_BYTE *)(v1876 + 80) = 0;
              *(_QWORD *)(v1876 + 8) = v1878;
              *(_QWORD *)(v1876 + 32) = v1879;
              *(_QWORD *)(v1876 + 40) = 0LL;
              *(_QWORD *)(v1876 + 48) = v1877;
              *(_BYTE *)(v1876 + 81) = 0;
              *(_QWORD *)(v1876 + 56) = 0LL;
              *(_BYTE *)(v1876 + 82) = 0;
              if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(i37 + 624))(
                      *(_QWORD *)(i37 + 1752),
                      v1828,
                      0LL,
                      0LL) )
              {
                if ( !*(_DWORD *)v1814 )
                {
                  *(_QWORD *)(i37 + 1544) = i37 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(i37 + 1552) = 0LL;
                  *(_QWORD *)(i37 + 1560) = 260LL;
                  *(_QWORD *)(i37 + 1568) = v1878;
                  *(_DWORD *)v1814 = 1;
                }
                v1880 = 40;
                v1881 = v1 + 151;
                v1882 = 5LL;
                do
                {
                  v1880 -= 8;
                  *v1881 = *(_QWORD *)v1814;
                  v1814 += 8;
                  ++v1881;
                  --v1882;
                }
                while ( v1882 );
                for ( i37 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0); v1880; --v1880 )
                {
                  v1883 = *v1814++;
                  *(_BYTE *)v1881 = v1883;
                  v1881 = (_QWORD *)((char *)v1881 + 1);
                }
              }
            }
            else
            {
              v1857 = *(_QWORD *)(i37 + 1680);
              *(_QWORD *)(v1857 + 72) = v1847;
              _InterlockedOr(v1915, 0);
              v1858 = __rdtsc();
              v1859 = (__ROR8__(v1858, 3) ^ v1858) * (unsigned __int128)0x7010008004002001uLL;
              *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x580) = *((_QWORD *)&v1859 + 1);
              *(_DWORD *)v1857 = (__int64)(((unsigned __int64)v1859 ^ *((_QWORD *)&v1859 + 1)) % 0x5F5E100 + 1200000000)
                               / 10000000;
            }
          }
          else
          {
            v1884 = *(_QWORD *)(i37 + 1680);
            v1885 = *(_QWORD *)(v1884 + 1544);
            if ( v1885 )
            {
              if ( !*(_DWORD *)v1814 )
              {
                *(_QWORD *)(i37 + 1544) = i37 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(i37 + 1552) = 0LL;
                *(_QWORD *)(i37 + 1560) = 260LL;
                *(_QWORD *)(i37 + 1568) = v1885;
                *(_DWORD *)v1814 = 1;
              }
              v1886 = 40;
              v1887 = v1 + 151;
              v1888 = 5LL;
              do
              {
                v1886 -= 8;
                *v1887 = *(_QWORD *)v1814;
                v1814 += 8;
                ++v1887;
                --v1888;
              }
              while ( v1888 );
              for ( i37 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0); v1886; --v1886 )
              {
                v1889 = *v1814++;
                *(_BYTE *)v1887 = v1889;
                v1887 = (_QWORD *)((char *)v1887 + 1);
              }
            }
            _InterlockedOr(v1915, 0);
            *(_QWORD *)(v1884 + 1544) = v1828;
          }
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(i37 + 1320) + 1584LL) = v1847;
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(i37 + 1320) + 1632LL) = v1847;
      }
    }
    else
    {
      v1890 = __rdtsc();
      v1891 = (__ROR8__(v1890, 3) ^ v1890) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x5E0) = *((_QWORD *)&v1891 + 1);
      v1892 = -1200000000LL - ((unsigned __int64)v1891 ^ *((_QWORD *)&v1891 + 1)) % 0x5F5E100;
      *(_QWORD *)&v1891 = __rdtsc();
      BugCheckParameter4 = v1847;
      v1893 = (__ROR8__(v1891, 3) ^ (unsigned __int64)v1891) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x598) = *((_QWORD *)&v1893 + 1);
      (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD, unsigned __int64, ULONG_PTR))(i37 + 416))(
        v1829,
        v1892,
        0LL,
        ((unsigned __int64)v1893 ^ *((_QWORD *)&v1893 + 1)) % 0x2710,
        BugCheckParameter4);
    }
  }
  if ( *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x4B8) && (*(_DWORD *)(i37 + 1672) & 0x8000) == 0 )
  {
    v1860 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x4D0);
    v1861 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x4D8);
    v1862 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x4C8);
    v1863 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x4C0);
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v1860;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v1861;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1862;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v1863;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x130) = i37;
    if ( KeGetCurrentIrql() < 2u )
      __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v1865 = KeGetCurrentThread();
    *v1 = v1865;
    DpcStack = (unsigned __int64)CurrentPrcb->DpcStack;
    LOBYTE(CurrentPrcb) = CurrentPrcb->DpcRoutineActive;
    *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = DpcStack;
    if ( !(_BYTE)CurrentPrcb || (unsigned __int64)(v1 + 38) > DpcStack || (unsigned __int64)(v1 + 38) < DpcStack - 24576 )
    {
      DpcStack = (unsigned __int64)v1865->InitialStack;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = DpcStack;
    }
    v1867 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x130);
    if ( (*(_DWORD *)(v1867 + 1672) & 0x8000000) == 0 )
    {
      v1868 = __readcr0();
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v1868;
      __writecr0(v1868 & 0xFFFFFFFFFFFEFFFFuLL);
      v1869 = v1867 + 1880;
      v1870 = v1867 + 1880 + 16LL * *(unsigned int *)(v1867 + 1872);
      v1871 = (__int64 **)v1870;
      *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v1870;
      if ( *(_DWORD *)(v1867 + 1876) )
      {
        v1872 = 0;
        do
        {
          v1873 = *v1871;
          v1874 = (__int64)v1871[1];
          *v1873 = v1874;
          if ( MiPteInShadowRange((__int64)v1873) )
            MiWritePteShadow((__int64)v1873, v1874);
          v1875 = __readcr4();
          if ( (v1875 & 0x20080) != 0 )
          {
            __writecr4(v1875 ^ 0x80);
            __writecr4(v1875);
          }
          else
          {
            v1894 = __readcr3();
            __writecr3(v1894);
          }
          v1871 += 2;
          ++v1872;
        }
        while ( v1872 < *(_DWORD *)(v1867 + 1876) );
        v1870 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
        v1869 = v1867 + 1880;
        DpcStack = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
        v1868 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
        v1862 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
      }
      if ( v1869 < v1870 )
      {
        do
        {
          v1895 = *(unsigned int *)(v1869 + 8);
          v1896 = v1871;
          v1897 = *(char **)v1869;
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
          v1871 = (__int64 **)((char *)v1871 + v1895);
          v1869 += 16LL;
        }
        while ( v1869 < v1870 );
        v1862 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 8);
      }
      **(_BYTE **)(v1867 + 480) = -61;
      __writecr0(v1868);
      v1867 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x130);
      v1865 = (struct _KTHREAD *)*v1;
      v1860 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
      v1861 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
      v1863 = *(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
    }
    if ( *(_DWORD *)(v1867 + 1584) && KeGetCurrentIrql() < 2u )
      __writecr8(2uLL);
    v1901 = *(_DWORD *)(v1867 + 1584);
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
                _interlockedbittestandset(&KeGetCurrentThread()->Header.Lock, (*(_DWORD *)(v1867 + 1672) >> 10) & 0x1F);
              else
                _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(v1867 + 1200) + 832LL), 1uLL);
            }
            else
            {
              _interlockedbittestandset(
                &KeGetCurrentThread()->ApcState.Process->Header.Lock,
                (*(_DWORD *)(v1867 + 1672) >> 10) & 0x1F);
            }
            goto LABEL_2767;
          }
          v1906 = *(volatile signed __int32 **)(v1867 + 1120);
        }
        else
        {
          v1906 = *(volatile signed __int32 **)(v1867 + 1112);
        }
      }
      else
      {
        v1906 = *(volatile signed __int32 **)(v1867 + 1096);
      }
      _interlockedbittestandset64(v1906, 0LL);
    }
LABEL_2767:
    v1865[1].InitialStack = 0LL;
    v1865[1].ApcState.ApcListHead[1].Flink = 0LL;
    SdbpCheckDll(
      265,
      v1863,
      v1862,
      v1861,
      v1860,
      *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x130) + 328LL),
      DpcStack);
    JUMPOUT(0x140283BBALL);
  }
LABEL_2751:
  if ( (*(_DWORD *)(i37 + 1672) & 0x40000000) == 0
    && *(_DWORD *)(((unsigned __int64)v1919 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C) )
  {
    if ( *(_DWORD *)(i37 + 1580) == 1 )
    {
      *(_QWORD *)(i37 + 1328) -= 8LL;
      *(_DWORD *)(i37 + 1336) = **(_DWORD **)(i37 + 1328);
      v1907 = *(_QWORD *)(i37 + 496);
      goto LABEL_2757;
    }
    if ( *(_DWORD *)(i37 + 1580) == 3 )
    {
      v1907 = *(_QWORD *)(i37 + 792);
LABEL_2757:
      *(_QWORD *)(i37 + 240) = v1907;
    }
  }
  return i37;
}
