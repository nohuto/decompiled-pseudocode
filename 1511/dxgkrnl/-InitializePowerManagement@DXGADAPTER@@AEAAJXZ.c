/*
 * XREFs of ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C00D88B8
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00D7050 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C000333C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiEnablePowerManagement @ 0x1C001257C (DpiEnablePowerManagement.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C00188CC (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0018B64 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C001BB3C (-SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0079C70 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     sub_1C0124FCC @ 0x1C0124FCC (sub_1C0124FCC.c)
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C012CAC0 (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x1C012CB60 (-InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall DXGADAPTER::InitializePowerManagement(DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  unsigned int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  bool v10; // zf
  __int64 v11; // rcx
  unsigned int v12; // r14d
  unsigned int NumDifferentPhysicalAdapters; // esi
  unsigned int v14; // ebx
  DXGADAPTER *v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rax
  SIZE_T v20; // rax
  PVOID v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // r14
  unsigned int v29; // ecx
  unsigned int v30; // ebx
  __int64 v31; // r13
  unsigned int v32; // esi
  __int64 v33; // r8
  unsigned int v34; // eax
  __int64 v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // r12
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r9
  char *hKmdProcessHandle; // rcx
  __int16 v43; // dx
  __int64 v44; // rdx
  char *v45; // rbx
  unsigned int v46; // eax
  int v47; // eax
  int v48; // eax
  __int64 v49; // rax
  char *v50; // rcx
  unsigned int v51; // eax
  _QWORD *v52; // rax
  void *v53; // rcx
  char *v54; // rdx
  __int64 v55; // rax
  unsigned int v56; // r9d
  __int64 v57; // rax
  __int64 v58; // rcx
  int v59; // edx
  _QWORD *v60; // rax
  unsigned int v61; // edx
  __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rcx
  __int64 v65; // rcx
  SIZE_T v66; // rax
  PVOID v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  __int64 v73; // rax
  unsigned int v74; // edx
  __int64 j; // r8
  __int64 v76; // r10
  __int64 v77; // r9
  unsigned int v78; // edx
  __int64 v79; // rbx
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rsi
  unsigned int v86; // eax
  __int64 v87; // rax
  unsigned int v88; // ecx
  __int64 v89; // rdx
  __int64 v90; // rax
  void *v91; // rcx
  unsigned int v92; // r8d
  unsigned int v93; // r12d
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rsi
  unsigned int v98; // r11d
  unsigned int v99; // ebx
  __int64 v100; // r10
  unsigned int v101; // r9d
  ADAPTER_RENDER *v102; // rcx
  int v103; // eax
  __int64 v104; // rcx
  __int64 v105; // rax
  ADAPTER_DISPLAY *v106; // rcx
  int v107; // eax
  __int64 v108; // rcx
  __int64 *v109; // r12
  int v110; // eax
  __int64 v111; // rcx
  unsigned __int64 TimeIncrement; // rbx
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // rax
  unsigned __int64 v126; // rtt
  __int64 v127; // rax
  unsigned __int64 v128; // rtt
  __int64 v129; // rax
  __int64 v130; // rcx
  unsigned __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rcx
  __int64 v136; // rax
  __int64 v137; // rcx
  __int64 v138; // rax
  __int64 v139; // rcx
  __int64 v140; // rax
  __int64 v141; // rcx
  __int64 v142; // rax
  __int64 v143; // rcx
  __int64 v144; // rax
  __int64 v145; // rcx
  __int64 v146; // rax
  int v147; // r14d
  __int64 k; // rbx
  __int64 v149; // rsi
  DXGADAPTER *v150; // rdx
  int v151; // ecx
  int v152; // ecx
  int v153; // ecx
  int v154; // ecx
  int v155; // ecx
  int v156; // edx
  DXGADAPTER *v157; // rcx
  __int64 v158; // r8
  DXGADAPTER **v159; // rcx
  __int64 v160; // rax
  DXGADAPTER **v161; // rcx
  unsigned __int64 v162; // rcx
  unsigned int v163; // eax
  unsigned __int64 *v164; // rdx
  __int64 v165; // r8
  unsigned int v166; // eax
  unsigned __int64 *v167; // rdx
  int v168; // edx
  __int64 v169; // r8
  __int64 v170; // rcx
  __int64 v171; // rax
  __int64 v172; // rax
  _QWORD *v174; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v175; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v176; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v177; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v178; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v179; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v180; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v181; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v182; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v183; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v184; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v185; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v186; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v187; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v188; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v189; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v190; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v191; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v192; // [rsp+84h] [rbp-84h] BYREF
  unsigned int v193; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v194; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned int v195; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v196; // [rsp+94h] [rbp-74h] BYREF
  unsigned int v197; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v198; // [rsp+9Ch] [rbp-6Ch] BYREF
  unsigned int v199; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v200; // [rsp+A4h] [rbp-64h] BYREF
  unsigned int v201; // [rsp+A8h] [rbp-60h] BYREF
  int v202; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v203; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v204; // [rsp+B4h] [rbp-54h] BYREF
  unsigned int v205; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v206; // [rsp+BCh] [rbp-4Ch] BYREF
  unsigned int v207; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v208; // [rsp+C4h] [rbp-44h] BYREF
  unsigned int v209; // [rsp+C8h] [rbp-40h] BYREF
  int v210; // [rsp+CCh] [rbp-3Ch] BYREF
  unsigned int v211; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v212; // [rsp+D4h] [rbp-34h] BYREF
  unsigned int v213; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v214; // [rsp+DCh] [rbp-2Ch] BYREF
  int v215; // [rsp+E0h] [rbp-28h] BYREF
  int v216; // [rsp+E4h] [rbp-24h] BYREF
  int v217; // [rsp+E8h] [rbp-20h] BYREF
  int v218; // [rsp+ECh] [rbp-1Ch] BYREF
  int v219; // [rsp+F0h] [rbp-18h] BYREF
  int v220; // [rsp+F4h] [rbp-14h] BYREF
  int v221; // [rsp+F8h] [rbp-10h] BYREF
  int v222; // [rsp+FCh] [rbp-Ch] BYREF
  int v223; // [rsp+100h] [rbp-8h] BYREF
  int v224; // [rsp+104h] [rbp-4h] BYREF
  int v225; // [rsp+108h] [rbp+0h] BYREF
  int v226; // [rsp+10Ch] [rbp+4h] BYREF
  int v227; // [rsp+110h] [rbp+8h] BYREF
  int v228; // [rsp+114h] [rbp+Ch] BYREF
  int v229; // [rsp+118h] [rbp+10h] BYREF
  int v230; // [rsp+11Ch] [rbp+14h] BYREF
  int v231; // [rsp+120h] [rbp+18h] BYREF
  int v232; // [rsp+124h] [rbp+1Ch] BYREF
  int v233; // [rsp+128h] [rbp+20h] BYREF
  int v234; // [rsp+12Ch] [rbp+24h] BYREF
  int v235; // [rsp+130h] [rbp+28h] BYREF
  int v236; // [rsp+134h] [rbp+2Ch] BYREF
  int v237; // [rsp+138h] [rbp+30h] BYREF
  int v238; // [rsp+13Ch] [rbp+34h] BYREF
  int v239; // [rsp+140h] [rbp+38h] BYREF
  int v240; // [rsp+144h] [rbp+3Ch] BYREF
  int v241; // [rsp+148h] [rbp+40h] BYREF
  int v242; // [rsp+14Ch] [rbp+44h] BYREF
  int v243; // [rsp+150h] [rbp+48h] BYREF
  int v244; // [rsp+154h] [rbp+4Ch] BYREF
  int v245; // [rsp+158h] [rbp+50h] BYREF
  int v246; // [rsp+15Ch] [rbp+54h] BYREF
  void *i; // [rsp+160h] [rbp+58h]
  int v248; // [rsp+168h] [rbp+60h] BYREF
  int v249; // [rsp+16Ch] [rbp+64h] BYREF
  int v250; // [rsp+170h] [rbp+68h] BYREF
  int v251; // [rsp+174h] [rbp+6Ch] BYREF
  int v252; // [rsp+178h] [rbp+70h] BYREF
  int v253; // [rsp+17Ch] [rbp+74h] BYREF
  int v254; // [rsp+180h] [rbp+78h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v255; // [rsp+188h] [rbp+80h] BYREF
  __int64 v256; // [rsp+1B8h] [rbp+B0h]
  struct _DXGKARG_QUERYADAPTERINFO v257; // [rsp+1C0h] [rbp+B8h] BYREF
  int v258; // [rsp+1F0h] [rbp+E8h]
  const wchar_t *v259; // [rsp+1F8h] [rbp+F0h]
  int *v260; // [rsp+200h] [rbp+F8h]
  int v261; // [rsp+208h] [rbp+100h]
  int *v262; // [rsp+210h] [rbp+108h]
  int v263; // [rsp+218h] [rbp+110h]
  __int64 v264; // [rsp+220h] [rbp+118h]
  int v265; // [rsp+228h] [rbp+120h]
  __int64 v266; // [rsp+230h] [rbp+128h]
  _BYTE v267[32]; // [rsp+238h] [rbp+130h] BYREF
  __int64 v268; // [rsp+258h] [rbp+150h] BYREF
  int v269; // [rsp+260h] [rbp+158h]
  const wchar_t *v270; // [rsp+268h] [rbp+160h]
  unsigned int *v271; // [rsp+270h] [rbp+168h]
  int v272; // [rsp+278h] [rbp+170h]
  unsigned int *v273; // [rsp+280h] [rbp+178h]
  int v274; // [rsp+288h] [rbp+180h]
  __int64 v275; // [rsp+290h] [rbp+188h]
  int v276; // [rsp+298h] [rbp+190h]
  const wchar_t *v277; // [rsp+2A0h] [rbp+198h]
  unsigned int *v278; // [rsp+2A8h] [rbp+1A0h]
  int v279; // [rsp+2B0h] [rbp+1A8h]
  int *v280; // [rsp+2B8h] [rbp+1B0h]
  int v281; // [rsp+2C0h] [rbp+1B8h]
  __int64 v282; // [rsp+2C8h] [rbp+1C0h]
  int v283; // [rsp+2D0h] [rbp+1C8h]
  const wchar_t *v284; // [rsp+2D8h] [rbp+1D0h]
  unsigned int *v285; // [rsp+2E0h] [rbp+1D8h]
  int v286; // [rsp+2E8h] [rbp+1E0h]
  int *v287; // [rsp+2F0h] [rbp+1E8h]
  int v288; // [rsp+2F8h] [rbp+1F0h]
  __int64 v289; // [rsp+300h] [rbp+1F8h]
  int v290; // [rsp+308h] [rbp+200h]
  const wchar_t *v291; // [rsp+310h] [rbp+208h]
  unsigned int *v292; // [rsp+318h] [rbp+210h]
  int v293; // [rsp+320h] [rbp+218h]
  int *v294; // [rsp+328h] [rbp+220h]
  int v295; // [rsp+330h] [rbp+228h]
  __int64 v296; // [rsp+338h] [rbp+230h]
  int v297; // [rsp+340h] [rbp+238h]
  const wchar_t *v298; // [rsp+348h] [rbp+240h]
  unsigned int *v299; // [rsp+350h] [rbp+248h]
  int v300; // [rsp+358h] [rbp+250h]
  int *v301; // [rsp+360h] [rbp+258h]
  int v302; // [rsp+368h] [rbp+260h]
  __int64 v303; // [rsp+370h] [rbp+268h]
  int v304; // [rsp+378h] [rbp+270h]
  const wchar_t *v305; // [rsp+380h] [rbp+278h]
  unsigned int *v306; // [rsp+388h] [rbp+280h]
  int v307; // [rsp+390h] [rbp+288h]
  int *v308; // [rsp+398h] [rbp+290h]
  int v309; // [rsp+3A0h] [rbp+298h]
  __int64 v310; // [rsp+3A8h] [rbp+2A0h]
  int v311; // [rsp+3B0h] [rbp+2A8h]
  const wchar_t *v312; // [rsp+3B8h] [rbp+2B0h]
  unsigned int *v313; // [rsp+3C0h] [rbp+2B8h]
  int v314; // [rsp+3C8h] [rbp+2C0h]
  int *v315; // [rsp+3D0h] [rbp+2C8h]
  int v316; // [rsp+3D8h] [rbp+2D0h]
  __int64 v317; // [rsp+3E0h] [rbp+2D8h]
  int v318; // [rsp+3E8h] [rbp+2E0h]
  const wchar_t *v319; // [rsp+3F0h] [rbp+2E8h]
  unsigned int *v320; // [rsp+3F8h] [rbp+2F0h]
  int v321; // [rsp+400h] [rbp+2F8h]
  int *v322; // [rsp+408h] [rbp+300h]
  int v323; // [rsp+410h] [rbp+308h]
  __int64 v324; // [rsp+418h] [rbp+310h]
  int v325; // [rsp+420h] [rbp+318h]
  const wchar_t *v326; // [rsp+428h] [rbp+320h]
  unsigned int *v327; // [rsp+430h] [rbp+328h]
  int v328; // [rsp+438h] [rbp+330h]
  int *v329; // [rsp+440h] [rbp+338h]
  int v330; // [rsp+448h] [rbp+340h]
  __int64 v331; // [rsp+450h] [rbp+348h]
  int v332; // [rsp+458h] [rbp+350h]
  const wchar_t *v333; // [rsp+460h] [rbp+358h]
  unsigned int *v334; // [rsp+468h] [rbp+360h]
  int v335; // [rsp+470h] [rbp+368h]
  int *v336; // [rsp+478h] [rbp+370h]
  int v337; // [rsp+480h] [rbp+378h]
  __int64 v338; // [rsp+488h] [rbp+380h]
  int v339; // [rsp+490h] [rbp+388h]
  const wchar_t *v340; // [rsp+498h] [rbp+390h]
  int *v341; // [rsp+4A0h] [rbp+398h]
  int v342; // [rsp+4A8h] [rbp+3A0h]
  int *v343; // [rsp+4B0h] [rbp+3A8h]
  int v344; // [rsp+4B8h] [rbp+3B0h]
  __int64 v345; // [rsp+4C0h] [rbp+3B8h]
  int v346; // [rsp+4C8h] [rbp+3C0h]
  const wchar_t *v347; // [rsp+4D0h] [rbp+3C8h]
  unsigned int *v348; // [rsp+4D8h] [rbp+3D0h]
  int v349; // [rsp+4E0h] [rbp+3D8h]
  int *v350; // [rsp+4E8h] [rbp+3E0h]
  int v351; // [rsp+4F0h] [rbp+3E8h]
  __int64 v352; // [rsp+4F8h] [rbp+3F0h]
  int v353; // [rsp+500h] [rbp+3F8h]
  const wchar_t *v354; // [rsp+508h] [rbp+400h]
  int *v355; // [rsp+510h] [rbp+408h]
  int v356; // [rsp+518h] [rbp+410h]
  int *v357; // [rsp+520h] [rbp+418h]
  int v358; // [rsp+528h] [rbp+420h]
  __int64 v359; // [rsp+530h] [rbp+428h]
  int v360; // [rsp+538h] [rbp+430h]
  const wchar_t *v361; // [rsp+540h] [rbp+438h]
  unsigned int *v362; // [rsp+548h] [rbp+440h]
  int v363; // [rsp+550h] [rbp+448h]
  int *v364; // [rsp+558h] [rbp+450h]
  int v365; // [rsp+560h] [rbp+458h]
  __int64 v366; // [rsp+568h] [rbp+460h]
  int v367; // [rsp+570h] [rbp+468h]
  const wchar_t *v368; // [rsp+578h] [rbp+470h]
  unsigned int *v369; // [rsp+580h] [rbp+478h]
  int v370; // [rsp+588h] [rbp+480h]
  int *v371; // [rsp+590h] [rbp+488h]
  int v372; // [rsp+598h] [rbp+490h]
  __int64 v373; // [rsp+5A0h] [rbp+498h]
  int v374; // [rsp+5A8h] [rbp+4A0h]
  const wchar_t *v375; // [rsp+5B0h] [rbp+4A8h]
  unsigned int *v376; // [rsp+5B8h] [rbp+4B0h]
  int v377; // [rsp+5C0h] [rbp+4B8h]
  int *v378; // [rsp+5C8h] [rbp+4C0h]
  int v379; // [rsp+5D0h] [rbp+4C8h]
  __int64 v380; // [rsp+5D8h] [rbp+4D0h]
  int v381; // [rsp+5E0h] [rbp+4D8h]
  const wchar_t *v382; // [rsp+5E8h] [rbp+4E0h]
  unsigned int *v383; // [rsp+5F0h] [rbp+4E8h]
  int v384; // [rsp+5F8h] [rbp+4F0h]
  int *v385; // [rsp+600h] [rbp+4F8h]
  int v386; // [rsp+608h] [rbp+500h]
  __int64 v387; // [rsp+610h] [rbp+508h]
  int v388; // [rsp+618h] [rbp+510h]
  const wchar_t *v389; // [rsp+620h] [rbp+518h]
  unsigned int *v390; // [rsp+628h] [rbp+520h]
  int v391; // [rsp+630h] [rbp+528h]
  int *v392; // [rsp+638h] [rbp+530h]
  int v393; // [rsp+640h] [rbp+538h]
  __int64 v394; // [rsp+648h] [rbp+540h]
  int v395; // [rsp+650h] [rbp+548h]
  const wchar_t *v396; // [rsp+658h] [rbp+550h]
  unsigned int *v397; // [rsp+660h] [rbp+558h]
  int v398; // [rsp+668h] [rbp+560h]
  int *v399; // [rsp+670h] [rbp+568h]
  int v400; // [rsp+678h] [rbp+570h]
  __int64 v401; // [rsp+680h] [rbp+578h]
  int v402; // [rsp+688h] [rbp+580h]
  const wchar_t *v403; // [rsp+690h] [rbp+588h]
  unsigned int *v404; // [rsp+698h] [rbp+590h]
  int v405; // [rsp+6A0h] [rbp+598h]
  int *v406; // [rsp+6A8h] [rbp+5A0h]
  int v407; // [rsp+6B0h] [rbp+5A8h]
  __int64 v408; // [rsp+6B8h] [rbp+5B0h]
  int v409; // [rsp+6C0h] [rbp+5B8h]
  const wchar_t *v410; // [rsp+6C8h] [rbp+5C0h]
  unsigned int *v411; // [rsp+6D0h] [rbp+5C8h]
  int v412; // [rsp+6D8h] [rbp+5D0h]
  int *v413; // [rsp+6E0h] [rbp+5D8h]
  int v414; // [rsp+6E8h] [rbp+5E0h]
  __int64 v415; // [rsp+6F0h] [rbp+5E8h]
  int v416; // [rsp+6F8h] [rbp+5F0h]
  const wchar_t *v417; // [rsp+700h] [rbp+5F8h]
  int *v418; // [rsp+708h] [rbp+600h]
  int v419; // [rsp+710h] [rbp+608h]
  int *v420; // [rsp+718h] [rbp+610h]
  int v421; // [rsp+720h] [rbp+618h]
  __int64 v422; // [rsp+728h] [rbp+620h]
  int v423; // [rsp+730h] [rbp+628h]
  const wchar_t *v424; // [rsp+738h] [rbp+630h]
  unsigned int *v425; // [rsp+740h] [rbp+638h]
  int v426; // [rsp+748h] [rbp+640h]
  int *v427; // [rsp+750h] [rbp+648h]
  int v428; // [rsp+758h] [rbp+650h]
  __int64 v429; // [rsp+760h] [rbp+658h]
  int v430; // [rsp+768h] [rbp+660h]
  const wchar_t *v431; // [rsp+770h] [rbp+668h]
  unsigned int *v432; // [rsp+778h] [rbp+670h]
  int v433; // [rsp+780h] [rbp+678h]
  int *v434; // [rsp+788h] [rbp+680h]
  int v435; // [rsp+790h] [rbp+688h]
  __int64 v436; // [rsp+798h] [rbp+690h]
  int v437; // [rsp+7A0h] [rbp+698h]
  const wchar_t *v438; // [rsp+7A8h] [rbp+6A0h]
  unsigned int *v439; // [rsp+7B0h] [rbp+6A8h]
  int v440; // [rsp+7B8h] [rbp+6B0h]
  int *v441; // [rsp+7C0h] [rbp+6B8h]
  int v442; // [rsp+7C8h] [rbp+6C0h]
  __int64 v443; // [rsp+7D0h] [rbp+6C8h]
  int v444; // [rsp+7D8h] [rbp+6D0h]
  const wchar_t *v445; // [rsp+7E0h] [rbp+6D8h]
  unsigned int *v446; // [rsp+7E8h] [rbp+6E0h]
  int v447; // [rsp+7F0h] [rbp+6E8h]
  int *v448; // [rsp+7F8h] [rbp+6F0h]
  int v449; // [rsp+800h] [rbp+6F8h]
  __int64 v450; // [rsp+808h] [rbp+700h]
  int v451; // [rsp+810h] [rbp+708h]
  const wchar_t *v452; // [rsp+818h] [rbp+710h]
  unsigned int *v453; // [rsp+820h] [rbp+718h]
  int v454; // [rsp+828h] [rbp+720h]
  int *v455; // [rsp+830h] [rbp+728h]
  int v456; // [rsp+838h] [rbp+730h]
  __int64 v457; // [rsp+840h] [rbp+738h]
  int v458; // [rsp+848h] [rbp+740h]
  const wchar_t *v459; // [rsp+850h] [rbp+748h]
  unsigned int *v460; // [rsp+858h] [rbp+750h]
  int v461; // [rsp+860h] [rbp+758h]
  int *v462; // [rsp+868h] [rbp+760h]
  int v463; // [rsp+870h] [rbp+768h]
  __int64 v464; // [rsp+878h] [rbp+770h]
  int v465; // [rsp+880h] [rbp+778h]
  const wchar_t *v466; // [rsp+888h] [rbp+780h]
  unsigned int *v467; // [rsp+890h] [rbp+788h]
  int v468; // [rsp+898h] [rbp+790h]
  int *v469; // [rsp+8A0h] [rbp+798h]
  int v470; // [rsp+8A8h] [rbp+7A0h]
  __int64 v471; // [rsp+8B0h] [rbp+7A8h]
  int v472; // [rsp+8B8h] [rbp+7B0h]
  const wchar_t *v473; // [rsp+8C0h] [rbp+7B8h]
  unsigned int *v474; // [rsp+8C8h] [rbp+7C0h]
  int v475; // [rsp+8D0h] [rbp+7C8h]
  int *v476; // [rsp+8D8h] [rbp+7D0h]
  int v477; // [rsp+8E0h] [rbp+7D8h]
  __int64 v478; // [rsp+8E8h] [rbp+7E0h]
  int v479; // [rsp+8F0h] [rbp+7E8h]
  const wchar_t *v480; // [rsp+8F8h] [rbp+7F0h]
  unsigned int *v481; // [rsp+900h] [rbp+7F8h]
  int v482; // [rsp+908h] [rbp+800h]
  int *v483; // [rsp+910h] [rbp+808h]
  int v484; // [rsp+918h] [rbp+810h]
  __int64 v485; // [rsp+920h] [rbp+818h]
  int v486; // [rsp+928h] [rbp+820h]
  const wchar_t *v487; // [rsp+930h] [rbp+828h]
  unsigned int *v488; // [rsp+938h] [rbp+830h]
  int v489; // [rsp+940h] [rbp+838h]
  int *v490; // [rsp+948h] [rbp+840h]
  int v491; // [rsp+950h] [rbp+848h]
  __int64 v492; // [rsp+958h] [rbp+850h]
  int v493; // [rsp+960h] [rbp+858h]
  const wchar_t *v494; // [rsp+968h] [rbp+860h]
  unsigned int *v495; // [rsp+970h] [rbp+868h]
  int v496; // [rsp+978h] [rbp+870h]
  int *v497; // [rsp+980h] [rbp+878h]
  int v498; // [rsp+988h] [rbp+880h]
  __int64 v499; // [rsp+990h] [rbp+888h]
  int v500; // [rsp+998h] [rbp+890h]
  const wchar_t *v501; // [rsp+9A0h] [rbp+898h]
  unsigned int *v502; // [rsp+9A8h] [rbp+8A0h]
  int v503; // [rsp+9B0h] [rbp+8A8h]
  int *v504; // [rsp+9B8h] [rbp+8B0h]
  int v505; // [rsp+9C0h] [rbp+8B8h]
  __int64 v506; // [rsp+9C8h] [rbp+8C0h]
  int v507; // [rsp+9D0h] [rbp+8C8h]
  const wchar_t *v508; // [rsp+9D8h] [rbp+8D0h]
  unsigned int *v509; // [rsp+9E0h] [rbp+8D8h]
  int v510; // [rsp+9E8h] [rbp+8E0h]
  int *v511; // [rsp+9F0h] [rbp+8E8h]
  int v512; // [rsp+9F8h] [rbp+8F0h]
  __int64 v513; // [rsp+A00h] [rbp+8F8h]
  int v514; // [rsp+A08h] [rbp+900h]
  const wchar_t *v515; // [rsp+A10h] [rbp+908h]
  unsigned int *v516; // [rsp+A18h] [rbp+910h]
  int v517; // [rsp+A20h] [rbp+918h]
  int *v518; // [rsp+A28h] [rbp+920h]
  int v519; // [rsp+A30h] [rbp+928h]
  __int64 v520; // [rsp+A38h] [rbp+930h]
  int v521; // [rsp+A40h] [rbp+938h]
  const wchar_t *v522; // [rsp+A48h] [rbp+940h]
  unsigned int *v523; // [rsp+A50h] [rbp+948h]
  int v524; // [rsp+A58h] [rbp+950h]
  int *v525; // [rsp+A60h] [rbp+958h]
  int v526; // [rsp+A68h] [rbp+960h]
  __int64 v527; // [rsp+A70h] [rbp+968h]
  int v528; // [rsp+A78h] [rbp+970h]
  __int64 v529; // [rsp+A80h] [rbp+978h]
  _BYTE v530[288]; // [rsp+A88h] [rbp+980h] BYREF

  if ( !*((_BYTE *)this + 1861) )
  {
    v5 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 14867LL;
    goto LABEL_184;
  }
  v254 = 3;
  v245 = -1;
  v185 = -1;
  v216 = 2000;
  v250 = 35000;
  v192 = 35000;
  v6 = 0;
  v184 = 2000;
  v242 = 50000;
  v187 = 50000;
  v224 = 100000;
  v196 = 100000;
  v249 = 300000;
  v211 = 300000;
  v230 = 17000;
  v209 = 17000;
  v253 = 200;
  v202 = 200;
  v226 = 200;
  v204 = 200;
  v228 = 100;
  v244 = 100;
  v246 = 25000;
  v213 = 25000;
  v252 = 300;
  v180 = 300;
  v234 = 700;
  v181 = 700;
  v248 = 900;
  v179 = 900;
  v236 = 500;
  v182 = 500;
  v217 = 140000;
  v188 = 140000;
  v219 = 200000;
  v191 = 200000;
  v221 = 250000;
  v193 = 250000;
  v223 = 250000;
  v195 = 250000;
  v225 = 10000;
  v214 = 10000;
  v222 = 2000;
  v194 = 2000;
  v232 = 2000;
  v206 = 2000;
  v227 = 60000;
  v208 = 60000;
  v229 = 60000;
  v189 = 60000;
  v240 = 80;
  v190 = 80;
  v220 = 15000;
  v212 = 15000;
  v215 = 3;
  v238 = 80;
  v198 = 80;
  v251 = 80000;
  v200 = 80000;
  v231 = 15000;
  v197 = 15000;
  v233 = 30000;
  v199 = 30000;
  v239 = 30000;
  v205 = 30000;
  v259 = L"UseSelfRefreshVRAMInS3";
  v260 = &v210;
  v235 = 80;
  v201 = 80;
  v237 = 15000;
  v203 = 15000;
  v241 = 80000;
  v207 = 80000;
  v262 = &v218;
  v218 = 1;
  v210 = 1;
  v183 = 1;
  v177 = 1;
  v178 = 0;
  v176 = 0;
  v257.hKmdProcessHandle = 0LL;
  v258 = 288;
  v261 = 67108868;
  v263 = 4;
  v264 = 0LL;
  v265 = 0;
  v266 = 0LL;
  memset(v267, 0, sizeof(v267));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Power", &v257.hKmdProcessHandle, 0LL, 0LL);
  v268 = 0LL;
  v270 = L"EnableRuntimePowerManagement";
  v271 = &v177;
  v273 = &v183;
  v277 = L"DisableDevicePowerRequired";
  v278 = &v176;
  v280 = (int *)&v178;
  v284 = L"DefaultLatencyToleranceOther";
  v285 = &v185;
  v287 = &v245;
  v291 = L"DefaultExpectedResidency";
  v269 = 288;
  v272 = 67108868;
  v274 = 4;
  v275 = 0LL;
  v276 = 288;
  v279 = 67108868;
  v281 = 4;
  v282 = 0LL;
  v283 = 288;
  v286 = 67108868;
  v288 = 4;
  v289 = 0LL;
  v290 = 288;
  v292 = &v184;
  v294 = &v216;
  v298 = L"DefaultLatencyToleranceIdle0";
  v299 = &v190;
  v301 = &v240;
  v305 = L"DefaultLatencyToleranceIdle1";
  v306 = &v212;
  v308 = &v220;
  v312 = L"DefaultLatencyToleranceNoContext";
  v313 = &v192;
  v315 = &v250;
  v319 = L"DefaultLatencyToleranceIdle0MonitorOff";
  v320 = &v194;
  v322 = &v222;
  v326 = L"DefaultLatencyToleranceIdle1MonitorOff";
  v327 = &v187;
  v329 = &v242;
  v333 = L"DefaultLatencyToleranceNoContextMonitorOff";
  v334 = &v196;
  v336 = &v224;
  v340 = L"DefaultLatencyToleranceTimerPeriod";
  v341 = &v202;
  v343 = &v253;
  v347 = L"DefaultIdleThresholdIdle0";
  v348 = &v204;
  v293 = 67108868;
  v295 = 4;
  v296 = 0LL;
  v297 = 288;
  v300 = 67108868;
  v302 = 4;
  v303 = 0LL;
  v304 = 288;
  v307 = 67108868;
  v309 = 4;
  v310 = 0LL;
  v311 = 288;
  v314 = 67108868;
  v316 = 4;
  v317 = 0LL;
  v318 = 288;
  v321 = 67108868;
  v323 = 4;
  v324 = 0LL;
  v325 = 288;
  v328 = 67108868;
  v330 = 4;
  v331 = 0LL;
  v332 = 288;
  v335 = 67108868;
  v337 = 4;
  v338 = 0LL;
  v339 = 288;
  v342 = 67108868;
  v344 = 4;
  v345 = 0LL;
  v346 = 288;
  v349 = 67108868;
  v350 = &v226;
  v354 = L"DefaultIdleThresholdIdle0MonitorOff";
  v355 = &v244;
  v357 = &v228;
  v361 = L"MonitorLatencyTolerance";
  v362 = &v211;
  v364 = &v249;
  v368 = L"MonitorRefreshLatencyTolerance";
  v369 = &v209;
  v371 = &v230;
  v375 = L"DefaultPowerNotRequiredTimeout";
  v376 = &v213;
  v378 = &v246;
  v382 = L"DefaultActiveIdleThreshold";
  v383 = &v206;
  v385 = &v232;
  v389 = L"ulow";
  v390 = &v180;
  v392 = &v252;
  v396 = L"uhigh";
  v397 = &v181;
  v399 = &v234;
  v403 = L"uglitch";
  v404 = &v179;
  v351 = 4;
  v352 = 0LL;
  v353 = 288;
  v356 = 67108868;
  v358 = 4;
  v359 = 0LL;
  v360 = 288;
  v363 = 67108868;
  v365 = 4;
  v366 = 0LL;
  v367 = 288;
  v370 = 67108868;
  v372 = 4;
  v373 = 0LL;
  v374 = 288;
  v377 = 67108868;
  v379 = 4;
  v380 = 0LL;
  v381 = 288;
  v384 = 67108868;
  v386 = 4;
  v387 = 0LL;
  v388 = 288;
  v391 = 67108868;
  v393 = 4;
  v394 = 0LL;
  v395 = 288;
  v398 = 67108868;
  v400 = 4;
  v401 = 0LL;
  v402 = 288;
  v405 = 67108868;
  v407 = 4;
  v406 = &v248;
  v410 = L"uideal";
  v411 = &v182;
  v413 = &v236;
  v417 = L"lowdebounce";
  v418 = &v215;
  v420 = &v254;
  v424 = L"DefaultD3TransitionLatencyActivelyUsed";
  v425 = &v198;
  v427 = &v238;
  v431 = L"DefaultD3TransitionLatencyIdleShortTime";
  v432 = &v200;
  v434 = &v251;
  v438 = L"DefaultD3TransitionLatencyIdleLongTime";
  v439 = &v188;
  v441 = &v217;
  v445 = L"DefaultD3TransitionLatencyIdleVeryLongTime";
  v446 = &v191;
  v448 = &v219;
  v452 = L"DefaultD3TransitionLatencyIdleNoContext";
  v453 = &v193;
  v455 = &v221;
  v459 = L"DefaultD3TransitionLatencyIdleMonitorOff";
  v460 = &v195;
  v408 = 0LL;
  v409 = 288;
  v412 = 67108868;
  v414 = 4;
  v415 = 0LL;
  v416 = 288;
  v419 = 67108868;
  v421 = 4;
  v422 = 0LL;
  v423 = 288;
  v426 = 67108868;
  v428 = 4;
  v429 = 0LL;
  v430 = 288;
  v433 = 67108868;
  v435 = 4;
  v436 = 0LL;
  v437 = 288;
  v440 = 67108868;
  v442 = 4;
  v443 = 0LL;
  v444 = 288;
  v447 = 67108868;
  v449 = 4;
  v450 = 0LL;
  v451 = 288;
  v454 = 67108868;
  v456 = 4;
  v457 = 0LL;
  v458 = 288;
  v461 = 67108868;
  v462 = &v223;
  v466 = L"DefaultD3TransitionIdleShortTimeThreshold";
  v467 = &v214;
  v469 = &v225;
  v473 = L"DefaultD3TransitionIdleLongTimeThreshold";
  v474 = &v208;
  v476 = &v227;
  v480 = L"DefaultD3TransitionIdleVeryLongTimeThreshold";
  v481 = &v189;
  v483 = &v229;
  v487 = L"DefaultLatencyToleranceMemory";
  v488 = &v197;
  v490 = &v231;
  v494 = L"DefaultLatencyToleranceMemoryNoContext";
  v495 = &v199;
  v497 = &v233;
  v501 = L"DefaultMemoryRefreshLatencyToleranceActivelyUsed";
  v502 = &v201;
  v504 = &v235;
  v508 = L"DefaultMemoryRefreshLatencyToleranceIdleShortTime";
  v509 = &v203;
  v511 = &v237;
  v515 = L"DefaultMemoryRefreshLatencyToleranceNoContext";
  v516 = &v205;
  v518 = &v239;
  v463 = 4;
  v464 = 0LL;
  v465 = 288;
  v468 = 67108868;
  v470 = 4;
  v471 = 0LL;
  v472 = 288;
  v475 = 67108868;
  v477 = 4;
  v478 = 0LL;
  v479 = 288;
  v482 = 67108868;
  v484 = 4;
  v485 = 0LL;
  v486 = 288;
  v489 = 67108868;
  v491 = 4;
  v492 = 0LL;
  v493 = 288;
  v496 = 67108868;
  v498 = 4;
  v499 = 0LL;
  v500 = 288;
  v503 = 67108868;
  v505 = 4;
  v506 = 0LL;
  v507 = 288;
  v510 = 67108868;
  v512 = 4;
  v513 = 0LL;
  v514 = 288;
  v517 = 67108868;
  v519 = 4;
  v522 = L"DefaultMemoryRefreshLatencyToleranceMonitorOff";
  v520 = 0LL;
  v523 = &v207;
  v521 = 288;
  v525 = &v241;
  v524 = 67108868;
  v526 = 4;
  v527 = 0LL;
  v528 = 0;
  v529 = 0LL;
  memset(v530, 0, 0x20uLL);
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v268, 0LL, 0LL);
  if ( !v177 )
    return 0LL;
  v10 = v210 == 0;
  *((_BYTE *)this + 165) = v176 != 0;
  *((_BYTE *)this + 168) = !v10;
  v11 = *(_QWORD *)(*((_QWORD *)this + 22) + 64LL);
  v12 = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 28LL);
  if ( v12 < 0x5019 )
    NumDifferentPhysicalAdapters = 1;
  else
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(this);
  v176 = NumDifferentPhysicalAdapters;
  v14 = 0;
  v186 = 0;
  if ( !NumDifferentPhysicalAdapters )
    goto LABEL_183;
  do
  {
    memset(&v257, 0, 0x28uLL);
    v257.Type = DXGKQAITYPE_NUMPOWERCOMPONENTS;
    v257.OutputDataSize = 4;
    v257.pOutputData = &v530[4 * v14 + 32];
    if ( DXGADAPTER::IsDxgmms2(this) && v12 >= 0x5019 )
    {
      v257.InputDataSize = 4;
      v257.pInputData = &v186;
    }
    v17 = DXGADAPTER::DdiQueryAdapterInfo(v15, &v257, v16);
    v18 = v17;
    if ( v17 < 0 )
    {
      v172 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v172 + 24) = this;
      *(_QWORD *)(v172 + 32) = v18;
      WdLogEvent5_WdError(v172);
      return (unsigned int)v18;
    }
    v6 += *(_DWORD *)&v530[4 * v186 + 32];
    v14 = v186 + 1;
    v186 = v14;
  }
  while ( v14 < NumDifferentPhysicalAdapters );
  if ( !v6 )
  {
LABEL_183:
    v5 = WdLogNewEntry5_WdWarning(v11, v7, v8, v9);
    *(_QWORD *)(v5 + 24) = 15036LL;
LABEL_184:
    WdLogEvent5_WdWarning(v5);
    return 0LL;
  }
  if ( v6 > 0xFFFF )
  {
    v19 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v19 + 24) = v6;
    WdLogEvent5_WdError(v19);
    LODWORD(v18) = -1073741811;
    goto LABEL_137;
  }
  *((_DWORD *)this + 542) = v6;
  v20 = 520LL * v6;
  if ( !is_mul_ok(v6, 0x208uLL) )
    v20 = -1LL;
  v21 = operator new[](v20, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 253) = v21;
  if ( !v21
    || (memset(v21, 0, 520LL * v6), v27 = operator new[](312 * v6 + 136, 0x4B677844u, PagedPool), (v28 = v27) == 0LL) )
  {
    v26 = WdLogNewEntry5_WdLowResource(v23, v22, v24, v25);
    *(_QWORD *)(v26 + 24) = this;
    WdLogEvent5_WdLowResource(v26);
    LODWORD(v18) = -1073741801;
    goto LABEL_137;
  }
  memset(v27, 0, 312 * v6 + 136);
  v174 = v28;
  v28[4] = DxgkPowerRuntimeComponentIdleStateCallback;
  *(_DWORD *)v28 = 2;
  v28[2] = DxgkPowerRuntimeComponentActiveCallback;
  *((_DWORD *)v28 + 18) = v6;
  v28[3] = DxgkPowerRuntimeComponentIdleCallback;
  v28[5] = DxgkPowerRuntimeDevicePowerRequiredCallback;
  v28[6] = DxgkPowerRuntimeDevicePowerNotRequiredCallback;
  v28[8] = this;
  v28[7] = DxgkPowerRuntimeControlCallback;
  memset(&v255, 0, 0x28uLL);
  v29 = v176;
  v30 = 0;
  v255.Type = DXGKQAITYPE_POWERCOMPONENTINFO;
  v31 = (__int64)&v28[7 * v6 + 10];
  v255.InputDataSize = 4;
  v255.OutputDataSize = 336;
  v32 = 0;
  v175 = 0;
  v33 = 0LL;
  v183 = 0;
  i = (void *)(v31 + 192LL * v6);
  v34 = 0;
  v177 = 0;
  do
  {
    v35 = v34;
    v36 = 0;
    v256 = v35;
    v178 = 0;
    *((_WORD *)this + v35 + 1020) = v32;
    if ( !*(_DWORD *)&v530[4 * v35 + 32] )
      goto LABEL_68;
    do
    {
      v37 = 7LL * v32;
      v243 = v33 + v36;
      v255.pInputData = &v243;
      v38 = *((_QWORD *)this + 253) + 8LL;
      v255.hKmdProcessHandle = (HANDLE)(520LL * v32);
      v255.pOutputData = (char *)v255.hKmdProcessHandle + v38;
      v39 = DXGADAPTER::DdiQueryAdapterInfo(this, &v255, v33);
      v18 = v39;
      if ( v39 < 0 )
      {
        v73 = WdLogNewEntry5_WdError(v40);
        *(_QWORD *)(v73 + 24) = v32;
        *(_QWORD *)(v73 + 32) = v18;
LABEL_135:
        WdLogEvent5_WdError(v73);
        goto LABEL_136;
      }
      hKmdProcessHandle = (char *)v255.hKmdProcessHandle;
      v43 = v178;
      *(_DWORD *)((char *)v255.hKmdProcessHandle + *((_QWORD *)this + 253)) = v32;
      *(_WORD *)&hKmdProcessHandle[*((_QWORD *)this + 253) + 4] = v43;
      v44 = v177;
      *(_WORD *)&hKmdProcessHandle[*((_QWORD *)this + 253) + 6] = v177;
      v45 = &hKmdProcessHandle[*((_QWORD *)this + 253)];
      HIDWORD(v28[v37 + 13]) = *((_DWORD *)v45 + 2);
      v46 = *((_DWORD *)v45 + 2);
      if ( !v46 || v46 > 8 )
      {
        v60 = (_QWORD *)WdLogNewEntry5_WdError(hKmdProcessHandle);
        v60[3] = v32;
        v60[4] = *((unsigned int *)v45 + 2);
        v60[5] = 0LL;
        goto LABEL_95;
      }
      *(_OWORD *)&v28[v37 + 10] = *(_OWORD *)(v45 + 220);
      v45[275] = 0;
      v47 = *((_DWORD *)v45 + 54);
      if ( (v47 & 0xFFFFFFE0) != 0 )
      {
        v52 = (_QWORD *)WdLogNewEntry5_WdError(hKmdProcessHandle);
        v52[4] = 2LL;
        goto LABEL_83;
      }
      if ( (v47 & 4) != 0 )
        v28[v37 + 12] |= 1uLL;
      v28[v37 + 12] |= 2uLL;
      if ( (*((_DWORD *)v45 + 54) & 0x10) != 0 )
      {
        if ( *((_DWORD *)v45 + 52) != 3 )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdError(hKmdProcessHandle);
          v52[4] = 15189LL;
          goto LABEL_83;
        }
        if ( *((_DWORD *)v45 + 2) != 2 )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdError(hKmdProcessHandle);
          v52[4] = 15195LL;
          goto LABEL_83;
        }
        if ( *((_QWORD *)v45 + 5) )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdError(hKmdProcessHandle);
          v52[4] = 15201LL;
          goto LABEL_83;
        }
        if ( *((_DWORD *)v45 + 69) )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdError(hKmdProcessHandle);
          v52[4] = 15207LL;
          goto LABEL_83;
        }
      }
      if ( *((_DWORD *)v45 + 69) > 0x10u )
      {
        v52 = (_QWORD *)WdLogNewEntry5_WdError(hKmdProcessHandle);
        v52[4] = 3LL;
        goto LABEL_83;
      }
      v48 = *((_DWORD *)v45 + 52);
      if ( v48 == 4 )
      {
        if ( *((_DWORD *)this + 544) != -1 )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdError(hKmdProcessHandle);
          v52[4] = 15255LL;
          goto LABEL_83;
        }
        *((_DWORD *)this + 544) = v32;
      }
      else
      {
        if ( v48 != 6 )
          goto LABEL_45;
        if ( *((_DWORD *)this + 543) != -1 )
        {
          v49 = WdLogNewEntry5_WdWarning(hKmdProcessHandle, v44, 0LL, v41);
          *(_QWORD *)(v49 + 24) = v32;
          *(_QWORD *)(v49 + 32) = 15229LL;
          WdLogEvent5_WdWarning(v49);
          goto LABEL_45;
        }
        v50 = &hKmdProcessHandle[*((_QWORD *)this + 253)];
        *((_QWORD *)this + 298) = v50;
        *((_DWORD *)this + 543) = v32;
        v51 = *((_DWORD *)v45 + 2);
        if ( v51 == 2 )
        {
          *((_BYTE *)this + 2464) = 1;
          goto LABEL_45;
        }
        if ( v51 > 2 )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdError(v50);
          v52[4] = 15245LL;
LABEL_83:
          v52[3] = v32;
          goto LABEL_84;
        }
      }
LABEL_45:
      v53 = i;
      LODWORD(v28[v37 + 15]) = *((_DWORD *)v45 + 69);
      memmove(v53, v45 + 280, 4LL * *((unsigned int *)v45 + 69));
      v54 = (char *)i;
      v28[v37 + 16] = i;
      v55 = *((unsigned int *)v45 + 69);
      v28[v37 + 14] = v31;
      v56 = 0;
      for ( i = &v54[4 * v55]; v56 < *((_DWORD *)v45 + 2); ++v56 )
      {
        v57 = *(_QWORD *)&v45[24 * v56 + 16];
        *(_QWORD *)v31 = v57;
        v58 = *(_QWORD *)&v45[24 * v56 + 24];
        *(_QWORD *)(v31 + 8) = v58;
        v59 = *(_DWORD *)&v45[24 * v56 + 32];
        *(_DWORD *)(v31 + 16) = v59;
        if ( *(_QWORD *)&v45[24 * v56 + 16] == -1LL )
          v57 = -1LL;
        *(_QWORD *)v31 = v57;
        if ( *(_QWORD *)&v45[24 * v56 + 24] == -1LL )
          v58 = -1LL;
        *(_QWORD *)(v31 + 8) = v58;
        if ( *(_DWORD *)&v45[24 * v56 + 32] == -1 )
          v59 = -1;
        *(_DWORD *)(v31 + 16) = v59;
        if ( v56 )
        {
          v61 = *(_DWORD *)&v45[24 * v56 + 32];
          if ( v61 != -1 )
          {
            v62 = *(unsigned int *)&v45[24 * v56 + 8];
            if ( (_DWORD)v62 != -1 && v61 > (unsigned int)v62 )
            {
              v60 = (_QWORD *)WdLogNewEntry5_WdError(v62);
              v60[3] = v32;
              v60[4] = 5LL;
              goto LABEL_95;
            }
          }
          v63 = *(_QWORD *)&v45[24 * v56 + 16];
          if ( v63 != -1LL )
          {
            v64 = *(_QWORD *)&v45[24 * v56 - 8];
            if ( v64 != -1LL && v63 < v64 )
            {
              v60 = (_QWORD *)WdLogNewEntry5_WdError(v64);
              v60[3] = v32;
              v60[4] = 6LL;
              goto LABEL_95;
            }
          }
        }
        else
        {
          if ( ((*((_QWORD *)v45 + 2) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0
            || ((*((_QWORD *)v45 + 3) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          {
            v60 = (_QWORD *)WdLogNewEntry5_WdError(v58);
            v60[3] = v32;
            v60[4] = 3LL;
            goto LABEL_95;
          }
          if ( !*((_DWORD *)v45 + 8) )
          {
            v60 = (_QWORD *)WdLogNewEntry5_WdError(v58);
            v60[3] = v32;
            v60[4] = 4LL;
LABEL_95:
            WdLogEvent5_WdError(v60);
            LODWORD(v18) = -1073741811;
            goto LABEL_136;
          }
        }
        v31 += 24LL;
      }
      v10 = *((_DWORD *)v45 + 52) == 0;
      v30 = v175;
      if ( v10 )
        v30 = ++v175;
      ++v32;
      v36 = v178 + 1;
      v33 = v183;
      v178 = v36;
    }
    while ( v36 < *(_DWORD *)&v530[4 * v256 + 32] );
    v29 = v176;
LABEL_68:
    v33 = (unsigned int)(v33 + 0x10000);
    v34 = v177 + 1;
    v183 = v33;
    v177 = v34;
  }
  while ( v34 < v29 );
  if ( (int)DXGADAPTER::GetDriverVersion(this) < 1300 || !v30 )
    goto LABEL_122;
  if ( v180 > 0x3E8
    || (v65 = v181, v181 > 0x3E8)
    || v179 > 0x3E8
    || v182 > 0x3E8
    || v180 >= v182
    || v182 >= v181
    || v181 >= v179 )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v65);
    v60[3] = v180;
    v60[4] = v181;
    v60[5] = v179;
    v60[6] = v182;
    goto LABEL_95;
  }
  v255.Type = DXGKQAITYPE_POWERCOMPONENTPSTATEINFO;
  v66 = 248LL * v30;
  v255.OutputDataSize = 136;
  if ( !is_mul_ok(v30, 0xF8uLL) )
    v66 = -1LL;
  v67 = operator new[](v66, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 366) = v67;
  *((_DWORD *)this + 734) = v30;
  if ( !v67 )
  {
    v72 = WdLogNewEntry5_WdLowResource(v69, v68, v70, v71);
    *(_QWORD *)(v72 + 24) = this;
    WdLogEvent5_WdLowResource(v72);
    LODWORD(v18) = -1073741801;
    goto LABEL_136;
  }
  memset(v67, 0, 248LL * v30);
  v74 = 0;
  for ( j = 0LL; v74 < *((_DWORD *)this + 542); ++v74 )
  {
    v76 = *((_QWORD *)this + 253);
    v77 = 520LL * v74;
    if ( !*(_DWORD *)(v77 + v76 + 208) )
    {
      *(_QWORD *)(v77 + v76 + 512) = *((_QWORD *)this + 366) + 248LL * (unsigned int)j;
      j = (unsigned int)(j + 1);
    }
  }
  v78 = 0;
  *((_DWORD *)this + 782) = v179;
  *((_DWORD *)this + 783) = v181;
  *((_DWORD *)this + 784) = v180;
  *((_DWORD *)this + 785) = v182;
  *((_DWORD *)this + 786) = v215;
  v175 = 0;
  while ( 2 )
  {
    v79 = *(_QWORD *)(520LL * v78 + *((_QWORD *)this + 253) + 512);
    if ( !v79 )
    {
LABEL_105:
      v175 = ++v78;
      if ( v78 >= v6 )
        goto LABEL_112;
      continue;
    }
    break;
  }
  v255.pOutputData = *(void **)(520LL * v78 + *((_QWORD *)this + 253) + 512);
  v255.pInputData = &v175;
  v80 = DXGADAPTER::DdiQueryAdapterInfo(this, &v255, j);
  v85 = v80;
  if ( v80 >= 0 )
  {
    v86 = v175;
    *(_QWORD *)(v79 + 136) = this;
    *(_DWORD *)(v79 + 144) = v86;
    *(_QWORD *)(v79 + 152) = v79;
    KeInitializeSpinLock((PKSPIN_LOCK)(v79 + 160));
    *(_BYTE *)(v79 + 240) = 0;
    *(_DWORD *)(v79 + 244) = -1;
    v78 = v175;
    goto LABEL_105;
  }
  v87 = WdLogNewEntry5_WdTrace(v82, v81, v83, v84);
  *(_QWORD *)(v87 + 24) = v175;
  v88 = 0;
  for ( *(_QWORD *)(v87 + 32) = v85; v88 < *((_DWORD *)this + 542); ++v88 )
  {
    v89 = 520LL * v88;
    v90 = *((_QWORD *)this + 253);
    if ( !*(_DWORD *)(v89 + v90 + 208) )
      *(_QWORD *)(v89 + v90 + 512) = 0LL;
  }
  v91 = (void *)*((_QWORD *)this + 366);
  *((_DWORD *)this + 734) = 0;
  operator delete(v91);
  *((_QWORD *)this + 366) = 0LL;
LABEL_112:
  v92 = 0;
  v93 = *((_DWORD *)this + 734);
  if ( !v93 )
  {
LABEL_122:
    v102 = (ADAPTER_RENDER *)*((_QWORD *)this + 249);
    *((_DWORD *)this + 614) = v202;
    if ( v102 )
    {
      v103 = ADAPTER_RENDER::InitializePowerManagement(v102);
      v18 = v103;
      if ( v103 < 0 )
      {
        v105 = WdLogNewEntry5_WdError(v104);
        *(_QWORD *)(v105 + 32) = 7LL;
LABEL_125:
        *(_QWORD *)(v105 + 24) = v18;
        WdLogEvent5_WdError(v105);
        goto LABEL_136;
      }
    }
    v106 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 248);
    if ( v106 )
    {
      v107 = ADAPTER_DISPLAY::InitializePowerManagement(v106);
      v18 = v107;
      if ( v107 < 0 )
      {
        v105 = WdLogNewEntry5_WdError(v108);
        *(_QWORD *)(v105 + 32) = 8LL;
        goto LABEL_125;
      }
    }
    v109 = (__int64 *)((char *)this + 2032);
    v110 = PoFxRegisterDevice(*((_QWORD *)this + 22), v28, (char *)this + 2032);
    v18 = v110;
    if ( v110 < 0 )
    {
      v73 = WdLogNewEntry5_WdError(v111);
      *(_QWORD *)(v73 + 24) = v18;
      goto LABEL_135;
    }
    KeInitializeEvent((PRKEVENT)((char *)this + 2192), SynchronizationEvent, 0);
    *((_QWORD *)this + 310) = (char *)this + 2472;
    *((_QWORD *)this + 309) = (char *)this + 2472;
    *((_BYTE *)this + 2460) = 0;
    TimeIncrement = KeQueryTimeIncrement();
    memset((char *)this + 2216, 0, 0x60uLL);
    v113 = v212;
    *((_QWORD *)this + 277) = 10LL * v190;
    v114 = 5 * v113;
    v115 = v192;
    *((_QWORD *)this + 279) = 2 * v114;
    *((_QWORD *)this + 281) = 10 * v115;
    v116 = (unsigned int)(10000 * (unsigned __int64)v204 / TimeIncrement);
    v117 = v194;
    *((_QWORD *)this + 278) = v116;
    *((_QWORD *)this + 284) = v116;
    v118 = 5 * v117;
    v119 = v187;
    *((_QWORD *)this + 283) = 2 * v118;
    v120 = 5 * v119;
    v121 = v196;
    *((_QWORD *)this + 285) = 2 * v120;
    v122 = 5 * v121;
    v123 = v206;
    *((_QWORD *)this + 287) = 2 * v122;
    *((_QWORD *)this + 289) = (char *)this + 2216;
    v124 = 5 * v123;
    v125 = v198;
    *((_QWORD *)this + 321) = 2 * v124;
    v126 = 10000LL * v214;
    *((_QWORD *)this + 290) = 10 * v125;
    v127 = v200;
    *((_QWORD *)this + 291) = (unsigned int)(v126 / TimeIncrement);
    v128 = 10000LL * v208;
    *((_QWORD *)this + 292) = 10 * v127;
    v129 = v188;
    *((_QWORD *)this + 293) = (unsigned int)(v128 / TimeIncrement);
    v130 = 5 * v129;
    v131 = 10000LL * v189;
    *((_QWORD *)this + 294) = 2 * v130;
    *((_QWORD *)this + 295) = (unsigned int)(v131 / TimeIncrement);
    *((_QWORD *)this + 297) = 0LL;
    v132 = v193;
    *((_QWORD *)this + 296) = 10LL * v191;
    v133 = 5 * v132;
    v134 = v195;
    *((_QWORD *)this + 299) = 2 * v133;
    v135 = 5 * v134;
    v136 = v197;
    *((_QWORD *)this + 300) = 2 * v135;
    v137 = 5 * v136;
    v138 = v199;
    *((_QWORD *)this + 301) = 2 * v137;
    v139 = 5 * v138;
    v140 = v201;
    *((_QWORD *)this + 302) = 2 * v139;
    v141 = 5 * v140;
    v142 = v203;
    *((_QWORD *)this + 303) = 2 * v141;
    v143 = 5 * v142;
    v144 = v205;
    *((_QWORD *)this + 304) = 2 * v143;
    v145 = 5 * v144;
    v146 = v207;
    *((_QWORD *)this + 305) = 2 * v145;
    *((_QWORD *)this + 306) = 10 * v146;
    *((_QWORD *)this + 315) = (char *)this + 2512;
    *((_QWORD *)this + 314) = (char *)this + 2512;
    KeInitializeSpinLock((PKSPIN_LOCK)this + 320);
    v147 = 0;
    for ( k = 0LL; ; k += 520LL )
    {
      v149 = *((_QWORD *)this + 253);
      *(_BYTE *)(k + v149 + 356) = 1;
      v150 = (DXGADAPTER *)(k + v149 + 424);
      *(_QWORD *)v150 = 0LL;
      *((_QWORD *)v150 + 1) = 0LL;
      v151 = *(_DWORD *)(k + v149 + 208);
      if ( !v151 )
      {
        *(_BYTE *)(k + v149 + 357) = 1;
        v161 = (DXGADAPTER **)*((_QWORD *)this + 319);
        *(_QWORD *)v150 = (char *)this + 2544;
        *((_QWORD *)v150 + 1) = v161;
        if ( *v161 != (DXGADAPTER *)((char *)this + 2544) )
          __fastfail(3u);
        *v161 = v150;
        v162 = 0LL;
        *((_QWORD *)this + 319) = v150;
        v163 = *(_DWORD *)(k + v149 + 8);
        if ( v163 > 1 )
        {
          v164 = (unsigned __int64 *)(k + v149 + 40);
          v165 = v163 - 1;
          do
          {
            if ( v162 < *v164 )
              v162 = *v164;
            v164 += 3;
            --v165;
          }
          while ( v165 );
        }
        *(_DWORD *)(k + v149 + 388) = 1;
        v166 = 0;
        v167 = (unsigned __int64 *)((char *)this + 2216);
        while ( *v167 < v162 )
        {
          ++v166;
          v167 += 2;
          if ( v166 >= 2 )
            goto LABEL_167;
        }
        *(_DWORD *)(k + v149 + 388) = v166;
LABEL_167:
        v168 = *(_DWORD *)(k + v149 + 4);
        *(_DWORD *)(k + v149 + 384) = 2;
        DXGADAPTER::SetPowerComponentLatencyCB(this, v168, *(_QWORD *)(*((_QWORD *)this + 289) + 32LL));
        ++*((_DWORD *)this + 546);
        goto LABEL_168;
      }
      v152 = v151 - 1;
      if ( !v152 )
        break;
      v153 = v152 - 1;
      if ( !v153 )
      {
        v160 = v209;
LABEL_155:
        v156 = *(_DWORD *)(k + v149 + 4);
        v158 = 10 * v160;
        v157 = this;
LABEL_148:
        DXGADAPTER::SetPowerComponentLatencyCB(v157, v156, v158);
        goto LABEL_168;
      }
      v154 = v153 - 1;
      if ( !v154 )
      {
        v159 = (DXGADAPTER **)*((_QWORD *)this + 317);
        *(_QWORD *)v150 = (char *)this + 2528;
        *((_QWORD *)v150 + 1) = v159;
        if ( *v159 != (DXGADAPTER *)((char *)this + 2528) )
          __fastfail(3u);
        *v159 = v150;
        *((_QWORD *)this + 317) = v150;
        if ( (*(_DWORD *)(k + v149 + 216) & 0x10) != 0 )
          *(_BYTE *)(k + v149 + 360) = 1;
        goto LABEL_168;
      }
      v155 = v154 - 1;
      if ( v155 && v155 != 2 )
      {
        v156 = *(_DWORD *)(k + v149 + 4);
        v157 = this;
        if ( v185 == -1 )
          v158 = -1LL;
        else
          v158 = 10LL * v185;
        goto LABEL_148;
      }
LABEL_168:
      if ( v184 == -1 )
        v169 = -1LL;
      else
        v169 = 10000LL * v184;
      DXGADAPTER::SetPowerComponentResidencyCB(this, *(_DWORD *)(k + v149 + 4), v169);
      KeInitializeSpinLock((PKSPIN_LOCK)(k + v149 + 504));
      if ( *(_DWORD *)(k + v149 + 8) <= 1u || (v170 = *(_QWORD *)(k + v149 + 48), v170 == -1) )
      {
        v171 = *((_QWORD *)this + 321);
      }
      else
      {
        v171 = *((_QWORD *)this + 321);
        if ( v170 > v171 )
          v171 = *(_QWORD *)(k + v149 + 48);
      }
      *(_QWORD *)(k + v149 + 496) = v171;
      if ( ++v147 >= v6 )
      {
        DXGADAPTER::UpdateLatencyTolerances(this);
        PoFxSetDeviceIdleTimeout(*v109, 10LL * v213);
        DpiEnablePowerManagement(*((_QWORD *)this + 22), *v109);
        sub_1C0124FCC(&v174);
        return 0LL;
      }
    }
    v160 = v211;
    goto LABEL_155;
  }
  v94 = *((_QWORD *)this + 366);
  while ( 1 )
  {
    v95 = v92;
    v96 = 248LL * v92;
    v97 = *(unsigned int *)(v96 + v94 + 144);
    if ( *(_DWORD *)(v96 + v94) > 0x20u )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v92);
      v52[3] = v97;
      goto LABEL_84;
    }
    v98 = *(_DWORD *)(v96 + v94);
    v99 = 0;
    if ( v98 )
      break;
LABEL_121:
    if ( ++v92 >= v93 )
      goto LABEL_122;
  }
  v100 = 62LL * v92;
  while ( 1 )
  {
    v101 = *(_DWORD *)(v94 + 4 * (v100 + v99) + 4);
    if ( !v101 )
      break;
    if ( v99 )
    {
      v95 = v100 + v99 - 1;
      if ( v101 > *(_DWORD *)(v94 + 4 * v95 + 4) )
      {
        v52 = (_QWORD *)WdLogNewEntry5_WdError(v95);
        v52[3] = v97;
        v52[4] = v99;
        v52[5] = v99 - 1;
        goto LABEL_84;
      }
    }
    if ( ++v99 >= v98 )
      goto LABEL_121;
  }
  v52 = (_QWORD *)WdLogNewEntry5_WdError(v95);
  v52[3] = v97;
  v52[4] = v99;
LABEL_84:
  WdLogEvent5_WdError(v52);
  LODWORD(v18) = -1073741811;
LABEL_136:
  sub_1C0124FCC(&v174);
LABEL_137:
  if ( *((_QWORD *)this + 254) )
  {
    PoFxUnregisterDevice();
    *((_QWORD *)this + 254) = 0LL;
  }
  return (unsigned int)v18;
}
