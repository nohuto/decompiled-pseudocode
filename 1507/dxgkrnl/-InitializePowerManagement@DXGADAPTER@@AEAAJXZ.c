/*
 * XREFs of ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C00C0304
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00BEB04 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002474 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0002654 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiEnablePowerManagement @ 0x1C0010E0C (DpiEnablePowerManagement.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C001AE20 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C001AEC4 (-SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C001AF60 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C007831C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _DXGADAPTER::InitializePowerManagement_::_50_::ENSURE_DELETE::_ENSURE_DELETE @ 0x1C011F4CC (_DXGADAPTER--InitializePowerManagement_--_50_--ENSURE_DELETE--_ENSURE_DELETE.c)
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0126914 (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01269B4 (-InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ.c)
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
  __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // r14
  unsigned int v26; // ecx
  unsigned int v27; // ebx
  __int64 v28; // r13
  unsigned int v29; // esi
  __int64 v30; // r8
  unsigned int v31; // eax
  __int64 v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // r12
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r9
  char *hKmdProcessHandle; // rcx
  __int16 v40; // dx
  __int64 v41; // rdx
  char *v42; // rbx
  unsigned int v43; // eax
  int v44; // eax
  int v45; // eax
  __int64 v46; // rax
  char *v47; // rcx
  unsigned int v48; // eax
  _QWORD *v49; // rax
  void *v50; // rcx
  char *v51; // rdx
  __int64 v52; // rax
  unsigned int v53; // r9d
  __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // edx
  _QWORD *v57; // rax
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
  unsigned int v68; // edx
  __int64 j; // r8
  __int64 v70; // r10
  __int64 v71; // r9
  unsigned int v72; // edx
  __int64 v73; // rbx
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rsi
  unsigned int v80; // eax
  __int64 v81; // rax
  unsigned int v82; // ecx
  __int64 v83; // rdx
  __int64 v84; // rax
  void *v85; // rcx
  unsigned int v86; // r8d
  unsigned int v87; // r12d
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rsi
  unsigned int v92; // r11d
  unsigned int v93; // ebx
  __int64 v94; // r10
  unsigned int v95; // r9d
  ADAPTER_RENDER *v96; // rcx
  int v97; // eax
  __int64 v98; // rcx
  __int64 v99; // rax
  ADAPTER_DISPLAY *v100; // rcx
  int v101; // eax
  __int64 v102; // rcx
  __int64 *v103; // r12
  int v104; // eax
  __int64 v105; // rcx
  unsigned __int64 TimeIncrement; // rbx
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rdx
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rax
  unsigned __int64 v120; // rtt
  __int64 v121; // rax
  unsigned __int64 v122; // rtt
  __int64 v123; // rax
  __int64 v124; // rcx
  unsigned __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rcx
  __int64 v128; // rax
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rcx
  __int64 v136; // rax
  __int64 v137; // rcx
  __int64 v138; // rax
  __int64 v139; // rcx
  __int64 v140; // rax
  int v141; // r14d
  __int64 k; // rbx
  __int64 v143; // rsi
  DXGADAPTER *v144; // rdx
  int v145; // ecx
  int v146; // ecx
  int v147; // ecx
  int v148; // ecx
  int v149; // ecx
  int v150; // edx
  DXGADAPTER *v151; // rcx
  __int64 v152; // r8
  DXGADAPTER **v153; // rcx
  __int64 v154; // rax
  DXGADAPTER **v155; // rcx
  unsigned __int64 v156; // rcx
  unsigned int v157; // eax
  unsigned __int64 *v158; // rdx
  __int64 v159; // r8
  unsigned int v160; // eax
  unsigned __int64 *v161; // rdx
  int v162; // edx
  __int64 v163; // r8
  __int64 v164; // rcx
  __int64 v165; // rax
  __int64 v166; // rax
  _QWORD *v168; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v169; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v170; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v171; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v172; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v173; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v174; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v175; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v176; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v177; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v178; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v179; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v180; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v181; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v182; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v183; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v184; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v185; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v186; // [rsp+84h] [rbp-84h] BYREF
  unsigned int v187; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v188; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned int v189; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v190; // [rsp+94h] [rbp-74h] BYREF
  unsigned int v191; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v192; // [rsp+9Ch] [rbp-6Ch] BYREF
  unsigned int v193; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v194; // [rsp+A4h] [rbp-64h] BYREF
  unsigned int v195; // [rsp+A8h] [rbp-60h] BYREF
  int v196; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v197; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v198; // [rsp+B4h] [rbp-54h] BYREF
  unsigned int v199; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v200; // [rsp+BCh] [rbp-4Ch] BYREF
  unsigned int v201; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v202; // [rsp+C4h] [rbp-44h] BYREF
  unsigned int v203; // [rsp+C8h] [rbp-40h] BYREF
  int v204; // [rsp+CCh] [rbp-3Ch] BYREF
  unsigned int v205; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v206; // [rsp+D4h] [rbp-34h] BYREF
  unsigned int v207; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v208; // [rsp+DCh] [rbp-2Ch] BYREF
  int v209; // [rsp+E0h] [rbp-28h] BYREF
  int v210; // [rsp+E4h] [rbp-24h] BYREF
  int v211; // [rsp+E8h] [rbp-20h] BYREF
  int v212; // [rsp+ECh] [rbp-1Ch] BYREF
  int v213; // [rsp+F0h] [rbp-18h] BYREF
  int v214; // [rsp+F4h] [rbp-14h] BYREF
  int v215; // [rsp+F8h] [rbp-10h] BYREF
  int v216; // [rsp+FCh] [rbp-Ch] BYREF
  int v217; // [rsp+100h] [rbp-8h] BYREF
  int v218; // [rsp+104h] [rbp-4h] BYREF
  int v219; // [rsp+108h] [rbp+0h] BYREF
  int v220; // [rsp+10Ch] [rbp+4h] BYREF
  int v221; // [rsp+110h] [rbp+8h] BYREF
  int v222; // [rsp+114h] [rbp+Ch] BYREF
  int v223; // [rsp+118h] [rbp+10h] BYREF
  int v224; // [rsp+11Ch] [rbp+14h] BYREF
  int v225; // [rsp+120h] [rbp+18h] BYREF
  int v226; // [rsp+124h] [rbp+1Ch] BYREF
  int v227; // [rsp+128h] [rbp+20h] BYREF
  int v228; // [rsp+12Ch] [rbp+24h] BYREF
  int v229; // [rsp+130h] [rbp+28h] BYREF
  int v230; // [rsp+134h] [rbp+2Ch] BYREF
  int v231; // [rsp+138h] [rbp+30h] BYREF
  int v232; // [rsp+13Ch] [rbp+34h] BYREF
  int v233; // [rsp+140h] [rbp+38h] BYREF
  int v234; // [rsp+144h] [rbp+3Ch] BYREF
  int v235; // [rsp+148h] [rbp+40h] BYREF
  int v236; // [rsp+14Ch] [rbp+44h] BYREF
  int v237; // [rsp+150h] [rbp+48h] BYREF
  int v238; // [rsp+154h] [rbp+4Ch] BYREF
  int v239; // [rsp+158h] [rbp+50h] BYREF
  int v240; // [rsp+15Ch] [rbp+54h] BYREF
  void *i; // [rsp+160h] [rbp+58h]
  int v242; // [rsp+168h] [rbp+60h] BYREF
  int v243; // [rsp+16Ch] [rbp+64h] BYREF
  int v244; // [rsp+170h] [rbp+68h] BYREF
  int v245; // [rsp+174h] [rbp+6Ch] BYREF
  int v246; // [rsp+178h] [rbp+70h] BYREF
  int v247; // [rsp+17Ch] [rbp+74h] BYREF
  int v248; // [rsp+180h] [rbp+78h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v249; // [rsp+188h] [rbp+80h] BYREF
  __int64 v250; // [rsp+1B8h] [rbp+B0h]
  struct _DXGKARG_QUERYADAPTERINFO v251; // [rsp+1C0h] [rbp+B8h] BYREF
  int v252; // [rsp+1F0h] [rbp+E8h]
  const wchar_t *v253; // [rsp+1F8h] [rbp+F0h]
  int *v254; // [rsp+200h] [rbp+F8h]
  int v255; // [rsp+208h] [rbp+100h]
  int *v256; // [rsp+210h] [rbp+108h]
  int v257; // [rsp+218h] [rbp+110h]
  __int64 v258; // [rsp+220h] [rbp+118h]
  int v259; // [rsp+228h] [rbp+120h]
  __int64 v260; // [rsp+230h] [rbp+128h]
  _BYTE v261[32]; // [rsp+238h] [rbp+130h] BYREF
  __int64 v262; // [rsp+258h] [rbp+150h] BYREF
  int v263; // [rsp+260h] [rbp+158h]
  const wchar_t *v264; // [rsp+268h] [rbp+160h]
  unsigned int *v265; // [rsp+270h] [rbp+168h]
  int v266; // [rsp+278h] [rbp+170h]
  unsigned int *v267; // [rsp+280h] [rbp+178h]
  int v268; // [rsp+288h] [rbp+180h]
  __int64 v269; // [rsp+290h] [rbp+188h]
  int v270; // [rsp+298h] [rbp+190h]
  const wchar_t *v271; // [rsp+2A0h] [rbp+198h]
  unsigned int *v272; // [rsp+2A8h] [rbp+1A0h]
  int v273; // [rsp+2B0h] [rbp+1A8h]
  int *v274; // [rsp+2B8h] [rbp+1B0h]
  int v275; // [rsp+2C0h] [rbp+1B8h]
  __int64 v276; // [rsp+2C8h] [rbp+1C0h]
  int v277; // [rsp+2D0h] [rbp+1C8h]
  const wchar_t *v278; // [rsp+2D8h] [rbp+1D0h]
  unsigned int *v279; // [rsp+2E0h] [rbp+1D8h]
  int v280; // [rsp+2E8h] [rbp+1E0h]
  int *v281; // [rsp+2F0h] [rbp+1E8h]
  int v282; // [rsp+2F8h] [rbp+1F0h]
  __int64 v283; // [rsp+300h] [rbp+1F8h]
  int v284; // [rsp+308h] [rbp+200h]
  const wchar_t *v285; // [rsp+310h] [rbp+208h]
  unsigned int *v286; // [rsp+318h] [rbp+210h]
  int v287; // [rsp+320h] [rbp+218h]
  int *v288; // [rsp+328h] [rbp+220h]
  int v289; // [rsp+330h] [rbp+228h]
  __int64 v290; // [rsp+338h] [rbp+230h]
  int v291; // [rsp+340h] [rbp+238h]
  const wchar_t *v292; // [rsp+348h] [rbp+240h]
  unsigned int *v293; // [rsp+350h] [rbp+248h]
  int v294; // [rsp+358h] [rbp+250h]
  int *v295; // [rsp+360h] [rbp+258h]
  int v296; // [rsp+368h] [rbp+260h]
  __int64 v297; // [rsp+370h] [rbp+268h]
  int v298; // [rsp+378h] [rbp+270h]
  const wchar_t *v299; // [rsp+380h] [rbp+278h]
  unsigned int *v300; // [rsp+388h] [rbp+280h]
  int v301; // [rsp+390h] [rbp+288h]
  int *v302; // [rsp+398h] [rbp+290h]
  int v303; // [rsp+3A0h] [rbp+298h]
  __int64 v304; // [rsp+3A8h] [rbp+2A0h]
  int v305; // [rsp+3B0h] [rbp+2A8h]
  const wchar_t *v306; // [rsp+3B8h] [rbp+2B0h]
  unsigned int *v307; // [rsp+3C0h] [rbp+2B8h]
  int v308; // [rsp+3C8h] [rbp+2C0h]
  int *v309; // [rsp+3D0h] [rbp+2C8h]
  int v310; // [rsp+3D8h] [rbp+2D0h]
  __int64 v311; // [rsp+3E0h] [rbp+2D8h]
  int v312; // [rsp+3E8h] [rbp+2E0h]
  const wchar_t *v313; // [rsp+3F0h] [rbp+2E8h]
  unsigned int *v314; // [rsp+3F8h] [rbp+2F0h]
  int v315; // [rsp+400h] [rbp+2F8h]
  int *v316; // [rsp+408h] [rbp+300h]
  int v317; // [rsp+410h] [rbp+308h]
  __int64 v318; // [rsp+418h] [rbp+310h]
  int v319; // [rsp+420h] [rbp+318h]
  const wchar_t *v320; // [rsp+428h] [rbp+320h]
  unsigned int *v321; // [rsp+430h] [rbp+328h]
  int v322; // [rsp+438h] [rbp+330h]
  int *v323; // [rsp+440h] [rbp+338h]
  int v324; // [rsp+448h] [rbp+340h]
  __int64 v325; // [rsp+450h] [rbp+348h]
  int v326; // [rsp+458h] [rbp+350h]
  const wchar_t *v327; // [rsp+460h] [rbp+358h]
  unsigned int *v328; // [rsp+468h] [rbp+360h]
  int v329; // [rsp+470h] [rbp+368h]
  int *v330; // [rsp+478h] [rbp+370h]
  int v331; // [rsp+480h] [rbp+378h]
  __int64 v332; // [rsp+488h] [rbp+380h]
  int v333; // [rsp+490h] [rbp+388h]
  const wchar_t *v334; // [rsp+498h] [rbp+390h]
  int *v335; // [rsp+4A0h] [rbp+398h]
  int v336; // [rsp+4A8h] [rbp+3A0h]
  int *v337; // [rsp+4B0h] [rbp+3A8h]
  int v338; // [rsp+4B8h] [rbp+3B0h]
  __int64 v339; // [rsp+4C0h] [rbp+3B8h]
  int v340; // [rsp+4C8h] [rbp+3C0h]
  const wchar_t *v341; // [rsp+4D0h] [rbp+3C8h]
  unsigned int *v342; // [rsp+4D8h] [rbp+3D0h]
  int v343; // [rsp+4E0h] [rbp+3D8h]
  int *v344; // [rsp+4E8h] [rbp+3E0h]
  int v345; // [rsp+4F0h] [rbp+3E8h]
  __int64 v346; // [rsp+4F8h] [rbp+3F0h]
  int v347; // [rsp+500h] [rbp+3F8h]
  const wchar_t *v348; // [rsp+508h] [rbp+400h]
  int *v349; // [rsp+510h] [rbp+408h]
  int v350; // [rsp+518h] [rbp+410h]
  int *v351; // [rsp+520h] [rbp+418h]
  int v352; // [rsp+528h] [rbp+420h]
  __int64 v353; // [rsp+530h] [rbp+428h]
  int v354; // [rsp+538h] [rbp+430h]
  const wchar_t *v355; // [rsp+540h] [rbp+438h]
  unsigned int *v356; // [rsp+548h] [rbp+440h]
  int v357; // [rsp+550h] [rbp+448h]
  int *v358; // [rsp+558h] [rbp+450h]
  int v359; // [rsp+560h] [rbp+458h]
  __int64 v360; // [rsp+568h] [rbp+460h]
  int v361; // [rsp+570h] [rbp+468h]
  const wchar_t *v362; // [rsp+578h] [rbp+470h]
  unsigned int *v363; // [rsp+580h] [rbp+478h]
  int v364; // [rsp+588h] [rbp+480h]
  int *v365; // [rsp+590h] [rbp+488h]
  int v366; // [rsp+598h] [rbp+490h]
  __int64 v367; // [rsp+5A0h] [rbp+498h]
  int v368; // [rsp+5A8h] [rbp+4A0h]
  const wchar_t *v369; // [rsp+5B0h] [rbp+4A8h]
  unsigned int *v370; // [rsp+5B8h] [rbp+4B0h]
  int v371; // [rsp+5C0h] [rbp+4B8h]
  int *v372; // [rsp+5C8h] [rbp+4C0h]
  int v373; // [rsp+5D0h] [rbp+4C8h]
  __int64 v374; // [rsp+5D8h] [rbp+4D0h]
  int v375; // [rsp+5E0h] [rbp+4D8h]
  const wchar_t *v376; // [rsp+5E8h] [rbp+4E0h]
  unsigned int *v377; // [rsp+5F0h] [rbp+4E8h]
  int v378; // [rsp+5F8h] [rbp+4F0h]
  int *v379; // [rsp+600h] [rbp+4F8h]
  int v380; // [rsp+608h] [rbp+500h]
  __int64 v381; // [rsp+610h] [rbp+508h]
  int v382; // [rsp+618h] [rbp+510h]
  const wchar_t *v383; // [rsp+620h] [rbp+518h]
  unsigned int *v384; // [rsp+628h] [rbp+520h]
  int v385; // [rsp+630h] [rbp+528h]
  int *v386; // [rsp+638h] [rbp+530h]
  int v387; // [rsp+640h] [rbp+538h]
  __int64 v388; // [rsp+648h] [rbp+540h]
  int v389; // [rsp+650h] [rbp+548h]
  const wchar_t *v390; // [rsp+658h] [rbp+550h]
  unsigned int *v391; // [rsp+660h] [rbp+558h]
  int v392; // [rsp+668h] [rbp+560h]
  int *v393; // [rsp+670h] [rbp+568h]
  int v394; // [rsp+678h] [rbp+570h]
  __int64 v395; // [rsp+680h] [rbp+578h]
  int v396; // [rsp+688h] [rbp+580h]
  const wchar_t *v397; // [rsp+690h] [rbp+588h]
  unsigned int *v398; // [rsp+698h] [rbp+590h]
  int v399; // [rsp+6A0h] [rbp+598h]
  int *v400; // [rsp+6A8h] [rbp+5A0h]
  int v401; // [rsp+6B0h] [rbp+5A8h]
  __int64 v402; // [rsp+6B8h] [rbp+5B0h]
  int v403; // [rsp+6C0h] [rbp+5B8h]
  const wchar_t *v404; // [rsp+6C8h] [rbp+5C0h]
  unsigned int *v405; // [rsp+6D0h] [rbp+5C8h]
  int v406; // [rsp+6D8h] [rbp+5D0h]
  int *v407; // [rsp+6E0h] [rbp+5D8h]
  int v408; // [rsp+6E8h] [rbp+5E0h]
  __int64 v409; // [rsp+6F0h] [rbp+5E8h]
  int v410; // [rsp+6F8h] [rbp+5F0h]
  const wchar_t *v411; // [rsp+700h] [rbp+5F8h]
  int *v412; // [rsp+708h] [rbp+600h]
  int v413; // [rsp+710h] [rbp+608h]
  int *v414; // [rsp+718h] [rbp+610h]
  int v415; // [rsp+720h] [rbp+618h]
  __int64 v416; // [rsp+728h] [rbp+620h]
  int v417; // [rsp+730h] [rbp+628h]
  const wchar_t *v418; // [rsp+738h] [rbp+630h]
  unsigned int *v419; // [rsp+740h] [rbp+638h]
  int v420; // [rsp+748h] [rbp+640h]
  int *v421; // [rsp+750h] [rbp+648h]
  int v422; // [rsp+758h] [rbp+650h]
  __int64 v423; // [rsp+760h] [rbp+658h]
  int v424; // [rsp+768h] [rbp+660h]
  const wchar_t *v425; // [rsp+770h] [rbp+668h]
  unsigned int *v426; // [rsp+778h] [rbp+670h]
  int v427; // [rsp+780h] [rbp+678h]
  int *v428; // [rsp+788h] [rbp+680h]
  int v429; // [rsp+790h] [rbp+688h]
  __int64 v430; // [rsp+798h] [rbp+690h]
  int v431; // [rsp+7A0h] [rbp+698h]
  const wchar_t *v432; // [rsp+7A8h] [rbp+6A0h]
  unsigned int *v433; // [rsp+7B0h] [rbp+6A8h]
  int v434; // [rsp+7B8h] [rbp+6B0h]
  int *v435; // [rsp+7C0h] [rbp+6B8h]
  int v436; // [rsp+7C8h] [rbp+6C0h]
  __int64 v437; // [rsp+7D0h] [rbp+6C8h]
  int v438; // [rsp+7D8h] [rbp+6D0h]
  const wchar_t *v439; // [rsp+7E0h] [rbp+6D8h]
  unsigned int *v440; // [rsp+7E8h] [rbp+6E0h]
  int v441; // [rsp+7F0h] [rbp+6E8h]
  int *v442; // [rsp+7F8h] [rbp+6F0h]
  int v443; // [rsp+800h] [rbp+6F8h]
  __int64 v444; // [rsp+808h] [rbp+700h]
  int v445; // [rsp+810h] [rbp+708h]
  const wchar_t *v446; // [rsp+818h] [rbp+710h]
  unsigned int *v447; // [rsp+820h] [rbp+718h]
  int v448; // [rsp+828h] [rbp+720h]
  int *v449; // [rsp+830h] [rbp+728h]
  int v450; // [rsp+838h] [rbp+730h]
  __int64 v451; // [rsp+840h] [rbp+738h]
  int v452; // [rsp+848h] [rbp+740h]
  const wchar_t *v453; // [rsp+850h] [rbp+748h]
  unsigned int *v454; // [rsp+858h] [rbp+750h]
  int v455; // [rsp+860h] [rbp+758h]
  int *v456; // [rsp+868h] [rbp+760h]
  int v457; // [rsp+870h] [rbp+768h]
  __int64 v458; // [rsp+878h] [rbp+770h]
  int v459; // [rsp+880h] [rbp+778h]
  const wchar_t *v460; // [rsp+888h] [rbp+780h]
  unsigned int *v461; // [rsp+890h] [rbp+788h]
  int v462; // [rsp+898h] [rbp+790h]
  int *v463; // [rsp+8A0h] [rbp+798h]
  int v464; // [rsp+8A8h] [rbp+7A0h]
  __int64 v465; // [rsp+8B0h] [rbp+7A8h]
  int v466; // [rsp+8B8h] [rbp+7B0h]
  const wchar_t *v467; // [rsp+8C0h] [rbp+7B8h]
  unsigned int *v468; // [rsp+8C8h] [rbp+7C0h]
  int v469; // [rsp+8D0h] [rbp+7C8h]
  int *v470; // [rsp+8D8h] [rbp+7D0h]
  int v471; // [rsp+8E0h] [rbp+7D8h]
  __int64 v472; // [rsp+8E8h] [rbp+7E0h]
  int v473; // [rsp+8F0h] [rbp+7E8h]
  const wchar_t *v474; // [rsp+8F8h] [rbp+7F0h]
  unsigned int *v475; // [rsp+900h] [rbp+7F8h]
  int v476; // [rsp+908h] [rbp+800h]
  int *v477; // [rsp+910h] [rbp+808h]
  int v478; // [rsp+918h] [rbp+810h]
  __int64 v479; // [rsp+920h] [rbp+818h]
  int v480; // [rsp+928h] [rbp+820h]
  const wchar_t *v481; // [rsp+930h] [rbp+828h]
  unsigned int *v482; // [rsp+938h] [rbp+830h]
  int v483; // [rsp+940h] [rbp+838h]
  int *v484; // [rsp+948h] [rbp+840h]
  int v485; // [rsp+950h] [rbp+848h]
  __int64 v486; // [rsp+958h] [rbp+850h]
  int v487; // [rsp+960h] [rbp+858h]
  const wchar_t *v488; // [rsp+968h] [rbp+860h]
  unsigned int *v489; // [rsp+970h] [rbp+868h]
  int v490; // [rsp+978h] [rbp+870h]
  int *v491; // [rsp+980h] [rbp+878h]
  int v492; // [rsp+988h] [rbp+880h]
  __int64 v493; // [rsp+990h] [rbp+888h]
  int v494; // [rsp+998h] [rbp+890h]
  const wchar_t *v495; // [rsp+9A0h] [rbp+898h]
  unsigned int *v496; // [rsp+9A8h] [rbp+8A0h]
  int v497; // [rsp+9B0h] [rbp+8A8h]
  int *v498; // [rsp+9B8h] [rbp+8B0h]
  int v499; // [rsp+9C0h] [rbp+8B8h]
  __int64 v500; // [rsp+9C8h] [rbp+8C0h]
  int v501; // [rsp+9D0h] [rbp+8C8h]
  const wchar_t *v502; // [rsp+9D8h] [rbp+8D0h]
  unsigned int *v503; // [rsp+9E0h] [rbp+8D8h]
  int v504; // [rsp+9E8h] [rbp+8E0h]
  int *v505; // [rsp+9F0h] [rbp+8E8h]
  int v506; // [rsp+9F8h] [rbp+8F0h]
  __int64 v507; // [rsp+A00h] [rbp+8F8h]
  int v508; // [rsp+A08h] [rbp+900h]
  const wchar_t *v509; // [rsp+A10h] [rbp+908h]
  unsigned int *v510; // [rsp+A18h] [rbp+910h]
  int v511; // [rsp+A20h] [rbp+918h]
  int *v512; // [rsp+A28h] [rbp+920h]
  int v513; // [rsp+A30h] [rbp+928h]
  __int64 v514; // [rsp+A38h] [rbp+930h]
  int v515; // [rsp+A40h] [rbp+938h]
  const wchar_t *v516; // [rsp+A48h] [rbp+940h]
  unsigned int *v517; // [rsp+A50h] [rbp+948h]
  int v518; // [rsp+A58h] [rbp+950h]
  int *v519; // [rsp+A60h] [rbp+958h]
  int v520; // [rsp+A68h] [rbp+960h]
  __int64 v521; // [rsp+A70h] [rbp+968h]
  int v522; // [rsp+A78h] [rbp+970h]
  __int64 v523; // [rsp+A80h] [rbp+978h]
  _BYTE v524[288]; // [rsp+A88h] [rbp+980h] BYREF

  if ( !*((_BYTE *)this + 1853) )
  {
    v5 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 14497LL;
    goto LABEL_184;
  }
  v248 = 3;
  v239 = -1;
  v179 = -1;
  v210 = 2000;
  v244 = 35000;
  v186 = 35000;
  v6 = 0;
  v178 = 2000;
  v236 = 50000;
  v181 = 50000;
  v218 = 100000;
  v190 = 100000;
  v243 = 300000;
  v205 = 300000;
  v224 = 17000;
  v203 = 17000;
  v247 = 200;
  v196 = 200;
  v220 = 200;
  v198 = 200;
  v222 = 100;
  v238 = 100;
  v240 = 25000;
  v207 = 25000;
  v246 = 300;
  v174 = 300;
  v228 = 700;
  v175 = 700;
  v242 = 900;
  v173 = 900;
  v230 = 500;
  v176 = 500;
  v211 = 140000;
  v182 = 140000;
  v213 = 200000;
  v185 = 200000;
  v215 = 250000;
  v187 = 250000;
  v217 = 250000;
  v189 = 250000;
  v219 = 10000;
  v208 = 10000;
  v216 = 2000;
  v188 = 2000;
  v226 = 2000;
  v200 = 2000;
  v221 = 60000;
  v202 = 60000;
  v223 = 60000;
  v183 = 60000;
  v234 = 80;
  v184 = 80;
  v214 = 15000;
  v206 = 15000;
  v209 = 3;
  v232 = 80;
  v192 = 80;
  v245 = 80000;
  v194 = 80000;
  v225 = 15000;
  v191 = 15000;
  v227 = 30000;
  v193 = 30000;
  v233 = 30000;
  v199 = 30000;
  v253 = L"UseSelfRefreshVRAMInS3";
  v254 = &v204;
  v229 = 80;
  v195 = 80;
  v231 = 15000;
  v197 = 15000;
  v235 = 80000;
  v201 = 80000;
  v256 = &v212;
  v212 = 1;
  v204 = 1;
  v177 = 1;
  v171 = 1;
  v172 = 0;
  v170 = 0;
  v251.hKmdProcessHandle = 0LL;
  v252 = 288;
  v255 = 67108868;
  v257 = 4;
  v258 = 0LL;
  v259 = 0;
  v260 = 0LL;
  memset(v261, 0, sizeof(v261));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Power", &v251.hKmdProcessHandle, 0LL, 0LL);
  v262 = 0LL;
  v264 = L"EnableRuntimePowerManagement";
  v265 = &v171;
  v267 = &v177;
  v271 = L"DisableDevicePowerRequired";
  v272 = &v170;
  v274 = (int *)&v172;
  v278 = L"DefaultLatencyToleranceOther";
  v279 = &v179;
  v281 = &v239;
  v285 = L"DefaultExpectedResidency";
  v263 = 288;
  v266 = 67108868;
  v268 = 4;
  v269 = 0LL;
  v270 = 288;
  v273 = 67108868;
  v275 = 4;
  v276 = 0LL;
  v277 = 288;
  v280 = 67108868;
  v282 = 4;
  v283 = 0LL;
  v284 = 288;
  v286 = &v178;
  v288 = &v210;
  v292 = L"DefaultLatencyToleranceIdle0";
  v293 = &v184;
  v295 = &v234;
  v299 = L"DefaultLatencyToleranceIdle1";
  v300 = &v206;
  v302 = &v214;
  v306 = L"DefaultLatencyToleranceNoContext";
  v307 = &v186;
  v309 = &v244;
  v313 = L"DefaultLatencyToleranceIdle0MonitorOff";
  v314 = &v188;
  v316 = &v216;
  v320 = L"DefaultLatencyToleranceIdle1MonitorOff";
  v321 = &v181;
  v323 = &v236;
  v327 = L"DefaultLatencyToleranceNoContextMonitorOff";
  v328 = &v190;
  v330 = &v218;
  v334 = L"DefaultLatencyToleranceTimerPeriod";
  v335 = &v196;
  v337 = &v247;
  v341 = L"DefaultIdleThresholdIdle0";
  v342 = &v198;
  v287 = 67108868;
  v289 = 4;
  v290 = 0LL;
  v291 = 288;
  v294 = 67108868;
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
  v344 = &v220;
  v348 = L"DefaultIdleThresholdIdle0MonitorOff";
  v349 = &v238;
  v351 = &v222;
  v355 = L"MonitorLatencyTolerance";
  v356 = &v205;
  v358 = &v243;
  v362 = L"MonitorRefreshLatencyTolerance";
  v363 = &v203;
  v365 = &v224;
  v369 = L"DefaultPowerNotRequiredTimeout";
  v370 = &v207;
  v372 = &v240;
  v376 = L"DefaultActiveIdleThreshold";
  v377 = &v200;
  v379 = &v226;
  v383 = L"ulow";
  v384 = &v174;
  v386 = &v246;
  v390 = L"uhigh";
  v391 = &v175;
  v393 = &v228;
  v397 = L"uglitch";
  v398 = &v173;
  v345 = 4;
  v346 = 0LL;
  v347 = 288;
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
  v400 = &v242;
  v404 = L"uideal";
  v405 = &v176;
  v407 = &v230;
  v411 = L"lowdebounce";
  v412 = &v209;
  v414 = &v248;
  v418 = L"DefaultD3TransitionLatencyActivelyUsed";
  v419 = &v192;
  v421 = &v232;
  v425 = L"DefaultD3TransitionLatencyIdleShortTime";
  v426 = &v194;
  v428 = &v245;
  v432 = L"DefaultD3TransitionLatencyIdleLongTime";
  v433 = &v182;
  v435 = &v211;
  v439 = L"DefaultD3TransitionLatencyIdleVeryLongTime";
  v440 = &v185;
  v442 = &v213;
  v446 = L"DefaultD3TransitionLatencyIdleNoContext";
  v447 = &v187;
  v449 = &v215;
  v453 = L"DefaultD3TransitionLatencyIdleMonitorOff";
  v454 = &v189;
  v402 = 0LL;
  v403 = 288;
  v406 = 67108868;
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
  v456 = &v217;
  v460 = L"DefaultD3TransitionIdleShortTimeThreshold";
  v461 = &v208;
  v463 = &v219;
  v467 = L"DefaultD3TransitionIdleLongTimeThreshold";
  v468 = &v202;
  v470 = &v221;
  v474 = L"DefaultD3TransitionIdleVeryLongTimeThreshold";
  v475 = &v183;
  v477 = &v223;
  v481 = L"DefaultLatencyToleranceMemory";
  v482 = &v191;
  v484 = &v225;
  v488 = L"DefaultLatencyToleranceMemoryNoContext";
  v489 = &v193;
  v491 = &v227;
  v495 = L"DefaultMemoryRefreshLatencyToleranceActivelyUsed";
  v496 = &v195;
  v498 = &v229;
  v502 = L"DefaultMemoryRefreshLatencyToleranceIdleShortTime";
  v503 = &v197;
  v505 = &v231;
  v509 = L"DefaultMemoryRefreshLatencyToleranceNoContext";
  v510 = &v199;
  v512 = &v233;
  v457 = 4;
  v458 = 0LL;
  v459 = 288;
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
  v516 = L"DefaultMemoryRefreshLatencyToleranceMonitorOff";
  v514 = 0LL;
  v517 = &v201;
  v515 = 288;
  v519 = &v235;
  v518 = 67108868;
  v520 = 4;
  v521 = 0LL;
  v522 = 0;
  v523 = 0LL;
  memset(v524, 0, 0x20uLL);
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v262, 0LL, 0LL);
  if ( !v171 )
    return 0LL;
  v10 = v204 == 0;
  *((_BYTE *)this + 165) = v170 != 0;
  *((_BYTE *)this + 168) = !v10;
  v11 = *(_QWORD *)(*((_QWORD *)this + 22) + 64LL);
  v12 = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 28LL);
  if ( v12 < 0x5019 )
    NumDifferentPhysicalAdapters = 1;
  else
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(this);
  v170 = NumDifferentPhysicalAdapters;
  v14 = 0;
  v180 = 0;
  if ( !NumDifferentPhysicalAdapters )
    goto LABEL_183;
  do
  {
    memset(&v251, 0, 0x28uLL);
    v251.Type = DXGKQAITYPE_NUMPOWERCOMPONENTS;
    v251.OutputDataSize = 4;
    v251.pOutputData = &v524[4 * v14 + 32];
    if ( DXGADAPTER::IsDxgmms2(this) && v12 >= 0x5019 )
    {
      v251.InputDataSize = 4;
      v251.pInputData = &v180;
    }
    v17 = DXGADAPTER::DdiQueryAdapterInfo(v15, &v251, v16);
    v18 = v17;
    if ( v17 < 0 )
    {
      v166 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v166 + 24) = this;
      *(_QWORD *)(v166 + 32) = v18;
      WdLogEvent5_WdError(v166);
      return (unsigned int)v18;
    }
    v6 += *(_DWORD *)&v524[4 * v180 + 32];
    v14 = v180 + 1;
    v180 = v14;
  }
  while ( v14 < NumDifferentPhysicalAdapters );
  if ( !v6 )
  {
LABEL_183:
    v5 = WdLogNewEntry5_WdWarning(v11, v7, v8, v9);
    *(_QWORD *)(v5 + 24) = 14666LL;
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
  *((_DWORD *)this + 538) = v6;
  v20 = 520LL * v6;
  if ( !is_mul_ok(v6, 0x208uLL) )
    v20 = -1LL;
  v21 = operator new[](v20, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 251) = v21;
  if ( !v21
    || (memset(v21, 0, 520LL * v6), v24 = operator new[](312 * v6 + 136, 0x4B677844u, PagedPool), (v25 = v24) == 0LL) )
  {
    v23 = WdLogNewEntry5_WdLowResource(v22);
    *(_QWORD *)(v23 + 24) = this;
    WdLogEvent5_WdLowResource(v23);
    LODWORD(v18) = -1073741801;
    goto LABEL_137;
  }
  memset(v24, 0, 312 * v6 + 136);
  v168 = v25;
  v25[4] = DxgkPowerRuntimeComponentIdleStateCallback;
  *(_DWORD *)v25 = 2;
  v25[2] = DxgkPowerRuntimeComponentActiveCallback;
  *((_DWORD *)v25 + 18) = v6;
  v25[3] = DxgkPowerRuntimeComponentIdleCallback;
  v25[5] = DxgkPowerRuntimeDevicePowerRequiredCallback;
  v25[6] = DxgkPowerRuntimeDevicePowerNotRequiredCallback;
  v25[8] = this;
  v25[7] = DxgkPowerRuntimeControlCallback;
  memset(&v249, 0, 0x28uLL);
  v26 = v170;
  v27 = 0;
  v249.Type = DXGKQAITYPE_POWERCOMPONENTINFO;
  v28 = (__int64)&v25[7 * v6 + 10];
  v249.InputDataSize = 4;
  v249.OutputDataSize = 336;
  v29 = 0;
  v169 = 0;
  v30 = 0LL;
  v177 = 0;
  i = (void *)(v28 + 192LL * v6);
  v31 = 0;
  v171 = 0;
  do
  {
    v32 = v31;
    v33 = 0;
    v250 = v32;
    v172 = 0;
    *((_WORD *)this + v32 + 1012) = v29;
    if ( !*(_DWORD *)&v524[4 * v32 + 32] )
      goto LABEL_68;
    do
    {
      v34 = 7LL * v29;
      v237 = v30 + v33;
      v249.pInputData = &v237;
      v35 = *((_QWORD *)this + 251) + 8LL;
      v249.hKmdProcessHandle = (HANDLE)(520LL * v29);
      v249.pOutputData = (char *)v249.hKmdProcessHandle + v35;
      v36 = DXGADAPTER::DdiQueryAdapterInfo(this, &v249, v30);
      v18 = v36;
      if ( v36 < 0 )
      {
        v67 = WdLogNewEntry5_WdError(v37);
        *(_QWORD *)(v67 + 24) = v29;
        *(_QWORD *)(v67 + 32) = v18;
LABEL_135:
        WdLogEvent5_WdError(v67);
        goto LABEL_136;
      }
      hKmdProcessHandle = (char *)v249.hKmdProcessHandle;
      v40 = v172;
      *(_DWORD *)((char *)v249.hKmdProcessHandle + *((_QWORD *)this + 251)) = v29;
      *(_WORD *)&hKmdProcessHandle[*((_QWORD *)this + 251) + 4] = v40;
      v41 = v171;
      *(_WORD *)&hKmdProcessHandle[*((_QWORD *)this + 251) + 6] = v171;
      v42 = &hKmdProcessHandle[*((_QWORD *)this + 251)];
      HIDWORD(v25[v34 + 13]) = *((_DWORD *)v42 + 2);
      v43 = *((_DWORD *)v42 + 2);
      if ( !v43 || v43 > 8 )
      {
        v57 = (_QWORD *)WdLogNewEntry5_WdError(hKmdProcessHandle);
        v57[3] = v29;
        v57[4] = *((unsigned int *)v42 + 2);
        v57[5] = 0LL;
        goto LABEL_95;
      }
      *(_OWORD *)&v25[v34 + 10] = *(_OWORD *)(v42 + 220);
      v42[275] = 0;
      v44 = *((_DWORD *)v42 + 54);
      if ( (v44 & 0xFFFFFFE0) != 0 )
      {
        v49 = (_QWORD *)WdLogNewEntry5_WdError(hKmdProcessHandle);
        v49[4] = 2LL;
        goto LABEL_83;
      }
      if ( (v44 & 4) != 0 )
        v25[v34 + 12] |= 1uLL;
      v25[v34 + 12] |= 2uLL;
      if ( (*((_DWORD *)v42 + 54) & 0x10) != 0 )
      {
        if ( *((_DWORD *)v42 + 52) != 3 )
        {
          v49 = (_QWORD *)WdLogNewEntry5_WdError(hKmdProcessHandle);
          v49[4] = 14819LL;
          goto LABEL_83;
        }
        if ( *((_DWORD *)v42 + 2) != 2 )
        {
          v49 = (_QWORD *)WdLogNewEntry5_WdError(hKmdProcessHandle);
          v49[4] = 14825LL;
          goto LABEL_83;
        }
        if ( *((_QWORD *)v42 + 5) )
        {
          v49 = (_QWORD *)WdLogNewEntry5_WdError(hKmdProcessHandle);
          v49[4] = 14831LL;
          goto LABEL_83;
        }
        if ( *((_DWORD *)v42 + 69) )
        {
          v49 = (_QWORD *)WdLogNewEntry5_WdError(hKmdProcessHandle);
          v49[4] = 14837LL;
          goto LABEL_83;
        }
      }
      if ( *((_DWORD *)v42 + 69) > 0x10u )
      {
        v49 = (_QWORD *)WdLogNewEntry5_WdError(hKmdProcessHandle);
        v49[4] = 3LL;
        goto LABEL_83;
      }
      v45 = *((_DWORD *)v42 + 52);
      if ( v45 == 4 )
      {
        if ( *((_DWORD *)this + 540) != -1 )
        {
          v49 = (_QWORD *)WdLogNewEntry5_WdError(hKmdProcessHandle);
          v49[4] = 14885LL;
          goto LABEL_83;
        }
        *((_DWORD *)this + 540) = v29;
      }
      else
      {
        if ( v45 != 6 )
          goto LABEL_45;
        if ( *((_DWORD *)this + 539) != -1 )
        {
          v46 = WdLogNewEntry5_WdWarning(hKmdProcessHandle, v41, 0LL, v38);
          *(_QWORD *)(v46 + 24) = v29;
          *(_QWORD *)(v46 + 32) = 14859LL;
          WdLogEvent5_WdWarning(v46);
          goto LABEL_45;
        }
        v47 = &hKmdProcessHandle[*((_QWORD *)this + 251)];
        *((_QWORD *)this + 296) = v47;
        *((_DWORD *)this + 539) = v29;
        v48 = *((_DWORD *)v42 + 2);
        if ( v48 == 2 )
        {
          *((_BYTE *)this + 2448) = 1;
          goto LABEL_45;
        }
        if ( v48 > 2 )
        {
          v49 = (_QWORD *)WdLogNewEntry5_WdError(v47);
          v49[4] = 14875LL;
LABEL_83:
          v49[3] = v29;
          goto LABEL_84;
        }
      }
LABEL_45:
      v50 = i;
      LODWORD(v25[v34 + 15]) = *((_DWORD *)v42 + 69);
      memmove(v50, v42 + 280, 4LL * *((unsigned int *)v42 + 69));
      v51 = (char *)i;
      v25[v34 + 16] = i;
      v52 = *((unsigned int *)v42 + 69);
      v25[v34 + 14] = v28;
      v53 = 0;
      for ( i = &v51[4 * v52]; v53 < *((_DWORD *)v42 + 2); ++v53 )
      {
        v54 = *(_QWORD *)&v42[24 * v53 + 16];
        *(_QWORD *)v28 = v54;
        v55 = *(_QWORD *)&v42[24 * v53 + 24];
        *(_QWORD *)(v28 + 8) = v55;
        v56 = *(_DWORD *)&v42[24 * v53 + 32];
        *(_DWORD *)(v28 + 16) = v56;
        if ( *(_QWORD *)&v42[24 * v53 + 16] == -1LL )
          v54 = -1LL;
        *(_QWORD *)v28 = v54;
        if ( *(_QWORD *)&v42[24 * v53 + 24] == -1LL )
          v55 = -1LL;
        *(_QWORD *)(v28 + 8) = v55;
        if ( *(_DWORD *)&v42[24 * v53 + 32] == -1 )
          v56 = -1;
        *(_DWORD *)(v28 + 16) = v56;
        if ( v53 )
        {
          v58 = *(_DWORD *)&v42[24 * v53 + 32];
          if ( v58 != -1 )
          {
            v59 = *(unsigned int *)&v42[24 * v53 + 8];
            if ( (_DWORD)v59 != -1 && v58 > (unsigned int)v59 )
            {
              v57 = (_QWORD *)WdLogNewEntry5_WdError(v59);
              v57[3] = v29;
              v57[4] = 5LL;
              goto LABEL_95;
            }
          }
          v60 = *(_QWORD *)&v42[24 * v53 + 16];
          if ( v60 != -1LL )
          {
            v61 = *(_QWORD *)&v42[24 * v53 - 8];
            if ( v61 != -1LL && v60 < v61 )
            {
              v57 = (_QWORD *)WdLogNewEntry5_WdError(v61);
              v57[3] = v29;
              v57[4] = 6LL;
              goto LABEL_95;
            }
          }
        }
        else
        {
          if ( ((*((_QWORD *)v42 + 2) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0
            || ((*((_QWORD *)v42 + 3) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          {
            v57 = (_QWORD *)WdLogNewEntry5_WdError(v55);
            v57[3] = v29;
            v57[4] = 3LL;
            goto LABEL_95;
          }
          if ( !*((_DWORD *)v42 + 8) )
          {
            v57 = (_QWORD *)WdLogNewEntry5_WdError(v55);
            v57[3] = v29;
            v57[4] = 4LL;
LABEL_95:
            WdLogEvent5_WdError(v57);
            LODWORD(v18) = -1073741811;
            goto LABEL_136;
          }
        }
        v28 += 24LL;
      }
      v10 = *((_DWORD *)v42 + 52) == 0;
      v27 = v169;
      if ( v10 )
        v27 = ++v169;
      ++v29;
      v33 = v172 + 1;
      v30 = v177;
      v172 = v33;
    }
    while ( v33 < *(_DWORD *)&v524[4 * v250 + 32] );
    v26 = v170;
LABEL_68:
    v30 = (unsigned int)(v30 + 0x10000);
    v31 = v171 + 1;
    v177 = v30;
    v171 = v31;
  }
  while ( v31 < v26 );
  if ( (int)DXGADAPTER::GetDriverVersion(this) < 1300 || !v27 )
    goto LABEL_122;
  if ( v174 > 0x3E8
    || (v62 = v175, v175 > 0x3E8)
    || v173 > 0x3E8
    || v176 > 0x3E8
    || v174 >= v176
    || v176 >= v175
    || v175 >= v173 )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdError(v62);
    v57[3] = v174;
    v57[4] = v175;
    v57[5] = v173;
    v57[6] = v176;
    goto LABEL_95;
  }
  v249.Type = DXGKQAITYPE_POWERCOMPONENTPSTATEINFO;
  v63 = 248LL * v27;
  v249.OutputDataSize = 136;
  if ( !is_mul_ok(v27, 0xF8uLL) )
    v63 = -1LL;
  v64 = operator new[](v63, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 364) = v64;
  *((_DWORD *)this + 730) = v27;
  if ( !v64 )
  {
    v66 = WdLogNewEntry5_WdLowResource(v65);
    *(_QWORD *)(v66 + 24) = this;
    WdLogEvent5_WdLowResource(v66);
    LODWORD(v18) = -1073741801;
    goto LABEL_136;
  }
  memset(v64, 0, 248LL * v27);
  v68 = 0;
  for ( j = 0LL; v68 < *((_DWORD *)this + 538); ++v68 )
  {
    v70 = *((_QWORD *)this + 251);
    v71 = 520LL * v68;
    if ( !*(_DWORD *)(v71 + v70 + 208) )
    {
      *(_QWORD *)(v71 + v70 + 512) = *((_QWORD *)this + 364) + 248LL * (unsigned int)j;
      j = (unsigned int)(j + 1);
    }
  }
  v72 = 0;
  *((_DWORD *)this + 778) = v173;
  *((_DWORD *)this + 779) = v175;
  *((_DWORD *)this + 780) = v174;
  *((_DWORD *)this + 781) = v176;
  *((_DWORD *)this + 782) = v209;
  v169 = 0;
  while ( 2 )
  {
    v73 = *(_QWORD *)(520LL * v72 + *((_QWORD *)this + 251) + 512);
    if ( !v73 )
    {
LABEL_105:
      v169 = ++v72;
      if ( v72 >= v6 )
        goto LABEL_112;
      continue;
    }
    break;
  }
  v249.pOutputData = *(void **)(520LL * v72 + *((_QWORD *)this + 251) + 512);
  v249.pInputData = &v169;
  v74 = DXGADAPTER::DdiQueryAdapterInfo(this, &v249, j);
  v79 = v74;
  if ( v74 >= 0 )
  {
    v80 = v169;
    *(_QWORD *)(v73 + 136) = this;
    *(_DWORD *)(v73 + 144) = v80;
    *(_QWORD *)(v73 + 152) = v73;
    KeInitializeSpinLock((PKSPIN_LOCK)(v73 + 160));
    *(_BYTE *)(v73 + 240) = 0;
    *(_DWORD *)(v73 + 244) = -1;
    v72 = v169;
    goto LABEL_105;
  }
  v81 = WdLogNewEntry5_WdTrace(v76, v75, v77, v78);
  *(_QWORD *)(v81 + 24) = v169;
  v82 = 0;
  for ( *(_QWORD *)(v81 + 32) = v79; v82 < *((_DWORD *)this + 538); ++v82 )
  {
    v83 = 520LL * v82;
    v84 = *((_QWORD *)this + 251);
    if ( !*(_DWORD *)(v83 + v84 + 208) )
      *(_QWORD *)(v83 + v84 + 512) = 0LL;
  }
  v85 = (void *)*((_QWORD *)this + 364);
  *((_DWORD *)this + 730) = 0;
  operator delete(v85);
  *((_QWORD *)this + 364) = 0LL;
LABEL_112:
  v86 = 0;
  v87 = *((_DWORD *)this + 730);
  if ( !v87 )
  {
LABEL_122:
    v96 = (ADAPTER_RENDER *)*((_QWORD *)this + 248);
    *((_DWORD *)this + 610) = v196;
    if ( v96 )
    {
      v97 = ADAPTER_RENDER::InitializePowerManagement(v96);
      v18 = v97;
      if ( v97 < 0 )
      {
        v99 = WdLogNewEntry5_WdError(v98);
        *(_QWORD *)(v99 + 32) = 7LL;
LABEL_125:
        *(_QWORD *)(v99 + 24) = v18;
        WdLogEvent5_WdError(v99);
        goto LABEL_136;
      }
    }
    v100 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 247);
    if ( v100 )
    {
      v101 = ADAPTER_DISPLAY::InitializePowerManagement(v100);
      v18 = v101;
      if ( v101 < 0 )
      {
        v99 = WdLogNewEntry5_WdError(v102);
        *(_QWORD *)(v99 + 32) = 8LL;
        goto LABEL_125;
      }
    }
    v103 = (__int64 *)((char *)this + 2016);
    v104 = PoFxRegisterDevice(*((_QWORD *)this + 22), v25, (char *)this + 2016);
    v18 = v104;
    if ( v104 < 0 )
    {
      v67 = WdLogNewEntry5_WdError(v105);
      *(_QWORD *)(v67 + 24) = v18;
      goto LABEL_135;
    }
    KeInitializeEvent((PRKEVENT)((char *)this + 2176), SynchronizationEvent, 0);
    *((_QWORD *)this + 308) = (char *)this + 2456;
    *((_QWORD *)this + 307) = (char *)this + 2456;
    *((_BYTE *)this + 2444) = 0;
    TimeIncrement = KeQueryTimeIncrement();
    memset((char *)this + 2200, 0, 0x60uLL);
    v107 = v206;
    *((_QWORD *)this + 275) = 10LL * v184;
    v108 = 5 * v107;
    v109 = v186;
    *((_QWORD *)this + 277) = 2 * v108;
    *((_QWORD *)this + 279) = 10 * v109;
    v110 = (unsigned int)(10000 * (unsigned __int64)v198 / TimeIncrement);
    v111 = v188;
    *((_QWORD *)this + 276) = v110;
    *((_QWORD *)this + 282) = v110;
    v112 = 5 * v111;
    v113 = v181;
    *((_QWORD *)this + 281) = 2 * v112;
    v114 = 5 * v113;
    v115 = v190;
    *((_QWORD *)this + 283) = 2 * v114;
    v116 = 5 * v115;
    v117 = v200;
    *((_QWORD *)this + 285) = 2 * v116;
    *((_QWORD *)this + 287) = (char *)this + 2200;
    v118 = 5 * v117;
    v119 = v192;
    *((_QWORD *)this + 319) = 2 * v118;
    v120 = 10000LL * v208;
    *((_QWORD *)this + 288) = 10 * v119;
    v121 = v194;
    *((_QWORD *)this + 289) = (unsigned int)(v120 / TimeIncrement);
    v122 = 10000LL * v202;
    *((_QWORD *)this + 290) = 10 * v121;
    v123 = v182;
    *((_QWORD *)this + 291) = (unsigned int)(v122 / TimeIncrement);
    v124 = 5 * v123;
    v125 = 10000LL * v183;
    *((_QWORD *)this + 292) = 2 * v124;
    *((_QWORD *)this + 293) = (unsigned int)(v125 / TimeIncrement);
    *((_QWORD *)this + 295) = 0LL;
    v126 = v187;
    *((_QWORD *)this + 294) = 10LL * v185;
    v127 = 5 * v126;
    v128 = v189;
    *((_QWORD *)this + 297) = 2 * v127;
    v129 = 5 * v128;
    v130 = v191;
    *((_QWORD *)this + 298) = 2 * v129;
    v131 = 5 * v130;
    v132 = v193;
    *((_QWORD *)this + 299) = 2 * v131;
    v133 = 5 * v132;
    v134 = v195;
    *((_QWORD *)this + 300) = 2 * v133;
    v135 = 5 * v134;
    v136 = v197;
    *((_QWORD *)this + 301) = 2 * v135;
    v137 = 5 * v136;
    v138 = v199;
    *((_QWORD *)this + 302) = 2 * v137;
    v139 = 5 * v138;
    v140 = v201;
    *((_QWORD *)this + 303) = 2 * v139;
    *((_QWORD *)this + 304) = 10 * v140;
    *((_QWORD *)this + 313) = (char *)this + 2496;
    *((_QWORD *)this + 312) = (char *)this + 2496;
    KeInitializeSpinLock((PKSPIN_LOCK)this + 318);
    v141 = 0;
    for ( k = 0LL; ; k += 520LL )
    {
      v143 = *((_QWORD *)this + 251);
      *(_BYTE *)(k + v143 + 356) = 1;
      v144 = (DXGADAPTER *)(k + v143 + 424);
      *(_QWORD *)v144 = 0LL;
      *((_QWORD *)v144 + 1) = 0LL;
      v145 = *(_DWORD *)(k + v143 + 208);
      if ( !v145 )
      {
        *(_BYTE *)(k + v143 + 357) = 1;
        v155 = (DXGADAPTER **)*((_QWORD *)this + 317);
        *(_QWORD *)v144 = (char *)this + 2528;
        *((_QWORD *)v144 + 1) = v155;
        if ( *v155 != (DXGADAPTER *)((char *)this + 2528) )
          __fastfail(3u);
        *v155 = v144;
        v156 = 0LL;
        *((_QWORD *)this + 317) = v144;
        v157 = *(_DWORD *)(k + v143 + 8);
        if ( v157 > 1 )
        {
          v158 = (unsigned __int64 *)(k + v143 + 40);
          v159 = v157 - 1;
          do
          {
            if ( v156 < *v158 )
              v156 = *v158;
            v158 += 3;
            --v159;
          }
          while ( v159 );
        }
        *(_DWORD *)(k + v143 + 388) = 1;
        v160 = 0;
        v161 = (unsigned __int64 *)((char *)this + 2200);
        while ( *v161 < v156 )
        {
          ++v160;
          v161 += 2;
          if ( v160 >= 2 )
            goto LABEL_167;
        }
        *(_DWORD *)(k + v143 + 388) = v160;
LABEL_167:
        v162 = *(_DWORD *)(k + v143 + 4);
        *(_DWORD *)(k + v143 + 384) = 2;
        DXGADAPTER::SetPowerComponentLatencyCB(this, v162, *(_QWORD *)(*((_QWORD *)this + 287) + 32LL));
        ++*((_DWORD *)this + 542);
        goto LABEL_168;
      }
      v146 = v145 - 1;
      if ( !v146 )
        break;
      v147 = v146 - 1;
      if ( !v147 )
      {
        v154 = v203;
LABEL_155:
        v150 = *(_DWORD *)(k + v143 + 4);
        v152 = 10 * v154;
        v151 = this;
LABEL_148:
        DXGADAPTER::SetPowerComponentLatencyCB(v151, v150, v152);
        goto LABEL_168;
      }
      v148 = v147 - 1;
      if ( !v148 )
      {
        v153 = (DXGADAPTER **)*((_QWORD *)this + 315);
        *(_QWORD *)v144 = (char *)this + 2512;
        *((_QWORD *)v144 + 1) = v153;
        if ( *v153 != (DXGADAPTER *)((char *)this + 2512) )
          __fastfail(3u);
        *v153 = v144;
        *((_QWORD *)this + 315) = v144;
        if ( (*(_DWORD *)(k + v143 + 216) & 0x10) != 0 )
          *(_BYTE *)(k + v143 + 360) = 1;
        goto LABEL_168;
      }
      v149 = v148 - 1;
      if ( v149 && v149 != 2 )
      {
        v150 = *(_DWORD *)(k + v143 + 4);
        v151 = this;
        if ( v179 == -1 )
          v152 = -1LL;
        else
          v152 = 10LL * v179;
        goto LABEL_148;
      }
LABEL_168:
      if ( v178 == -1 )
        v163 = -1LL;
      else
        v163 = 10000LL * v178;
      DXGADAPTER::SetPowerComponentResidencyCB(this, *(_DWORD *)(k + v143 + 4), v163);
      KeInitializeSpinLock((PKSPIN_LOCK)(k + v143 + 504));
      if ( *(_DWORD *)(k + v143 + 8) <= 1u || (v164 = *(_QWORD *)(k + v143 + 48), v164 == -1) )
      {
        v165 = *((_QWORD *)this + 319);
      }
      else
      {
        v165 = *((_QWORD *)this + 319);
        if ( v164 > v165 )
          v165 = *(_QWORD *)(k + v143 + 48);
      }
      *(_QWORD *)(k + v143 + 496) = v165;
      if ( ++v141 >= v6 )
      {
        DXGADAPTER::UpdateLatencyTolerances(this);
        PoFxSetDeviceIdleTimeout(*v103, 10LL * v207);
        DpiEnablePowerManagement(*((_QWORD *)this + 22), *v103);
        DXGADAPTER::InitializePowerManagement_::_50_::ENSURE_DELETE::_ENSURE_DELETE(&v168);
        return 0LL;
      }
    }
    v154 = v205;
    goto LABEL_155;
  }
  v88 = *((_QWORD *)this + 364);
  while ( 1 )
  {
    v89 = v86;
    v90 = 248LL * v86;
    v91 = *(unsigned int *)(v90 + v88 + 144);
    if ( *(_DWORD *)(v90 + v88) > 0x20u )
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdError(v86);
      v49[3] = v91;
      goto LABEL_84;
    }
    v92 = *(_DWORD *)(v90 + v88);
    v93 = 0;
    if ( v92 )
      break;
LABEL_121:
    if ( ++v86 >= v87 )
      goto LABEL_122;
  }
  v94 = 62LL * v86;
  while ( 1 )
  {
    v95 = *(_DWORD *)(v88 + 4 * (v94 + v93) + 4);
    if ( !v95 )
      break;
    if ( v93 )
    {
      v89 = v94 + v93 - 1;
      if ( v95 > *(_DWORD *)(v88 + 4 * v89 + 4) )
      {
        v49 = (_QWORD *)WdLogNewEntry5_WdError(v89);
        v49[3] = v91;
        v49[4] = v93;
        v49[5] = v93 - 1;
        goto LABEL_84;
      }
    }
    if ( ++v93 >= v92 )
      goto LABEL_121;
  }
  v49 = (_QWORD *)WdLogNewEntry5_WdError(v89);
  v49[3] = v91;
  v49[4] = v93;
LABEL_84:
  WdLogEvent5_WdError(v49);
  LODWORD(v18) = -1073741811;
LABEL_136:
  DXGADAPTER::InitializePowerManagement_::_50_::ENSURE_DELETE::_ENSURE_DELETE(&v168);
LABEL_137:
  if ( *((_QWORD *)this + 252) )
  {
    PoFxUnregisterDevice();
    *((_QWORD *)this + 252) = 0LL;
  }
  return (unsigned int)v18;
}
