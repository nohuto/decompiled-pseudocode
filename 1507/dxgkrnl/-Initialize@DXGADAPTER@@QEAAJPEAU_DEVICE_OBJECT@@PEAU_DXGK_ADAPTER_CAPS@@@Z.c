/*
 * XREFs of ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00BEB04
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00C323C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002474 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002490 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C000268C (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0004FF8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000B05C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C007831C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DpiGetAdapterInfo @ 0x1C00BAC70 (DpiGetAdapterInfo.c)
 *     ?CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z @ 0x1C00BEA20 (-CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C00C0304 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ @ 0x1C00C3B98 (-AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ.c)
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C00C3C00 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00D1E28 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00DB5E4 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall DXGADAPTER::Initialize(
        DXGADAPTER *this,
        struct _DEVICE_OBJECT *a2,
        struct _DXGK_ADAPTER_CAPS *a3,
        __int64 a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rbx
  __int64 v14; // rax
  struct _ERESOURCE *v16; // rax
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rax
  DXGGLOBAL *v24; // rcx
  unsigned int v25; // eax
  struct _ERESOURCE *v26; // rax
  NTSTATUS v27; // eax
  int AdapterInfo; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  size_t v34; // r8
  char *v35; // rcx
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  NTSTATUS v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rsi
  __int64 v45; // rax
  NTSTATUS v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rsi
  _QWORD *v52; // rax
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rax
  _DWORD *v57; // r13
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  unsigned __int64 v63; // r15
  SIZE_T v64; // rax
  unsigned __int64 v65; // r12
  PVOID v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  char v76; // al
  int v77; // eax
  char v78; // cl
  char v79; // cl
  char v80; // cl
  char v81; // dl
  char v82; // cl
  char v83; // dl
  char v84; // al
  unsigned int v85; // eax
  __int64 v86; // rcx
  DXGGLOBAL *Global; // rax
  unsigned int v88; // edx
  __int64 v89; // rcx
  bool v90; // al
  bool v91; // al
  bool v92; // al
  bool v93; // al
  bool v94; // al
  bool v95; // al
  bool v96; // al
  bool v97; // al
  char v98; // al
  bool v99; // al
  char v100; // al
  char v101; // dl
  struct DXGADAPTER *v102; // rcx
  __int64 *v103; // rbx
  int RenderCore; // eax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // r15
  __int64 v110; // rax
  __int64 v111; // rax
  _QWORD *v112; // r15
  int DisplayCore; // eax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // r12
  __int64 v119; // rax
  __int64 v120; // rax
  bool v121; // zf
  __int64 v122; // rdx
  DXGADAPTER *v123; // rcx
  int v124; // eax
  __int64 v125; // rcx
  bool IsBddFallbackDriver; // cf
  int v127; // eax
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  int v138; // eax
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rsi
  __int64 v144; // rax
  __int64 v145; // rbx
  struct DXGGLOBAL *v146; // rax
  __int64 v147; // rbx
  int v148; // eax
  int v149; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v150; // [rsp+34h] [rbp-CCh] BYREF
  int v151; // [rsp+38h] [rbp-C8h] BYREF
  int v152; // [rsp+3Ch] [rbp-C4h] BYREF
  int v153; // [rsp+40h] [rbp-C0h] BYREF
  int v154; // [rsp+44h] [rbp-BCh] BYREF
  int v155; // [rsp+48h] [rbp-B8h] BYREF
  int v156; // [rsp+4Ch] [rbp-B4h] BYREF
  int v157; // [rsp+50h] [rbp-B0h] BYREF
  int v158; // [rsp+54h] [rbp-ACh] BYREF
  int v159; // [rsp+58h] [rbp-A8h] BYREF
  int v160; // [rsp+5Ch] [rbp-A4h] BYREF
  int v161; // [rsp+60h] [rbp-A0h] BYREF
  int v162; // [rsp+64h] [rbp-9Ch] BYREF
  int v163; // [rsp+68h] [rbp-98h] BYREF
  int v164; // [rsp+6Ch] [rbp-94h] BYREF
  int v165; // [rsp+70h] [rbp-90h] BYREF
  int v166; // [rsp+74h] [rbp-8Ch] BYREF
  int v167; // [rsp+78h] [rbp-88h] BYREF
  int v168; // [rsp+7Ch] [rbp-84h] BYREF
  int v169; // [rsp+80h] [rbp-80h] BYREF
  int v170; // [rsp+84h] [rbp-7Ch] BYREF
  int v171; // [rsp+88h] [rbp-78h] BYREF
  int v172; // [rsp+8Ch] [rbp-74h] BYREF
  int v173; // [rsp+90h] [rbp-70h] BYREF
  int v174; // [rsp+94h] [rbp-6Ch] BYREF
  int v175; // [rsp+98h] [rbp-68h] BYREF
  int v176; // [rsp+9Ch] [rbp-64h] BYREF
  int v177; // [rsp+A0h] [rbp-60h] BYREF
  int v178; // [rsp+A4h] [rbp-5Ch] BYREF
  int v179; // [rsp+A8h] [rbp-58h] BYREF
  int v180; // [rsp+ACh] [rbp-54h] BYREF
  int v181; // [rsp+B0h] [rbp-50h] BYREF
  int v182; // [rsp+B4h] [rbp-4Ch] BYREF
  int v183; // [rsp+B8h] [rbp-48h] BYREF
  int v184; // [rsp+BCh] [rbp-44h] BYREF
  int v185; // [rsp+C0h] [rbp-40h] BYREF
  int v186; // [rsp+C4h] [rbp-3Ch] BYREF
  int v187; // [rsp+C8h] [rbp-38h] BYREF
  int v188; // [rsp+CCh] [rbp-34h] BYREF
  int v189; // [rsp+D0h] [rbp-30h] BYREF
  int v190; // [rsp+D4h] [rbp-2Ch] BYREF
  int v191; // [rsp+D8h] [rbp-28h] BYREF
  int v192; // [rsp+DCh] [rbp-24h] BYREF
  int v193; // [rsp+E0h] [rbp-20h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v194; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v195[16]; // [rsp+118h] [rbp+18h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v196; // [rsp+128h] [rbp+28h] BYREF
  unsigned int *v197; // [rsp+158h] [rbp+58h]
  int v198; // [rsp+160h] [rbp+60h]
  __int64 v199; // [rsp+168h] [rbp+68h]
  int v200; // [rsp+170h] [rbp+70h]
  __int64 v201; // [rsp+178h] [rbp+78h] BYREF
  __int64 v202; // [rsp+180h] [rbp+80h]
  __int64 v203; // [rsp+190h] [rbp+90h] BYREF
  int v204; // [rsp+198h] [rbp+98h]
  const wchar_t *v205; // [rsp+1A0h] [rbp+A0h]
  int *v206; // [rsp+1A8h] [rbp+A8h]
  int v207; // [rsp+1B0h] [rbp+B0h]
  int *v208; // [rsp+1B8h] [rbp+B8h]
  int v209; // [rsp+1C0h] [rbp+C0h]
  __int64 v210; // [rsp+1C8h] [rbp+C8h]
  int v211; // [rsp+1D0h] [rbp+D0h]
  const wchar_t *v212; // [rsp+1D8h] [rbp+D8h]
  int *v213; // [rsp+1E0h] [rbp+E0h]
  int v214; // [rsp+1E8h] [rbp+E8h]
  int *v215; // [rsp+1F0h] [rbp+F0h]
  int v216; // [rsp+1F8h] [rbp+F8h]
  __int64 v217; // [rsp+200h] [rbp+100h]
  int v218; // [rsp+208h] [rbp+108h]
  const wchar_t *v219; // [rsp+210h] [rbp+110h]
  int *v220; // [rsp+218h] [rbp+118h]
  int v221; // [rsp+220h] [rbp+120h]
  int *v222; // [rsp+228h] [rbp+128h]
  int v223; // [rsp+230h] [rbp+130h]
  __int64 v224; // [rsp+238h] [rbp+138h]
  int v225; // [rsp+240h] [rbp+140h]
  const wchar_t *v226; // [rsp+248h] [rbp+148h]
  int *v227; // [rsp+250h] [rbp+150h]
  int v228; // [rsp+258h] [rbp+158h]
  int *v229; // [rsp+260h] [rbp+160h]
  int v230; // [rsp+268h] [rbp+168h]
  __int64 v231; // [rsp+270h] [rbp+170h]
  int v232; // [rsp+278h] [rbp+178h]
  const wchar_t *v233; // [rsp+280h] [rbp+180h]
  __int64 *v234; // [rsp+288h] [rbp+188h]
  int v235; // [rsp+290h] [rbp+190h]
  HANDLE *p_hKmdProcessHandle; // [rsp+298h] [rbp+198h]
  int v237; // [rsp+2A0h] [rbp+1A0h]
  __int64 v238; // [rsp+2A8h] [rbp+1A8h]
  int v239; // [rsp+2B0h] [rbp+1B0h]
  const wchar_t *v240; // [rsp+2B8h] [rbp+1B8h]
  int *v241; // [rsp+2C0h] [rbp+1C0h]
  int v242; // [rsp+2C8h] [rbp+1C8h]
  int *v243; // [rsp+2D0h] [rbp+1D0h]
  int v244; // [rsp+2D8h] [rbp+1D8h]
  __int64 v245; // [rsp+2E0h] [rbp+1E0h]
  int v246; // [rsp+2E8h] [rbp+1E8h]
  const wchar_t *v247; // [rsp+2F0h] [rbp+1F0h]
  int *v248; // [rsp+2F8h] [rbp+1F8h]
  int v249; // [rsp+300h] [rbp+200h]
  int *v250; // [rsp+308h] [rbp+208h]
  int v251; // [rsp+310h] [rbp+210h]
  __int64 v252; // [rsp+318h] [rbp+218h]
  int v253; // [rsp+320h] [rbp+220h]
  const wchar_t *v254; // [rsp+328h] [rbp+228h]
  int *v255; // [rsp+330h] [rbp+230h]
  int v256; // [rsp+338h] [rbp+238h]
  int *v257; // [rsp+340h] [rbp+240h]
  int v258; // [rsp+348h] [rbp+248h]
  __int64 v259; // [rsp+350h] [rbp+250h]
  int v260; // [rsp+358h] [rbp+258h]
  const wchar_t *v261; // [rsp+360h] [rbp+260h]
  int *v262; // [rsp+368h] [rbp+268h]
  int v263; // [rsp+370h] [rbp+270h]
  int *v264; // [rsp+378h] [rbp+278h]
  int v265; // [rsp+380h] [rbp+280h]
  __int64 v266; // [rsp+388h] [rbp+288h]
  int v267; // [rsp+390h] [rbp+290h]
  const wchar_t *v268; // [rsp+398h] [rbp+298h]
  int *v269; // [rsp+3A0h] [rbp+2A0h]
  int v270; // [rsp+3A8h] [rbp+2A8h]
  int *v271; // [rsp+3B0h] [rbp+2B0h]
  int v272; // [rsp+3B8h] [rbp+2B8h]
  __int64 v273; // [rsp+3C0h] [rbp+2C0h]
  int v274; // [rsp+3C8h] [rbp+2C8h]
  const wchar_t *v275; // [rsp+3D0h] [rbp+2D0h]
  int *v276; // [rsp+3D8h] [rbp+2D8h]
  int v277; // [rsp+3E0h] [rbp+2E0h]
  int *v278; // [rsp+3E8h] [rbp+2E8h]
  int v279; // [rsp+3F0h] [rbp+2F0h]
  __int64 v280; // [rsp+3F8h] [rbp+2F8h]
  int v281; // [rsp+400h] [rbp+300h]
  const wchar_t *v282; // [rsp+408h] [rbp+308h]
  int *v283; // [rsp+410h] [rbp+310h]
  int v284; // [rsp+418h] [rbp+318h]
  int *v285; // [rsp+420h] [rbp+320h]
  int v286; // [rsp+428h] [rbp+328h]
  __int64 v287; // [rsp+430h] [rbp+330h]
  int v288; // [rsp+438h] [rbp+338h]
  const wchar_t *v289; // [rsp+440h] [rbp+340h]
  int *v290; // [rsp+448h] [rbp+348h]
  int v291; // [rsp+450h] [rbp+350h]
  int *v292; // [rsp+458h] [rbp+358h]
  int v293; // [rsp+460h] [rbp+360h]
  __int64 v294; // [rsp+468h] [rbp+368h]
  int v295; // [rsp+470h] [rbp+370h]
  const wchar_t *v296; // [rsp+478h] [rbp+378h]
  int *v297; // [rsp+480h] [rbp+380h]
  int v298; // [rsp+488h] [rbp+388h]
  int *v299; // [rsp+490h] [rbp+390h]
  int v300; // [rsp+498h] [rbp+398h]
  __int64 v301; // [rsp+4A0h] [rbp+3A0h]
  int v302; // [rsp+4A8h] [rbp+3A8h]
  const wchar_t *v303; // [rsp+4B0h] [rbp+3B0h]
  int *v304; // [rsp+4B8h] [rbp+3B8h]
  int v305; // [rsp+4C0h] [rbp+3C0h]
  int *v306; // [rsp+4C8h] [rbp+3C8h]
  int v307; // [rsp+4D0h] [rbp+3D0h]
  __int64 v308; // [rsp+4D8h] [rbp+3D8h]
  int v309; // [rsp+4E0h] [rbp+3E0h]
  const wchar_t *v310; // [rsp+4E8h] [rbp+3E8h]
  int *v311; // [rsp+4F0h] [rbp+3F0h]
  int v312; // [rsp+4F8h] [rbp+3F8h]
  int *v313; // [rsp+500h] [rbp+400h]
  int v314; // [rsp+508h] [rbp+408h]
  __int64 v315; // [rsp+510h] [rbp+410h]
  int v316; // [rsp+518h] [rbp+418h]
  const wchar_t *v317; // [rsp+520h] [rbp+420h]
  int *v318; // [rsp+528h] [rbp+428h]
  int v319; // [rsp+530h] [rbp+430h]
  int *v320; // [rsp+538h] [rbp+438h]
  int v321; // [rsp+540h] [rbp+440h]
  __int64 v322; // [rsp+548h] [rbp+448h]
  int v323; // [rsp+550h] [rbp+450h]
  const wchar_t *v324; // [rsp+558h] [rbp+458h]
  int *v325; // [rsp+560h] [rbp+460h]
  int v326; // [rsp+568h] [rbp+468h]
  int *v327; // [rsp+570h] [rbp+470h]
  int v328; // [rsp+578h] [rbp+478h]
  __int64 v329; // [rsp+580h] [rbp+480h]
  int v330; // [rsp+588h] [rbp+488h]
  const wchar_t *v331; // [rsp+590h] [rbp+490h]
  int *v332; // [rsp+598h] [rbp+498h]
  int v333; // [rsp+5A0h] [rbp+4A0h]
  int *v334; // [rsp+5A8h] [rbp+4A8h]
  int v335; // [rsp+5B0h] [rbp+4B0h]
  __int64 v336; // [rsp+5B8h] [rbp+4B8h]
  int v337; // [rsp+5C0h] [rbp+4C0h]
  const wchar_t *v338; // [rsp+5C8h] [rbp+4C8h]
  int *v339; // [rsp+5D0h] [rbp+4D0h]
  int v340; // [rsp+5D8h] [rbp+4D8h]
  int *v341; // [rsp+5E0h] [rbp+4E0h]
  int v342; // [rsp+5E8h] [rbp+4E8h]
  __int64 v343; // [rsp+5F0h] [rbp+4F0h]
  int v344; // [rsp+5F8h] [rbp+4F8h]
  const wchar_t *v345; // [rsp+600h] [rbp+500h]
  int *v346; // [rsp+608h] [rbp+508h]
  int v347; // [rsp+610h] [rbp+510h]
  int *v348; // [rsp+618h] [rbp+518h]
  int v349; // [rsp+620h] [rbp+520h]
  __int64 v350; // [rsp+628h] [rbp+528h]
  int v351; // [rsp+630h] [rbp+530h]
  const wchar_t *v352; // [rsp+638h] [rbp+538h]
  int *v353; // [rsp+640h] [rbp+540h]
  int v354; // [rsp+648h] [rbp+548h]
  int *v355; // [rsp+650h] [rbp+550h]
  int v356; // [rsp+658h] [rbp+558h]
  __int64 v357; // [rsp+660h] [rbp+560h]
  int v358; // [rsp+668h] [rbp+568h]
  const wchar_t *v359; // [rsp+670h] [rbp+570h]
  int *v360; // [rsp+678h] [rbp+578h]
  int v361; // [rsp+680h] [rbp+580h]
  int *v362; // [rsp+688h] [rbp+588h]
  int v363; // [rsp+690h] [rbp+590h]
  __int64 v364; // [rsp+698h] [rbp+598h]
  int v365; // [rsp+6A0h] [rbp+5A0h]
  const wchar_t *v366; // [rsp+6A8h] [rbp+5A8h]
  int *v367; // [rsp+6B0h] [rbp+5B0h]
  int v368; // [rsp+6B8h] [rbp+5B8h]
  int *v369; // [rsp+6C0h] [rbp+5C0h]
  int v370; // [rsp+6C8h] [rbp+5C8h]
  __int64 v371; // [rsp+6D0h] [rbp+5D0h]
  int v372; // [rsp+6D8h] [rbp+5D8h]
  const wchar_t *v373; // [rsp+6E0h] [rbp+5E0h]
  int *v374; // [rsp+6E8h] [rbp+5E8h]
  int v375; // [rsp+6F0h] [rbp+5F0h]
  int *v376; // [rsp+6F8h] [rbp+5F8h]
  int v377; // [rsp+700h] [rbp+600h]
  __int64 v378; // [rsp+708h] [rbp+608h]
  int v379; // [rsp+710h] [rbp+610h]
  __int64 v380; // [rsp+718h] [rbp+618h]
  _BYTE v381[32]; // [rsp+720h] [rbp+620h] BYREF

  if ( KeGetCurrentIrql() )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 15592LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_DWORD *)this + 40) )
    return 3221225485LL;
  v8 = operator new[](0x1B8uLL, 0x4B677844u, (POOL_TYPE)512);
  v13 = v8;
  if ( v8 )
  {
    *v8 = 0LL;
    v8[38] = 0LL;
    v8[39] = 0LL;
    v8[40] = 0LL;
    v8[41] = 0LL;
    v8[42] = 0LL;
    memset(v8 + 1, 0, 0x48uLL);
    memset(v13 + 10, 0, 0xE0uLL);
    memset(v13 + 43, 0, 0x50uLL);
  }
  else
  {
    v13 = 0LL;
  }
  *((_QWORD *)this + 392) = v13;
  if ( !v13 )
    goto LABEL_8;
  v16 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 16) = v16;
  if ( !v16 )
    goto LABEL_8;
  v17 = ExInitializeResourceLite(v16);
  v22 = v17;
  if ( v17 < 0 )
  {
LABEL_12:
    v23 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    *(_QWORD *)(v23 + 24) = this;
    *(_QWORD *)(v23 + 32) = v22;
    WdLogEvent5_WdWarning(v23);
    return (unsigned int)v22;
  }
  v24 = (DXGGLOBAL *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 22) = a2;
  v25 = DXGGLOBAL::AcquireAdapterOrdinal(v24);
  *((_DWORD *)this + 46) = v25;
  if ( v25 == -1 )
    return 3221225495LL;
  v26 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 27) = v26;
  if ( !v26 )
  {
LABEL_8:
    v14 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    *(_QWORD *)(v14 + 24) = this;
    *(_QWORD *)(v14 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v14);
    return 3221225495LL;
  }
  v27 = ExInitializeResourceLite(v26);
  v22 = v27;
  if ( v27 < 0 )
    goto LABEL_12;
  DXGADAPTER::AcquireReference(this);
  AdapterInfo = DpiGetAdapterInfo((__int64)a2, (__int64)this + 880, (_QWORD *)this + 28);
  v22 = AdapterInfo;
  if ( AdapterInfo < 0 )
  {
    v33 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
    *(_QWORD *)(v33 + 24) = this;
    *(_QWORD *)(v33 + 32) = v22;
    WdLogEvent5_WdWarning(v33);
    memset((char *)this + 224, 0, 0x290uLL);
    v34 = 192LL;
    v35 = (char *)this + 880;
LABEL_19:
    memset(v35, 0, v34);
    return (unsigned int)v22;
  }
  v36 = *((_DWORD *)this + 71);
  if ( (v36 & 4) != 0 && (v36 & 8) != 0 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v30, v29, v31, v32);
    *(_QWORD *)(v37 + 24) = 15704LL;
    WdLogEvent5_WdAssertion(v37);
  }
  if ( !*((_QWORD *)this + 37) )
  {
    v38 = WdLogNewEntry5_WdError(v30);
    *(_QWORD *)(v38 + 24) = 15711LL;
LABEL_25:
    WdLogEvent5_WdError(v38);
    return 3221225561LL;
  }
  if ( !*((_QWORD *)this + 54) )
    *((_QWORD *)this + 54) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  v39 = DXGADAPTER::CallDriverQueryInterface(
          (PDEVICE_OBJECT *)this,
          &GUID_AGP_BUS_INTERFACE_STANDARD,
          184LL,
          5LL,
          (char *)this + 1072);
  v44 = v39;
  if ( v39 < 0 )
  {
    v45 = WdLogNewEntry5_WdTrace(v41, v40, v42, v43);
    *(_QWORD *)(v45 + 24) = this;
    *(_QWORD *)(v45 + 32) = v44;
LABEL_31:
    memset((char *)this + 1072, 0, 0xB8uLL);
    goto LABEL_32;
  }
  if ( *((_WORD *)this + 537) < 4u )
    goto LABEL_31;
LABEL_32:
  if ( (*((_DWORD *)this + 71) & 0x80u) != 0 )
  {
    v46 = DXGADAPTER::CallDriverQueryInterface(
            (PDEVICE_OBJECT *)this,
            &GUID_DEVINTERFACE_INDIRECT_DISP_KMD,
            48LL,
            1LL,
            (char *)this + 1264);
    v22 = v46;
    if ( v46 < 0 )
    {
      v48 = WdLogNewEntry5_WdError(v47);
      *(_QWORD *)(v48 + 24) = this;
      *(_QWORD *)(v48 + 32) = v22;
      WdLogEvent5_WdError(v48);
      v34 = 48LL;
      v35 = (char *)this + 1264;
      goto LABEL_19;
    }
  }
  v194.Type = DXGKQAITYPE_DRIVERCAPS;
  v194.pOutputData = (char *)this + 1312;
  v49 = *((_QWORD *)this + 22);
  v194.pInputData = 0LL;
  v194.InputDataSize = 0;
  v194.OutputDataSize = 576;
  v50 = *(_QWORD *)(v49 + 64);
  v51 = *(unsigned int *)(*(_QWORD *)(v50 + 40) + 28LL);
  *((_DWORD *)this + 314) = v51;
  if ( (unsigned int)(v51 - 20480) <= 5 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v50);
    v52[3] = 15799LL;
LABEL_243:
    WdLogEvent5_WdError(v52);
    return 3221225485LL;
  }
  if ( (unsigned int)v51 < 0x5011 )
  {
    if ( (unsigned int)v51 < 0x4000 )
    {
      if ( (unsigned int)v51 < 0x3000 )
      {
        if ( (unsigned int)v51 < 0x2001 )
        {
          if ( (unsigned int)v51 >= 0x2000 || (unsigned int)v51 < 0x104E )
          {
            v52 = (_QWORD *)WdLogNewEntry5_WdError(v50);
            v52[3] = v51;
            goto LABEL_243;
          }
          v194.OutputDataSize = 336;
        }
        else
        {
          v194.OutputDataSize = 528;
        }
      }
      else
      {
        v194.OutputDataSize = 544;
      }
    }
    else
    {
      v194.OutputDataSize = 552;
    }
  }
  else
  {
    v194.OutputDataSize = 576;
  }
  v53 = DXGADAPTER::DdiQueryAdapterInfo(this, &v194, v42);
  v22 = v53;
  if ( v53 < 0 )
    goto LABEL_49;
  v57 = (_DWORD *)((char *)this + 1888);
  *((_DWORD *)this + 472) = 0;
  if ( (unsigned int)v51 >= 0x5010 )
  {
    v196.Type = DXGKQAITYPE_DISPLAY_DRIVERCAPS_EXTENSION;
    v196.pInputData = 0LL;
    v196.InputDataSize = 0;
    v196.pOutputData = (char *)this + 1888;
    v196.OutputDataSize = 4;
    v58 = DXGADAPTER::DdiQueryAdapterInfo(this, &v196, v55);
    LODWORD(v22) = v58;
    if ( v58 < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v60, v59, v61, v62) + 24) = v58;
      *v57 = 0;
      LODWORD(v22) = 0;
    }
  }
  v63 = *((unsigned int *)this + 58);
  v64 = 48 * v63;
  v65 = v63;
  if ( !is_mul_ok(v63, 0x30uLL) )
    v64 = -1LL;
  v66 = operator new[](v64, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 237) = v66;
  if ( !v66 )
  {
    v68 = WdLogNewEntry5_WdLowResource(v67);
    *(_QWORD *)(v68 + 24) = 15988LL;
    WdLogEvent5_WdLowResource(v68);
    return 3221225495LL;
  }
  memset(v66, 0, 48 * v63);
  if ( *((int *)this + 412) >= 0x2000 && (unsigned int)v63 > 1 && (unsigned int)v51 >= 0x5005 )
  {
    *((_DWORD *)this + 476) = 0;
    LODWORD(v69) = 0;
    v150 = 0;
    while ( 1 )
    {
      LODWORD(v196.hKmdProcessHandle) = 15;
      v197 = &v150;
      v198 = 4;
      v200 = 24;
      v199 = *((_QWORD *)this + 237) + 48LL * (unsigned int)v69;
      v73 = DXGADAPTER::DdiQueryAdapterInfo(
              this,
              (const struct _DXGKARG_QUERYADAPTERINFO *)&v196.hKmdProcessHandle,
              v71);
      v22 = v73;
      if ( v73 < 0 )
        break;
      v69 = v150 + 1;
      v70 = *(unsigned __int16 *)(*((_QWORD *)this + 237) + 48LL * v150);
      *((_DWORD *)this + 476) += v70;
      v150 = v69;
      if ( (unsigned int)v69 >= (unsigned int)v63 )
      {
        if ( *((_DWORD *)this + 476) > 0x40u )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdError(v70);
          v52[3] = this;
          v52[4] = 64LL;
          v52[5] = *((unsigned int *)this + 476);
          goto LABEL_243;
        }
        if ( (*((_DWORD *)this + 344) & 1) == 0 )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdError(v70);
          v52[3] = this;
          v52[4] = 16029LL;
          goto LABEL_243;
        }
        goto LABEL_71;
      }
    }
LABEL_49:
    v56 = WdLogNewEntry5_WdError(v54);
    *(_QWORD *)(v56 + 24) = v22;
LABEL_50:
    WdLogEvent5_WdError(v56);
    return (unsigned int)v22;
  }
  if ( (_DWORD)v63 )
  {
    v69 = 0LL;
    do
    {
      *(_WORD *)(v69 + *((_QWORD *)this + 237)) = *((_WORD *)this + 694);
      *(_DWORD *)(v69 + *((_QWORD *)this + 237) + 16) ^= (*(_DWORD *)(v69 + *((_QWORD *)this + 237) + 16) ^ (*((_DWORD *)this + 345) >> 7)) & 1;
      *(_DWORD *)(v69 + *((_QWORD *)this + 237) + 16) ^= (*(_DWORD *)(v69 + *((_QWORD *)this + 237) + 16) ^ (*((_DWORD *)this + 345) >> 5)) & 2;
      *(_WORD *)(v69 + *((_QWORD *)this + 237) + 2) = *((_WORD *)this + 692);
      v70 = *((_QWORD *)this + 237);
      *(_QWORD *)(v69 + v70 + 8) = *((_QWORD *)this + 22);
      v69 += 48LL;
      --v65;
    }
    while ( v65 );
  }
LABEL_71:
  if ( (unsigned int)v51 >= 0x3001 )
  {
    v77 = *((_DWORD *)this + 412);
    if ( v77 != 4096 && v77 != 4608 && v77 != 4864 && v77 != 0x2000 )
    {
      v38 = WdLogNewEntry5_WdError(v70);
      *(_QWORD *)(v38 + 24) = *((int *)this + 412);
      goto LABEL_25;
    }
  }
  else
  {
    *((_DWORD *)this + 412) = 4096;
  }
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v70, v69, v71, v72) + 512) || (v76 = 1, (*((_DWORD *)this + 71) & 4) != 0) )
    v76 = 0;
  *((_BYTE *)this + 1908) = v76;
  if ( v76 )
  {
    v75 = *((unsigned int *)this + 412);
    if ( (int)v75 < 4608
      && (*((_DWORD *)this + 460)
       || *((_DWORD *)this + 461)
       || *((_BYTE *)this + 1848)
       || *((_BYTE *)this + 1849)
       || *((_BYTE *)this + 1850)
       || (*((_DWORD *)this + 341) & 0x10000000) != 0
       || (*((_DWORD *)this + 344) & 0x14) != 0
       || *((_BYTE *)this + 1851)
       || *((_BYTE *)this + 1853)
       || *((_BYTE *)this + 1854)) )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v75);
      v52[3] = 16112LL;
      goto LABEL_243;
    }
    if ( (int)v75 < 4864
      && ((*((_DWORD *)this + 343) & 0x10) != 0
       || (*((_DWORD *)this + 345) & 0x10) != 0
       || *((_BYTE *)this + 1855)
       || *((_DWORD *)this + 464)) )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v75);
      v52[3] = 16127LL;
      goto LABEL_243;
    }
    if ( (int)v75 < 0x2000 && *((_BYTE *)this + 1860) )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v75);
      v52[3] = 16155LL;
      goto LABEL_243;
    }
  }
  if ( (unsigned int)v51 < 0x4000 )
  {
    *((_DWORD *)this + 345) &= ~0x10u;
    *((_BYTE *)this + 1855) = 0;
  }
  if ( (unsigned int)v51 < 0x5011 )
  {
    v75 = *((unsigned int *)this + 71);
    if ( (v75 & 1) != 0 && (*((_DWORD *)this + 345) & 0x10) != 0 && (v75 & 0x400) != 0 )
      *((_BYTE *)this + 1860) = 1;
  }
  *(_BYTE *)a3 ^= (*(_BYTE *)a3 ^ (4 * *((_BYTE *)this + 1848))) & 4;
  v78 = *(_BYTE *)a3 ^ (*(_BYTE *)a3 ^ (8 * (*((_BYTE *)this + 1854) != 0))) & 8;
  *(_BYTE *)a3 = v78;
  v79 = (v78 ^ (32 * (*((_DWORD *)this + 345) >> 4))) & 0x20 ^ v78;
  *(_BYTE *)a3 = v79;
  v80 = (v79 ^ (*((_BYTE *)this + 1855) << 6)) & 0x40 ^ v79;
  *(_BYTE *)a3 = v80;
  *((_DWORD *)a3 + 1) = *((_DWORD *)this + 337);
  v81 = v80 & 0x7F | (*(_BYTE *)v57 << 7);
  *(_BYTE *)a3 = v81;
  *((_BYTE *)a3 + 1) ^= (*((_BYTE *)a3 + 1) ^ *((_BYTE *)this + 1860)) & 1;
  v82 = *((_BYTE *)a3 + 1);
  v83 = v81 & 0xEF;
  v84 = 2 * (*((_DWORD *)this + 412) >= 0x2000);
  *(_BYTE *)a3 = v83;
  *((_BYTE *)a3 + 1) = v82 ^ (v82 ^ v84) & 2;
  if ( (unsigned int)v51 >= 0x5021 )
    *(_BYTE *)a3 = v83 ^ (v83 ^ (16 * *((_BYTE *)this + 1880))) & 0x10;
  LOBYTE(v74) = *(_BYTE *)a3;
  LOBYTE(v75) = (*(_BYTE *)a3 & 0x40) != 0;
  if ( (*(_BYTE *)a3 & 0x40) != 0 && (unsigned int)v51 < 0x5005 && (*((_DWORD *)this + 228) || *((_DWORD *)this + 229)) )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v75);
    v52[3] = *((_QWORD *)this + 22);
    goto LABEL_243;
  }
  if ( ((*(_BYTE *)a3 & 0x40) != 0 || (*((_BYTE *)a3 + 1) & 1) != 0) && (v74 & 0x20) == 0 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v75);
    v52[3] = *((_QWORD *)this + 22);
    v52[4] = 16229LL;
    goto LABEL_243;
  }
  if ( (*(_BYTE *)a3 & 0x40) != 0 )
  {
    if ( (*((_BYTE *)a3 + 1) & 1) != 0 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v75);
      v52[3] = *((_QWORD *)this + 22);
      v52[4] = 16236LL;
      goto LABEL_243;
    }
  }
  else if ( (*((_BYTE *)a3 + 1) & 1) != 0 && !*((_DWORD *)this + 229) )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v75);
    v52[3] = *((_QWORD *)this + 22);
    v52[4] = 16244LL;
    goto LABEL_243;
  }
  if ( *((_BYTE *)this + 1850) && (!*((_QWORD *)this + 83) || !*((_QWORD *)this + 84) || !*((_QWORD *)this + 85)) )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v75);
    v52[3] = 16258LL;
    goto LABEL_243;
  }
  if ( (*((_DWORD *)this + 341) & 4) != 0 && !*((_QWORD *)this + 81) )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v75);
    v52[3] = 16265LL;
    goto LABEL_243;
  }
  if ( *((_BYTE *)this + 1853) && (!*((_QWORD *)this + 87) || !*((_QWORD *)this + 88)) )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v75);
    v52[3] = 16273LL;
    goto LABEL_243;
  }
  if ( (unsigned int)v51 < 0x300C && *((_QWORD *)this + 87) && *((_QWORD *)this + 88) )
    *((_BYTE *)this + 1853) = 1;
  *((_WORD *)this + 955) = 0;
  *((_BYTE *)this + 1912) = 0;
  if ( *((_BYTE *)this + 1852) )
  {
    if ( (unsigned int)v51 < 0x300B )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v75);
      v52[3] = 16294LL;
      goto LABEL_243;
    }
    if ( (unsigned int)v51 >= 0x4000 )
    {
      if ( (_DWORD)v51 == 0x4000 )
      {
        *((_BYTE *)this + 1911) = 1;
      }
      else
      {
        v85 = *((_DWORD *)this + 464);
        if ( !v85 )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdError(v75);
          v52[3] = 16307LL;
          goto LABEL_243;
        }
        if ( v85 > 8 )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdError(v75);
          v52[3] = 16312LL;
          goto LABEL_243;
        }
        if ( (unsigned int)v51 > 0x5000 )
          *((_BYTE *)this + 1912) = 1;
      }
    }
    else
    {
      *((_BYTE *)this + 1910) = 1;
    }
    if ( !*((_QWORD *)this + 91) )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v75);
      v52[3] = 16325LL;
      goto LABEL_243;
    }
    if ( !*((_BYTE *)this + 1851) )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v75);
      v52[3] = 16334LL;
      goto LABEL_243;
    }
  }
  if ( (int)v22 >= 0 )
  {
    v86 = *(_QWORD *)(*((_QWORD *)this + 22) + 64LL);
    if ( !*(_BYTE *)(*(_QWORD *)(v86 + 40) + 133LL) )
    {
      if ( *((int *)this + 412) >= 0x2000 )
      {
        Global = DXGGLOBAL::GetGlobal(v86, v74, 0x2000LL, 0x4000LL);
        v88 = 1;
      }
      else
      {
        Global = DXGGLOBAL::GetGlobal(v86, v74, 0x2000LL, 0x4000LL);
        v88 = 0;
      }
      LODWORD(v22) = DXGGLOBAL::DeferredInitialize(Global, v88);
      if ( (int)v22 < 0 )
      {
        v56 = WdLogNewEntry5_WdError(v89);
        *(_QWORD *)(v56 + 24) = (int)v22;
        goto LABEL_50;
      }
    }
  }
  v174 = 0;
  DXGADAPTER::Config = 0;
  v163 = 0;
  v192 = 7000;
  v153 = 7000;
  v205 = L"ForceDirectFlip";
  v206 = &v163;
  v208 = &v174;
  v212 = L"DisableOverlays";
  v213 = &v165;
  v215 = &v193;
  v219 = L"EnableOfferReclaimOnDriver";
  v220 = &v164;
  v193 = 0;
  v165 = 0;
  v181 = 0;
  v167 = 0;
  v179 = 0;
  v158 = 0;
  v162 = 0;
  v149 = 0;
  v154 = 0;
  v151 = 0;
  v177 = 1;
  v164 = 1;
  v190 = 0;
  v156 = 0;
  v194.hKmdProcessHandle = (HANDLE)1395864371;
  v201 = 16LL;
  v202 = 1395864371LL;
  v189 = 0;
  v172 = 0;
  v183 = 0;
  v166 = 0;
  v188 = 0;
  v160 = 0;
  v185 = 0;
  v170 = 0;
  v191 = 0;
  v152 = 0;
  v187 = 0;
  v168 = 0;
  v175 = 1;
  v155 = 1;
  v176 = 0;
  v171 = 0;
  v178 = 0;
  v157 = 0;
  v182 = 0;
  v159 = 0;
  v180 = 0;
  v161 = 0;
  v184 = 0;
  v173 = 0;
  v186 = 0;
  v169 = 0;
  v203 = 0LL;
  v204 = 288;
  v207 = 67108868;
  v209 = 4;
  v210 = 0LL;
  v211 = 288;
  v214 = 67108868;
  v216 = 4;
  v217 = 0LL;
  v218 = 288;
  v221 = 67108868;
  v223 = 4;
  v222 = &v177;
  v224 = 0LL;
  v226 = L"EnableOfferReclaimFailOnDwm";
  v225 = 288;
  v227 = &v156;
  v229 = &v190;
  v233 = L"LeanMemoryLimit";
  v234 = &v201;
  p_hKmdProcessHandle = &v194.hKmdProcessHandle;
  v240 = L"ForceEnableDxgMms2";
  v241 = &v158;
  v243 = &v179;
  v247 = L"ContextNoPatchMode";
  v248 = &v172;
  v250 = &v189;
  v255 = &v149;
  v257 = &v162;
  v262 = &v151;
  v264 = &v154;
  v268 = L"Force32BitFences";
  v269 = &v167;
  v271 = &v181;
  v275 = L"InitialPagingQueueFenceValue";
  v276 = &v153;
  v228 = 67108868;
  v230 = 4;
  v231 = 0LL;
  v232 = 288;
  v235 = 184549387;
  v237 = 8;
  v238 = 0LL;
  v239 = 288;
  v242 = 67108868;
  v244 = 4;
  v245 = 0LL;
  v246 = 288;
  v249 = 67108868;
  v251 = 4;
  v252 = 0LL;
  v253 = 288;
  v254 = L"ForceToMapGpuVa";
  v256 = 67108868;
  v258 = 4;
  v259 = 0LL;
  v260 = 288;
  v261 = L"ForceAccessedPhysically";
  v263 = 67108868;
  v265 = 4;
  v266 = 0LL;
  v267 = 288;
  v270 = 67108868;
  v272 = 4;
  v273 = 0LL;
  v274 = 288;
  v277 = 67108868;
  v278 = &v192;
  v282 = L"ForceInitPagingProcessVaSpace";
  v283 = &v166;
  v285 = &v183;
  v289 = L"DisableGdiContextGpuVa";
  v290 = &v160;
  v292 = &v188;
  v296 = L"DisablePagingContextGpuVa";
  v297 = &v170;
  v299 = &v185;
  v303 = L"DisableMonitoredFenceGpuVa";
  v304 = &v152;
  v306 = &v191;
  v310 = L"ForceExplicitResidencyNotification";
  v311 = &v168;
  v313 = &v187;
  v318 = &v149;
  v320 = &v162;
  v325 = &v151;
  v327 = &v154;
  v331 = L"DriverManagesResidencyOverride";
  v332 = &v155;
  v334 = &v175;
  v279 = 4;
  v280 = 0LL;
  v281 = 288;
  v284 = 67108868;
  v286 = 4;
  v287 = 0LL;
  v288 = 288;
  v291 = 67108868;
  v293 = 4;
  v294 = 0LL;
  v295 = 288;
  v298 = 67108868;
  v300 = 4;
  v301 = 0LL;
  v302 = 288;
  v305 = 67108868;
  v307 = 4;
  v308 = 0LL;
  v309 = 288;
  v312 = 67108868;
  v314 = 4;
  v315 = 0LL;
  v316 = 288;
  v317 = L"ForceToMapGpuVa";
  v319 = 67108868;
  v321 = 4;
  v322 = 0LL;
  v323 = 288;
  v324 = L"ForceAccessedPhysically";
  v326 = 67108868;
  v328 = 4;
  v329 = 0LL;
  v330 = 288;
  v333 = 67108868;
  v335 = 4;
  v336 = 0LL;
  v340 = 67108868;
  v338 = L"GdiPhysicalAdapterIndex";
  v347 = 67108868;
  v339 = &v171;
  v354 = 67108868;
  v341 = &v176;
  v345 = L"ForceReplicateGdiContent";
  v346 = &v157;
  v348 = &v178;
  v352 = L"EnableTimedCalls";
  v353 = &v161;
  v355 = &v180;
  v359 = L"CreateGdiPrimaryOnSlaveGpu";
  v360 = &v159;
  v362 = &v182;
  v366 = L"ForceSurpriseRemovalSupport";
  v367 = &v173;
  v369 = &v184;
  v373 = L"EnableDecodeMPO";
  v374 = &v169;
  v361 = 67108868;
  v368 = 67108868;
  v375 = 67108868;
  v376 = &v186;
  v337 = 288;
  v342 = 4;
  v343 = 0LL;
  v344 = 288;
  v349 = 4;
  v350 = 0LL;
  v351 = 288;
  v356 = 4;
  v357 = 0LL;
  v358 = 288;
  v363 = 4;
  v364 = 0LL;
  v365 = 288;
  v370 = 4;
  v371 = 0LL;
  v372 = 288;
  v377 = 4;
  v378 = 0LL;
  v379 = 0;
  v380 = 0LL;
  memset(v381, 0, sizeof(v381));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v203, 0LL, 0LL);
  v121 = v156 == 0;
  *((_BYTE *)this + 1913) = v164 != 0;
  *((_BYTE *)this + 1914) = !v121;
  *((_DWORD *)this + 482) = v172;
  v121 = v158 == 0;
  *((_QWORD *)this + 240) = v202;
  v90 = !v121;
  v121 = v149 == 0;
  *((_BYTE *)this + 1932) = v90;
  v91 = !v121;
  v121 = v151 == 0;
  *((_BYTE *)this + 1933) = v91;
  v92 = !v121;
  v121 = v166 == 0;
  *((_BYTE *)this + 1934) = v92;
  v93 = !v121;
  v121 = v160 == 0;
  *((_BYTE *)this + 1936) = v93;
  v94 = !v121;
  v121 = v170 == 0;
  *((_BYTE *)this + 1937) = v94;
  v95 = !v121;
  v121 = v152 == 0;
  *((_BYTE *)this + 1938) = v95;
  v96 = !v121;
  v121 = v168 == 0;
  *((_BYTE *)this + 1939) = v96;
  v97 = !v121;
  v121 = v155 == 0;
  *((_BYTE *)this + 1935) = v97;
  *((_DWORD *)this + 486) = v153;
  *((_BYTE *)this + 1940) = !v121;
  if ( v157 || (v98 = 0, (*((_DWORD *)this + 345) & 0x100) != 0) )
    v98 = 1;
  v121 = v159 == 0;
  *((_BYTE *)this + 1915) = v98;
  v99 = !v121;
  v121 = v161 == 0;
  *((_BYTE *)this + 1916) = v99;
  DXGADAPTER::Config ^= (DXGADAPTER::Config ^ !v121) & 1;
  if ( v163 )
    *((_BYTE *)this + 1851) = 1;
  if ( v165 )
    *((_BYTE *)this + 1852) = 0;
  if ( v167 )
    *((_DWORD *)this + 344) |= 0x20u;
  if ( *((_BYTE *)this + 1852) )
  {
    if ( *((_BYTE *)this + 1910) )
      *((_DWORD *)this + 464) = 2;
  }
  else
  {
    *((_DWORD *)this + 464) = 1;
  }
  v100 = *((_BYTE *)this + 1913);
  if ( *((int *)this + 412) < 4608 )
    v100 = 0;
  *((_BYTE *)this + 1913) = v100;
  if ( !DXGADAPTER::IsDxgmms2(this) )
    *((_BYTE *)this + 1940) = 0;
  *((_BYTE *)this + 1941) = 0;
  if ( v169 )
    *((_BYTE *)this + 1941) = v101 != 0;
  if ( *((_DWORD *)this + 58) > 1u )
    *((_DWORD *)this + 499) = v171;
  if ( v173 )
    *(_BYTE *)a3 |= 0x10u;
  v103 = (__int64 *)((char *)this + 1984);
  RenderCore = ADAPTER_RENDER::CreateRenderCore(v102, (struct ADAPTER_RENDER **)this + 248);
  v109 = RenderCore;
  if ( RenderCore < 0 )
  {
    if ( *v103 )
    {
      v110 = WdLogNewEntry5_WdAssertion(v106, v105, v107, v108);
      *(_QWORD *)(v110 + 24) = 16537LL;
      WdLogEvent5_WdAssertion(v110);
    }
    v111 = WdLogNewEntry5_WdError(v106);
    *(_QWORD *)(v111 + 24) = this;
    *(_QWORD *)(v111 + 32) = v109;
    WdLogEvent5_WdError(v111);
    return (unsigned int)v109;
  }
  v112 = (_QWORD *)((char *)this + 1976);
  DisplayCore = ADAPTER_DISPLAY::CreateDisplayCore(this, (struct ADAPTER_DISPLAY **)this + 247);
  v118 = DisplayCore;
  if ( DisplayCore < 0 )
  {
    if ( *v112 )
    {
      v119 = WdLogNewEntry5_WdAssertion(v115, v114, v116, v117);
      *(_QWORD *)(v119 + 24) = 16553LL;
      WdLogEvent5_WdAssertion(v119);
    }
    v120 = WdLogNewEntry5_WdError(v115);
    *(_QWORD *)(v120 + 24) = this;
    *(_QWORD *)(v120 + 32) = v118;
    WdLogEvent5_WdError(v120);
    return (unsigned int)v118;
  }
  if ( *v103 )
  {
    v121 = *v112 == 0LL;
  }
  else
  {
    v121 = *v112 == 0LL;
    if ( !*v112 )
    {
      v38 = WdLogNewEntry5_WdError(v115);
      *(_QWORD *)(v38 + 24) = this;
      *(_QWORD *)(v38 + 32) = -1073741735LL;
      goto LABEL_25;
    }
  }
  *(_BYTE *)a3 ^= (*(_BYTE *)a3 ^ !v121) & 1;
  *(_BYTE *)a3 ^= (*(_BYTE *)a3 ^ (2 * (*v103 != 0))) & 2;
  if ( !*v103 )
    *((_DWORD *)this + 341) |= 1u;
  if ( DXGADAPTER::IsDxgmms2(this) )
  {
    v124 = *((_DWORD *)this + 71);
    if ( (v124 & 2) == 0
      && (v124 & 4) == 0
      && v122
      && (unsigned int)v51 >= 0x5008
      && (!*((_QWORD *)this + 96) || !*((_QWORD *)this + 108)) )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v123);
      v52[3] = 16600LL;
      goto LABEL_243;
    }
  }
  if ( *((_BYTE *)this + 1908) && DXGADAPTER::IsFullWDDMAdapter(v123) && *((int *)this + 412) >= 4608 )
  {
    if ( !*((_BYTE *)this + 1851) )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v125);
      v52[3] = 16615LL;
      goto LABEL_243;
    }
    goto LABEL_218;
  }
  if ( *((_BYTE *)this + 1851) )
  {
LABEL_218:
    if ( !v122
      || !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v122 + 400) + 8LL) + 688LL))(*(_QWORD *)(v122 + 408)) )
    {
      *(_WORD *)((char *)this + 1851) = 0;
    }
  }
  IsBddFallbackDriver = DXGADAPTER::IsBddFallbackDriver(this);
  v127 = *((_DWORD *)this + 71);
  *((_DWORD *)this + 40) = IsBddFallbackDriver ? 3 : 1;
  if ( (v127 & 8) != 0 && !*v112 )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v195);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v195);
    if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v129, v128, v130, v131) + 71) )
    {
      v133 = WdLogNewEntry5_WdError(v132);
      *(_QWORD *)(v133 + 24) = this;
      *(_QWORD *)(v133 + 32) = -1073741735LL;
      WdLogEvent5_WdError(v133);
    }
    else
    {
      DXGADAPTER::AcquireReference(this);
      *((_QWORD *)DXGGLOBAL::GetGlobal(v135, v134, v136, v137) + 71) = this;
    }
    if ( v195[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v195);
  }
  v138 = DXGADAPTER::InitializePowerManagement(this);
  v143 = v138;
  if ( v138 >= 0 )
  {
    if ( *((_BYTE *)this + 1908) )
    {
      if ( *((int *)this + 412) >= 4864 && DXGADAPTER::IsFullWDDMAdapter(this) )
      {
        v148 = *((_DWORD *)this + 71);
        if ( (v148 & 2) == 0 && (v148 & 0x10) == 0 && (*((_DWORD *)this + 343) & 0x10) == 0 )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdError(v140);
          v52[3] = 16685LL;
          goto LABEL_243;
        }
      }
    }
  }
  else
  {
    v144 = WdLogNewEntry5_WdError(v140);
    *(_QWORD *)(v144 + 24) = this;
    *(_QWORD *)(v144 + 32) = v143;
    WdLogEvent5_WdError(v144);
  }
  v145 = *v103;
  if ( v145 )
  {
    v146 = DXGGLOBAL::GetGlobal(v140, v139, v141, v142);
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v145 + 376) + 8LL) + 800LL))(
      *(_QWORD *)(v145 + 384),
      (__int64)v146 + 752);
  }
  if ( (*((_DWORD *)this + 71) & 1) != 0 )
  {
    v147 = *(_QWORD *)((char *)this + 252);
    *((_QWORD *)DXGGLOBAL::GetGlobal(v140, v139, v141, v142) + 72) = v147;
  }
  return (unsigned int)v143;
}
