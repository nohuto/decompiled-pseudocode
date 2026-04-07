/*
 * XREFs of ?SLGetHelper@@YA_NPEBG@Z @ 0x180048D64
 * Callers:
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x18003EF24 (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 * Callees:
 *     StringCchLengthW @ 0x18003BE44 (StringCchLengthW.c)
 *     RtlULongLongAdd @ 0x180048D30 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x180048D4C (RtlUIntAdd.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x18004B678 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?Attach@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXPEAE@Z @ 0x18004B6A0 (-Attach@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXPEAE@Z.c)
 *     ?IsNull@?$SP@EV?$SP_HLOCAL@E@@@@SA_NPEAE@Z @ 0x18004B6CC (-IsNull@-$SP@EV-$SP_HLOCAL@E@@@@SA_NPEAE@Z.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x18004B938 (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18004FE38 (-MemoryFree@@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x18004FF5A (memcpy_0.c)
 */

char __fastcall SLGetHelper(STRSAFE_PCNZWCH psz)
{
  char v2; // r14
  HLOCAL v3; // rax
  void *v4; // r15
  void *v5; // rsi
  HANDLE ProcessHeap; // rax
  void *v7; // rax
  unsigned __int8 *v8; // r10
  void *v9; // r12
  int v10; // edi
  size_t v11; // rsi
  HANDLE v12; // rax
  void *v13; // rax
  void *v14; // r13
  unsigned int v15; // r15d
  int v16; // eax
  int v17; // r11d
  int v18; // eax
  unsigned int v19; // r9d
  int v20; // eax
  int v21; // r11d
  int v22; // eax
  unsigned int v23; // r9d
  int v24; // eax
  int v25; // r11d
  int v26; // eax
  unsigned int v27; // r9d
  int v28; // eax
  int v29; // r11d
  int v30; // eax
  size_t v31; // rdx
  HRESULT v32; // eax
  int v33; // eax
  int v34; // r11d
  int v35; // eax
  unsigned int v36; // r9d
  int v37; // eax
  int v38; // r11d
  int v39; // eax
  unsigned int v40; // r9d
  int v41; // eax
  int v42; // r11d
  int v43; // eax
  unsigned int v44; // ebx
  HANDLE v45; // rax
  LPVOID v46; // rax
  size_t v47; // rdx
  _DWORD *v48; // r9
  _DWORD *v49; // rcx
  int *v50; // r9
  int v51; // eax
  unsigned __int64 v52; // r9
  unsigned int v53; // r10d
  int v54; // r11d
  _DWORD *v55; // r9
  void *v56; // rcx
  int *v57; // r9
  int v58; // eax
  __int64 v59; // rcx
  unsigned __int64 v60; // r9
  unsigned int v61; // r10d
  int v62; // r11d
  unsigned int *v63; // r9
  void *v64; // rcx
  __int64 v65; // r13
  int *v66; // r9
  int v67; // eax
  unsigned __int64 v68; // r9
  unsigned int v69; // r10d
  int v70; // r11d
  _DWORD *v71; // r9
  _QWORD *v72; // rax
  STRSAFE_PCNZWCH v73; // rsi
  HRESULT v74; // eax
  int v75; // ebx
  int *v76; // r9
  int v77; // eax
  unsigned __int64 v78; // r9
  unsigned int v79; // r10d
  _DWORD *v80; // r9
  __int64 v81; // r11
  void *v82; // rcx
  int *v83; // r9
  int v84; // eax
  unsigned __int64 v85; // r9
  unsigned int v86; // r10d
  int v87; // r11d
  _DWORD *v88; // r9
  _DWORD *v89; // rcx
  int *v90; // r9
  int v91; // eax
  unsigned __int64 v92; // r9
  unsigned int v93; // r10d
  int v94; // r11d
  _DWORD *v95; // r9
  _DWORD *v96; // rcx
  int v97; // eax
  unsigned int v98; // ecx
  int v99; // r10d
  int v100; // eax
  unsigned int v101; // r10d
  int v102; // r9d
  int v103; // eax
  int v104; // eax
  int v105; // r9d
  int v106; // eax
  int v107; // r9d
  int v108; // eax
  int v109; // r9d
  int v110; // eax
  int v111; // r9d
  int v112; // eax
  unsigned __int8 *v113; // r13
  unsigned int v114; // r15d
  int v115; // r12d
  int v116; // edi
  unsigned int v117; // eax
  unsigned int v118; // ebx
  HANDLE v119; // rax
  char *v120; // rax
  char *v121; // rbx
  __int64 v122; // rdx
  size_t v123; // rcx
  _QWORD *v124; // rsi
  unsigned __int64 v125; // rdi
  _BYTE *v126; // rax
  _BYTE *v127; // r12
  unsigned __int8 v128; // al
  unsigned __int64 i; // rcx
  int v130; // ebx
  unsigned __int8 *v131; // r10
  _BYTE *v132; // r11
  unsigned int v133; // r9d
  int v134; // r13d
  int v135; // r8d
  unsigned __int64 v136; // r15
  int v137; // esi
  _BYTE *v138; // r12
  unsigned __int8 *v139; // rdi
  int v140; // r11d
  int v141; // r10d
  int v142; // ecx
  int v143; // r11d
  int v144; // r10d
  int v145; // ebx
  int v146; // r9d
  int v147; // ebx
  int v148; // r9d
  int v149; // ebx
  int v150; // r8d
  int v151; // ebx
  int v152; // r8d
  int v153; // ebx
  unsigned int v154; // r9d
  int v155; // ebx
  int v156; // r9d
  unsigned int v157; // ebx
  unsigned int v158; // r9d
  int v159; // ebx
  int v160; // r9d
  int v161; // ebx
  int v162; // r9d
  int v163; // ebx
  int v164; // r9d
  int v165; // ebx
  int v166; // r9d
  unsigned int v167; // ebx
  int v168; // r9d
  unsigned int v169; // edi
  HANDLE v170; // rax
  _DWORD *v171; // rax
  _DWORD *v172; // rbx
  HANDLE v173; // rax
  void *v174; // rax
  HANDLE v175; // rax
  _OWORD *v176; // rax
  HANDLE v177; // rax
  _QWORD *v178; // rax
  int v179; // edi
  void *v180; // rbx
  HANDLE v181; // rax
  const void **v182; // rsi
  int v183; // edi
  unsigned int v184; // eax
  unsigned int v185; // ebx
  HANDLE v186; // rax
  _DWORD *v187; // rax
  void *v188; // rbx
  int v189; // eax
  void *v190; // rcx
  int v191; // eax
  void *v192; // rcx
  int v193; // eax
  int v194; // ebx
  int v195; // eax
  int v196; // ecx
  unsigned int v197; // eax
  int v198; // eax
  unsigned int v199; // r9d
  unsigned int *v200; // rcx
  unsigned int v201; // esi
  int v202; // r10d
  int v203; // r10d
  unsigned __int8 *v204; // rax
  unsigned int *v205; // rcx
  unsigned int v206; // esi
  int v207; // r9d
  int v208; // r10d
  int v209; // r10d
  unsigned __int8 *v210; // rax
  bool v211; // zf
  int v212; // r11d
  unsigned int v213; // eax
  unsigned int v214; // ebx
  int v215; // edi
  HANDLE v216; // rax
  _DWORD *v217; // rax
  _DWORD *v218; // r15
  FARPROC ProcAddress; // rax
  int v220; // eax
  unsigned int v221; // r9d
  _QWORD *v222; // rsi
  unsigned int v223; // r13d
  int v224; // edx
  int v225; // edi
  int v226; // r9d
  int v227; // edx
  int v228; // r9d
  unsigned int v229; // r11d
  SIZE_T v230; // r12
  int v231; // edx
  int v232; // r9d
  int v233; // edx
  int v234; // r9d
  unsigned int v235; // r11d
  SIZE_T v236; // r15
  int v237; // edx
  int v238; // r9d
  int v239; // r9d
  HANDLE v240; // rax
  _QWORD *v241; // rax
  _QWORD *v242; // rbx
  HANDLE v243; // rax
  void *v244; // rax
  void *v245; // r13
  HANDLE v246; // rax
  void *v247; // rax
  void *v248; // r12
  HANDLE v249; // rax
  void *v250; // rax
  wchar_t *v251; // rbx
  int v252; // edi
  unsigned __int8 *v253; // r12
  unsigned __int64 v254; // rsi
  _BYTE *v255; // rax
  _BYTE *v256; // r15
  unsigned __int8 v257; // al
  unsigned __int8 *v258; // r9
  _BYTE *v259; // r10
  int v260; // r8d
  int v261; // r13d
  int v262; // r11d
  unsigned int v263; // ebx
  unsigned __int64 v264; // r12
  int v265; // eax
  _BYTE *v266; // r15
  unsigned __int8 *v267; // rsi
  int v268; // r10d
  int v269; // r9d
  int v270; // ecx
  int v271; // r10d
  int v272; // ebx
  int v273; // r9d
  int v274; // r11d
  int v275; // ebx
  unsigned int v276; // r11d
  int v277; // ebx
  int v278; // r11d
  int v279; // ebx
  int v280; // r11d
  int v281; // ebx
  int v282; // r11d
  unsigned int v283; // ebx
  int v284; // r11d
  int v285; // ebx
  int v286; // r11d
  int v287; // ebx
  int v288; // r11d
  unsigned int v289; // ebx
  int v290; // r11d
  int v291; // ebx
  int v292; // r11d
  unsigned int v293; // ebx
  int v294; // r11d
  unsigned int v295; // ebx
  int v296; // r11d
  int v297; // edx
  unsigned __int64 j; // rcx
  int v299; // esi
  int v300; // edx
  int v301; // edi
  __int64 v302; // rdx
  unsigned int v303; // r11d
  SIZE_T v304; // r15
  int v305; // edx
  __int64 v306; // r9
  void *v307; // r10
  const void *v308; // rbx
  void *v309; // r12
  unsigned int v310; // r13d
  size_t v311; // r9
  SIZE_T v312; // r11
  int *v313; // r9
  SIZE_T v314; // r11
  int v315; // eax
  unsigned __int64 v316; // r9
  unsigned int v317; // r10d
  HANDLE v318; // rax
  void *v319; // rbx
  HANDLE v320; // rax
  _QWORD *v321; // rsi
  void *v322; // rbx
  HANDLE v323; // rax
  void *v324; // rbx
  HANDLE v325; // rax
  void *v326; // rbx
  HANDLE v327; // rax
  HANDLE v328; // rax
  void *v329; // rbx
  HANDLE v330; // rax
  void *v331; // rbx
  HANDLE v332; // rax
  _QWORD *v333; // rsi
  void *v334; // rbx
  HANDLE v335; // rax
  void *v336; // rbx
  HANDLE v337; // rax
  void *v338; // rbx
  HANDLE v339; // rax
  HANDLE v340; // rax
  wchar_t *v341; // rbx
  HANDLE v342; // rax
  int v343; // r9d
  int *v344; // rax
  void *v345; // rcx
  unsigned int v346; // r10d
  int v347; // eax
  int v348; // r9d
  int v349; // r9d
  _QWORD *v350; // rax
  void *v351; // rcx
  unsigned int v352; // r10d
  int v353; // eax
  int v354; // r9d
  int v355; // r9d
  _DWORD *v356; // rax
  void *v357; // rcx
  unsigned int v358; // r10d
  int v359; // r9d
  int v360; // r10d
  void *v361; // r11
  unsigned int *v362; // rcx
  unsigned int v363; // ebx
  int v364; // r9d
  int v365; // r9d
  unsigned int *v366; // rax
  unsigned int v367; // ebx
  unsigned int *v368; // rcx
  unsigned int v369; // esi
  unsigned int v370; // r10d
  const void *v371; // r11
  int v372; // r9d
  int v373; // r9d
  _DWORD *v374; // rax
  int v375; // ecx
  void *v376; // rbx
  HANDLE v377; // rax
  void *v378; // rbx
  HANDLE v379; // rax
  HANDLE v380; // rax
  HANDLE v381; // rax
  int v382; // ebx
  int *v383; // rcx
  int v385; // eax
  int v386; // eax
  int v387; // eax
  int v388; // eax
  int v389; // edx
  int v390; // r10d
  int v391; // eax
  int v392; // edx
  int v393; // eax
  int v394; // edx
  HANDLE v395; // rax
  int v396; // r15d
  int v397; // ebx
  char v398; // r9
  int v399; // edx
  int v400; // ecx
  unsigned int v401; // ebx
  int v402; // edx
  void *v403; // r15
  HANDLE v404; // rax
  void *v405; // r15
  HANDLE v406; // rax
  void *v407; // r15
  HANDLE v408; // rax
  HANDLE v409; // rax
  void *v410; // rbx
  HANDLE v411; // rax
  void *v412; // rbx
  HANDLE v413; // rax
  void *v414; // rbx
  HANDLE v415; // rax
  HANDLE v416; // rax
  HANDLE v417; // rax
  signed int LastError; // eax
  void *v419; // r15
  HANDLE v420; // rax
  void *v421; // r15
  HANDLE v422; // rax
  void *v423; // r15
  HANDLE v424; // rax
  HANDLE v425; // rax
  void *v426; // rbx
  HANDLE v427; // rax
  void *v428; // rbx
  HANDLE v429; // rax
  void *v430; // rbx
  HANDLE v431; // rax
  HANDLE v432; // rax
  int v433; // r12d
  int v434; // ebx
  char v435; // r11
  int v436; // edx
  unsigned int v437; // r11d
  int v438; // ecx
  int v439; // edx
  HANDLE v440; // rax
  void *v441; // r15
  void *v442; // rsi
  HANDLE v443; // rax
  void *v444; // rax
  void *v445; // r12
  size_t v446; // rsi
  HANDLE v447; // rax
  void *v448; // rax
  void *v449; // r13
  unsigned int v450; // r15d
  unsigned int v451; // r11d
  int v452; // eax
  unsigned int v453; // r11d
  int v454; // r9d
  int v455; // eax
  unsigned int v456; // r11d
  int v457; // r9d
  int v458; // eax
  int v459; // r9d
  unsigned int v460; // ebx
  HANDLE v461; // rax
  LPVOID v462; // rax
  unsigned int v463; // r11d
  int v464; // eax
  unsigned int *v465; // r9
  _DWORD *v466; // rdx
  int *v467; // r9
  unsigned __int64 v468; // r9
  int v469; // r10d
  int v470; // eax
  _DWORD *v471; // r9
  int v472; // ebx
  void *v473; // rcx
  unsigned int v474; // r11d
  int *v475; // r9
  unsigned __int64 v476; // r9
  int v477; // r10d
  int v478; // eax
  unsigned int *v479; // r9
  int v480; // ebx
  void *v481; // rcx
  int *v482; // r9
  unsigned __int64 v483; // r9
  int v484; // r10d
  int v485; // eax
  _DWORD *v486; // r9
  _QWORD *v487; // rcx
  unsigned int v488; // ecx
  unsigned int v489; // r9d
  size_t v490; // rbx
  unsigned int v491; // r12d
  _DWORD *v492; // r13
  int v493; // esi
  unsigned int v494; // eax
  unsigned int v495; // ebx
  HANDLE v496; // rax
  char *v497; // rax
  char *v498; // rbx
  __int64 v499; // rdx
  void *v500; // rcx
  HANDLE v501; // rax
  int v502; // esi
  _QWORD *v503; // r15
  int v504; // esi
  size_t v505; // rsi
  void *v506; // rax
  _BYTE *v507; // r12
  unsigned __int8 v508; // al
  unsigned __int64 v509; // rcx
  unsigned __int8 *v510; // r11
  int v511; // ebx
  _BYTE *v512; // r10
  unsigned int v513; // r9d
  int v514; // r8d
  int v515; // r13d
  int v516; // ebx
  char v517; // r9
  int v518; // edx
  int v519; // ecx
  unsigned int v520; // ebx
  int v521; // ecx
  int v522; // edx
  size_t v523; // r13
  int v524; // r15d
  _BYTE *v525; // rsi
  int v526; // r12d
  unsigned __int8 *v527; // rax
  int v528; // r11d
  int v529; // ecx
  int v530; // r10d
  int v531; // r10d
  int v532; // ebx
  int v533; // r9d
  int v534; // ebx
  int v535; // r9d
  int v536; // ebx
  int v537; // r8d
  int v538; // ebx
  int v539; // r8d
  int v540; // ebx
  unsigned int v541; // r9d
  int v542; // ebx
  int v543; // r9d
  unsigned int v544; // ebx
  unsigned int v545; // r9d
  int v546; // ebx
  int v547; // r9d
  int v548; // ebx
  int v549; // r9d
  int v550; // ebx
  int v551; // r9d
  int v552; // ebx
  int v553; // r9d
  unsigned int v554; // ebx
  int v555; // r9d
  unsigned int v556; // esi
  HANDLE v557; // rax
  _DWORD *v558; // rax
  _DWORD *v559; // rbx
  HANDLE v560; // rax
  void *v561; // rax
  HANDLE v562; // rax
  _OWORD *v563; // rax
  HANDLE v564; // rax
  _QWORD *v565; // rax
  void *v566; // r12
  HANDLE v567; // rax
  void *v568; // r12
  HANDLE v569; // rax
  void *v570; // r12
  HANDLE v571; // rax
  HANDLE v572; // rax
  void *v573; // rbx
  HANDLE v574; // rax
  void *v575; // rbx
  HANDLE v576; // rax
  void *v577; // rbx
  HANDLE v578; // rax
  void *v579; // rbx
  HANDLE v580; // rax
  HANDLE v581; // rax
  const void **v582; // r15
  int v583; // esi
  unsigned int v584; // eax
  unsigned int v585; // ebx
  HANDLE v586; // rax
  wchar_t *v587; // rax
  wchar_t *v588; // rbx
  int v589; // eax
  void *v590; // rcx
  int v591; // eax
  void *v592; // rcx
  int v593; // eax
  HANDLE v594; // rax
  int v595; // ebx
  int v596; // eax
  int v597; // ecx
  unsigned int v598; // eax
  int v599; // eax
  unsigned int v600; // r9d
  unsigned int *v601; // rcx
  unsigned int v602; // r15d
  int v603; // r10d
  int v604; // r10d
  unsigned __int8 *v605; // rax
  unsigned int v606; // ebx
  int v607; // esi
  HANDLE v608; // rax
  _DWORD *v609; // rax
  unsigned int *v610; // rcx
  unsigned int v611; // r15d
  int v612; // r9d
  int v613; // r10d
  int v614; // r10d
  unsigned __int8 *v615; // rax
  int v616; // r11d
  unsigned int v617; // eax
  FARPROC v618; // rax
  int v619; // eax
  unsigned int v620; // r9d
  signed int v621; // eax
  _QWORD *v622; // r15
  int v623; // esi
  int v624; // edx
  int v625; // r9d
  size_t v626; // r10
  int v627; // edx
  int v628; // r9d
  SIZE_T v629; // r13
  int v630; // edx
  int v631; // r9d
  int v632; // edx
  int v633; // r9d
  SIZE_T v634; // r12
  int v635; // edx
  int v636; // r9d
  int v637; // r9d
  int v638; // r10d
  HANDLE v639; // rax
  _QWORD *v640; // rax
  _QWORD *v641; // rbx
  HANDLE v642; // rax
  void *v643; // rax
  HANDLE v644; // rax
  void *v645; // rax
  void *v646; // r13
  HANDLE v647; // rax
  void *v648; // rax
  void *v649; // r12
  HANDLE v650; // rax
  void *v651; // r12
  HANDLE v652; // rax
  void *v653; // r12
  HANDLE v654; // rax
  HANDLE v655; // rax
  void *v656; // rbx
  HANDLE v657; // rax
  void *v658; // rbx
  HANDLE v659; // rax
  void *v660; // rbx
  HANDLE v661; // rax
  HANDLE v662; // rax
  void *v663; // rbx
  int v664; // esi
  unsigned __int8 *v665; // r15
  __int64 v666; // r13
  size_t v667; // r13
  _BYTE *v668; // rax
  _BYTE *v669; // r12
  unsigned __int8 v670; // al
  unsigned __int8 *v671; // r10
  _BYTE *v672; // r9
  int v673; // r8d
  int v674; // r15d
  int v675; // ebx
  int v676; // r11d
  char v677; // di
  int v678; // edx
  unsigned int v679; // edx
  unsigned int v680; // r15d
  int v681; // ecx
  int v682; // r8d
  int v683; // edx
  size_t v684; // rcx
  int v685; // eax
  _BYTE *v686; // r13
  int v687; // edi
  unsigned __int8 *v688; // rsi
  size_t v689; // r12
  int v690; // ebx
  int v691; // r11d
  int v692; // ecx
  int v693; // ebx
  int v694; // r15d
  int v695; // r11d
  int v696; // r9d
  int v697; // r15d
  unsigned int v698; // r9d
  int v699; // r15d
  int v700; // r9d
  int v701; // r15d
  int v702; // r9d
  int v703; // r15d
  int v704; // r9d
  unsigned int v705; // r15d
  int v706; // r9d
  int v707; // r15d
  int v708; // r10d
  int v709; // r15d
  int v710; // r10d
  unsigned int v711; // r15d
  int v712; // r10d
  int v713; // r15d
  int v714; // r10d
  unsigned int v715; // r15d
  int v716; // r10d
  unsigned int v717; // r15d
  int v718; // r10d
  int v719; // edx
  size_t k; // rcx
  int v721; // r15d
  HANDLE v722; // rax
  int v723; // edx
  int v724; // esi
  __int64 v725; // rdx
  unsigned int v726; // r11d
  SIZE_T v727; // r15
  int v728; // edx
  __int64 v729; // r9
  void *v730; // r10
  void *v731; // rbx
  void *v732; // r13
  SIZE_T v733; // r9
  SIZE_T v734; // r11
  int *v735; // r9
  SIZE_T v736; // r11
  int v737; // eax
  unsigned __int64 v738; // r9
  unsigned int v739; // r10d
  HANDLE v740; // rax
  void *v741; // r15
  HANDLE v742; // rax
  _QWORD *v743; // r15
  void *v744; // rbx
  HANDLE v745; // rax
  void *v746; // rbx
  HANDLE v747; // rax
  void *v748; // rbx
  HANDLE v749; // rax
  HANDLE v750; // rax
  wchar_t *v751; // rbx
  HANDLE v752; // rax
  void *v753; // rbx
  HANDLE v754; // rax
  _QWORD *v755; // r15
  void *v756; // rbx
  HANDLE v757; // rax
  void *v758; // rbx
  HANDLE v759; // rax
  void *v760; // rbx
  HANDLE v761; // rax
  HANDLE v762; // rax
  void *v763; // rbx
  HANDLE v764; // rax
  unsigned int *v765; // rbx
  unsigned int v766; // r9d
  int v767; // r10d
  __int64 v768; // r11
  int *v769; // rax
  int v770; // r9d
  int v771; // r9d
  _QWORD *v772; // rax
  void *v773; // rbx
  HANDLE v774; // rax
  void *v775; // rbx
  HANDLE v776; // rax
  HANDLE v777; // rax
  HANDLE v778; // rax
  SIZE_T dwBytes; // [rsp+28h] [rbp-E0h] BYREF
  void *m; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE *v781; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID v782; // [rsp+40h] [rbp-C8h]
  LPVOID v783; // [rsp+48h] [rbp-C0h]
  __int64 v784; // [rsp+50h] [rbp-B8h]
  size_t v785; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v786; // [rsp+60h] [rbp-A8h] BYREF
  void *v787; // [rsp+70h] [rbp-98h] BYREF
  void *v788; // [rsp+78h] [rbp-90h] BYREF
  int v789; // [rsp+80h] [rbp-88h]
  int v790; // [rsp+84h] [rbp-84h]
  int v791; // [rsp+88h] [rbp-80h]
  int v792; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v793; // [rsp+90h] [rbp-78h]
  unsigned int v794; // [rsp+94h] [rbp-74h]
  unsigned int v795; // [rsp+98h] [rbp-70h]
  unsigned int v796; // [rsp+9Ch] [rbp-6Ch]
  __int128 v797; // [rsp+A0h] [rbp-68h] BYREF
  STRSAFE_PCNZWCH psza; // [rsp+B0h] [rbp-58h] BYREF
  SIZE_T v799; // [rsp+B8h] [rbp-50h]
  size_t pcchLength; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v801; // [rsp+C8h] [rbp-40h]
  int v802; // [rsp+CCh] [rbp-3Ch]
  SIZE_T v803; // [rsp+D0h] [rbp-38h] BYREF
  SIZE_T v804; // [rsp+D8h] [rbp-30h] BYREF
  void *v805; // [rsp+E0h] [rbp-28h] BYREF
  int v806; // [rsp+E8h] [rbp-20h]
  unsigned int v807; // [rsp+ECh] [rbp-1Ch] BYREF
  unsigned int v808; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v809; // [rsp+F4h] [rbp-14h]
  __int128 v810; // [rsp+F8h] [rbp-10h]
  unsigned int v811; // [rsp+108h] [rbp+0h]
  int v812; // [rsp+10Ch] [rbp+4h]
  LPVOID v813; // [rsp+110h] [rbp+8h]
  int v814; // [rsp+118h] [rbp+10h]
  LPVOID v815; // [rsp+120h] [rbp+18h] BYREF
  int v816; // [rsp+128h] [rbp+20h]
  int v817; // [rsp+12Ch] [rbp+24h]
  int v818; // [rsp+130h] [rbp+28h]
  int v819; // [rsp+134h] [rbp+2Ch]
  unsigned int v820; // [rsp+138h] [rbp+30h] BYREF
  unsigned int v821; // [rsp+13Ch] [rbp+34h] BYREF
  int v822; // [rsp+140h] [rbp+38h]
  int v823; // [rsp+144h] [rbp+3Ch]
  int v824; // [rsp+148h] [rbp+40h]
  int v825; // [rsp+14Ch] [rbp+44h]
  LPVOID v826; // [rsp+150h] [rbp+48h]
  unsigned int v827; // [rsp+158h] [rbp+50h]
  LPVOID v828; // [rsp+160h] [rbp+58h]
  unsigned int v829; // [rsp+168h] [rbp+60h]
  unsigned int v830; // [rsp+16Ch] [rbp+64h]
  int v831; // [rsp+170h] [rbp+68h]
  unsigned int v832; // [rsp+174h] [rbp+6Ch]
  wchar_t *v833; // [rsp+178h] [rbp+70h]
  void *v834; // [rsp+180h] [rbp+78h]
  __int128 v835; // [rsp+188h] [rbp+80h]
  int v836; // [rsp+198h] [rbp+90h]
  int v837; // [rsp+19Ch] [rbp+94h]
  unsigned int v838; // [rsp+1A0h] [rbp+98h]
  unsigned int v839; // [rsp+1A4h] [rbp+9Ch]
  unsigned int v840; // [rsp+1A8h] [rbp+A0h] BYREF
  unsigned int v841; // [rsp+1ACh] [rbp+A4h]
  int v842; // [rsp+1B0h] [rbp+A8h] BYREF
  unsigned int v843; // [rsp+1B8h] [rbp+B0h]
  unsigned int v844; // [rsp+1BCh] [rbp+B4h] BYREF
  unsigned int v845; // [rsp+1C0h] [rbp+B8h]
  int v846; // [rsp+1C8h] [rbp+C0h] BYREF
  int v847; // [rsp+1D0h] [rbp+C8h] BYREF
  int v848; // [rsp+1D8h] [rbp+D0h] BYREF
  LPVOID v849; // [rsp+1E0h] [rbp+D8h]
  LPVOID v850; // [rsp+1E8h] [rbp+E0h]
  int v851; // [rsp+1F0h] [rbp+E8h]
  int v852; // [rsp+1F4h] [rbp+ECh]
  int v853; // [rsp+1F8h] [rbp+F0h]
  int v854; // [rsp+1FCh] [rbp+F4h]
  LPVOID v855; // [rsp+200h] [rbp+F8h]
  int v856; // [rsp+208h] [rbp+100h]
  void *v857; // [rsp+210h] [rbp+108h] BYREF
  int v858; // [rsp+218h] [rbp+110h]
  int v859; // [rsp+21Ch] [rbp+114h]
  int v860; // [rsp+220h] [rbp+118h]
  int v861; // [rsp+224h] [rbp+11Ch]
  int v862; // [rsp+228h] [rbp+120h]
  int v863; // [rsp+22Ch] [rbp+124h]
  unsigned int v864; // [rsp+230h] [rbp+128h]
  unsigned int v865; // [rsp+234h] [rbp+12Ch]
  int v866; // [rsp+238h] [rbp+130h]
  int v867; // [rsp+23Ch] [rbp+134h]
  LPVOID lpMem; // [rsp+240h] [rbp+138h]
  unsigned int v869; // [rsp+248h] [rbp+140h]
  int v870; // [rsp+24Ch] [rbp+144h]
  int v871; // [rsp+250h] [rbp+148h]
  size_t v872; // [rsp+258h] [rbp+150h]
  unsigned __int64 v873; // [rsp+260h] [rbp+158h]
  unsigned __int64 v874; // [rsp+268h] [rbp+160h]
  size_t v875; // [rsp+270h] [rbp+168h]
  size_t v876; // [rsp+278h] [rbp+170h]
  void *v877; // [rsp+280h] [rbp+178h]
  unsigned __int64 v878; // [rsp+288h] [rbp+180h] BYREF
  size_t Size; // [rsp+290h] [rbp+188h]
  size_t v880; // [rsp+298h] [rbp+190h]
  unsigned __int64 v881; // [rsp+2A0h] [rbp+198h] BYREF
  unsigned __int64 v882; // [rsp+2A8h] [rbp+1A0h]
  unsigned __int64 v883; // [rsp+2B0h] [rbp+1A8h]
  unsigned int *v884; // [rsp+2B8h] [rbp+1B0h]
  void *Src; // [rsp+2C0h] [rbp+1B8h]
  __int64 *v886; // [rsp+2C8h] [rbp+1C0h]
  SIZE_T v887; // [rsp+2D0h] [rbp+1C8h]
  unsigned __int8 *v888; // [rsp+2D8h] [rbp+1D0h]
  __int64 *v889; // [rsp+2E0h] [rbp+1D8h]
  unsigned __int8 *v890; // [rsp+2E8h] [rbp+1E0h]
  __int64 v891; // [rsp+2F0h] [rbp+1E8h]
  HMODULE phModule; // [rsp+2F8h] [rbp+1F0h] BYREF
  unsigned __int8 *v893; // [rsp+300h] [rbp+1F8h]
  _QWORD *v894; // [rsp+308h] [rbp+200h]
  __int64 v895; // [rsp+310h] [rbp+208h]
  void *v896; // [rsp+318h] [rbp+210h]
  unsigned __int8 *v897; // [rsp+320h] [rbp+218h]
  _DWORD *v898; // [rsp+328h] [rbp+220h]
  unsigned __int8 *v899; // [rsp+330h] [rbp+228h]
  void *v900; // [rsp+338h] [rbp+230h]
  HMODULE hModule; // [rsp+340h] [rbp+238h] BYREF
  unsigned __int64 v902; // [rsp+348h] [rbp+240h]
  void *v903; // [rsp+350h] [rbp+248h]
  __int64 v904; // [rsp+358h] [rbp+250h]
  unsigned __int8 *v905; // [rsp+360h] [rbp+258h]
  __int64 v906; // [rsp+368h] [rbp+260h]
  _DWORD *v907; // [rsp+370h] [rbp+268h]
  int v908; // [rsp+378h] [rbp+270h]
  __int64 v909; // [rsp+380h] [rbp+278h]
  void *v910; // [rsp+388h] [rbp+280h]
  int *v911; // [rsp+390h] [rbp+288h]
  unsigned int v912; // [rsp+398h] [rbp+290h]
  SIZE_T v913; // [rsp+3A0h] [rbp+298h]
  int v914; // [rsp+3A8h] [rbp+2A0h]
  _QWORD v915[2]; // [rsp+3B0h] [rbp+2A8h] BYREF
  int v916; // [rsp+3C0h] [rbp+2B8h]
  unsigned int v917; // [rsp+3C4h] [rbp+2BCh]
  int v918; // [rsp+3C8h] [rbp+2C0h]
  _QWORD v919[2]; // [rsp+3D0h] [rbp+2C8h] BYREF
  int v920; // [rsp+3E0h] [rbp+2D8h]
  unsigned int v921; // [rsp+3E4h] [rbp+2DCh]
  int v922; // [rsp+3E8h] [rbp+2E0h]
  int *v923; // [rsp+3F0h] [rbp+2E8h]
  _QWORD *v924; // [rsp+3F8h] [rbp+2F0h]
  __int64 v925; // [rsp+400h] [rbp+2F8h]

  psza = psz;
  v814 = 0;
  v857 = 0LL;
  v812 = 0;
  v2 = 1;
  if ( !psz )
  {
    v812 = -2147024809;
    goto LABEL_460;
  }
  v836 = 0;
  v815 = 0LL;
  v822 = 0;
  v845 = 0;
  v3 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Attach(&v815, v3);
  v877 = v815;
  if ( !v815 )
  {
    v10 = -2147024882;
LABEL_1044:
    v382 = v818;
    goto LABEL_455;
  }
  v786 = 0uLL;
  v4 = 0LL;
  v810 = 0uLL;
  v5 = 0LL;
  Src = &unk_1800BB3E0;
  v837 = 0;
  v817 = 0;
  Size = 160LL;
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 8u, 0xA0uLL);
  v816 = -1;
  v8 = 0LL;
  v9 = v7;
  v10 = -1073741801;
  if ( !v7 )
  {
    LODWORD(v781) = -1073741801;
    goto LABEL_444;
  }
  memcpy_0(v7, Src, Size);
  v11 = (unsigned int)Size;
  v4 = v9;
  v783 = v9;
  v872 = 8LL;
  v910 = &unk_1800BB528;
  v12 = GetProcessHeap();
  v13 = HeapAlloc(v12, 8u, 8uLL);
  v8 = 0LL;
  v14 = v13;
  if ( !v13 )
  {
    LODWORD(v781) = -1073741801;
    v5 = 0LL;
    goto LABEL_444;
  }
  memcpy_0(v13, v910, v872);
  v15 = v872;
  v782 = v14;
  v882 = __rdtsc();
  LODWORD(dwBytes) = 0;
  v16 = RtlUIntAdd(4u, 4, &m);
  v17 = v802;
  v10 = v16;
  LODWORD(v781) = v16;
  if ( v16 >= 0 )
    v17 = (int)m;
  v802 = v17;
  if ( v16 < 0 )
    goto LABEL_472;
  v18 = RtlUIntAdd(0, v17, &dwBytes);
  v10 = v18 | 0x10000000;
  LODWORD(v781) = v18 | 0x10000000;
  if ( v18 < 0 )
    goto LABEL_472;
  v20 = RtlUIntAdd(v19, v11, &m);
  LODWORD(v781) = v20;
  v10 = v20;
  if ( v20 >= 0 )
    v21 = (int)m;
  v802 = v21;
  if ( v20 < 0 )
    goto LABEL_472;
  v22 = RtlUIntAdd(dwBytes, v21, &dwBytes);
  v10 = v22 | 0x10000000;
  LODWORD(v781) = v22 | 0x10000000;
  if ( v22 < 0 )
    goto LABEL_472;
  v24 = RtlUIntAdd(v23, v15, &m);
  LODWORD(v781) = v24;
  v10 = v24;
  if ( v24 >= 0 )
    v25 = (int)m;
  v802 = v25;
  if ( v24 < 0 )
    goto LABEL_472;
  v26 = RtlUIntAdd(dwBytes, v25, &dwBytes);
  v10 = v26 | 0x10000000;
  LODWORD(v781) = v26 | 0x10000000;
  if ( v26 < 0 )
    goto LABEL_472;
  v28 = RtlUIntAdd(v27, 8, &m);
  LODWORD(v781) = v28;
  v10 = v28;
  if ( v28 >= 0 )
    v29 = (int)m;
  v802 = v29;
  if ( v28 < 0 )
    goto LABEL_472;
  v30 = RtlUIntAdd(dwBytes, v29, &dwBytes);
  v10 = v30 | 0x10000000;
  LODWORD(v781) = v30 | 0x10000000;
  if ( v30 < 0 )
    goto LABEL_472;
  v32 = StringCchLengthW(psz, v31, &pcchLength);
  v8 = 0LL;
  if ( v32 < 0 )
  {
    v10 = -1073741762;
LABEL_471:
    LODWORD(v781) = v10;
    goto LABEL_472;
  }
  v33 = RtlUIntAdd(4u, 2 * ((int)pcchLength + 1), &m);
  LODWORD(v781) = v33;
  v10 = v33;
  if ( v33 >= 0 )
    v34 = (int)m;
  v802 = v34;
  if ( v33 < 0 )
    goto LABEL_472;
  v35 = RtlUIntAdd(dwBytes, v34, &dwBytes);
  v10 = v35 | 0x10000000;
  LODWORD(v781) = v35 | 0x10000000;
  if ( v35 < 0 )
    goto LABEL_472;
  v37 = RtlUIntAdd(v36, v36, &m);
  LODWORD(v781) = v37;
  v10 = v37;
  if ( v37 >= 0 )
    v38 = (int)m;
  v802 = v38;
  if ( v37 < 0 )
    goto LABEL_472;
  v39 = RtlUIntAdd(dwBytes, v38, &dwBytes);
  v10 = v39 | 0x10000000;
  LODWORD(v781) = v39 | 0x10000000;
  if ( v39 < 0 )
    goto LABEL_472;
  v41 = RtlUIntAdd(v40, v40, &m);
  LODWORD(v781) = v41;
  v10 = v41;
  if ( v41 >= 0 )
    v42 = (int)m;
  v802 = v42;
  if ( v41 < 0 )
    goto LABEL_472;
  v43 = RtlUIntAdd(dwBytes, v42, &dwBytes);
  v10 = v43 | 0x10000000;
  LODWORD(v781) = v43 | 0x10000000;
  if ( v43 < 0 )
    goto LABEL_472;
  DWORD1(v786) = dwBytes;
  v44 = dwBytes;
  v45 = GetProcessHeap();
  v46 = HeapAlloc(v45, 8u, v44);
  v8 = 0LL;
  if ( !v46 )
  {
    v10 = -1073741801;
    goto LABEL_471;
  }
  *((_QWORD *)&v786 + 1) = v46;
  LODWORD(v786) = 0;
  v846 = 0;
  if ( &v846 )
  {
    LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v46, 4LL, &v805);
    v10 = (int)v781;
    if ( (int)v781 >= 0 )
    {
      if ( v48 + 2 > (_DWORD *)((char *)v48 + DWORD1(v786)) )
        goto LABEL_470;
      v49 = v805;
      *v48 = v47;
      *v49 = v846;
      LODWORD(v786) = v786 + 1;
    }
  }
  else
  {
    v10 = -1073741811;
    LODWORD(v781) = -1073741811;
  }
  if ( v10 < 0 )
    goto LABEL_472;
  if ( !(_DWORD)v11 )
  {
    v10 = -1073741811;
    LODWORD(v781) = -1073741811;
    goto LABEL_52;
  }
  if ( *((unsigned __int8 **)&v786 + 1) != v8 )
  {
    v50 = (int *)*((_QWORD *)&v786 + 1);
    v785 = *((_QWORD *)&v786 + 1);
    if ( (unsigned int)v786 > (unsigned int)v8 )
    {
      do
      {
        v51 = RtlUIntAdd(4u, *v50, &m);
        LODWORD(v781) = v51;
        v10 = v51;
        if ( v51 >= 0 )
          v53 = (unsigned int)m;
        v830 = v53;
        if ( v51 < 0 )
          goto LABEL_51;
        LODWORD(v781) = RtlULongLongAdd(v52, v53, &v785);
        v10 = (int)v781;
        if ( (int)v781 < 0 )
          goto LABEL_51;
        v50 = (int *)v785;
      }
      while ( v54 + 1 < (unsigned int)v786 );
    }
    LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v50, 4LL, &v805);
    v10 = (int)v781;
    if ( (int)v781 < 0 )
      goto LABEL_52;
    if ( (unsigned __int64)v55 + v11 + 4 <= *((_QWORD *)&v786 + 1) + (unsigned __int64)DWORD1(v786) )
    {
      v56 = v805;
      *v55 = v11;
      memcpy_0(v56, v9, v11);
      LODWORD(v786) = v786 + 1;
LABEL_51:
      v8 = 0LL;
      goto LABEL_52;
    }
