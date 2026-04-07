/*
 * XREFs of ?SLGetHelper@@YA_NPEBG@Z @ 0x180042DC0
 * Callers:
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x18000891C (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 * Callees:
 *     StringCchLengthW @ 0x18003B5CC (StringCchLengthW.c)
 *     RtlULongLongAdd @ 0x180042D8C (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x180042DA8 (RtlUIntAdd.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x1800456D4 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?Attach@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXPEAE@Z @ 0x1800456FC (-Attach@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXPEAE@Z.c)
 *     ?IsNull@?$SP@EV?$SP_HLOCAL@E@@@@SA_NPEAE@Z @ 0x180045728 (-IsNull@-$SP@EV-$SP_HLOCAL@E@@@@SA_NPEAE@Z.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x180047ECC (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180049798 (-MemoryFree@@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800498BA (memcpy_0.c)
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
  LPVOID v219; // rdi
  FARPROC ProcAddress; // rbx
  int v221; // eax
  unsigned int v222; // r9d
  _QWORD *v223; // rsi
  unsigned int v224; // r13d
  int v225; // edx
  int v226; // edi
  int v227; // r9d
  int v228; // edx
  int v229; // r9d
  unsigned int v230; // r11d
  SIZE_T v231; // r12
  int v232; // edx
  int v233; // r9d
  int v234; // edx
  int v235; // r9d
  unsigned int v236; // r11d
  SIZE_T v237; // r15
  int v238; // edx
  int v239; // r9d
  int v240; // r9d
  HANDLE v241; // rax
  _QWORD *v242; // rax
  _QWORD *v243; // rbx
  HANDLE v244; // rax
  void *v245; // rax
  void *v246; // r13
  HANDLE v247; // rax
  void *v248; // rax
  void *v249; // r12
  HANDLE v250; // rax
  void *v251; // rax
  wchar_t *v252; // rbx
  int v253; // edi
  unsigned __int8 *v254; // r12
  unsigned __int64 v255; // rsi
  _BYTE *v256; // rax
  _BYTE *v257; // r15
  unsigned __int8 v258; // al
  unsigned __int8 *v259; // r9
  _BYTE *v260; // r10
  int v261; // r8d
  int v262; // r13d
  int v263; // r11d
  unsigned int v264; // ebx
  unsigned __int64 v265; // r12
  int v266; // eax
  _BYTE *v267; // r15
  unsigned __int8 *v268; // rsi
  int v269; // r10d
  int v270; // r9d
  int v271; // ecx
  int v272; // r10d
  int v273; // ebx
  int v274; // r9d
  int v275; // r11d
  int v276; // ebx
  unsigned int v277; // r11d
  int v278; // ebx
  int v279; // r11d
  int v280; // ebx
  int v281; // r11d
  int v282; // ebx
  int v283; // r11d
  unsigned int v284; // ebx
  int v285; // r11d
  int v286; // ebx
  int v287; // r11d
  int v288; // ebx
  int v289; // r11d
  unsigned int v290; // ebx
  int v291; // r11d
  int v292; // ebx
  int v293; // r11d
  unsigned int v294; // ebx
  int v295; // r11d
  unsigned int v296; // ebx
  int v297; // r11d
  int v298; // edx
  unsigned __int64 j; // rcx
  int v300; // esi
  int v301; // edx
  int v302; // edi
  __int64 v303; // rdx
  unsigned int v304; // r11d
  SIZE_T v305; // r15
  int v306; // edx
  __int64 v307; // r9
  void *v308; // r10
  const void *v309; // rbx
  void *v310; // r12
  unsigned int v311; // r13d
  size_t v312; // r9
  SIZE_T v313; // r11
  int *v314; // r9
  SIZE_T v315; // r11
  int v316; // eax
  unsigned __int64 v317; // r9
  unsigned int v318; // r10d
  HANDLE v319; // rax
  void *v320; // rbx
  HANDLE v321; // rax
  _QWORD *v322; // rsi
  void *v323; // rbx
  HANDLE v324; // rax
  void *v325; // rbx
  HANDLE v326; // rax
  void *v327; // rbx
  HANDLE v328; // rax
  HANDLE v329; // rax
  void *v330; // rbx
  HANDLE v331; // rax
  void *v332; // rbx
  HANDLE v333; // rax
  _QWORD *v334; // rsi
  void *v335; // rbx
  HANDLE v336; // rax
  void *v337; // rbx
  HANDLE v338; // rax
  void *v339; // rbx
  HANDLE v340; // rax
  HANDLE v341; // rax
  wchar_t *v342; // rbx
  HANDLE v343; // rax
  int v344; // r9d
  int *v345; // rax
  void *v346; // rcx
  unsigned int v347; // r10d
  int v348; // eax
  int v349; // r9d
  int v350; // r9d
  _QWORD *v351; // rax
  void *v352; // rcx
  unsigned int v353; // r10d
  int v354; // eax
  int v355; // r9d
  int v356; // r9d
  _DWORD *v357; // rax
  void *v358; // rcx
  unsigned int v359; // r10d
  int v360; // r9d
  int v361; // r10d
  void *v362; // r11
  unsigned int *v363; // rcx
  unsigned int v364; // ebx
  int v365; // r9d
  int v366; // r9d
  unsigned int *v367; // rax
  unsigned int v368; // ebx
  unsigned int *v369; // rcx
  unsigned int v370; // esi
  unsigned int v371; // r10d
  const void *v372; // r11
  int v373; // r9d
  int v374; // r9d
  _DWORD *v375; // rax
  int v376; // ecx
  void *v377; // rbx
  HANDLE v378; // rax
  void *v379; // rbx
  HANDLE v380; // rax
  HANDLE v381; // rax
  HANDLE v382; // rax
  int v383; // ebx
  int *v384; // rcx
  int v386; // eax
  int v387; // eax
  int v388; // eax
  int v389; // eax
  int v390; // edx
  int v391; // r10d
  int v392; // eax
  int v393; // edx
  int v394; // eax
  int v395; // edx
  HANDLE v396; // rax
  int v397; // r15d
  int v398; // ebx
  char v399; // r9
  int v400; // edx
  int v401; // ecx
  unsigned int v402; // ebx
  int v403; // edx
  void *v404; // r15
  HANDLE v405; // rax
  void *v406; // r15
  HANDLE v407; // rax
  void *v408; // r15
  HANDLE v409; // rax
  HANDLE v410; // rax
  void *v411; // rbx
  HANDLE v412; // rax
  void *v413; // rbx
  HANDLE v414; // rax
  void *v415; // rbx
  HANDLE v416; // rax
  HANDLE v417; // rax
  HANDLE v418; // rax
  signed int LastError; // eax
  void *v420; // r15
  HANDLE v421; // rax
  void *v422; // r15
  HANDLE v423; // rax
  void *v424; // r15
  HANDLE v425; // rax
  HANDLE v426; // rax
  void *v427; // rbx
  HANDLE v428; // rax
  void *v429; // rbx
  HANDLE v430; // rax
  void *v431; // rbx
  HANDLE v432; // rax
  HANDLE v433; // rax
  int v434; // r12d
  int v435; // ebx
  char v436; // r11
  int v437; // edx
  unsigned int v438; // r11d
  int v439; // ecx
  int v440; // edx
  HANDLE v441; // rax
  void *v442; // r15
  void *v443; // rsi
  HANDLE v444; // rax
  void *v445; // rax
  void *v446; // r12
  size_t v447; // rsi
  HANDLE v448; // rax
  void *v449; // rax
  void *v450; // r13
  unsigned int v451; // r15d
  unsigned int v452; // r11d
  int v453; // eax
  unsigned int v454; // r11d
  int v455; // r9d
  int v456; // eax
  unsigned int v457; // r11d
  int v458; // r9d
  int v459; // eax
  int v460; // r9d
  unsigned int v461; // ebx
  HANDLE v462; // rax
  LPVOID v463; // rax
  unsigned int v464; // r11d
  int v465; // eax
  unsigned int *v466; // r9
  _DWORD *v467; // rdx
  int *v468; // r9
  unsigned __int64 v469; // r9
  int v470; // r10d
  int v471; // eax
  _DWORD *v472; // r9
  int v473; // ebx
  void *v474; // rcx
  unsigned int v475; // r11d
  int *v476; // r9
  unsigned __int64 v477; // r9
  int v478; // r10d
  int v479; // eax
  unsigned int *v480; // r9
  int v481; // ebx
  void *v482; // rcx
  int *v483; // r9
  unsigned __int64 v484; // r9
  int v485; // r10d
  int v486; // eax
  _DWORD *v487; // r9
  _QWORD *v488; // rcx
  unsigned int v489; // ecx
  unsigned int v490; // r9d
  size_t v491; // rbx
  unsigned int v492; // r12d
  _DWORD *v493; // r13
  int v494; // esi
  unsigned int v495; // eax
  unsigned int v496; // ebx
  HANDLE v497; // rax
  char *v498; // rax
  char *v499; // rbx
  __int64 v500; // rdx
  void *v501; // rcx
  HANDLE v502; // rax
  int v503; // esi
  _QWORD *v504; // r15
  int v505; // esi
  size_t v506; // rsi
  void *v507; // rax
  _BYTE *v508; // r12
  unsigned __int8 v509; // al
  unsigned __int64 v510; // rcx
  unsigned __int8 *v511; // r11
  int v512; // ebx
  _BYTE *v513; // r10
  unsigned int v514; // r9d
  int v515; // r8d
  int v516; // r13d
  int v517; // ebx
  char v518; // r9
  int v519; // edx
  int v520; // ecx
  unsigned int v521; // ebx
  int v522; // ecx
  int v523; // edx
  size_t v524; // r13
  int v525; // r15d
  _BYTE *v526; // rsi
  int v527; // r12d
  unsigned __int8 *v528; // rax
  int v529; // r11d
  int v530; // ecx
  int v531; // r10d
  int v532; // r10d
  int v533; // ebx
  int v534; // r9d
  int v535; // ebx
  int v536; // r9d
  int v537; // ebx
  int v538; // r8d
  int v539; // ebx
  int v540; // r8d
  int v541; // ebx
  unsigned int v542; // r9d
  int v543; // ebx
  int v544; // r9d
  unsigned int v545; // ebx
  unsigned int v546; // r9d
  int v547; // ebx
  int v548; // r9d
  int v549; // ebx
  int v550; // r9d
  int v551; // ebx
  int v552; // r9d
  int v553; // ebx
  int v554; // r9d
  unsigned int v555; // ebx
  int v556; // r9d
  unsigned int v557; // esi
  HANDLE v558; // rax
  _DWORD *v559; // rax
  _DWORD *v560; // rbx
  HANDLE v561; // rax
  void *v562; // rax
  HANDLE v563; // rax
  _OWORD *v564; // rax
  HANDLE v565; // rax
  _QWORD *v566; // rax
  void *v567; // r12
  HANDLE v568; // rax
  void *v569; // r12
  HANDLE v570; // rax
  void *v571; // r12
  HANDLE v572; // rax
  HANDLE v573; // rax
  void *v574; // rbx
  HANDLE v575; // rax
  void *v576; // rbx
  HANDLE v577; // rax
  void *v578; // rbx
  HANDLE v579; // rax
  void *v580; // rbx
  HANDLE v581; // rax
  HANDLE v582; // rax
  const void **v583; // r15
  int v584; // esi
  unsigned int v585; // eax
  unsigned int v586; // ebx
  HANDLE v587; // rax
  wchar_t *v588; // rax
  wchar_t *v589; // rbx
  int v590; // eax
  void *v591; // rcx
  int v592; // eax
  void *v593; // rcx
  int v594; // eax
  HANDLE v595; // rax
  int v596; // ebx
  int v597; // eax
  int v598; // ecx
  unsigned int v599; // eax
  int v600; // eax
  unsigned int v601; // r9d
  unsigned int *v602; // rcx
  unsigned int v603; // r15d
  int v604; // r10d
  int v605; // r10d
  unsigned __int8 *v606; // rax
  unsigned int v607; // ebx
  int v608; // esi
  HANDLE v609; // rax
  _DWORD *v610; // rax
  unsigned int *v611; // rcx
  unsigned int v612; // r15d
  int v613; // r9d
  int v614; // r10d
  int v615; // r10d
  unsigned __int8 *v616; // rax
  int v617; // r11d
  unsigned int v618; // eax
  STRSAFE_PCNZWCH v619; // rsi
  FARPROC v620; // rbx
  int v621; // eax
  unsigned int v622; // r9d
  signed int v623; // eax
  _QWORD *v624; // r15
  int v625; // esi
  int v626; // edx
  int v627; // r9d
  size_t v628; // r10
  int v629; // edx
  int v630; // r9d
  SIZE_T v631; // r13
  int v632; // edx
  int v633; // r9d
  int v634; // edx
  int v635; // r9d
  SIZE_T v636; // r12
  int v637; // edx
  int v638; // r9d
  int v639; // r9d
  int v640; // r10d
  HANDLE v641; // rax
  _QWORD *v642; // rax
  _QWORD *v643; // rbx
  HANDLE v644; // rax
  void *v645; // rax
  HANDLE v646; // rax
  void *v647; // rax
  void *v648; // r13
  HANDLE v649; // rax
  void *v650; // rax
  void *v651; // r12
  HANDLE v652; // rax
  void *v653; // r12
  HANDLE v654; // rax
  void *v655; // r12
  HANDLE v656; // rax
  HANDLE v657; // rax
  void *v658; // rbx
  HANDLE v659; // rax
  void *v660; // rbx
  HANDLE v661; // rax
  void *v662; // rbx
  HANDLE v663; // rax
  HANDLE v664; // rax
  void *v665; // rbx
  int v666; // esi
  unsigned __int8 *v667; // r15
  __int64 v668; // r13
  size_t v669; // r13
  _BYTE *v670; // rax
  _BYTE *v671; // r12
  unsigned __int8 v672; // al
  unsigned __int8 *v673; // r10
  _BYTE *v674; // r9
  int v675; // r8d
  int v676; // r15d
  int v677; // ebx
  int v678; // r11d
  char v679; // di
  int v680; // edx
  unsigned int v681; // edx
  unsigned int v682; // r15d
  int v683; // ecx
  int v684; // r8d
  int v685; // edx
  size_t v686; // rcx
  int v687; // eax
  _BYTE *v688; // r13
  int v689; // edi
  unsigned __int8 *v690; // rsi
  size_t v691; // r12
  int v692; // ebx
  int v693; // r11d
  int v694; // ecx
  int v695; // ebx
  int v696; // r15d
  int v697; // r11d
  int v698; // r9d
  int v699; // r15d
  unsigned int v700; // r9d
  int v701; // r15d
  int v702; // r9d
  int v703; // r15d
  int v704; // r9d
  int v705; // r15d
  int v706; // r9d
  unsigned int v707; // r15d
  int v708; // r9d
  int v709; // r15d
  int v710; // r10d
  int v711; // r15d
  int v712; // r10d
  unsigned int v713; // r15d
  int v714; // r10d
  int v715; // r15d
  int v716; // r10d
  unsigned int v717; // r15d
  int v718; // r10d
  unsigned int v719; // r15d
  int v720; // r10d
  int v721; // edx
  size_t k; // rcx
  int v723; // r15d
  HANDLE v724; // rax
  int v725; // edx
  int v726; // esi
  __int64 v727; // rdx
  unsigned int v728; // r11d
  SIZE_T v729; // r15
  int v730; // edx
  __int64 v731; // r9
  void *v732; // r10
  void *v733; // rbx
  void *v734; // r13
  SIZE_T v735; // r9
  SIZE_T v736; // r11
  int *v737; // r9
  SIZE_T v738; // r11
  int v739; // eax
  unsigned __int64 v740; // r9
  unsigned int v741; // r10d
  HANDLE v742; // rax
  void *v743; // r15
  HANDLE v744; // rax
  _QWORD *v745; // r15
  void *v746; // rbx
  HANDLE v747; // rax
  void *v748; // rbx
  HANDLE v749; // rax
  void *v750; // rbx
  HANDLE v751; // rax
  HANDLE v752; // rax
  wchar_t *v753; // rbx
  HANDLE v754; // rax
  void *v755; // rbx
  HANDLE v756; // rax
  _QWORD *v757; // r15
  void *v758; // rbx
  HANDLE v759; // rax
  void *v760; // rbx
  HANDLE v761; // rax
  void *v762; // rbx
  HANDLE v763; // rax
  HANDLE v764; // rax
  void *v765; // rbx
  HANDLE v766; // rax
  unsigned int *v767; // rbx
  unsigned int v768; // r9d
  int v769; // r10d
  __int64 v770; // r11
  int *v771; // rax
  int v772; // r9d
  int v773; // r9d
  _QWORD *v774; // rax
  void *v775; // rbx
  HANDLE v776; // rax
  void *v777; // rbx
  HANDLE v778; // rax
  HANDLE v779; // rax
  HANDLE v780; // rax
  SIZE_T dwBytes; // [rsp+28h] [rbp-E0h] BYREF
  void *m; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE *v783; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID v784; // [rsp+40h] [rbp-C8h]
  LPVOID v785; // [rsp+48h] [rbp-C0h]
  __int64 v786; // [rsp+50h] [rbp-B8h]
  size_t v787; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v788; // [rsp+60h] [rbp-A8h] BYREF
  void *v789; // [rsp+70h] [rbp-98h] BYREF
  void *v790; // [rsp+78h] [rbp-90h] BYREF
  int v791; // [rsp+80h] [rbp-88h]
  int v792; // [rsp+84h] [rbp-84h]
  int v793; // [rsp+88h] [rbp-80h]
  int v794; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v795; // [rsp+90h] [rbp-78h]
  unsigned int v796; // [rsp+94h] [rbp-74h]
  unsigned int v797; // [rsp+98h] [rbp-70h]
  unsigned int v798; // [rsp+9Ch] [rbp-6Ch]
  __int128 v799; // [rsp+A0h] [rbp-68h] BYREF
  STRSAFE_PCNZWCH psza; // [rsp+B0h] [rbp-58h] BYREF
  SIZE_T v801; // [rsp+B8h] [rbp-50h]
  size_t pcchLength; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v803; // [rsp+C8h] [rbp-40h]
  int v804; // [rsp+CCh] [rbp-3Ch]
  SIZE_T v805; // [rsp+D0h] [rbp-38h] BYREF
  SIZE_T v806; // [rsp+D8h] [rbp-30h] BYREF
  void *v807; // [rsp+E0h] [rbp-28h] BYREF
  int v808; // [rsp+E8h] [rbp-20h]
  unsigned int v809; // [rsp+ECh] [rbp-1Ch] BYREF
  unsigned int v810; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v811; // [rsp+F4h] [rbp-14h]
  __int128 v812; // [rsp+F8h] [rbp-10h]
  unsigned int v813; // [rsp+108h] [rbp+0h]
  int v814; // [rsp+10Ch] [rbp+4h]
  LPVOID v815; // [rsp+110h] [rbp+8h]
  int v816; // [rsp+118h] [rbp+10h]
  LPVOID v817; // [rsp+120h] [rbp+18h] BYREF
  int v818; // [rsp+128h] [rbp+20h]
  int v819; // [rsp+12Ch] [rbp+24h]
  int v820; // [rsp+130h] [rbp+28h]
  int v821; // [rsp+134h] [rbp+2Ch]
  unsigned int v822; // [rsp+138h] [rbp+30h] BYREF
  unsigned int v823; // [rsp+13Ch] [rbp+34h] BYREF
  int v824; // [rsp+140h] [rbp+38h]
  int v825; // [rsp+144h] [rbp+3Ch]
  int v826; // [rsp+148h] [rbp+40h]
  int v827; // [rsp+14Ch] [rbp+44h]
  LPVOID v828; // [rsp+150h] [rbp+48h]
  unsigned int v829; // [rsp+158h] [rbp+50h]
  LPVOID v830; // [rsp+160h] [rbp+58h]
  unsigned int v831; // [rsp+168h] [rbp+60h]
  unsigned int v832; // [rsp+16Ch] [rbp+64h]
  int v833; // [rsp+170h] [rbp+68h]
  unsigned int v834; // [rsp+174h] [rbp+6Ch]
  wchar_t *v835; // [rsp+178h] [rbp+70h]
  void *v836; // [rsp+180h] [rbp+78h]
  __int128 v837; // [rsp+188h] [rbp+80h]
  int v838; // [rsp+198h] [rbp+90h]
  int v839; // [rsp+19Ch] [rbp+94h]
  unsigned int v840; // [rsp+1A0h] [rbp+98h]
  unsigned int v841; // [rsp+1A4h] [rbp+9Ch]
  unsigned int v842; // [rsp+1A8h] [rbp+A0h] BYREF
  unsigned int v843; // [rsp+1ACh] [rbp+A4h]
  int v844; // [rsp+1B0h] [rbp+A8h] BYREF
  unsigned int v845; // [rsp+1B8h] [rbp+B0h]
  unsigned int v846; // [rsp+1BCh] [rbp+B4h] BYREF
  unsigned int v847; // [rsp+1C0h] [rbp+B8h]
  int v848; // [rsp+1C8h] [rbp+C0h] BYREF
  int v849; // [rsp+1D0h] [rbp+C8h] BYREF
  int v850; // [rsp+1D8h] [rbp+D0h] BYREF
  LPVOID v851; // [rsp+1E0h] [rbp+D8h]
  LPVOID v852; // [rsp+1E8h] [rbp+E0h]
  int v853; // [rsp+1F0h] [rbp+E8h]
  int v854; // [rsp+1F4h] [rbp+ECh]
  int v855; // [rsp+1F8h] [rbp+F0h]
  int v856; // [rsp+1FCh] [rbp+F4h]
  LPVOID v857; // [rsp+200h] [rbp+F8h]
  int v858; // [rsp+208h] [rbp+100h]
  void *v859; // [rsp+210h] [rbp+108h] BYREF
  int v860; // [rsp+218h] [rbp+110h]
  int v861; // [rsp+21Ch] [rbp+114h]
  int v862; // [rsp+220h] [rbp+118h]
  int v863; // [rsp+224h] [rbp+11Ch]
  int v864; // [rsp+228h] [rbp+120h]
  int v865; // [rsp+22Ch] [rbp+124h]
  unsigned int v866; // [rsp+230h] [rbp+128h]
  unsigned int v867; // [rsp+234h] [rbp+12Ch]
  int v868; // [rsp+238h] [rbp+130h]
  int v869; // [rsp+23Ch] [rbp+134h]
  LPVOID lpMem; // [rsp+240h] [rbp+138h]
  unsigned int v871; // [rsp+248h] [rbp+140h]
  int v872; // [rsp+24Ch] [rbp+144h]
  int v873; // [rsp+250h] [rbp+148h]
  size_t v874; // [rsp+258h] [rbp+150h]
  unsigned __int64 v875; // [rsp+260h] [rbp+158h]
  unsigned __int64 v876; // [rsp+268h] [rbp+160h]
  size_t v877; // [rsp+270h] [rbp+168h]
  size_t v878; // [rsp+278h] [rbp+170h]
  void *v879; // [rsp+280h] [rbp+178h]
  unsigned __int64 v880; // [rsp+288h] [rbp+180h] BYREF
  size_t Size; // [rsp+290h] [rbp+188h]
  size_t v882; // [rsp+298h] [rbp+190h]
  unsigned __int64 v883; // [rsp+2A0h] [rbp+198h] BYREF
  unsigned __int64 v884; // [rsp+2A8h] [rbp+1A0h]
  unsigned __int64 v885; // [rsp+2B0h] [rbp+1A8h]
  unsigned int *v886; // [rsp+2B8h] [rbp+1B0h]
  void *Src; // [rsp+2C0h] [rbp+1B8h]
  __int64 *v888; // [rsp+2C8h] [rbp+1C0h]
  SIZE_T v889; // [rsp+2D0h] [rbp+1C8h]
  unsigned __int8 *v890; // [rsp+2D8h] [rbp+1D0h]
  __int64 *v891; // [rsp+2E0h] [rbp+1D8h]
  unsigned __int8 *v892; // [rsp+2E8h] [rbp+1E0h]
  __int64 v893; // [rsp+2F0h] [rbp+1E8h]
  HMODULE phModule; // [rsp+2F8h] [rbp+1F0h] BYREF
  unsigned __int8 *v895; // [rsp+300h] [rbp+1F8h]
  _QWORD *v896; // [rsp+308h] [rbp+200h]
  __int64 v897; // [rsp+310h] [rbp+208h]
  void *v898; // [rsp+318h] [rbp+210h]
  unsigned __int8 *v899; // [rsp+320h] [rbp+218h]
  _DWORD *v900; // [rsp+328h] [rbp+220h]
  unsigned __int8 *v901; // [rsp+330h] [rbp+228h]
  void *v902; // [rsp+338h] [rbp+230h]
  HMODULE hModule; // [rsp+340h] [rbp+238h] BYREF
  unsigned __int64 v904; // [rsp+348h] [rbp+240h]
  void *v905; // [rsp+350h] [rbp+248h]
  __int64 v906; // [rsp+358h] [rbp+250h]
  unsigned __int8 *v907; // [rsp+360h] [rbp+258h]
  __int64 v908; // [rsp+368h] [rbp+260h]
  _DWORD *v909; // [rsp+370h] [rbp+268h]
  int v910; // [rsp+378h] [rbp+270h]
  __int64 v911; // [rsp+380h] [rbp+278h]
  void *v912; // [rsp+388h] [rbp+280h]
  int *v913; // [rsp+390h] [rbp+288h]
  unsigned int v914; // [rsp+398h] [rbp+290h]
  SIZE_T v915; // [rsp+3A0h] [rbp+298h]
  int v916; // [rsp+3A8h] [rbp+2A0h]
  _QWORD v917[2]; // [rsp+3B0h] [rbp+2A8h] BYREF
  int v918; // [rsp+3C0h] [rbp+2B8h]
  unsigned int v919; // [rsp+3C4h] [rbp+2BCh]
  int v920; // [rsp+3C8h] [rbp+2C0h]
  _QWORD v921[2]; // [rsp+3D0h] [rbp+2C8h] BYREF
  int v922; // [rsp+3E0h] [rbp+2D8h]
  unsigned int v923; // [rsp+3E4h] [rbp+2DCh]
  int v924; // [rsp+3E8h] [rbp+2E0h]
  int *v925; // [rsp+3F0h] [rbp+2E8h]
  _QWORD *v926; // [rsp+3F8h] [rbp+2F0h]
  __int64 v927; // [rsp+400h] [rbp+2F8h]

  psza = psz;
  v816 = 0;
  v859 = 0LL;
  v814 = 0;
  v2 = 1;
  if ( !psz )
  {
    v814 = -2147024809;
    goto LABEL_460;
  }
  v838 = 0;
  v817 = 0LL;
  v824 = 0;
  v847 = 0;
  v3 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Attach(&v817, v3);
  v879 = v817;
  if ( !v817 )
  {
    v10 = -2147024882;
LABEL_1044:
    v383 = v820;
    goto LABEL_455;
  }
  v788 = 0uLL;
  v4 = 0LL;
  v812 = 0uLL;
  v5 = 0LL;
  Src = &`WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher;
  v839 = 0;
  v819 = 0;
  Size = 160LL;
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 8u, 0xA0uLL);
  v818 = -1;
  v8 = 0LL;
  v9 = v7;
  v10 = -1073741801;
  if ( !v7 )
  {
    LODWORD(v783) = -1073741801;
    goto LABEL_444;
  }
  memcpy_0(v7, Src, Size);
  v11 = (unsigned int)Size;
  v4 = v9;
  v785 = v9;
  v874 = 8LL;
  v912 = &`WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
  v12 = GetProcessHeap();
  v13 = HeapAlloc(v12, 8u, 8uLL);
  v8 = 0LL;
  v14 = v13;
  if ( !v13 )
  {
    LODWORD(v783) = -1073741801;
    v5 = 0LL;
    goto LABEL_444;
  }
  memcpy_0(v13, v912, v874);
  v15 = v874;
  v784 = v14;
  v884 = __rdtsc();
  LODWORD(dwBytes) = 0;
  v16 = RtlUIntAdd(4u, 4, &m);
  v17 = v804;
  v10 = v16;
  LODWORD(v783) = v16;
  if ( v16 >= 0 )
    v17 = (int)m;
  v804 = v17;
  if ( v16 < 0 )
    goto LABEL_472;
  v18 = RtlUIntAdd(0, v17, &dwBytes);
  v10 = v18 | 0x10000000;
  LODWORD(v783) = v18 | 0x10000000;
  if ( v18 < 0 )
    goto LABEL_472;
  v20 = RtlUIntAdd(v19, v11, &m);
  LODWORD(v783) = v20;
  v10 = v20;
  if ( v20 >= 0 )
    v21 = (int)m;
  v804 = v21;
  if ( v20 < 0 )
    goto LABEL_472;
  v22 = RtlUIntAdd(dwBytes, v21, &dwBytes);
  v10 = v22 | 0x10000000;
  LODWORD(v783) = v22 | 0x10000000;
  if ( v22 < 0 )
    goto LABEL_472;
  v24 = RtlUIntAdd(v23, v15, &m);
  LODWORD(v783) = v24;
  v10 = v24;
  if ( v24 >= 0 )
    v25 = (int)m;
  v804 = v25;
  if ( v24 < 0 )
    goto LABEL_472;
  v26 = RtlUIntAdd(dwBytes, v25, &dwBytes);
  v10 = v26 | 0x10000000;
  LODWORD(v783) = v26 | 0x10000000;
  if ( v26 < 0 )
    goto LABEL_472;
  v28 = RtlUIntAdd(v27, 8, &m);
  LODWORD(v783) = v28;
  v10 = v28;
  if ( v28 >= 0 )
    v29 = (int)m;
  v804 = v29;
  if ( v28 < 0 )
    goto LABEL_472;
  v30 = RtlUIntAdd(dwBytes, v29, &dwBytes);
  v10 = v30 | 0x10000000;
  LODWORD(v783) = v30 | 0x10000000;
  if ( v30 < 0 )
    goto LABEL_472;
  v32 = StringCchLengthW(psz, v31, &pcchLength);
  v8 = 0LL;
  if ( v32 < 0 )
  {
    v10 = -1073741762;
LABEL_471:
    LODWORD(v783) = v10;
    goto LABEL_472;
  }
  v33 = RtlUIntAdd(4u, 2 * ((int)pcchLength + 1), &m);
  LODWORD(v783) = v33;
  v10 = v33;
  if ( v33 >= 0 )
    v34 = (int)m;
  v804 = v34;
  if ( v33 < 0 )
    goto LABEL_472;
  v35 = RtlUIntAdd(dwBytes, v34, &dwBytes);
  v10 = v35 | 0x10000000;
  LODWORD(v783) = v35 | 0x10000000;
  if ( v35 < 0 )
    goto LABEL_472;
  v37 = RtlUIntAdd(v36, v36, &m);
  LODWORD(v783) = v37;
  v10 = v37;
  if ( v37 >= 0 )
    v38 = (int)m;
  v804 = v38;
  if ( v37 < 0 )
    goto LABEL_472;
  v39 = RtlUIntAdd(dwBytes, v38, &dwBytes);
  v10 = v39 | 0x10000000;
  LODWORD(v783) = v39 | 0x10000000;
  if ( v39 < 0 )
    goto LABEL_472;
  v41 = RtlUIntAdd(v40, v40, &m);
  LODWORD(v783) = v41;
  v10 = v41;
  if ( v41 >= 0 )
    v42 = (int)m;
  v804 = v42;
  if ( v41 < 0 )
    goto LABEL_472;
  v43 = RtlUIntAdd(dwBytes, v42, &dwBytes);
  v10 = v43 | 0x10000000;
  LODWORD(v783) = v43 | 0x10000000;
  if ( v43 < 0 )
    goto LABEL_472;
  DWORD1(v788) = dwBytes;
  v44 = dwBytes;
  v45 = GetProcessHeap();
  v46 = HeapAlloc(v45, 8u, v44);
  v8 = 0LL;
  if ( !v46 )
  {
    v10 = -1073741801;
    goto LABEL_471;
  }
  *((_QWORD *)&v788 + 1) = v46;
  LODWORD(v788) = 0;
  v848 = 0;
  if ( &v848 )
  {
    LODWORD(v783) = RtlULongLongAdd((unsigned __int64)v46, 4LL, &v807);
    v10 = (int)v783;
    if ( (int)v783 >= 0 )
    {
      if ( v48 + 2 > (_DWORD *)((char *)v48 + DWORD1(v788)) )
        goto LABEL_470;
      v49 = v807;
      *v48 = v47;
      *v49 = v848;
      LODWORD(v788) = v788 + 1;
    }
  }
  else
  {
    v10 = -1073741811;
    LODWORD(v783) = -1073741811;
  }
  if ( v10 < 0 )
    goto LABEL_472;
  if ( !(_DWORD)v11 )
  {
    v10 = -1073741811;
    LODWORD(v783) = -1073741811;
    goto LABEL_52;
  }
  if ( *((unsigned __int8 **)&v788 + 1) != v8 )
  {
    v50 = (int *)*((_QWORD *)&v788 + 1);
    v787 = *((_QWORD *)&v788 + 1);
    if ( (unsigned int)v788 > (unsigned int)v8 )
    {
      do
      {
        v51 = RtlUIntAdd(4u, *v50, &m);
        LODWORD(v783) = v51;
        v10 = v51;
        if ( v51 >= 0 )
          v53 = (unsigned int)m;
        v832 = v53;
        if ( v51 < 0 )
          goto LABEL_51;
        LODWORD(v783) = RtlULongLongAdd(v52, v53, &v787);
        v10 = (int)v783;
        if ( (int)v783 < 0 )
          goto LABEL_51;
        v50 = (int *)v787;
      }
      while ( v54 + 1 < (unsigned int)v788 );
    }
    LODWORD(v783) = RtlULongLongAdd((unsigned __int64)v50, 4LL, &v807);
    v10 = (int)v783;
    if ( (int)v783 < 0 )
      goto LABEL_52;
    if ( (unsigned __int64)v55 + v11 + 4 <= *((_QWORD *)&v788 + 1) + (unsigned __int64)DWORD1(v788) )
    {
      v56 = v807;
      *v55 = v11;
      memcpy_0(v56, v9, v11);
      LODWORD(v788) = v788 + 1;
LABEL_51:
      v8 = 0LL;
      goto LABEL_52;
    }
LABEL_470:
    v10 = -1073741789;
    goto LABEL_471;
  }
  v386 = RtlUIntAdd(4u, v11, &m);
  v47 = v832;
  v10 = v386;
  LODWORD(v783) = v386;
  if ( v386 >= 0 )
    v47 = (unsigned int)m;
  v832 = v47;
  if ( v386 < 0 || (LODWORD(v783) = RtlUIntAdd(DWORD1(v788), v47, (_DWORD *)&v788 + 1), v10 = (int)v783, (int)v783 < 0) )
  {
LABEL_52:
    if ( v10 >= 0 )
      goto LABEL_53;
LABEL_472:
    v4 = v9;
    v5 = v14;
    goto LABEL_444;
  }
  LODWORD(v788) = v788 + 1;
LABEL_53:
  if ( !v15 )
  {
    v10 = -1073741811;
    LODWORD(v783) = -1073741811;
LABEL_65:
    v65 = 4LL;
    goto LABEL_66;
  }
  if ( *((unsigned __int8 **)&v788 + 1) != v8 )
  {
    v57 = (int *)*((_QWORD *)&v788 + 1);
    v787 = *((_QWORD *)&v788 + 1);
    if ( (unsigned int)v788 > (unsigned int)v8 )
    {
      while ( 1 )
      {
        v58 = RtlUIntAdd(4u, *v57, &m);
        LODWORD(v783) = v58;
        v10 = v58;
        if ( v58 >= 0 )
          v61 = (unsigned int)m;
        v831 = v61;
        if ( v58 < 0 )
          break;
        LODWORD(v783) = RtlULongLongAdd(v60, v61, &v787);
        v10 = (int)v783;
        if ( (int)v783 < 0 )
          goto LABEL_64;
        v57 = (int *)v787;
        if ( v62 + 1 >= (unsigned int)v788 )
          goto LABEL_61;
      }
      v8 = 0LL;
      v65 = v59;
      goto LABEL_66;
    }
LABEL_61:
    LODWORD(v783) = RtlULongLongAdd((unsigned __int64)v57, 4LL, &v807);
    v10 = (int)v783;
    if ( (int)v783 < 0 )
    {
      v65 = v47;
      goto LABEL_66;
    }
    if ( (unsigned __int64)v63 + v15 + 4 <= *((_QWORD *)&v788 + 1) + (unsigned __int64)DWORD1(v788) )
    {
      v64 = v807;
      *v63 = v15;
      memcpy_0(v64, v14, v15);
      LODWORD(v788) = v788 + 1;
LABEL_64:
      v8 = 0LL;
      goto LABEL_65;
    }
    goto LABEL_470;
  }
  v65 = 4LL;
  v387 = RtlUIntAdd(4u, v15, &m);
  v47 = v831;
  v10 = v387;
  LODWORD(v783) = v387;
  if ( v387 >= 0 )
    v47 = (unsigned int)m;
  v831 = v47;
  if ( v387 >= 0 )
  {
    LODWORD(v783) = RtlUIntAdd(DWORD1(v788), v47, (_DWORD *)&v788 + 1);
    v10 = (int)v783;
    if ( (int)v783 >= 0 )
    {
      LODWORD(v788) = v788 + 1;
      goto LABEL_67;
    }
  }
LABEL_66:
  if ( v10 < 0 )
    goto LABEL_497;
LABEL_67:
  v883 = v884;
  if ( !&v883 )
  {
    v10 = -1073741811;
    LODWORD(v783) = -1073741811;
    goto LABEL_78;
  }
  if ( *((unsigned __int8 **)&v788 + 1) != v8 )
  {
    v66 = (int *)*((_QWORD *)&v788 + 1);
    v787 = *((_QWORD *)&v788 + 1);
    if ( (unsigned int)v788 <= (unsigned int)v8 )
    {
LABEL_75:
      LODWORD(v783) = RtlULongLongAdd((unsigned __int64)v66, v65, &v807);
      v10 = (int)v783;
      if ( (int)v783 >= 0 )
      {
        if ( (unsigned __int64)(v71 + 3) > *((_QWORD *)&v788 + 1) + (unsigned __int64)DWORD1(v788) )
        {
          v10 = -1073741789;
LABEL_496:
          LODWORD(v783) = v10;
          goto LABEL_497;
        }
        v72 = v807;
        *v71 = 8;
        *v72 = v883;
        LODWORD(v788) = v788 + 1;
      }
    }
    else
    {
      while ( 1 )
      {
        v67 = RtlUIntAdd(v65, *v66, &m);
        LODWORD(v783) = v67;
        v10 = v67;
        if ( v67 >= 0 )
          v69 = (unsigned int)m;
        v829 = v69;
        if ( v67 < 0 )
          break;
        LODWORD(v783) = RtlULongLongAdd(v68, v69, &v787);
        v10 = (int)v783;
        if ( (int)v783 < 0 )
          break;
        v66 = (int *)v787;
        if ( v70 + 1 >= (unsigned int)v788 )
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
  v388 = RtlUIntAdd(v65, 8, &m);
  v47 = v829;
  v10 = v388;
  LODWORD(v783) = v388;
  if ( v388 >= 0 )
    v47 = (unsigned int)m;
  v829 = v47;
  if ( v388 < 0 )
    goto LABEL_78;
  LODWORD(v783) = RtlUIntAdd(DWORD1(v788), v47, (_DWORD *)&v788 + 1);
  v10 = (int)v783;
  if ( (int)v783 < 0 )
    goto LABEL_78;
  LODWORD(v788) = v788 + 1;
LABEL_79:
  v73 = psza;
  v74 = StringCchLengthW(psza, v47, &v787);
  v8 = 0LL;
  if ( v74 < 0 )
  {
    v10 = -1073741762;
    goto LABEL_496;
  }
  LODWORD(v783) = RtlULongLongAdd(v787, 1LL, &v787);
  v10 = (int)v783;
  if ( (int)v783 >= 0 )
  {
    if ( 2 * (_DWORD)v787 )
    {
      if ( *((unsigned __int8 **)&v788 + 1) == v8 )
      {
        v389 = RtlUIntAdd(v65, 2 * (int)v787, &m);
        v390 = v825;
        v10 = v389;
        LODWORD(v783) = v389;
        if ( v389 >= 0 )
          v390 = (int)m;
        v825 = v390;
        if ( v389 >= 0 )
        {
          LODWORD(v783) = RtlUIntAdd(DWORD1(v788), v390, (_DWORD *)&v788 + 1);
          v10 = (int)v783;
          if ( (int)v783 >= 0 )
          {
            LODWORD(v788) = v788 + 1;
            v10 = v391;
            LODWORD(v783) = v391;
          }
        }
      }
      else
      {
        v75 = (int)v8;
        v76 = (int *)*((_QWORD *)&v788 + 1);
        v787 = *((_QWORD *)&v788 + 1);
        if ( (unsigned int)v788 <= (unsigned int)v8 )
        {
LABEL_89:
          LODWORD(v783) = RtlULongLongAdd((unsigned __int64)v76, v65, &v807);
          v10 = (int)v783;
          if ( (int)v783 >= 0 )
          {
            if ( (unsigned __int64)v80 + v81 + 4 > *((_QWORD *)&v788 + 1) + (unsigned __int64)DWORD1(v788) )
            {
              v10 = -1073741789;
              LODWORD(v783) = -1073741789;
            }
            else
            {
              v82 = v807;
              *v80 = v81;
              memcpy_0(v82, v73, (unsigned int)v81);
              LODWORD(v788) = v788 + 1;
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v77 = RtlUIntAdd(v65, *v76, &m);
            LODWORD(v783) = v77;
            v10 = v77;
            if ( v77 >= 0 )
              v79 = (unsigned int)m;
            v825 = v79;
            if ( v77 < 0 )
              break;
            LODWORD(v783) = RtlULongLongAdd(v78, v79, &v787);
            v10 = (int)v783;
            if ( (int)v783 < 0 )
              break;
            v76 = (int *)v787;
            if ( ++v75 >= (unsigned int)v788 )
              goto LABEL_89;
          }
        }
      }
    }
    else
    {
      v10 = -1073741811;
      LODWORD(v783) = -1073741811;
    }
    v8 = 0LL;
  }
  if ( v10 < 0 )
    goto LABEL_442;
  v850 = v824;
  if ( &v850 )
  {
    if ( *((unsigned __int8 **)&v788 + 1) == v8 )
    {
      v392 = RtlUIntAdd(v65, v65, &m);
      v393 = v833;
      v10 = v392;
      LODWORD(v783) = v392;
      if ( v392 >= 0 )
        v393 = (int)m;
      v833 = v393;
      if ( v392 >= 0 )
      {
        LODWORD(v783) = RtlUIntAdd(DWORD1(v788), v393, (_DWORD *)&v788 + 1);
        v10 = (int)v783;
        if ( (int)v783 >= 0 )
        {
          LODWORD(v788) = v788 + 1;
          goto LABEL_106;
        }
      }
    }
    else
    {
      v83 = (int *)*((_QWORD *)&v788 + 1);
      v787 = *((_QWORD *)&v788 + 1);
      if ( (unsigned int)v788 <= (unsigned int)v8 )
      {
LABEL_102:
        LODWORD(v783) = RtlULongLongAdd((unsigned __int64)v83, v65, &v807);
        v10 = (int)v783;
        if ( (int)v783 >= 0 )
        {
          if ( (unsigned __int64)(v88 + 2) > *((_QWORD *)&v788 + 1) + (unsigned __int64)DWORD1(v788) )
            goto LABEL_512;
          v89 = v807;
          *v88 = v65;
          *v89 = v850;
          LODWORD(v788) = v788 + 1;
        }
      }
      else
      {
        while ( 1 )
        {
          v84 = RtlUIntAdd(v65, *v83, &m);
          LODWORD(v783) = v84;
          v10 = v84;
          if ( v84 >= 0 )
            v86 = (unsigned int)m;
          v833 = v86;
          if ( v84 < 0 )
            break;
          LODWORD(v783) = RtlULongLongAdd(v85, v86, &v787);
          v10 = (int)v783;
          if ( (int)v783 < 0 )
            break;
          v83 = (int *)v787;
          if ( v87 + 1 >= (unsigned int)v788 )
            goto LABEL_102;
        }
        v8 = 0LL;
      }
    }
  }
  else
  {
    v10 = -1073741811;
    LODWORD(v783) = -1073741811;
  }
  if ( v10 < 0 )
    goto LABEL_442;
LABEL_106:
  v849 = v65;
  if ( &v849 )
  {
    if ( *((unsigned __int8 **)&v788 + 1) == v8 )
    {
      v394 = RtlUIntAdd(v65, v65, &m);
      v395 = v827;
      v10 = v394;
      LODWORD(v783) = v394;
      if ( v394 >= 0 )
        v395 = (int)m;
      v827 = v395;
      if ( v394 >= 0 )
      {
        LODWORD(v783) = RtlUIntAdd(DWORD1(v788), v395, (_DWORD *)&v788 + 1);
        v10 = (int)v783;
        if ( (int)v783 >= 0 )
        {
          LODWORD(v788) = v788 + 1;
          goto LABEL_118;
        }
      }
    }
    else
    {
      v90 = (int *)*((_QWORD *)&v788 + 1);
      v787 = *((_QWORD *)&v788 + 1);
      if ( (unsigned int)v788 > (unsigned int)v8 )
      {
        while ( 1 )
        {
          v91 = RtlUIntAdd(v65, *v90, &m);
          LODWORD(v783) = v91;
          v10 = v91;
          if ( v91 >= 0 )
            v93 = (unsigned int)m;
          v827 = v93;
          if ( v91 < 0 )
            break;
          LODWORD(v783) = RtlULongLongAdd(v92, v93, &v787);
          v10 = (int)v783;
          if ( (int)v783 < 0 )
            break;
          v90 = (int *)v787;
          if ( v94 + 1 >= (unsigned int)v788 )
            goto LABEL_114;
        }
        v8 = 0LL;
        goto LABEL_117;
      }
LABEL_114:
      LODWORD(v783) = RtlULongLongAdd((unsigned __int64)v90, v65, &v807);
      v10 = (int)v783;
      if ( (int)v783 >= 0 )
      {
        if ( (unsigned __int64)(v95 + 2) <= *((_QWORD *)&v788 + 1) + (unsigned __int64)DWORD1(v788) )
        {
          v96 = v807;
          *v95 = v65;
          *v96 = v849;
          LODWORD(v788) = v788 + 1;
          goto LABEL_117;
        }
LABEL_512:
        v10 = -1073741789;
        LODWORD(v783) = -1073741789;
        goto LABEL_442;
      }
    }
  }
  else
  {
    v10 = -1073741811;
    LODWORD(v783) = -1073741811;
  }
LABEL_117:
  if ( v10 < 0 )
    goto LABEL_442;
LABEL_118:
  v97 = RtlUIntAdd(v65, v65, &m);
  v99 = v808;
  v10 = v97;
  LODWORD(v783) = v97;
  if ( v97 >= 0 )
    v99 = (int)m;
  v808 = v99;
  if ( v97 < 0 )
    goto LABEL_522;
  LODWORD(dwBytes) = v99;
  v100 = RtlUIntAdd(v98, 8, &m);
  LODWORD(v783) = v100;
  v102 = v101;
  v10 = v100;
  if ( v100 >= 0 )
    v102 = (int)m;
  v808 = v102;
  if ( v100 < 0 )
  {
LABEL_522:
    v8 = 0LL;
LABEL_523:
    v112 = v816;
    goto LABEL_142;
  }
  v103 = RtlUIntAdd(v101, v102, &dwBytes);
  v8 = 0LL;
  LODWORD(v783) = v103;
  v10 = v103;
  if ( v103 < 0 )
    goto LABEL_523;
  v104 = RtlUIntAdd(v65, v65, &m);
  LODWORD(v783) = v104;
  v10 = v104;
  if ( v104 >= 0 )
    v105 = (int)m;
  v808 = v105;
  if ( v104 < 0 )
    goto LABEL_523;
  LODWORD(v783) = RtlUIntAdd(dwBytes, v105, &dwBytes);
  v10 = (int)v783;
  if ( (int)v783 < 0 )
    goto LABEL_523;
  v106 = RtlUIntAdd(v65, v65, &m);
  LODWORD(v783) = v106;
  v10 = v106;
  if ( v106 >= 0 )
    v107 = (int)m;
  v808 = v107;
  if ( v106 < 0 )
    goto LABEL_523;
  LODWORD(v783) = RtlUIntAdd(dwBytes, v107, &dwBytes);
  v10 = (int)v783;
  if ( (int)v783 < 0 )
    goto LABEL_523;
  v108 = RtlUIntAdd(v65, v65, &m);
  LODWORD(v783) = v108;
  v10 = v108;
  if ( v108 >= 0 )
    v109 = (int)m;
  v808 = v109;
  if ( v108 < 0 )
    goto LABEL_523;
  LODWORD(v783) = RtlUIntAdd(dwBytes, v109, &dwBytes);
  v10 = (int)v783;
  if ( (int)v783 < 0 )
    goto LABEL_523;
  v110 = RtlUIntAdd(v65, v65, &m);
  LODWORD(v783) = v110;
  v10 = v110;
  if ( v110 >= 0 )
    v111 = (int)m;
  v808 = v111;
  if ( v110 < 0 )
    goto LABEL_523;
  v10 = RtlUIntAdd(dwBytes, v111, &dwBytes);
  LODWORD(v783) = v10;
  v112 = v816;
  if ( v10 >= 0 )
    v112 = dwBytes;
LABEL_142:
  LODWORD(v789) = v112;
  if ( v10 < 0 )
    goto LABEL_442;
  v113 = v8;
  pcchLength = (size_t)v8;
  v114 = (unsigned int)v8;
  v851 = v8;
  v815 = v8;
  v115 = (int)v8;
  LODWORD(v790) = (_DWORD)v8;
  v828 = v8;
  v803 = (unsigned int)v8;
  v830 = v8;
  psza = (STRSAFE_PCNZWCH)v8;
  v813 = (unsigned int)v8;
  v885 = __rdtsc();
  v809 = 8;
  v116 = RtlUIntAdd(8u, SDWORD1(v788), &v809);
  if ( v116 >= 0 )
  {
    v117 = (v809 + 7) & 0xFFFFFFF8;
    if ( v117 < v809 )
    {
      v116 = -1073741675;
    }
    else
    {
      v809 = (v809 + 7) & 0xFFFFFFF8;
      v118 = v117;
      v119 = GetProcessHeap();
      v120 = (char *)HeapAlloc(v119, 8u, v118);
      v8 = 0LL;
      v121 = v120;
      if ( v120 )
      {
        v787 = (size_t)v120;
        *(_DWORD *)v120 = v788;
        v116 = RtlULongLongAdd((unsigned __int64)v120, 4LL, &v787);
        if ( v116 >= 0 )
        {
          v123 = v787;
          *(_DWORD *)v787 = DWORD1(v788);
          v116 = RtlULongLongAdd(v123, v122, &v787);
          if ( v116 >= 0 )
          {
            *(_QWORD *)&v121[v809 - 8] = v885;
            memcpy_0((void *)v787, *((const void **)&v788 + 1), DWORD1(v788));
            v114 = v809;
            v8 = 0LL;
            v113 = (unsigned __int8 *)v121;
            pcchLength = (size_t)v121;
            v121 = 0LL;
          }
        }
        if ( v121 )
        {
          v396 = GetProcessHeap();
          HeapFree(v396, 0, v121);
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
  LODWORD(v783) = v10;
  if ( v10 < 0 )
    goto LABEL_335;
  v888 = (__int64 *)v8;
  v124 = v8;
  v906 = (__int64)v8;
  v890 = v8;
  v908 = (__int64)v8;
  lpMem = v8;
  v915 = (SIZE_T)v8;
  v787 = (size_t)v8;
  if ( v113 )
  {
    v125 = v114;
    m = (void *)v114;
    if ( v114 && (v805 = v114 + 8LL, v126 = MemoryAlloc(v805), v8 = 0LL, v783 = v126, (v127 = v126) != 0LL) )
    {
      v128 = 0;
      for ( i = 0LL; i < v114; ++i )
        v128 ^= v113[i];
      v130 = -1;
      v797 = 0;
      v793 = -1;
      v131 = v113;
      LODWORD(dwBytes) = 0;
      v132 = v127;
      v133 = 0;
      v134 = 0;
      v135 = v114 & 7;
      if ( (v114 & 7) != 0 )
      {
        LODWORD(dwBytes) = 0;
        v397 = 0;
        v398 = 0;
        v399 = 56;
        do
        {
          v400 = *v131;
          if ( v398 >= 4 )
            v134 |= v400 << v399;
          else
            v397 |= v400 << (v399 - 32);
          ++v131;
          ++v398;
          v399 -= 8;
        }
        while ( v398 < v135 );
        LODWORD(dwBytes) = v397;
        v401 = 0;
        v133 = v397 ^ 0x90280470;
        v402 = v134 ^ 0xB47C7C45;
        v797 = v397 ^ 0x90280470;
        v793 = v134 ^ 0xB47C7C45;
        if ( (v125 & 7) != 0 )
        {
          do
          {
            if ( v401 >= 4 )
            {
              v402 = __ROL4__(v402, 8);
              *v132 = v402;
            }
            else
            {
              v133 = __ROL4__(v133, 8);
              *v132 = v133;
            }
            ++v132;
            ++v401;
          }
          while ( v401 < v135 );
          v133 = v797;
          v402 = v793;
        }
        v403 = v135 - 4;
        if ( v135 - 4 <= 0 )
        {
          v793 = 0;
          v130 = 0;
          if ( v403 < 0 )
          {
            v133 = v133 >> (-8 * v403) << (-8 * v403);
            v797 = v133;
          }
        }
        else
        {
          v130 = v402 >> (8 * (4 - v403)) << (8 * (4 - v403));
          v793 = v130;
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
          v797 = v137 ^ v168;
          v137 = v143;
          v793 = v134 ^ v168 ^ v167 ^ 0xE468148;
          v134 = v144;
          *(v138 - 4) = v797;
          v797 = __ROR4__(v797, 8);
          *v138 = v793;
          v138 += 8;
          v793 = __ROR4__(v793, 8);
          *(v138 - 13) = v797;
          v797 = __ROR4__(v797, 8);
          *(v138 - 9) = v793;
          v793 = __ROR4__(v793, 8);
          *(v138 - 14) = v797;
          v797 = __ROR4__(v797, 8);
          *(v138 - 10) = v793;
          v793 = __ROR4__(v793, 8);
          *(v138 - 15) = v797;
          *(v138 - 11) = v793;
          v133 = __ROR4__(v797, 8);
          v130 = __ROR4__(v793, 8);
          v797 = v133;
          v793 = v130;
          --v136;
        }
        while ( v136 );
        v124 = (_QWORD *)v787;
        v125 = (unsigned __int64)m;
        v127 = v783;
      }
      *(_QWORD *)&v127[v125] = v128;
      v169 = v805;
      v915 = v805;
      lpMem = v127;
      v888 = &`WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
      v906 = 8LL;
      v908 = 160LL;
      v890 = (unsigned __int8 *)`WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher;
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
        *v176 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
        v176[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
        v176[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
        v176[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
        v176[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
        v176[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
        v176[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
        v176[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
        v176[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
        v176[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
        v172[8] = 8;
        v177 = GetProcessHeap();
        v178 = HeapAlloc(v177, 8u, 8uLL);
        v8 = 0LL;
        if ( v178 )
        {
          *((_QWORD *)v172 + 5) = v178;
          v124 = v172;
          *v178 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
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
          v404 = (void *)*((_QWORD *)v172 + 1);
          if ( v404 )
          {
            v405 = GetProcessHeap();
            HeapFree(v405, 0, v404);
            *((_QWORD *)v172 + 1) = 0LL;
          }
          v406 = (void *)*((_QWORD *)v172 + 3);
          if ( v406 )
          {
            v407 = GetProcessHeap();
            HeapFree(v407, 0, v406);
            *((_QWORD *)v172 + 3) = 0LL;
          }
          v408 = (void *)*((_QWORD *)v172 + 5);
          if ( v408 )
          {
            v409 = GetProcessHeap();
            HeapFree(v409, 0, v408);
            *((_QWORD *)v172 + 5) = 0LL;
          }
          v410 = GetProcessHeap();
          HeapFree(v410, 0, v172);
          v8 = 0LL;
        }
      }
      else
      {
        v179 = -1073741801;
      }
      if ( v179 >= 0 )
      {
        v851 = v124;
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
      v411 = (void *)v124[1];
      if ( v411 )
      {
        v412 = GetProcessHeap();
        HeapFree(v412, 0, v411);
        v124[1] = 0LL;
      }
      v413 = (void *)v124[3];
      if ( v413 )
      {
        v414 = GetProcessHeap();
        HeapFree(v414, 0, v413);
        v124[3] = 0LL;
      }
      v415 = (void *)v124[5];
      if ( v415 )
      {
        v416 = GetProcessHeap();
        HeapFree(v416, 0, v415);
        v124[5] = 0LL;
      }
      v417 = GetProcessHeap();
      HeapFree(v417, 0, v124);
      v8 = 0LL;
    }
    v115 = (int)v790;
  }
  else
  {
    v179 = -1073741811;
  }
  v10 = v179 | 0x10000000;
  LODWORD(v783) = v10;
  if ( v10 < 0 )
    goto LABEL_335;
  v182 = (const void **)v851;
  LODWORD(dwBytes) = 4;
  v183 = RtlUIntAdd(4u, *(_DWORD *)v851, &dwBytes);
  if ( v183 < 0
    || (v183 = RtlUIntAdd(dwBytes, 4, &dwBytes), v183 < 0)
    || (v183 = RtlUIntAdd(dwBytes, *((_DWORD *)v182 + 4), &dwBytes), v183 < 0)
    || (v183 = RtlUIntAdd(dwBytes, 4, &dwBytes), v183 < 0) )
  {
    v184 = v821;
  }
  else
  {
    v183 = RtlUIntAdd(dwBytes, *((_DWORD *)v182 + 8), &dwBytes);
    v184 = v821;
    if ( v183 >= 0 )
      v184 = dwBytes;
    v821 = v184;
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
                  v115 = v821;
                  v815 = v188;
                  v188 = 0LL;
                }
              }
            }
          }
        }
      }
      if ( v188 )
      {
        v418 = GetProcessHeap();
        HeapFree(v418, 0, v188);
        v8 = 0LL;
      }
    }
    else
    {
      v183 = -1073741801;
    }
  }
  v10 = v183 | 0x10000000;
  LODWORD(v783) = v10;
  if ( v10 < 0 )
    goto LABEL_335;
  v194 = (int)v8;
  v892 = v8;
  v869 = (int)v8;
  v861 = (int)v8;
  v907 = v8;
  v822 = 8;
  v195 = RtlUIntAdd(8u, (int)v789, &v822);
  v10 = v195 | 0x10000000;
  LODWORD(v783) = v195 | 0x10000000;
  if ( v195 >= 0 )
  {
    v197 = (v822 + 7) & 0xFFFFFFF8;
    if ( v197 < v822 )
    {
      v10 = -1073741675;
      LODWORD(v783) = -1073741675;
    }
    else
    {
      v842 = (v822 + 7) & 0xFFFFFFF8;
      v198 = RtlUIntAdd(v197, v196, &v842);
      v199 = v840;
      v10 = v198;
      LODWORD(v783) = v198;
      if ( v198 >= 0 )
        v199 = v842;
      v840 = v199;
    }
    if ( v10 < 0 )
      goto LABEL_335;
    if ( *((unsigned __int8 **)&v788 + 1) == v8 || (unsigned int)v788 <= 1 )
      goto LABEL_562;
    v200 = (unsigned int *)*((_QWORD *)&v788 + 1);
    m = (void *)*((_QWORD *)&v788 + 1);
    do
    {
      v201 = *v200;
      LODWORD(v783) = RtlULongLongAdd((unsigned __int64)v200, 4LL, &m);
      v10 = (int)v783;
      if ( (int)v783 < 0 )
        goto LABEL_563;
      LODWORD(v783) = RtlULongLongAdd((unsigned __int64)m, v201, &m);
      v10 = (int)v783;
      if ( (int)v783 < 0 )
        goto LABEL_563;
      v200 = (unsigned int *)m;
    }
    while ( v202 == -1 );
    LODWORD(v783) = RtlULongLongAdd((unsigned __int64)m, 4LL, &m);
    v10 = (int)v783;
    if ( (int)v783 < 0 )
    {
LABEL_563:
      v8 = 0LL;
      goto LABEL_210;
    }
    v204 = (unsigned __int8 *)m;
    v861 = v203;
    if ( !v203 )
      v204 = 0LL;
    v8 = 0LL;
    v892 = v204;
LABEL_210:
    if ( v10 < 0 )
      goto LABEL_335;
    if ( (unsigned int)v788 <= 2 )
    {
LABEL_562:
      v10 = -1073741811;
      LODWORD(v783) = -1073741811;
    }
    else
    {
      v205 = (unsigned int *)*((_QWORD *)&v788 + 1);
      m = (void *)*((_QWORD *)&v788 + 1);
      do
      {
        v206 = *v205;
        LODWORD(v783) = RtlULongLongAdd((unsigned __int64)v205, 4LL, &m);
        v10 = (int)v783;
        if ( (int)v783 < 0 )
          goto LABEL_564;
        LODWORD(v783) = RtlULongLongAdd((unsigned __int64)m, v206, &m);
        v10 = (int)v783;
        if ( (int)v783 < 0 )
          goto LABEL_564;
        v205 = (unsigned int *)m;
      }
      while ( (unsigned int)(v208 + 1) < 2 );
      LODWORD(v783) = RtlULongLongAdd((unsigned __int64)m, 4LL, &m);
      v10 = (int)v783;
      if ( (int)v783 < 0 )
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
      v869 = v194;
      v907 = v210;
LABEL_220:
      if ( v10 < 0 )
        goto LABEL_335;
      LODWORD(dwBytes) = 4;
      LODWORD(v783) = RtlUIntAdd(4u, v207, &dwBytes);
      v10 = (int)v783;
      if ( (int)v783 < 0
        || (LODWORD(v783) = RtlUIntAdd(dwBytes, 4, &dwBytes), v10 = (int)v783, (int)v783 < 0)
        || (LODWORD(v783) = RtlUIntAdd(dwBytes, v212, &dwBytes), v10 = (int)v783, (int)v783 < 0)
        || (LODWORD(v783) = RtlUIntAdd(dwBytes, 4, &dwBytes), v10 = (int)v783, (int)v783 < 0) )
      {
        v213 = v843;
      }
      else
      {
        v10 = RtlUIntAdd(dwBytes, v194, &dwBytes);
        LODWORD(v783) = v10;
        v213 = v843;
        if ( v10 >= 0 )
          v213 = dwBytes;
        v843 = v213;
      }
      if ( v10 < 0 )
        goto LABEL_335;
      if ( v213 > 0x400000 )
      {
        v10 = -2147418113;
        goto LABEL_334;
      }
      v803 = v213;
    }
  }
  if ( v10 < 0 )
    goto LABEL_335;
  v214 = v803;
  v215 = (int)v8;
  v216 = GetProcessHeap();
  v217 = HeapAlloc(v216, 8u, v214);
  v8 = 0LL;
  if ( v217 )
  {
    v218 = v217;
    v828 = v217;
  }
  else
  {
    v218 = v828;
    v215 = -1073741801;
  }
  v10 = v215 | 0x10000000;
  LODWORD(v783) = v10;
  if ( v10 < 0 )
    goto LABEL_335;
  v219 = v815;
  if ( !v815 || !v218 )
  {
    v10 = -2147024809;
    goto LABEL_334;
  }
  if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
    && (ProcAddress = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
  {
    v923 = v803;
    v921[0] = v219;
    v922 = v115;
    v921[1] = v218;
    v924 = 0;
    v221 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, _QWORD))ProcAddress)(134LL, v921, 32LL, 0LL);
    v222 = v803;
    v8 = 0LL;
    v10 = v221 | 0x10000000;
    if ( v221 >= 0 )
      v222 = v923;
    v803 = v222;
  }
  else
  {
    LastError = GetLastError();
    v8 = 0LL;
    LODWORD(v783) = LastError;
    v10 = LastError;
    if ( LastError > 0 )
    {
      v10 = (unsigned __int16)LastError | 0x80070000;
      LODWORD(v783) = v10;
    }
    v222 = v803;
    if ( v10 < 0 )
      goto LABEL_243;
    v10 = -2147467259;
  }
  LODWORD(v783) = v10;
LABEL_243:
  if ( v10 == -805306333 )
  {
    v10 = -2147024774;
    LODWORD(v783) = -2147024774;
    goto LABEL_335;
  }
  if ( v10 < 0 )
    goto LABEL_335;
  LODWORD(v783) = 0;
  v223 = 0LL;
  m = v218;
  if ( v222 < 4 )
    goto LABEL_574;
  v224 = *v218;
  v226 = RtlULongLongAdd((unsigned __int64)v218, 4LL, &m);
  if ( v226 < 0 )
    goto LABEL_279;
  v226 = RtlUIntAdd(0, v225, &v783);
  if ( v226 < 0 )
    goto LABEL_279;
  if ( v227 - (int)v783 < v224 )
    goto LABEL_574;
  v787 = (size_t)m;
  v226 = RtlULongLongAdd((unsigned __int64)m, v224, &m);
  if ( v226 < 0 )
    goto LABEL_279;
  v226 = RtlUIntAdd((unsigned int)v783, v228, &v783);
  if ( v226 < 0 )
    goto LABEL_279;
  if ( v229 - (int)v783 < v230 )
    goto LABEL_574;
  v231 = *(unsigned int *)m;
  v226 = RtlULongLongAdd((unsigned __int64)m, v230, &m);
  if ( v226 < 0 )
    goto LABEL_279;
  v226 = RtlUIntAdd((unsigned int)v783, v232, &v783);
  if ( v226 < 0 )
    goto LABEL_279;
  if ( v233 - (int)v783 < (unsigned int)v231 )
    goto LABEL_574;
  v789 = m;
  v226 = RtlULongLongAdd((unsigned __int64)m, (unsigned int)v231, &m);
  if ( v226 < 0 )
    goto LABEL_279;
  v226 = RtlUIntAdd((unsigned int)v783, v234, &v783);
  if ( v226 < 0 )
    goto LABEL_279;
  if ( v235 - (int)v783 < v236 )
    goto LABEL_574;
  v237 = *(unsigned int *)m;
  v226 = RtlULongLongAdd((unsigned __int64)m, v236, &m);
  if ( v226 < 0 )
    goto LABEL_279;
  v226 = RtlUIntAdd((unsigned int)v783, v238, &v783);
  if ( v226 < 0 )
    goto LABEL_279;
  if ( v239 - (int)v783 < (unsigned int)v237 )
    goto LABEL_574;
  v226 = RtlUIntAdd((unsigned int)v783, v237, &v783);
  if ( v226 < 0 )
    goto LABEL_279;
  if ( v240 != (_DWORD)v783 || v224 + (_DWORD)v237 + (_DWORD)v231 + 12LL != v240 )
  {
LABEL_574:
    v226 = -1073741762;
    goto LABEL_279;
  }
  v241 = GetProcessHeap();
  v242 = HeapAlloc(v241, 8u, 0x30uLL);
  v8 = 0LL;
  v243 = v242;
  if ( v242 )
  {
    v226 = 0;
    if ( v787 )
    {
      *(_DWORD *)v242 = v224;
      v244 = GetProcessHeap();
      v245 = HeapAlloc(v244, 8u, v224);
      v8 = 0LL;
      if ( !v245 )
        goto LABEL_576;
      v243[1] = v245;
      memcpy_0(v245, (const void *)v787, v224);
      v8 = 0LL;
    }
    else
    {
      *(_DWORD *)v242 = 0;
      v242[1] = 0LL;
    }
    v246 = v789;
    if ( v789 )
    {
      *((_DWORD *)v243 + 4) = v231;
      v247 = GetProcessHeap();
      v248 = HeapAlloc(v247, 8u, v231);
      v8 = 0LL;
      if ( !v248 )
        goto LABEL_576;
      v243[3] = v248;
      v226 = 0;
      memcpy_0(v248, v246, v231);
      v8 = 0LL;
    }
    else
    {
      *((_DWORD *)v243 + 4) = 0;
      v243[3] = 0LL;
    }
    v249 = m;
    if ( !m )
    {
      *((_DWORD *)v243 + 8) = 0;
      v243[5] = 0LL;
      goto LABEL_274;
    }
    *((_DWORD *)v243 + 8) = v237;
    v250 = GetProcessHeap();
    v251 = HeapAlloc(v250, 8u, v237);
    v8 = 0LL;
    if ( v251 )
    {
      v243[5] = v251;
      v226 = 0;
      memcpy_0(v251, v249, v237);
      v8 = 0LL;
LABEL_274:
      v223 = v243;
      v243 = 0LL;
      goto LABEL_275;
    }
LABEL_576:
    v226 = -1073741801;
LABEL_275:
    if ( v243 )
    {
      v420 = (void *)v243[1];
      if ( v420 )
      {
        v421 = GetProcessHeap();
        HeapFree(v421, 0, v420);
        v243[1] = 0LL;
      }
      v422 = (void *)v243[3];
      if ( v422 )
      {
        v423 = GetProcessHeap();
        HeapFree(v423, 0, v422);
        v243[3] = 0LL;
      }
      v424 = (void *)v243[5];
      if ( v424 )
      {
        v425 = GetProcessHeap();
        HeapFree(v425, 0, v424);
        v243[5] = 0LL;
      }
      v426 = GetProcessHeap();
      HeapFree(v426, 0, v243);
      v8 = 0LL;
    }
    goto LABEL_276;
  }
  v226 = -1073741801;
LABEL_276:
  if ( v226 >= 0 )
  {
    v830 = v223;
    v223 = 0LL;
  }
  if ( v223 )
  {
    v427 = (void *)v223[1];
    if ( v427 )
    {
      v428 = GetProcessHeap();
      HeapFree(v428, 0, v427);
      v223[1] = 0LL;
    }
    v429 = (void *)v223[3];
    if ( v429 )
    {
      v430 = GetProcessHeap();
      HeapFree(v430, 0, v429);
      v223[3] = 0LL;
    }
    v431 = (void *)v223[5];
    if ( v431 )
    {
      v432 = GetProcessHeap();
      HeapFree(v432, 0, v431);
      v223[5] = 0LL;
    }
    v433 = GetProcessHeap();
    HeapFree(v433, 0, v223);
    v8 = 0LL;
  }
LABEL_279:
  v10 = v226 | 0x10000000;
  LODWORD(v783) = v10;
  if ( v10 < 0 )
    goto LABEL_335;
  v252 = (wchar_t *)v8;
  v835 = (wchar_t *)v8;
  v253 = (int)v8;
  v876 = (unsigned __int64)v8;
  if ( !v830 || (v254 = (unsigned __int8 *)*((_QWORD *)v830 + 1), (v789 = v254) == 0LL) || *(_DWORD *)v830 == (_DWORD)v8 )
  {
    v253 = -1073741811;
    goto LABEL_302;
  }
  if ( !*(_DWORD *)v830 )
    goto LABEL_612;
  v255 = *(unsigned int *)v830 - 8LL;
  v805 = v255;
  v256 = MemoryAlloc(v255);
  v8 = 0LL;
  v787 = (size_t)v256;
  v257 = v256;
  if ( !v256 )
  {
    v252 = v835;
    goto LABEL_612;
  }
  v258 = 0;
  LOBYTE(v786) = 0;
  v259 = v254;
  v260 = v257;
  v261 = v255 & 7;
  if ( (v255 & 7) == 0 )
  {
    LODWORD(dwBytes) = 0;
    v262 = -1;
    v263 = 0;
    v791 = 0;
    v264 = 0;
LABEL_287:
    v796 = v264;
    goto LABEL_288;
  }
  v791 = -1;
  v796 = 0;
  v262 = 0;
  LODWORD(dwBytes) = 0;
  v434 = 0;
  v435 = 0;
  v436 = 56;
  do
  {
    v437 = *v259;
    if ( v435 >= 4 )
      v262 |= v437 << v436;
    else
      v434 |= v437 << (v436 - 32);
    ++v259;
    ++v435;
    v436 -= 8;
  }
  while ( v435 < v261 );
  LODWORD(dwBytes) = v434;
  v264 = v434 ^ 0x95D05BAD;
  v438 = v262 ^ 0x2197039C;
  v796 = v434 ^ 0x95D05BAD;
  v439 = 0;
  v791 = v262 ^ 0x2197039C;
  if ( (v255 & 7) != 0 )
  {
    do
    {
      if ( v439 >= 4 )
      {
        v438 = __ROL4__(v438, 8);
        *v260 = v438;
      }
      else
      {
        v264 = __ROL4__(v264, 8);
        *v260 = v264;
      }
      ++v260;
      ++v439;
    }
    while ( v439 < v261 );
    v264 = v796;
    v438 = v791;
  }
  v440 = v261 - 4;
  if ( v261 - 4 <= 0 )
  {
    v791 = 0;
    v263 = 0;
    if ( v440 < 0 )
    {
      v264 = v264 >> (-8 * v440) << (-8 * v440);
      goto LABEL_287;
    }
  }
  else
  {
    v263 = v438 >> (8 * (4 - v440)) << (8 * (4 - v440));
    v791 = v263;
  }
LABEL_288:
  v265 = v255 >> 3;
  if ( v255 >> 3 )
  {
    v266 = dwBytes;
    v267 = v260 + 7;
    v268 = v259 + 2;
    do
    {
      v269 = *(v268 - 1) | (*(v268 - 2) << 8);
      v270 = v268[2] << 8;
      v271 = *v268;
      v268 += 8;
      v272 = *(v268 - 7) | ((v271 | (v269 << 8)) << 8);
      v273 = v272 ^ v264;
      v274 = *(v268 - 3) | ((*(v268 - 4) | ((*(v268 - 5) | v270) << 8)) << 8);
      v275 = v273 ^ v274 ^ v263 ^ 0x501779F2;
      v276 = (__ROL4__(v275, 10) + 14503 * __ROL4__(v275 - 347095381, 5)) ^ v273;
      v277 = (5296 * __ROR4__(v276 + 1151809703, 9) - __ROL4__(v276, 2)) ^ v275;
      v278 = (16725 * (v277 - 14503) - (v277 >> 13)) ^ v276;
      v279 = (17575 * __ROL4__(v278 ^ 0x14B0, 6) - __ROL4__(v278, 2)) ^ v277;
      v280 = (1151809703 - (v279 ^ 0x14B04155)) ^ v278;
      v281 = (5296 * (v280 ^ 0x38A7)) ^ __ROR4__(v280, 6) ^ v279;
      v282 = (__ROL4__(v281, 2) + 16725 * __ROR4__(v281 + 1151809703, 15)) ^ v280;
      v283 = (17575 * __ROR4__(v282 - 347095381, 14) - __ROL4__(v282, 8)) ^ v281;
      v284 = __ROR4__(v283, 10) ^ (14503 * __ROR4__(v283 ^ 0x14B04155, 12)) ^ v282;
      v285 = (v284 >> 10) ^ (5296 * (v284 ^ 0x44A7)) ^ v283;
      v286 = (17575 * (__ROR4__(~v285, 5) + 16725)) ^ v284;
      v287 = v286 ^ v285 ^ 0x501779F2;
      v288 = (1151809703 - (v287 ^ 0x14B04155)) ^ v286;
      v289 = (5296 * __ROL4__(v288 + 1151809703, 2) - __ROL4__(v288, 6)) ^ v287;
      v290 = __ROR4__(v289, 3) ^ (16725 * __ROL4__(v289 - 1151809703, 15)) ^ v288;
      v291 = (v290 >> 10) ^ (17575 * (v290 ^ 0x4155)) ^ v289;
      v292 = (14503 * __ROL4__(347095381 - v291, 1) - __ROL4__(v291, 4)) ^ v290;
      v293 = (5296 * (v292 ^ 0x38A7) + __ROR4__(v292, 10)) ^ v291;
      v294 = (14503 * (__ROR4__(v293, 10) ^ 0x4155)) ^ v292;
      v295 = (17575 * (v294 - 14503) - (v294 >> 8)) ^ v293;
      v296 = __ROR4__(v295, 8) ^ (14503 * __ROL4__(v295 - 347095381, 8)) ^ v294;
      v297 = (5296 * __ROL4__(v296 ^ 0x44A738A7, 3) - (v296 >> 8)) ^ v295;
      v791 = v262 ^ v297;
      v262 = v274;
      v298 = v266 ^ (16725 * __ROR4__(v297 - 1151809703, 3) - __ROR4__(v297, 13));
      v266 = v272;
      v796 = v298 ^ v296;
      *(v267 - 4) = v298 ^ v296;
      v796 = __ROR4__(v796, 8);
      *v267 = v791;
      v267 += 8;
      v791 = __ROR4__(v791, 8);
      *(v267 - 13) = v796;
      v796 = __ROR4__(v796, 8);
      *(v267 - 9) = v791;
      v791 = __ROR4__(v791, 8);
      *(v267 - 14) = v796;
      v796 = __ROR4__(v796, 8);
      *(v267 - 10) = v791;
      v791 = __ROR4__(v791, 8);
      *(v267 - 15) = v796;
      *(v267 - 11) = v791;
      v264 = __ROR4__(v796, 8);
      v263 = __ROR4__(v791, 8);
      v796 = v264;
      v791 = v263;
      --v265;
    }
    while ( v265 );
    v258 = v786;
    v255 = v805;
    v257 = (_BYTE *)v787;
  }
  v8 = 0LL;
  for ( j = 0LL; j < v255; ++j )
    v258 ^= v257[j];
  if ( v258 == *(_QWORD *)((char *)v789 + v255) )
  {
    v252 = (wchar_t *)v257;
    v876 = v255;
    v835 = (wchar_t *)v257;
    v257 = 0LL;
    v300 = v253;
  }
  else
  {
    v252 = v835;
    v300 = -1073425151;
  }
  if ( v257 )
  {
    MemoryFree(v257);
    v252 = v835;
    v8 = 0LL;
  }
  if ( v300 >= 0 )
  {
    psza = v252;
    v252 = 0LL;
    v835 = 0LL;
    v813 = v876;
    goto LABEL_300;
  }
LABEL_612:
  v253 = -1073741823;
LABEL_300:
  if ( v252 )
  {
    v441 = GetProcessHeap();
    HeapFree(v441, 0, v252);
    v8 = 0LL;
    v835 = 0LL;
  }
LABEL_302:
  v10 = v253 | 0x10000000;
  LODWORD(v783) = v10;
  if ( v10 >= 0 )
  {
    LODWORD(dwBytes) = (_DWORD)v8;
    v787 = (size_t)psza;
    if ( v813 >= 4 )
    {
      LODWORD(v789) = *(_DWORD *)psza;
      v302 = RtlULongLongAdd((unsigned __int64)psza, 4LL, &v787);
      if ( v302 < 0 )
        goto LABEL_333;
      v302 = RtlUIntAdd(0, v301, &dwBytes);
      if ( v302 < 0 )
        goto LABEL_333;
      if ( v813 - (unsigned int)dwBytes >= v304 )
      {
        v305 = *(unsigned int *)v787;
        v302 = RtlULongLongAdd(v787, v303, &v787);
        if ( v302 < 0 )
          goto LABEL_333;
        v302 = RtlUIntAdd(dwBytes, v306, &dwBytes);
        if ( v302 < 0 )
          goto LABEL_333;
        if ( v813 - (unsigned int)dwBytes >= (unsigned int)v305 )
        {
          v302 = RtlUIntAdd(dwBytes, v305, &dwBytes);
          if ( v302 < 0 )
            goto LABEL_333;
          v309 = (const void *)v787;
          if ( (unsigned __int64)v813 + v307 >= v305 + v787 && v307 + v813 - v305 - v787 < 8 )
          {
            v310 = v308;
            v302 = (int)v308;
            v311 = (unsigned int)v308;
            if ( !v787 )
              goto LABEL_325;
            v302 = RtlULongLongAdd(v787, (unsigned int)v305, &v805);
            if ( v302 < 0 )
              goto LABEL_331;
            v313 = v805;
            if ( (unsigned __int64)v309 < v805 )
            {
              do
              {
                v302 = RtlULongLongAdd(v312, 4LL, &v805);
                if ( v302 < 0 )
                  goto LABEL_331;
                if ( v805 > v315 )
                  goto LABEL_613;
                v316 = RtlUIntAdd(4u, *v314, &m);
                v302 = v316;
                if ( v316 >= 0 )
                  v318 = (unsigned int)m;
                v871 = v318;
                if ( v316 < 0 )
                  goto LABEL_333;
                v302 = RtlULongLongAdd(v317, v318, &v787);
                if ( v302 < 0 )
                  goto LABEL_333;
                v312 = v787;
                if ( v787 > v313 )
                  goto LABEL_613;
                ++v311;
              }
              while ( v787 < v313 );
            }
            if ( v312 == v313 )
            {
LABEL_325:
              if ( (_DWORD)v305 )
              {
                v319 = GetProcessHeap();
                v310 = HeapAlloc(v319, 8u, v305);
                if ( !v310 )
                {
                  v302 = -1073741801;
                  goto LABEL_331;
                }
                v302 = 0;
              }
              if ( v309 )
                memcpy_0(v310, v309, v305);
              *((_QWORD *)&v812 + 1) = v310;
              *(_QWORD *)&v812 = __PAIR64__(v305, v311);
LABEL_331:
              if ( v302 < 0 || (_DWORD)v789 == (_DWORD)v812 )
                goto LABEL_333;
              goto LABEL_615;
            }
LABEL_613:
            v302 = -1073741811;
LABEL_333:
            v10 = v302 | 0x10000000;
            v8 = 0LL;
LABEL_334:
            LODWORD(v783) = v10;
            goto LABEL_335;
          }
        }
      }
    }
LABEL_615:
    v302 = -1073741762;
    goto LABEL_333;
  }
LABEL_335:
  v320 = (void *)pcchLength;
  if ( pcchLength )
  {
    v321 = GetProcessHeap();
    HeapFree(v321, 0, v320);
    v8 = 0LL;
  }
  v322 = v851;
  if ( v851 )
  {
    v323 = (void *)*((_QWORD *)v851 + 1);
    if ( v323 )
    {
      v324 = GetProcessHeap();
      HeapFree(v324, 0, v323);
      v322[1] = 0LL;
    }
    v325 = (void *)v322[3];
    if ( v325 )
    {
      v326 = GetProcessHeap();
      HeapFree(v326, 0, v325);
      v322[3] = 0LL;
    }
    v327 = (void *)v322[5];
    if ( v327 )
    {
      v328 = GetProcessHeap();
      HeapFree(v328, 0, v327);
      v322[5] = 0LL;
    }
    v329 = GetProcessHeap();
    HeapFree(v329, 0, v322);
    v8 = 0LL;
    v851 = 0LL;
  }
  v330 = v815;
  if ( v815 )
  {
    v331 = GetProcessHeap();
    HeapFree(v331, 0, v330);
    v8 = 0LL;
  }
  v332 = v828;
  if ( v828 )
  {
    v333 = GetProcessHeap();
    HeapFree(v333, 0, v332);
    v8 = 0LL;
  }
  v334 = v830;
  if ( v830 )
  {
    v335 = (void *)*((_QWORD *)v830 + 1);
    if ( v335 )
    {
      v336 = GetProcessHeap();
      HeapFree(v336, 0, v335);
      v334[1] = 0LL;
    }
    v337 = (void *)v334[3];
    if ( v337 )
    {
      v338 = GetProcessHeap();
      HeapFree(v338, 0, v337);
      v334[3] = 0LL;
    }
    v339 = (void *)v334[5];
    if ( v339 )
    {
      v340 = GetProcessHeap();
      HeapFree(v340, 0, v339);
      v334[5] = 0LL;
    }
    v341 = GetProcessHeap();
    HeapFree(v341, 0, v334);
    v8 = 0LL;
  }
  v342 = (wchar_t *)psza;
  if ( psza )
  {
    v343 = GetProcessHeap();
    HeapFree(v343, 0, v342);
    v8 = 0LL;
  }
  if ( v10 < 0 )
    goto LABEL_442;
  if ( !(_DWORD)v812 )
    goto LABEL_616;
  if ( *((unsigned __int8 **)&v812 + 1) == v8 || (unsigned int)v812 <= (unsigned int)v8 )
  {
    v10 = -1073741811;
    LODWORD(v783) = -1073741811;
  }
  else
  {
    pcchLength = *((_QWORD *)&v812 + 1);
    LODWORD(v783) = RtlULongLongAdd(*((unsigned __int64 *)&v812 + 1), 4LL, &pcchLength);
    v10 = (int)v783;
    if ( (int)v783 < 0 )
    {
      v344 = v873;
      v345 = v913;
    }
    else
    {
      v345 = (int *)pcchLength;
      v873 = v344;
      if ( !v344 )
        v345 = (int *)v8;
      v913 = v345;
    }
    if ( (int)v783 < 0 )
      goto LABEL_442;
    if ( v344 != 4 )
      goto LABEL_619;
    v819 = *v345;
  }
  if ( v10 < 0 )
    goto LABEL_442;
  v10 = v819;
  if ( v819 == -805306333 )
    v10 = -2147024774;
  LODWORD(v783) = v10;
  v819 = v10;
  if ( v10 != -2147024774 && v10 < 0 )
    goto LABEL_442;
  if ( (_DWORD)v812 != 6 )
  {
LABEL_616:
    v10 = -1073425151;
    goto LABEL_441;
  }
  if ( *((unsigned __int8 **)&v812 + 1) == v8 )
  {
    v10 = -1073741811;
    LODWORD(v783) = -1073741811;
    goto LABEL_388;
  }
  v346 = (void *)*((_QWORD *)&v812 + 1);
  m = (void *)*((_QWORD *)&v812 + 1);
  do
  {
    LODWORD(v783) = RtlULongLongAdd((unsigned __int64)v346, 4LL, &m);
    v10 = (int)v783;
    if ( (int)v783 < 0 )
    {
      v8 = 0LL;
      goto LABEL_622;
    }
    v348 = RtlULongLongAdd((unsigned __int64)m, v347, &m);
    v8 = 0LL;
    LODWORD(v783) = v348;
    v10 = v348;
    if ( v348 < 0 )
      goto LABEL_622;
    v346 = m;
  }
  while ( v349 == -1 );
  LODWORD(v783) = RtlULongLongAdd((unsigned __int64)m, 4LL, &m);
  v10 = (int)v783;
  if ( (int)v783 < 0 )
  {
LABEL_622:
    v350 = v864;
    v351 = v896;
    goto LABEL_385;
  }
  v351 = m;
  v864 = v350;
  if ( !v350 )
    v351 = v8;
  v896 = v351;
LABEL_385:
  if ( v10 < 0 )
    goto LABEL_442;
  if ( v350 != 8 )
    goto LABEL_619;
  v911 = *v351;
LABEL_388:
  if ( v10 < 0 )
    goto LABEL_442;
  if ( *((unsigned __int8 **)&v812 + 1) == v8 )
  {
    v10 = -1073741811;
    LODWORD(v783) = -1073741811;
LABEL_401:
    if ( v10 < 0 )
      goto LABEL_442;
    if ( *((unsigned __int8 **)&v812 + 1) == v8 )
    {
      v10 = -1073741811;
      goto LABEL_441;
    }
    v358 = (void *)*((_QWORD *)&v812 + 1);
    m = (void *)*((_QWORD *)&v812 + 1);
    while ( 1 )
    {
      LODWORD(v783) = RtlULongLongAdd((unsigned __int64)v358, 4LL, &m);
      v10 = (int)v783;
      if ( (int)v783 < 0 )
        break;
      LODWORD(v783) = RtlULongLongAdd((unsigned __int64)m, v359, &m);
      v10 = (int)v783;
      if ( (int)v783 < 0 )
        break;
      v358 = m;
      if ( (unsigned int)(v360 + 1) >= 3 )
      {
        LODWORD(v783) = RtlULongLongAdd((unsigned __int64)m, 4LL, &m);
        v10 = (int)v783;
        if ( (int)v783 >= 0 )
        {
          v362 = m;
          v872 = v361;
          if ( !v361 )
            v362 = 0LL;
          v898 = v362;
        }
        break;
      }
    }
    if ( v10 < 0 )
      goto LABEL_633;
    v363 = (unsigned int *)*((_QWORD *)&v812 + 1);
    m = (void *)*((_QWORD *)&v812 + 1);
    do
    {
      v364 = *v363;
      LODWORD(v783) = RtlULongLongAdd((unsigned __int64)v363, 4LL, &m);
      v10 = (int)v783;
      if ( (int)v783 < 0 )
        goto LABEL_628;
      LODWORD(v783) = RtlULongLongAdd((unsigned __int64)m, v364, &m);
      v10 = (int)v783;
      if ( (int)v783 < 0 )
        goto LABEL_628;
      v363 = (unsigned int *)m;
    }
    while ( (unsigned int)(v365 + 1) < 4 );
    LODWORD(v783) = RtlULongLongAdd((unsigned __int64)m, 4LL, &m);
    v10 = (int)v783;
    if ( (int)v783 < 0 )
    {
LABEL_628:
      v366 = v858;
      v367 = v886;
      goto LABEL_420;
    }
    v367 = (unsigned int *)m;
    v858 = v366;
    if ( !v366 )
      v367 = 0LL;
    v886 = v367;
LABEL_420:
    if ( v10 < 0 )
    {
      v368 = v866;
    }
    else
    {
      if ( v366 != 4 )
        goto LABEL_629;
      v368 = *v367;
      v866 = *v367;
    }
    if ( v10 < 0 )
      goto LABEL_633;
    v369 = (unsigned int *)*((_QWORD *)&v812 + 1);
    m = (void *)*((_QWORD *)&v812 + 1);
    do
    {
      v370 = *v369;
      LODWORD(v783) = RtlULongLongAdd((unsigned __int64)v369, 4LL, &m);
      v10 = (int)v783;
      if ( (int)v783 < 0 )
        goto LABEL_635;
      LODWORD(v783) = RtlULongLongAdd((unsigned __int64)m, v370, &m);
      v10 = (int)v783;
      if ( (int)v783 < 0 )
        goto LABEL_635;
      v369 = (unsigned int *)m;
    }
    while ( (unsigned int)(v373 + 1) < 5 );
    LODWORD(v783) = RtlULongLongAdd((unsigned __int64)m, 4LL, &m);
    v10 = (int)v783;
    if ( (int)v783 < 0 )
    {
LABEL_635:
      v374 = v860;
      v375 = v900;
      goto LABEL_432;
    }
    v375 = m;
    v860 = v374;
    if ( !v374 )
      v375 = 0LL;
    v900 = v375;
LABEL_432:
    if ( v10 < 0 )
    {
      v376 = v839;
LABEL_435:
      if ( v10 >= 0 )
      {
        if ( v884 == v911 )
        {
          v838 = v862;
          v847 = v368;
          v824 = v376;
          if ( v368 <= 4 && v371 <= 4 )
          {
            memcpy_0(v879, v372, v371);
            v8 = 0LL;
            if ( v819 )
              v10 = v819;
            goto LABEL_441;
          }
          v10 = -2147024774;
          LODWORD(v783) = -2147024774;
          goto LABEL_633;
        }
        v10 = -1073425151;
        goto LABEL_631;
      }
LABEL_633:
      v8 = 0LL;
      goto LABEL_442;
    }
    if ( v374 == 4 )
    {
      v376 = *v375;
      v839 = *v375;
      goto LABEL_435;
    }
LABEL_629:
    v10 = -1073741789;
LABEL_631:
    LODWORD(v783) = v10;
    goto LABEL_633;
  }
  v352 = (void *)*((_QWORD *)&v812 + 1);
  m = (void *)*((_QWORD *)&v812 + 1);
  do
  {
    LODWORD(v783) = RtlULongLongAdd((unsigned __int64)v352, 4LL, &m);
    v10 = (int)v783;
    if ( (int)v783 < 0 )
    {
      v8 = 0LL;
      goto LABEL_625;
    }
    v354 = RtlULongLongAdd((unsigned __int64)m, v353, &m);
    v8 = 0LL;
    LODWORD(v783) = v354;
    v10 = v354;
    if ( v354 < 0 )
      goto LABEL_625;
    v352 = m;
  }
  while ( (unsigned int)(v355 + 1) < 2 );
  LODWORD(v783) = RtlULongLongAdd((unsigned __int64)m, 4LL, &m);
  v10 = (int)v783;
  if ( (int)v783 < 0 )
  {
LABEL_625:
    v356 = v856;
    v357 = v909;
    goto LABEL_398;
  }
  v357 = m;
  v856 = v356;
  if ( !v356 )
    v357 = v8;
  v909 = v357;
LABEL_398:
  if ( v10 >= 0 )
  {
    if ( v356 == 4 )
    {
      v862 = *v357;
      goto LABEL_401;
    }
LABEL_619:
    v10 = -1073741789;
LABEL_441:
    LODWORD(v783) = v10;
  }
LABEL_442:
  v4 = v785;
LABEL_443:
  v5 = v784;
LABEL_444:
  v377 = (void *)*((_QWORD *)&v788 + 1);
  *(_QWORD *)&v788 = 0LL;
  if ( *((_QWORD *)&v788 + 1) )
  {
    v378 = GetProcessHeap();
    HeapFree(v378, 0, v377);
    v8 = 0LL;
    *((_QWORD *)&v788 + 1) = 0LL;
  }
  v379 = (void *)*((_QWORD *)&v812 + 1);
  *(_QWORD *)&v812 = 0LL;
  if ( *((_QWORD *)&v812 + 1) )
  {
    v380 = GetProcessHeap();
    HeapFree(v380, 0, v379);
    v8 = 0LL;
    *((_QWORD *)&v812 + 1) = 0LL;
  }
  if ( v4 )
  {
    v381 = GetProcessHeap();
    HeapFree(v381, 0, v4);
    v8 = 0LL;
  }
  if ( v5 )
  {
    v382 = GetProcessHeap();
    HeapFree(v382, 0, v5);
    v8 = 0LL;
  }
  if ( v10 < 0 )
    goto LABEL_1044;
  if ( v824 == (_DWORD)v8 )
    goto LABEL_454;
  v785 = v8;
  *(_QWORD *)((char *)&v799 + 4) = 0LL;
  v442 = v8;
  HIDWORD(v799) = 0;
  v443 = v8;
  *(_QWORD *)((char *)&v837 + 4) = 0LL;
  HIDWORD(v837) = 0;
  LODWORD(v799) = (_DWORD)v8;
  LODWORD(v837) = (_DWORD)v8;
  v820 = (int)v8;
  v902 = &`WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher;
  v878 = 160LL;
  v444 = GetProcessHeap();
  v445 = HeapAlloc(v444, 8u, 0xA0uLL);
  v8 = 0LL;
  v446 = v445;
  if ( !v445 )
    goto LABEL_1034;
  memcpy_0(v445, v902, v878);
  v447 = (unsigned int)v878;
  v442 = v446;
  v784 = v446;
  v882 = 8LL;
  v905 = &`WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
  v448 = GetProcessHeap();
  v449 = HeapAlloc(v448, 8u, 8uLL);
  v8 = 0LL;
  v450 = v449;
  if ( !v449 )
    goto LABEL_1033;
  memcpy_0(v449, v905, v882);
  v451 = v882;
  v785 = v450;
  v904 = __rdtsc();
  LODWORD(dwBytes) = 0;
  if ( (int)RtlUIntAdd(4u, 4, &m) < 0 )
    goto LABEL_681;
  v826 = (int)m;
  if ( (int)RtlUIntAdd(0, (int)m, &dwBytes) < 0 )
    goto LABEL_681;
  if ( (int)RtlUIntAdd(v452, v447, &m) < 0 )
    goto LABEL_681;
  v826 = (int)m;
  v453 = RtlUIntAdd(dwBytes, (int)m, &dwBytes);
  if ( (v455 | v453) < 0 )
    goto LABEL_681;
  if ( (int)RtlUIntAdd(v454, v451, &m) < 0 )
    goto LABEL_681;
  v826 = (int)m;
  v456 = RtlUIntAdd(dwBytes, (int)m, &dwBytes);
  if ( (v458 | v456) < 0 )
    goto LABEL_681;
  if ( (int)RtlUIntAdd(v457, (int)v8 + 8, &m) < 0 )
    goto LABEL_681;
  v826 = (int)m;
  v459 = RtlUIntAdd(dwBytes, (int)m, &dwBytes);
  if ( (v460 | v459) < 0 )
    goto LABEL_681;
  DWORD1(v799) = dwBytes;
  v461 = dwBytes;
  v462 = GetProcessHeap();
  v463 = HeapAlloc(v462, 8u, v461);
  v8 = 0LL;
  if ( !v463 )
    goto LABEL_681;
  *((_QWORD *)&v799 + 1) = v463;
  LODWORD(v799) = 0;
  v464 = 4;
  v844 = 4;
  if ( &v844 )
  {
    v465 = RtlULongLongAdd((unsigned __int64)v463, 4LL, &v807);
    if ( v465 >= 0 && v466 + 2 <= (unsigned int *)((char *)v466 + DWORD1(v799)) )
    {
      v467 = v807;
      *v466 = v464;
      *v467 = v844;
      LODWORD(v799) = v799 + 1;
      goto LABEL_653;
    }
    goto LABEL_681;
  }
  v465 = -1073741811;
LABEL_653:
  if ( v465 < 0 )
  {
LABEL_681:
    v442 = v446;
    v443 = v450;
    goto LABEL_1034;
  }
  if ( !(_DWORD)v447 )
  {
    v473 = -1073741811;
    goto LABEL_667;
  }
  if ( *((unsigned __int8 **)&v799 + 1) != v8 )
  {
    v468 = (int *)*((_QWORD *)&v799 + 1);
    psza = (STRSAFE_PCNZWCH)*((_QWORD *)&v799 + 1);
    if ( (_DWORD)v799 )
    {
      while ( (int)RtlUIntAdd(4u, *v468, &m) >= 0 )
      {
        v868 = (int)m;
        if ( (int)RtlULongLongAdd(v469, (unsigned int)m, &psza) < 0 )
        {
LABEL_680:
          v8 = 0LL;
          goto LABEL_681;
        }
        v468 = (int *)psza;
        if ( v470 + 1 >= (unsigned int)v799 )
          goto LABEL_663;
      }
      goto LABEL_1043;
    }
LABEL_663:
    v471 = RtlULongLongAdd((unsigned __int64)v468, 4LL, &v807);
    v8 = 0LL;
    v473 = v471;
    if ( v471 < 0 || (unsigned __int64)v472 + v447 + 4 > *((_QWORD *)&v799 + 1) + (unsigned __int64)DWORD1(v799) )
      goto LABEL_681;
    v474 = v807;
    *v472 = v447;
    memcpy_0(v474, v446, v447);
    LODWORD(v799) = v799 + 1;
    v8 = 0LL;
    v464 = 4;
LABEL_667:
    if ( v473 < 0 )
      goto LABEL_681;
    goto LABEL_668;
  }
  if ( (int)RtlUIntAdd(v464, v447, &m) < 0 )
    goto LABEL_681;
  v868 = (int)m;
  if ( (int)RtlUIntAdd(DWORD1(v799), (int)m, (_DWORD *)&v799 + 1) < 0 )
    goto LABEL_681;
  LODWORD(v799) = v799 + 1;
LABEL_668:
  if ( !v451 )
  {
    v481 = -1073741811;
    goto LABEL_683;
  }
  if ( *((unsigned __int8 **)&v799 + 1) != v8 )
  {
    v476 = (int *)*((_QWORD *)&v799 + 1);
    psza = (STRSAFE_PCNZWCH)*((_QWORD *)&v799 + 1);
    if ( (_DWORD)v799 )
    {
      while ( (int)RtlUIntAdd(4u, *v476, &m) >= 0 )
      {
        v854 = (int)m;
        if ( (int)RtlULongLongAdd(v477, (unsigned int)m, &psza) < 0 )
          goto LABEL_680;
        v476 = (int *)psza;
        if ( v478 + 1 >= (unsigned int)v799 )
          goto LABEL_677;
      }
      goto LABEL_1043;
    }
LABEL_677:
    v479 = RtlULongLongAdd((unsigned __int64)v476, 4LL, &v807);
    v8 = 0LL;
    v481 = v479;
    if ( v479 < 0 || (unsigned __int64)v480 + v451 + 4 > *((_QWORD *)&v799 + 1) + (unsigned __int64)DWORD1(v799) )
      goto LABEL_681;
    v482 = v807;
    *v480 = v451;
    memcpy_0(v482, v450, v451);
    LODWORD(v799) = v799 + 1;
    v8 = 0LL;
LABEL_683:
    if ( v481 < 0 )
      goto LABEL_681;
    v475 = 4;
    goto LABEL_685;
  }
  if ( (int)RtlUIntAdd(v464, v451, &m) < 0 )
    goto LABEL_681;
  v854 = (int)m;
  if ( (int)RtlUIntAdd(DWORD1(v799), (int)m, (_DWORD *)&v799 + 1) < 0 )
    goto LABEL_681;
  LODWORD(v799) = v799 + 1;
LABEL_685:
  v880 = v904;
  if ( !&v880 )
  {
    v486 = -1073741811;
    goto LABEL_698;
  }
  if ( *((unsigned __int8 **)&v799 + 1) != v8 )
  {
    v483 = (int *)*((_QWORD *)&v799 + 1);
    psza = (STRSAFE_PCNZWCH)*((_QWORD *)&v799 + 1);
    if ( (_DWORD)v799 )
    {
      while ( (int)RtlUIntAdd(4u, *v483, &m) >= 0 )
      {
        v855 = (int)m;
        if ( (int)RtlULongLongAdd(v484, (unsigned int)m, &psza) < 0 )
          break;
        v483 = (int *)psza;
        if ( v485 + 1 >= (unsigned int)v799 )
          goto LABEL_694;
      }
LABEL_1043:
      v442 = v446;
      v443 = v450;
      v8 = 0LL;
      goto LABEL_1034;
    }
LABEL_694:
    v486 = RtlULongLongAdd((unsigned __int64)v483, 4LL, &v807);
    v8 = 0LL;
    if ( v486 < 0 || (unsigned __int64)(v487 + 3) > *((_QWORD *)&v799 + 1) + (unsigned __int64)DWORD1(v799) )
      goto LABEL_681;
    v488 = v807;
    *v487 = 8;
    *v488 = v880;
    LODWORD(v799) = v799 + 1;
LABEL_698:
    if ( v486 < 0 )
      goto LABEL_681;
    goto LABEL_699;
  }
  if ( (int)RtlUIntAdd(v475, 8, &m) < 0 )
    goto LABEL_681;
  v855 = (int)m;
  if ( (int)RtlUIntAdd(DWORD1(v799), (int)m, (_DWORD *)&v799 + 1) < 0 )
    goto LABEL_681;
  LODWORD(v799) = v799 + 1;
LABEL_699:
  if ( (int)RtlUIntAdd(v475, v475, &m) < 0 )
    goto LABEL_681;
  v853 = (int)m;
  LODWORD(v789) = (_DWORD)m;
  if ( (int)RtlUIntAdd(v489, 8, &m) < 0 )
    goto LABEL_681;
  v853 = (int)m;
  if ( (int)RtlUIntAdd(v490, (int)m, &v789) < 0 )
    goto LABEL_681;
  v491 = (size_t)v8;
  v852 = v8;
  v787 = (size_t)v8;
  v492 = (unsigned int)v8;
  psza = (STRSAFE_PCNZWCH)v8;
  v493 = v8;
  LODWORD(m) = (_DWORD)v8;
  v817 = v8;
  LODWORD(v801) = (_DWORD)v8;
  v830 = v8;
  v828 = v8;
  v811 = (unsigned int)v8;
  v875 = __rdtsc();
  v810 = 8;
  v494 = RtlUIntAdd(8u, SDWORD1(v799), &v810);
  if ( v494 >= 0 )
  {
    v495 = (v810 + 7) & 0xFFFFFFF8;
    if ( v495 >= v810 )
    {
      v810 = (v810 + 7) & 0xFFFFFFF8;
      v496 = v495;
      v497 = GetProcessHeap();
      v498 = (char *)HeapAlloc(v497, 8u, v496);
      v8 = 0LL;
      v499 = v498;
      if ( v498 )
      {
        v790 = v498;
        *(_DWORD *)v498 = v799;
        v494 = RtlULongLongAdd((unsigned __int64)v498, 4LL, &v790);
        if ( v494 >= 0 )
        {
          v501 = v790;
          *(_DWORD *)v790 = DWORD1(v799);
          v494 = RtlULongLongAdd((unsigned __int64)v501, v500, &v790);
          if ( v494 >= 0 )
          {
            *(_QWORD *)&v499[v810 - 8] = v875;
            memcpy_0(v790, *((const void **)&v799 + 1), DWORD1(v799));
            v492 = v810;
            v8 = 0LL;
            v787 = (size_t)v499;
            v499 = 0LL;
          }
        }
        if ( v499 )
        {
          v502 = GetProcessHeap();
          HeapFree(v502, 0, v499);
          v8 = 0LL;
        }
        v491 = v787;
      }
      else
      {
        v494 = -1073741801;
        v491 = (size_t)v493;
      }
    }
    else
    {
      v494 = -1073741675;
    }
  }
  v503 = v494 | 0x10000000;
  if ( v503 < 0 )
    goto LABEL_989;
  v891 = (__int64 *)v8;
  v504 = v8;
  v893 = (__int64)v8;
  v895 = v8;
  v897 = (__int64)v8;
  v857 = v8;
  v889 = (SIZE_T)v8;
  v805 = (SIZE_T)v8;
  if ( v491 )
  {
    v506 = v492;
    pcchLength = v492;
    if ( v492 && (v806 = v492 + 8LL, v507 = MemoryAlloc(v806), v8 = 0LL, v815 = v507, (v508 = v507) != 0LL) )
    {
      v509 = 0;
      v510 = 0LL;
      LOBYTE(v786) = 0;
      if ( v506 )
      {
        do
        {
          v509 ^= *(_BYTE *)(v510 + v491);
          ++v510;
        }
        while ( v510 < v506 );
        LOBYTE(v786) = v509;
      }
      v511 = (unsigned __int8 *)v491;
      v512 = -1;
      v798 = 0;
      v794 = -1;
      LODWORD(v790) = 0;
      v513 = v508;
      LODWORD(dwBytes) = 0;
      v514 = 0;
      v515 = v506 & 7;
      if ( (v506 & 7) != 0 )
      {
        LODWORD(v790) = 0;
        v516 = 0;
        LODWORD(dwBytes) = 0;
        v517 = 0;
        v518 = 56;
        do
        {
          v519 = *v511;
          if ( v517 >= 4 )
          {
            v520 = dwBytes;
            v516 |= v519 << v518;
          }
          else
          {
            v520 = (v519 << (v518 - 32)) | dwBytes;
            LODWORD(dwBytes) = v520;
          }
          ++v511;
          ++v517;
          v518 -= 8;
        }
        while ( v517 < v515 );
        LODWORD(v790) = v516;
        v514 = v520 ^ 0x90280470;
        v521 = v516 ^ 0xB47C7C45;
        v798 = v520 ^ 0x90280470;
        v522 = 0;
        v794 = v516 ^ 0xB47C7C45;
        if ( (v506 & 7) != 0 )
        {
          do
          {
            if ( v522 >= 4 )
            {
              v521 = __ROL4__(v521, 8);
              *v513 = v521;
            }
            else
            {
              v514 = __ROL4__(v514, 8);
              *v513 = v514;
            }
            ++v513;
            ++v522;
          }
          while ( v522 < v515 );
          v514 = v798;
          v521 = v794;
        }
        v523 = v515 - 4;
        if ( v515 - 4 <= 0 )
        {
          v794 = 0;
          v512 = 0;
          if ( v523 < 0 )
          {
            v514 = v514 >> (-8 * v523) << (-8 * v523);
            v798 = v514;
          }
        }
        else
        {
          v512 = v521 >> (8 * (4 - v523)) << (8 * (4 - v523));
          v794 = v512;
        }
      }
      v524 = v506 >> 3;
      if ( v506 >> 3 )
      {
        v525 = (int)v790;
        v526 = v513 + 7;
        v527 = dwBytes;
        v528 = v511 + 2;
        do
        {
          v529 = v528[1] | ((*v528 | ((*(v528 - 1) | (*(v528 - 2) << 8)) << 8)) << 8);
          v530 = v528[5];
          v531 = (v528[4] | ((v528[3] | (v528[2] << 8)) << 8)) << 8;
          v528 += 8;
          v532 = v530 | v531;
          v533 = v532 ^ v512;
          v534 = v529 ^ (__ROR4__(v533, 8) + 32881 * __ROR4__(-1270087367 - v533, 7)) ^ v514;
          v535 = (47626 * __ROL4__(v534 ^ 0xB44C, 4) - __ROR4__(v534, 2)) ^ v533;
          v536 = __ROL4__(v535, 5) ^ (313 * __ROL4__(v535 + 1173716879, 8)) ^ v534;
          v537 = (46156 * __ROR4__(v536 - 1173716879, 14) - __ROR4__(v536, 15)) ^ v535;
          v538 = v536 ^ v537 ^ 0xE468148;
          v539 = (__ROR4__(v538, 4) + 47626 * __ROR4__(v536 ^ v537 ^ 0xBA0A8071, 4)) ^ v537;
          v540 = (46156 * (__ROR4__(v539, 11) - 313)) ^ v538;
          v541 = (__ROL4__(v540, 8) + 46156 * __ROL4__(v540 ^ 0x139, 7)) ^ v539;
          v542 = v540 ^ (v541 - 32881) ^ 0xB44C0139;
          v543 = (47626 * __ROL4__(v540 ^ (v541 - 32881), 10) - __ROR4__(v542, 14)) ^ v541;
          v544 = (313 * (v543 ^ 0xBA0A)) ^ __ROR4__(v543, 6) ^ v542;
          v545 = (__ROR4__(v544, 3) + 46156 * __ROL4__(v544 - 1173716879, 9)) ^ v543;
          v546 = (v545 >> 15) ^ (32881 * __ROL4__(v545 - 313, 3)) ^ v544;
          v547 = (47626 * (v546 - 313) - (v546 >> 13)) ^ v545;
          v548 = __ROR4__(v547, 11) ^ (313 * __ROR4__(-1173716879 - v547, 9)) ^ v546;
          v549 = (v548 + 1173670723) ^ v547;
          v550 = (32881 * (v549 ^ 0xBA0A) - __ROR4__(v549, 7)) ^ v548;
          v551 = (47626 * __ROL4__(v550 ^ 0xB44C, 4) - __ROR4__(v550, 16)) ^ v549;
          v552 = (__ROR4__(v551, 4) + 313 * __ROR4__(-1173716879 - v551, 10)) ^ v550;
          v553 = __ROR4__(v552, 9) ^ (46156 * __ROR4__(v552 + 1173716879, 4)) ^ v551;
          v554 = (32881 * __ROL4__(v553 ^ 0xB44C0139, 8) - __ROL4__(v553, 2)) ^ v552;
          v555 = (47626 * __ROR4__(-1270087367 - v554, 11) - __ROR4__(v554, 12)) ^ v553;
          v556 = (v555 >> 8) ^ (313 * (v555 ^ 0xBA0A)) ^ v554;
          v798 = v527 ^ v556;
          v527 = v529;
          v794 = v525 ^ v556 ^ v555 ^ 0xE468148;
          v525 = v532;
          *(v526 - 4) = v798;
          v798 = __ROR4__(v798, 8);
          *v526 = v794;
          v526 += 8;
          v794 = __ROR4__(v794, 8);
          *(v526 - 13) = v798;
          v798 = __ROR4__(v798, 8);
          *(v526 - 9) = v794;
          v794 = __ROR4__(v794, 8);
          *(v526 - 14) = v798;
          v798 = __ROR4__(v798, 8);
          *(v526 - 10) = v794;
          v794 = __ROR4__(v794, 8);
          *(v526 - 15) = v798;
          *(v526 - 11) = v794;
          v514 = __ROR4__(v798, 8);
          v512 = __ROR4__(v794, 8);
          v798 = v514;
          v794 = v512;
          --v524;
        }
        while ( v524 );
        v509 = v786;
        v504 = (_QWORD *)v805;
        v506 = pcchLength;
        v508 = v815;
      }
      *(_QWORD *)&v508[v506] = v509;
      v557 = v806;
      v889 = v806;
      v857 = v508;
      v891 = &`WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
      v893 = 8LL;
      v897 = 160LL;
      v895 = (unsigned __int8 *)`WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher;
      v558 = GetProcessHeap();
      v559 = HeapAlloc(v558, 8u, 0x30uLL);
      v8 = 0LL;
      v560 = v559;
      if ( v559 )
      {
        *v559 = v557;
        v561 = GetProcessHeap();
        v562 = HeapAlloc(v561, 8u, v557);
        v8 = 0LL;
        if ( !v562 )
          goto LABEL_747;
        *((_QWORD *)v560 + 1) = v562;
        memcpy_0(v562, v508, v557);
        v560[4] = 160;
        v563 = GetProcessHeap();
        v564 = HeapAlloc(v563, 8u, 0xA0uLL);
        v8 = 0LL;
        if ( !v564 )
          goto LABEL_747;
        *((_QWORD *)v560 + 3) = v564;
        *v564 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
        v564[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
        v564[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
        v564[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
        v564[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
        v564[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
        v564[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
        v564[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
        v564[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
        v564[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
        v560[8] = 8;
        v565 = GetProcessHeap();
        v566 = HeapAlloc(v565, 8u, 8uLL);
        v8 = 0LL;
        if ( v566 )
        {
          *((_QWORD *)v560 + 5) = v566;
          v504 = v560;
          *v566 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
          v505 = 0;
          v560 = 0LL;
        }
        else
        {
LABEL_747:
          v505 = -1073741801;
        }
        if ( v560 )
        {
          v567 = (void *)*((_QWORD *)v560 + 1);
          if ( v567 )
          {
            v568 = GetProcessHeap();
            HeapFree(v568, 0, v567);
            *((_QWORD *)v560 + 1) = 0LL;
          }
          v569 = (void *)*((_QWORD *)v560 + 3);
          if ( v569 )
          {
            v570 = GetProcessHeap();
            HeapFree(v570, 0, v569);
            *((_QWORD *)v560 + 3) = 0LL;
          }
          v571 = (void *)*((_QWORD *)v560 + 5);
          if ( v571 )
          {
            v572 = GetProcessHeap();
            HeapFree(v572, 0, v571);
            *((_QWORD *)v560 + 5) = 0LL;
          }
          v573 = GetProcessHeap();
          HeapFree(v573, 0, v560);
          v8 = 0LL;
        }
      }
      else
      {
        v505 = -1073741801;
      }
      v493 = v817;
      if ( v505 >= 0 )
      {
        v852 = v504;
        v504 = 0LL;
      }
    }
    else
    {
      v505 = -1073741823;
    }
    v574 = v857;
    if ( v857 )
    {
      v575 = GetProcessHeap();
      HeapFree(v575, 0, v574);
      v8 = 0LL;
      v857 = 0LL;
    }
    if ( v504 )
    {
      v576 = (void *)v504[1];
      if ( v576 )
      {
        v577 = GetProcessHeap();
        HeapFree(v577, 0, v576);
        v504[1] = 0LL;
      }
      v578 = (void *)v504[3];
      if ( v578 )
      {
        v579 = GetProcessHeap();
        HeapFree(v579, 0, v578);
        v504[3] = 0LL;
      }
      v580 = (void *)v504[5];
      if ( v580 )
      {
        v581 = GetProcessHeap();
        HeapFree(v581, 0, v580);
        v504[5] = 0LL;
      }
      v582 = GetProcessHeap();
      HeapFree(v582, 0, v504);
      v8 = 0LL;
    }
  }
  else
  {
    v505 = -1073741811;
  }
  v503 = v505 | 0x10000000;
  if ( v503 < 0 )
    goto LABEL_989;
  v583 = (const void **)v852;
  LODWORD(dwBytes) = 4;
  v584 = RtlUIntAdd(4u, *(_DWORD *)v852, &dwBytes);
  if ( v584 < 0
    || (v584 = RtlUIntAdd(dwBytes, 4, &dwBytes), v584 < 0)
    || (v584 = RtlUIntAdd(dwBytes, *((_DWORD *)v583 + 4), &dwBytes), v584 < 0)
    || (v584 = RtlUIntAdd(dwBytes, 4, &dwBytes), v584 < 0) )
  {
    v585 = v834;
  }
  else
  {
    v584 = RtlUIntAdd(dwBytes, *((_DWORD *)v583 + 8), &dwBytes);
    v585 = v834;
    if ( v584 >= 0 )
      v585 = dwBytes;
    v834 = v585;
  }
  if ( v584 >= 0 )
  {
    v586 = v585;
    v587 = GetProcessHeap();
    v588 = (wchar_t *)HeapAlloc(v587, 8u, v586);
    v8 = 0LL;
    v589 = v588;
    if ( v588 )
    {
      v790 = v588;
      *(_DWORD *)v588 = *(_DWORD *)v583;
      v584 = RtlULongLongAdd((unsigned __int64)v588, 4LL, &v790);
      if ( v584 >= 0 )
      {
        memcpy_0(v790, v583[1], *(unsigned int *)v583);
        v590 = RtlULongLongAdd((unsigned __int64)v790, *(unsigned int *)v583, &v790);
        v8 = 0LL;
        v584 = v590;
        if ( v590 >= 0 )
        {
          v591 = v790;
          *(_DWORD *)v790 = *((_DWORD *)v583 + 4);
          v584 = RtlULongLongAdd((unsigned __int64)v591, 4LL, &v790);
          if ( v584 >= 0 )
          {
            memcpy_0(v790, v583[3], *((unsigned int *)v583 + 4));
            v592 = RtlULongLongAdd((unsigned __int64)v790, *((unsigned int *)v583 + 4), &v790);
            v8 = 0LL;
            v584 = v592;
            if ( v592 >= 0 )
            {
              v593 = v790;
              *(_DWORD *)v790 = *((_DWORD *)v583 + 8);
              v584 = RtlULongLongAdd((unsigned __int64)v593, 4LL, &v790);
              if ( v584 >= 0 )
              {
                memcpy_0(v790, v583[5], *((unsigned int *)v583 + 8));
                v594 = RtlULongLongAdd((unsigned __int64)v790, *((unsigned int *)v583 + 8), &v790);
                v8 = 0LL;
                v584 = v594;
                if ( v594 >= 0 )
                {
                  psza = v589;
                  v589 = 0LL;
                  LODWORD(m) = v834;
                }
              }
            }
          }
        }
      }
      if ( v589 )
      {
        v595 = GetProcessHeap();
        HeapFree(v595, 0, v589);
        v8 = 0LL;
      }
    }
    else
    {
      v584 = -1073741801;
    }
  }
  v503 = v584 | 0x10000000;
  if ( v503 < 0 )
    goto LABEL_989;
  v596 = (int)v8;
  v899 = v8;
  v865 = (int)v8;
  v863 = (int)v8;
  v901 = v8;
  v823 = 8;
  v597 = RtlUIntAdd(8u, (int)v789, &v823);
  v503 = v597 | 0x10000000;
  if ( v597 >= 0 )
  {
    v599 = (v823 + 7) & 0xFFFFFFF8;
    if ( v599 >= v823 )
    {
      v846 = (v823 + 7) & 0xFFFFFFF8;
      v600 = RtlUIntAdd(v599, v598, &v846);
      v601 = v845;
      v503 = v600;
      if ( v600 >= 0 )
        v601 = v846;
      v845 = v601;
    }
    else
    {
      v503 = -1073741675;
    }
    if ( v503 < 0 )
      goto LABEL_989;
    if ( *((unsigned __int8 **)&v799 + 1) == v8 || (unsigned int)v799 <= 1 )
    {
      v503 = -1073741811;
    }
    else
    {
      v602 = (unsigned int *)*((_QWORD *)&v799 + 1);
      v789 = (void *)*((_QWORD *)&v799 + 1);
      do
      {
        v603 = *v602;
        v503 = RtlULongLongAdd((unsigned __int64)v602, 4LL, &v789);
        if ( v503 < 0 )
          goto LABEL_809;
        v503 = RtlULongLongAdd((unsigned __int64)v789, v603, &v789);
        if ( v503 < 0 )
          goto LABEL_809;
        v602 = (unsigned int *)v789;
      }
      while ( v604 == -1 );
      v503 = RtlULongLongAdd((unsigned __int64)v789, 4LL, &v789);
      if ( v503 < 0 )
      {
LABEL_809:
        v8 = 0LL;
        goto LABEL_810;
      }
      v606 = (unsigned __int8 *)v789;
      v863 = v605;
      if ( !v605 )
        v606 = 0LL;
      v8 = 0LL;
      v899 = v606;
LABEL_810:
      if ( v503 >= 0 )
      {
        if ( (unsigned int)v799 <= 2 )
        {
          v503 = -1073741811;
          goto LABEL_813;
        }
        v611 = (unsigned int *)*((_QWORD *)&v799 + 1);
        v789 = (void *)*((_QWORD *)&v799 + 1);
        do
        {
          v612 = *v611;
          v503 = RtlULongLongAdd((unsigned __int64)v611, 4LL, &v789);
          if ( v503 < 0 )
            goto LABEL_824;
          v503 = RtlULongLongAdd((unsigned __int64)v789, v612, &v789);
          if ( v503 < 0 )
            goto LABEL_824;
          v611 = (unsigned int *)v789;
        }
        while ( (unsigned int)(v614 + 1) < 2 );
        v503 = RtlULongLongAdd((unsigned __int64)v789, 4LL, &v789);
        if ( v503 < 0 )
        {
LABEL_824:
          v8 = 0LL;
          goto LABEL_825;
        }
        v616 = (unsigned __int8 *)v789;
        v211 = v615 == 0;
        v596 = v615;
        v8 = 0LL;
        if ( v211 )
          v616 = 0LL;
        v865 = v596;
        v901 = v616;
LABEL_825:
        if ( v503 >= 0 )
        {
          LODWORD(dwBytes) = 4;
          v503 = RtlUIntAdd(4u, v613, &dwBytes);
          if ( v503 < 0
            || (v503 = RtlUIntAdd(dwBytes, 4, &dwBytes), v503 < 0)
            || (v503 = RtlUIntAdd(dwBytes, v617, &dwBytes), v503 < 0)
            || (v503 = RtlUIntAdd(dwBytes, 4, &dwBytes), v503 < 0) )
          {
            v618 = v841;
          }
          else
          {
            v503 = RtlUIntAdd(dwBytes, v596, &dwBytes);
            v618 = v841;
            if ( v503 >= 0 )
              v618 = dwBytes;
            v841 = v618;
          }
          if ( v503 >= 0 )
          {
            if ( v618 <= 0x400000 )
            {
              LODWORD(v801) = v618;
              goto LABEL_813;
            }
            v503 = -2147418113;
          }
        }
        goto LABEL_989;
      }
    }
  }
LABEL_813:
  if ( v503 >= 0 )
  {
    v607 = v801;
    v608 = (int)v8;
    v609 = GetProcessHeap();
    v610 = HeapAlloc(v609, 8u, v607);
    v8 = 0LL;
    if ( v610 )
    {
      v493 = v610;
      v817 = v610;
    }
    else
    {
      v608 = -1073741801;
    }
    v503 = v608 | 0x10000000;
    if ( v503 >= 0 )
    {
      v619 = psza;
      if ( !psza || !v493 )
      {
        v503 = -2147024809;
        goto LABEL_989;
      }
      if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
        && (v620 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
      {
        v918 = (int)m;
        v919 = v801;
        v917[0] = v619;
        v917[1] = v493;
        v920 = 0;
        v621 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, _QWORD))v620)(134LL, v917, 32LL, 0LL);
        v622 = v801;
        v8 = 0LL;
        v503 = v621 | 0x10000000;
        if ( v621 >= 0 )
          v622 = v919;
        LODWORD(v801) = v622;
      }
      else
      {
        v623 = GetLastError();
        v8 = 0LL;
        v503 = v623;
        if ( v623 > 0 )
          v503 = (unsigned __int16)v623 | 0x80070000;
        if ( v503 >= 0 )
          v503 = -2147467259;
        v622 = v801;
      }
      if ( v503 == -805306333 )
      {
        v503 = -2147024774;
        goto LABEL_989;
      }
      if ( v503 >= 0 )
      {
        LODWORD(dwBytes) = 0;
        v624 = 0LL;
        v789 = v493;
        if ( v622 < 4 )
        {
          v625 = -1073741762;
          goto LABEL_912;
        }
        LODWORD(m) = *v493;
        v625 = RtlULongLongAdd((unsigned __int64)v493, 4LL, &v789);
        if ( v625 < 0 || (v625 = RtlUIntAdd(0, v626, &dwBytes), v625 < 0) )
        {
LABEL_911:
          v8 = 0LL;
        }
        else
        {
          if ( v627 - (int)dwBytes < (unsigned int)v628 )
            goto LABEL_878;
          v815 = v789;
          pcchLength = v628;
          v625 = RtlULongLongAdd((unsigned __int64)v789, (unsigned int)v628, &v789);
          if ( v625 < 0 )
            goto LABEL_911;
          v625 = RtlUIntAdd(dwBytes, v629, &dwBytes);
          if ( v625 < 0 )
            goto LABEL_911;
          if ( (unsigned int)(v630 - dwBytes) < 4 )
            goto LABEL_878;
          v631 = *(unsigned int *)v789;
          v625 = RtlULongLongAdd((unsigned __int64)v789, 4LL, &v789);
          if ( v625 < 0 )
            goto LABEL_911;
          v625 = RtlUIntAdd(dwBytes, v632, &dwBytes);
          if ( v625 < 0 )
            goto LABEL_911;
          if ( v633 - (int)dwBytes < (unsigned int)v631 )
            goto LABEL_878;
          v790 = v789;
          v625 = RtlULongLongAdd((unsigned __int64)v789, (unsigned int)v631, &v789);
          if ( v625 < 0 )
            goto LABEL_911;
          v625 = RtlUIntAdd(dwBytes, v634, &dwBytes);
          if ( v625 < 0 )
            goto LABEL_911;
          if ( (unsigned int)(v635 - dwBytes) < 4 )
            goto LABEL_878;
          v636 = *(unsigned int *)v789;
          v625 = RtlULongLongAdd((unsigned __int64)v789, 4LL, &v789);
          if ( v625 < 0 )
            goto LABEL_911;
          v625 = RtlUIntAdd(dwBytes, v637, &dwBytes);
          if ( v625 < 0 )
            goto LABEL_911;
          if ( v638 - (int)dwBytes < (unsigned int)v636 )
            goto LABEL_878;
          v625 = RtlUIntAdd(dwBytes, v636, &dwBytes);
          if ( v625 < 0 )
            goto LABEL_911;
          if ( v639 != (_DWORD)dwBytes || (unsigned int)(v640 + v636 + v631) + 12LL != v639 )
          {
LABEL_878:
            v625 = -1073741762;
            goto LABEL_911;
          }
          v641 = GetProcessHeap();
          v642 = HeapAlloc(v641, 8u, 0x30uLL);
          v8 = 0LL;
          v643 = v642;
          if ( !v642 )
          {
            v625 = -1073741801;
            goto LABEL_901;
          }
          v625 = 0;
          if ( v815 )
          {
            *(_DWORD *)v642 = (_DWORD)m;
            v644 = GetProcessHeap();
            v645 = HeapAlloc(v644, 8u, pcchLength);
            v8 = 0LL;
            if ( v645 )
            {
              v643[1] = v645;
              memcpy_0(v645, v815, pcchLength);
              v8 = 0LL;
              goto LABEL_884;
            }
LABEL_882:
            v625 = -1073741801;
          }
          else
          {
            *(_DWORD *)v642 = 0;
            v642[1] = 0LL;
LABEL_884:
            if ( v790 )
            {
              *((_DWORD *)v643 + 4) = v631;
              v646 = GetProcessHeap();
              v647 = HeapAlloc(v646, 8u, v631);
              v8 = 0LL;
              if ( !v647 )
                goto LABEL_882;
              v643[3] = v647;
              v625 = 0;
              memcpy_0(v647, v790, v631);
              v8 = 0LL;
            }
            else
            {
              *((_DWORD *)v643 + 4) = 0;
              v643[3] = 0LL;
            }
            v648 = v789;
            if ( v789 )
            {
              *((_DWORD *)v643 + 8) = v636;
              v649 = GetProcessHeap();
              v650 = HeapAlloc(v649, 8u, v636);
              v8 = 0LL;
              if ( !v650 )
                goto LABEL_882;
              v643[5] = v650;
              v625 = 0;
              memcpy_0(v650, v648, v636);
              v8 = 0LL;
            }
            else
            {
              *((_DWORD *)v643 + 8) = 0;
              v643[5] = 0LL;
            }
            v624 = v643;
            v643 = 0LL;
          }
          if ( v643 )
          {
            v651 = (void *)v643[1];
            if ( v651 )
            {
              v652 = GetProcessHeap();
              HeapFree(v652, 0, v651);
              v643[1] = 0LL;
            }
            v653 = (void *)v643[3];
            if ( v653 )
            {
              v654 = GetProcessHeap();
              HeapFree(v654, 0, v653);
              v643[3] = 0LL;
            }
            v655 = (void *)v643[5];
            if ( v655 )
            {
              v656 = GetProcessHeap();
              HeapFree(v656, 0, v655);
              v643[5] = 0LL;
            }
            v657 = GetProcessHeap();
            HeapFree(v657, 0, v643);
            v8 = 0LL;
          }
LABEL_901:
          if ( v625 >= 0 )
          {
            v830 = v624;
            v624 = 0LL;
          }
          if ( v624 )
          {
            v658 = (void *)v624[1];
            if ( v658 )
            {
              v659 = GetProcessHeap();
              HeapFree(v659, 0, v658);
              v624[1] = 0LL;
            }
            v660 = (void *)v624[3];
            if ( v660 )
            {
              v661 = GetProcessHeap();
              HeapFree(v661, 0, v660);
              v624[3] = 0LL;
            }
            v662 = (void *)v624[5];
            if ( v662 )
            {
              v663 = GetProcessHeap();
              HeapFree(v663, 0, v662);
              v624[5] = 0LL;
            }
            v664 = GetProcessHeap();
            HeapFree(v664, 0, v624);
            goto LABEL_911;
          }
        }
LABEL_912:
        v503 = v625 | 0x10000000;
        if ( v503 < 0 )
          goto LABEL_989;
        v665 = 0LL;
        v836 = 0LL;
        v666 = 0;
        v877 = 0LL;
        LODWORD(m) = 0;
        if ( !v830 || (v667 = (unsigned __int8 *)*((_QWORD *)v830 + 1), (v815 = v667) == 0LL) || !*(_DWORD *)v830 )
        {
          v666 = -1073741811;
          goto LABEL_954;
        }
        v668 = *(unsigned int *)v830;
        LODWORD(v789) = 0;
        if ( v668 )
        {
          v669 = v668 - 8;
          pcchLength = v669;
          v670 = MemoryAlloc(v669);
          v8 = 0LL;
          v805 = (SIZE_T)v670;
          v671 = v670;
          if ( v670 )
          {
            v672 = 0;
            LOBYTE(v786) = 0;
            v673 = v667;
            v674 = v671;
            v675 = v669 & 7;
            if ( (v669 & 7) != 0 )
            {
              v792 = -1;
              v676 = 0;
              v795 = 0;
              v677 = 0;
              v818 = 0;
              v678 = 0;
              LODWORD(v790) = 0;
              v679 = 56;
              do
              {
                v680 = *v673;
                if ( v678 >= 4 )
                  v676 |= v680 << v679;
                else
                  v677 |= v680 << (v679 - 32);
                ++v673;
                ++v678;
                v679 -= 8;
              }
              while ( v678 < v675 );
              v10 = (int)v783;
              v818 = v676;
              LODWORD(v790) = v677;
              v681 = v676 ^ 0x2197039C;
              v682 = v677 ^ 0x95D05BAD;
              v792 = v818 ^ 0x2197039C;
              v795 = v677 ^ 0x95D05BAD;
              v683 = 0;
              if ( (v669 & 7) != 0 )
              {
                do
                {
                  if ( v683 >= 4 )
                  {
                    v681 = __ROL4__(v681, 8);
                    *v674 = v681;
                  }
                  else
                  {
                    v682 = __ROL4__(v682, 8);
                    *v674 = v682;
                  }
                  ++v674;
                  ++v683;
                }
                while ( v683 < v675 );
                v682 = v795;
                v681 = v792;
              }
              v684 = v675 - 4;
              if ( v684 > 0 )
              {
                v685 = v681 >> (8 * (4 - v684)) << (8 * (4 - v684));
                goto LABEL_936;
              }
              v685 = 0;
              v792 = 0;
              if ( v684 < 0 )
              {
                v682 = v682 >> (-8 * v684) << (-8 * v684);
                v795 = v682;
              }
            }
            else
            {
              LODWORD(v790) = 0;
              v685 = 0;
              v682 = 0;
              v795 = 0;
LABEL_936:
              v792 = v685;
            }
            v686 = v669 >> 3;
            if ( v669 >> 3 )
            {
              v687 = (int)v790;
              v688 = v674 + 7;
              v689 = v818;
              v690 = v673 + 2;
              v691 = v686;
              do
              {
                v692 = *(v690 - 1) | (*(v690 - 2) << 8);
                v693 = v690[2] << 8;
                v694 = *v690;
                v690 += 8;
                v695 = *(v690 - 7) | ((v694 | (v692 << 8)) << 8);
                v696 = v695 ^ v682;
                v697 = *(v690 - 3) | ((*(v690 - 4) | ((*(v690 - 5) | v693) << 8)) << 8);
                v698 = v697 ^ v685 ^ v696 ^ 0x501779F2;
                v699 = (__ROL4__(v698, 10) + 14503 * __ROL4__(v698 - 347095381, 5)) ^ v696;
                v700 = (5296 * __ROR4__(v699 + 1151809703, 9) - __ROL4__(v699, 2)) ^ v698;
                v701 = (16725 * (v700 - 14503) - (v700 >> 13)) ^ v699;
                v702 = (17575 * __ROL4__(v701 ^ 0x14B0, 6) - __ROL4__(v701, 2)) ^ v700;
                v703 = (1151809703 - (v702 ^ 0x14B04155)) ^ v701;
                v704 = (5296 * (v703 ^ 0x38A7)) ^ __ROR4__(v703, 6) ^ v702;
                v705 = (__ROL4__(v704, 2) + 16725 * __ROR4__(v704 + 1151809703, 15)) ^ v703;
                v706 = (17575 * __ROR4__(v705 - 347095381, 14) - __ROL4__(v705, 8)) ^ v704;
                v707 = __ROR4__(v706, 10) ^ (14503 * __ROR4__(v706 ^ 0x14B04155, 12)) ^ v705;
                v708 = (v707 >> 10) ^ (5296 * (v707 ^ 0x44A7)) ^ v706;
                v709 = (17575 * (__ROR4__(~v708, 5) + 16725)) ^ v707;
                v710 = v708 ^ v709 ^ 0x501779F2;
                v711 = (1151809703 - (v708 ^ v709 ^ 0x44A738A7)) ^ v709;
                v712 = (5296 * __ROL4__(v711 + 1151809703, 2) - __ROL4__(v711, 6)) ^ v710;
                v713 = __ROR4__(v712, 3) ^ (16725 * __ROL4__(v712 - 1151809703, 15)) ^ v711;
                v714 = (v713 >> 10) ^ (17575 * (v713 ^ 0x4155)) ^ v712;
                v715 = (14503 * __ROL4__(347095381 - v714, 1) - __ROL4__(v714, 4)) ^ v713;
                v716 = (5296 * (v715 ^ 0x38A7) + __ROR4__(v715, 10)) ^ v714;
                v717 = (14503 * (__ROR4__(v716, 10) ^ 0x4155)) ^ v715;
                v718 = (17575 * (v717 - 14503) - (v717 >> 8)) ^ v716;
                v719 = __ROR4__(v718, 8) ^ (14503 * __ROL4__(v718 - 347095381, 8)) ^ v717;
                v720 = (5296 * __ROL4__(v719 ^ 0x44A738A7, 3) - (v719 >> 8)) ^ v718;
                v792 = v689 ^ v720;
                v689 = v697;
                v721 = v687 ^ v719 ^ (16725 * __ROR4__(v720 - 1151809703, 3) - __ROR4__(v720, 13));
                v687 = v695;
                v795 = v721;
                *(v688 - 4) = v721;
                v795 = __ROR4__(v795, 8);
                *v688 = v792;
                v688 += 8;
                v792 = __ROR4__(v792, 8);
                *(v688 - 13) = v795;
                v795 = __ROR4__(v795, 8);
                *(v688 - 9) = v792;
                v792 = __ROR4__(v792, 8);
                *(v688 - 14) = v795;
                v795 = __ROR4__(v795, 8);
                *(v688 - 10) = v792;
                v792 = __ROR4__(v792, 8);
                *(v688 - 15) = v795;
                *(v688 - 11) = v792;
                v682 = __ROR4__(v795, 8);
                v685 = __ROR4__(v792, 8);
                v795 = v682;
                v792 = v685;
                --v691;
              }
              while ( v691 );
              v672 = v786;
              v10 = (int)v783;
              v666 = (int)m;
              v671 = (_BYTE *)v805;
              v669 = pcchLength;
            }
            v8 = 0LL;
            for ( k = 0LL; k < v669; ++k )
              v672 ^= v671[k];
            if ( v672 == *(_QWORD *)((char *)v815 + v669) )
            {
              v723 = (int)v789;
              v665 = v671;
              v836 = v671;
              v671 = 0LL;
              v877 = v669;
            }
            else
            {
              v665 = v836;
              v723 = -1073425151;
            }
            if ( v671 )
            {
              MemoryFree(v671);
              v665 = v836;
              v8 = 0LL;
            }
            if ( v723 >= 0 )
            {
              v828 = v665;
              v665 = 0LL;
              v836 = 0LL;
              v811 = v877;
LABEL_952:
              if ( v665 )
              {
                v724 = GetProcessHeap();
                HeapFree(v724, 0, v665);
                v8 = 0LL;
                v836 = 0LL;
              }
LABEL_954:
              v503 = v666 | 0x10000000;
              if ( v503 < 0 )
                goto LABEL_989;
              LODWORD(dwBytes) = 0;
              m = v828;
              if ( v811 < 4 )
                goto LABEL_987;
              LODWORD(v789) = *(_DWORD *)v828;
              v726 = RtlULongLongAdd((unsigned __int64)v828, 4LL, &m);
              if ( v726 >= 0 )
              {
                v726 = RtlUIntAdd(0, v725, &dwBytes);
                if ( v726 >= 0 )
                {
                  if ( v811 - (unsigned int)dwBytes < v728 )
                    goto LABEL_987;
                  v729 = *(unsigned int *)m;
                  v726 = RtlULongLongAdd((unsigned __int64)m, v727, &m);
                  if ( v726 >= 0 )
                  {
                    v726 = RtlUIntAdd(dwBytes, v730, &dwBytes);
                    if ( v726 >= 0 )
                    {
                      if ( v811 - (unsigned int)dwBytes < (unsigned int)v729 )
                        goto LABEL_987;
                      v726 = RtlUIntAdd(dwBytes, v729, &dwBytes);
                      if ( v726 >= 0 )
                      {
                        v733 = m;
                        if ( (unsigned __int64)v811 + v731 < (unsigned __int64)m + v729
                          || v731 + v811 - v729 - (unsigned __int64)m >= 8 )
                        {
                          goto LABEL_987;
                        }
                        LODWORD(v790) = (_DWORD)v732;
                        v734 = v732;
                        v726 = (int)v732;
                        if ( !m )
                          goto LABEL_977;
                        v726 = RtlULongLongAdd((unsigned __int64)m, (unsigned int)v729, &v806);
                        if ( v726 < 0 )
                          goto LABEL_985;
                        v736 = v806;
                        if ( (unsigned __int64)v733 < v806 )
                        {
                          do
                          {
                            v726 = RtlULongLongAdd(v735, 4LL, &v806);
                            if ( v726 < 0 )
                              goto LABEL_988;
                            if ( v806 > v738 )
                              goto LABEL_980;
                            v739 = RtlUIntAdd(4u, *v737, &m);
                            v726 = v739;
                            if ( v739 >= 0 )
                              v741 = (unsigned int)m;
                            v867 = v741;
                            if ( v739 < 0 )
                              goto LABEL_988;
                            v726 = RtlULongLongAdd(v740, v741, &v805);
                            if ( v726 < 0 )
                              goto LABEL_988;
                            v735 = v805;
                            if ( v805 > v736 )
                              goto LABEL_980;
                            LODWORD(v790) = (_DWORD)v790 + 1;
                          }
                          while ( v805 < v736 );
                        }
                        if ( v735 == v736 )
                        {
LABEL_977:
                          if ( (_DWORD)v729 )
                          {
                            v742 = GetProcessHeap();
                            v734 = HeapAlloc(v742, 8u, v729);
                            if ( !v734 )
                            {
                              v726 = -1073741801;
                              goto LABEL_985;
                            }
                            v726 = 0;
                          }
                          if ( v733 )
                            memcpy_0(v734, v733, v729);
                          *(_QWORD *)&v837 = __PAIR64__(v729, (unsigned int)v790);
                          *((_QWORD *)&v837 + 1) = v734;
LABEL_985:
                          if ( v726 >= 0 && (_DWORD)v789 != (_DWORD)v837 )
LABEL_987:
                            v726 = -1073741762;
                        }
                        else
                        {
LABEL_980:
                          v726 = -1073741811;
                        }
                      }
                    }
                  }
                }
              }
LABEL_988:
              v503 = v726 | 0x10000000;
              v8 = 0LL;
              goto LABEL_989;
            }
          }
          else
          {
            v665 = v836;
          }
        }
        v666 = -1073741823;
        goto LABEL_952;
      }
    }
  }
LABEL_989:
  v743 = (void *)v787;
  if ( v787 )
  {
    v744 = GetProcessHeap();
    HeapFree(v744, 0, v743);
    v8 = 0LL;
  }
  v745 = v852;
  if ( v852 )
  {
    v746 = (void *)*((_QWORD *)v852 + 1);
    if ( v746 )
    {
      v747 = GetProcessHeap();
      HeapFree(v747, 0, v746);
      v745[1] = 0LL;
    }
    v748 = (void *)v745[3];
    if ( v748 )
    {
      v749 = GetProcessHeap();
      HeapFree(v749, 0, v748);
      v745[3] = 0LL;
    }
    v750 = (void *)v745[5];
    if ( v750 )
    {
      v751 = GetProcessHeap();
      HeapFree(v751, 0, v750);
      v745[5] = 0LL;
    }
    v752 = GetProcessHeap();
    HeapFree(v752, 0, v745);
    v8 = 0LL;
    v852 = 0LL;
  }
  v753 = (wchar_t *)psza;
  if ( psza )
  {
    v754 = GetProcessHeap();
    HeapFree(v754, 0, v753);
    v8 = 0LL;
  }
  v755 = v817;
  if ( v817 )
  {
    v756 = GetProcessHeap();
    HeapFree(v756, 0, v755);
    v8 = 0LL;
  }
  v757 = v830;
  if ( v830 )
  {
    v758 = (void *)*((_QWORD *)v830 + 1);
    if ( v758 )
    {
      v759 = GetProcessHeap();
      HeapFree(v759, 0, v758);
      v757[1] = 0LL;
    }
    v760 = (void *)v757[3];
    if ( v760 )
    {
      v761 = GetProcessHeap();
      HeapFree(v761, 0, v760);
      v757[3] = 0LL;
    }
    v762 = (void *)v757[5];
    if ( v762 )
    {
      v763 = GetProcessHeap();
      HeapFree(v763, 0, v762);
      v757[5] = 0LL;
    }
    v764 = GetProcessHeap();
    HeapFree(v764, 0, v757);
    v8 = 0LL;
  }
  v765 = v828;
  if ( v828 )
  {
    v766 = GetProcessHeap();
    HeapFree(v766, 0, v765);
    v8 = 0LL;
  }
  if ( v503 >= 0 && (_DWORD)v837 && (v767 = (unsigned int *)*((_QWORD *)&v837 + 1)) != 0LL )
  {
    pcchLength = *((_QWORD *)&v837 + 1);
    if ( (int)RtlULongLongAdd(*((unsigned __int64 *)&v837 + 1), 4LL, &pcchLength) >= 0 )
    {
      v771 = (int *)pcchLength;
      v910 = v769;
      if ( !v769 )
        v771 = 0LL;
      v925 = v771;
      if ( v769 == (_DWORD)v770 )
      {
        v820 = *v771;
        v8 = 0LL;
        if ( v820 >= 0 && v768 > 1 )
        {
          for ( m = v767;
                (int)RtlULongLongAdd((unsigned __int64)v767, v770, &m) >= 0
             && (int)RtlULongLongAdd((unsigned __int64)m, *v767, &m) >= 0;
                v767 = (unsigned int *)m )
          {
            if ( v772 != -1 )
            {
              if ( (int)RtlULongLongAdd((unsigned __int64)m, v770, &m) >= 0 )
              {
                v774 = m;
                v916 = v773;
                if ( !v773 )
                  v774 = v8;
                v926 = v774;
                if ( v773 == 8 )
                  v927 = *v774;
              }
              goto LABEL_1032;
            }
          }
        }
        goto LABEL_1032;
      }
    }
    v442 = v784;
    v8 = 0LL;
  }
  else
  {
LABEL_1032:
    v442 = v784;
  }
LABEL_1033:
  v443 = v785;
LABEL_1034:
  v775 = (void *)*((_QWORD *)&v799 + 1);
  *(_QWORD *)&v799 = 0LL;
  if ( *((_QWORD *)&v799 + 1) )
  {
    v776 = GetProcessHeap();
    HeapFree(v776, 0, v775);
    v8 = 0LL;
    *((_QWORD *)&v799 + 1) = 0LL;
  }
  v777 = (void *)*((_QWORD *)&v837 + 1);
  *(_QWORD *)&v837 = 0LL;
  if ( *((_QWORD *)&v837 + 1) )
  {
    v778 = GetProcessHeap();
    HeapFree(v778, 0, v777);
    v8 = 0LL;
    *((_QWORD *)&v837 + 1) = 0LL;
  }
  if ( v442 )
  {
    v779 = GetProcessHeap();
    HeapFree(v779, 0, v442);
    v8 = 0LL;
  }
  if ( v443 )
  {
    v780 = GetProcessHeap();
    HeapFree(v780, 0, v443);
    v8 = 0LL;
  }
LABEL_454:
  v383 = v838;
  v914 = v847;
  v859 = v879;
  v817 = v8;
LABEL_455:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v817);
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
    v814 = v10;
    goto LABEL_460;
  }
  if ( v383 != 4 )
  {
LABEL_463:
    v814 = -1073418210;
    goto LABEL_460;
  }
  if ( (unsigned __int8)SP<unsigned char,SP_HLOCAL<unsigned char>>::IsNull(v859) )
    v384 = 0LL;
  v816 = *v384;
LABEL_460:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v859);
  if ( v814 < 0 || !v816 )
    return 0;
  return v2;
}
