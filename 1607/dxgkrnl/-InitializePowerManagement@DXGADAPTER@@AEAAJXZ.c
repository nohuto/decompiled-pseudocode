/*
 * XREFs of ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C00E72A8
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00E5674 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0008728 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiEnablePowerManagement @ 0x1C00128DC (DpiEnablePowerManagement.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C001CAA0 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C001CC80 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C001E700 (-SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C009F708 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B4048 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0147ED4 (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0148F20 (-InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall DXGADAPTER::InitializePowerManagement(DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  unsigned int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  bool v11; // zf
  __int64 v12; // rcx
  unsigned int v13; // r14d
  unsigned int NumDifferentPhysicalAdapters; // esi
  unsigned int v15; // ebx
  DXGADAPTER *v16; // rcx
  __int64 v17; // r8
  int AdapterInfo; // eax
  __int64 v19; // rbx
  __int64 v20; // rax
  SIZE_T v21; // rax
  PVOID v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rsi
  unsigned int v26; // ecx
  unsigned int v27; // ebx
  __int64 v28; // r13
  unsigned int v29; // r14d
  __int64 v30; // r8
  unsigned int v31; // eax
  __int64 v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // r12
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r9
  __int64 v39; // rcx
  __int16 v40; // dx
  __int64 v41; // rdx
  __int64 v42; // rbx
  unsigned int v43; // eax
  int v44; // eax
  _QWORD *v45; // rax
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned int v50; // eax
  void *v51; // rcx
  char *v52; // rdx
  __int64 v53; // rax
  unsigned int v54; // r9d
  __int64 v55; // rax
  __int64 v56; // rcx
  int v57; // edx
  unsigned int v58; // edx
  __int64 v59; // rcx
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rcx
  __int64 v62; // rcx
  SIZE_T v63; // rax
  PVOID v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned int v69; // edx
  __int64 j; // r8
  __int64 v71; // r10
  __int64 v72; // r9
  unsigned int v73; // edx
  __int64 v74; // rbx
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // r14
  int v81; // eax
  __int64 v82; // rax
  unsigned int v83; // ecx
  __int64 v84; // rdx
  __int64 v85; // rax
  void *v86; // rcx
  unsigned int v87; // r8d
  unsigned int v88; // r12d
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // r14
  unsigned int v93; // r11d
  unsigned int v94; // ebx
  __int64 v95; // r10
  unsigned int v96; // r9d
  ADAPTER_RENDER *v97; // rcx
  int v98; // eax
  __int64 v99; // rcx
  ADAPTER_DISPLAY *v100; // rcx
  int v101; // eax
  __int64 v102; // rcx
  int v103; // eax
  __int64 v104; // rcx
  unsigned __int64 TimeIncrement; // rbx
  __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rax
  unsigned __int64 v119; // rtt
  __int64 v120; // rax
  unsigned __int64 v121; // rtt
  __int64 v122; // rax
  __int64 v123; // rcx
  unsigned __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rax
  __int64 v136; // rcx
  __int64 v137; // rax
  __int64 v138; // rcx
  __int64 v139; // rax
  __int64 v140; // rcx
  __int64 v141; // rax
  __int64 v142; // r15
  __int64 v143; // rbx
  __int64 v144; // r14
  DXGADAPTER *v145; // rdx
  int v146; // ecx
  int v147; // ecx
  int v148; // ecx
  int v149; // ecx
  int v150; // ecx
  DXGADAPTER *v151; // rcx
  int v152; // edx
  __int64 v153; // r8
  DXGADAPTER **v154; // rcx
  __int64 v155; // rax
  DXGADAPTER **v156; // rcx
  unsigned __int64 v157; // rcx
  unsigned int v158; // eax
  unsigned __int64 *v159; // rdx
  __int64 v160; // r8
  unsigned int v161; // eax
  unsigned __int64 *v162; // rdx
  int v163; // edx
  __int64 v164; // r8
  __int64 v165; // rcx
  __int64 v166; // rax
  struct _SLIST_ENTRY *v167; // rbx
  __int64 v168; // r14
  NTSTATUS SystemThread; // eax
  __int64 v170; // rcx
  __int64 v171; // rax
  __int64 v172; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v173; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v174; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v175; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v176; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v177; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v178; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v179; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v180; // [rsp+70h] [rbp-98h]
  unsigned int v181; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v182; // [rsp+78h] [rbp-90h] BYREF
  int v183; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v184; // [rsp+80h] [rbp-88h] BYREF
  int v185; // [rsp+84h] [rbp-84h] BYREF
  int v186; // [rsp+88h] [rbp-80h] BYREF
  int v187; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned int v188; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v189; // [rsp+94h] [rbp-74h] BYREF
  unsigned int v190; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v191; // [rsp+9Ch] [rbp-6Ch] BYREF
  unsigned int v192; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v193; // [rsp+A4h] [rbp-64h] BYREF
  unsigned int v194; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v195; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v196; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v197; // [rsp+B4h] [rbp-54h] BYREF
  unsigned int v198; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v199; // [rsp+BCh] [rbp-4Ch] BYREF
  unsigned int v200; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v201; // [rsp+C4h] [rbp-44h] BYREF
  unsigned int v202; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v203; // [rsp+CCh] [rbp-3Ch] BYREF
  unsigned int v204; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v205; // [rsp+D4h] [rbp-34h] BYREF
  unsigned int v206; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v207; // [rsp+DCh] [rbp-2Ch] BYREF
  unsigned int v208; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v209; // [rsp+E4h] [rbp-24h] BYREF
  unsigned int v210; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v211; // [rsp+ECh] [rbp-1Ch] BYREF
  unsigned int v212; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v213; // [rsp+F4h] [rbp-14h] BYREF
  int v214; // [rsp+F8h] [rbp-10h] BYREF
  int v215; // [rsp+FCh] [rbp-Ch] BYREF
  int v216; // [rsp+100h] [rbp-8h] BYREF
  int v217; // [rsp+104h] [rbp-4h] BYREF
  int v218; // [rsp+108h] [rbp+0h] BYREF
  int v219; // [rsp+10Ch] [rbp+4h] BYREF
  int v220; // [rsp+110h] [rbp+8h] BYREF
  int v221; // [rsp+114h] [rbp+Ch] BYREF
  int v222; // [rsp+118h] [rbp+10h] BYREF
  int v223; // [rsp+11Ch] [rbp+14h] BYREF
  int v224; // [rsp+120h] [rbp+18h] BYREF
  int v225; // [rsp+124h] [rbp+1Ch] BYREF
  int v226; // [rsp+128h] [rbp+20h] BYREF
  int v227; // [rsp+12Ch] [rbp+24h] BYREF
  int v228; // [rsp+130h] [rbp+28h] BYREF
  int v229; // [rsp+134h] [rbp+2Ch] BYREF
  int v230; // [rsp+138h] [rbp+30h] BYREF
  int v231; // [rsp+13Ch] [rbp+34h] BYREF
  int v232; // [rsp+140h] [rbp+38h] BYREF
  int v233; // [rsp+144h] [rbp+3Ch] BYREF
  int v234; // [rsp+148h] [rbp+40h] BYREF
  int v235; // [rsp+14Ch] [rbp+44h] BYREF
  int v236; // [rsp+150h] [rbp+48h] BYREF
  int v237; // [rsp+154h] [rbp+4Ch] BYREF
  int v238; // [rsp+158h] [rbp+50h] BYREF
  int v239; // [rsp+15Ch] [rbp+54h] BYREF
  int v240; // [rsp+160h] [rbp+58h] BYREF
  int v241; // [rsp+164h] [rbp+5Ch] BYREF
  int v242; // [rsp+168h] [rbp+60h] BYREF
  int v243; // [rsp+16Ch] [rbp+64h] BYREF
  int v244; // [rsp+170h] [rbp+68h] BYREF
  int v245; // [rsp+174h] [rbp+6Ch] BYREF
  int v246; // [rsp+178h] [rbp+70h] BYREF
  int v247; // [rsp+17Ch] [rbp+74h] BYREF
  int v248; // [rsp+180h] [rbp+78h] BYREF
  int v249; // [rsp+184h] [rbp+7Ch] BYREF
  int v250; // [rsp+188h] [rbp+80h] BYREF
  int v251; // [rsp+18Ch] [rbp+84h] BYREF
  int v252; // [rsp+190h] [rbp+88h] BYREF
  int v253; // [rsp+194h] [rbp+8Ch] BYREF
  void *i; // [rsp+198h] [rbp+90h]
  _BYTE v255[88]; // [rsp+1A0h] [rbp+98h] BYREF
  __int64 v256; // [rsp+1F8h] [rbp+F0h]
  __int64 v257; // [rsp+200h] [rbp+F8h]
  _QWORD *v258; // [rsp+208h] [rbp+100h]
  __int64 v259; // [rsp+218h] [rbp+110h] BYREF
  int v260; // [rsp+220h] [rbp+118h]
  const wchar_t *v261; // [rsp+228h] [rbp+120h]
  int *v262; // [rsp+230h] [rbp+128h]
  int v263; // [rsp+238h] [rbp+130h]
  int *v264; // [rsp+240h] [rbp+138h]
  int v265; // [rsp+248h] [rbp+140h]
  __int64 v266; // [rsp+250h] [rbp+148h]
  int v267; // [rsp+258h] [rbp+150h]
  _BYTE v268[40]; // [rsp+260h] [rbp+158h] BYREF
  __int64 v269; // [rsp+288h] [rbp+180h] BYREF
  int v270; // [rsp+290h] [rbp+188h]
  const wchar_t *v271; // [rsp+298h] [rbp+190h]
  char *v272; // [rsp+2A0h] [rbp+198h]
  int v273; // [rsp+2A8h] [rbp+1A0h]
  unsigned int *v274; // [rsp+2B0h] [rbp+1A8h]
  int v275; // [rsp+2B8h] [rbp+1B0h]
  __int64 v276; // [rsp+2C0h] [rbp+1B8h]
  int v277; // [rsp+2C8h] [rbp+1C0h]
  const wchar_t *v278; // [rsp+2D0h] [rbp+1C8h]
  __int64 *v279; // [rsp+2D8h] [rbp+1D0h]
  int v280; // [rsp+2E0h] [rbp+1D8h]
  int *v281; // [rsp+2E8h] [rbp+1E0h]
  int v282; // [rsp+2F0h] [rbp+1E8h]
  __int64 v283; // [rsp+2F8h] [rbp+1F0h]
  int v284; // [rsp+300h] [rbp+1F8h]
  const wchar_t *v285; // [rsp+308h] [rbp+200h]
  unsigned int *v286; // [rsp+310h] [rbp+208h]
  int v287; // [rsp+318h] [rbp+210h]
  int *v288; // [rsp+320h] [rbp+218h]
  int v289; // [rsp+328h] [rbp+220h]
  __int64 v290; // [rsp+330h] [rbp+228h]
  int v291; // [rsp+338h] [rbp+230h]
  const wchar_t *v292; // [rsp+340h] [rbp+238h]
  unsigned int *v293; // [rsp+348h] [rbp+240h]
  int v294; // [rsp+350h] [rbp+248h]
  int *v295; // [rsp+358h] [rbp+250h]
  int v296; // [rsp+360h] [rbp+258h]
  __int64 v297; // [rsp+368h] [rbp+260h]
  int v298; // [rsp+370h] [rbp+268h]
  const wchar_t *v299; // [rsp+378h] [rbp+270h]
  unsigned int *v300; // [rsp+380h] [rbp+278h]
  int v301; // [rsp+388h] [rbp+280h]
  int *v302; // [rsp+390h] [rbp+288h]
  int v303; // [rsp+398h] [rbp+290h]
  __int64 v304; // [rsp+3A0h] [rbp+298h]
  int v305; // [rsp+3A8h] [rbp+2A0h]
  const wchar_t *v306; // [rsp+3B0h] [rbp+2A8h]
  unsigned int *v307; // [rsp+3B8h] [rbp+2B0h]
  int v308; // [rsp+3C0h] [rbp+2B8h]
  int *v309; // [rsp+3C8h] [rbp+2C0h]
  int v310; // [rsp+3D0h] [rbp+2C8h]
  __int64 v311; // [rsp+3D8h] [rbp+2D0h]
  int v312; // [rsp+3E0h] [rbp+2D8h]
  const wchar_t *v313; // [rsp+3E8h] [rbp+2E0h]
  unsigned int *v314; // [rsp+3F0h] [rbp+2E8h]
  int v315; // [rsp+3F8h] [rbp+2F0h]
  int *v316; // [rsp+400h] [rbp+2F8h]
  int v317; // [rsp+408h] [rbp+300h]
  __int64 v318; // [rsp+410h] [rbp+308h]
  int v319; // [rsp+418h] [rbp+310h]
  const wchar_t *v320; // [rsp+420h] [rbp+318h]
  unsigned int *v321; // [rsp+428h] [rbp+320h]
  int v322; // [rsp+430h] [rbp+328h]
  int *v323; // [rsp+438h] [rbp+330h]
  int v324; // [rsp+440h] [rbp+338h]
  __int64 v325; // [rsp+448h] [rbp+340h]
  int v326; // [rsp+450h] [rbp+348h]
  const wchar_t *v327; // [rsp+458h] [rbp+350h]
  unsigned int *v328; // [rsp+460h] [rbp+358h]
  int v329; // [rsp+468h] [rbp+360h]
  int *v330; // [rsp+470h] [rbp+368h]
  int v331; // [rsp+478h] [rbp+370h]
  __int64 v332; // [rsp+480h] [rbp+378h]
  int v333; // [rsp+488h] [rbp+380h]
  const wchar_t *v334; // [rsp+490h] [rbp+388h]
  unsigned int *v335; // [rsp+498h] [rbp+390h]
  int v336; // [rsp+4A0h] [rbp+398h]
  int *v337; // [rsp+4A8h] [rbp+3A0h]
  int v338; // [rsp+4B0h] [rbp+3A8h]
  __int64 v339; // [rsp+4B8h] [rbp+3B0h]
  int v340; // [rsp+4C0h] [rbp+3B8h]
  const wchar_t *v341; // [rsp+4C8h] [rbp+3C0h]
  int *v342; // [rsp+4D0h] [rbp+3C8h]
  int v343; // [rsp+4D8h] [rbp+3D0h]
  int *v344; // [rsp+4E0h] [rbp+3D8h]
  int v345; // [rsp+4E8h] [rbp+3E0h]
  __int64 v346; // [rsp+4F0h] [rbp+3E8h]
  int v347; // [rsp+4F8h] [rbp+3F0h]
  const wchar_t *v348; // [rsp+500h] [rbp+3F8h]
  unsigned int *v349; // [rsp+508h] [rbp+400h]
  int v350; // [rsp+510h] [rbp+408h]
  int *v351; // [rsp+518h] [rbp+410h]
  int v352; // [rsp+520h] [rbp+418h]
  __int64 v353; // [rsp+528h] [rbp+420h]
  int v354; // [rsp+530h] [rbp+428h]
  const wchar_t *v355; // [rsp+538h] [rbp+430h]
  int *v356; // [rsp+540h] [rbp+438h]
  int v357; // [rsp+548h] [rbp+440h]
  int *v358; // [rsp+550h] [rbp+448h]
  int v359; // [rsp+558h] [rbp+450h]
  __int64 v360; // [rsp+560h] [rbp+458h]
  int v361; // [rsp+568h] [rbp+460h]
  const wchar_t *v362; // [rsp+570h] [rbp+468h]
  unsigned int *v363; // [rsp+578h] [rbp+470h]
  int v364; // [rsp+580h] [rbp+478h]
  int *v365; // [rsp+588h] [rbp+480h]
  int v366; // [rsp+590h] [rbp+488h]
  __int64 v367; // [rsp+598h] [rbp+490h]
  int v368; // [rsp+5A0h] [rbp+498h]
  const wchar_t *v369; // [rsp+5A8h] [rbp+4A0h]
  unsigned int *v370; // [rsp+5B0h] [rbp+4A8h]
  int v371; // [rsp+5B8h] [rbp+4B0h]
  int *v372; // [rsp+5C0h] [rbp+4B8h]
  int v373; // [rsp+5C8h] [rbp+4C0h]
  __int64 v374; // [rsp+5D0h] [rbp+4C8h]
  int v375; // [rsp+5D8h] [rbp+4D0h]
  const wchar_t *v376; // [rsp+5E0h] [rbp+4D8h]
  unsigned int *v377; // [rsp+5E8h] [rbp+4E0h]
  int v378; // [rsp+5F0h] [rbp+4E8h]
  int *v379; // [rsp+5F8h] [rbp+4F0h]
  int v380; // [rsp+600h] [rbp+4F8h]
  __int64 v381; // [rsp+608h] [rbp+500h]
  int v382; // [rsp+610h] [rbp+508h]
  const wchar_t *v383; // [rsp+618h] [rbp+510h]
  unsigned int *v384; // [rsp+620h] [rbp+518h]
  int v385; // [rsp+628h] [rbp+520h]
  int *v386; // [rsp+630h] [rbp+528h]
  int v387; // [rsp+638h] [rbp+530h]
  __int64 v388; // [rsp+640h] [rbp+538h]
  int v389; // [rsp+648h] [rbp+540h]
  const wchar_t *v390; // [rsp+650h] [rbp+548h]
  unsigned int *v391; // [rsp+658h] [rbp+550h]
  int v392; // [rsp+660h] [rbp+558h]
  int *v393; // [rsp+668h] [rbp+560h]
  int v394; // [rsp+670h] [rbp+568h]
  __int64 v395; // [rsp+678h] [rbp+570h]
  int v396; // [rsp+680h] [rbp+578h]
  const wchar_t *v397; // [rsp+688h] [rbp+580h]
  unsigned int *v398; // [rsp+690h] [rbp+588h]
  int v399; // [rsp+698h] [rbp+590h]
  int *v400; // [rsp+6A0h] [rbp+598h]
  int v401; // [rsp+6A8h] [rbp+5A0h]
  __int64 v402; // [rsp+6B0h] [rbp+5A8h]
  int v403; // [rsp+6B8h] [rbp+5B0h]
  const wchar_t *v404; // [rsp+6C0h] [rbp+5B8h]
  unsigned int *v405; // [rsp+6C8h] [rbp+5C0h]
  int v406; // [rsp+6D0h] [rbp+5C8h]
  int *v407; // [rsp+6D8h] [rbp+5D0h]
  int v408; // [rsp+6E0h] [rbp+5D8h]
  __int64 v409; // [rsp+6E8h] [rbp+5E0h]
  int v410; // [rsp+6F0h] [rbp+5E8h]
  const wchar_t *v411; // [rsp+6F8h] [rbp+5F0h]
  unsigned int *v412; // [rsp+700h] [rbp+5F8h]
  int v413; // [rsp+708h] [rbp+600h]
  int *v414; // [rsp+710h] [rbp+608h]
  int v415; // [rsp+718h] [rbp+610h]
  __int64 v416; // [rsp+720h] [rbp+618h]
  int v417; // [rsp+728h] [rbp+620h]
  const wchar_t *v418; // [rsp+730h] [rbp+628h]
  int *v419; // [rsp+738h] [rbp+630h]
  int v420; // [rsp+740h] [rbp+638h]
  int *v421; // [rsp+748h] [rbp+640h]
  int v422; // [rsp+750h] [rbp+648h]
  __int64 v423; // [rsp+758h] [rbp+650h]
  int v424; // [rsp+760h] [rbp+658h]
  const wchar_t *v425; // [rsp+768h] [rbp+660h]
  int *v426; // [rsp+770h] [rbp+668h]
  int v427; // [rsp+778h] [rbp+670h]
  int *v428; // [rsp+780h] [rbp+678h]
  int v429; // [rsp+788h] [rbp+680h]
  __int64 v430; // [rsp+790h] [rbp+688h]
  int v431; // [rsp+798h] [rbp+690h]
  const wchar_t *v432; // [rsp+7A0h] [rbp+698h]
  int *v433; // [rsp+7A8h] [rbp+6A0h]
  int v434; // [rsp+7B0h] [rbp+6A8h]
  int *v435; // [rsp+7B8h] [rbp+6B0h]
  int v436; // [rsp+7C0h] [rbp+6B8h]
  __int64 v437; // [rsp+7C8h] [rbp+6C0h]
  int v438; // [rsp+7D0h] [rbp+6C8h]
  const wchar_t *v439; // [rsp+7D8h] [rbp+6D0h]
  unsigned int *v440; // [rsp+7E0h] [rbp+6D8h]
  int v441; // [rsp+7E8h] [rbp+6E0h]
  int *v442; // [rsp+7F0h] [rbp+6E8h]
  int v443; // [rsp+7F8h] [rbp+6F0h]
  __int64 v444; // [rsp+800h] [rbp+6F8h]
  int v445; // [rsp+808h] [rbp+700h]
  const wchar_t *v446; // [rsp+810h] [rbp+708h]
  unsigned int *v447; // [rsp+818h] [rbp+710h]
  int v448; // [rsp+820h] [rbp+718h]
  int *v449; // [rsp+828h] [rbp+720h]
  int v450; // [rsp+830h] [rbp+728h]
  __int64 v451; // [rsp+838h] [rbp+730h]
  int v452; // [rsp+840h] [rbp+738h]
  const wchar_t *v453; // [rsp+848h] [rbp+740h]
  unsigned int *v454; // [rsp+850h] [rbp+748h]
  int v455; // [rsp+858h] [rbp+750h]
  int *v456; // [rsp+860h] [rbp+758h]
  int v457; // [rsp+868h] [rbp+760h]
  __int64 v458; // [rsp+870h] [rbp+768h]
  int v459; // [rsp+878h] [rbp+770h]
  const wchar_t *v460; // [rsp+880h] [rbp+778h]
  unsigned int *v461; // [rsp+888h] [rbp+780h]
  int v462; // [rsp+890h] [rbp+788h]
  int *v463; // [rsp+898h] [rbp+790h]
  int v464; // [rsp+8A0h] [rbp+798h]
  __int64 v465; // [rsp+8A8h] [rbp+7A0h]
  int v466; // [rsp+8B0h] [rbp+7A8h]
  const wchar_t *v467; // [rsp+8B8h] [rbp+7B0h]
  unsigned int *v468; // [rsp+8C0h] [rbp+7B8h]
  int v469; // [rsp+8C8h] [rbp+7C0h]
  int *v470; // [rsp+8D0h] [rbp+7C8h]
  int v471; // [rsp+8D8h] [rbp+7D0h]
  __int64 v472; // [rsp+8E0h] [rbp+7D8h]
  int v473; // [rsp+8E8h] [rbp+7E0h]
  const wchar_t *v474; // [rsp+8F0h] [rbp+7E8h]
  unsigned int *v475; // [rsp+8F8h] [rbp+7F0h]
  int v476; // [rsp+900h] [rbp+7F8h]
  int *v477; // [rsp+908h] [rbp+800h]
  int v478; // [rsp+910h] [rbp+808h]
  __int64 v479; // [rsp+918h] [rbp+810h]
  int v480; // [rsp+920h] [rbp+818h]
  const wchar_t *v481; // [rsp+928h] [rbp+820h]
  unsigned int *v482; // [rsp+930h] [rbp+828h]
  int v483; // [rsp+938h] [rbp+830h]
  int *v484; // [rsp+940h] [rbp+838h]
  int v485; // [rsp+948h] [rbp+840h]
  __int64 v486; // [rsp+950h] [rbp+848h]
  int v487; // [rsp+958h] [rbp+850h]
  const wchar_t *v488; // [rsp+960h] [rbp+858h]
  unsigned int *v489; // [rsp+968h] [rbp+860h]
  int v490; // [rsp+970h] [rbp+868h]
  int *v491; // [rsp+978h] [rbp+870h]
  int v492; // [rsp+980h] [rbp+878h]
  __int64 v493; // [rsp+988h] [rbp+880h]
  int v494; // [rsp+990h] [rbp+888h]
  const wchar_t *v495; // [rsp+998h] [rbp+890h]
  unsigned int *v496; // [rsp+9A0h] [rbp+898h]
  int v497; // [rsp+9A8h] [rbp+8A0h]
  int *v498; // [rsp+9B0h] [rbp+8A8h]
  int v499; // [rsp+9B8h] [rbp+8B0h]
  __int64 v500; // [rsp+9C0h] [rbp+8B8h]
  int v501; // [rsp+9C8h] [rbp+8C0h]
  const wchar_t *v502; // [rsp+9D0h] [rbp+8C8h]
  unsigned int *v503; // [rsp+9D8h] [rbp+8D0h]
  int v504; // [rsp+9E0h] [rbp+8D8h]
  int *v505; // [rsp+9E8h] [rbp+8E0h]
  int v506; // [rsp+9F0h] [rbp+8E8h]
  __int64 v507; // [rsp+9F8h] [rbp+8F0h]
  int v508; // [rsp+A00h] [rbp+8F8h]
  const wchar_t *v509; // [rsp+A08h] [rbp+900h]
  unsigned int *v510; // [rsp+A10h] [rbp+908h]
  int v511; // [rsp+A18h] [rbp+910h]
  int *v512; // [rsp+A20h] [rbp+918h]
  int v513; // [rsp+A28h] [rbp+920h]
  __int64 v514; // [rsp+A30h] [rbp+928h]
  int v515; // [rsp+A38h] [rbp+930h]
  const wchar_t *v516; // [rsp+A40h] [rbp+938h]
  unsigned int *v517; // [rsp+A48h] [rbp+940h]
  int v518; // [rsp+A50h] [rbp+948h]
  int *v519; // [rsp+A58h] [rbp+950h]
  int v520; // [rsp+A60h] [rbp+958h]
  __int64 v521; // [rsp+A68h] [rbp+960h]
  int v522; // [rsp+A70h] [rbp+968h]
  const wchar_t *v523; // [rsp+A78h] [rbp+970h]
  unsigned int *v524; // [rsp+A80h] [rbp+978h]
  int v525; // [rsp+A88h] [rbp+980h]
  int *v526; // [rsp+A90h] [rbp+988h]
  int v527; // [rsp+A98h] [rbp+990h]
  __int64 v528; // [rsp+AA0h] [rbp+998h]
  int v529; // [rsp+AA8h] [rbp+9A0h]
  const wchar_t *v530; // [rsp+AB0h] [rbp+9A8h]
  unsigned int *v531; // [rsp+AB8h] [rbp+9B0h]
  int v532; // [rsp+AC0h] [rbp+9B8h]
  int *v533; // [rsp+AC8h] [rbp+9C0h]
  int v534; // [rsp+AD0h] [rbp+9C8h]
  __int64 v535; // [rsp+AD8h] [rbp+9D0h]
  int v536; // [rsp+AE0h] [rbp+9D8h]
  const wchar_t *v537; // [rsp+AE8h] [rbp+9E0h]
  unsigned int *v538; // [rsp+AF0h] [rbp+9E8h]
  int v539; // [rsp+AF8h] [rbp+9F0h]
  int *v540; // [rsp+B00h] [rbp+9F8h]
  int v541; // [rsp+B08h] [rbp+A00h]
  __int64 v542; // [rsp+B10h] [rbp+A08h]
  int v543; // [rsp+B18h] [rbp+A10h]
  _BYTE v544[296]; // [rsp+B20h] [rbp+A18h] BYREF

  if ( !*((_BYTE *)this + 1997) )
  {
    v5 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 3828LL;
LABEL_3:
    WdLogEvent5_WdWarning(v5);
    return 0LL;
  }
  v235 = 3;
  v215 = -1;
  v181 = -1;
  v216 = 2000;
  v219 = 35000;
  v190 = 35000;
  v7 = 0;
  v182 = 2000;
  v221 = 50000;
  v193 = 50000;
  v222 = 100000;
  v194 = 100000;
  v227 = 300000;
  v212 = 300000;
  v228 = 17000;
  v211 = 17000;
  v223 = 200;
  v187 = 200;
  v224 = 200;
  v191 = 200;
  v226 = 100;
  v225 = 100;
  v229 = 25000;
  v213 = 25000;
  v231 = 300;
  v174 = 300;
  v232 = 700;
  v177 = 700;
  v233 = 900;
  v175 = 900;
  v234 = 500;
  v178 = 500;
  v240 = 140000;
  v200 = 140000;
  v241 = 200000;
  v202 = 200000;
  v242 = 250000;
  v203 = 250000;
  v243 = 250000;
  v204 = 250000;
  v220 = 2000;
  v192 = 2000;
  v230 = 2000;
  v195 = 2000;
  v244 = 10000;
  v197 = 10000;
  v217 = 80;
  v188 = 80;
  v218 = 15000;
  v189 = 15000;
  v186 = 3;
  v236 = 0;
  v184 = 0;
  v237 = 0;
  v185 = 0;
  v238 = 80;
  v196 = 80;
  v239 = 80000;
  v198 = 80000;
  v245 = 60000;
  v199 = 60000;
  v246 = 60000;
  v201 = 60000;
  v247 = 15000;
  v248 = 30000;
  v206 = 30000;
  v251 = 30000;
  v209 = 30000;
  v261 = L"UseSelfRefreshVRAMInS3";
  v262 = &v183;
  v205 = 15000;
  v249 = 80;
  v207 = 80;
  v250 = 15000;
  v208 = 15000;
  v252 = 80000;
  v210 = 80000;
  v264 = &v214;
  v214 = 1;
  v183 = 1;
  v179 = 1;
  v176 = 0;
  v172 = 0x100000000LL;
  v259 = 0LL;
  v260 = 288;
  v263 = 67108868;
  v265 = 4;
  v266 = 0LL;
  v267 = 0;
  memset(v268, 0, sizeof(v268));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Power", &v259, 0LL, 0LL);
  v269 = 0LL;
  v271 = L"EnableRuntimePowerManagement";
  v272 = (char *)&v172 + 4;
  v274 = &v179;
  v278 = L"DisableDevicePowerRequired";
  v279 = &v172;
  v281 = (int *)&v176;
  v285 = L"DefaultLatencyToleranceOther";
  v286 = &v181;
  v288 = &v215;
  v270 = 288;
  v273 = 67108868;
  v275 = 4;
  v276 = 0LL;
  v277 = 288;
  v280 = 67108868;
  v282 = 4;
  v283 = 0LL;
  v284 = 288;
  v287 = 67108868;
  v289 = 4;
  v290 = 0LL;
  v291 = 288;
  v294 = 67108868;
  v292 = L"DefaultExpectedResidency";
  v293 = &v182;
  v295 = &v216;
  v299 = L"DefaultLatencyToleranceIdle0";
  v300 = &v188;
  v302 = &v217;
  v306 = L"DefaultLatencyToleranceIdle1";
  v307 = &v189;
  v309 = &v218;
  v313 = L"DefaultLatencyToleranceNoContext";
  v314 = &v190;
  v316 = &v219;
  v320 = L"DefaultLatencyToleranceIdle0MonitorOff";
  v321 = &v192;
  v323 = &v220;
  v327 = L"DefaultLatencyToleranceIdle1MonitorOff";
  v328 = &v193;
  v330 = &v221;
  v334 = L"DefaultLatencyToleranceNoContextMonitorOff";
  v335 = &v194;
  v337 = &v222;
  v341 = L"DefaultLatencyToleranceTimerPeriod";
  v342 = &v187;
  v344 = &v223;
  v296 = 4;
  v297 = 0LL;
  v298 = 288;
  v301 = 67108868;
  v303 = 4;
  v304 = 0LL;
  v305 = 288;
  v308 = 67108868;
  v310 = 4;
  v311 = 0LL;
  v312 = 288;
  v315 = 67108868;
  v317 = 4;
  v318 = 0LL;
  v319 = 288;
  v322 = 67108868;
  v324 = 4;
  v325 = 0LL;
  v326 = 288;
  v329 = 67108868;
  v331 = 4;
  v332 = 0LL;
  v333 = 288;
  v336 = 67108868;
  v338 = 4;
  v339 = 0LL;
  v340 = 288;
  v343 = 67108868;
  v345 = 4;
  v346 = 0LL;
  v347 = 288;
  v348 = L"DefaultIdleThresholdIdle0";
  v349 = &v191;
  v351 = &v224;
  v355 = L"DefaultIdleThresholdIdle0MonitorOff";
  v356 = &v225;
  v358 = &v226;
  v362 = L"MonitorLatencyTolerance";
  v363 = &v212;
  v365 = &v227;
  v369 = L"MonitorRefreshLatencyTolerance";
  v370 = &v211;
  v372 = &v228;
  v376 = L"DefaultPowerNotRequiredTimeout";
  v377 = &v213;
  v379 = &v229;
  v383 = L"DefaultActiveIdleThreshold";
  v384 = &v195;
  v386 = &v230;
  v390 = L"ulow";
  v391 = &v174;
  v393 = &v231;
  v397 = L"uhigh";
  v398 = &v177;
  v400 = &v232;
  v404 = L"uglitch";
  v350 = 67108868;
  v352 = 4;
  v353 = 0LL;
  v354 = 288;
  v357 = 67108868;
  v359 = 4;
  v360 = 0LL;
  v361 = 288;
  v364 = 67108868;
  v366 = 4;
  v367 = 0LL;
  v368 = 288;
  v371 = 67108868;
  v373 = 4;
  v374 = 0LL;
  v375 = 288;
  v378 = 67108868;
  v380 = 4;
  v381 = 0LL;
  v382 = 288;
  v385 = 67108868;
  v387 = 4;
  v388 = 0LL;
  v389 = 288;
  v392 = 67108868;
  v394 = 4;
  v395 = 0LL;
  v396 = 288;
  v399 = 67108868;
  v401 = 4;
  v402 = 0LL;
  v403 = 288;
  v406 = 67108868;
  v405 = &v175;
  v407 = &v233;
  v411 = L"uideal";
  v412 = &v178;
  v414 = &v234;
  v418 = L"lowdebounce";
  v419 = &v186;
  v421 = &v235;
  v425 = L"EnablePODebounce";
  v426 = &v184;
  v428 = &v236;
  v432 = L"DisablePStateManagement";
  v433 = &v185;
  v435 = &v237;
  v439 = L"DefaultD3TransitionLatencyActivelyUsed";
  v440 = &v196;
  v442 = &v238;
  v446 = L"DefaultD3TransitionLatencyIdleShortTime";
  v447 = &v198;
  v449 = &v239;
  v453 = L"DefaultD3TransitionLatencyIdleLongTime";
  v454 = &v200;
  v456 = &v240;
  v460 = L"DefaultD3TransitionLatencyIdleVeryLongTime";
  v408 = 4;
  v409 = 0LL;
  v410 = 288;
  v413 = 67108868;
  v415 = 4;
  v416 = 0LL;
  v417 = 288;
  v420 = 67108868;
  v422 = 4;
  v423 = 0LL;
  v424 = 288;
  v427 = 67108868;
  v429 = 4;
  v430 = 0LL;
  v431 = 288;
  v434 = 67108868;
  v436 = 4;
  v437 = 0LL;
  v438 = 288;
  v441 = 67108868;
  v443 = 4;
  v444 = 0LL;
  v445 = 288;
  v448 = 67108868;
  v450 = 4;
  v451 = 0LL;
  v452 = 288;
  v455 = 67108868;
  v457 = 4;
  v458 = 0LL;
  v459 = 288;
  v461 = &v202;
  v463 = &v241;
  v467 = L"DefaultD3TransitionLatencyIdleNoContext";
  v468 = &v203;
  v470 = &v242;
  v474 = L"DefaultD3TransitionLatencyIdleMonitorOff";
  v475 = &v204;
  v477 = &v243;
  v481 = L"DefaultD3TransitionIdleShortTimeThreshold";
  v482 = &v197;
  v484 = &v244;
  v488 = L"DefaultD3TransitionIdleLongTimeThreshold";
  v489 = &v199;
  v491 = &v245;
  v495 = L"DefaultD3TransitionIdleVeryLongTimeThreshold";
  v496 = &v201;
  v498 = &v246;
  v502 = L"DefaultLatencyToleranceMemory";
  v503 = &v205;
  v505 = &v247;
  v509 = L"DefaultLatencyToleranceMemoryNoContext";
  v510 = &v206;
  v512 = &v248;
  v516 = L"DefaultMemoryRefreshLatencyToleranceActivelyUsed";
  v517 = &v207;
  v462 = 67108868;
  v464 = 4;
  v465 = 0LL;
  v466 = 288;
  v469 = 67108868;
  v471 = 4;
  v472 = 0LL;
  v473 = 288;
  v476 = 67108868;
  v478 = 4;
  v479 = 0LL;
  v480 = 288;
  v483 = 67108868;
  v485 = 4;
  v486 = 0LL;
  v487 = 288;
  v490 = 67108868;
  v492 = 4;
  v493 = 0LL;
  v494 = 288;
  v497 = 67108868;
  v499 = 4;
  v500 = 0LL;
  v501 = 288;
  v504 = 67108868;
  v506 = 4;
  v507 = 0LL;
  v508 = 288;
  v511 = 67108868;
  v513 = 4;
  v514 = 0LL;
  v515 = 288;
  v518 = 67108868;
  v519 = &v249;
  v520 = 4;
  v523 = L"DefaultMemoryRefreshLatencyToleranceIdleShortTime";
  v521 = 0LL;
  v524 = &v208;
  v522 = 288;
  v526 = &v250;
  v530 = L"DefaultMemoryRefreshLatencyToleranceNoContext";
  v531 = &v209;
  v533 = &v251;
  v537 = L"DefaultMemoryRefreshLatencyToleranceMonitorOff";
  v538 = &v210;
  v540 = &v252;
  v525 = 67108868;
  v527 = 4;
  v528 = 0LL;
  v529 = 288;
  v532 = 67108868;
  v534 = 4;
  v535 = 0LL;
  v536 = 288;
  v539 = 67108868;
  v541 = 4;
  v542 = 0LL;
  v543 = 0;
  memset(v544, 0, 0x28uLL);
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v269, 0LL, 0LL);
  if ( !HIDWORD(v172) )
    return 0LL;
  v11 = v183 == 0;
  *((_BYTE *)this + 181) = (_DWORD)v172 != 0;
  *((_BYTE *)this + 184) = !v11;
  v12 = *(_QWORD *)(*((_QWORD *)this + 24) + 64LL);
  v13 = *(_DWORD *)(*(_QWORD *)(v12 + 40) + 28LL);
  if ( v13 < 0x5019 )
    NumDifferentPhysicalAdapters = 1;
  else
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(this);
  LODWORD(v172) = NumDifferentPhysicalAdapters;
  v15 = 0;
  LODWORD(v173) = 0;
  if ( !NumDifferentPhysicalAdapters )
    goto LABEL_195;
  do
  {
    memset(&v255[40], 0, 0x28uLL);
    *(_DWORD *)&v255[40] = 6;
    *(_DWORD *)&v255[72] = 4;
    *(_QWORD *)&v255[64] = &v544[4 * v15 + 40];
    if ( DXGADAPTER::IsDxgmms2(this) && v13 >= 0x5019 )
    {
      *(_DWORD *)&v255[56] = 4;
      *(_QWORD *)&v255[48] = &v173;
    }
    AdapterInfo = DXGADAPTER::DdiQueryAdapterInfo(v16, (const struct _DXGKARG_QUERYADAPTERINFO *)&v255[40], v17);
    v19 = AdapterInfo;
    if ( AdapterInfo < 0 )
    {
      v171 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v171 + 24) = this;
      *(_QWORD *)(v171 + 32) = v19;
      WdLogEvent5_WdError(v171);
      return (unsigned int)v19;
    }
    v7 += *(_DWORD *)&v544[4 * (unsigned int)v173 + 40];
    v15 = v173 + 1;
    LODWORD(v173) = v15;
  }
  while ( v15 < NumDifferentPhysicalAdapters );
  if ( !v7 )
  {
LABEL_195:
    v5 = WdLogNewEntry5_WdWarning(v12, v8, v9, v10);
    *(_QWORD *)(v5 + 24) = 3993LL;
    goto LABEL_3;
  }
  if ( v7 > 0xFFFF )
  {
    v20 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v20 + 24) = v7;
    WdLogEvent5_WdError(v20);
    LODWORD(v19) = -1073741811;
    goto LABEL_190;
  }
  *((_DWORD *)this + 578) = v7;
  v21 = 520LL * v7;
  v257 = v7;
  if ( !is_mul_ok(v7, 0x208uLL) )
    v21 = -1LL;
  v22 = operator new[](v21, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 271) = v22;
  if ( !v22
    || (memset(v22, 0, 520LL * v7),
        v24 = operator new[](312 * v7 + 136, 0x4B677844u, PagedPool),
        v258 = v24,
        (v25 = v24) == 0LL) )
  {
    v46 = WdLogNewEntry5_WdLowResource(v23);
    *(_QWORD *)(v46 + 24) = this;
    WdLogEvent5_WdLowResource(v46);
    LODWORD(v19) = -1073741801;
    goto LABEL_190;
  }
  memset(v24, 0, 312 * v7 + 136);
  *(_DWORD *)v25 = 2;
  v25[4] = DxgkPowerRuntimeComponentIdleStateCallback;
  *((_DWORD *)v25 + 18) = v7;
  v25[2] = DxgkPowerRuntimeComponentActiveCallback;
  v25[8] = this;
  v25[3] = DxgkPowerRuntimeComponentIdleCallback;
  v25[5] = DxgkPowerRuntimeDevicePowerRequiredCallback;
  v25[6] = DxgkPowerRuntimeDevicePowerNotRequiredCallback;
  v25[7] = DxgkPowerRuntimeControlCallback;
  memset(v255, 0, 0x28uLL);
  v26 = v172;
  v27 = 0;
  *(_DWORD *)v255 = 7;
  v28 = (__int64)&v25[7 * v7 + 10];
  *(_DWORD *)&v255[16] = 4;
  *(_DWORD *)&v255[32] = 336;
  v29 = 0;
  v180 = 0;
  v30 = 0LL;
  v179 = 0;
  i = (void *)(v28 + 192LL * v7);
  v31 = 0;
  HIDWORD(v172) = 0;
  do
  {
    v32 = v31;
    v33 = 0;
    v256 = v32;
    v176 = 0;
    *((_WORD *)this + v32 + 1092) = v29;
    if ( !*(_DWORD *)&v544[4 * v32 + 40] )
      goto LABEL_76;
    do
    {
      v34 = 7LL * v29;
      v253 = v30 + v33;
      *(_QWORD *)&v255[8] = &v253;
      v35 = *((_QWORD *)this + 271) + 8LL;
      v173 = 520LL * v29;
      *(_QWORD *)&v255[24] = v35 + v173;
      v36 = DXGADAPTER::DdiQueryAdapterInfo(this, (const struct _DXGKARG_QUERYADAPTERINFO *)v255, v30);
      v19 = v36;
      if ( v36 < 0 )
      {
        v68 = WdLogNewEntry5_WdError(v37);
        *(_QWORD *)(v68 + 24) = v29;
        *(_QWORD *)(v68 + 32) = v19;
        goto LABEL_188;
      }
      v39 = v173;
      v40 = v176;
      *(_DWORD *)(v173 + *((_QWORD *)this + 271)) = v29;
      *(_WORD *)(*((_QWORD *)this + 271) + v39 + 4) = v40;
      v41 = HIDWORD(v172);
      *(_WORD *)(*((_QWORD *)this + 271) + v39 + 6) = WORD2(v172);
      v42 = v39 + *((_QWORD *)this + 271);
      HIDWORD(v25[v34 + 13]) = *(_DWORD *)(v42 + 8);
      v43 = *(_DWORD *)(v42 + 8);
      if ( !v43 || v43 > 8 )
      {
        v45 = (_QWORD *)WdLogNewEntry5_WdError(v39);
        v45[3] = v29;
        v45[4] = *(unsigned int *)(v42 + 8);
        v45[5] = 0LL;
        goto LABEL_94;
      }
      *(_OWORD *)&v25[v34 + 10] = *(_OWORD *)(v42 + 220);
      *(_BYTE *)(v42 + 275) = 0;
      v44 = *(_DWORD *)(v42 + 216);
      if ( (v44 & 0xFFFFFFE0) != 0 )
      {
        v45 = (_QWORD *)WdLogNewEntry5_WdError(v39);
        v45[4] = 2LL;
        goto LABEL_92;
      }
      if ( (v44 & 4) != 0 )
        v25[v34 + 12] |= 1uLL;
      if ( !v184 && g_IsInternalRelease )
        v25[v34 + 12] |= 2uLL;
      if ( (*(_DWORD *)(v42 + 216) & 0x10) != 0 )
      {
        if ( *(_DWORD *)(v42 + 208) != 3 )
        {
          v45 = (_QWORD *)WdLogNewEntry5_WdError(v39);
          v45[4] = 4142LL;
          goto LABEL_92;
        }
        if ( *(_DWORD *)(v42 + 8) != 2 )
        {
          v45 = (_QWORD *)WdLogNewEntry5_WdError(v39);
          v45[4] = 4148LL;
          goto LABEL_92;
        }
        if ( *(_QWORD *)(v42 + 40) )
        {
          v45 = (_QWORD *)WdLogNewEntry5_WdError(v39);
          v45[4] = 4154LL;
          goto LABEL_92;
        }
        if ( *(_DWORD *)(v42 + 276) )
        {
          v45 = (_QWORD *)WdLogNewEntry5_WdError(v39);
          v45[4] = 4160LL;
LABEL_92:
          v45[3] = v29;
          goto LABEL_94;
        }
      }
      if ( *(_DWORD *)(v42 + 276) > 0x10u )
      {
        v45 = (_QWORD *)WdLogNewEntry5_WdError(v39);
        v45[4] = 3LL;
        goto LABEL_92;
      }
      v47 = *(_DWORD *)(v42 + 208);
      if ( v47 == 4 )
      {
        if ( *((_DWORD *)this + 580) != -1 )
        {
          v45 = (_QWORD *)WdLogNewEntry5_WdError(v39);
          v45[4] = 4208LL;
          goto LABEL_92;
        }
        *((_DWORD *)this + 580) = v29;
      }
      else if ( v47 == 6 )
      {
        if ( *((_DWORD *)this + 579) == -1 )
        {
          v49 = *((_QWORD *)this + 271) + v39;
          *((_QWORD *)this + 316) = v49;
          *((_DWORD *)this + 579) = v29;
          v50 = *(_DWORD *)(v42 + 8);
          if ( v50 == 2 )
          {
            *((_BYTE *)this + 2608) = 1;
          }
          else if ( v50 > 2 )
          {
            v45 = (_QWORD *)WdLogNewEntry5_WdError(v49);
            v45[4] = 4198LL;
            goto LABEL_92;
          }
        }
        else
        {
          v48 = WdLogNewEntry5_WdWarning(v39, v41, 0LL, v38);
          *(_QWORD *)(v48 + 24) = v29;
          *(_QWORD *)(v48 + 32) = 4182LL;
          WdLogEvent5_WdWarning(v48);
        }
      }
      v51 = i;
      LODWORD(v25[v34 + 15]) = *(_DWORD *)(v42 + 276);
      memmove(v51, (const void *)(v42 + 280), 4LL * *(unsigned int *)(v42 + 276));
      v52 = (char *)i;
      v25[v34 + 16] = i;
      v53 = *(unsigned int *)(v42 + 276);
      v25[v34 + 14] = v28;
      v54 = 0;
      for ( i = &v52[4 * v53]; v54 < *(_DWORD *)(v42 + 8); ++v54 )
      {
        v55 = *(_QWORD *)(v42 + 24LL * v54 + 16);
        *(_QWORD *)v28 = v55;
        v56 = *(_QWORD *)(v42 + 24LL * v54 + 24);
        *(_QWORD *)(v28 + 8) = v56;
        v57 = *(_DWORD *)(v42 + 24LL * v54 + 32);
        *(_DWORD *)(v28 + 16) = v57;
        if ( *(_QWORD *)(v42 + 24LL * v54 + 16) == -1LL )
          v55 = -1LL;
        *(_QWORD *)v28 = v55;
        if ( *(_QWORD *)(v42 + 24LL * v54 + 24) == -1LL )
          v56 = -1LL;
        *(_QWORD *)(v28 + 8) = v56;
        if ( *(_DWORD *)(v42 + 24LL * v54 + 32) == -1 )
          v57 = -1;
        *(_DWORD *)(v28 + 16) = v57;
        if ( v54 )
        {
          v58 = *(_DWORD *)(v42 + 24LL * v54 + 32);
          if ( v58 != -1 )
          {
            v59 = *(unsigned int *)(v42 + 24 * (v54 - 1 + 1LL) + 8);
            if ( (_DWORD)v59 != -1 && v58 > (unsigned int)v59 )
            {
              v45 = (_QWORD *)WdLogNewEntry5_WdError(v59);
              v45[3] = v29;
              v45[4] = 5LL;
              goto LABEL_94;
            }
          }
          v60 = *(_QWORD *)(v42 + 24LL * v54 + 16);
          if ( v60 != -1LL )
          {
            v61 = *(_QWORD *)(v42 + 24LL * (v54 - 1) + 16);
            if ( v61 != -1LL && v60 < v61 )
            {
              v45 = (_QWORD *)WdLogNewEntry5_WdError(v61);
              v45[3] = v29;
              v45[4] = 6LL;
              goto LABEL_94;
            }
          }
        }
        else
        {
          if ( ((*(_QWORD *)(v42 + 16) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0
            || ((*(_QWORD *)(v42 + 24) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          {
            v45 = (_QWORD *)WdLogNewEntry5_WdError(v56);
            v45[3] = v29;
            v45[4] = 3LL;
            goto LABEL_94;
          }
          if ( !*(_DWORD *)(v42 + 32) )
          {
            v45 = (_QWORD *)WdLogNewEntry5_WdError(v56);
            v45[3] = v29;
            v45[4] = 4LL;
            goto LABEL_94;
          }
        }
        v28 += 24LL;
      }
      v11 = *(_DWORD *)(v42 + 208) == 0;
      v27 = v180;
      if ( v11 )
        v27 = ++v180;
      ++v29;
      v33 = v176 + 1;
      v30 = v179;
      v176 = v33;
    }
    while ( v33 < *(_DWORD *)&v544[4 * v256 + 40] );
    v26 = v172;
LABEL_76:
    v30 = (unsigned int)(v30 + 0x10000);
    v31 = HIDWORD(v172) + 1;
    v179 = v30;
    HIDWORD(v172) = v31;
  }
  while ( v31 < v26 );
  if ( (int)DXGADAPTER::GetDriverVersion(this) < 1300 || !v27 || v185 )
    goto LABEL_132;
  if ( v174 > 0x3E8
    || (v62 = v177, v177 > 0x3E8)
    || v175 > 0x3E8
    || v178 > 0x3E8
    || v174 >= v178
    || v178 >= v177
    || v177 >= v175 )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdError(v62);
    v45[3] = v174;
    v45[4] = v177;
    v45[5] = v175;
    v45[6] = v178;
    goto LABEL_94;
  }
  *(_DWORD *)v255 = 9;
  v63 = 248LL * v27;
  *(_DWORD *)&v255[32] = 136;
  if ( !is_mul_ok(v27, 0xF8uLL) )
    v63 = -1LL;
  v64 = operator new[](v63, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 434) = v64;
  *((_DWORD *)this + 870) = v27;
  if ( !v64 )
  {
    v66 = WdLogNewEntry5_WdLowResource(v65);
    *(_QWORD *)(v66 + 24) = this;
    WdLogEvent5_WdLowResource(v66);
    LODWORD(v19) = -1073741801;
    goto LABEL_189;
  }
  memset(v64, 0, 248LL * v27);
  v69 = 0;
  for ( j = 0LL; v69 < *((_DWORD *)this + 578); ++v69 )
  {
    v71 = *((_QWORD *)this + 271);
    v72 = 520LL * v69;
    if ( !*(_DWORD *)(v72 + v71 + 208) )
    {
      *(_QWORD *)(v72 + v71 + 512) = *((_QWORD *)this + 434) + 248LL * (unsigned int)j;
      j = (unsigned int)(j + 1);
    }
  }
  v73 = 0;
  *((_DWORD *)this + 922) = v175;
  *((_DWORD *)this + 923) = v177;
  *((_DWORD *)this + 924) = v174;
  *((_DWORD *)this + 925) = v178;
  *((_DWORD *)this + 926) = v186;
  LODWORD(v173) = 0;
  while ( 2 )
  {
    v74 = *(_QWORD *)(520LL * v73 + *((_QWORD *)this + 271) + 512);
    if ( !v74 )
    {
LABEL_114:
      LODWORD(v173) = ++v73;
      if ( v73 >= v7 )
        goto LABEL_121;
      continue;
    }
    break;
  }
  *(_QWORD *)&v255[24] = *(_QWORD *)(520LL * v73 + *((_QWORD *)this + 271) + 512);
  *(_QWORD *)&v255[8] = &v173;
  v75 = DXGADAPTER::DdiQueryAdapterInfo(this, (const struct _DXGKARG_QUERYADAPTERINFO *)v255, j);
  v80 = v75;
  if ( v75 >= 0 )
  {
    v81 = v173;
    *(_QWORD *)(v74 + 136) = this;
    *(_DWORD *)(v74 + 144) = v81;
    *(_QWORD *)(v74 + 152) = v74;
    KeInitializeSpinLock((PKSPIN_LOCK)(v74 + 160));
    *(_BYTE *)(v74 + 240) = 0;
    *(_DWORD *)(v74 + 244) = -1;
    v73 = v173;
    goto LABEL_114;
  }
  v82 = WdLogNewEntry5_WdTrace(v77, v76, v78, v79);
  *(_QWORD *)(v82 + 24) = (unsigned int)v173;
  v83 = 0;
  for ( *(_QWORD *)(v82 + 32) = v80; v83 < *((_DWORD *)this + 578); ++v83 )
  {
    v84 = 520LL * v83;
    v85 = *((_QWORD *)this + 271);
    if ( !*(_DWORD *)(v84 + v85 + 208) )
      *(_QWORD *)(v84 + v85 + 512) = 0LL;
  }
  v86 = (void *)*((_QWORD *)this + 434);
  *((_DWORD *)this + 870) = 0;
  operator delete(v86);
  *((_QWORD *)this + 434) = 0LL;
LABEL_121:
  v87 = 0;
  v88 = *((_DWORD *)this + 870);
  if ( v88 )
  {
    v89 = *((_QWORD *)this + 434);
    while ( 1 )
    {
      v90 = v87;
      v91 = 248LL * v87;
      v92 = *(unsigned int *)(v91 + v89 + 144);
      if ( *(_DWORD *)(v91 + v89) > 0x20u )
      {
        v45 = (_QWORD *)WdLogNewEntry5_WdError(v87);
        v45[3] = v92;
        goto LABEL_94;
      }
      v93 = *(_DWORD *)(v91 + v89);
      v94 = 0;
      if ( v93 )
        break;
LABEL_131:
      if ( ++v87 >= v88 )
        goto LABEL_132;
    }
    v95 = 62LL * v87;
    while ( 1 )
    {
      v96 = *(_DWORD *)(v89 + 4 * (v95 + v94) + 4);
      if ( !v96 )
      {
        v45 = (_QWORD *)WdLogNewEntry5_WdError(v90);
        v45[3] = v92;
        v45[4] = v94;
        goto LABEL_94;
      }
      if ( v94 )
      {
        v90 = v95 + v94 - 1;
        if ( v96 > *(_DWORD *)(v89 + 4 * v90 + 4) )
          break;
      }
      if ( ++v94 >= v93 )
        goto LABEL_131;
    }
    v45 = (_QWORD *)WdLogNewEntry5_WdError(v90);
    v45[3] = v92;
    v45[4] = v94;
    v45[5] = v94 - 1;
LABEL_94:
    WdLogEvent5_WdError(v45);
    LODWORD(v19) = -1073741811;
    goto LABEL_189;
  }
LABEL_132:
  v97 = (ADAPTER_RENDER *)*((_QWORD *)this + 267);
  *((_DWORD *)this + 650) = v187;
  if ( v97 )
  {
    v98 = ADAPTER_RENDER::InitializePowerManagement(v97);
    v19 = v98;
    if ( v98 < 0 )
    {
      v67 = WdLogNewEntry5_WdError(v99);
      *(_QWORD *)(v67 + 32) = 7LL;
LABEL_104:
      *(_QWORD *)(v67 + 24) = v19;
      WdLogEvent5_WdError(v67);
      goto LABEL_189;
    }
  }
  v100 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 266);
  if ( v100 )
  {
    v101 = ADAPTER_DISPLAY::InitializePowerManagement(v100);
    v19 = v101;
    if ( v101 < 0 )
    {
      v67 = WdLogNewEntry5_WdError(v102);
      *(_QWORD *)(v67 + 32) = 8LL;
      goto LABEL_104;
    }
  }
  v103 = PoFxRegisterDevice(*((_QWORD *)this + 24), v25, (char *)this + 2176);
  v19 = v103;
  if ( v103 < 0 )
  {
    v68 = WdLogNewEntry5_WdError(v104);
    goto LABEL_187;
  }
  KeInitializeEvent((PRKEVENT)((char *)this + 2336), SynchronizationEvent, 0);
  *((_QWORD *)this + 328) = (char *)this + 2616;
  *((_QWORD *)this + 327) = (char *)this + 2616;
  *((_BYTE *)this + 2604) = 0;
  TimeIncrement = KeQueryTimeIncrement();
  memset((char *)this + 2360, 0, 0x60uLL);
  v106 = v189;
  *((_QWORD *)this + 295) = 10LL * v188;
  v107 = 5 * v106;
  v108 = v190;
  *((_QWORD *)this + 297) = 2 * v107;
  *((_QWORD *)this + 299) = 10 * v108;
  v109 = (unsigned int)(10000 * (unsigned __int64)v191 / TimeIncrement);
  v110 = v192;
  *((_QWORD *)this + 296) = v109;
  *((_QWORD *)this + 302) = v109;
  v111 = 5 * v110;
  v112 = v193;
  *((_QWORD *)this + 301) = 2 * v111;
  v113 = 5 * v112;
  v114 = v194;
  *((_QWORD *)this + 303) = 2 * v113;
  v115 = 5 * v114;
  v116 = v195;
  *((_QWORD *)this + 305) = 2 * v115;
  *((_QWORD *)this + 307) = (char *)this + 2360;
  v117 = 5 * v116;
  v118 = v196;
  *((_QWORD *)this + 339) = 2 * v117;
  v119 = 10000LL * v197;
  *((_QWORD *)this + 308) = 10 * v118;
  v120 = v198;
  *((_QWORD *)this + 309) = (unsigned int)(v119 / TimeIncrement);
  v121 = 10000LL * v199;
  *((_QWORD *)this + 310) = 10 * v120;
  v122 = v200;
  *((_QWORD *)this + 311) = (unsigned int)(v121 / TimeIncrement);
  v123 = 5 * v122;
  v124 = 10000LL * v201;
  *((_QWORD *)this + 312) = 2 * v123;
  *((_QWORD *)this + 313) = (unsigned int)(v124 / TimeIncrement);
  v125 = v202;
  *((_QWORD *)this + 315) = 0LL;
  v126 = 5 * v125;
  v127 = v203;
  *((_QWORD *)this + 314) = 2 * v126;
  v128 = 5 * v127;
  v129 = v204;
  *((_QWORD *)this + 317) = 2 * v128;
  v130 = 5 * v129;
  v131 = v205;
  *((_QWORD *)this + 318) = 2 * v130;
  v132 = 5 * v131;
  v133 = v206;
  *((_QWORD *)this + 319) = 2 * v132;
  v134 = 5 * v133;
  v135 = v207;
  *((_QWORD *)this + 320) = 2 * v134;
  v136 = 5 * v135;
  v137 = v208;
  *((_QWORD *)this + 321) = 2 * v136;
  v138 = 5 * v137;
  v139 = v209;
  *((_QWORD *)this + 322) = 2 * v138;
  v140 = 5 * v139;
  v141 = v210;
  *((_QWORD *)this + 323) = 2 * v140;
  *((_QWORD *)this + 324) = 10 * v141;
  *((_QWORD *)this + 333) = (char *)this + 2656;
  *((_QWORD *)this + 332) = (char *)this + 2656;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 338);
  v142 = v257;
  v143 = 0LL;
  while ( 2 )
  {
    v144 = *((_QWORD *)this + 271);
    *(_BYTE *)(v143 + v144 + 356) = 1;
    v145 = (DXGADAPTER *)(v143 + v144 + 424);
    *(_QWORD *)v145 = 0LL;
    *((_QWORD *)v145 + 1) = 0LL;
    v146 = *(_DWORD *)(v143 + v144 + 208);
    if ( !v146 )
    {
      *(_BYTE *)(v143 + v144 + 357) = 1;
      v156 = (DXGADAPTER **)*((_QWORD *)this + 337);
      if ( *v156 != (DXGADAPTER *)((char *)this + 2688) )
        __fastfail(3u);
      *((_QWORD *)v145 + 1) = v156;
      *(_QWORD *)v145 = (char *)this + 2688;
      *v156 = v145;
      v157 = 0LL;
      *((_QWORD *)this + 337) = v145;
      v158 = *(_DWORD *)(v143 + v144 + 8);
      if ( v158 > 1 )
      {
        v159 = (unsigned __int64 *)(v143 + v144 + 40);
        v160 = v158 - 1;
        do
        {
          if ( v157 < *v159 )
            v157 = *v159;
          v159 += 3;
          --v160;
        }
        while ( v160 );
      }
      *(_DWORD *)(v143 + v144 + 388) = 1;
      v161 = 0;
      v162 = (unsigned __int64 *)((char *)this + 2360);
      while ( *v162 < v157 )
      {
        ++v161;
        v162 += 2;
        if ( v161 >= 2 )
          goto LABEL_170;
      }
      *(_DWORD *)(v143 + v144 + 388) = v161;
LABEL_170:
      v163 = *(_DWORD *)(v143 + v144 + 4);
      *(_DWORD *)(v143 + v144 + 384) = 2;
      DXGADAPTER::SetPowerComponentLatencyCB(this, v163, *(_QWORD *)(*((_QWORD *)this + 307) + 32LL));
      ++*((_DWORD *)this + 582);
      goto LABEL_171;
    }
    v147 = v146 - 1;
    if ( !v147 )
    {
      v155 = v212;
      goto LABEL_157;
    }
    v148 = v147 - 1;
    if ( !v148 )
    {
      v155 = v211;
LABEL_157:
      v152 = *(_DWORD *)(v143 + v144 + 4);
      v153 = 10 * v155;
      v151 = this;
      goto LABEL_150;
    }
    v149 = v148 - 1;
    if ( v149 )
    {
      v150 = v149 - 1;
      if ( v150 && v150 != 2 )
      {
        v151 = this;
        v152 = *(_DWORD *)(v143 + v144 + 4);
        if ( v181 == -1 )
          v153 = -1LL;
        else
          v153 = 10LL * v181;
LABEL_150:
        DXGADAPTER::SetPowerComponentLatencyCB(v151, v152, v153);
      }
    }
    else
    {
      v154 = (DXGADAPTER **)*((_QWORD *)this + 335);
      if ( *v154 != (DXGADAPTER *)((char *)this + 2672) )
        __fastfail(3u);
      *(_QWORD *)v145 = (char *)this + 2672;
      *((_QWORD *)v145 + 1) = v154;
      *v154 = v145;
      *((_QWORD *)this + 335) = v145;
      if ( (*(_DWORD *)(v143 + v144 + 216) & 0x10) != 0 )
        *(_BYTE *)(v143 + v144 + 360) = 1;
    }
LABEL_171:
    if ( v182 == -1 )
      v164 = -1LL;
    else
      v164 = 10000LL * v182;
    DXGADAPTER::SetPowerComponentResidencyCB(this, *(_DWORD *)(v143 + v144 + 4), v164);
    KeInitializeSpinLock((PKSPIN_LOCK)(v143 + v144 + 504));
    if ( *(_DWORD *)(v143 + v144 + 8) <= 1u || (v165 = *(_QWORD *)(v143 + v144 + 48), v165 == -1) )
    {
      v166 = *((_QWORD *)this + 339);
    }
    else
    {
      v166 = *((_QWORD *)this + 339);
      if ( v165 > v166 )
        v166 = *(_QWORD *)(v143 + v144 + 48);
    }
    *(_QWORD *)(v143 + v144 + 496) = v166;
    v143 += 520LL;
    if ( --v142 )
      continue;
    break;
  }
  v25 = v258;
  DXGADAPTER::UpdateLatencyTolerances(this);
  PoFxSetDeviceIdleTimeout(*((_QWORD *)this + 272), 10LL * v213);
  if ( *((_DWORD *)this + 69) != 1297040209 )
    goto LABEL_192;
  if ( *((_DWORD *)this + 448) != 4608 )
    goto LABEL_192;
  KeInitializeEvent((PRKEVENT)((char *)this + 2848), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)((char *)this + 2872), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)((char *)this + 2896), SynchronizationEvent, 0);
  KeInitializeSpinLock((PKSPIN_LOCK)this + 365);
  *((_QWORD *)this + 368) = (char *)this + 2936;
  *((_QWORD *)this + 367) = (char *)this + 2936;
  InitializeSListHead((PSLIST_HEADER)this + 185);
  v167 = (struct _SLIST_ENTRY *)((char *)this + 2992);
  v168 = 8LL;
  do
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 185, v167);
    v167 += 2;
    --v168;
  }
  while ( v168 );
  *(_DWORD *)&v255[40] = 48;
  *(_QWORD *)&v255[48] = 0LL;
  *(_DWORD *)&v255[64] = 512;
  *(_QWORD *)&v255[56] = 0LL;
  *(_OWORD *)&v255[72] = 0LL;
  SystemThread = PsCreateSystemThread(
                   (PHANDLE)this + 372,
                   0x1FFFFFu,
                   (POBJECT_ATTRIBUTES)&v255[40],
                   0LL,
                   0LL,
                   DXGADAPTER::PowerRuntimeComponentIdleStateCallbackThread,
                   this);
  v19 = SystemThread;
  if ( SystemThread >= 0 )
  {
LABEL_192:
    DpiEnablePowerManagement(*((_QWORD *)this + 24), *((_QWORD *)this + 272));
    operator delete(v25);
    return 0LL;
  }
  v68 = WdLogNewEntry5_WdError(v170);
  *(_QWORD *)(v68 + 32) = 8LL;
LABEL_187:
  *(_QWORD *)(v68 + 24) = v19;
LABEL_188:
  WdLogEvent5_WdError(v68);
LABEL_189:
  operator delete(v25);
LABEL_190:
  if ( *((_QWORD *)this + 272) )
  {
    PoFxUnregisterDevice();
    *((_QWORD *)this + 272) = 0LL;
  }
  return (unsigned int)v19;
}