LABEL_470:
    v10 = -1073741789;
    goto LABEL_471;
  }
  v385 = RtlUIntAdd(4u, v11, &m);
  v47 = v830;
  v10 = v385;
  LODWORD(v781) = v385;
  if ( v385 >= 0 )
    v47 = (unsigned int)m;
  v830 = v47;
  if ( v385 < 0 || (LODWORD(v781) = RtlUIntAdd(DWORD1(v786), v47, (_DWORD *)&v786 + 1), v10 = (int)v781, (int)v781 < 0) )
  {
LABEL_52:
    if ( v10 >= 0 )
      goto LABEL_53;
LABEL_472:
    v4 = v9;
    v5 = v14;
    goto LABEL_444;
  }
  LODWORD(v786) = v786 + 1;
LABEL_53:
  if ( !v15 )
  {
    v10 = -1073741811;
    LODWORD(v781) = -1073741811;
LABEL_65:
    v65 = 4LL;
    goto LABEL_66;
  }
  if ( *((unsigned __int8 **)&v786 + 1) != v8 )
  {
    v57 = (int *)*((_QWORD *)&v786 + 1);
    v785 = *((_QWORD *)&v786 + 1);
    if ( (unsigned int)v786 > (unsigned int)v8 )
    {
      while ( 1 )
      {
        v58 = RtlUIntAdd(4u, *v57, &m);
        LODWORD(v781) = v58;
        v10 = v58;
        if ( v58 >= 0 )
          v61 = (unsigned int)m;
        v829 = v61;
        if ( v58 < 0 )
          break;
        LODWORD(v781) = RtlULongLongAdd(v60, v61, &v785);
        v10 = (int)v781;
        if ( (int)v781 < 0 )
          goto LABEL_64;
        v57 = (int *)v785;
        if ( v62 + 1 >= (unsigned int)v786 )
          goto LABEL_61;
      }
      v8 = 0LL;
      v65 = v59;
      goto LABEL_66;
    }
LABEL_61:
    LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v57, 4LL, &v805);
    v10 = (int)v781;
    if ( (int)v781 < 0 )
    {
      v65 = v47;
      goto LABEL_66;
    }
    if ( (unsigned __int64)v63 + v15 + 4 <= *((_QWORD *)&v786 + 1) + (unsigned __int64)DWORD1(v786) )
    {
      v64 = v805;
      *v63 = v15;
      memcpy_0(v64, v14, v15);
      LODWORD(v786) = v786 + 1;
LABEL_64:
      v8 = 0LL;
      goto LABEL_65;
    }
    goto LABEL_470;
  }
  v65 = 4LL;
  v386 = RtlUIntAdd(4u, v15, &m);
  v47 = v829;
  v10 = v386;
  LODWORD(v781) = v386;
  if ( v386 >= 0 )
    v47 = (unsigned int)m;
  v829 = v47;
  if ( v386 >= 0 )
  {
    LODWORD(v781) = RtlUIntAdd(DWORD1(v786), v47, (_DWORD *)&v786 + 1);
    v10 = (int)v781;
    if ( (int)v781 >= 0 )
    {
      LODWORD(v786) = v786 + 1;
      goto LABEL_67;
    }
  }
