/*
 * XREFs of ?SLGetHelper@@YA_NPEBG@Z @ 0x180049EF4
 * Callers:
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x1800417F4 (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 * Callees:
 *     StringCchLengthW @ 0x180015664 (StringCchLengthW.c)
 *     RtlULongLongAdd @ 0x180049EC0 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x180049EDC (RtlUIntAdd.c)
 *     ?Attach@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXPEAE@Z @ 0x18004C808 (-Attach@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXPEAE@Z.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x18004C834 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?IsNull@?$SP@EV?$SP_HLOCAL@E@@@@SA_NPEAE@Z @ 0x18004C85C (-IsNull@-$SP@EV-$SP_HLOCAL@E@@@@SA_NPEAE@Z.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x18004CB84 (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180050494 (-MemoryFree@@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x18005059A (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v131; // edx
  unsigned __int8 *v132; // r9
  _BYTE *v133; // r10
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
  unsigned int v146; // r9d
  int v147; // ebx
  int v148; // r9d
  int v149; // ebx
  unsigned int v150; // r9d
  int v151; // ebx
  int v152; // r9d
  int v153; // ebx
  int v154; // r9d
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
  _DWORD *v218; // rbx
  _QWORD *v219; // rsi
  FARPROC ProcAddress; // rax
  int v221; // eax
  unsigned int v222; // r9d
  unsigned int v223; // r13d
  int v224; // edx
  int v225; // edi
  int v226; // r9d
  int v227; // edx
  int v228; // r9d
  SIZE_T v229; // r12
  int v230; // edx
  int v231; // r9d
  int v232; // edx
  int v233; // r9d
  SIZE_T v234; // r15
  int v235; // edx
  int v236; // r9d
  int v237; // r9d
  HANDLE v238; // rax
  _QWORD *v239; // rax
  _QWORD *v240; // rbx
  HANDLE v241; // rax
  void *v242; // rax
  void *v243; // r13
  HANDLE v244; // rax
  void *v245; // rax
  void *v246; // r12
  HANDLE v247; // rax
  void *v248; // rax
  wchar_t *v249; // rbx
  int v250; // edi
  unsigned __int8 *v251; // rsi
  __int64 v252; // r15
  SIZE_T v253; // r15
  _BYTE *v254; // rax
  _BYTE *v255; // r12
  unsigned __int8 v256; // al
  unsigned __int8 *v257; // r9
  _BYTE *v258; // r10
  int v259; // r8d
  int v260; // esi
  unsigned int v261; // ebx
  SIZE_T v262; // r13
  int v263; // eax
  _BYTE *v264; // r15
  int v265; // r12d
  unsigned __int8 *v266; // rdi
  int v267; // r11d
  int v268; // r10d
  int v269; // ecx
  int v270; // r11d
  int v271; // ebx
  int v272; // r10d
  unsigned int v273; // esi
  int v274; // ebx
  unsigned int v275; // esi
  int v276; // ebx
  int v277; // esi
  unsigned int v278; // ebx
  int v279; // esi
  int v280; // ebx
  int v281; // esi
  unsigned int v282; // ebx
  int v283; // esi
  int v284; // ebx
  unsigned int v285; // r9d
  int v286; // ebx
  int v287; // r9d
  int v288; // ebx
  int v289; // r9d
  unsigned int v290; // r8d
  int v291; // r9d
  int v292; // r8d
  int v293; // r9d
  unsigned int v294; // r8d
  int v295; // r9d
  int v296; // edx
  SIZE_T j; // rcx
  int v298; // esi
  int v299; // edx
  int v300; // edi
  __int64 v301; // rdx
  unsigned int v302; // r11d
  SIZE_T v303; // r15
  int v304; // edx
  __int64 v305; // r9
  void *v306; // r10
  const void *v307; // rbx
  void *v308; // r12
  unsigned int v309; // r13d
  size_t v310; // r9
  SIZE_T v311; // r11
  int *v312; // r9
  SIZE_T v313; // r11
  int v314; // eax
  unsigned __int64 v315; // r9
  unsigned int v316; // r10d
  HANDLE v317; // rax
  void *v318; // rbx
  HANDLE v319; // rax
  _QWORD *v320; // rsi
  void *v321; // rbx
  HANDLE v322; // rax
  void *v323; // rbx
  HANDLE v324; // rax
  void *v325; // rbx
  HANDLE v326; // rax
  HANDLE v327; // rax
  void *v328; // rbx
  HANDLE v329; // rax
  void *v330; // rbx
  HANDLE v331; // rax
  _QWORD *v332; // rsi
  void *v333; // rbx
  HANDLE v334; // rax
  void *v335; // rbx
  HANDLE v336; // rax
  void *v337; // rbx
  HANDLE v338; // rax
  HANDLE v339; // rax
  wchar_t *v340; // rbx
  HANDLE v341; // rax
  int v342; // r9d
  int *v343; // rax
  void *v344; // rcx
  unsigned int v345; // r10d
  int v346; // eax
  int v347; // r9d
  int v348; // r9d
  _QWORD *v349; // rax
  void *v350; // rcx
  unsigned int v351; // r10d
  int v352; // eax
  int v353; // r9d
  int v354; // r9d
  _DWORD *v355; // rax
  void *v356; // rcx
  unsigned int v357; // r10d
  int v358; // r9d
  int v359; // r10d
  void *v360; // r11
  unsigned int *v361; // rcx
  unsigned int v362; // ebx
  int v363; // r9d
  int v364; // r9d
  unsigned int *v365; // rax
  unsigned int v366; // ebx
  unsigned int *v367; // rcx
  unsigned int v368; // esi
  unsigned int v369; // r10d
  const void *v370; // r11
  int v371; // r9d
  int v372; // r9d
  _DWORD *v373; // rax
  int v374; // ecx
  void *v375; // rbx
  HANDLE v376; // rax
  void *v377; // rbx
  HANDLE v378; // rax
  HANDLE v379; // rax
  HANDLE v380; // rax
  int v381; // ebx
  int *v382; // rcx
  int v384; // eax
  int v385; // eax
  int v386; // eax
  int v387; // eax
  int v388; // edx
  int v389; // r10d
  int v390; // eax
  int v391; // edx
  int v392; // eax
  int v393; // edx
  HANDLE v394; // rax
  int v395; // r15d
  int v396; // ebx
  char v397; // r11
  int v398; // edx
  unsigned int v399; // ebx
  int v400; // ecx
  int v401; // r8d
  void *v402; // r15
  HANDLE v403; // rax
  void *v404; // r15
  HANDLE v405; // rax
  void *v406; // r15
  HANDLE v407; // rax
  HANDLE v408; // rax
  void *v409; // rbx
  HANDLE v410; // rax
  void *v411; // rbx
  HANDLE v412; // rax
  void *v413; // rbx
  HANDLE v414; // rax
  HANDLE v415; // rax
  HANDLE v416; // rax
  signed int LastError; // eax
  void *v418; // r15
  HANDLE v419; // rax
  void *v420; // r15
  HANDLE v421; // rax
  void *v422; // r15
  HANDLE v423; // rax
  HANDLE v424; // rax
  void *v425; // rbx
  HANDLE v426; // rax
  void *v427; // rbx
  HANDLE v428; // rax
  void *v429; // rbx
  HANDLE v430; // rax
  HANDLE v431; // rax
  int v432; // esi
  int v433; // r13d
  int v434; // ebx
  char v435; // r11
  int v436; // edx
  unsigned int v437; // esi
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
  unsigned __int8 *v510; // r10
  int v511; // ebx
  unsigned int v512; // edx
  _BYTE *v513; // r9
  int v514; // r8d
  int v515; // r13d
  int v516; // ebx
  char v517; // r11
  int v518; // edx
  int v519; // ecx
  unsigned int v520; // ebx
  int v521; // ecx
  int v522; // r8d
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
  unsigned int v533; // r9d
  int v534; // ebx
  int v535; // r9d
  int v536; // ebx
  unsigned int v537; // r9d
  int v538; // ebx
  int v539; // r9d
  int v540; // ebx
  int v541; // r9d
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
  unsigned int v679; // ebx
  unsigned int v680; // r15d
  int v681; // ecx
  int v682; // edx
  int v683; // r15d
  size_t v684; // rcx
  int v685; // eax
  _BYTE *v686; // r13
  int v687; // edi
  unsigned __int8 *v688; // rsi
  size_t v689; // r12
  int v690; // r11d
  int v691; // r10d
  int v692; // ecx
  int v693; // r11d
  int v694; // ebx
  int v695; // r10d
  unsigned int v696; // r15d
  int v697; // ebx
  unsigned int v698; // r15d
  int v699; // ebx
  int v700; // r15d
  unsigned int v701; // ebx
  int v702; // r15d
  int v703; // ebx
  int v704; // r15d
  unsigned int v705; // ebx
  int v706; // r15d
  int v707; // ebx
  unsigned int v708; // r9d
  int v709; // ebx
  int v710; // r9d
  int v711; // ebx
  int v712; // r9d
  unsigned int v713; // r8d
  int v714; // r9d
  int v715; // r8d
  int v716; // r9d
  unsigned int v717; // r8d
  int v718; // r9d
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
  SIZE_T dwBytes; // [rsp+38h] [rbp-D0h] BYREF
  void *m; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE *v781; // [rsp+48h] [rbp-C0h] BYREF
  LPVOID v782; // [rsp+50h] [rbp-B8h]
  LPVOID v783; // [rsp+58h] [rbp-B0h]
  __int64 v784; // [rsp+60h] [rbp-A8h]
  size_t v785; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v786; // [rsp+70h] [rbp-98h] BYREF
  void *v787; // [rsp+80h] [rbp-88h] BYREF
  void *v788; // [rsp+88h] [rbp-80h] BYREF
  int v789; // [rsp+90h] [rbp-78h]
  int v790; // [rsp+94h] [rbp-74h]
  int v791; // [rsp+98h] [rbp-70h]
  int v792; // [rsp+9Ch] [rbp-6Ch]
  int v793; // [rsp+A0h] [rbp-68h]
  int v794; // [rsp+A4h] [rbp-64h]
  unsigned int v795; // [rsp+A8h] [rbp-60h]
  unsigned int v796; // [rsp+ACh] [rbp-5Ch]
  __int128 v797; // [rsp+B0h] [rbp-58h] BYREF
  STRSAFE_PCNZWCH psza; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v799; // [rsp+C8h] [rbp-40h]
  unsigned int v800; // [rsp+CCh] [rbp-3Ch]
  size_t pcchLength; // [rsp+D0h] [rbp-38h] BYREF
  int v802; // [rsp+D8h] [rbp-30h]
  int v803; // [rsp+DCh] [rbp-2Ch]
  SIZE_T v804; // [rsp+E0h] [rbp-28h] BYREF
  SIZE_T v805; // [rsp+E8h] [rbp-20h] BYREF
  void *v806; // [rsp+F0h] [rbp-18h] BYREF
  int v807; // [rsp+F8h] [rbp-10h]
  unsigned int v808; // [rsp+FCh] [rbp-Ch] BYREF
  unsigned int v809; // [rsp+100h] [rbp-8h] BYREF
  unsigned int v810; // [rsp+104h] [rbp-4h]
  unsigned int v811; // [rsp+108h] [rbp+0h]
  __int128 v812; // [rsp+110h] [rbp+8h]
  int v813; // [rsp+120h] [rbp+18h]
  LPVOID v814; // [rsp+128h] [rbp+20h]
  int v815; // [rsp+130h] [rbp+28h]
  LPVOID v816; // [rsp+138h] [rbp+30h] BYREF
  int v817; // [rsp+140h] [rbp+38h]
  int v818; // [rsp+144h] [rbp+3Ch]
  unsigned int v819; // [rsp+148h] [rbp+40h] BYREF
  int v820; // [rsp+14Ch] [rbp+44h]
  int v821; // [rsp+150h] [rbp+48h]
  int v822; // [rsp+154h] [rbp+4Ch]
  unsigned int v823; // [rsp+158h] [rbp+50h]
  unsigned int v824; // [rsp+15Ch] [rbp+54h]
  LPVOID v825; // [rsp+160h] [rbp+58h]
  LPVOID v826; // [rsp+168h] [rbp+60h]
  int v827; // [rsp+170h] [rbp+68h]
  int v828; // [rsp+174h] [rbp+6Ch]
  unsigned int v829; // [rsp+178h] [rbp+70h] BYREF
  unsigned int v830; // [rsp+17Ch] [rbp+74h]
  int v831; // [rsp+180h] [rbp+78h]
  unsigned int v832; // [rsp+184h] [rbp+7Ch]
  void *v833; // [rsp+188h] [rbp+80h]
  wchar_t *v834; // [rsp+190h] [rbp+88h]
  __int128 v835; // [rsp+198h] [rbp+90h]
  int v836; // [rsp+1A8h] [rbp+A0h] BYREF
  unsigned int v837; // [rsp+1B0h] [rbp+A8h] BYREF
  unsigned int v838; // [rsp+1B4h] [rbp+ACh]
  unsigned int v839; // [rsp+1B8h] [rbp+B0h]
  int v840; // [rsp+1C0h] [rbp+B8h] BYREF
  int v841; // [rsp+1C8h] [rbp+C0h] BYREF
  unsigned int v842; // [rsp+1D0h] [rbp+C8h]
  int v843; // [rsp+1D4h] [rbp+CCh]
  int v844; // [rsp+1D8h] [rbp+D0h] BYREF
  unsigned int v845; // [rsp+1E0h] [rbp+D8h] BYREF
  unsigned int v846; // [rsp+1E4h] [rbp+DCh]
  unsigned int v847; // [rsp+1E8h] [rbp+E0h]
  int v848; // [rsp+1ECh] [rbp+E4h]
  LPVOID v849; // [rsp+1F0h] [rbp+E8h]
  LPVOID v850; // [rsp+1F8h] [rbp+F0h]
  int v851; // [rsp+200h] [rbp+F8h]
  int v852; // [rsp+204h] [rbp+FCh]
  unsigned int v853; // [rsp+208h] [rbp+100h]
  int v854; // [rsp+20Ch] [rbp+104h]
  int v855; // [rsp+210h] [rbp+108h]
  int v856; // [rsp+214h] [rbp+10Ch]
  int v857; // [rsp+218h] [rbp+110h]
  int v858; // [rsp+21Ch] [rbp+114h]
  LPVOID lpMem; // [rsp+220h] [rbp+118h]
  unsigned int v860; // [rsp+228h] [rbp+120h]
  int v861; // [rsp+22Ch] [rbp+124h]
  int v862; // [rsp+230h] [rbp+128h]
  int v863; // [rsp+234h] [rbp+12Ch]
  LPVOID v864; // [rsp+238h] [rbp+130h]
  int v865; // [rsp+240h] [rbp+138h]
  int v866; // [rsp+244h] [rbp+13Ch]
  int v867; // [rsp+248h] [rbp+140h]
  int v868; // [rsp+24Ch] [rbp+144h]
  int v869; // [rsp+250h] [rbp+148h]
  unsigned int v870; // [rsp+254h] [rbp+14Ch]
  void *v871; // [rsp+258h] [rbp+150h] BYREF
  SIZE_T v872; // [rsp+260h] [rbp+158h]
  void *v873; // [rsp+268h] [rbp+160h]
  unsigned __int64 v874; // [rsp+270h] [rbp+168h]
  size_t v875; // [rsp+278h] [rbp+170h]
  size_t v876; // [rsp+280h] [rbp+178h]
  unsigned __int64 v877; // [rsp+288h] [rbp+180h] BYREF
  unsigned __int64 v878; // [rsp+290h] [rbp+188h]
  size_t v879; // [rsp+298h] [rbp+190h]
  size_t Size; // [rsp+2A0h] [rbp+198h]
  size_t v881; // [rsp+2A8h] [rbp+1A0h]
  unsigned __int64 v882; // [rsp+2B0h] [rbp+1A8h] BYREF
  unsigned __int64 v883; // [rsp+2B8h] [rbp+1B0h]
  SIZE_T v884; // [rsp+2C0h] [rbp+1B8h]
  int v885; // [rsp+2C8h] [rbp+1C0h]
  __int64 v886; // [rsp+2D0h] [rbp+1C8h]
  unsigned __int8 *v887; // [rsp+2D8h] [rbp+1D0h]
  __int64 v888; // [rsp+2E0h] [rbp+1D8h]
  unsigned __int8 *v889; // [rsp+2E8h] [rbp+1E0h]
  unsigned __int8 *v890; // [rsp+2F0h] [rbp+1E8h]
  HMODULE phModule; // [rsp+2F8h] [rbp+1F0h] BYREF
  int *v892; // [rsp+300h] [rbp+1F8h]
  _QWORD *v893; // [rsp+308h] [rbp+200h]
  _DWORD *v894; // [rsp+310h] [rbp+208h]
  void *v895; // [rsp+318h] [rbp+210h]
  unsigned int *v896; // [rsp+320h] [rbp+218h]
  _DWORD *v897; // [rsp+328h] [rbp+220h]
  __int64 v898; // [rsp+330h] [rbp+228h]
  void *v899; // [rsp+338h] [rbp+230h]
  void *v900; // [rsp+340h] [rbp+238h]
  unsigned __int64 v901; // [rsp+348h] [rbp+240h]
  __int64 *v902; // [rsp+350h] [rbp+248h]
  SIZE_T v903; // [rsp+358h] [rbp+250h]
  __int64 *v904; // [rsp+360h] [rbp+258h]
  __int64 v905; // [rsp+368h] [rbp+260h]
  unsigned __int8 *v906; // [rsp+370h] [rbp+268h]
  __int64 v907; // [rsp+378h] [rbp+270h]
  unsigned __int8 *v908; // [rsp+380h] [rbp+278h]
  unsigned __int8 *v909; // [rsp+388h] [rbp+280h]
  HMODULE hModule; // [rsp+390h] [rbp+288h] BYREF
  int v911; // [rsp+398h] [rbp+290h]
  void *Src; // [rsp+3A0h] [rbp+298h]
  void *v913; // [rsp+3A8h] [rbp+2A0h]
  unsigned int v914; // [rsp+3B0h] [rbp+2A8h]
  _QWORD v915[2]; // [rsp+3B8h] [rbp+2B0h] BYREF
  int v916; // [rsp+3C8h] [rbp+2C0h]
  unsigned int v917; // [rsp+3CCh] [rbp+2C4h]
  int v918; // [rsp+3D0h] [rbp+2C8h]
  _QWORD v919[2]; // [rsp+3D8h] [rbp+2D0h] BYREF
  int v920; // [rsp+3E8h] [rbp+2E0h]
  unsigned int v921; // [rsp+3ECh] [rbp+2E4h]
  int v922; // [rsp+3F0h] [rbp+2E8h]
  _QWORD *v923; // [rsp+3F8h] [rbp+2F0h]
  int *v924; // [rsp+400h] [rbp+2F8h]
  __int64 v925; // [rsp+408h] [rbp+300h]

  psza = psz;
  v817 = 0;
  v871 = 0LL;
  v813 = 0;
  v2 = 1;
  if ( !psz )
  {
    v813 = -2147024809;
    goto LABEL_460;
  }
  v843 = 0;
  v816 = 0LL;
  v821 = 0;
  v842 = 0;
  v3 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Attach(&v816, v3);
  v873 = v816;
  if ( !v816 )
  {
    v10 = -2147024882;
LABEL_1046:
    v381 = v831;
    goto LABEL_455;
  }
  v786 = 0uLL;
  v4 = 0LL;
  v812 = 0uLL;
  v5 = 0LL;
  Src = &unk_1800B7530;
  v848 = 0;
  v815 = 0;
  Size = 160LL;
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 8u, 0xA0uLL);
  v803 = -1;
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
  v782 = v9;
  v881 = 8LL;
  v913 = &unk_1800B7478;
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
  memcpy_0(v13, v913, v881);
  v15 = v881;
  v783 = v14;
  v874 = __rdtsc();
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
  v841 = 0;
  if ( &v841 )
  {
    LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v46, 4LL, &v806);
    v10 = (int)v781;
    if ( (int)v781 >= 0 )
    {
      if ( v48 + 2 > (_DWORD *)((char *)v48 + DWORD1(v786)) )
        goto LABEL_470;
      v49 = v806;
      *v48 = v47;
      *v49 = v841;
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
        v824 = v53;
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
    LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v50, 4LL, &v806);
    v10 = (int)v781;
    if ( (int)v781 < 0 )
      goto LABEL_52;
    if ( (unsigned __int64)v55 + v11 + 4 <= *((_QWORD *)&v786 + 1) + (unsigned __int64)DWORD1(v786) )
    {
      v56 = v806;
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
  v384 = RtlUIntAdd(4u, v11, &m);
  v47 = v824;
  v10 = v384;
  LODWORD(v781) = v384;
  if ( v384 >= 0 )
    v47 = (unsigned int)m;
  v824 = v47;
  if ( v384 < 0 || (LODWORD(v781) = RtlUIntAdd(DWORD1(v786), v47, (_DWORD *)&v786 + 1), v10 = (int)v781, (int)v781 < 0) )
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
        v823 = v61;
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
    LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v57, 4LL, &v806);
    v10 = (int)v781;
    if ( (int)v781 < 0 )
    {
      v65 = v47;
      goto LABEL_66;
    }
    if ( (unsigned __int64)v63 + v15 + 4 <= *((_QWORD *)&v786 + 1) + (unsigned __int64)DWORD1(v786) )
    {
      v64 = v806;
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
  v385 = RtlUIntAdd(4u, v15, &m);
  v47 = v823;
  v10 = v385;
  LODWORD(v781) = v385;
  if ( v385 >= 0 )
    v47 = (unsigned int)m;
  v823 = v47;
  if ( v385 >= 0 )
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
  v882 = v874;
  if ( !&v882 )
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
      LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v66, v65, &v806);
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
        v72 = v806;
        *v71 = 8;
        *v72 = v882;
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
        v832 = v69;
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
  v386 = RtlUIntAdd(v65, 8, &m);
  v47 = v832;
  v10 = v386;
  LODWORD(v781) = v386;
  if ( v386 >= 0 )
    v47 = (unsigned int)m;
  v832 = v47;
  if ( v386 < 0 )
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
        v387 = RtlUIntAdd(v65, 2 * (int)v785, &m);
        v388 = v828;
        v10 = v387;
        LODWORD(v781) = v387;
        if ( v387 >= 0 )
          v388 = (int)m;
        v828 = v388;
        if ( v387 >= 0 )
        {
          LODWORD(v781) = RtlUIntAdd(DWORD1(v786), v388, (_DWORD *)&v786 + 1);
          v10 = (int)v781;
          if ( (int)v781 >= 0 )
          {
            LODWORD(v786) = v786 + 1;
            v10 = v389;
            LODWORD(v781) = v389;
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
          LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v76, v65, &v806);
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
              v82 = v806;
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
            v828 = v79;
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
  v844 = v821;
  if ( &v844 )
  {
    if ( *((unsigned __int8 **)&v786 + 1) == v8 )
    {
      v390 = RtlUIntAdd(v65, v65, &m);
      v391 = v820;
      v10 = v390;
      LODWORD(v781) = v390;
      if ( v390 >= 0 )
        v391 = (int)m;
      v820 = v391;
      if ( v390 >= 0 )
      {
        LODWORD(v781) = RtlUIntAdd(DWORD1(v786), v391, (_DWORD *)&v786 + 1);
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
        LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v83, v65, &v806);
        v10 = (int)v781;
        if ( (int)v781 >= 0 )
        {
          if ( (unsigned __int64)(v88 + 2) > *((_QWORD *)&v786 + 1) + (unsigned __int64)DWORD1(v786) )
            goto LABEL_512;
          v89 = v806;
          *v88 = v65;
          *v89 = v844;
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
          v820 = v86;
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
  v840 = v65;
  if ( &v840 )
  {
    if ( *((unsigned __int8 **)&v786 + 1) == v8 )
    {
      v392 = RtlUIntAdd(v65, v65, &m);
      v393 = v827;
      v10 = v392;
      LODWORD(v781) = v392;
      if ( v392 >= 0 )
        v393 = (int)m;
      v827 = v393;
      if ( v392 >= 0 )
      {
        LODWORD(v781) = RtlUIntAdd(DWORD1(v786), v393, (_DWORD *)&v786 + 1);
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
          v827 = v93;
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
      LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v90, v65, &v806);
      v10 = (int)v781;
      if ( (int)v781 >= 0 )
      {
        if ( (unsigned __int64)(v95 + 2) <= *((_QWORD *)&v786 + 1) + (unsigned __int64)DWORD1(v786) )
        {
          v96 = v806;
          *v95 = v65;
          *v96 = v840;
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
  v99 = v807;
  v10 = v97;
  LODWORD(v781) = v97;
  if ( v97 >= 0 )
    v99 = (int)m;
  v807 = v99;
  if ( v97 < 0 )
    goto LABEL_522;
  LODWORD(dwBytes) = v99;
  v100 = RtlUIntAdd(v98, 8, &m);
  LODWORD(v781) = v100;
  v102 = v101;
  v10 = v100;
  if ( v100 >= 0 )
    v102 = (int)m;
  v807 = v102;
  if ( v100 < 0 )
  {
LABEL_522:
    v8 = 0LL;
LABEL_523:
    v112 = v817;
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
  v807 = v105;
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
  v807 = v107;
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
  v807 = v109;
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
  v807 = v111;
  if ( v110 < 0 )
    goto LABEL_523;
  v10 = RtlUIntAdd(dwBytes, v111, &dwBytes);
  LODWORD(v781) = v10;
  v112 = v817;
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
  v814 = v8;
  v115 = (int)v8;
  LODWORD(v788) = (_DWORD)v8;
  v826 = v8;
  v799 = (unsigned int)v8;
  v825 = v8;
  psza = (STRSAFE_PCNZWCH)v8;
  v811 = (unsigned int)v8;
  v883 = __rdtsc();
  v808 = 8;
  v116 = RtlUIntAdd(8u, SDWORD1(v786), &v808);
  if ( v116 >= 0 )
  {
    v117 = (v808 + 7) & 0xFFFFFFF8;
    if ( v117 < v808 )
    {
      v116 = -1073741675;
    }
    else
    {
      v808 = (v808 + 7) & 0xFFFFFFF8;
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
            *(_QWORD *)&v121[v808 - 8] = v883;
            memcpy_0((void *)v785, *((const void **)&v786 + 1), DWORD1(v786));
            v114 = v808;
            v8 = 0LL;
            v113 = (unsigned __int8 *)v121;
            pcchLength = (size_t)v121;
            v121 = 0LL;
          }
        }
        if ( v121 )
        {
          v394 = GetProcessHeap();
          HeapFree(v394, 0, v121);
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
  v902 = (__int64 *)v8;
  v124 = v8;
  v886 = (__int64)v8;
  v887 = v8;
  v888 = (__int64)v8;
  lpMem = v8;
  v884 = (SIZE_T)v8;
  v785 = (size_t)v8;
  if ( v113 )
  {
    v125 = v114;
    m = (void *)v114;
    if ( v114 && (v804 = v114 + 8LL, v126 = MemoryAlloc(v804), v8 = 0LL, v781 = v126, (v127 = v126) != 0LL) )
    {
      v128 = 0;
      for ( i = 0LL; i < v114; ++i )
        v128 ^= v113[i];
      v130 = -1;
      v791 = -1;
      LODWORD(dwBytes) = 0;
      v131 = 0;
      v795 = 0;
      v132 = v113;
      v133 = v127;
      v134 = 0;
      v135 = v114 & 7;
      if ( (v114 & 7) != 0 )
      {
        LODWORD(dwBytes) = 0;
        v395 = 0;
        v396 = 0;
        v397 = 56;
        do
        {
          v398 = *v132;
          if ( v396 >= 4 )
            v134 |= v398 << v397;
          else
            v395 |= v398 << (v397 - 32);
          ++v132;
          ++v396;
          v397 -= 8;
        }
        while ( v396 < v135 );
        LODWORD(dwBytes) = v395;
        v131 = v395 ^ 0xB17A307A;
        v399 = v134 ^ 0x42F6B18D;
        v795 = v395 ^ 0xB17A307A;
        v400 = 0;
        v791 = v134 ^ 0x42F6B18D;
        if ( (v125 & 7) != 0 )
        {
          do
          {
            if ( v400 >= 4 )
            {
              v399 = __ROL4__(v399, 8);
              *v133 = v399;
            }
            else
            {
              v131 = __ROL4__(v131, 8);
              *v133 = v131;
            }
            ++v133;
            ++v400;
          }
          while ( v400 < v135 );
          v131 = v795;
          v399 = v791;
        }
        v401 = v135 - 4;
        if ( v401 <= 0 )
        {
          v130 = 0;
          v791 = 0;
          if ( v401 < 0 )
          {
            v131 = v131 >> (-8 * v401) << (-8 * v401);
            v795 = v131;
          }
        }
        else
        {
          v130 = v399 >> (8 * (4 - v401)) << (8 * (4 - v401));
          v791 = v130;
        }
      }
      v136 = v125 >> 3;
      if ( v125 >> 3 )
      {
        v137 = dwBytes;
        v138 = v133 + 7;
        v139 = v132 + 2;
        do
        {
          v140 = *(v139 - 1) | (*(v139 - 2) << 8);
          v141 = v139[2] << 8;
          v142 = *v139;
          v139 += 8;
          v143 = *(v139 - 7) | ((v142 | (v140 << 8)) << 8);
          v144 = *(v139 - 3) | ((*(v139 - 4) | ((*(v139 - 5) | v141) << 8)) << 8);
          v145 = v144 ^ v130;
          v146 = v131 ^ v143 ^ (v145 - 19032) ^ 0xC81ECB17;
          v147 = (__ROR4__(v146, 7) + 45493 * __ROR4__(v131 ^ v143 ^ (v145 - 19032), 15)) ^ v145;
          v148 = (51991 * __ROR4__(v147 - 1313519016, 9) - __ROR4__(v147, 10)) ^ v146;
          v149 = (__ROL4__(v148, 5) + 51230 * __ROL4__(v148 ^ 0xCB17, 4)) ^ v147;
          v150 = (-937506025 - (v149 ^ 0xB1B54A58)) ^ v148;
          v151 = (45493 * (v150 - 19032) - (v150 >> 6)) ^ v149;
          v152 = (19032 * (__ROR4__(v151, 15) ^ 0xCB17)) ^ v150;
          v153 = (51991 * (__ROR4__(~v152, 3) + 51230)) ^ v151;
          v154 = (v153 + 937486993) ^ v152;
          v155 = (45493 * (v154 ^ 0xC81E)) ^ __ROR4__(v154, 10) ^ v153;
          v156 = __ROR4__(v155, 3) ^ (51991 * __ROL4__(v155 ^ 0x4A58, 6)) ^ v154;
          v157 = (19032 * (__ROR4__(v156, 15) - 51230)) ^ v155;
          v158 = (v157 >> 15) ^ (19032 * __ROL4__(v157 - 51991, 3)) ^ (v157 >> 1) ^ (19032 * (v157 ^ 0xC81E)) ^ v156;
          v159 = (45493 * (v158 - 51991) - (v158 >> 13)) ^ v157;
          v160 = __ROR4__(v159, 11) ^ (51991 * __ROR4__(-1313519016 - v159, 9)) ^ v158;
          v161 = (v160 + 1313467786) ^ v159;
          v162 = (19032 * (v161 ^ 0xB1B5) - __ROR4__(v161, 7)) ^ v160;
          v163 = (45493 * __ROL4__(v162 ^ 0xC81E, 4) - __ROR4__(v162, 16)) ^ v161;
          v164 = (__ROR4__(v163, 4) + 51991 * __ROR4__(-1313519016 - v163, 10)) ^ v162;
          v165 = __ROR4__(v164, 9) ^ (51230 * __ROR4__(v164 + 1313519016, 4)) ^ v163;
          v166 = (19032 * __ROL4__(v165 ^ 0xC81ECB17, 8) - __ROL4__(v165, 2)) ^ v164;
          v167 = (45493 * __ROR4__(-937506025 - v166, 11) - __ROR4__(v166, 12)) ^ v165;
          v168 = (v167 >> 8) ^ (51991 * (v167 ^ 0xB1B5)) ^ v166;
          v795 = v137 ^ v168;
          v137 = v143;
          v791 = v134 ^ v168 ^ v167 ^ 0x79AB814F;
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
          v131 = __ROR4__(v795, 8);
          v130 = __ROR4__(v791, 8);
          v795 = v131;
          v791 = v130;
          --v136;
        }
        while ( v136 );
        v124 = (_QWORD *)v785;
        v125 = (unsigned __int64)m;
        v127 = v781;
      }
      *(_QWORD *)&v127[v125] = v128;
      v169 = v804;
      v884 = v804;
      lpMem = v127;
      v902 = &qword_1800B7520;
      v886 = 8LL;
      v888 = 160LL;
      v887 = (unsigned __int8 *)xmmword_1800B7480;
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
        *v176 = xmmword_1800B7480[0];
        v176[1] = xmmword_1800B7480[1];
        v176[2] = xmmword_1800B7480[2];
        v176[3] = xmmword_1800B7480[3];
        v176[4] = xmmword_1800B7480[4];
        v176[5] = xmmword_1800B7480[5];
        v176[6] = xmmword_1800B7480[6];
        v176[7] = xmmword_1800B7480[7];
        v176[8] = xmmword_1800B7480[8];
        v176[9] = xmmword_1800B7480[9];
        v172[8] = 8;
        v177 = GetProcessHeap();
        v178 = HeapAlloc(v177, 8u, 8uLL);
        v8 = 0LL;
        if ( v178 )
        {
          *((_QWORD *)v172 + 5) = v178;
          v124 = v172;
          *v178 = qword_1800B7520;
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
          v402 = (void *)*((_QWORD *)v172 + 1);
          if ( v402 )
          {
            v403 = GetProcessHeap();
            HeapFree(v403, 0, v402);
            *((_QWORD *)v172 + 1) = 0LL;
          }
          v404 = (void *)*((_QWORD *)v172 + 3);
          if ( v404 )
          {
            v405 = GetProcessHeap();
            HeapFree(v405, 0, v404);
            *((_QWORD *)v172 + 3) = 0LL;
          }
          v406 = (void *)*((_QWORD *)v172 + 5);
          if ( v406 )
          {
            v407 = GetProcessHeap();
            HeapFree(v407, 0, v406);
            *((_QWORD *)v172 + 5) = 0LL;
          }
          v408 = GetProcessHeap();
          HeapFree(v408, 0, v172);
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
      v409 = (void *)v124[1];
      if ( v409 )
      {
        v410 = GetProcessHeap();
        HeapFree(v410, 0, v409);
        v124[1] = 0LL;
      }
      v411 = (void *)v124[3];
      if ( v411 )
      {
        v412 = GetProcessHeap();
        HeapFree(v412, 0, v411);
        v124[3] = 0LL;
      }
      v413 = (void *)v124[5];
      if ( v413 )
      {
        v414 = GetProcessHeap();
        HeapFree(v414, 0, v413);
        v124[5] = 0LL;
      }
      v415 = GetProcessHeap();
      HeapFree(v415, 0, v124);
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
    v184 = v818;
  }
  else
  {
    v183 = RtlUIntAdd(dwBytes, *((_DWORD *)v182 + 8), &dwBytes);
    v184 = v818;
    if ( v183 >= 0 )
      v184 = dwBytes;
    v818 = v184;
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
                  v115 = v818;
                  v814 = v188;
                  v188 = 0LL;
                }
              }
            }
          }
        }
      }
      if ( v188 )
      {
        v416 = GetProcessHeap();
        HeapFree(v416, 0, v188);
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
  v889 = v8;
  v852 = (int)v8;
  v851 = (int)v8;
  v890 = v8;
  v819 = 8;
  v195 = RtlUIntAdd(8u, (int)v787, &v819);
  v10 = v195 | 0x10000000;
  LODWORD(v781) = v195 | 0x10000000;
  if ( v195 >= 0 )
  {
    v197 = (v819 + 7) & 0xFFFFFFF8;
    if ( v197 < v819 )
    {
      v10 = -1073741675;
      LODWORD(v781) = -1073741675;
    }
    else
    {
      v845 = (v819 + 7) & 0xFFFFFFF8;
      v198 = RtlUIntAdd(v197, v196, &v845);
      v199 = v846;
      v10 = v198;
      LODWORD(v781) = v198;
      if ( v198 >= 0 )
        v199 = v845;
      v846 = v199;
    }
    if ( v10 < 0 )
      goto LABEL_335;
    if ( *((unsigned __int8 **)&v786 + 1) == v8 || (unsigned int)v786 <= 1 )
    {
      v10 = -1073741811;
      LODWORD(v781) = -1073741811;
    }
    else
    {
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
      v851 = v203;
      if ( !v203 )
        v204 = 0LL;
      v8 = 0LL;
      v889 = v204;
LABEL_210:
      if ( v10 >= 0 )
      {
        if ( (unsigned int)v786 <= 2 )
        {
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
              goto LABEL_566;
            LODWORD(v781) = RtlULongLongAdd((unsigned __int64)m, v206, &m);
            v10 = (int)v781;
            if ( (int)v781 < 0 )
              goto LABEL_566;
            v205 = (unsigned int *)m;
          }
          while ( (unsigned int)(v208 + 1) < 2 );
          LODWORD(v781) = RtlULongLongAdd((unsigned __int64)m, 4LL, &m);
          v10 = (int)v781;
          if ( (int)v781 < 0 )
          {
LABEL_566:
            v8 = 0LL;
            goto LABEL_220;
          }
          v210 = (unsigned __int8 *)m;
          v211 = v209 == 0;
          v194 = v209;
          v8 = 0LL;
          if ( v211 )
            v210 = 0LL;
          v852 = v194;
          v890 = v210;
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
            v213 = v847;
          }
          else
          {
            v10 = RtlUIntAdd(dwBytes, v194, &dwBytes);
            LODWORD(v781) = v10;
            v213 = v847;
            if ( v10 >= 0 )
              v213 = dwBytes;
            v847 = v213;
          }
          if ( v10 < 0 )
            goto LABEL_335;
          if ( v213 > 0x400000 )
          {
            v10 = -2147418113;
            goto LABEL_334;
          }
          v799 = v213;
        }
      }
    }
  }
  if ( v10 < 0 )
    goto LABEL_335;
  v214 = v799;
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
  if ( !v814 || !v218 )
  {
    v10 = -2147024809;
    goto LABEL_334;
  }
  v919[0] = v814;
  v921 = v799;
  v920 = v115;
  v919[1] = v218;
  v922 = 0;
  v219 = 0LL;
  if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
    && (ProcAddress = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
  {
    v221 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, _QWORD))ProcAddress)(134LL, v919, 32LL, 0LL);
    v222 = v799;
    v10 = v221 | 0x10000000;
    if ( v221 >= 0 )
      v222 = v921;
    v799 = v222;
  }
  else
  {
    LastError = GetLastError();
    LODWORD(v781) = LastError;
    v10 = LastError;
    if ( LastError > 0 )
    {
      v10 = (unsigned __int16)LastError | 0x80070000;
      LODWORD(v781) = v10;
    }
    v222 = v799;
    if ( v10 < 0 )
      goto LABEL_243;
    v10 = -2147467259;
  }
  LODWORD(v781) = v10;
LABEL_243:
  v8 = 0LL;
  if ( v10 == -805306333 )
  {
    v10 = -2147024774;
    LODWORD(v781) = -2147024774;
    goto LABEL_335;
  }
  if ( v10 < 0 )
    goto LABEL_335;
  LODWORD(v781) = 0;
  m = v218;
  if ( v222 < 4 )
    goto LABEL_576;
  v223 = *v218;
  v225 = RtlULongLongAdd((unsigned __int64)v218, 4LL, &m);
  if ( v225 < 0 )
    goto LABEL_279;
  v225 = RtlUIntAdd(0, v224, &v781);
  if ( v225 < 0 )
    goto LABEL_279;
  if ( v226 - (int)v781 < v223 )
    goto LABEL_576;
  v785 = (size_t)m;
  v225 = RtlULongLongAdd((unsigned __int64)m, v223, &m);
  if ( v225 < 0 )
    goto LABEL_279;
  v225 = RtlUIntAdd((unsigned int)v781, v227, &v781);
  if ( v225 < 0 )
    goto LABEL_279;
  if ( (unsigned int)(v228 - (_DWORD)v781) < 4 )
    goto LABEL_576;
  v229 = *(unsigned int *)m;
  v225 = RtlULongLongAdd((unsigned __int64)m, 4LL, &m);
  if ( v225 < 0 )
    goto LABEL_279;
  v225 = RtlUIntAdd((unsigned int)v781, v230, &v781);
  if ( v225 < 0 )
    goto LABEL_279;
  if ( v231 - (int)v781 < (unsigned int)v229 )
    goto LABEL_576;
  v787 = m;
  v225 = RtlULongLongAdd((unsigned __int64)m, (unsigned int)v229, &m);
  if ( v225 < 0 )
    goto LABEL_279;
  v225 = RtlUIntAdd((unsigned int)v781, v232, &v781);
  if ( v225 < 0 )
    goto LABEL_279;
  if ( (unsigned int)(v233 - (_DWORD)v781) < 4 )
    goto LABEL_576;
  v234 = *(unsigned int *)m;
  v225 = RtlULongLongAdd((unsigned __int64)m, (unsigned int)((_DWORD)v8 + 4), &m);
  if ( v225 < 0 )
    goto LABEL_279;
  v225 = RtlUIntAdd((unsigned int)v781, v235, &v781);
  if ( v225 < 0 )
    goto LABEL_279;
  if ( v236 - (int)v781 < (unsigned int)v234 )
    goto LABEL_576;
  v225 = RtlUIntAdd((unsigned int)v781, v234, &v781);
  if ( v225 < 0 )
    goto LABEL_279;
  if ( v237 != (_DWORD)v781 || v223 + (_DWORD)v234 + (_DWORD)v229 + 12LL != v237 )
  {
LABEL_576:
    v225 = -1073741762;
    goto LABEL_279;
  }
  v238 = GetProcessHeap();
  v239 = HeapAlloc(v238, 8u, 0x30uLL);
  v8 = 0LL;
  v240 = v239;
  if ( v239 )
  {
    v225 = 0;
    if ( v785 )
    {
      *(_DWORD *)v239 = v223;
      v241 = GetProcessHeap();
      v242 = HeapAlloc(v241, 8u, v223);
      v8 = 0LL;
      if ( !v242 )
        goto LABEL_578;
      v240[1] = v242;
      memcpy_0(v242, (const void *)v785, v223);
      v8 = 0LL;
    }
    else
    {
      *(_DWORD *)v239 = 0;
      v239[1] = 0LL;
    }
    v243 = v787;
    if ( v787 )
    {
      *((_DWORD *)v240 + 4) = v229;
      v244 = GetProcessHeap();
      v245 = HeapAlloc(v244, 8u, v229);
      v8 = 0LL;
      if ( !v245 )
        goto LABEL_578;
      v240[3] = v245;
      v225 = 0;
      memcpy_0(v245, v243, v229);
      v8 = 0LL;
    }
    else
    {
      *((_DWORD *)v240 + 4) = 0;
      v240[3] = 0LL;
    }
    v246 = m;
    if ( !m )
    {
      *((_DWORD *)v240 + 8) = 0;
      v240[5] = 0LL;
      goto LABEL_274;
    }
    *((_DWORD *)v240 + 8) = v234;
    v247 = GetProcessHeap();
    v248 = HeapAlloc(v247, 8u, v234);
    v8 = 0LL;
    if ( v248 )
    {
      v240[5] = v248;
      v225 = 0;
      memcpy_0(v248, v246, v234);
      v8 = 0LL;
LABEL_274:
      v219 = v240;
      v240 = 0LL;
      goto LABEL_275;
    }
LABEL_578:
    v225 = -1073741801;
LABEL_275:
    if ( v240 )
    {
      v418 = (void *)v240[1];
      if ( v418 )
      {
        v419 = GetProcessHeap();
        HeapFree(v419, 0, v418);
        v240[1] = 0LL;
      }
      v420 = (void *)v240[3];
      if ( v420 )
      {
        v421 = GetProcessHeap();
        HeapFree(v421, 0, v420);
        v240[3] = 0LL;
      }
      v422 = (void *)v240[5];
      if ( v422 )
      {
        v423 = GetProcessHeap();
        HeapFree(v423, 0, v422);
        v240[5] = 0LL;
      }
      v424 = GetProcessHeap();
      HeapFree(v424, 0, v240);
      v8 = 0LL;
    }
    goto LABEL_276;
  }
  v225 = -1073741801;
LABEL_276:
  if ( v225 >= 0 )
  {
    v825 = v219;
    v219 = 0LL;
  }
  if ( v219 )
  {
    v425 = (void *)v219[1];
    if ( v425 )
    {
      v426 = GetProcessHeap();
      HeapFree(v426, 0, v425);
      v219[1] = 0LL;
    }
    v427 = (void *)v219[3];
    if ( v427 )
    {
      v428 = GetProcessHeap();
      HeapFree(v428, 0, v427);
      v219[3] = 0LL;
    }
    v429 = (void *)v219[5];
    if ( v429 )
    {
      v430 = GetProcessHeap();
      HeapFree(v430, 0, v429);
      v219[5] = 0LL;
    }
    v431 = GetProcessHeap();
    HeapFree(v431, 0, v219);
    v8 = 0LL;
  }
LABEL_279:
  v10 = v225 | 0x10000000;
  LODWORD(v781) = v10;
  if ( v10 < 0 )
    goto LABEL_335;
  v249 = (wchar_t *)v8;
  v834 = (wchar_t *)v8;
  v250 = (int)v8;
  v872 = (SIZE_T)v8;
  LODWORD(v781) = (_DWORD)v8;
  if ( !v825 || (v251 = (unsigned __int8 *)*((_QWORD *)v825 + 1), (v787 = v251) == 0LL) || *(_DWORD *)v825 == (_DWORD)v8 )
  {
    v250 = -1073741811;
    goto LABEL_302;
  }
  v252 = *(unsigned int *)v825;
  LODWORD(m) = (_DWORD)v8;
  if ( !v252 )
    goto LABEL_614;
  v253 = v252 - 8;
  v804 = v253;
  v254 = MemoryAlloc(v253);
  v8 = 0LL;
  v785 = (size_t)v254;
  v255 = v254;
  if ( !v254 )
  {
    v249 = v834;
    goto LABEL_614;
  }
  v256 = 0;
  LOBYTE(v784) = 0;
  v257 = v251;
  v258 = v255;
  v259 = v253 & 7;
  if ( (v253 & 7) == 0 )
  {
    LODWORD(dwBytes) = -1;
    v260 = 0;
    LODWORD(v788) = 0;
    v261 = 0;
    v789 = 0;
LABEL_287:
    v793 = v261;
    goto LABEL_288;
  }
  v789 = -1;
  v793 = 0;
  v432 = 0;
  LODWORD(dwBytes) = 0;
  v433 = 0;
  LODWORD(v788) = 0;
  v434 = 0;
  v435 = 56;
  do
  {
    v436 = *v257;
    if ( v434 >= 4 )
      v432 |= v436 << v435;
    else
      v433 |= v436 << (v435 - 32);
    ++v257;
    ++v434;
    v435 -= 8;
  }
  while ( v434 < v259 );
  LODWORD(v788) = v433;
  LODWORD(dwBytes) = v432;
  v437 = v432 ^ 0x699A899C;
  v261 = v433 ^ 0x92F65A5;
  v789 = v437;
  v793 = v433 ^ 0x92F65A5;
  v438 = 0;
  if ( (v253 & 7) != 0 )
  {
    do
    {
      if ( v438 >= 4 )
      {
        v437 = __ROL4__(v437, 8);
        *v258 = v437;
      }
      else
      {
        v261 = __ROL4__(v261, 8);
        *v258 = v261;
      }
      ++v258;
      ++v438;
    }
    while ( v438 < v259 );
    v261 = v793;
    v437 = v789;
  }
  v439 = v259 - 4;
  if ( v259 - 4 <= 0 )
  {
    v789 = 0;
    v260 = 0;
    if ( v439 < 0 )
    {
      v261 = v261 >> (-8 * v439) << (-8 * v439);
      goto LABEL_287;
    }
  }
  else
  {
    v260 = v437 >> (8 * (4 - v439)) << (8 * (4 - v439));
    v789 = v260;
  }
LABEL_288:
  v262 = v253 >> 3;
  if ( v253 >> 3 )
  {
    v263 = dwBytes;
    v264 = v258 + 7;
    v265 = (int)v788;
    v266 = v257 + 2;
    do
    {
      v267 = *(v266 - 1) | (*(v266 - 2) << 8);
      v268 = v266[2] << 8;
      v269 = *v266;
      v266 += 8;
      v270 = *(v266 - 7) | ((v269 | (v267 << 8)) << 8);
      v271 = v270 ^ v261;
      v272 = *(v266 - 3) | ((*(v266 - 4) | ((*(v266 - 5) | v268) << 8)) << 8);
      v273 = v271 ^ v272 ^ v260 ^ 0xAC987321;
      v274 = (__ROL4__(v273, 10) + 4991 * __ROL4__(v273 + 1419157410, 5)) ^ v271;
      v275 = (43881 * __ROR4__(v274 + 133239679, 9) - __ROL4__(v274, 2)) ^ v273;
      v276 = (24670 * (v275 - 4991) - (v275 >> 13)) ^ v274;
      v277 = (2033 * __ROL4__(v276 ^ 0xAB69, 6) - __ROL4__(v276, 2)) ^ v275;
      v278 = (133239679 - (v277 ^ 0xAB69605E)) ^ v276;
      v279 = (43881 * (v278 ^ 0x137F)) ^ __ROR4__(v278, 6) ^ v277;
      v280 = (__ROL4__(v279, 2) + 24670 * __ROR4__(v279 + 133239679, 15)) ^ v278;
      v281 = (2033 * __ROR4__(v280 + 1419157410, 14) - __ROL4__(v280, 8)) ^ v279;
      v282 = __ROR4__(v281, 10) ^ (4991 * __ROR4__(v281 ^ 0xAB69605E, 12)) ^ v280;
      v283 = (v282 >> 10) ^ (43881 * (v282 ^ 0x7F1)) ^ v281;
      v284 = (2033 * (__ROR4__(~v283, 5) + 24670)) ^ v282;
      v285 = v283 ^ (v284 - 2033) ^ 0xAB69605E;
      v286 = ((v285 >> 2) + 4991 * __ROL4__(v283 ^ (v284 - 2033) ^ 0xAB6967AF, 2)) ^ v284;
      v287 = (__ROL4__(v286, 7) + 43881 * __ROR4__(v286 - 133239679, 6)) ^ v285;
      v288 = (24670 * (v287 ^ 0x137F) + __ROR4__(v287, 9)) ^ v286;
      v289 = (__ROL4__(v288, 7) + 2033 * __ROL4__(v288 ^ 0xAB69, 5)) ^ v287;
      v290 = v288 ^ v289 ^ 0xAC987321;
      v291 = (4991 * (__ROR4__(v290, 3) - 43881)) ^ v289;
      v292 = (24670 * __ROR4__(v291 - 133239679, 1) - __ROR4__(v291, 6)) ^ v290;
      v293 = (__ROL4__(v292, 14) + 2033 * __ROL4__(v292 - 1419157410, 3)) ^ v291;
      v294 = (4991 * __ROL4__(v293 - 1419157410, 15) - __ROR4__(v293, 14)) ^ v292;
      v295 = (v294 >> 3) ^ (43881 * (v294 ^ 0x605E)) ^ v293;
      v789 = v263 ^ v295;
      v263 = v272;
      v296 = v265 ^ __ROL4__(v295, 2) ^ (24670 * __ROL4__(v295 ^ 0x7F1137F, 4));
      v265 = v270;
      v793 = v296 ^ v294;
      *(v264 - 4) = v296 ^ v294;
      v793 = __ROR4__(v793, 8);
      *v264 = v789;
      v264 += 8;
      v789 = __ROR4__(v789, 8);
      *(v264 - 13) = v793;
      v793 = __ROR4__(v793, 8);
      *(v264 - 9) = v789;
      v789 = __ROR4__(v789, 8);
      *(v264 - 14) = v793;
      v793 = __ROR4__(v793, 8);
      *(v264 - 10) = v789;
      v789 = __ROR4__(v789, 8);
      *(v264 - 15) = v793;
      *(v264 - 11) = v789;
      v261 = __ROR4__(v793, 8);
      v260 = __ROR4__(v789, 8);
      v793 = v261;
      v789 = v260;
      --v262;
    }
    while ( v262 );
    v256 = v784;
    v250 = (int)v781;
    v253 = v804;
    v255 = (_BYTE *)v785;
  }
  v8 = 0LL;
  for ( j = 0LL; j < v253; ++j )
    v256 ^= v255[j];
  if ( v256 == *(_QWORD *)((char *)v787 + v253) )
  {
    v298 = (int)m;
    v249 = (wchar_t *)v255;
    v834 = (wchar_t *)v255;
    v255 = 0LL;
    v872 = v253;
  }
  else
  {
    v249 = v834;
    v298 = -1073425151;
  }
  if ( v255 )
  {
    MemoryFree(v255);
    v249 = v834;
    v8 = 0LL;
  }
  if ( v298 >= 0 )
  {
    psza = v249;
    v249 = 0LL;
    v834 = 0LL;
    v811 = v872;
    goto LABEL_300;
  }
LABEL_614:
  v250 = -1073741823;
LABEL_300:
  if ( v249 )
  {
    v440 = GetProcessHeap();
    HeapFree(v440, 0, v249);
    v8 = 0LL;
    v834 = 0LL;
  }
LABEL_302:
  v10 = v250 | 0x10000000;
  LODWORD(v781) = v10;
  if ( v10 >= 0 )
  {
    LODWORD(dwBytes) = (_DWORD)v8;
    v785 = (size_t)psza;
    if ( v811 >= 4 )
    {
      LODWORD(v787) = *(_DWORD *)psza;
      v300 = RtlULongLongAdd((unsigned __int64)psza, 4LL, &v785);
      if ( v300 < 0 )
        goto LABEL_333;
      v300 = RtlUIntAdd(0, v299, &dwBytes);
      if ( v300 < 0 )
        goto LABEL_333;
      if ( v811 - (unsigned int)dwBytes >= v302 )
      {
        v303 = *(unsigned int *)v785;
        v300 = RtlULongLongAdd(v785, v301, &v785);
        if ( v300 < 0 )
          goto LABEL_333;
        v300 = RtlUIntAdd(dwBytes, v304, &dwBytes);
        if ( v300 < 0 )
          goto LABEL_333;
        if ( v811 - (unsigned int)dwBytes >= (unsigned int)v303 )
        {
          v300 = RtlUIntAdd(dwBytes, v303, &dwBytes);
          if ( v300 < 0 )
            goto LABEL_333;
          v307 = (const void *)v785;
          if ( v305 + (unsigned __int64)v811 >= v303 + v785 && v811 + v305 - v303 - v785 < 8 )
          {
            v308 = v306;
            v300 = (int)v306;
            v309 = (unsigned int)v306;
            if ( !v785 )
              goto LABEL_325;
            v300 = RtlULongLongAdd(v785, (unsigned int)v303, &v804);
            if ( v300 < 0 )
              goto LABEL_331;
            v311 = v804;
            if ( (unsigned __int64)v307 < v804 )
            {
              do
              {
                v300 = RtlULongLongAdd(v310, 4LL, &v804);
                if ( v300 < 0 )
                  goto LABEL_333;
                if ( v804 > v313 )
                  goto LABEL_615;
                v314 = RtlUIntAdd(4u, *v312, &m);
                v300 = v314;
                if ( v314 >= 0 )
                  v316 = (unsigned int)m;
                v853 = v316;
                if ( v314 < 0 )
                  goto LABEL_333;
                v300 = RtlULongLongAdd(v315, v316, &v785);
                if ( v300 < 0 )
                  goto LABEL_333;
                v310 = v785;
                if ( v785 > v311 )
                  goto LABEL_615;
                ++v309;
              }
              while ( v785 < v311 );
            }
            if ( v310 == v311 )
            {
LABEL_325:
              if ( (_DWORD)v303 )
              {
                v317 = GetProcessHeap();
                v308 = HeapAlloc(v317, 8u, v303);
                if ( !v308 )
                {
                  v300 = -1073741801;
                  goto LABEL_331;
                }
                v300 = 0;
              }
              if ( v307 )
                memcpy_0(v308, v307, v303);
              *((_QWORD *)&v812 + 1) = v308;
              *(_QWORD *)&v812 = __PAIR64__(v303, v309);
LABEL_331:
              if ( v300 < 0 || (_DWORD)v787 == (_DWORD)v812 )
                goto LABEL_333;
              goto LABEL_617;
            }
LABEL_615:
            v300 = -1073741811;
LABEL_333:
            v10 = v300 | 0x10000000;
            v8 = 0LL;
LABEL_334:
            LODWORD(v781) = v10;
            goto LABEL_335;
          }
        }
      }
    }
LABEL_617:
    v300 = -1073741762;
    goto LABEL_333;
  }
LABEL_335:
  v318 = (void *)pcchLength;
  if ( pcchLength )
  {
    v319 = GetProcessHeap();
    HeapFree(v319, 0, v318);
    v8 = 0LL;
  }
  v320 = v849;
  if ( v849 )
  {
    v321 = (void *)*((_QWORD *)v849 + 1);
    if ( v321 )
    {
      v322 = GetProcessHeap();
      HeapFree(v322, 0, v321);
      v320[1] = 0LL;
    }
    v323 = (void *)v320[3];
    if ( v323 )
    {
      v324 = GetProcessHeap();
      HeapFree(v324, 0, v323);
      v320[3] = 0LL;
    }
    v325 = (void *)v320[5];
    if ( v325 )
    {
      v326 = GetProcessHeap();
      HeapFree(v326, 0, v325);
      v320[5] = 0LL;
    }
    v327 = GetProcessHeap();
    HeapFree(v327, 0, v320);
    v8 = 0LL;
    v849 = 0LL;
  }
  v328 = v814;
  if ( v814 )
  {
    v329 = GetProcessHeap();
    HeapFree(v329, 0, v328);
    v8 = 0LL;
  }
  v330 = v826;
  if ( v826 )
  {
    v331 = GetProcessHeap();
    HeapFree(v331, 0, v330);
    v8 = 0LL;
  }
  v332 = v825;
  if ( v825 )
  {
    v333 = (void *)*((_QWORD *)v825 + 1);
    if ( v333 )
    {
      v334 = GetProcessHeap();
      HeapFree(v334, 0, v333);
      v332[1] = 0LL;
    }
    v335 = (void *)v332[3];
    if ( v335 )
    {
      v336 = GetProcessHeap();
      HeapFree(v336, 0, v335);
      v332[3] = 0LL;
    }
    v337 = (void *)v332[5];
    if ( v337 )
    {
      v338 = GetProcessHeap();
      HeapFree(v338, 0, v337);
      v332[5] = 0LL;
    }
    v339 = GetProcessHeap();
    HeapFree(v339, 0, v332);
    v8 = 0LL;
  }
  v340 = (wchar_t *)psza;
  if ( psza )
  {
    v341 = GetProcessHeap();
    HeapFree(v341, 0, v340);
    v8 = 0LL;
  }
  if ( v10 < 0 )
    goto LABEL_442;
  if ( !(_DWORD)v812 )
    goto LABEL_618;
  if ( *((unsigned __int8 **)&v812 + 1) == v8 || (unsigned int)v812 <= (unsigned int)v8 )
  {
    v10 = -1073741811;
    LODWORD(v781) = -1073741811;
  }
  else
  {
    pcchLength = *((_QWORD *)&v812 + 1);
    LODWORD(v781) = RtlULongLongAdd(*((unsigned __int64 *)&v812 + 1), 4LL, &pcchLength);
    v10 = (int)v781;
    if ( (int)v781 < 0 )
    {
      v342 = v854;
      v343 = v892;
    }
    else
    {
      v343 = (int *)pcchLength;
      v854 = v342;
      if ( !v342 )
        v343 = (int *)v8;
      v892 = v343;
    }
    if ( (int)v781 < 0 )
      goto LABEL_442;
    if ( v342 != 4 )
      goto LABEL_621;
    v815 = *v343;
  }
  if ( v10 < 0 )
    goto LABEL_442;
  v10 = v815;
  if ( v815 == -805306333 )
    v10 = -2147024774;
  LODWORD(v781) = v10;
  v815 = v10;
  if ( v10 != -2147024774 && v10 < 0 )
    goto LABEL_442;
  if ( (_DWORD)v812 != 6 )
  {
LABEL_618:
    v10 = -1073425151;
    goto LABEL_441;
  }
  if ( *((unsigned __int8 **)&v812 + 1) == v8 )
  {
    v10 = -1073741811;
    LODWORD(v781) = -1073741811;
    goto LABEL_388;
  }
  v344 = (void *)*((_QWORD *)&v812 + 1);
  m = (void *)*((_QWORD *)&v812 + 1);
  do
  {
    LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v344, 4LL, &m);
    v10 = (int)v781;
    if ( (int)v781 < 0 )
    {
      v8 = 0LL;
      goto LABEL_624;
    }
    v346 = RtlULongLongAdd((unsigned __int64)m, v345, &m);
    v8 = 0LL;
    LODWORD(v781) = v346;
    v10 = v346;
    if ( v346 < 0 )
      goto LABEL_624;
    v344 = m;
  }
  while ( v347 == -1 );
  LODWORD(v781) = RtlULongLongAdd((unsigned __int64)m, 4LL, &m);
  v10 = (int)v781;
  if ( (int)v781 < 0 )
  {
LABEL_624:
    v348 = v855;
    v349 = v893;
    goto LABEL_385;
  }
  v349 = m;
  v855 = v348;
  if ( !v348 )
    v349 = v8;
  v893 = v349;
LABEL_385:
  if ( v10 < 0 )
    goto LABEL_442;
  if ( v348 != 8 )
    goto LABEL_621;
  v898 = *v349;
LABEL_388:
  if ( v10 < 0 )
    goto LABEL_442;
  if ( *((unsigned __int8 **)&v812 + 1) == v8 )
  {
    v10 = -1073741811;
    LODWORD(v781) = -1073741811;
LABEL_401:
    if ( v10 < 0 )
      goto LABEL_442;
    if ( *((unsigned __int8 **)&v812 + 1) == v8 )
    {
      v10 = -1073741811;
      goto LABEL_441;
    }
    v356 = (void *)*((_QWORD *)&v812 + 1);
    m = (void *)*((_QWORD *)&v812 + 1);
    while ( 1 )
    {
      LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v356, 4LL, &m);
      v10 = (int)v781;
      if ( (int)v781 < 0 )
        break;
      LODWORD(v781) = RtlULongLongAdd((unsigned __int64)m, v357, &m);
      v10 = (int)v781;
      if ( (int)v781 < 0 )
        break;
      v356 = m;
      if ( (unsigned int)(v358 + 1) >= 3 )
      {
        LODWORD(v781) = RtlULongLongAdd((unsigned __int64)m, 4LL, &m);
        v10 = (int)v781;
        if ( (int)v781 >= 0 )
        {
          v360 = m;
          v857 = v359;
          if ( !v359 )
            v360 = 0LL;
          v895 = v360;
        }
        break;
      }
    }
    if ( v10 < 0 )
      goto LABEL_635;
    v361 = (unsigned int *)*((_QWORD *)&v812 + 1);
    m = (void *)*((_QWORD *)&v812 + 1);
    do
    {
      v362 = *v361;
      LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v361, 4LL, &m);
      v10 = (int)v781;
      if ( (int)v781 < 0 )
        goto LABEL_630;
      LODWORD(v781) = RtlULongLongAdd((unsigned __int64)m, v362, &m);
      v10 = (int)v781;
      if ( (int)v781 < 0 )
        goto LABEL_630;
      v361 = (unsigned int *)m;
    }
    while ( (unsigned int)(v363 + 1) < 4 );
    LODWORD(v781) = RtlULongLongAdd((unsigned __int64)m, 4LL, &m);
    v10 = (int)v781;
    if ( (int)v781 < 0 )
    {
LABEL_630:
      v364 = v858;
      v365 = v896;
      goto LABEL_420;
    }
    v365 = (unsigned int *)m;
    v858 = v364;
    if ( !v364 )
      v365 = 0LL;
    v896 = v365;
LABEL_420:
    if ( v10 < 0 )
    {
      v366 = v860;
    }
    else
    {
      if ( v364 != 4 )
        goto LABEL_631;
      v366 = *v365;
      v860 = *v365;
    }
    if ( v10 < 0 )
      goto LABEL_635;
    v367 = (unsigned int *)*((_QWORD *)&v812 + 1);
    m = (void *)*((_QWORD *)&v812 + 1);
    do
    {
      v368 = *v367;
      LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v367, 4LL, &m);
      v10 = (int)v781;
      if ( (int)v781 < 0 )
        goto LABEL_637;
      LODWORD(v781) = RtlULongLongAdd((unsigned __int64)m, v368, &m);
      v10 = (int)v781;
      if ( (int)v781 < 0 )
        goto LABEL_637;
      v367 = (unsigned int *)m;
    }
    while ( (unsigned int)(v371 + 1) < 5 );
    LODWORD(v781) = RtlULongLongAdd((unsigned __int64)m, 4LL, &m);
    v10 = (int)v781;
    if ( (int)v781 < 0 )
    {
LABEL_637:
      v372 = v861;
      v373 = v897;
      goto LABEL_432;
    }
    v373 = m;
    v861 = v372;
    if ( !v372 )
      v373 = 0LL;
    v897 = v373;
LABEL_432:
    if ( v10 < 0 )
    {
      v374 = v848;
LABEL_435:
      if ( v10 >= 0 )
      {
        if ( v874 == v898 )
        {
          v843 = v862;
          v842 = v366;
          v821 = v374;
          if ( v366 <= 4 && v369 <= 4 )
          {
            memcpy_0(v873, v370, v369);
            v8 = 0LL;
            if ( v815 )
              v10 = v815;
            goto LABEL_441;
          }
          v10 = -2147024774;
          LODWORD(v781) = -2147024774;
          goto LABEL_635;
        }
        v10 = -1073425151;
        goto LABEL_633;
      }
LABEL_635:
      v8 = 0LL;
      goto LABEL_442;
    }
    if ( v372 == 4 )
    {
      v374 = *v373;
      v848 = *v373;
      goto LABEL_435;
    }
LABEL_631:
    v10 = -1073741789;
LABEL_633:
    LODWORD(v781) = v10;
    goto LABEL_635;
  }
  v350 = (void *)*((_QWORD *)&v812 + 1);
  m = (void *)*((_QWORD *)&v812 + 1);
  do
  {
    LODWORD(v781) = RtlULongLongAdd((unsigned __int64)v350, 4LL, &m);
    v10 = (int)v781;
    if ( (int)v781 < 0 )
    {
      v8 = 0LL;
      goto LABEL_627;
    }
    v352 = RtlULongLongAdd((unsigned __int64)m, v351, &m);
    v8 = 0LL;
    LODWORD(v781) = v352;
    v10 = v352;
    if ( v352 < 0 )
      goto LABEL_627;
    v350 = m;
  }
  while ( (unsigned int)(v353 + 1) < 2 );
  LODWORD(v781) = RtlULongLongAdd((unsigned __int64)m, 4LL, &m);
  v10 = (int)v781;
  if ( (int)v781 < 0 )
  {
LABEL_627:
    v354 = v856;
    v355 = v894;
    goto LABEL_398;
  }
  v355 = m;
  v856 = v354;
  if ( !v354 )
    v355 = v8;
  v894 = v355;
LABEL_398:
  if ( v10 >= 0 )
  {
    if ( v354 == 4 )
    {
      v862 = *v355;
      goto LABEL_401;
    }
LABEL_621:
    v10 = -1073741789;
LABEL_441:
    LODWORD(v781) = v10;
  }
LABEL_442:
  v4 = v782;
LABEL_443:
  v5 = v783;
LABEL_444:
  *(_QWORD *)&v786 = 0LL;
  v375 = (void *)*((_QWORD *)&v786 + 1);
  if ( *((_QWORD *)&v786 + 1) )
  {
    v376 = GetProcessHeap();
    HeapFree(v376, 0, v375);
    v8 = 0LL;
    *((_QWORD *)&v786 + 1) = 0LL;
  }
  *(_QWORD *)&v812 = 0LL;
  v377 = (void *)*((_QWORD *)&v812 + 1);
  if ( *((_QWORD *)&v812 + 1) )
  {
    v378 = GetProcessHeap();
    HeapFree(v378, 0, v377);
    v8 = 0LL;
    *((_QWORD *)&v812 + 1) = 0LL;
  }
  if ( v4 )
  {
    v379 = GetProcessHeap();
    HeapFree(v379, 0, v4);
    v8 = 0LL;
  }
  if ( v5 )
  {
    v380 = GetProcessHeap();
    HeapFree(v380, 0, v5);
    v8 = 0LL;
  }
  if ( v10 < 0 )
    goto LABEL_1046;
  if ( v821 == (_DWORD)v8 )
    goto LABEL_454;
  v782 = v8;
  *(_QWORD *)((char *)&v797 + 4) = 0LL;
  v441 = v8;
  HIDWORD(v797) = 0;
  v442 = v8;
  *(_QWORD *)((char *)&v835 + 4) = 0LL;
  HIDWORD(v835) = 0;
  LODWORD(v797) = (_DWORD)v8;
  LODWORD(v835) = (_DWORD)v8;
  v831 = (int)v8;
  v899 = &unk_1800B7530;
  v875 = 160LL;
  v443 = GetProcessHeap();
  v444 = HeapAlloc(v443, 8u, 0xA0uLL);
  v8 = 0LL;
  v445 = v444;
  if ( !v444 )
    goto LABEL_1036;
  memcpy_0(v444, v899, v875);
  v446 = (unsigned int)v875;
  v441 = v445;
  v783 = v445;
  v876 = 8LL;
  v900 = &unk_1800B7478;
  v447 = GetProcessHeap();
  v448 = HeapAlloc(v447, 8u, 8uLL);
  v8 = 0LL;
  v449 = v448;
  if ( !v448 )
    goto LABEL_1035;
  memcpy_0(v448, v900, v876);
  v450 = v876;
  v782 = v449;
  v901 = __rdtsc();
  LODWORD(dwBytes) = 0;
  if ( (int)RtlUIntAdd(4u, 4, &m) < 0 )
    goto LABEL_683;
  v822 = (int)m;
  if ( (int)RtlUIntAdd(0, (int)m, &dwBytes) < 0 )
    goto LABEL_683;
  if ( (int)RtlUIntAdd(v451, v446, &m) < 0 )
    goto LABEL_683;
  v822 = (int)m;
  v452 = RtlUIntAdd(dwBytes, (int)m, &dwBytes);
  if ( (v454 | v452) < 0 )
    goto LABEL_683;
  if ( (int)RtlUIntAdd(v453, v450, &m) < 0 )
    goto LABEL_683;
  v822 = (int)m;
  v455 = RtlUIntAdd(dwBytes, (int)m, &dwBytes);
  if ( (v457 | v455) < 0 )
    goto LABEL_683;
  if ( (int)RtlUIntAdd(v456, (int)v8 + 8, &m) < 0 )
    goto LABEL_683;
  v822 = (int)m;
  v458 = RtlUIntAdd(dwBytes, (int)m, &dwBytes);
  if ( (v459 | v458) < 0 )
    goto LABEL_683;
  DWORD1(v797) = dwBytes;
  v460 = dwBytes;
  v461 = GetProcessHeap();
  v462 = HeapAlloc(v461, 8u, v460);
  v8 = 0LL;
  if ( !v462 )
    goto LABEL_683;
  *((_QWORD *)&v797 + 1) = v462;
  LODWORD(v797) = 0;
  v463 = 4;
  v836 = 4;
  if ( &v836 )
  {
    v464 = RtlULongLongAdd((unsigned __int64)v462, 4LL, &v806);
    if ( v464 >= 0 && v465 + 2 <= (unsigned int *)((char *)v465 + DWORD1(v797)) )
    {
      v466 = v806;
      *v465 = v463;
      *v466 = v836;
      LODWORD(v797) = v797 + 1;
      goto LABEL_655;
    }
    goto LABEL_683;
  }
  v464 = -1073741811;
LABEL_655:
  if ( v464 < 0 )
  {
LABEL_683:
    v441 = v445;
    v442 = v449;
    goto LABEL_1036;
  }
  if ( !(_DWORD)v446 )
  {
    v472 = -1073741811;
    goto LABEL_669;
  }
  if ( *((unsigned __int8 **)&v797 + 1) != v8 )
  {
    v467 = (int *)*((_QWORD *)&v797 + 1);
    psza = (STRSAFE_PCNZWCH)*((_QWORD *)&v797 + 1);
    if ( (_DWORD)v797 )
    {
      while ( (int)RtlUIntAdd(4u, *v467, &m) >= 0 )
      {
        v863 = (int)m;
        if ( (int)RtlULongLongAdd(v468, (unsigned int)m, &psza) < 0 )
        {
LABEL_682:
          v8 = 0LL;
          goto LABEL_683;
        }
        v467 = (int *)psza;
        if ( v469 + 1 >= (unsigned int)v797 )
          goto LABEL_665;
      }
      goto LABEL_1045;
    }
LABEL_665:
    v470 = RtlULongLongAdd((unsigned __int64)v467, 4LL, &v806);
    v8 = 0LL;
    v472 = v470;
    if ( v470 < 0 || (unsigned __int64)v471 + v446 + 4 > *((_QWORD *)&v797 + 1) + (unsigned __int64)DWORD1(v797) )
      goto LABEL_683;
    v473 = v806;
    *v471 = v446;
    memcpy_0(v473, v445, v446);
    LODWORD(v797) = v797 + 1;
    v8 = 0LL;
    v463 = 4;
LABEL_669:
    if ( v472 < 0 )
      goto LABEL_683;
    goto LABEL_670;
  }
  if ( (int)RtlUIntAdd(v463, v446, &m) < 0 )
    goto LABEL_683;
  v863 = (int)m;
  if ( (int)RtlUIntAdd(DWORD1(v797), (int)m, (_DWORD *)&v797 + 1) < 0 )
    goto LABEL_683;
  LODWORD(v797) = v797 + 1;
LABEL_670:
  if ( !v450 )
  {
    v480 = -1073741811;
    goto LABEL_685;
  }
  if ( *((unsigned __int8 **)&v797 + 1) != v8 )
  {
    v475 = (int *)*((_QWORD *)&v797 + 1);
    psza = (STRSAFE_PCNZWCH)*((_QWORD *)&v797 + 1);
    if ( (_DWORD)v797 )
    {
      while ( (int)RtlUIntAdd(4u, *v475, &m) >= 0 )
      {
        v865 = (int)m;
        if ( (int)RtlULongLongAdd(v476, (unsigned int)m, &psza) < 0 )
          goto LABEL_682;
        v475 = (int *)psza;
        if ( v477 + 1 >= (unsigned int)v797 )
          goto LABEL_679;
      }
      goto LABEL_1045;
    }
LABEL_679:
    v478 = RtlULongLongAdd((unsigned __int64)v475, 4LL, &v806);
    v8 = 0LL;
    v480 = v478;
    if ( v478 < 0 || (unsigned __int64)v479 + v450 + 4 > *((_QWORD *)&v797 + 1) + (unsigned __int64)DWORD1(v797) )
      goto LABEL_683;
    v481 = v806;
    *v479 = v450;
    memcpy_0(v481, v449, v450);
    LODWORD(v797) = v797 + 1;
    v8 = 0LL;
LABEL_685:
    if ( v480 < 0 )
      goto LABEL_683;
    v474 = 4;
    goto LABEL_687;
  }
  if ( (int)RtlUIntAdd(v463, v450, &m) < 0 )
    goto LABEL_683;
  v865 = (int)m;
  if ( (int)RtlUIntAdd(DWORD1(v797), (int)m, (_DWORD *)&v797 + 1) < 0 )
    goto LABEL_683;
  LODWORD(v797) = v797 + 1;
LABEL_687:
  v877 = v901;
  if ( !&v877 )
  {
    v485 = -1073741811;
    goto LABEL_700;
  }
  if ( *((unsigned __int8 **)&v797 + 1) != v8 )
  {
    v482 = (int *)*((_QWORD *)&v797 + 1);
    psza = (STRSAFE_PCNZWCH)*((_QWORD *)&v797 + 1);
    if ( (_DWORD)v797 )
    {
      while ( (int)RtlUIntAdd(4u, *v482, &m) >= 0 )
      {
        v866 = (int)m;
        if ( (int)RtlULongLongAdd(v483, (unsigned int)m, &psza) < 0 )
          break;
        v482 = (int *)psza;
        if ( v484 + 1 >= (unsigned int)v797 )
          goto LABEL_696;
      }
LABEL_1045:
      v441 = v445;
      v442 = v449;
      v8 = 0LL;
      goto LABEL_1036;
    }
LABEL_696:
    v485 = RtlULongLongAdd((unsigned __int64)v482, 4LL, &v806);
    v8 = 0LL;
    if ( v485 < 0 || (unsigned __int64)(v486 + 3) > *((_QWORD *)&v797 + 1) + (unsigned __int64)DWORD1(v797) )
      goto LABEL_683;
    v487 = v806;
    *v486 = 8;
    *v487 = v877;
    LODWORD(v797) = v797 + 1;
LABEL_700:
    if ( v485 < 0 )
      goto LABEL_683;
    goto LABEL_701;
  }
  if ( (int)RtlUIntAdd(v474, 8, &m) < 0 )
    goto LABEL_683;
  v866 = (int)m;
  if ( (int)RtlUIntAdd(DWORD1(v797), (int)m, (_DWORD *)&v797 + 1) < 0 )
    goto LABEL_683;
  LODWORD(v797) = v797 + 1;
LABEL_701:
  if ( (int)RtlUIntAdd(v474, v474, &m) < 0 )
    goto LABEL_683;
  v867 = (int)m;
  LODWORD(v787) = (_DWORD)m;
  if ( (int)RtlUIntAdd(v488, 8, &m) < 0 )
    goto LABEL_683;
  v867 = (int)m;
  if ( (int)RtlUIntAdd(v489, (int)m, &v787) < 0 )
    goto LABEL_683;
  v490 = (size_t)v8;
  v850 = v8;
  v785 = (size_t)v8;
  v491 = (unsigned int)v8;
  psza = (STRSAFE_PCNZWCH)v8;
  v492 = v8;
  LODWORD(m) = (_DWORD)v8;
  v816 = v8;
  v800 = (unsigned int)v8;
  v825 = v8;
  v826 = v8;
  v810 = (unsigned int)v8;
  v878 = __rdtsc();
  v809 = 8;
  v493 = RtlUIntAdd(8u, SDWORD1(v797), &v809);
  if ( v493 >= 0 )
  {
    v494 = (v809 + 7) & 0xFFFFFFF8;
    if ( v494 >= v809 )
    {
      v809 = (v809 + 7) & 0xFFFFFFF8;
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
            *(_QWORD *)&v498[v809 - 8] = v878;
            memcpy_0(v788, *((const void **)&v797 + 1), DWORD1(v797));
            v491 = v809;
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
    goto LABEL_991;
  v904 = (__int64 *)v8;
  v503 = v8;
  v905 = (__int64)v8;
  v906 = v8;
  v907 = (__int64)v8;
  v864 = v8;
  v903 = (SIZE_T)v8;
  v804 = (SIZE_T)v8;
  if ( v490 )
  {
    v505 = v491;
    pcchLength = v491;
    if ( v491 && (v805 = v491 + 8LL, v506 = MemoryAlloc(v805), v8 = 0LL, v814 = v506, (v507 = v506) != 0LL) )
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
      LODWORD(v788) = 0;
      v792 = -1;
      LODWORD(dwBytes) = 0;
      v512 = 0;
      v796 = 0;
      v513 = v507;
      v514 = v505 & 7;
      if ( (v505 & 7) != 0 )
      {
        LODWORD(v788) = 0;
        LODWORD(dwBytes) = 0;
        v515 = 0;
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
        v512 = v519 ^ 0xB17A307A;
        v520 = v515 ^ 0x42F6B18D;
        v796 = v519 ^ 0xB17A307A;
        v521 = 0;
        v792 = v515 ^ 0x42F6B18D;
        if ( (v505 & 7) != 0 )
        {
          do
          {
            if ( v521 >= 4 )
            {
              v520 = __ROL4__(v520, 8);
              *v513 = v520;
            }
            else
            {
              v512 = __ROL4__(v512, 8);
              *v513 = v512;
            }
            ++v513;
            ++v521;
          }
          while ( v521 < v514 );
          v512 = v796;
          v520 = v792;
        }
        v522 = v514 - 4;
        if ( v522 <= 0 )
        {
          v511 = 0;
          v792 = 0;
          if ( v522 < 0 )
          {
            v512 = v512 >> (-8 * v522) << (-8 * v522);
            v796 = v512;
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
        v525 = v513 + 7;
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
          v533 = v512 ^ v528 ^ (v532 - 19032) ^ 0xC81ECB17;
          v534 = (__ROR4__(v533, 7) + 45493 * __ROR4__(v512 ^ v528 ^ (v532 - 19032), 15)) ^ v532;
          v535 = (51991 * __ROR4__(v534 - 1313519016, 9) - __ROR4__(v534, 10)) ^ v533;
          v536 = (__ROL4__(v535, 5) + 51230 * __ROL4__(v535 ^ 0xCB17, 4)) ^ v534;
          v537 = (-937506025 - (v536 ^ 0xB1B54A58)) ^ v535;
          v538 = (45493 * (v537 - 19032) - (v537 >> 6)) ^ v536;
          v539 = (19032 * (__ROR4__(v538, 15) ^ 0xCB17)) ^ v537;
          v540 = (51991 * (__ROR4__(~v539, 3) + 51230)) ^ v538;
          v541 = (v540 + 937486993) ^ v539;
          v542 = (45493 * (v541 ^ 0xC81E)) ^ __ROR4__(v541, 10) ^ v540;
          v543 = __ROR4__(v542, 3) ^ (51991 * __ROL4__(v542 ^ 0x4A58, 6)) ^ v541;
          v544 = (19032 * (__ROR4__(v543, 15) - 51230)) ^ v542;
          v545 = (v544 >> 15) ^ (19032 * __ROL4__(v544 - 51991, 3)) ^ (v544 >> 1) ^ (19032 * (v544 ^ 0xC81E)) ^ v543;
          v546 = (45493 * (v545 - 51991) - (v545 >> 13)) ^ v544;
          v547 = __ROR4__(v546, 11) ^ (51991 * __ROR4__(-1313519016 - v546, 9)) ^ v545;
          v548 = (v547 + 1313467786) ^ v546;
          v549 = (19032 * (v548 ^ 0xB1B5) - __ROR4__(v548, 7)) ^ v547;
          v550 = (45493 * __ROL4__(v549 ^ 0xC81E, 4) - __ROR4__(v549, 16)) ^ v548;
          v551 = (__ROR4__(v550, 4) + 51991 * __ROR4__(-1313519016 - v550, 10)) ^ v549;
          v552 = __ROR4__(v551, 9) ^ (51230 * __ROR4__(v551 + 1313519016, 4)) ^ v550;
          v553 = (19032 * __ROL4__(v552 ^ 0xC81ECB17, 8) - __ROL4__(v552, 2)) ^ v551;
          v554 = (45493 * __ROR4__(-937506025 - v553, 11) - __ROR4__(v553, 12)) ^ v552;
          v555 = (v554 >> 8) ^ (51991 * (v554 ^ 0xB1B5)) ^ v553;
          v796 = v526 ^ v555;
          v526 = v528;
          v792 = v524 ^ v555 ^ v554 ^ 0x79AB814F;
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
          v512 = __ROR4__(v796, 8);
          v511 = __ROR4__(v792, 8);
          v796 = v512;
          v792 = v511;
          --v523;
        }
        while ( v523 );
        v508 = v784;
        v503 = (_QWORD *)v804;
        v505 = pcchLength;
        v507 = v814;
      }
      *(_QWORD *)&v507[v505] = v508;
      v556 = v805;
      v903 = v805;
      v864 = v507;
      v904 = &qword_1800B7520;
      v905 = 8LL;
      v907 = 160LL;
      v906 = (unsigned __int8 *)xmmword_1800B7480;
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
          goto LABEL_749;
        *((_QWORD *)v559 + 1) = v561;
        memcpy_0(v561, v507, v556);
        v559[4] = 160;
        v562 = GetProcessHeap();
        v563 = HeapAlloc(v562, 8u, 0xA0uLL);
        v8 = 0LL;
        if ( !v563 )
          goto LABEL_749;
        *((_QWORD *)v559 + 3) = v563;
        *v563 = xmmword_1800B7480[0];
        v563[1] = xmmword_1800B7480[1];
        v563[2] = xmmword_1800B7480[2];
        v563[3] = xmmword_1800B7480[3];
        v563[4] = xmmword_1800B7480[4];
        v563[5] = xmmword_1800B7480[5];
        v563[6] = xmmword_1800B7480[6];
        v563[7] = xmmword_1800B7480[7];
        v563[8] = xmmword_1800B7480[8];
        v563[9] = xmmword_1800B7480[9];
        v559[8] = 8;
        v564 = GetProcessHeap();
        v565 = HeapAlloc(v564, 8u, 8uLL);
        v8 = 0LL;
        if ( v565 )
        {
          *((_QWORD *)v559 + 5) = v565;
          v503 = v559;
          *v565 = qword_1800B7520;
          v504 = 0;
          v559 = 0LL;
        }
        else
        {
LABEL_749:
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
      v492 = v816;
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
    v573 = v864;
    if ( v864 )
    {
      v574 = GetProcessHeap();
      HeapFree(v574, 0, v573);
      v8 = 0LL;
      v864 = 0LL;
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
    goto LABEL_991;
  v582 = (const void **)v850;
  LODWORD(dwBytes) = 4;
  v583 = RtlUIntAdd(4u, *(_DWORD *)v850, &dwBytes);
  if ( v583 < 0
    || (v583 = RtlUIntAdd(dwBytes, 4, &dwBytes), v583 < 0)
    || (v583 = RtlUIntAdd(dwBytes, *((_DWORD *)v582 + 4), &dwBytes), v583 < 0)
    || (v583 = RtlUIntAdd(dwBytes, 4, &dwBytes), v583 < 0) )
  {
    v584 = v830;
  }
  else
  {
    v583 = RtlUIntAdd(dwBytes, *((_DWORD *)v582 + 8), &dwBytes);
    v584 = v830;
    if ( v583 >= 0 )
      v584 = dwBytes;
    v830 = v584;
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
                  LODWORD(m) = v830;
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
    goto LABEL_991;
  v595 = (int)v8;
  v908 = v8;
  v869 = (int)v8;
  v868 = (int)v8;
  v909 = v8;
  v829 = 8;
  v596 = RtlUIntAdd(8u, (int)v787, &v829);
  v502 = v596 | 0x10000000;
  if ( v596 >= 0 )
  {
    v598 = (v829 + 7) & 0xFFFFFFF8;
    if ( v598 >= v829 )
    {
      v837 = (v829 + 7) & 0xFFFFFFF8;
      v599 = RtlUIntAdd(v598, v597, &v837);
      v600 = v838;
      v502 = v599;
      if ( v599 >= 0 )
        v600 = v837;
      v838 = v600;
    }
    else
    {
      v502 = -1073741675;
    }
    if ( v502 < 0 )
      goto LABEL_991;
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
          goto LABEL_811;
        v502 = RtlULongLongAdd((unsigned __int64)v787, v602, &v787);
        if ( v502 < 0 )
          goto LABEL_811;
        v601 = (unsigned int *)v787;
      }
      while ( v603 == -1 );
      v502 = RtlULongLongAdd((unsigned __int64)v787, 4LL, &v787);
      if ( v502 < 0 )
      {
LABEL_811:
        v8 = 0LL;
        goto LABEL_812;
      }
      v605 = (unsigned __int8 *)v787;
      v868 = v604;
      if ( !v604 )
        v605 = 0LL;
      v8 = 0LL;
      v908 = v605;
LABEL_812:
      if ( v502 >= 0 )
      {
        if ( (unsigned int)v797 <= 2 )
        {
          v502 = -1073741811;
          goto LABEL_815;
        }
        v610 = (unsigned int *)*((_QWORD *)&v797 + 1);
        v787 = (void *)*((_QWORD *)&v797 + 1);
        do
        {
          v611 = *v610;
          v502 = RtlULongLongAdd((unsigned __int64)v610, 4LL, &v787);
          if ( v502 < 0 )
            goto LABEL_826;
          v502 = RtlULongLongAdd((unsigned __int64)v787, v611, &v787);
          if ( v502 < 0 )
            goto LABEL_826;
          v610 = (unsigned int *)v787;
        }
        while ( (unsigned int)(v613 + 1) < 2 );
        v502 = RtlULongLongAdd((unsigned __int64)v787, 4LL, &v787);
        if ( v502 < 0 )
        {
LABEL_826:
          v8 = 0LL;
          goto LABEL_827;
        }
        v615 = (unsigned __int8 *)v787;
        v211 = v614 == 0;
        v595 = v614;
        v8 = 0LL;
        if ( v211 )
          v615 = 0LL;
        v869 = v595;
        v909 = v615;
LABEL_827:
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
              v800 = v617;
              goto LABEL_815;
            }
            v502 = -2147418113;
          }
        }
        goto LABEL_991;
      }
    }
  }
LABEL_815:
  if ( v502 >= 0 )
  {
    v606 = v800;
    v607 = (int)v8;
    v608 = GetProcessHeap();
    v609 = HeapAlloc(v608, 8u, v606);
    v8 = 0LL;
    if ( v609 )
    {
      v492 = v609;
      v816 = v609;
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
        goto LABEL_991;
      }
      v915[0] = psza;
      v916 = (int)m;
      v917 = v800;
      v915[1] = v492;
      v918 = 0;
      if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
        && (v618 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
      {
        v619 = ((__int64 (__fastcall *)(__int64, _QWORD *))v618)(134LL, v915);
        v620 = v800;
        v502 = v619 | 0x10000000;
        if ( v619 >= 0 )
          v620 = v917;
        v800 = v620;
      }
      else
      {
        v621 = GetLastError();
        v502 = v621;
        if ( v621 > 0 )
          v502 = (unsigned __int16)v621 | 0x80070000;
        if ( v502 >= 0 )
          v502 = -2147467259;
        v620 = v800;
      }
      v8 = 0LL;
      if ( v502 == -805306333 )
      {
        v502 = -2147024774;
        goto LABEL_991;
      }
      if ( v502 >= 0 )
      {
        LODWORD(dwBytes) = 0;
        v622 = 0LL;
        v787 = v492;
        if ( v620 < 4 )
        {
          v623 = -1073741762;
          goto LABEL_914;
        }
        LODWORD(m) = *v492;
        v623 = RtlULongLongAdd((unsigned __int64)v492, 4LL, &v787);
        if ( v623 < 0 || (v623 = RtlUIntAdd(0, v624, &dwBytes), v623 < 0) )
        {
LABEL_913:
          v8 = 0LL;
        }
        else
        {
          if ( v625 - (int)dwBytes < (unsigned int)v626 )
            goto LABEL_880;
          v814 = v787;
          pcchLength = v626;
          v623 = RtlULongLongAdd((unsigned __int64)v787, (unsigned int)v626, &v787);
          if ( v623 < 0 )
            goto LABEL_913;
          v623 = RtlUIntAdd(dwBytes, v627, &dwBytes);
          if ( v623 < 0 )
            goto LABEL_913;
          if ( (unsigned int)(v628 - dwBytes) < 4 )
            goto LABEL_880;
          v629 = *(unsigned int *)v787;
          v623 = RtlULongLongAdd((unsigned __int64)v787, 4LL, &v787);
          if ( v623 < 0 )
            goto LABEL_913;
          v623 = RtlUIntAdd(dwBytes, v630, &dwBytes);
          if ( v623 < 0 )
            goto LABEL_913;
          if ( v631 - (int)dwBytes < (unsigned int)v629 )
            goto LABEL_880;
          v788 = v787;
          v623 = RtlULongLongAdd((unsigned __int64)v787, (unsigned int)v629, &v787);
          if ( v623 < 0 )
            goto LABEL_913;
          v623 = RtlUIntAdd(dwBytes, v632, &dwBytes);
          if ( v623 < 0 )
            goto LABEL_913;
          if ( (unsigned int)(v633 - dwBytes) < 4 )
            goto LABEL_880;
          v634 = *(unsigned int *)v787;
          v623 = RtlULongLongAdd((unsigned __int64)v787, 4LL, &v787);
          if ( v623 < 0 )
            goto LABEL_913;
          v623 = RtlUIntAdd(dwBytes, v635, &dwBytes);
          if ( v623 < 0 )
            goto LABEL_913;
          if ( v636 - (int)dwBytes < (unsigned int)v634 )
            goto LABEL_880;
          v623 = RtlUIntAdd(dwBytes, v634, &dwBytes);
          if ( v623 < 0 )
            goto LABEL_913;
          if ( v637 != (_DWORD)dwBytes || (unsigned int)(v638 + v634 + v629) + 12LL != v637 )
          {
LABEL_880:
            v623 = -1073741762;
            goto LABEL_913;
          }
          v639 = GetProcessHeap();
          v640 = HeapAlloc(v639, 8u, 0x30uLL);
          v8 = 0LL;
          v641 = v640;
          if ( !v640 )
          {
            v623 = -1073741801;
            goto LABEL_903;
          }
          v623 = 0;
          if ( v814 )
          {
            *(_DWORD *)v640 = (_DWORD)m;
            v642 = GetProcessHeap();
            v643 = HeapAlloc(v642, 8u, pcchLength);
            v8 = 0LL;
            if ( v643 )
            {
              v641[1] = v643;
              memcpy_0(v643, v814, pcchLength);
              v8 = 0LL;
              goto LABEL_886;
            }
LABEL_884:
            v623 = -1073741801;
          }
          else
          {
            *(_DWORD *)v640 = 0;
            v640[1] = 0LL;
LABEL_886:
            if ( v788 )
            {
              *((_DWORD *)v641 + 4) = v629;
              v644 = GetProcessHeap();
              v645 = HeapAlloc(v644, 8u, v629);
              v8 = 0LL;
              if ( !v645 )
                goto LABEL_884;
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
                goto LABEL_884;
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
LABEL_903:
          if ( v623 >= 0 )
          {
            v825 = v622;
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
            goto LABEL_913;
          }
        }
LABEL_914:
        v502 = v623 | 0x10000000;
        if ( v502 < 0 )
          goto LABEL_991;
        v663 = 0LL;
        v833 = 0LL;
        v664 = 0;
        v879 = 0LL;
        LODWORD(m) = 0;
        if ( !v825 || (v665 = (unsigned __int8 *)*((_QWORD *)v825 + 1), (v814 = v665) == 0LL) || !*(_DWORD *)v825 )
        {
          v664 = -1073741811;
          goto LABEL_956;
        }
        v666 = *(unsigned int *)v825;
        LODWORD(v787) = 0;
        if ( v666 )
        {
          v667 = v666 - 8;
          pcchLength = v667;
          v668 = MemoryAlloc(v667);
          v8 = 0LL;
          v804 = (SIZE_T)v668;
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
              v794 = 0;
              v675 = 0;
              v803 = 0;
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
              v803 = v674;
              LODWORD(v788) = v675;
              v679 = v675 ^ 0x92F65A5;
              v680 = v674 ^ 0x699A899C;
              v794 = v679;
              v790 = v680;
              v681 = 0;
              if ( (v667 & 7) != 0 )
              {
                do
                {
                  if ( v681 >= 4 )
                  {
                    v680 = __ROL4__(v680, 8);
                    *v672 = v680;
                  }
                  else
                  {
                    v679 = __ROL4__(v679, 8);
                    *v672 = v679;
                  }
                  ++v672;
                  ++v681;
                }
                while ( v681 < v673 );
                v679 = v794;
                v680 = v790;
              }
              v682 = v673 - 4;
              if ( v673 - 4 > 0 )
              {
                v683 = v680 >> (8 * (4 - v682)) << (8 * (4 - v682));
                v790 = v683;
                goto LABEL_939;
              }
              v790 = 0;
              v683 = 0;
              if ( v682 < 0 )
              {
                v679 = v679 >> (-8 * v682) << (-8 * v682);
                goto LABEL_938;
              }
            }
            else
            {
              LODWORD(v788) = 0;
              v683 = 0;
              v790 = 0;
              v679 = 0;
LABEL_938:
              v794 = v679;
            }
LABEL_939:
            v684 = v667 >> 3;
            if ( v667 >> 3 )
            {
              v685 = (int)v788;
              v686 = v672 + 7;
              v687 = v803;
              v688 = v671 + 2;
              v689 = v684;
              do
              {
                v690 = *(v688 - 1) | (*(v688 - 2) << 8);
                v691 = v688[2] << 8;
                v692 = *v688;
                v688 += 8;
                v693 = *(v688 - 7) | ((v692 | (v690 << 8)) << 8);
                v694 = v693 ^ v679;
                v695 = *(v688 - 3) | ((*(v688 - 4) | ((*(v688 - 5) | v691) << 8)) << 8);
                v696 = v694 ^ v695 ^ v683 ^ 0xAC987321;
                v697 = (__ROL4__(v696, 10) + 4991 * __ROL4__(v696 + 1419157410, 5)) ^ v694;
                v698 = (43881 * __ROR4__(v697 + 133239679, 9) - __ROL4__(v697, 2)) ^ v696;
                v699 = (24670 * (v698 - 4991) - (v698 >> 13)) ^ v697;
                v700 = (2033 * __ROL4__(v699 ^ 0xAB69, 6) - __ROL4__(v699, 2)) ^ v698;
                v701 = (133239679 - (v700 ^ 0xAB69605E)) ^ v699;
                v702 = (43881 * (v701 ^ 0x137F)) ^ __ROR4__(v701, 6) ^ v700;
                v703 = (__ROL4__(v702, 2) + 24670 * __ROR4__(v702 + 133239679, 15)) ^ v701;
                v704 = (2033 * __ROR4__(v703 + 1419157410, 14) - __ROL4__(v703, 8)) ^ v702;
                v705 = __ROR4__(v704, 10) ^ (4991 * __ROR4__(v704 ^ 0xAB69605E, 12)) ^ v703;
                v706 = (v705 >> 10) ^ (43881 * (v705 ^ 0x7F1)) ^ v704;
                v707 = (2033 * (__ROR4__(~v706, 5) + 24670)) ^ v705;
                v708 = v706 ^ (v707 - 2033) ^ 0xAB69605E;
                v709 = ((v708 >> 2) + 4991 * __ROL4__(v706 ^ (v707 - 2033) ^ 0xAB6967AF, 2)) ^ v707;
                v710 = (__ROL4__(v709, 7) + 43881 * __ROR4__(v709 - 133239679, 6)) ^ v708;
                v711 = (24670 * (v710 ^ 0x137F) + __ROR4__(v710, 9)) ^ v709;
                v712 = (__ROL4__(v711, 7) + 2033 * __ROL4__(v711 ^ 0xAB69, 5)) ^ v710;
                v713 = v711 ^ v712 ^ 0xAC987321;
                v714 = (4991 * (__ROR4__(v713, 3) - 43881)) ^ v712;
                v715 = (24670 * __ROR4__(v714 - 133239679, 1) - __ROR4__(v714, 6)) ^ v713;
                v716 = (__ROL4__(v715, 14) + 2033 * __ROL4__(v715 - 1419157410, 3)) ^ v714;
                v717 = (4991 * __ROL4__(v716 - 1419157410, 15) - __ROR4__(v716, 14)) ^ v715;
                v718 = (v717 >> 3) ^ (43881 * (v717 ^ 0x605E)) ^ v716;
                v790 = v687 ^ v718;
                v687 = v695;
                v719 = v685 ^ __ROL4__(v718, 2) ^ (24670 * __ROL4__(v718 ^ 0x7F1137F, 4));
                v685 = v693;
                v794 = v719 ^ v717;
                *(v686 - 4) = v719 ^ v717;
                v794 = __ROR4__(v794, 8);
                *v686 = v790;
                v686 += 8;
                v790 = __ROR4__(v790, 8);
                *(v686 - 13) = v794;
                v794 = __ROR4__(v794, 8);
                *(v686 - 9) = v790;
                v790 = __ROR4__(v790, 8);
                *(v686 - 14) = v794;
                v794 = __ROR4__(v794, 8);
                *(v686 - 10) = v790;
                v790 = __ROR4__(v790, 8);
                *(v686 - 15) = v794;
                *(v686 - 11) = v790;
                v679 = __ROR4__(v794, 8);
                v683 = __ROR4__(v790, 8);
                v794 = v679;
                v790 = v683;
                --v689;
              }
              while ( v689 );
              v670 = v784;
              v10 = (int)v781;
              v664 = (int)m;
              v669 = (_BYTE *)v804;
              v667 = pcchLength;
            }
            v8 = 0LL;
            for ( k = 0LL; k < v667; ++k )
              v670 ^= v669[k];
            if ( v670 == *(_QWORD *)((char *)v814 + v667) )
            {
              v721 = (int)v787;
              v663 = v669;
              v833 = v669;
              v669 = 0LL;
              v879 = v667;
            }
            else
            {
              v663 = v833;
              v721 = -1073425151;
            }
            if ( v669 )
            {
              MemoryFree(v669);
              v663 = v833;
              v8 = 0LL;
            }
            if ( v721 >= 0 )
            {
              v826 = v663;
              v663 = 0LL;
              v833 = 0LL;
              v810 = v879;
LABEL_954:
              if ( v663 )
              {
                v722 = GetProcessHeap();
                HeapFree(v722, 0, v663);
                v8 = 0LL;
                v833 = 0LL;
              }
LABEL_956:
              v502 = v664 | 0x10000000;
              if ( v502 < 0 )
                goto LABEL_991;
              LODWORD(dwBytes) = 0;
              m = v826;
              if ( v810 < 4 )
                goto LABEL_989;
              LODWORD(v787) = *(_DWORD *)v826;
              v724 = RtlULongLongAdd((unsigned __int64)v826, 4LL, &m);
              if ( v724 >= 0 )
              {
                v724 = RtlUIntAdd(0, v723, &dwBytes);
                if ( v724 >= 0 )
                {
                  if ( v810 - (unsigned int)dwBytes < v726 )
                    goto LABEL_989;
                  v727 = *(unsigned int *)m;
                  v724 = RtlULongLongAdd((unsigned __int64)m, v725, &m);
                  if ( v724 >= 0 )
                  {
                    v724 = RtlUIntAdd(dwBytes, v728, &dwBytes);
                    if ( v724 >= 0 )
                    {
                      if ( v810 - (unsigned int)dwBytes < (unsigned int)v727 )
                        goto LABEL_989;
                      v724 = RtlUIntAdd(dwBytes, v727, &dwBytes);
                      if ( v724 >= 0 )
                      {
                        v731 = m;
                        if ( (unsigned __int64)v810 + v729 < (unsigned __int64)m + v727
                          || v729 + v810 - (_QWORD)m - v727 >= 8 )
                        {
                          goto LABEL_989;
                        }
                        v803 = (int)v730;
                        v732 = v730;
                        v724 = (int)v730;
                        if ( !m )
                          goto LABEL_979;
                        v724 = RtlULongLongAdd((unsigned __int64)m, (unsigned int)v727, &v805);
                        if ( v724 < 0 )
                          goto LABEL_987;
                        v734 = v805;
                        if ( (unsigned __int64)v731 < v805 )
                        {
                          do
                          {
                            v724 = RtlULongLongAdd(v733, 4LL, &v805);
                            if ( v724 < 0 )
                              goto LABEL_990;
                            if ( v805 > v736 )
                              goto LABEL_982;
                            v737 = RtlUIntAdd(4u, *v735, &m);
                            v724 = v737;
                            if ( v737 >= 0 )
                              v739 = (unsigned int)m;
                            v870 = v739;
                            if ( v737 < 0 )
                              goto LABEL_990;
                            v724 = RtlULongLongAdd(v738, v739, &v804);
                            if ( v724 < 0 )
                              goto LABEL_990;
                            v733 = v804;
                            if ( v804 > v734 )
                              goto LABEL_982;
                            ++v803;
                          }
                          while ( v804 < v734 );
                        }
                        if ( v733 == v734 )
                        {
LABEL_979:
                          if ( (_DWORD)v727 )
                          {
                            v740 = GetProcessHeap();
                            v732 = HeapAlloc(v740, 8u, v727);
                            if ( !v732 )
                            {
                              v724 = -1073741801;
                              goto LABEL_987;
                            }
                            v724 = 0;
                          }
                          if ( v731 )
                            memcpy_0(v732, v731, v727);
                          *(_QWORD *)&v835 = __PAIR64__(v727, v803);
                          *((_QWORD *)&v835 + 1) = v732;
LABEL_987:
                          if ( v724 >= 0 && (_DWORD)v787 != (_DWORD)v835 )
LABEL_989:
                            v724 = -1073741762;
                        }
                        else
                        {
LABEL_982:
                          v724 = -1073741811;
                        }
                      }
                    }
                  }
                }
              }
LABEL_990:
              v502 = v724 | 0x10000000;
              v8 = 0LL;
              goto LABEL_991;
            }
          }
          else
          {
            v663 = v833;
          }
        }
        v664 = -1073741823;
        goto LABEL_954;
      }
    }
  }
LABEL_991:
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
  v753 = v816;
  if ( v816 )
  {
    v754 = GetProcessHeap();
    HeapFree(v754, 0, v753);
    v8 = 0LL;
  }
  v755 = v825;
  if ( v825 )
  {
    v756 = (void *)*((_QWORD *)v825 + 1);
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
      v885 = v767;
      if ( !v767 )
        v769 = 0LL;
      v924 = v769;
      if ( v767 == (_DWORD)v768 )
      {
        v831 = *v769;
        v8 = 0LL;
        if ( v831 >= 0 && v766 > 1 )
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
                v911 = v771;
                if ( !v771 )
                  v772 = v8;
                v923 = v772;
                if ( v771 == 8 )
                  v925 = *v772;
              }
              goto LABEL_1034;
            }
          }
        }
        goto LABEL_1034;
      }
    }
    v441 = v783;
    v8 = 0LL;
  }
  else
  {
LABEL_1034:
    v441 = v783;
  }
LABEL_1035:
  v442 = v782;
LABEL_1036:
  *(_QWORD *)&v797 = 0LL;
  v773 = (void *)*((_QWORD *)&v797 + 1);
  if ( *((_QWORD *)&v797 + 1) )
  {
    v774 = GetProcessHeap();
    HeapFree(v774, 0, v773);
    v8 = 0LL;
    *((_QWORD *)&v797 + 1) = 0LL;
  }
  *(_QWORD *)&v835 = 0LL;
  v775 = (void *)*((_QWORD *)&v835 + 1);
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
  v381 = v843;
  v914 = v842;
  v871 = v873;
  v816 = v8;
LABEL_455:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v816);
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
    v813 = v10;
    goto LABEL_460;
  }
  if ( v381 != 4 )
  {
LABEL_463:
    v813 = -1073418210;
    goto LABEL_460;
  }
  if ( (unsigned __int8)SP<unsigned char,SP_HLOCAL<unsigned char>>::IsNull(v871) )
    v382 = 0LL;
  v817 = *v382;
LABEL_460:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v871);
  if ( v813 < 0 || !v817 )
    return 0;
  return v2;
}