LABEL_66:
  if ( v10 < 0 )
    goto LABEL_497;
LABEL_67:
  v881 = v882;
  if ( !&v881 )
  {
    v10 = -1073741811;
    LODWORD(v781) = -1073741811;
    goto LABEL_78;
  }
  if ( *((unsigned __int8 **)&v786 + 1) != v8 )
  {
    v66 = (int *)*((_QWORD *)&v786 + 1);
    v785 = *((_QWORD *)&v786 + 1);
    if ( (unsigned int)v786 <= (unsigned int)v8 )
    {
LABEL_75:
      LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v66, v65, &v805);
      v10 = (int)v781;
      if ( (int)v781 >= 0 )
      {
        if ( (unsigned __int64)(v71 + 3) > *((_QWORD *)&v786 + 1) + (unsigned __int64)DWORD1(v786) )
        {
          v10 = -1073741789;
LABEL_496:
          LODWORD(v781) = v10;
          goto LABEL_497;
        }
        v72 = v805;
        *v71 = 8;
        *v72 = v881;
        LODWORD(v786) = v786 + 1;
      }
    }
    else
    {
      while ( 1 )
      {
        v67 = RtlUIntAdd(v65, *v66, &m);
        LODWORD(v781) = v67;
        v10 = v67;
        if ( v67 >= 0 )
          v69 = (unsigned int)m;
        v827 = v69;
        if ( v67 < 0 )
          break;
        LODWORD(v781) = RtlULongLongAdd(v68, v69, &v785);
        v10 = (int)v781;
        if ( (int)v781 < 0 )
          break;
        v66 = (int *)v785;
        if ( v70 + 1 >= (unsigned int)v786 )
          goto LABEL_75;
      }
      v8 = 0LL;
    }
LABEL_78:
    if ( v10 >= 0 )
      goto LABEL_79;
LABEL_497:
    v4 = v9;
    goto LABEL_443;
  }
  v387 = RtlUIntAdd(v65, 8, &m);
  v47 = v827;
  v10 = v387;
  LODWORD(v781) = v387;
  if ( v387 >= 0 )
    v47 = (unsigned int)m;
  v827 = v47;
  if ( v387 < 0 )
    goto LABEL_78;
  LODWORD(v781) = RtlUIntAdd(DWORD1(v786), v47, (_DWORD *)&v786 + 1);
  v10 = (int)v781;
  if ( (int)v781 < 0 )
    goto LABEL_78;
  LODWORD(v786) = v786 + 1;
LABEL_79:
  v73 = psza;
  v74 = StringCchLengthW(psza, v47, &v785);
  v8 = 0LL;
  if ( v74 < 0 )
  {
    v10 = -1073741762;
    goto LABEL_496;
  }
  LODWORD(v781) = RtlULongLongAdd(v785, 1LL, &v785);
  v10 = (int)v781;
  if ( (int)v781 >= 0 )
  {
    if ( 2 * (_DWORD)v785 )
    {
      if ( *((unsigned __int8 **)&v786 + 1) == v8 )
      {
        v388 = RtlUIntAdd(v65, 2 * (int)v785, &m);
        v389 = v823;
        v10 = v388;
        LODWORD(v781) = v388;
        if ( v388 >= 0 )
          v389 = (int)m;
        v823 = v389;
        if ( v388 >= 0 )
        {
          LODWORD(v781) = RtlUIntAdd(DWORD1(v786), v389, (_DWORD *)&v786 + 1);
          v10 = (int)v781;
          if ( (int)v781 >= 0 )
          {
            LODWORD(v786) = v786 + 1;
            v10 = v390;
            LODWORD(v781) = v390;
          }
        }
      }
      else
      {
        v75 = (int)v8;
        v76 = (int *)*((_QWORD *)&v786 + 1);
        v785 = *((_QWORD *)&v786 + 1);
        if ( (unsigned int)v786 <= (unsigned int)v8 )
        {
LABEL_89:
          LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v76, v65, &v805);
          v10 = (int)v781;
          if ( (int)v781 >= 0 )
          {
            if ( (unsigned __int64)v80 + v81 + 4 > *((_QWORD *)&v786 + 1) + (unsigned __int64)DWORD1(v786) )
            {
              v10 = -1073741789;
              LODWORD(v781) = -1073741789;
            }
            else
            {
              v82 = v805;
              *v80 = v81;
              memcpy_0(v82, v73, (unsigned int)v81);
              LODWORD(v786) = v786 + 1;
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v77 = RtlUIntAdd(v65, *v76, &m);
            LODWORD(v781) = v77;
            v10 = v77;
            if ( v77 >= 0 )
              v79 = (unsigned int)m;
            v823 = v79;
            if ( v77 < 0 )
              break;
            LODWORD(v781) = RtlULongLongAdd(v78, v79, &v785);
            v10 = (int)v781;
            if ( (int)v781 < 0 )
              break;
            v76 = (int *)v785;
            if ( ++v75 >= (unsigned int)v786 )
              goto LABEL_89;
          }
        }
      }
    }
    else
    {
      v10 = -1073741811;
      LODWORD(v781) = -1073741811;
    }
    v8 = 0LL;
  }
  if ( v10 < 0 )
    goto LABEL_442;
  v848 = v822;
  if ( &v848 )
  {
    if ( *((unsigned __int8 **)&v786 + 1) == v8 )
    {
      v391 = RtlUIntAdd(v65, v65, &m);
      v392 = v831;
      v10 = v391;
      LODWORD(v781) = v391;
      if ( v391 >= 0 )
        v392 = (int)m;
      v831 = v392;
      if ( v391 >= 0 )
      {
        LODWORD(v781) = RtlUIntAdd(DWORD1(v786), v392, (_DWORD *)&v786 + 1);
        v10 = (int)v781;
        if ( (int)v781 >= 0 )
        {
          LODWORD(v786) = v786 + 1;
          goto LABEL_106;
        }
      }
    }
    else
    {
      v83 = (int *)*((_QWORD *)&v786 + 1);
      v785 = *((_QWORD *)&v786 + 1);
      if ( (unsigned int)v786 <= (unsigned int)v8 )
      {
LABEL_102:
        LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v83, v65, &v805);
        v10 = (int)v781;
        if ( (int)v781 >= 0 )
        {
          if ( (unsigned __int64)(v88 + 2) > *((_QWORD *)&v786 + 1) + (unsigned __int64)DWORD1(v786) )
            goto LABEL_512;
          v89 = v805;
          *v88 = v65;
          *v89 = v848;
          LODWORD(v786) = v786 + 1;
        }
      }
      else
      {
        while ( 1 )
        {
          v84 = RtlUIntAdd(v65, *v83, &m);
          LODWORD(v781) = v84;
          v10 = v84;
          if ( v84 >= 0 )
            v86 = (unsigned int)m;
          v831 = v86;
          if ( v84 < 0 )
            break;
          LODWORD(v781) = RtlULongLongAdd(v85, v86, &v785);
          v10 = (int)v781;
          if ( (int)v781 < 0 )
            break;
          v83 = (int *)v785;
          if ( v87 + 1 >= (unsigned int)v786 )
            goto LABEL_102;
        }
        v8 = 0LL;
      }
    }
  }
  else
  {
    v10 = -1073741811;
    LODWORD(v781) = -1073741811;
  }
  if ( v10 < 0 )
    goto LABEL_442;
LABEL_106:
  v847 = v65;
  if ( &v847 )
  {
    if ( *((unsigned __int8 **)&v786 + 1) == v8 )
    {
      v393 = RtlUIntAdd(v65, v65, &m);
      v394 = v825;
      v10 = v393;
      LODWORD(v781) = v393;
      if ( v393 >= 0 )
        v394 = (int)m;
      v825 = v394;
      if ( v393 >= 0 )
      {
        LODWORD(v781) = RtlUIntAdd(DWORD1(v786), v394, (_DWORD *)&v786 + 1);
        v10 = (int)v781;
        if ( (int)v781 >= 0 )
        {
          LODWORD(v786) = v786 + 1;
          goto LABEL_118;
        }
      }
    }
    else
    {
      v90 = (int *)*((_QWORD *)&v786 + 1);
      v785 = *((_QWORD *)&v786 + 1);
      if ( (unsigned int)v786 > (unsigned int)v8 )
      {
        while ( 1 )
        {
          v91 = RtlUIntAdd(v65, *v90, &m);
          LODWORD(v781) = v91;
          v10 = v91;
          if ( v91 >= 0 )
            v93 = (unsigned int)m;
          v825 = v93;
          if ( v91 < 0 )
            break;
          LODWORD(v781) = RtlULongLongAdd(v92, v93, &v785);
          v10 = (int)v781;
          if ( (int)v781 < 0 )
            break;
          v90 = (int *)v785;
          if ( v94 + 1 >= (unsigned int)v786 )
            goto LABEL_114;
        }
        v8 = 0LL;
        goto LABEL_117;
      }
LABEL_114:
      LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v90, v65, &v805);
      v10 = (int)v781;
      if ( (int)v781 >= 0 )
      {
        if ( (unsigned __int64)(v95 + 2) <= *((_QWORD *)&v786 + 1) + (unsigned __int64)DWORD1(v786) )
        {
          v96 = v805;
          *v95 = v65;
          *v96 = v847;
          LODWORD(v786) = v786 + 1;
          goto LABEL_117;
        }
LABEL_512:
        v10 = -1073741789;
        LODWORD(v781) = -1073741789;
        goto LABEL_442;
      }
    }
  }
  else
  {
    v10 = -1073741811;
    LODWORD(v781) = -1073741811;
  }
LABEL_117:
  if ( v10 < 0 )
    goto LABEL_442;
LABEL_118:
  v97 = RtlUIntAdd(v65, v65, &m);
  v99 = v806;
  v10 = v97;
  LODWORD(v781) = v97;
  if ( v97 >= 0 )
    v99 = (int)m;
  v806 = v99;
  if ( v97 < 0 )
    goto LABEL_522;
  LODWORD(dwBytes) = v99;
  v100 = RtlUIntAdd(v98, 8, &m);
  LODWORD(v781) = v100;
  v102 = v101;
  v10 = v100;
  if ( v100 >= 0 )
    v102 = (int)m;
  v806 = v102;
  if ( v100 < 0 )
  {
LABEL_522:
    v8 = 0LL;
LABEL_523:
    v112 = v814;
    goto LABEL_142;
  }
  v103 = RtlUIntAdd(v101, v102, &dwBytes);
  v8 = 0LL;
  LODWORD(v781) = v103;
  v10 = v103;
  if ( v103 < 0 )
    goto LABEL_523;
  v104 = RtlUIntAdd(v65, v65, &m);
  LODWORD(v781) = v104;
  v10 = v104;
  if ( v104 >= 0 )
    v105 = (int)m;
  v806 = v105;
  if ( v104 < 0 )
    goto LABEL_523;
  LODWORD(v781) = RtlUIntAdd(dwBytes, v105, &dwBytes);
  v10 = (int)v781;
  if ( (int)v781 < 0 )
    goto LABEL_523;
  v106 = RtlUIntAdd(v65, v65, &m);
  LODWORD(v781) = v106;
  v10 = v106;
  if ( v106 >= 0 )
    v107 = (int)m;
  v806 = v107;
  if ( v106 < 0 )
    goto LABEL_523;
  LODWORD(v781) = RtlUIntAdd(dwBytes, v107, &dwBytes);
  v10 = (int)v781;
  if ( (int)v781 < 0 )
    goto LABEL_523;
  v108 = RtlUIntAdd(v65, v65, &m);
  LODWORD(v781) = v108;
  v10 = v108;
  if ( v108 >= 0 )
    v109 = (int)m;
  v806 = v109;
  if ( v108 < 0 )
    goto LABEL_523;
  LODWORD(v781) = RtlUIntAdd(dwBytes, v109, &dwBytes);
  v10 = (int)v781;
  if ( (int)v781 < 0 )
    goto LABEL_523;
  v110 = RtlUIntAdd(v65, v65, &m);
  LODWORD(v781) = v110;
  v10 = v110;
  if ( v110 >= 0 )
    v111 = (int)m;
  v806 = v111;
  if ( v110 < 0 )
    goto LABEL_523;
  v10 = RtlUIntAdd(dwBytes, v111, &dwBytes);
  LODWORD(v781) = v10;
  v112 = v814;
  if ( v10 >= 0 )
    v112 = dwBytes;
LABEL_142:
  LODWORD(v787) = v112;
  if ( v10 < 0 )
    goto LABEL_442;
  v113 = v8;
  pcchLength = (size_t)v8;
  v114 = (unsigned int)v8;
  v849 = v8;
  v813 = v8;
  v115 = (int)v8;
  LODWORD(v788) = (_DWORD)v8;
  v826 = v8;
  v801 = (unsigned int)v8;
  v828 = v8;
  psza = (STRSAFE_PCNZWCH)v8;
  v811 = (unsigned int)v8;
  v883 = __rdtsc();
  v807 = 8;
  v116 = RtlUIntAdd(8u, SDWORD1(v786), &v807);
  if ( v116 >= 0 )
  {
    v117 = (v807 + 7) & 0xFFFFFFF8;
    if ( v117 < v807 )
    {
      v116 = -1073741675;
    }
    else
    {
      v807 = (v807 + 7) & 0xFFFFFFF8;
      v118 = v117;
      v119 = GetProcessHeap();
      v120 = (char *)HeapAlloc(v119, 8u, v118);
      v8 = 0LL;
      v121 = v120;
      if ( v120 )
      {
        v785 = (size_t)v120;
        *(_DWORD *)v120 = v786;
        v116 = RtlULongLongAdd((unsigned __int64)v120, 4LL, &v785);
        if ( v116 >= 0 )
        {
          v123 = v785;
          *(_DWORD *)v785 = DWORD1(v786);
          v116 = RtlULongLongAdd(v123, v122, &v785);
          if ( v116 >= 0 )
          {
            *(_QWORD *)&v121[v807 - 8] = v883;
            memcpy_0((void *)v785, *((const void **)&v786 + 1), DWORD1(v786));
            v114 = v807;
            v8 = 0LL;
            v113 = (unsigned __int8 *)v121;
            pcchLength = (size_t)v121;
            v121 = 0LL;
          }
        }
        if ( v121 )
        {
          v395 = GetProcessHeap();
          HeapFree(v395, 0, v121);
          v8 = 0LL;
        }
      }
      else
      {
        v116 = -1073741801;
      }
    }
  }
  v10 = v116 | 0x10000000;
  LODWORD(v781) = v10;
  if ( v10 < 0 )
    goto LABEL_335;
  v886 = (__int64 *)v8;
  v124 = v8;
  v904 = (__int64)v8;
  v888 = v8;
  v906 = (__int64)v8;
  lpMem = v8;
  v913 = (SIZE_T)v8;
  v785 = (size_t)v8;
  if ( v113 )
  {
    v125 = v114;
    m = (void *)v114;
    if ( v114 && (v803 = v114 + 8LL, v126 = MemoryAlloc(v803), v8 = 0LL, v781 = v126, (v127 = v126) != 0LL) )
    {
      v128 = 0;
      for ( i = 0LL; i < v114; ++i )
        v128 ^= v113[i];
      v130 = -1;
      v795 = 0;
      v791 = -1;
      v131 = v113;
      LODWORD(dwBytes) = 0;
      v132 = v127;
      v133 = 0;
      v134 = 0;
      v135 = v114 & 7;
      if ( (v114 & 7) != 0 )
      {
        LODWORD(dwBytes) = 0;
        v396 = 0;
        v397 = 0;
        v398 = 56;
        do
        {
          v399 = *v131;
          if ( v397 >= 4 )
            v134 |= v399 << v398;
          else
            v396 |= v399 << (v398 - 32);
          ++v131;
          ++v397;
          v398 -= 8;
        }
        while ( v397 < v135 );
        LODWORD(dwBytes) = v396;
        v400 = 0;
        v133 = v396 ^ 0x90280470;
        v401 = v134 ^ 0xB47C7C45;
        v795 = v396 ^ 0x90280470;
        v791 = v134 ^ 0xB47C7C45;
        if ( (v125 & 7) != 0 )
        {
          do
          {
            if ( v400 >= 4 )
            {
              v401 = __ROL4__(v401, 8);
              *v132 = v401;
            }
            else
            {
              v133 = __ROL4__(v133, 8);
              *v132 = v133;
            }
            ++v132;
            ++v400;
          }
          while ( v400 < v135 );
          v133 = v795;
          v401 = v791;
        }
        v402 = v135 - 4;
        if ( v135 - 4 <= 0 )
        {
          v791 = 0;
          v130 = 0;
          if ( v402 < 0 )
          {
            v133 = v133 >> (-8 * v402) << (-8 * v402);
            v795 = v133;
          }
        }
        else
        {
          v130 = v401 >> (8 * (4 - v402)) << (8 * (4 - v402));
          v791 = v130;
        }
      }
      v136 = v125 >> 3;
      if ( v125 >> 3 )
      {
        v137 = dwBytes;
        v138 = v132 + 7;
        v139 = v131 + 2;
        do
        {
          v140 = *(v139 - 1) | (*(v139 - 2) << 8);
          v141 = v139[2] << 8;
          v142 = *v139;
          v139 += 8;
          v143 = *(v139 - 7) | ((v142 | (v140 << 8)) << 8);
          v144 = *(v139 - 3) | ((*(v139 - 4) | ((*(v139 - 5) | v141) << 8)) << 8);
          v145 = v144 ^ v130;
          v146 = v143 ^ (__ROR4__(v145, 8) + 32881 * __ROR4__(-1270087367 - v145, 7)) ^ v133;
          v147 = (47626 * __ROL4__(v146 ^ 0xB44C, 4) - __ROR4__(v146, 2)) ^ v145;
          v148 = __ROL4__(v147, 5) ^ (313 * __ROL4__(v147 + 1173716879, 8)) ^ v146;
          v149 = (46156 * __ROR4__(v148 - 1173716879, 14) - __ROR4__(v148, 15)) ^ v147;
          v150 = v148 ^ v149 ^ 0xE468148;
          v151 = (__ROR4__(v150, 4) + 47626 * __ROR4__(v148 ^ v149 ^ 0xBA0A8071, 4)) ^ v149;
          v152 = (46156 * (__ROR4__(v151, 11) - 313)) ^ v150;
          v153 = (__ROL4__(v152, 8) + 46156 * __ROL4__(v152 ^ 0x139, 7)) ^ v151;
          v154 = v152 ^ (v153 - 32881) ^ 0xB44C0139;
          v155 = (47626 * __ROL4__(v152 ^ (v153 - 32881), 10) - __ROR4__(v154, 14)) ^ v153;
          v156 = (313 * (v155 ^ 0xBA0A)) ^ __ROR4__(v155, 6) ^ v154;
          v157 = (__ROR4__(v156, 3) + 46156 * __ROL4__(v156 - 1173716879, 9)) ^ v155;
          v158 = (v157 >> 15) ^ (32881 * __ROL4__(v157 - 313, 3)) ^ v156;
          v159 = (47626 * (v158 - 313) - (v158 >> 13)) ^ v157;
          v160 = __ROR4__(v159, 11) ^ (313 * __ROR4__(-1173716879 - v159, 9)) ^ v158;
          v161 = (v160 + 1173670723) ^ v159;
          v162 = (32881 * (v161 ^ 0xBA0A) - __ROR4__(v161, 7)) ^ v160;
          v163 = (47626 * __ROL4__(v162 ^ 0xB44C, 4) - __ROR4__(v162, 16)) ^ v161;
          v164 = (__ROR4__(v163, 4) + 313 * __ROR4__(-1173716879 - v163, 10)) ^ v162;
          v165 = __ROR4__(v164, 9) ^ (46156 * __ROR4__(v164 + 1173716879, 4)) ^ v163;
          v166 = (32881 * __ROL4__(v165 ^ 0xB44C0139, 8) - __ROL4__(v165, 2)) ^ v164;
          v167 = (47626 * __ROR4__(-1270087367 - v166, 11) - __ROR4__(v166, 12)) ^ v165;
          v168 = (v167 >> 8) ^ (313 * (v167 ^ 0xBA0A)) ^ v166;
          v795 = v137 ^ v168;
          v137 = v143;
          v791 = v134 ^ v168 ^ v167 ^ 0xE468148;
          v134 = v144;
          *(v138 - 4) = v795;
          v795 = __ROR4__(v795, 8);
          *v138 = v791;
          v138 += 8;
          v791 = __ROR4__(v791, 8);
          *(v138 - 13) = v795;
          v795 = __ROR4__(v795, 8);
          *(v138 - 9) = v791;
          v791 = __ROR4__(v791, 8);
          *(v138 - 14) = v795;
          v795 = __ROR4__(v795, 8);
          *(v138 - 10) = v791;
          v791 = __ROR4__(v791, 8);
          *(v138 - 15) = v795;
          *(v138 - 11) = v791;
          v133 = __ROR4__(v795, 8);
          v130 = __ROR4__(v791, 8);
          v795 = v133;
          v791 = v130;
          --v136;
        }
        while ( v136 );
        v124 = (_QWORD *)v785;
        v125 = (unsigned __int64)m;
        v127 = v781;
      }
      *(_QWORD *)&v127[v125] = v128;
      v169 = v803;
      v913 = v803;
      lpMem = v127;
      v886 = &qword_1800BB520;
      v904 = 8LL;
      v906 = 160LL;
      v888 = (unsigned __int8 *)xmmword_1800BB480;
      v170 = GetProcessHeap();
      v171 = HeapAlloc(v170, 8u, 0x30uLL);
      v8 = 0LL;
      v172 = v171;
      if ( v171 )
      {
        *v171 = v169;
        v173 = GetProcessHeap();
        v174 = HeapAlloc(v173, 8u, v169);
        v8 = 0LL;
        if ( !v174 )
          goto LABEL_543;
        *((_QWORD *)v172 + 1) = v174;
        memcpy_0(v174, v127, v169);
        v172[4] = 160;
        v175 = GetProcessHeap();
        v176 = HeapAlloc(v175, 8u, 0xA0uLL);
        v8 = 0LL;
        if ( !v176 )
          goto LABEL_543;
        *((_QWORD *)v172 + 3) = v176;
        *v176 = xmmword_1800BB480[0];
        v176[1] = xmmword_1800BB480[1];
        v176[2] = xmmword_1800BB480[2];
        v176[3] = xmmword_1800BB480[3];
        v176[4] = xmmword_1800BB480[4];
        v176[5] = xmmword_1800BB480[5];
        v176[6] = xmmword_1800BB480[6];
        v176[7] = xmmword_1800BB480[7];
        v176[8] = xmmword_1800BB480[8];
        v176[9] = xmmword_1800BB480[9];
        v172[8] = 8;
        v177 = GetProcessHeap();
        v178 = HeapAlloc(v177, 8u, 8uLL);
        v8 = 0LL;
        if ( v178 )
        {
          *((_QWORD *)v172 + 5) = v178;
          v124 = v172;
          *v178 = qword_1800BB520;
          v179 = 0;
          v172 = 0LL;
        }
        else
        {
LABEL_543:
          v179 = -1073741801;
        }
        if ( v172 )
        {
          v403 = (void *)*((_QWORD *)v172 + 1);
          if ( v403 )
          {
            v404 = GetProcessHeap();
            HeapFree(v404, 0, v403);
            *((_QWORD *)v172 + 1) = 0LL;
          }
          v405 = (void *)*((_QWORD *)v172 + 3);
          if ( v405 )
          {
            v406 = GetProcessHeap();
            HeapFree(v406, 0, v405);
            *((_QWORD *)v172 + 3) = 0LL;
          }
          v407 = (void *)*((_QWORD *)v172 + 5);
          if ( v407 )
          {
            v408 = GetProcessHeap();
            HeapFree(v408, 0, v407);
            *((_QWORD *)v172 + 5) = 0LL;
          }
          v409 = GetProcessHeap();
          HeapFree(v409, 0, v172);
          v8 = 0LL;
        }
      }
      else
      {
        v179 = -1073741801;
      }
      if ( v179 >= 0 )
      {
        v849 = v124;
        v124 = 0LL;
      }
    }
    else
    {
      v179 = -1073741823;
    }
    v180 = lpMem;
    if ( lpMem )
    {
      v181 = GetProcessHeap();
      HeapFree(v181, 0, v180);
      v8 = 0LL;
      lpMem = 0LL;
    }
    if ( v124 )
    {
      v410 = (void *)v124[1];
      if ( v410 )
      {
        v411 = GetProcessHeap();
        HeapFree(v411, 0, v410);
        v124[1] = 0LL;
      }
      v412 = (void *)v124[3];
      if ( v412 )
      {
        v413 = GetProcessHeap();
        HeapFree(v413, 0, v412);
        v124[3] = 0LL;
      }
      v414 = (void *)v124[5];
      if ( v414 )
      {
        v415 = GetProcessHeap();
        HeapFree(v415, 0, v414);
        v124[5] = 0LL;
      }
      v416 = GetProcessHeap();
      HeapFree(v416, 0, v124);
      v8 = 0LL;
    }
    v115 = (int)v788;
  }
  else
  {
    v179 = -1073741811;
  }
  v10 = v179 | 0x10000000;
  LODWORD(v781) = v10;
  if ( v10 < 0 )
    goto LABEL_335;
  v182 = (const void **)v849;
  LODWORD(dwBytes) = 4;
  v183 = RtlUIntAdd(4u, *(_DWORD *)v849, &dwBytes);
  if ( v183 < 0
    || (v183 = RtlUIntAdd(dwBytes, 4, &dwBytes), v183 < 0)
    || (v183 = RtlUIntAdd(dwBytes, *((_DWORD *)v182 + 4), &dwBytes), v183 < 0)
    || (v183 = RtlUIntAdd(dwBytes, 4, &dwBytes), v183 < 0) )
  {
    v184 = v819;
  }
  else
  {
    v183 = RtlUIntAdd(dwBytes, *((_DWORD *)v182 + 8), &dwBytes);
    v184 = v819;
    if ( v183 >= 0 )
      v184 = dwBytes;
    v819 = v184;
  }
  if ( v183 >= 0 )
  {
    v185 = v184;
    v186 = GetProcessHeap();
    v187 = HeapAlloc(v186, 8u, v185);
    v8 = 0LL;
    v188 = v187;
    if ( v187 )
    {
      m = v187;
      *v187 = *(_DWORD *)v182;
      v183 = RtlULongLongAdd((unsigned __int64)v187, 4LL, &m);
      if ( v183 >= 0 )
      {
        memcpy_0(m, v182[1], *(unsigned int *)v182);
        v189 = RtlULongLongAdd((unsigned __int64)m, *(unsigned int *)v182, &m);
        v8 = 0LL;
        v183 = v189;
        if ( v189 >= 0 )
        {
          v190 = m;
          *(_DWORD *)m = *((_DWORD *)v182 + 4);
          v183 = RtlULongLongAdd((unsigned __int64)v190, 4LL, &m);
          if ( v183 >= 0 )
          {
            memcpy_0(m, v182[3], *((unsigned int *)v182 + 4));
            v191 = RtlULongLongAdd((unsigned __int64)m, *((unsigned int *)v182 + 4), &m);
            v8 = 0LL;
            v183 = v191;
            if ( v191 >= 0 )
            {
              v192 = m;
              *(_DWORD *)m = *((_DWORD *)v182 + 8);
              v183 = RtlULongLongAdd((unsigned __int64)v192, 4LL, &m);
              if ( v183 >= 0 )
              {
                memcpy_0(m, v182[5], *((unsigned int *)v182 + 8));
                v193 = RtlULongLongAdd((unsigned __int64)m, *((unsigned int *)v182 + 8), &m);
                v8 = 0LL;
                v183 = v193;
                if ( v193 >= 0 )
                {
                  v115 = v819;
                  v813 = v188;
                  v188 = 0LL;
                }
              }
            }
          }
        }
      }
      if ( v188 )
      {
        v417 = GetProcessHeap();
        HeapFree(v417, 0, v188);
        v8 = 0LL;
      }
    }
    else
    {
      v183 = -1073741801;
    }
  }
  v10 = v183 | 0x10000000;
  LODWORD(v781) = v10;
  if ( v10 < 0 )
    goto LABEL_335;
  v194 = (int)v8;
  v890 = v8;
  v867 = (int)v8;
  v859 = (int)v8;
  v905 = v8;
  v820 = 8;
  v195 = RtlUIntAdd(8u, (int)v787, &v820);
  v10 = v195 | 0x10000000;
  LODWORD(v781) = v195 | 0x10000000;
  if ( v195 >= 0 )
  {
    v197 = (v820 + 7) & 0xFFFFFFF8;
    if ( v197 < v820 )
    {
      v10 = -1073741675;
      LODWORD(v781) = -1073741675;
    }
    else
    {
      v840 = (v820 + 7) & 0xFFFFFFF8;
      v198 = RtlUIntAdd(v197, v196, &v840);
      v199 = v838;
      v10 = v198;
      LODWORD(v781) = v198;
      if ( v198 >= 0 )
        v199 = v840;
      v838 = v199;
    }
    if ( v10 < 0 )
      goto LABEL_335;
    if ( *((unsigned __int8 **)&v786 + 1) == v8 || (unsigned int)v786 <= 1 )
      goto LABEL_562;
    v200 = (unsigned int *)*((_QWORD *)&v786 + 1);
    m = (void *)*((_QWORD *)&v786 + 1);
    do
    {
      v201 = *v200;
      LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v200, 4LL, &m);
      v10 = (int)v781;
      if ( (int)v781 < 0 )
        goto LABEL_563;
      LODWORD(v781) = RtlULongLongAdd((unsigned __int64)m, v201, &m);
      v10 = (int)v781;
      if ( (int)v781 < 0 )
        goto LABEL_563;
      v200 = (unsigned int *)m;
    }
    while ( v202 == -1 );
    LODWORD(v781) = RtlULongLongAdd((unsigned __int64)m, 4LL, &m);
    v10 = (int)v781;
    if ( (int)v781 < 0 )
    {
LABEL_563:
      v8 = 0LL;
      goto LABEL_210;
    }
    v204 = (unsigned __int8 *)m;
    v859 = v203;
    if ( !v203 )
      v204 = 0LL;
    v8 = 0LL;
    v890 = v204;
LABEL_210:
    if ( v10 < 0 )
      goto LABEL_335;
    if ( (unsigned int)v786 <= 2 )
    {
LABEL_562:
      v10 = -1073741811;
      LODWORD(v781) = -1073741811;
    }
    else
    {
      v205 = (unsigned int *)*((_QWORD *)&v786 + 1);
      m = (void *)*((_QWORD *)&v786 + 1);
      do
      {
        v206 = *v205;
        LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v205, 4LL, &m);
        v10 = (int)v781;
        if ( (int)v781 < 0 )
          goto LABEL_564;
        LODWORD(v781) = RtlULongLongAdd((unsigned __int64)m, v206, &m);
        v10 = (int)v781;
        if ( (int)v781 < 0 )
          goto LABEL_564;
        v205 = (unsigned int *)m;
      }
      while ( (unsigned int)(v208 + 1) < 2 );
      LODWORD(v781) = RtlULongLongAdd((unsigned __int64)m, 4LL, &m);
      v10 = (int)v781;
      if ( (int)v781 < 0 )
      {
LABEL_564:
        v8 = 0LL;
        goto LABEL_220;
      }
      v210 = (unsigned __int8 *)m;
      v211 = v209 == 0;
      v194 = v209;
      v8 = 0LL;
      if ( v211 )
        v210 = 0LL;
      v867 = v194;
      v905 = v210;
LABEL_220:
      if ( v10 < 0 )
        goto LABEL_335;
      LODWORD(dwBytes) = 4;
      LODWORD(v781) = RtlUIntAdd(4u, v207, &dwBytes);
      v10 = (int)v781;
      if ( (int)v781 < 0
        || (LODWORD(v781) = RtlUIntAdd(dwBytes, 4, &dwBytes), v10 = (int)v781, (int)v781 < 0)
        || (LODWORD(v781) = RtlUIntAdd(dwBytes, v212, &dwBytes), v10 = (int)v781, (int)v781 < 0)
        || (LODWORD(v781) = RtlUIntAdd(dwBytes, 4, &dwBytes), v10 = (int)v781, (int)v781 < 0) )
      {
        v213 = v841;
      }
      else
      {
        v10 = RtlUIntAdd(dwBytes, v194, &dwBytes);
        LODWORD(v781) = v10;
        v213 = v841;
        if ( v10 >= 0 )
          v213 = dwBytes;
        v841 = v213;
      }
      if ( v10 < 0 )
        goto LABEL_335;
      if ( v213 > 0x400000 )
      {
        v10 = -2147418113;
        goto LABEL_334;
      }
      v801 = v213;
    }
  }
  if ( v10 < 0 )
    goto LABEL_335;
  v214 = v801;
  v215 = (int)v8;
  v216 = GetProcessHeap();
  v217 = HeapAlloc(v216, 8u, v214);
  v8 = 0LL;
  if ( v217 )
  {
    v218 = v217;
    v826 = v217;
  }
  else
  {
    v218 = v826;
    v215 = -1073741801;
  }
  v10 = v215 | 0x10000000;
  LODWORD(v781) = v10;
  if ( v10 < 0 )
    goto LABEL_335;
  if ( !v813 || !v218 )
  {
    v10 = -2147024809;
    goto LABEL_334;
  }
  v919[0] = v813;
  v921 = v801;
  v920 = v115;
  v919[1] = v218;
  v922 = 0;
  if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
    && (ProcAddress = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
  {
    v220 = ((__int64 (__fastcall *)(__int64, _QWORD *))ProcAddress)(134LL, v919);
    v221 = v801;
    v8 = 0LL;
    v10 = v220 | 0x10000000;
    if ( v220 >= 0 )
      v221 = v921;
    v801 = v221;
  }
  else
  {
    LastError = GetLastError();
    v8 = 0LL;
    LODWORD(v781) = LastError;
    v10 = LastError;
    if ( LastError > 0 )
    {
      v10 = (unsigned __int16)LastError | 0x80070000;
      LODWORD(v781) = v10;
    }
    v221 = v801;
    if ( v10 < 0 )
      goto LABEL_243;
    v10 = -2147467259;
  }
  LODWORD(v781) = v10;
LABEL_243:
  if ( v10 == -805306333 )
  {
    v10 = -2147024774;
    LODWORD(v781) = -2147024774;
    goto LABEL_335;
  }
  if ( v10 < 0 )
    goto LABEL_335;
  LODWORD(v781) = 0;
  v222 = 0LL;
  m = v218;
  if ( v221 < 4 )
    goto LABEL_574;
  v223 = *v218;
  v225 = RtlULongLongAdd((unsigned __int64)v218, 4LL, &m);
  if ( v225 < 0 )
    goto LABEL_279;
  v225 = RtlUIntAdd(0, v224, &v781);
  if ( v225 < 0 )
    goto LABEL_279;
  if ( v226 - (int)v781 < v223 )
    goto LABEL_574;
  v785 = (size_t)m;
  v225 = RtlULongLongAdd((unsigned __int64)m, v223, &m);
  if ( v225 < 0 )
    goto LABEL_279;
  v225 = RtlUIntAdd((unsigned int)v781, v227, &v781);
  if ( v225 < 0 )
    goto LABEL_279;
  if ( v228 - (int)v781 < v229 )
    goto LABEL_574;
  v230 = *(unsigned int *)m;
  v225 = RtlULongLongAdd((unsigned __int64)m, v229, &m);
  if ( v225 < 0 )
    goto LABEL_279;
  v225 = RtlUIntAdd((unsigned int)v781, v231, &v781);
  if ( v225 < 0 )
    goto LABEL_279;
  if ( v232 - (int)v781 < (unsigned int)v230 )
    goto LABEL_574;
  v787 = m;
  v225 = RtlULongLongAdd((unsigned __int64)m, (unsigned int)v230, &m);
  if ( v225 < 0 )
    goto LABEL_279;
  v225 = RtlUIntAdd((unsigned int)v781, v233, &v781);
  if ( v225 < 0 )
    goto LABEL_279;
  if ( v234 - (int)v781 < v235 )
    goto LABEL_574;
  v236 = *(unsigned int *)m;
  v225 = RtlULongLongAdd((unsigned __int64)m, v235, &m);
  if ( v225 < 0 )
    goto LABEL_279;
  v225 = RtlUIntAdd((unsigned int)v781, v237, &v781);
  if ( v225 < 0 )
    goto LABEL_279;
  if ( v238 - (int)v781 < (unsigned int)v236 )
    goto LABEL_574;
  v225 = RtlUIntAdd((unsigned int)v781, v236, &v781);
  if ( v225 < 0 )
    goto LABEL_279;
  if ( v239 != (_DWORD)v781 || v223 + (_DWORD)v236 + (_DWORD)v230 + 12LL != v239 )
  {
LABEL_574:
    v225 = -1073741762;
    goto LABEL_279;
  }
  v240 = GetProcessHeap();
  v241 = HeapAlloc(v240, 8u, 0x30uLL);
  v8 = 0LL;
  v242 = v241;
  if ( v241 )
  {
    v225 = 0;
    if ( v785 )
    {
      *(_DWORD *)v241 = v223;
      v243 = GetProcessHeap();
      v244 = HeapAlloc(v243, 8u, v223);
      v8 = 0LL;
      if ( !v244 )
        goto LABEL_576;
      v242[1] = v244;
      memcpy_0(v244, (const void *)v785, v223);
      v8 = 0LL;
    }
    else
    {
      *(_DWORD *)v241 = 0;
      v241[1] = 0LL;
    }
    v245 = v787;
    if ( v787 )
    {
      *((_DWORD *)v242 + 4) = v230;
      v246 = GetProcessHeap();
      v247 = HeapAlloc(v246, 8u, v230);
      v8 = 0LL;
      if ( !v247 )
        goto LABEL_576;
      v242[3] = v247;
      v225 = 0;
      memcpy_0(v247, v245, v230);
      v8 = 0LL;
    }
    else
    {
      *((_DWORD *)v242 + 4) = 0;
      v242[3] = 0LL;
    }
    v248 = m;
    if ( !m )
    {
      *((_DWORD *)v242 + 8) = 0;
      v242[5] = 0LL;
      goto LABEL_274;
    }
    *((_DWORD *)v242 + 8) = v236;
    v249 = GetProcessHeap();
    v250 = HeapAlloc(v249, 8u, v236);
    v8 = 0LL;
    if ( v250 )
    {
      v242[5] = v250;
      v225 = 0;
      memcpy_0(v250, v248, v236);
      v8 = 0LL;
LABEL_274:
      v222 = v242;
      v242 = 0LL;
      goto LABEL_275;
    }
LABEL_576:
    v225 = -1073741801;
LABEL_275:
    if ( v242 )
    {
      v419 = (void *)v242[1];
      if ( v419 )
      {
        v420 = GetProcessHeap();
        HeapFree(v420, 0, v419);
        v242[1] = 0LL;
      }
      v421 = (void *)v242[3];
      if ( v421 )
      {
        v422 = GetProcessHeap();
        HeapFree(v422, 0, v421);
        v242[3] = 0LL;
      }
      v423 = (void *)v242[5];
      if ( v423 )
      {
        v424 = GetProcessHeap();
        HeapFree(v424, 0, v423);
        v242[5] = 0LL;
      }
      v425 = GetProcessHeap();
      HeapFree(v425, 0, v242);
      v8 = 0LL;
    }
    goto LABEL_276;
  }
  v225 = -1073741801;
LABEL_276:
  if ( v225 >= 0 )
  {
    v828 = v222;
    v222 = 0LL;
  }
  if ( v222 )
  {
    v426 = (void *)v222[1];
    if ( v426 )
    {
      v427 = GetProcessHeap();
      HeapFree(v427, 0, v426);
      v222[1] = 0LL;
    }
    v428 = (void *)v222[3];
    if ( v428 )
    {
      v429 = GetProcessHeap();
      HeapFree(v429, 0, v428);
      v222[3] = 0LL;
    }
    v430 = (void *)v222[5];
    if ( v430 )
    {
      v431 = GetProcessHeap();
      HeapFree(v431, 0, v430);
      v222[5] = 0LL;
    }
    v432 = GetProcessHeap();
    HeapFree(v432, 0, v222);
    v8 = 0LL;
  }
LABEL_279:
  v10 = v225 | 0x10000000;
  LODWORD(v781) = v10;
  if ( v10 < 0 )
    goto LABEL_335;
  v251 = (wchar_t *)v8;
  v833 = (wchar_t *)v8;
  v252 = (int)v8;
  v874 = (unsigned __int64)v8;
  if ( !v828 || (v253 = (unsigned __int8 *)*((_QWORD *)v828 + 1), (v787 = v253) == 0LL) || *(_DWORD *)v828 == (_DWORD)v8 )
  {
    v252 = -1073741811;
    goto LABEL_302;
  }
  if ( !*(_DWORD *)v828 )
    goto LABEL_612;
  v254 = *(unsigned int *)v828 - 8LL;
  v803 = v254;
  v255 = MemoryAlloc(v254);
  v8 = 0LL;
  v785 = (size_t)v255;
  v256 = v255;
  if ( !v255 )
  {
    v251 = v833;
    goto LABEL_612;
  }
  v257 = 0;
  LOBYTE(v784) = 0;
  v258 = v253;
  v259 = v256;
  v260 = v254 & 7;
  if ( (v254 & 7) == 0 )
  {
    LODWORD(dwBytes) = 0;
    v261 = -1;
    v262 = 0;
    v789 = 0;
    v263 = 0;
LABEL_287:
    v794 = v263;
    goto LABEL_288;
  }
  v789 = -1;
  v794 = 0;
  v261 = 0;
  LODWORD(dwBytes) = 0;
  v433 = 0;
  v434 = 0;
  v435 = 56;
  do
  {
    v436 = *v258;
    if ( v434 >= 4 )
      v261 |= v436 << v435;
    else
      v433 |= v436 << (v435 - 32);
    ++v258;
    ++v434;
    v435 -= 8;
  }
  while ( v434 < v260 );
  LODWORD(dwBytes) = v433;
  v263 = v433 ^ 0x95D05BAD;
  v437 = v261 ^ 0x2197039C;
  v794 = v433 ^ 0x95D05BAD;
  v438 = 0;
  v789 = v261 ^ 0x2197039C;
  if ( (v254 & 7) != 0 )
  {
    do
    {
      if ( v438 >= 4 )
      {
        v437 = __ROL4__(v437, 8);
        *v259 = v437;
      }
      else
      {
        v263 = __ROL4__(v263, 8);
        *v259 = v263;
      }
      ++v259;
      ++v438;
    }
    while ( v438 < v260 );
    v263 = v794;
    v437 = v789;
  }
  v439 = v260 - 4;
  if ( v260 - 4 <= 0 )
  {
    v789 = 0;
    v262 = 0;
    if ( v439 < 0 )
    {
      v263 = v263 >> (-8 * v439) << (-8 * v439);
      goto LABEL_287;
    }
  }
  else
  {
    v262 = v437 >> (8 * (4 - v439)) << (8 * (4 - v439));
    v789 = v262;
  }
LABEL_288:
  v264 = v254 >> 3;
  if ( v254 >> 3 )
  {
    v265 = dwBytes;
    v266 = v259 + 7;
    v267 = v258 + 2;
    do
    {
      v268 = *(v267 - 1) | (*(v267 - 2) << 8);
      v269 = v267[2] << 8;
      v270 = *v267;
      v267 += 8;
      v271 = *(v267 - 7) | ((v270 | (v268 << 8)) << 8);
      v272 = v271 ^ v263;
      v273 = *(v267 - 3) | ((*(v267 - 4) | ((*(v267 - 5) | v269) << 8)) << 8);
      v274 = v272 ^ v273 ^ v262 ^ 0x501779F2;
      v275 = (__ROL4__(v274, 10) + 14503 * __ROL4__(v274 - 347095381, 5)) ^ v272;
      v276 = (5296 * __ROR4__(v275 + 1151809703, 9) - __ROL4__(v275, 2)) ^ v274;
      v277 = (16725 * (v276 - 14503) - (v276 >> 13)) ^ v275;
      v278 = (17575 * __ROL4__(v277 ^ 0x14B0, 6) - __ROL4__(v277, 2)) ^ v276;
      v279 = (1151809703 - (v278 ^ 0x14B04155)) ^ v277;
      v280 = (5296 * (v279 ^ 0x38A7)) ^ __ROR4__(v279, 6) ^ v278;
      v281 = (__ROL4__(v280, 2) + 16725 * __ROR4__(v280 + 1151809703, 15)) ^ v279;
      v282 = (17575 * __ROR4__(v281 - 347095381, 14) - __ROL4__(v281, 8)) ^ v280;
      v283 = __ROR4__(v282, 10) ^ (14503 * __ROR4__(v282 ^ 0x14B04155, 12)) ^ v281;
      v284 = (v283 >> 10) ^ (5296 * (v283 ^ 0x44A7)) ^ v282;
      v285 = (17575 * (__ROR4__(~v284, 5) + 16725)) ^ v283;
      v286 = v285 ^ v284 ^ 0x501779F2;
      v287 = (1151809703 - (v286 ^ 0x14B04155)) ^ v285;
      v288 = (5296 * __ROL4__(v287 + 1151809703, 2) - __ROL4__(v287, 6)) ^ v286;
      v289 = __ROR4__(v288, 3) ^ (16725 * __ROL4__(v288 - 1151809703, 15)) ^ v287;
      v290 = (v289 >> 10) ^ (17575 * (v289 ^ 0x4155)) ^ v288;
      v291 = (14503 * __ROL4__(347095381 - v290, 1) - __ROL4__(v290, 4)) ^ v289;
      v292 = (5296 * (v291 ^ 0x38A7) + __ROR4__(v291, 10)) ^ v290;
      v293 = (14503 * (__ROR4__(v292, 10) ^ 0x4155)) ^ v291;
      v294 = (17575 * (v293 - 14503) - (v293 >> 8)) ^ v292;
      v295 = __ROR4__(v294, 8) ^ (14503 * __ROL4__(v294 - 347095381, 8)) ^ v293;
      v296 = (5296 * __ROL4__(v295 ^ 0x44A738A7, 3) - (v295 >> 8)) ^ v294;
      v789 = v261 ^ v296;
      v261 = v273;
      v297 = v265 ^ (16725 * __ROR4__(v296 - 1151809703, 3) - __ROR4__(v296, 13));
      v265 = v271;
      v794 = v297 ^ v295;
      *(v266 - 4) = v297 ^ v295;
      v794 = __ROR4__(v794, 8);
      *v266 = v789;
      v266 += 8;
      v789 = __ROR4__(v789, 8);
      *(v266 - 13) = v794;
      v794 = __ROR4__(v794, 8);
      *(v266 - 9) = v789;
      v789 = __ROR4__(v789, 8);
      *(v266 - 14) = v794;
      v794 = __ROR4__(v794, 8);
      *(v266 - 10) = v789;
      v789 = __ROR4__(v789, 8);
      *(v266 - 15) = v794;
      *(v266 - 11) = v789;
      v263 = __ROR4__(v794, 8);
      v262 = __ROR4__(v789, 8);
      v794 = v263;
      v789 = v262;
      --v264;
    }
    while ( v264 );
    v257 = v784;
    v254 = v803;
    v256 = (_BYTE *)v785;
  }
  v8 = 0LL;
  for ( j = 0LL; j < v254; ++j )
    v257 ^= v256[j];
  if ( v257 == *(_QWORD *)((char *)v787 + v254) )
  {
    v251 = (wchar_t *)v256;
    v874 = v254;
    v833 = (wchar_t *)v256;
    v256 = 0LL;
    v299 = v252;
  }
  else
  {
    v251 = v833;
    v299 = -1073425151;
  }
  if ( v256 )
  {
    MemoryFree(v256);
    v251 = v833;
    v8 = 0LL;
  }
  if ( v299 >= 0 )
  {
    psza = v251;
    v251 = 0LL;
    v833 = 0LL;
    v811 = v874;
    goto LABEL_300;
  }
LABEL_612:
  v252 = -1073741823;
LABEL_300:
  if ( v251 )
  {
    v440 = GetProcessHeap();
    HeapFree(v440, 0, v251);
    v8 = 0LL;
    v833 = 0LL;
  }
LABEL_302:
  v10 = v252 | 0x10000000;
  LODWORD(v781) = v10;
  if ( v10 >= 0 )
  {
    LODWORD(dwBytes) = (_DWORD)v8;
    v785 = (size_t)psza;
    if ( v811 >= 4 )
    {
      LODWORD(v787) = *(_DWORD *)psza;
      v301 = RtlULongLongAdd((unsigned __int64)psza, 4LL, &v785);
      if ( v301 < 0 )
        goto LABEL_333;
      v301 = RtlUIntAdd(0, v300, &dwBytes);
      if ( v301 < 0 )
        goto LABEL_333;
      if ( v811 - (unsigned int)dwBytes >= v303 )
      {
        v304 = *(unsigned int *)v785;
        v301 = RtlULongLongAdd(v785, v302, &v785);
        if ( v301 < 0 )
          goto LABEL_333;
        v301 = RtlUIntAdd(dwBytes, v305, &dwBytes);
        if ( v301 < 0 )
          goto LABEL_333;
        if ( v811 - (unsigned int)dwBytes >= (unsigned int)v304 )
        {
          v301 = RtlUIntAdd(dwBytes, v304, &dwBytes);
          if ( v301 < 0 )
            goto LABEL_333;
          v308 = (const void *)v785;
          if ( (unsigned __int64)v811 + v306 >= v304 + v785 && v306 + v811 - v304 - v785 < 8 )
          {
            v309 = v307;
            v301 = (int)v307;
            v310 = (unsigned int)v307;
            if ( !v785 )
              goto LABEL_325;
            v301 = RtlULongLongAdd(v785, (unsigned int)v304, &v803);
            if ( v301 < 0 )
              goto LABEL_331;
            v312 = v803;
            if ( (unsigned __int64)v308 < v803 )
            {
              do
              {
                v301 = RtlULongLongAdd(v311, 4LL, &v803);
                if ( v301 < 0 )
                  goto LABEL_331;
                if ( v803 > v314 )
                  goto LABEL_613;
                v315 = RtlUIntAdd(4u, *v313, &m);
                v301 = v315;
                if ( v315 >= 0 )
                  v317 = (unsigned int)m;
                v869 = v317;
                if ( v315 < 0 )
                  goto LABEL_333;
                v301 = RtlULongLongAdd(v316, v317, &v785);
                if ( v301 < 0 )
                  goto LABEL_333;
                v311 = v785;
                if ( v785 > v312 )
                  goto LABEL_613;
                ++v310;
              }
              while ( v785 < v312 );
            }
            if ( v311 == v312 )
            {
LABEL_325:
              if ( (_DWORD)v304 )
              {
                v318 = GetProcessHeap();
                v309 = HeapAlloc(v318, 8u, v304);
                if ( !v309 )
                {
                  v301 = -1073741801;
                  goto LABEL_331;
                }
                v301 = 0;
              }
              if ( v308 )
                memcpy_0(v309, v308, v304);
              *((_QWORD *)&v810 + 1) = v309;
              *(_QWORD *)&v810 = __PAIR64__(v304, v310);
LABEL_331:
              if ( v301 < 0 || (_DWORD)v787 == (_DWORD)v810 )
                goto LABEL_333;
              goto LABEL_615;
            }
LABEL_613:
            v301 = -1073741811;
LABEL_333:
            v10 = v301 | 0x10000000;
            v8 = 0LL;
LABEL_334:
            LODWORD(v781) = v10;
            goto LABEL_335;
          }
        }
      }
    }
LABEL_615:
    v301 = -1073741762;
    goto LABEL_333;
  }
LABEL_335:
  v319 = (void *)pcchLength;
  if ( pcchLength )
  {
    v320 = GetProcessHeap();
    HeapFree(v320, 0, v319);
    v8 = 0LL;
  }
  v321 = v849;
  if ( v849 )
  {
    v322 = (void *)*((_QWORD *)v849 + 1);
    if ( v322 )
    {
      v323 = GetProcessHeap();
      HeapFree(v323, 0, v322);
      v321[1] = 0LL;
    }
    v324 = (void *)v321[3];
    if ( v324 )
    {
      v325 = GetProcessHeap();
      HeapFree(v325, 0, v324);
      v321[3] = 0LL;
    }
    v326 = (void *)v321[5];
    if ( v326 )
    {
      v327 = GetProcessHeap();
      HeapFree(v327, 0, v326);
      v321[5] = 0LL;
    }
    v328 = GetProcessHeap();
    HeapFree(v328, 0, v321);
    v8 = 0LL;
    v849 = 0LL;
  }
  v329 = v813;
  if ( v813 )
  {
    v330 = GetProcessHeap();
    HeapFree(v330, 0, v329);
    v8 = 0LL;
  }
  v331 = v826;
  if ( v826 )
  {
    v332 = GetProcessHeap();
    HeapFree(v332, 0, v331);
    v8 = 0LL;
  }
  v333 = v828;
  if ( v828 )
  {
    v334 = (void *)*((_QWORD *)v828 + 1);
    if ( v334 )
    {
      v335 = GetProcessHeap();
      HeapFree(v335, 0, v334);
      v333[1] = 0LL;
    }
    v336 = (void *)v333[3];
    if ( v336 )
    {
      v337 = GetProcessHeap();
      HeapFree(v337, 0, v336);
      v333[3] = 0LL;
    }
    v338 = (void *)v333[5];
    if ( v338 )
    {
      v339 = GetProcessHeap();
      HeapFree(v339, 0, v338);
      v333[5] = 0LL;
    }
    v340 = GetProcessHeap();
    HeapFree(v340, 0, v333);
    v8 = 0LL;
  }
  v341 = (wchar_t *)psza;
  if ( psza )
  {
    v342 = GetProcessHeap();
    HeapFree(v342, 0, v341);
    v8 = 0LL;
  }
  if ( v10 < 0 )
    goto LABEL_442;
  if ( !(_DWORD)v810 )
    goto LABEL_616;
  if ( *((unsigned __int8 **)&v810 + 1) == v8 || (unsigned int)v810 <= (unsigned int)v8 )
  {
    v10 = -1073741811;
    LODWORD(v781) = -1073741811;
  }
  else
  {
    pcchLength = *((_QWORD *)&v810 + 1);
    LODWORD(v781) = RtlULongLongAdd(*((unsigned __int64 *)&v810 + 1), 4LL, &pcchLength);
    v10 = (int)v781;
    if ( (int)v781 < 0 )
    {
      v343 = v871;
      v344 = v911;
    }
    else
    {
      v344 = (int *)pcchLength;
      v871 = v343;
      if ( !v343 )
        v344 = (int *)v8;
      v911 = v344;
    }
    if ( (int)v781 < 0 )
      goto LABEL_442;
    if ( v343 != 4 )
      goto LABEL_619;
    v817 = *v344;
  }
  if ( v10 < 0 )
    goto LABEL_442;
  v10 = v817;
  if ( v817 == -805306333 )
    v10 = -2147024774;
  LODWORD(v781) = v10;
  v817 = v10;
  if ( v10 != -2147024774 && v10 < 0 )
    goto LABEL_442;
  if ( (_DWORD)v810 != 6 )
  {
LABEL_616:
    v10 = -1073425151;
    goto LABEL_441;
  }
  if ( *((unsigned __int8 **)&v810 + 1) == v8 )
  {
    v10 = -1073741811;
    LODWORD(v781) = -1073741811;
    goto LABEL_388;
  }
  v345 = (void *)*((_QWORD *)&v810 + 1);
  m = (void *)*((_QWORD *)&v810 + 1);
  do
  {
    LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v345, 4LL, &m);
    v10 = (int)v781;
    if ( (int)v781 < 0 )
    {
      v8 = 0LL;
      goto LABEL_622;
    }
    v347 = RtlULongLongAdd((unsigned __int64)m, v346, &m);
    v8 = 0LL;
    LODWORD(v781) = v347;
    v10 = v347;
    if ( v347 < 0 )
      goto LABEL_622;
    v345 = m;
  }
  while ( v348 == -1 );
  LODWORD(v781) = RtlULongLongAdd((unsigned __int64)m, 4LL, &m);
  v10 = (int)v781;
  if ( (int)v781 < 0 )
  {
LABEL_622:
    v349 = v862;
    v350 = v894;
    goto LABEL_385;
  }
  v350 = m;
  v862 = v349;
  if ( !v349 )
    v350 = v8;
  v894 = v350;
LABEL_385:
  if ( v10 < 0 )
    goto LABEL_442;
  if ( v349 != 8 )
    goto LABEL_619;
  v909 = *v350;
LABEL_388:
  if ( v10 < 0 )
    goto LABEL_442;
  if ( *((unsigned __int8 **)&v810 + 1) == v8 )
  {
    v10 = -1073741811;
    LODWORD(v781) = -1073741811;
LABEL_401:
    if ( v10 < 0 )
      goto LABEL_442;
    if ( *((unsigned __int8 **)&v810 + 1) == v8 )
    {
      v10 = -1073741811;
      goto LABEL_441;
    }
    v357 = (void *)*((_QWORD *)&v810 + 1);
    m = (void *)*((_QWORD *)&v810 + 1);
    while ( 1 )
    {
      LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v357, 4LL, &m);
      v10 = (int)v781;
      if ( (int)v781 < 0 )
        break;
      LODWORD(v781) = RtlULongLongAdd((unsigned __int64)m, v358, &m);
      v10 = (int)v781;
      if ( (int)v781 < 0 )
        break;
      v357 = m;
      if ( (unsigned int)(v359 + 1) >= 3 )
      {
        LODWORD(v781) = RtlULongLongAdd((unsigned __int64)m, 4LL, &m);
        v10 = (int)v781;
        if ( (int)v781 >= 0 )
        {
          v361 = m;
          v870 = v360;
          if ( !v360 )
            v361 = 0LL;
          v896 = v361;
        }
        break;
      }
    }
    if ( v10 < 0 )
      goto LABEL_633;
    v362 = (unsigned int *)*((_QWORD *)&v810 + 1);
    m = (void *)*((_QWORD *)&v810 + 1);
    do
    {
      v363 = *v362;
      LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v362, 4LL, &m);
      v10 = (int)v781;
      if ( (int)v781 < 0 )
        goto LABEL_628;
      LODWORD(v781) = RtlULongLongAdd((unsigned __int64)m, v363, &m);
      v10 = (int)v781;
      if ( (int)v781 < 0 )
        goto LABEL_628;
      v362 = (unsigned int *)m;
    }
    while ( (unsigned int)(v364 + 1) < 4 );
    LODWORD(v781) = RtlULongLongAdd((unsigned __int64)m, 4LL, &m);
    v10 = (int)v781;
    if ( (int)v781 < 0 )
    {
LABEL_628:
      v365 = v856;
      v366 = v884;
      goto LABEL_420;
    }
    v366 = (unsigned int *)m;
    v856 = v365;
    if ( !v365 )
      v366 = 0LL;
    v884 = v366;
LABEL_420:
    if ( v10 < 0 )
    {
      v367 = v864;
    }
    else
    {
      if ( v365 != 4 )
        goto LABEL_629;
      v367 = *v366;
      v864 = *v366;
    }
    if ( v10 < 0 )
      goto LABEL_633;
    v368 = (unsigned int *)*((_QWORD *)&v810 + 1);
    m = (void *)*((_QWORD *)&v810 + 1);
    do
    {
      v369 = *v368;
      LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v368, 4LL, &m);
      v10 = (int)v781;
      if ( (int)v781 < 0 )
        goto LABEL_635;
      LODWORD(v781) = RtlULongLongAdd((unsigned __int64)m, v369, &m);
      v10 = (int)v781;
      if ( (int)v781 < 0 )
        goto LABEL_635;
      v368 = (unsigned int *)m;
    }
    while ( (unsigned int)(v372 + 1) < 5 );
    LODWORD(v781) = RtlULongLongAdd((unsigned __int64)m, 4LL, &m);
    v10 = (int)v781;
    if ( (int)v781 < 0 )
    {
LABEL_635:
      v373 = v858;
      v374 = v898;
      goto LABEL_432;
    }
    v374 = m;
    v858 = v373;
    if ( !v373 )
      v374 = 0LL;
    v898 = v374;
LABEL_432:
    if ( v10 < 0 )
    {
      v375 = v837;
LABEL_435:
      if ( v10 >= 0 )
      {
        if ( v882 == v909 )
        {
          v836 = v860;
          v845 = v367;
          v822 = v375;
          if ( v367 <= 4 && v370 <= 4 )
          {
            memcpy_0(v877, v371, v370);
            v8 = 0LL;
            if ( v817 )
              v10 = v817;
            goto LABEL_441;
          }
          v10 = -2147024774;
          LODWORD(v781) = -2147024774;
          goto LABEL_633;
        }
        v10 = -1073425151;
        goto LABEL_631;
      }
LABEL_633:
      v8 = 0LL;
      goto LABEL_442;
    }
    if ( v373 == 4 )
    {
      v375 = *v374;
      v837 = *v374;
      goto LABEL_435;
    }
LABEL_629:
    v10 = -1073741789;
LABEL_631:
    LODWORD(v781) = v10;
    goto LABEL_633;
  }
  v351 = (void *)*((_QWORD *)&v810 + 1);
  m = (void *)*((_QWORD *)&v810 + 1);
  do
  {
    LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v351, 4LL, &m);
    v10 = (int)v781;
    if ( (int)v781 < 0 )
    {
      v8 = 0LL;
      goto LABEL_625;
    }
    v353 = RtlULongLongAdd((unsigned __int64)m, v352, &m);
    v8 = 0LL;
    LODWORD(v781) = v353;
    v10 = v353;
    if ( v353 < 0 )
      goto LABEL_625;
    v351 = m;
  }
  while ( (unsigned int)(v354 + 1) < 2 );
  LODWORD(v781) = RtlULongLongAdd((unsigned __int64)m, 4LL, &m);
  v10 = (int)v781;
  if ( (int)v781 < 0 )
  {
LABEL_625:
    v355 = v854;
    v356 = v907;
    goto LABEL_398;
  }
  v356 = m;
  v854 = v355;
  if ( !v355 )
    v356 = v8;
  v907 = v356;
LABEL_398:
  if ( v10 >= 0 )
  {
    if ( v355 == 4 )
    {
      v860 = *v356;
      goto LABEL_401;
    }
LABEL_619:
    v10 = -1073741789;
LABEL_441:
    LODWORD(v781) = v10;
  }
LABEL_442:
  v4 = v783;
LABEL_443:
  v5 = v782;
LABEL_444:
  v376 = (void *)*((_QWORD *)&v786 + 1);
  *(_QWORD *)&v786 = 0LL;
  if ( *((_QWORD *)&v786 + 1) )
  {
    v377 = GetProcessHeap();
    HeapFree(v377, 0, v376);
    v8 = 0LL;
    *((_QWORD *)&v786 + 1) = 0LL;
  }
  v378 = (void *)*((_QWORD *)&v810 + 1);
  *(_QWORD *)&v810 = 0LL;
  if ( *((_QWORD *)&v810 + 1) )
  {
    v379 = GetProcessHeap();
    HeapFree(v379, 0, v378);
    v8 = 0LL;
    *((_QWORD *)&v810 + 1) = 0LL;
  }
  if ( v4 )
  {
    v380 = GetProcessHeap();
    HeapFree(v380, 0, v4);
    v8 = 0LL;
  }
  if ( v5 )
  {
    v381 = GetProcessHeap();
    HeapFree(v381, 0, v5);
    v8 = 0LL;
  }
  if ( v10 < 0 )
    goto LABEL_1044;
  if ( v822 == (_DWORD)v8 )
    goto LABEL_454;
  v783 = v8;
  *(_QWORD *)((char *)&v797 + 4) = 0LL;
  v441 = v8;
  HIDWORD(v797) = 0;
  v442 = v8;
  *(_QWORD *)((char *)&v835 + 4) = 0LL;
  HIDWORD(v835) = 0;
  LODWORD(v797) = (_DWORD)v8;
  LODWORD(v835) = (_DWORD)v8;
  v818 = (int)v8;
  v900 = &unk_1800BB3E0;
  v876 = 160LL;
  v443 = GetProcessHeap();
  v444 = HeapAlloc(v443, 8u, 0xA0uLL);
  v8 = 0LL;
  v445 = v444;
  if ( !v444 )
    goto LABEL_1034;
  memcpy_0(v444, v900, v876);
  v446 = (unsigned int)v876;
  v441 = v445;
  v782 = v445;
  v880 = 8LL;
  v903 = &unk_1800BB528;
  v447 = GetProcessHeap();
  v448 = HeapAlloc(v447, 8u, 8uLL);
  v8 = 0LL;
  v449 = v448;
  if ( !v448 )
    goto LABEL_1033;
  memcpy_0(v448, v903, v880);
  v450 = v880;
  v783 = v449;
  v902 = __rdtsc();
  LODWORD(dwBytes) = 0;
  if ( (int)RtlUIntAdd(4u, 4, &m) < 0 )
    goto LABEL_681;
  v824 = (int)m;
  if ( (int)RtlUIntAdd(0, (int)m, &dwBytes) < 0 )
    goto LABEL_681;
  if ( (int)RtlUIntAdd(v451, v446, &m) < 0 )
    goto LABEL_681;
  v824 = (int)m;
  v452 = RtlUIntAdd(dwBytes, (int)m, &dwBytes);
  if ( (v454 | v452) < 0 )
    goto LABEL_681;
  if ( (int)RtlUIntAdd(v453, v450, &m) < 0 )
    goto LABEL_681;
  v824 = (int)m;
  v455 = RtlUIntAdd(dwBytes, (int)m, &dwBytes);
  if ( (v457 | v455) < 0 )
    goto LABEL_681;
  if ( (int)RtlUIntAdd(v456, (int)v8 + 8, &m) < 0 )
    goto LABEL_681;
  v824 = (int)m;
  v458 = RtlUIntAdd(dwBytes, (int)m, &dwBytes);
  if ( (v459 | v458) < 0 )
    goto LABEL_681;
  DWORD1(v797) = dwBytes;
  v460 = dwBytes;
  v461 = GetProcessHeap();
  v462 = HeapAlloc(v461, 8u, v460);
  v8 = 0LL;
  if ( !v462 )
    goto LABEL_681;
  *((_QWORD *)&v797 + 1) = v462;
  LODWORD(v797) = 0;
  v463 = 4;
  v842 = 4;
  if ( &v842 )
  {
    v464 = RtlULongLongAdd((unsigned __int64)v462, 4LL, &v805);
    if ( v464 >= 0 && v465 + 2 <= (unsigned int *)((char *)v465 + DWORD1(v797)) )
    {
      v466 = v805;
      *v465 = v463;
      *v466 = v842;
      LODWORD(v797) = v797 + 1;
      goto LABEL_653;
    }
    goto LABEL_681;
  }
  v464 = -1073741811;
LABEL_653:
  if ( v464 < 0 )
  {
LABEL_681:
    v441 = v445;
    v442 = v449;
    goto LABEL_1034;
  }
  if ( !(_DWORD)v446 )
  {
    v472 = -1073741811;
    goto LABEL_667;
  }
  if ( *((unsigned __int8 **)&v797 + 1) != v8 )
  {
    v467 = (int *)*((_QWORD *)&v797 + 1);
    psza = (STRSAFE_PCNZWCH)*((_QWORD *)&v797 + 1);
    if ( (_DWORD)v797 )
    {
      while ( (int)RtlUIntAdd(4u, *v467, &m) >= 0 )
      {
        v866 = (int)m;
        if ( (int)RtlULongLongAdd(v468, (unsigned int)m, &psza) < 0 )
        {
LABEL_680:
          v8 = 0LL;
          goto LABEL_681;
        }
        v467 = (int *)psza;
        if ( v469 + 1 >= (unsigned int)v797 )
          goto LABEL_663;
      }
      goto LABEL_1043;
    }
LABEL_663:
    v470 = RtlULongLongAdd((unsigned __int64)v467, 4LL, &v805);
    v8 = 0LL;
    v472 = v470;
    if ( v470 < 0 || (unsigned __int64)v471 + v446 + 4 > *((_QWORD *)&v797 + 1) + (unsigned __int64)DWORD1(v797) )
      goto LABEL_681;
    v473 = v805;
    *v471 = v446;
    memcpy_0(v473, v445, v446);
    LODWORD(v797) = v797 + 1;
    v8 = 0LL;
    v463 = 4;
LABEL_667:
    if ( v472 < 0 )
      goto LABEL_681;
    goto LABEL_668;
  }
  if ( (int)RtlUIntAdd(v463, v446, &m) < 0 )
    goto LABEL_681;
  v866 = (int)m;
  if ( (int)RtlUIntAdd(DWORD1(v797), (int)m, (_DWORD *)&v797 + 1) < 0 )
    goto LABEL_681;
  LODWORD(v797) = v797 + 1;
LABEL_668:
  if ( !v450 )
  {
    v480 = -1073741811;
    goto LABEL_683;
  }
  if ( *((unsigned __int8 **)&v797 + 1) != v8 )
  {
    v475 = (int *)*((_QWORD *)&v797 + 1);
    psza = (STRSAFE_PCNZWCH)*((_QWORD *)&v797 + 1);
    if ( (_DWORD)v797 )
    {
      while ( (int)RtlUIntAdd(4u, *v475, &m) >= 0 )
      {
        v852 = (int)m;
        if ( (int)RtlULongLongAdd(v476, (unsigned int)m, &psza) < 0 )
          goto LABEL_680;
        v475 = (int *)psza;
        if ( v477 + 1 >= (unsigned int)v797 )
          goto LABEL_677;
      }
      goto LABEL_1043;
    }
LABEL_677:
    v478 = RtlULongLongAdd((unsigned __int64)v475, 4LL, &v805);
    v8 = 0LL;
    v480 = v478;
    if ( v478 < 0 || (unsigned __int64)v479 + v450 + 4 > *((_QWORD *)&v797 + 1) + (unsigned __int64)DWORD1(v797) )
      goto LABEL_681;
    v481 = v805;
    *v479 = v450;
    memcpy_0(v481, v449, v450);
    LODWORD(v797) = v797 + 1;
    v8 = 0LL;
LABEL_683:
    if ( v480 < 0 )
      goto LABEL_681;
    v474 = 4;
    goto LABEL_685;
  }
  if ( (int)RtlUIntAdd(v463, v450, &m) < 0 )
    goto LABEL_681;
  v852 = (int)m;
  if ( (int)RtlUIntAdd(DWORD1(v797), (int)m, (_DWORD *)&v797 + 1) < 0 )
    goto LABEL_681;
  LODWORD(v797) = v797 + 1;
LABEL_685:
  v878 = v902;
  if ( !&v878 )
  {
    v485 = -1073741811;
    goto LABEL_698;
  }
  if ( *((unsigned __int8 **)&v797 + 1) != v8 )
  {
    v482 = (int *)*((_QWORD *)&v797 + 1);
    psza = (STRSAFE_PCNZWCH)*((_QWORD *)&v797 + 1);
    if ( (_DWORD)v797 )
    {
      while ( (int)RtlUIntAdd(4u, *v482, &m) >= 0 )
      {
        v853 = (int)m;
        if ( (int)RtlULongLongAdd(v483, (unsigned int)m, &psza) < 0 )
          break;
        v482 = (int *)psza;
        if ( v484 + 1 >= (unsigned int)v797 )
          goto LABEL_694;
      }
LABEL_1043:
      v441 = v445;
      v442 = v449;
      v8 = 0LL;
      goto LABEL_1034;
    }
LABEL_694:
    v485 = RtlULongLongAdd((unsigned __int64)v482, 4LL, &v805);
    v8 = 0LL;
    if ( v485 < 0 || (unsigned __int64)(v486 + 3) > *((_QWORD *)&v797 + 1) + (unsigned __int64)DWORD1(v797) )
      goto LABEL_681;
    v487 = v805;
    *v486 = 8;
    *v487 = v878;
    LODWORD(v797) = v797 + 1;
LABEL_698:
    if ( v485 < 0 )
      goto LABEL_681;
    goto LABEL_699;
  }
  if ( (int)RtlUIntAdd(v474, 8, &m) < 0 )
    goto LABEL_681;
  v853 = (int)m;
  if ( (int)RtlUIntAdd(DWORD1(v797), (int)m, (_DWORD *)&v797 + 1) < 0 )
    goto LABEL_681;
  LODWORD(v797) = v797 + 1;
LABEL_699:
  if ( (int)RtlUIntAdd(v474, v474, &m) < 0 )
    goto LABEL_681;
  v851 = (int)m;
  LODWORD(v787) = (_DWORD)m;
  if ( (int)RtlUIntAdd(v488, 8, &m) < 0 )
    goto LABEL_681;
  v851 = (int)m;
  if ( (int)RtlUIntAdd(v489, (int)m, &v787) < 0 )
    goto LABEL_681;
  v490 = (size_t)v8;
  v850 = v8;
  v785 = (size_t)v8;
  v491 = (unsigned int)v8;
  psza = (STRSAFE_PCNZWCH)v8;
  v492 = v8;
  LODWORD(m) = (_DWORD)v8;
  v815 = v8;
  LODWORD(v799) = (_DWORD)v8;
  v828 = v8;
  v826 = v8;
  v809 = (unsigned int)v8;
  v873 = __rdtsc();
  v808 = 8;
  v493 = RtlUIntAdd(8u, SDWORD1(v797), &v808);
  if ( v493 >= 0 )
  {
    v494 = (v808 + 7) & 0xFFFFFFF8;
    if ( v494 >= v808 )
    {
      v808 = (v808 + 7) & 0xFFFFFFF8;
      v495 = v494;
      v496 = GetProcessHeap();
      v497 = (char *)HeapAlloc(v496, 8u, v495);
      v8 = 0LL;
      v498 = v497;
      if ( v497 )
      {
        v788 = v497;
        *(_DWORD *)v497 = v797;
        v493 = RtlULongLongAdd((unsigned __int64)v497, 4LL, &v788);
        if ( v493 >= 0 )
        {
          v500 = v788;
          *(_DWORD *)v788 = DWORD1(v797);
          v493 = RtlULongLongAdd((unsigned __int64)v500, v499, &v788);
          if ( v493 >= 0 )
          {
            *(_QWORD *)&v498[v808 - 8] = v873;
            memcpy_0(v788, *((const void **)&v797 + 1), DWORD1(v797));
            v491 = v808;
            v8 = 0LL;
            v785 = (size_t)v498;
            v498 = 0LL;
          }
        }
        if ( v498 )
        {
          v501 = GetProcessHeap();
          HeapFree(v501, 0, v498);
          v8 = 0LL;
        }
        v490 = v785;
      }
      else
      {
        v493 = -1073741801;
        v490 = (size_t)v492;
      }
    }
    else
    {
      v493 = -1073741675;
    }
  }
  v502 = v493 | 0x10000000;
  if ( v502 < 0 )
    goto LABEL_989;
  v889 = (__int64 *)v8;
  v503 = v8;
  v891 = (__int64)v8;
  v893 = v8;
  v895 = (__int64)v8;
  v855 = v8;
  v887 = (SIZE_T)v8;
  v803 = (SIZE_T)v8;
  if ( v490 )
  {
    v505 = v491;
    pcchLength = v491;
    if ( v491 && (v804 = v491 + 8LL, v506 = MemoryAlloc(v804), v8 = 0LL, v813 = v506, (v507 = v506) != 0LL) )
    {
      v508 = 0;
      v509 = 0LL;
      LOBYTE(v784) = 0;
      if ( v505 )
      {
        do
        {
          v508 ^= *(_BYTE *)(v509 + v490);
          ++v509;
        }
        while ( v509 < v505 );
        LOBYTE(v784) = v508;
      }
      v510 = (unsigned __int8 *)v490;
      v511 = -1;
      v796 = 0;
      v792 = -1;
      LODWORD(v788) = 0;
      v512 = v507;
      LODWORD(dwBytes) = 0;
      v513 = 0;
      v514 = v505 & 7;
      if ( (v505 & 7) != 0 )
      {
        LODWORD(v788) = 0;
        v515 = 0;
        LODWORD(dwBytes) = 0;
        v516 = 0;
        v517 = 56;
        do
        {
          v518 = *v510;
          if ( v516 >= 4 )
          {
            v519 = dwBytes;
            v515 |= v518 << v517;
          }
          else
          {
            v519 = (v518 << (v517 - 32)) | dwBytes;
            LODWORD(dwBytes) = v519;
          }
          ++v510;
          ++v516;
          v517 -= 8;
        }
        while ( v516 < v514 );
        LODWORD(v788) = v515;
        v513 = v519 ^ 0x90280470;
        v520 = v515 ^ 0xB47C7C45;
        v796 = v519 ^ 0x90280470;
        v521 = 0;
        v792 = v515 ^ 0xB47C7C45;
        if ( (v505 & 7) != 0 )
        {
          do
          {
            if ( v521 >= 4 )
            {
              v520 = __ROL4__(v520, 8);
              *v512 = v520;
            }
            else
            {
              v513 = __ROL4__(v513, 8);
              *v512 = v513;
            }
            ++v512;
            ++v521;
          }
          while ( v521 < v514 );
          v513 = v796;
          v520 = v792;
        }
        v522 = v514 - 4;
        if ( v514 - 4 <= 0 )
        {
          v792 = 0;
          v511 = 0;
          if ( v522 < 0 )
          {
            v513 = v513 >> (-8 * v522) << (-8 * v522);
            v796 = v513;
          }
        }
        else
        {
          v511 = v520 >> (8 * (4 - v522)) << (8 * (4 - v522));
          v792 = v511;
        }
      }
      v523 = v505 >> 3;
      if ( v505 >> 3 )
      {
        v524 = (int)v788;
        v525 = v512 + 7;
        v526 = dwBytes;
        v527 = v510 + 2;
        do
        {
          v528 = v527[1] | ((*v527 | ((*(v527 - 1) | (*(v527 - 2) << 8)) << 8)) << 8);
          v529 = v527[5];
          v530 = (v527[4] | ((v527[3] | (v527[2] << 8)) << 8)) << 8;
          v527 += 8;
          v531 = v529 | v530;
          v532 = v531 ^ v511;
          v533 = v528 ^ (__ROR4__(v532, 8) + 32881 * __ROR4__(-1270087367 - v532, 7)) ^ v513;
          v534 = (47626 * __ROL4__(v533 ^ 0xB44C, 4) - __ROR4__(v533, 2)) ^ v532;
          v535 = __ROL4__(v534, 5) ^ (313 * __ROL4__(v534 + 1173716879, 8)) ^ v533;
          v536 = (46156 * __ROR4__(v535 - 1173716879, 14) - __ROR4__(v535, 15)) ^ v534;
          v537 = v535 ^ v536 ^ 0xE468148;
          v538 = (__ROR4__(v537, 4) + 47626 * __ROR4__(v535 ^ v536 ^ 0xBA0A8071, 4)) ^ v536;
          v539 = (46156 * (__ROR4__(v538, 11) - 313)) ^ v537;
          v540 = (__ROL4__(v539, 8) + 46156 * __ROL4__(v539 ^ 0x139, 7)) ^ v538;
          v541 = v539 ^ (v540 - 32881) ^ 0xB44C0139;
          v542 = (47626 * __ROL4__(v539 ^ (v540 - 32881), 10) - __ROR4__(v541, 14)) ^ v540;
          v543 = (313 * (v542 ^ 0xBA0A)) ^ __ROR4__(v542, 6) ^ v541;
          v544 = (__ROR4__(v543, 3) + 46156 * __ROL4__(v543 - 1173716879, 9)) ^ v542;
          v545 = (v544 >> 15) ^ (32881 * __ROL4__(v544 - 313, 3)) ^ v543;
          v546 = (47626 * (v545 - 313) - (v545 >> 13)) ^ v544;
          v547 = __ROR4__(v546, 11) ^ (313 * __ROR4__(-1173716879 - v546, 9)) ^ v545;
          v548 = (v547 + 1173670723) ^ v546;
          v549 = (32881 * (v548 ^ 0xBA0A) - __ROR4__(v548, 7)) ^ v547;
          v550 = (47626 * __ROL4__(v549 ^ 0xB44C, 4) - __ROR4__(v549, 16)) ^ v548;
          v551 = (__ROR4__(v550, 4) + 313 * __ROR4__(-1173716879 - v550, 10)) ^ v549;
          v552 = __ROR4__(v551, 9) ^ (46156 * __ROR4__(v551 + 1173716879, 4)) ^ v550;
          v553 = (32881 * __ROL4__(v552 ^ 0xB44C0139, 8) - __ROL4__(v552, 2)) ^ v551;
          v554 = (47626 * __ROR4__(-1270087367 - v553, 11) - __ROR4__(v553, 12)) ^ v552;
          v555 = (v554 >> 8) ^ (313 * (v554 ^ 0xBA0A)) ^ v553;
          v796 = v526 ^ v555;
          v526 = v528;
          v792 = v524 ^ v555 ^ v554 ^ 0xE468148;
          v524 = v531;
          *(v525 - 4) = v796;
          v796 = __ROR4__(v796, 8);
          *v525 = v792;
          v525 += 8;
          v792 = __ROR4__(v792, 8);
          *(v525 - 13) = v796;
          v796 = __ROR4__(v796, 8);
          *(v525 - 9) = v792;
          v792 = __ROR4__(v792, 8);
          *(v525 - 14) = v796;
          v796 = __ROR4__(v796, 8);
          *(v525 - 10) = v792;
          v792 = __ROR4__(v792, 8);
          *(v525 - 15) = v796;
          *(v525 - 11) = v792;
          v513 = __ROR4__(v796, 8);
          v511 = __ROR4__(v792, 8);
          v796 = v513;
          v792 = v511;
          --v523;
        }
        while ( v523 );
        v508 = v784;
        v503 = (_QWORD *)v803;
        v505 = pcchLength;
        v507 = v813;
      }
      *(_QWORD *)&v507[v505] = v508;
      v556 = v804;
      v887 = v804;
      v855 = v507;
      v889 = &qword_1800BB520;
      v891 = 8LL;
      v895 = 160LL;
      v893 = (unsigned __int8 *)xmmword_1800BB480;
      v557 = GetProcessHeap();
      v558 = HeapAlloc(v557, 8u, 0x30uLL);
      v8 = 0LL;
      v559 = v558;
      if ( v558 )
      {
        *v558 = v556;
        v560 = GetProcessHeap();
        v561 = HeapAlloc(v560, 8u, v556);
        v8 = 0LL;
        if ( !v561 )
          goto LABEL_747;
        *((_QWORD *)v559 + 1) = v561;
        memcpy_0(v561, v507, v556);
        v559[4] = 160;
        v562 = GetProcessHeap();
        v563 = HeapAlloc(v562, 8u, 0xA0uLL);
        v8 = 0LL;
        if ( !v563 )
          goto LABEL_747;
        *((_QWORD *)v559 + 3) = v563;
        *v563 = xmmword_1800BB480[0];
        v563[1] = xmmword_1800BB480[1];
        v563[2] = xmmword_1800BB480[2];
        v563[3] = xmmword_1800BB480[3];
        v563[4] = xmmword_1800BB480[4];
        v563[5] = xmmword_1800BB480[5];
        v563[6] = xmmword_1800BB480[6];
        v563[7] = xmmword_1800BB480[7];
        v563[8] = xmmword_1800BB480[8];
        v563[9] = xmmword_1800BB480[9];
        v559[8] = 8;
        v564 = GetProcessHeap();
        v565 = HeapAlloc(v564, 8u, 8uLL);
        v8 = 0LL;
        if ( v565 )
        {
          *((_QWORD *)v559 + 5) = v565;
          v503 = v559;
          *v565 = qword_1800BB520;
          v504 = 0;
          v559 = 0LL;
        }
        else
        {
LABEL_747:
          v504 = -1073741801;
        }
        if ( v559 )
        {
          v566 = (void *)*((_QWORD *)v559 + 1);
          if ( v566 )
          {
            v567 = GetProcessHeap();
            HeapFree(v567, 0, v566);
            *((_QWORD *)v559 + 1) = 0LL;
          }
          v568 = (void *)*((_QWORD *)v559 + 3);
          if ( v568 )
          {
            v569 = GetProcessHeap();
            HeapFree(v569, 0, v568);
            *((_QWORD *)v559 + 3) = 0LL;
          }
          v570 = (void *)*((_QWORD *)v559 + 5);
          if ( v570 )
          {
            v571 = GetProcessHeap();
            HeapFree(v571, 0, v570);
            *((_QWORD *)v559 + 5) = 0LL;
          }
          v572 = GetProcessHeap();
          HeapFree(v572, 0, v559);
          v8 = 0LL;
        }
      }
      else
      {
        v504 = -1073741801;
      }
      v492 = v815;
      if ( v504 >= 0 )
      {
        v850 = v503;
        v503 = 0LL;
      }
    }
    else
    {
      v504 = -1073741823;
    }
    v573 = v855;
    if ( v855 )
    {
      v574 = GetProcessHeap();
      HeapFree(v574, 0, v573);
      v8 = 0LL;
      v855 = 0LL;
    }
    if ( v503 )
    {
      v575 = (void *)v503[1];
      if ( v575 )
      {
        v576 = GetProcessHeap();
        HeapFree(v576, 0, v575);
        v503[1] = 0LL;
      }
      v577 = (void *)v503[3];
      if ( v577 )
      {
        v578 = GetProcessHeap();
        HeapFree(v578, 0, v577);
        v503[3] = 0LL;
      }
      v579 = (void *)v503[5];
      if ( v579 )
      {
        v580 = GetProcessHeap();
        HeapFree(v580, 0, v579);
        v503[5] = 0LL;
      }
      v581 = GetProcessHeap();
      HeapFree(v581, 0, v503);
      v8 = 0LL;
    }
  }
  else
  {
    v504 = -1073741811;
  }
  v502 = v504 | 0x10000000;
  if ( v502 < 0 )
    goto LABEL_989;
  v582 = (const void **)v850;
  LODWORD(dwBytes) = 4;
  v583 = RtlUIntAdd(4u, *(_DWORD *)v850, &dwBytes);
  if ( v583 < 0
    || (v583 = RtlUIntAdd(dwBytes, 4, &dwBytes), v583 < 0)
    || (v583 = RtlUIntAdd(dwBytes, *((_DWORD *)v582 + 4), &dwBytes), v583 < 0)
    || (v583 = RtlUIntAdd(dwBytes, 4, &dwBytes), v583 < 0) )
  {
    v584 = v832;
  }
  else
  {
    v583 = RtlUIntAdd(dwBytes, *((_DWORD *)v582 + 8), &dwBytes);
    v584 = v832;
    if ( v583 >= 0 )
      v584 = dwBytes;
    v832 = v584;
  }
  if ( v583 >= 0 )
  {
    v585 = v584;
    v586 = GetProcessHeap();
    v587 = (wchar_t *)HeapAlloc(v586, 8u, v585);
    v8 = 0LL;
    v588 = v587;
    if ( v587 )
    {
      v788 = v587;
      *(_DWORD *)v587 = *(_DWORD *)v582;
      v583 = RtlULongLongAdd((unsigned __int64)v587, 4LL, &v788);
      if ( v583 >= 0 )
      {
        memcpy_0(v788, v582[1], *(unsigned int *)v582);
        v589 = RtlULongLongAdd((unsigned __int64)v788, *(unsigned int *)v582, &v788);
        v8 = 0LL;
        v583 = v589;
        if ( v589 >= 0 )
        {
          v590 = v788;
          *(_DWORD *)v788 = *((_DWORD *)v582 + 4);
          v583 = RtlULongLongAdd((unsigned __int64)v590, 4LL, &v788);
          if ( v583 >= 0 )
          {
            memcpy_0(v788, v582[3], *((unsigned int *)v582 + 4));
            v591 = RtlULongLongAdd((unsigned __int64)v788, *((unsigned int *)v582 + 4), &v788);
            v8 = 0LL;
            v583 = v591;
            if ( v591 >= 0 )
            {
              v592 = v788;
              *(_DWORD *)v788 = *((_DWORD *)v582 + 8);
              v583 = RtlULongLongAdd((unsigned __int64)v592, 4LL, &v788);
              if ( v583 >= 0 )
              {
                memcpy_0(v788, v582[5], *((unsigned int *)v582 + 8));
                v593 = RtlULongLongAdd((unsigned __int64)v788, *((unsigned int *)v582 + 8), &v788);
                v8 = 0LL;
                v583 = v593;
                if ( v593 >= 0 )
                {
                  psza = v588;
                  v588 = 0LL;
                  LODWORD(m) = v832;
                }
              }
            }
          }
        }
      }
      if ( v588 )
      {
        v594 = GetProcessHeap();
        HeapFree(v594, 0, v588);
        v8 = 0LL;
      }
    }
    else
    {
      v583 = -1073741801;
    }
  }
  v502 = v583 | 0x10000000;
  if ( v502 < 0 )
    goto LABEL_989;
  v595 = (int)v8;
  v897 = v8;
  v863 = (int)v8;
  v861 = (int)v8;
  v899 = v8;
  v821 = 8;
  v596 = RtlUIntAdd(8u, (int)v787, &v821);
  v502 = v596 | 0x10000000;
  if ( v596 >= 0 )
  {
    v598 = (v821 + 7) & 0xFFFFFFF8;
    if ( v598 >= v821 )
    {
      v844 = (v821 + 7) & 0xFFFFFFF8;
      v599 = RtlUIntAdd(v598, v597, &v844);
      v600 = v843;
      v502 = v599;
      if ( v599 >= 0 )
        v600 = v844;
      v843 = v600;
    }
    else
    {
      v502 = -1073741675;
    }
    if ( v502 < 0 )
      goto LABEL_989;
    if ( *((unsigned __int8 **)&v797 + 1) == v8 || (unsigned int)v797 <= 1 )
    {
      v502 = -1073741811;
    }
    else
    {
      v601 = (unsigned int *)*((_QWORD *)&v797 + 1);
      v787 = (void *)*((_QWORD *)&v797 + 1);
      do
      {
        v602 = *v601;
        v502 = RtlULongLongAdd((unsigned __int64)v601, 4LL, &v787);
        if ( v502 < 0 )
          goto LABEL_809;
        v502 = RtlULongLongAdd((unsigned __int64)v787, v602, &v787);
        if ( v502 < 0 )
          goto LABEL_809;
        v601 = (unsigned int *)v787;
      }
      while ( v603 == -1 );
      v502 = RtlULongLongAdd((unsigned __int64)v787, 4LL, &v787);
      if ( v502 < 0 )
      {
LABEL_809:
        v8 = 0LL;
        goto LABEL_810;
      }
      v605 = (unsigned __int8 *)v787;
      v861 = v604;
      if ( !v604 )
        v605 = 0LL;
      v8 = 0LL;
      v897 = v605;
LABEL_810:
      if ( v502 >= 0 )
      {
        if ( (unsigned int)v797 <= 2 )
        {
          v502 = -1073741811;
          goto LABEL_813;
        }
        v610 = (unsigned int *)*((_QWORD *)&v797 + 1);
        v787 = (void *)*((_QWORD *)&v797 + 1);
        do
        {
          v611 = *v610;
          v502 = RtlULongLongAdd((unsigned __int64)v610, 4LL, &v787);
          if ( v502 < 0 )
            goto LABEL_824;
          v502 = RtlULongLongAdd((unsigned __int64)v787, v611, &v787);
          if ( v502 < 0 )
            goto LABEL_824;
          v610 = (unsigned int *)v787;
        }
        while ( (unsigned int)(v613 + 1) < 2 );
        v502 = RtlULongLongAdd((unsigned __int64)v787, 4LL, &v787);
        if ( v502 < 0 )
        {
LABEL_824:
          v8 = 0LL;
          goto LABEL_825;
        }
        v615 = (unsigned __int8 *)v787;
        v211 = v614 == 0;
        v595 = v614;
        v8 = 0LL;
        if ( v211 )
          v615 = 0LL;
        v863 = v595;
        v899 = v615;
LABEL_825:
        if ( v502 >= 0 )
        {
          LODWORD(dwBytes) = 4;
          v502 = RtlUIntAdd(4u, v612, &dwBytes);
          if ( v502 < 0
            || (v502 = RtlUIntAdd(dwBytes, 4, &dwBytes), v502 < 0)
            || (v502 = RtlUIntAdd(dwBytes, v616, &dwBytes), v502 < 0)
            || (v502 = RtlUIntAdd(dwBytes, 4, &dwBytes), v502 < 0) )
          {
            v617 = v839;
          }
          else
          {
            v502 = RtlUIntAdd(dwBytes, v595, &dwBytes);
            v617 = v839;
            if ( v502 >= 0 )
              v617 = dwBytes;
            v839 = v617;
          }
          if ( v502 >= 0 )
          {
            if ( v617 <= 0x400000 )
            {
              LODWORD(v799) = v617;
              goto LABEL_813;
            }
            v502 = -2147418113;
          }
        }
        goto LABEL_989;
      }
    }
  }
LABEL_813:
  if ( v502 >= 0 )
  {
    v606 = v799;
    v607 = (int)v8;
    v608 = GetProcessHeap();
    v609 = HeapAlloc(v608, 8u, v606);
    v8 = 0LL;
    if ( v609 )
    {
      v492 = v609;
      v815 = v609;
    }
    else
    {
      v607 = -1073741801;
    }
    v502 = v607 | 0x10000000;
    if ( v502 >= 0 )
    {
      if ( !psza || !v492 )
      {
        v502 = -2147024809;
        goto LABEL_989;
      }
      v915[0] = psza;
      v916 = (int)m;
      v917 = v799;
      v915[1] = v492;
      v918 = 0;
      if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
        && (v618 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
      {
        v619 = ((__int64 (__fastcall *)(__int64, _QWORD *))v618)(134LL, v915);
        v620 = v799;
        v8 = 0LL;
        v502 = v619 | 0x10000000;
        if ( v619 >= 0 )
          v620 = v917;
        LODWORD(v799) = v620;
      }
      else
      {
        v621 = GetLastError();
        v8 = 0LL;
        v502 = v621;
        if ( v621 > 0 )
          v502 = (unsigned __int16)v621 | 0x80070000;
        if ( v502 >= 0 )
          v502 = -2147467259;
        v620 = v799;
      }
      if ( v502 == -805306333 )
      {
        v502 = -2147024774;
        goto LABEL_989;
      }
      if ( v502 >= 0 )
      {
        LODWORD(dwBytes) = 0;
        v622 = 0LL;
        v787 = v492;
        if ( v620 < 4 )
        {
          v623 = -1073741762;
          goto LABEL_912;
        }
        LODWORD(m) = *v492;
        v623 = RtlULongLongAdd((unsigned __int64)v492, 4LL, &v787);
        if ( v623 < 0 || (v623 = RtlUIntAdd(0, v624, &dwBytes), v623 < 0) )
        {
LABEL_911:
          v8 = 0LL;
        }
        else
        {
          if ( v625 - (int)dwBytes < (unsigned int)v626 )
            goto LABEL_878;
          v813 = v787;
          pcchLength = v626;
          v623 = RtlULongLongAdd((unsigned __int64)v787, (unsigned int)v626, &v787);
          if ( v623 < 0 )
            goto LABEL_911;
          v623 = RtlUIntAdd(dwBytes, v627, &dwBytes);
          if ( v623 < 0 )
            goto LABEL_911;
          if ( (unsigned int)(v628 - dwBytes) < 4 )
            goto LABEL_878;
          v629 = *(unsigned int *)v787;
          v623 = RtlULongLongAdd((unsigned __int64)v787, 4LL, &v787);
          if ( v623 < 0 )
            goto LABEL_911;
          v623 = RtlUIntAdd(dwBytes, v630, &dwBytes);
          if ( v623 < 0 )
            goto LABEL_911;
          if ( v631 - (int)dwBytes < (unsigned int)v629 )
            goto LABEL_878;
          v788 = v787;
          v623 = RtlULongLongAdd((unsigned __int64)v787, (unsigned int)v629, &v787);
          if ( v623 < 0 )
            goto LABEL_911;
          v623 = RtlUIntAdd(dwBytes, v632, &dwBytes);
          if ( v623 < 0 )
            goto LABEL_911;
          if ( (unsigned int)(v633 - dwBytes) < 4 )
            goto LABEL_878;
          v634 = *(unsigned int *)v787;
          v623 = RtlULongLongAdd((unsigned __int64)v787, 4LL, &v787);
          if ( v623 < 0 )
            goto LABEL_911;
          v623 = RtlUIntAdd(dwBytes, v635, &dwBytes);
          if ( v623 < 0 )
            goto LABEL_911;
          if ( v636 - (int)dwBytes < (unsigned int)v634 )
            goto LABEL_878;
          v623 = RtlUIntAdd(dwBytes, v634, &dwBytes);
          if ( v623 < 0 )
            goto LABEL_911;
          if ( v637 != (_DWORD)dwBytes || (unsigned int)(v638 + v634 + v629) + 12LL != v637 )
          {
LABEL_878:
            v623 = -1073741762;
            goto LABEL_911;
          }
          v639 = GetProcessHeap();
          v640 = HeapAlloc(v639, 8u, 0x30uLL);
          v8 = 0LL;
          v641 = v640;
          if ( !v640 )
          {
            v623 = -1073741801;
            goto LABEL_901;
          }
          v623 = 0;
          if ( v813 )
          {
            *(_DWORD *)v640 = (_DWORD)m;
            v642 = GetProcessHeap();
            v643 = HeapAlloc(v642, 8u, pcchLength);
            v8 = 0LL;
            if ( v643 )
            {
              v641[1] = v643;
              memcpy_0(v643, v813, pcchLength);
              v8 = 0LL;
              goto LABEL_884;
            }
LABEL_882:
            v623 = -1073741801;
          }
          else
          {
            *(_DWORD *)v640 = 0;
            v640[1] = 0LL;
LABEL_884:
            if ( v788 )
            {
              *((_DWORD *)v641 + 4) = v629;
              v644 = GetProcessHeap();
              v645 = HeapAlloc(v644, 8u, v629);
              v8 = 0LL;
              if ( !v645 )
                goto LABEL_882;
              v641[3] = v645;
              v623 = 0;
              memcpy_0(v645, v788, v629);
              v8 = 0LL;
            }
            else
            {
              *((_DWORD *)v641 + 4) = 0;
              v641[3] = 0LL;
            }
            v646 = v787;
            if ( v787 )
            {
              *((_DWORD *)v641 + 8) = v634;
              v647 = GetProcessHeap();
              v648 = HeapAlloc(v647, 8u, v634);
              v8 = 0LL;
              if ( !v648 )
                goto LABEL_882;
              v641[5] = v648;
              v623 = 0;
              memcpy_0(v648, v646, v634);
              v8 = 0LL;
            }
            else
            {
              *((_DWORD *)v641 + 8) = 0;
              v641[5] = 0LL;
            }
            v622 = v641;
            v641 = 0LL;
          }
          if ( v641 )
          {
            v649 = (void *)v641[1];
            if ( v649 )
            {
              v650 = GetProcessHeap();
              HeapFree(v650, 0, v649);
              v641[1] = 0LL;
            }
            v651 = (void *)v641[3];
            if ( v651 )
            {
              v652 = GetProcessHeap();
              HeapFree(v652, 0, v651);
              v641[3] = 0LL;
            }
            v653 = (void *)v641[5];
            if ( v653 )
            {
              v654 = GetProcessHeap();
              HeapFree(v654, 0, v653);
              v641[5] = 0LL;
            }
            v655 = GetProcessHeap();
            HeapFree(v655, 0, v641);
            v8 = 0LL;
          }
LABEL_901:
          if ( v623 >= 0 )
          {
            v828 = v622;
            v622 = 0LL;
          }
          if ( v622 )
          {
            v656 = (void *)v622[1];
            if ( v656 )
            {
              v657 = GetProcessHeap();
              HeapFree(v657, 0, v656);
              v622[1] = 0LL;
            }
            v658 = (void *)v622[3];
            if ( v658 )
            {
              v659 = GetProcessHeap();
              HeapFree(v659, 0, v658);
              v622[3] = 0LL;
            }
            v660 = (void *)v622[5];
            if ( v660 )
            {
              v661 = GetProcessHeap();
              HeapFree(v661, 0, v660);
              v622[5] = 0LL;
            }
            v662 = GetProcessHeap();
            HeapFree(v662, 0, v622);
            goto LABEL_911;
          }
        }
LABEL_912:
        v502 = v623 | 0x10000000;
        if ( v502 < 0 )
          goto LABEL_989;
        v663 = 0LL;
        v834 = 0LL;
        v664 = 0;
        v875 = 0LL;
        LODWORD(m) = 0;
        if ( !v828 || (v665 = (unsigned __int8 *)*((_QWORD *)v828 + 1), (v813 = v665) == 0LL) || !*(_DWORD *)v828 )
        {
          v664 = -1073741811;
          goto LABEL_954;
        }
        v666 = *(unsigned int *)v828;
        LODWORD(v787) = 0;
        if ( v666 )
        {
          v667 = v666 - 8;
          pcchLength = v667;
          v668 = MemoryAlloc(v667);
          v8 = 0LL;
          v803 = (SIZE_T)v668;
          v669 = v668;
          if ( v668 )
          {
            v670 = 0;
            LOBYTE(v784) = 0;
            v671 = v665;
            v672 = v669;
            v673 = v667 & 7;
            if ( (v667 & 7) != 0 )
            {
              v790 = -1;
              v674 = 0;
              v793 = 0;
              v675 = 0;
              v816 = 0;
              v676 = 0;
              LODWORD(v788) = 0;
              v677 = 56;
              do
              {
                v678 = *v671;
                if ( v676 >= 4 )
                  v674 |= v678 << v677;
                else
                  v675 |= v678 << (v677 - 32);
                ++v671;
                ++v676;
                v677 -= 8;
              }
              while ( v676 < v673 );
              v10 = (int)v781;
              v816 = v674;
              LODWORD(v788) = v675;
              v679 = v674 ^ 0x2197039C;
              v680 = v675 ^ 0x95D05BAD;
              v790 = v816 ^ 0x2197039C;
              v793 = v675 ^ 0x95D05BAD;
              v681 = 0;
              if ( (v667 & 7) != 0 )
              {
                do
                {
                  if ( v681 >= 4 )
                  {
                    v679 = __ROL4__(v679, 8);
                    *v672 = v679;
                  }
                  else
                  {
                    v680 = __ROL4__(v680, 8);
                    *v672 = v680;
                  }
                  ++v672;
                  ++v681;
                }
                while ( v681 < v673 );
                v680 = v793;
                v679 = v790;
              }
              v682 = v673 - 4;
              if ( v682 > 0 )
              {
                v683 = v679 >> (8 * (4 - v682)) << (8 * (4 - v682));
                goto LABEL_936;
              }
              v683 = 0;
              v790 = 0;
              if ( v682 < 0 )
              {
                v680 = v680 >> (-8 * v682) << (-8 * v682);
                v793 = v680;
              }
            }
            else
            {
              LODWORD(v788) = 0;
              v683 = 0;
              v680 = 0;
              v793 = 0;
LABEL_936:
              v790 = v683;
            }
            v684 = v667 >> 3;
            if ( v667 >> 3 )
            {
              v685 = (int)v788;
              v686 = v672 + 7;
              v687 = v816;
              v688 = v671 + 2;
              v689 = v684;
              do
              {
                v690 = *(v688 - 1) | (*(v688 - 2) << 8);
                v691 = v688[2] << 8;
                v692 = *v688;
                v688 += 8;
                v693 = *(v688 - 7) | ((v692 | (v690 << 8)) << 8);
                v694 = v693 ^ v680;
                v695 = *(v688 - 3) | ((*(v688 - 4) | ((*(v688 - 5) | v691) << 8)) << 8);
                v696 = v695 ^ v683 ^ v694 ^ 0x501779F2;
                v697 = (__ROL4__(v696, 10) + 14503 * __ROL4__(v696 - 347095381, 5)) ^ v694;
                v698 = (5296 * __ROR4__(v697 + 1151809703, 9) - __ROL4__(v697, 2)) ^ v696;
                v699 = (16725 * (v698 - 14503) - (v698 >> 13)) ^ v697;
                v700 = (17575 * __ROL4__(v699 ^ 0x14B0, 6) - __ROL4__(v699, 2)) ^ v698;
                v701 = (1151809703 - (v700 ^ 0x14B04155)) ^ v699;
                v702 = (5296 * (v701 ^ 0x38A7)) ^ __ROR4__(v701, 6) ^ v700;
                v703 = (__ROL4__(v702, 2) + 16725 * __ROR4__(v702 + 1151809703, 15)) ^ v701;
                v704 = (17575 * __ROR4__(v703 - 347095381, 14) - __ROL4__(v703, 8)) ^ v702;
                v705 = __ROR4__(v704, 10) ^ (14503 * __ROR4__(v704 ^ 0x14B04155, 12)) ^ v703;
                v706 = (v705 >> 10) ^ (5296 * (v705 ^ 0x44A7)) ^ v704;
                v707 = (17575 * (__ROR4__(~v706, 5) + 16725)) ^ v705;
                v708 = v706 ^ v707 ^ 0x501779F2;
                v709 = (1151809703 - (v706 ^ v707 ^ 0x44A738A7)) ^ v707;
                v710 = (5296 * __ROL4__(v709 + 1151809703, 2) - __ROL4__(v709, 6)) ^ v708;
                v711 = __ROR4__(v710, 3) ^ (16725 * __ROL4__(v710 - 1151809703, 15)) ^ v709;
                v712 = (v711 >> 10) ^ (17575 * (v711 ^ 0x4155)) ^ v710;
                v713 = (14503 * __ROL4__(347095381 - v712, 1) - __ROL4__(v712, 4)) ^ v711;
                v714 = (5296 * (v713 ^ 0x38A7) + __ROR4__(v713, 10)) ^ v712;
                v715 = (14503 * (__ROR4__(v714, 10) ^ 0x4155)) ^ v713;
                v716 = (17575 * (v715 - 14503) - (v715 >> 8)) ^ v714;
                v717 = __ROR4__(v716, 8) ^ (14503 * __ROL4__(v716 - 347095381, 8)) ^ v715;
                v718 = (5296 * __ROL4__(v717 ^ 0x44A738A7, 3) - (v717 >> 8)) ^ v716;
                v790 = v687 ^ v718;
                v687 = v695;
                v719 = v685 ^ v717 ^ (16725 * __ROR4__(v718 - 1151809703, 3) - __ROR4__(v718, 13));
                v685 = v693;
                v793 = v719;
                *(v686 - 4) = v719;
                v793 = __ROR4__(v793, 8);
                *v686 = v790;
                v686 += 8;
                v790 = __ROR4__(v790, 8);
                *(v686 - 13) = v793;
                v793 = __ROR4__(v793, 8);
                *(v686 - 9) = v790;
                v790 = __ROR4__(v790, 8);
                *(v686 - 14) = v793;
                v793 = __ROR4__(v793, 8);
                *(v686 - 10) = v790;
                v790 = __ROR4__(v790, 8);
                *(v686 - 15) = v793;
                *(v686 - 11) = v790;
                v680 = __ROR4__(v793, 8);
                v683 = __ROR4__(v790, 8);
                v793 = v680;
                v790 = v683;
                --v689;
              }
              while ( v689 );
              v670 = v784;
              v10 = (int)v781;
              v664 = (int)m;
              v669 = (_BYTE *)v803;
              v667 = pcchLength;
            }
            v8 = 0LL;
            for ( k = 0LL; k < v667; ++k )
              v670 ^= v669[k];
            if ( v670 == *(_QWORD *)((char *)v813 + v667) )
            {
              v721 = (int)v787;
              v663 = v669;
              v834 = v669;
              v669 = 0LL;
              v875 = v667;
            }
            else
            {
              v663 = v834;
              v721 = -1073425151;
            }
            if ( v669 )
            {
              MemoryFree(v669);
              v663 = v834;
              v8 = 0LL;
            }
            if ( v721 >= 0 )
            {
              v826 = v663;
              v663 = 0LL;
              v834 = 0LL;
              v809 = v875;
LABEL_952:
              if ( v663 )
              {
                v722 = GetProcessHeap();
                HeapFree(v722, 0, v663);
                v8 = 0LL;
                v834 = 0LL;
              }
LABEL_954:
              v502 = v664 | 0x10000000;
              if ( v502 < 0 )
                goto LABEL_989;
              LODWORD(dwBytes) = 0;
              m = v826;
              if ( v809 < 4 )
                goto LABEL_987;
              LODWORD(v787) = *(_DWORD *)v826;
              v724 = RtlULongLongAdd((unsigned __int64)v826, 4LL, &m);
              if ( v724 >= 0 )
              {
                v724 = RtlUIntAdd(0, v723, &dwBytes);
                if ( v724 >= 0 )
                {
                  if ( v809 - (unsigned int)dwBytes < v726 )
                    goto LABEL_987;
                  v727 = *(unsigned int *)m;
                  v724 = RtlULongLongAdd((unsigned __int64)m, v725, &m);
                  if ( v724 >= 0 )
                  {
                    v724 = RtlUIntAdd(dwBytes, v728, &dwBytes);
                    if ( v724 >= 0 )
                    {
                      if ( v809 - (unsigned int)dwBytes < (unsigned int)v727 )
                        goto LABEL_987;
                      v724 = RtlUIntAdd(dwBytes, v727, &dwBytes);
                      if ( v724 >= 0 )
                      {
                        v731 = m;
                        if ( (unsigned __int64)v809 + v729 < (unsigned __int64)m + v727
                          || v729 + v809 - v727 - (unsigned __int64)m >= 8 )
                        {
                          goto LABEL_987;
                        }
                        LODWORD(v788) = (_DWORD)v730;
                        v732 = v730;
                        v724 = (int)v730;
                        if ( !m )
                          goto LABEL_977;
                        v724 = RtlULongLongAdd((unsigned __int64)m, (unsigned int)v727, &v804);
                        if ( v724 < 0 )
                          goto LABEL_985;
                        v734 = v804;
                        if ( (unsigned __int64)v731 < v804 )
                        {
                          do
                          {
                            v724 = RtlULongLongAdd(v733, 4LL, &v804);
                            if ( v724 < 0 )
                              goto LABEL_988;
                            if ( v804 > v736 )
                              goto LABEL_980;
                            v737 = RtlUIntAdd(4u, *v735, &m);
                            v724 = v737;
                            if ( v737 >= 0 )
                              v739 = (unsigned int)m;
                            v865 = v739;
                            if ( v737 < 0 )
                              goto LABEL_988;
                            v724 = RtlULongLongAdd(v738, v739, &v803);
                            if ( v724 < 0 )
                              goto LABEL_988;
                            v733 = v803;
                            if ( v803 > v734 )
                              goto LABEL_980;
                            LODWORD(v788) = (_DWORD)v788 + 1;
                          }
                          while ( v803 < v734 );
                        }
                        if ( v733 == v734 )
                        {
LABEL_977:
                          if ( (_DWORD)v727 )
                          {
                            v740 = GetProcessHeap();
                            v732 = HeapAlloc(v740, 8u, v727);
                            if ( !v732 )
                            {
                              v724 = -1073741801;
                              goto LABEL_985;
                            }
                            v724 = 0;
                          }
                          if ( v731 )
                            memcpy_0(v732, v731, v727);
                          *(_QWORD *)&v835 = __PAIR64__(v727, (unsigned int)v788);
                          *((_QWORD *)&v835 + 1) = v732;
LABEL_985:
                          if ( v724 >= 0 && (_DWORD)v787 != (_DWORD)v835 )
LABEL_987:
                            v724 = -1073741762;
                        }
                        else
                        {
LABEL_980:
                          v724 = -1073741811;
                        }
                      }
                    }
                  }
                }
              }
LABEL_988:
              v502 = v724 | 0x10000000;
              v8 = 0LL;
              goto LABEL_989;
            }
          }
          else
          {
            v663 = v834;
          }
        }
        v664 = -1073741823;
        goto LABEL_952;
      }
    }
  }
LABEL_989:
  v741 = (void *)v785;
  if ( v785 )
  {
    v742 = GetProcessHeap();
    HeapFree(v742, 0, v741);
    v8 = 0LL;
  }
  v743 = v850;
  if ( v850 )
  {
    v744 = (void *)*((_QWORD *)v850 + 1);
    if ( v744 )
    {
      v745 = GetProcessHeap();
      HeapFree(v745, 0, v744);
      v743[1] = 0LL;
    }
    v746 = (void *)v743[3];
    if ( v746 )
    {
      v747 = GetProcessHeap();
      HeapFree(v747, 0, v746);
      v743[3] = 0LL;
    }
    v748 = (void *)v743[5];
    if ( v748 )
    {
      v749 = GetProcessHeap();
      HeapFree(v749, 0, v748);
      v743[5] = 0LL;
    }
    v750 = GetProcessHeap();
    HeapFree(v750, 0, v743);
    v8 = 0LL;
    v850 = 0LL;
  }
  v751 = (wchar_t *)psza;
  if ( psza )
  {
    v752 = GetProcessHeap();
    HeapFree(v752, 0, v751);
    v8 = 0LL;
  }
  v753 = v815;
  if ( v815 )
  {
    v754 = GetProcessHeap();
    HeapFree(v754, 0, v753);
    v8 = 0LL;
  }
  v755 = v828;
  if ( v828 )
  {
    v756 = (void *)*((_QWORD *)v828 + 1);
    if ( v756 )
    {
      v757 = GetProcessHeap();
      HeapFree(v757, 0, v756);
      v755[1] = 0LL;
    }
    v758 = (void *)v755[3];
    if ( v758 )
    {
      v759 = GetProcessHeap();
      HeapFree(v759, 0, v758);
      v755[3] = 0LL;
    }
    v760 = (void *)v755[5];
    if ( v760 )
    {
      v761 = GetProcessHeap();
      HeapFree(v761, 0, v760);
      v755[5] = 0LL;
    }
    v762 = GetProcessHeap();
    HeapFree(v762, 0, v755);
    v8 = 0LL;
  }
  v763 = v826;
  if ( v826 )
  {
    v764 = GetProcessHeap();
    HeapFree(v764, 0, v763);
    v8 = 0LL;
  }
  if ( v502 >= 0 && (_DWORD)v835 && (v765 = (unsigned int *)*((_QWORD *)&v835 + 1)) != 0LL )
  {
    pcchLength = *((_QWORD *)&v835 + 1);
    if ( (int)RtlULongLongAdd(*((unsigned __int64 *)&v835 + 1), 4LL, &pcchLength) >= 0 )
    {
      v769 = (int *)pcchLength;
      v908 = v767;
      if ( !v767 )
        v769 = 0LL;
      v923 = v769;
      if ( v767 == (_DWORD)v768 )
      {
        v818 = *v769;
        v8 = 0LL;
        if ( v818 >= 0 && v766 > 1 )
        {
          for ( m = v765;
                (int)RtlULongLongAdd((unsigned __int64)v765, v768, &m) >= 0
             && (int)RtlULongLongAdd((unsigned __int64)m, *v765, &m) >= 0;
                v765 = (unsigned int *)m )
          {
            if ( v770 != -1 )
            {
              if ( (int)RtlULongLongAdd((unsigned __int64)m, v768, &m) >= 0 )
              {
                v772 = m;
                v914 = v771;
                if ( !v771 )
                  v772 = v8;
                v924 = v772;
                if ( v771 == 8 )
                  v925 = *v772;
              }
              goto LABEL_1032;
            }
          }
        }
        goto LABEL_1032;
      }
    }
    v441 = v782;
    v8 = 0LL;
  }
  else
  {
LABEL_1032:
    v441 = v782;
  }
LABEL_1033:
  v442 = v783;
LABEL_1034:
  v773 = (void *)*((_QWORD *)&v797 + 1);
  *(_QWORD *)&v797 = 0LL;
  if ( *((_QWORD *)&v797 + 1) )
  {
    v774 = GetProcessHeap();
    HeapFree(v774, 0, v773);
    v8 = 0LL;
    *((_QWORD *)&v797 + 1) = 0LL;
  }
  v775 = (void *)*((_QWORD *)&v835 + 1);
  *(_QWORD *)&v835 = 0LL;
  if ( *((_QWORD *)&v835 + 1) )
  {
    v776 = GetProcessHeap();
    HeapFree(v776, 0, v775);
    v8 = 0LL;
    *((_QWORD *)&v835 + 1) = 0LL;
  }
  if ( v441 )
  {
    v777 = GetProcessHeap();
    HeapFree(v777, 0, v441);
    v8 = 0LL;
  }
  if ( v442 )
  {
    v778 = GetProcessHeap();
    HeapFree(v778, 0, v442);
    v8 = 0LL;
  }
LABEL_454:
  v382 = v836;
  v912 = v845;
  v857 = v877;
  v815 = v8;
LABEL_455:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v815);
  if ( v10 < 0 )
  {
    switch ( v10 )
    {
      case -805306316:
        v10 = -1073418222;
        break;
      case -805306139:
      case -1073425151:
        v10 = -1073418201;
        break;
      case -805306306:
        v10 = -1073418200;
        break;
      case -2147024774:
        goto LABEL_463;
    }
    v812 = v10;
    goto LABEL_460;
  }
  if ( v382 != 4 )
  {
LABEL_463:
    v812 = -1073418210;
    goto LABEL_460;
  }
  if ( (unsigned __int8)SP<unsigned char,SP_HLOCAL<unsigned char>>::IsNull(v857) )
    v383 = 0LL;
  v814 = *v383;
LABEL_460:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v857);
  if ( v812 < 0 || !v814 )
    return 0;
  return v2;
}
