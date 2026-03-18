/*
 * XREFs of ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00D7050
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00D4498 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00015E8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002428 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000244C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00031D4 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0079C70 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ @ 0x1C00D42F8 (-AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ.c)
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C00D4360 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     DpiGetAdapterInfo @ 0x1C00D4D80 (DpiGetAdapterInfo.c)
 *     ?CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z @ 0x1C00D6F6C (-CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C00D88B8 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00DA798 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00DAA98 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall DXGADAPTER::Initialize(DXGADAPTER *this, struct _DEVICE_OBJECT *a2, struct _DXGK_ADAPTER_CAPS *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rbx
  __int64 v13; // rax
  struct _ERESOURCE *v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // rax
  DXGGLOBAL *v23; // rcx
  int v24; // eax
  struct _ERESOURCE *v25; // rax
  NTSTATUS v26; // eax
  int AdapterInfo; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  size_t v33; // r8
  char *v34; // rcx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  NTSTATUS v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rsi
  __int64 v44; // rax
  NTSTATUS v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rsi
  _QWORD *v51; // rax
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  _DWORD *v56; // r13
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned __int64 v62; // r15
  SIZE_T v63; // rax
  unsigned __int64 v64; // r12
  PVOID v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // r8
  unsigned int v73; // edx
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  char v77; // al
  int v78; // eax
  char v79; // cl
  char v80; // cl
  char v81; // cl
  char v82; // dl
  char v83; // cl
  char v84; // dl
  char v85; // al
  int v86; // r8d
  int v87; // eax
  unsigned int v88; // eax
  __int64 v89; // rcx
  DXGGLOBAL *Global; // rax
  unsigned int v91; // edx
  __int64 v92; // rcx
  bool v93; // al
  bool v94; // al
  bool v95; // al
  bool v96; // al
  bool v97; // al
  bool v98; // al
  bool v99; // al
  bool v100; // al
  bool v101; // al
  char v102; // al
  bool v103; // al
  char v104; // al
  char v105; // dl
  struct DXGADAPTER *v106; // rcx
  char v107; // al
  __int64 *v108; // rbx
  int RenderCore; // eax
  __int64 v110; // rcx
  __int64 v111; // r15
  __int64 v112; // rax
  __int64 v113; // rax
  _QWORD *v114; // r15
  int DisplayCore; // eax
  __int64 v116; // rcx
  __int64 v117; // r12
  __int64 v118; // rax
  __int64 v119; // rax
  bool v120; // zf
  __int64 v121; // rdx
  DXGADAPTER *v122; // rcx
  int v123; // eax
  __int64 v124; // rcx
  bool IsBddFallbackDriver; // cf
  int v126; // eax
  __int64 v127; // rcx
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rcx
  int v131; // eax
  __int64 v132; // rcx
  __int64 v133; // rsi
  __int64 v134; // rax
  __int64 v135; // rbx
  struct DXGGLOBAL *v136; // rax
  __int64 v137; // rbx
  int v138; // eax
  int v139; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v140; // [rsp+34h] [rbp-CCh] BYREF
  int v141; // [rsp+38h] [rbp-C8h] BYREF
  int v142; // [rsp+3Ch] [rbp-C4h] BYREF
  int v143; // [rsp+40h] [rbp-C0h] BYREF
  int v144; // [rsp+44h] [rbp-BCh] BYREF
  int v145; // [rsp+48h] [rbp-B8h] BYREF
  int v146; // [rsp+4Ch] [rbp-B4h] BYREF
  int v147; // [rsp+50h] [rbp-B0h] BYREF
  int v148; // [rsp+54h] [rbp-ACh] BYREF
  int v149; // [rsp+58h] [rbp-A8h] BYREF
  int v150; // [rsp+5Ch] [rbp-A4h] BYREF
  int v151; // [rsp+60h] [rbp-A0h] BYREF
  int v152; // [rsp+64h] [rbp-9Ch] BYREF
  int v153; // [rsp+68h] [rbp-98h] BYREF
  int v154; // [rsp+6Ch] [rbp-94h] BYREF
  int v155; // [rsp+70h] [rbp-90h] BYREF
  int v156; // [rsp+74h] [rbp-8Ch] BYREF
  int v157; // [rsp+78h] [rbp-88h] BYREF
  int v158; // [rsp+7Ch] [rbp-84h] BYREF
  int v159; // [rsp+80h] [rbp-80h] BYREF
  int v160; // [rsp+84h] [rbp-7Ch] BYREF
  int v161; // [rsp+88h] [rbp-78h] BYREF
  int v162; // [rsp+8Ch] [rbp-74h] BYREF
  int v163; // [rsp+90h] [rbp-70h] BYREF
  int v164; // [rsp+94h] [rbp-6Ch] BYREF
  int v165; // [rsp+98h] [rbp-68h] BYREF
  int v166; // [rsp+9Ch] [rbp-64h] BYREF
  int v167; // [rsp+A0h] [rbp-60h] BYREF
  int v168; // [rsp+A4h] [rbp-5Ch] BYREF
  int v169; // [rsp+A8h] [rbp-58h] BYREF
  int v170; // [rsp+ACh] [rbp-54h] BYREF
  int v171; // [rsp+B0h] [rbp-50h] BYREF
  int v172; // [rsp+B4h] [rbp-4Ch] BYREF
  int v173; // [rsp+B8h] [rbp-48h] BYREF
  int v174; // [rsp+BCh] [rbp-44h] BYREF
  int v175; // [rsp+C0h] [rbp-40h] BYREF
  int v176; // [rsp+C4h] [rbp-3Ch] BYREF
  int v177; // [rsp+C8h] [rbp-38h] BYREF
  int v178; // [rsp+CCh] [rbp-34h] BYREF
  int v179; // [rsp+D0h] [rbp-30h] BYREF
  int v180; // [rsp+D4h] [rbp-2Ch] BYREF
  int v181; // [rsp+D8h] [rbp-28h] BYREF
  int v182; // [rsp+DCh] [rbp-24h] BYREF
  int v183; // [rsp+E0h] [rbp-20h] BYREF
  int v184; // [rsp+E4h] [rbp-1Ch] BYREF
  int v185; // [rsp+E8h] [rbp-18h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v186; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v187[16]; // [rsp+120h] [rbp+20h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v188; // [rsp+130h] [rbp+30h] BYREF
  unsigned int *v189; // [rsp+160h] [rbp+60h]
  int v190; // [rsp+168h] [rbp+68h]
  __int64 v191; // [rsp+170h] [rbp+70h]
  int v192; // [rsp+178h] [rbp+78h]
  __int64 v193; // [rsp+180h] [rbp+80h] BYREF
  __int64 v194; // [rsp+188h] [rbp+88h]
  __int64 v195; // [rsp+190h] [rbp+90h] BYREF
  int v196; // [rsp+198h] [rbp+98h]
  const wchar_t *v197; // [rsp+1A0h] [rbp+A0h]
  int *v198; // [rsp+1A8h] [rbp+A8h]
  int v199; // [rsp+1B0h] [rbp+B0h]
  int *v200; // [rsp+1B8h] [rbp+B8h]
  int v201; // [rsp+1C0h] [rbp+C0h]
  __int64 v202; // [rsp+1C8h] [rbp+C8h]
  int v203; // [rsp+1D0h] [rbp+D0h]
  const wchar_t *v204; // [rsp+1D8h] [rbp+D8h]
  int *v205; // [rsp+1E0h] [rbp+E0h]
  int v206; // [rsp+1E8h] [rbp+E8h]
  int *v207; // [rsp+1F0h] [rbp+F0h]
  int v208; // [rsp+1F8h] [rbp+F8h]
  __int64 v209; // [rsp+200h] [rbp+100h]
  int v210; // [rsp+208h] [rbp+108h]
  const wchar_t *v211; // [rsp+210h] [rbp+110h]
  int *v212; // [rsp+218h] [rbp+118h]
  int v213; // [rsp+220h] [rbp+120h]
  int *v214; // [rsp+228h] [rbp+128h]
  int v215; // [rsp+230h] [rbp+130h]
  __int64 v216; // [rsp+238h] [rbp+138h]
  int v217; // [rsp+240h] [rbp+140h]
  const wchar_t *v218; // [rsp+248h] [rbp+148h]
  int *v219; // [rsp+250h] [rbp+150h]
  int v220; // [rsp+258h] [rbp+158h]
  int *v221; // [rsp+260h] [rbp+160h]
  int v222; // [rsp+268h] [rbp+168h]
  __int64 v223; // [rsp+270h] [rbp+170h]
  int v224; // [rsp+278h] [rbp+178h]
  const wchar_t *v225; // [rsp+280h] [rbp+180h]
  __int64 *v226; // [rsp+288h] [rbp+188h]
  int v227; // [rsp+290h] [rbp+190h]
  HANDLE *p_hKmdProcessHandle; // [rsp+298h] [rbp+198h]
  int v229; // [rsp+2A0h] [rbp+1A0h]
  __int64 v230; // [rsp+2A8h] [rbp+1A8h]
  int v231; // [rsp+2B0h] [rbp+1B0h]
  const wchar_t *v232; // [rsp+2B8h] [rbp+1B8h]
  int *v233; // [rsp+2C0h] [rbp+1C0h]
  int v234; // [rsp+2C8h] [rbp+1C8h]
  int *v235; // [rsp+2D0h] [rbp+1D0h]
  int v236; // [rsp+2D8h] [rbp+1D8h]
  __int64 v237; // [rsp+2E0h] [rbp+1E0h]
  int v238; // [rsp+2E8h] [rbp+1E8h]
  const wchar_t *v239; // [rsp+2F0h] [rbp+1F0h]
  int *v240; // [rsp+2F8h] [rbp+1F8h]
  int v241; // [rsp+300h] [rbp+200h]
  int *v242; // [rsp+308h] [rbp+208h]
  int v243; // [rsp+310h] [rbp+210h]
  __int64 v244; // [rsp+318h] [rbp+218h]
  int v245; // [rsp+320h] [rbp+220h]
  const wchar_t *v246; // [rsp+328h] [rbp+228h]
  int *v247; // [rsp+330h] [rbp+230h]
  int v248; // [rsp+338h] [rbp+238h]
  int *v249; // [rsp+340h] [rbp+240h]
  int v250; // [rsp+348h] [rbp+248h]
  __int64 v251; // [rsp+350h] [rbp+250h]
  int v252; // [rsp+358h] [rbp+258h]
  const wchar_t *v253; // [rsp+360h] [rbp+260h]
  int *v254; // [rsp+368h] [rbp+268h]
  int v255; // [rsp+370h] [rbp+270h]
  int *v256; // [rsp+378h] [rbp+278h]
  int v257; // [rsp+380h] [rbp+280h]
  __int64 v258; // [rsp+388h] [rbp+288h]
  int v259; // [rsp+390h] [rbp+290h]
  const wchar_t *v260; // [rsp+398h] [rbp+298h]
  int *v261; // [rsp+3A0h] [rbp+2A0h]
  int v262; // [rsp+3A8h] [rbp+2A8h]
  int *v263; // [rsp+3B0h] [rbp+2B0h]
  int v264; // [rsp+3B8h] [rbp+2B8h]
  __int64 v265; // [rsp+3C0h] [rbp+2C0h]
  int v266; // [rsp+3C8h] [rbp+2C8h]
  const wchar_t *v267; // [rsp+3D0h] [rbp+2D0h]
  int *v268; // [rsp+3D8h] [rbp+2D8h]
  int v269; // [rsp+3E0h] [rbp+2E0h]
  int *v270; // [rsp+3E8h] [rbp+2E8h]
  int v271; // [rsp+3F0h] [rbp+2F0h]
  __int64 v272; // [rsp+3F8h] [rbp+2F8h]
  int v273; // [rsp+400h] [rbp+300h]
  const wchar_t *v274; // [rsp+408h] [rbp+308h]
  int *v275; // [rsp+410h] [rbp+310h]
  int v276; // [rsp+418h] [rbp+318h]
  int *v277; // [rsp+420h] [rbp+320h]
  int v278; // [rsp+428h] [rbp+328h]
  __int64 v279; // [rsp+430h] [rbp+330h]
  int v280; // [rsp+438h] [rbp+338h]
  const wchar_t *v281; // [rsp+440h] [rbp+340h]
  int *v282; // [rsp+448h] [rbp+348h]
  int v283; // [rsp+450h] [rbp+350h]
  int *v284; // [rsp+458h] [rbp+358h]
  int v285; // [rsp+460h] [rbp+360h]
  __int64 v286; // [rsp+468h] [rbp+368h]
  int v287; // [rsp+470h] [rbp+370h]
  const wchar_t *v288; // [rsp+478h] [rbp+378h]
  int *v289; // [rsp+480h] [rbp+380h]
  int v290; // [rsp+488h] [rbp+388h]
  int *v291; // [rsp+490h] [rbp+390h]
  int v292; // [rsp+498h] [rbp+398h]
  __int64 v293; // [rsp+4A0h] [rbp+3A0h]
  int v294; // [rsp+4A8h] [rbp+3A8h]
  const wchar_t *v295; // [rsp+4B0h] [rbp+3B0h]
  int *v296; // [rsp+4B8h] [rbp+3B8h]
  int v297; // [rsp+4C0h] [rbp+3C0h]
  int *v298; // [rsp+4C8h] [rbp+3C8h]
  int v299; // [rsp+4D0h] [rbp+3D0h]
  __int64 v300; // [rsp+4D8h] [rbp+3D8h]
  int v301; // [rsp+4E0h] [rbp+3E0h]
  const wchar_t *v302; // [rsp+4E8h] [rbp+3E8h]
  int *v303; // [rsp+4F0h] [rbp+3F0h]
  int v304; // [rsp+4F8h] [rbp+3F8h]
  int *v305; // [rsp+500h] [rbp+400h]
  int v306; // [rsp+508h] [rbp+408h]
  __int64 v307; // [rsp+510h] [rbp+410h]
  int v308; // [rsp+518h] [rbp+418h]
  const wchar_t *v309; // [rsp+520h] [rbp+420h]
  int *v310; // [rsp+528h] [rbp+428h]
  int v311; // [rsp+530h] [rbp+430h]
  int *v312; // [rsp+538h] [rbp+438h]
  int v313; // [rsp+540h] [rbp+440h]
  __int64 v314; // [rsp+548h] [rbp+448h]
  int v315; // [rsp+550h] [rbp+450h]
  const wchar_t *v316; // [rsp+558h] [rbp+458h]
  int *v317; // [rsp+560h] [rbp+460h]
  int v318; // [rsp+568h] [rbp+468h]
  int *v319; // [rsp+570h] [rbp+470h]
  int v320; // [rsp+578h] [rbp+478h]
  __int64 v321; // [rsp+580h] [rbp+480h]
  int v322; // [rsp+588h] [rbp+488h]
  const wchar_t *v323; // [rsp+590h] [rbp+490h]
  int *v324; // [rsp+598h] [rbp+498h]
  int v325; // [rsp+5A0h] [rbp+4A0h]
  int *v326; // [rsp+5A8h] [rbp+4A8h]
  int v327; // [rsp+5B0h] [rbp+4B0h]
  __int64 v328; // [rsp+5B8h] [rbp+4B8h]
  int v329; // [rsp+5C0h] [rbp+4C0h]
  const wchar_t *v330; // [rsp+5C8h] [rbp+4C8h]
  int *v331; // [rsp+5D0h] [rbp+4D0h]
  int v332; // [rsp+5D8h] [rbp+4D8h]
  int *v333; // [rsp+5E0h] [rbp+4E0h]
  int v334; // [rsp+5E8h] [rbp+4E8h]
  __int64 v335; // [rsp+5F0h] [rbp+4F0h]
  int v336; // [rsp+5F8h] [rbp+4F8h]
  const wchar_t *v337; // [rsp+600h] [rbp+500h]
  int *v338; // [rsp+608h] [rbp+508h]
  int v339; // [rsp+610h] [rbp+510h]
  int *v340; // [rsp+618h] [rbp+518h]
  int v341; // [rsp+620h] [rbp+520h]
  __int64 v342; // [rsp+628h] [rbp+528h]
  int v343; // [rsp+630h] [rbp+530h]
  const wchar_t *v344; // [rsp+638h] [rbp+538h]
  int *v345; // [rsp+640h] [rbp+540h]
  int v346; // [rsp+648h] [rbp+548h]
  int *v347; // [rsp+650h] [rbp+550h]
  int v348; // [rsp+658h] [rbp+558h]
  __int64 v349; // [rsp+660h] [rbp+560h]
  int v350; // [rsp+668h] [rbp+568h]
  const wchar_t *v351; // [rsp+670h] [rbp+570h]
  int *v352; // [rsp+678h] [rbp+578h]
  int v353; // [rsp+680h] [rbp+580h]
  int *v354; // [rsp+688h] [rbp+588h]
  int v355; // [rsp+690h] [rbp+590h]
  __int64 v356; // [rsp+698h] [rbp+598h]
  int v357; // [rsp+6A0h] [rbp+5A0h]
  const wchar_t *v358; // [rsp+6A8h] [rbp+5A8h]
  int *v359; // [rsp+6B0h] [rbp+5B0h]
  int v360; // [rsp+6B8h] [rbp+5B8h]
  int *v361; // [rsp+6C0h] [rbp+5C0h]
  int v362; // [rsp+6C8h] [rbp+5C8h]
  __int64 v363; // [rsp+6D0h] [rbp+5D0h]
  int v364; // [rsp+6D8h] [rbp+5D8h]
  const wchar_t *v365; // [rsp+6E0h] [rbp+5E0h]
  int *v366; // [rsp+6E8h] [rbp+5E8h]
  int v367; // [rsp+6F0h] [rbp+5F0h]
  int *v368; // [rsp+6F8h] [rbp+5F8h]
  int v369; // [rsp+700h] [rbp+600h]
  __int64 v370; // [rsp+708h] [rbp+608h]
  int v371; // [rsp+710h] [rbp+610h]
  const wchar_t *v372; // [rsp+718h] [rbp+618h]
  int *v373; // [rsp+720h] [rbp+620h]
  int v374; // [rsp+728h] [rbp+628h]
  int *v375; // [rsp+730h] [rbp+630h]
  int v376; // [rsp+738h] [rbp+638h]
  __int64 v377; // [rsp+740h] [rbp+640h]
  int v378; // [rsp+748h] [rbp+648h]
  __int64 v379; // [rsp+750h] [rbp+650h]
  _BYTE v380[32]; // [rsp+758h] [rbp+658h] BYREF

  if ( KeGetCurrentIrql() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 15964LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_DWORD *)this + 40) )
    return 3221225485LL;
  v7 = operator new[](0x1B8uLL, 0x4B677844u, (POOL_TYPE)512);
  v12 = v7;
  if ( v7 )
  {
    *v7 = 0LL;
    v7[38] = 0LL;
    v7[39] = 0LL;
    v7[40] = 0LL;
    v7[41] = 0LL;
    v7[42] = 0LL;
    memset(v7 + 1, 0, 0x48uLL);
    memset(v12 + 10, 0, 0xE0uLL);
    memset(v12 + 43, 0, 0x50uLL);
  }
  else
  {
    v12 = 0LL;
  }
  *((_QWORD *)this + 394) = v12;
  if ( !v12 )
    goto LABEL_8;
  v15 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 16) = v15;
  if ( !v15 )
    goto LABEL_8;
  v16 = ExInitializeResourceLite(v15);
  v21 = v16;
  if ( v16 < 0 )
  {
LABEL_12:
    v22 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
    *(_QWORD *)(v22 + 24) = this;
    *(_QWORD *)(v22 + 32) = v21;
    WdLogEvent5_WdWarning(v22);
    return (unsigned int)v21;
  }
  v23 = (DXGGLOBAL *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 22) = a2;
  v24 = DXGGLOBAL::AcquireAdapterOrdinal(v23);
  *((_DWORD *)this + 46) = v24;
  if ( v24 == -1 )
    return 3221225495LL;
  v25 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 27) = v25;
  if ( !v25 )
  {
LABEL_8:
    v13 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v13 + 24) = this;
    *(_QWORD *)(v13 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v13);
    return 3221225495LL;
  }
  v26 = ExInitializeResourceLite(v25);
  v21 = v26;
  if ( v26 < 0 )
    goto LABEL_12;
  DXGADAPTER::AcquireReference(this);
  AdapterInfo = DpiGetAdapterInfo((__int64)a2, (__int64)this + 880, (_QWORD *)this + 28);
  v21 = AdapterInfo;
  if ( AdapterInfo < 0 )
  {
    v32 = WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
    *(_QWORD *)(v32 + 24) = this;
    *(_QWORD *)(v32 + 32) = v21;
    WdLogEvent5_WdWarning(v32);
    memset((char *)this + 224, 0, 0x290uLL);
    v33 = 200LL;
    v34 = (char *)this + 880;
LABEL_19:
    memset(v34, 0, v33);
    return (unsigned int)v21;
  }
  v35 = *((_DWORD *)this + 71);
  if ( (v35 & 8) != 0 && (v35 & 0x10) != 0 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v29);
    *(_QWORD *)(v36 + 24) = 16076LL;
    WdLogEvent5_WdAssertion(v36);
  }
  if ( !*((_QWORD *)this + 37) )
  {
    v37 = WdLogNewEntry5_WdError(v29);
    *(_QWORD *)(v37 + 24) = 16083LL;
LABEL_25:
    WdLogEvent5_WdError(v37);
    return 3221225561LL;
  }
  if ( !*((_QWORD *)this + 54) )
    *((_QWORD *)this + 54) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  v38 = DXGADAPTER::CallDriverQueryInterface(
          (PDEVICE_OBJECT *)this,
          &GUID_AGP_BUS_INTERFACE_STANDARD,
          0xB8u,
          5u,
          (char *)this + 1080);
  v43 = v38;
  if ( v38 < 0 )
  {
    v44 = WdLogNewEntry5_WdTrace(v40, v39, v41, v42);
    *(_QWORD *)(v44 + 24) = this;
    *(_QWORD *)(v44 + 32) = v43;
LABEL_31:
    memset((char *)this + 1080, 0, 0xB8uLL);
    goto LABEL_32;
  }
  if ( *((_WORD *)this + 541) < 4u )
    goto LABEL_31;
LABEL_32:
  if ( (*((_DWORD *)this + 71) & 0x100) != 0 )
  {
    v45 = DXGADAPTER::CallDriverQueryInterface(
            (PDEVICE_OBJECT *)this,
            &GUID_DEVINTERFACE_INDIRECT_DISP_KMD,
            0x30u,
            1u,
            (char *)this + 1272);
    v21 = v45;
    if ( v45 < 0 )
    {
      v47 = WdLogNewEntry5_WdError(v46);
      *(_QWORD *)(v47 + 24) = this;
      *(_QWORD *)(v47 + 32) = v21;
      WdLogEvent5_WdError(v47);
      v33 = 48LL;
      v34 = (char *)this + 1272;
      goto LABEL_19;
    }
  }
  v186.Type = DXGKQAITYPE_DRIVERCAPS;
  v186.pOutputData = (char *)this + 1320;
  v48 = *((_QWORD *)this + 22);
  v186.pInputData = 0LL;
  v186.InputDataSize = 0;
  v186.OutputDataSize = 576;
  v49 = *(_QWORD *)(v48 + 64);
  v50 = *(unsigned int *)(*(_QWORD *)(v49 + 40) + 28LL);
  *((_DWORD *)this + 316) = v50;
  if ( (unsigned int)(v50 - 20480) <= 5 )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdError(v49);
    v51[3] = 16171LL;
LABEL_248:
    WdLogEvent5_WdError(v51);
    return 3221225485LL;
  }
  if ( (unsigned int)v50 < 0x5011 )
  {
    if ( (unsigned int)v50 < 0x4000 )
    {
      if ( (unsigned int)v50 < 0x3000 )
      {
        if ( (unsigned int)v50 < 0x2001 )
        {
          if ( (unsigned int)v50 >= 0x2000 || (unsigned int)v50 < 0x104E )
          {
            v51 = (_QWORD *)WdLogNewEntry5_WdError(v49);
            v51[3] = v50;
            goto LABEL_248;
          }
          v186.OutputDataSize = 336;
        }
        else
        {
          v186.OutputDataSize = 528;
        }
      }
      else
      {
        v186.OutputDataSize = 544;
      }
    }
    else
    {
      v186.OutputDataSize = 552;
    }
  }
  else
  {
    v186.OutputDataSize = 576;
  }
  v52 = DXGADAPTER::DdiQueryAdapterInfo(this, &v186, v41);
  v21 = v52;
  if ( v52 < 0 )
    goto LABEL_49;
  v56 = (_DWORD *)((char *)this + 1896);
  *((_DWORD *)this + 474) = 0;
  if ( (unsigned int)v50 >= 0x5010 )
  {
    v188.Type = DXGKQAITYPE_DISPLAY_DRIVERCAPS_EXTENSION;
    v188.pInputData = 0LL;
    v188.InputDataSize = 0;
    v188.pOutputData = (char *)this + 1896;
    v188.OutputDataSize = 4;
    v57 = DXGADAPTER::DdiQueryAdapterInfo(this, &v188, v54);
    LODWORD(v21) = v57;
    if ( v57 < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v59, v58, v60, v61) + 24) = v57;
      *v56 = 0;
      LODWORD(v21) = 0;
    }
  }
  v62 = *((unsigned int *)this + 58);
  v63 = 48 * v62;
  v64 = v62;
  if ( !is_mul_ok(v62, 0x30uLL) )
    v63 = -1LL;
  v65 = operator new[](v63, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 238) = v65;
  if ( !v65 )
  {
    v70 = WdLogNewEntry5_WdLowResource(v67, v66, v68, v69);
    *(_QWORD *)(v70 + 24) = 16360LL;
    WdLogEvent5_WdLowResource(v70);
    return 3221225495LL;
  }
  memset(v65, 0, 48 * v62);
  if ( *((int *)this + 414) >= 0x2000 && (unsigned int)v62 > 1 && (unsigned int)v50 >= 0x5005 )
  {
    *((_DWORD *)this + 478) = 0;
    v73 = 0;
    v140 = 0;
    while ( 1 )
    {
      LODWORD(v188.hKmdProcessHandle) = 15;
      v189 = &v140;
      v190 = 4;
      v192 = 24;
      v191 = *((_QWORD *)this + 238) + 48LL * v73;
      v74 = DXGADAPTER::DdiQueryAdapterInfo(
              this,
              (const struct _DXGKARG_QUERYADAPTERINFO *)&v188.hKmdProcessHandle,
              v72);
      v21 = v74;
      if ( v74 < 0 )
        break;
      v73 = v140 + 1;
      v71 = *(unsigned __int16 *)(*((_QWORD *)this + 238) + 48LL * v140);
      *((_DWORD *)this + 478) += v71;
      v140 = v73;
      if ( v73 >= (unsigned int)v62 )
      {
        if ( *((_DWORD *)this + 478) > 0x40u )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdError(v71);
          v51[3] = this;
          v51[4] = 64LL;
          v51[5] = *((unsigned int *)this + 478);
          goto LABEL_248;
        }
        if ( (*((_DWORD *)this + 346) & 1) == 0 )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdError(v71);
          v51[3] = this;
          v51[4] = 16401LL;
          goto LABEL_248;
        }
        goto LABEL_71;
      }
    }
LABEL_49:
    v55 = WdLogNewEntry5_WdError(v53);
    *(_QWORD *)(v55 + 24) = v21;
LABEL_50:
    WdLogEvent5_WdError(v55);
    return (unsigned int)v21;
  }
  if ( (_DWORD)v62 )
  {
    v75 = 0LL;
    do
    {
      *(_WORD *)(v75 + *((_QWORD *)this + 238)) = *((_WORD *)this + 698);
      *(_DWORD *)(v75 + *((_QWORD *)this + 238) + 16) ^= (*(_DWORD *)(v75 + *((_QWORD *)this + 238) + 16) ^ (*((_DWORD *)this + 347) >> 7)) & 1;
      *(_DWORD *)(v75 + *((_QWORD *)this + 238) + 16) ^= (*(_DWORD *)(v75 + *((_QWORD *)this + 238) + 16) ^ (*((_DWORD *)this + 347) >> 5)) & 2;
      *(_WORD *)(v75 + *((_QWORD *)this + 238) + 2) = *((_WORD *)this + 696);
      v71 = *((_QWORD *)this + 238);
      *(_QWORD *)(v75 + v71 + 8) = *((_QWORD *)this + 22);
      v75 += 48LL;
      --v64;
    }
    while ( v64 );
  }
LABEL_71:
  if ( (unsigned int)v50 >= 0x3001 )
  {
    v78 = *((_DWORD *)this + 414);
    if ( v78 != 4096 && v78 != 4608 && v78 != 4864 && v78 != 0x2000 )
    {
      v37 = WdLogNewEntry5_WdError(v71);
      *(_QWORD *)(v37 + 24) = *((int *)this + 414);
      goto LABEL_25;
    }
  }
  else
  {
    *((_DWORD *)this + 414) = 4096;
  }
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v71) + 656) || (v77 = 1, (*((_DWORD *)this + 71) & 8) != 0) )
    v77 = 0;
  *((_BYTE *)this + 1916) = v77;
  if ( v77 )
  {
    v76 = *((unsigned int *)this + 414);
    if ( (int)v76 < 4608
      && (*((_DWORD *)this + 462)
       || *((_DWORD *)this + 463)
       || *((_BYTE *)this + 1856)
       || *((_BYTE *)this + 1857)
       || *((_BYTE *)this + 1858)
       || (*((_DWORD *)this + 343) & 0x10000000) != 0
       || (*((_DWORD *)this + 346) & 0x14) != 0
       || *((_BYTE *)this + 1859)
       || *((_BYTE *)this + 1861)
       || *((_BYTE *)this + 1862)) )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v76);
      v51[3] = 16484LL;
      goto LABEL_248;
    }
    if ( (int)v76 < 4864
      && ((*((_DWORD *)this + 345) & 0x10) != 0
       || (*((_DWORD *)this + 347) & 0x10) != 0
       || *((_BYTE *)this + 1863)
       || *((_DWORD *)this + 466)) )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v76);
      v51[3] = 16499LL;
      goto LABEL_248;
    }
    if ( (int)v76 < 0x2000 && *((_BYTE *)this + 1868) )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v76);
      v51[3] = 16527LL;
      goto LABEL_248;
    }
  }
  if ( (unsigned int)v50 < 0x4000 )
  {
    *((_DWORD *)this + 347) &= ~0x10u;
    *((_BYTE *)this + 1863) = 0;
  }
  if ( (unsigned int)v50 < 0x5011 )
  {
    v76 = *((unsigned int *)this + 71);
    if ( (v76 & 1) != 0 && (*((_DWORD *)this + 347) & 0x10) != 0 && (v76 & 0x1000) != 0 )
      *((_BYTE *)this + 1868) = 1;
  }
  *(_BYTE *)a3 ^= (*(_BYTE *)a3 ^ (4 * *((_BYTE *)this + 1856))) & 4;
  v79 = *(_BYTE *)a3 ^ (*(_BYTE *)a3 ^ (8 * (*((_BYTE *)this + 1862) != 0))) & 8;
  *(_BYTE *)a3 = v79;
  v80 = (v79 ^ (32 * (*((_DWORD *)this + 347) >> 4))) & 0x20 ^ v79;
  *(_BYTE *)a3 = v80;
  v81 = (v80 ^ (*((_BYTE *)this + 1863) << 6)) & 0x40 ^ v80;
  *(_BYTE *)a3 = v81;
  *((_DWORD *)a3 + 1) = *((_DWORD *)this + 339);
  v82 = v81 & 0x7F | (*(_BYTE *)v56 << 7);
  *(_BYTE *)a3 = v82;
  *((_BYTE *)a3 + 1) ^= (*((_BYTE *)a3 + 1) ^ *((_BYTE *)this + 1868)) & 1;
  v83 = *((_BYTE *)a3 + 1);
  v84 = v82 & 0xEF;
  v85 = 2 * (*((_DWORD *)this + 414) >= 0x2000);
  *(_BYTE *)a3 = v84;
  *((_BYTE *)a3 + 1) = v83 ^ (v83 ^ v85) & 2;
  if ( (unsigned int)v50 >= 0x5021 )
    *(_BYTE *)a3 = v84 ^ (v84 ^ (16 * *((_BYTE *)this + 1888))) & 0x10;
  v86 = *((_DWORD *)this + 414);
  if ( v86 >= 0x2000 )
  {
    v87 = *((_DWORD *)this + 65);
    if ( v87 == 4098 || v87 == 4318 )
      *((_DWORD *)this + 345) |= 0x40u;
  }
  LOBYTE(v76) = (*(_BYTE *)a3 & 0x40) != 0;
  if ( (*(_BYTE *)a3 & 0x40) != 0 && (unsigned int)v50 < 0x5005 && (*((_DWORD *)this + 230) || *((_DWORD *)this + 231)) )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdError(v76);
    v51[3] = *((_QWORD *)this + 22);
    goto LABEL_248;
  }
  if ( ((*(_BYTE *)a3 & 0x40) != 0 || (*((_BYTE *)a3 + 1) & 1) != 0) && (*(_BYTE *)a3 & 0x20) == 0 )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdError(v76);
    v51[3] = *((_QWORD *)this + 22);
    v51[4] = 16611LL;
    goto LABEL_248;
  }
  if ( (*(_BYTE *)a3 & 0x40) != 0 )
  {
    if ( (*((_BYTE *)a3 + 1) & 1) != 0 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v76);
      v51[3] = *((_QWORD *)this + 22);
      v51[4] = 16618LL;
      goto LABEL_248;
    }
  }
  else if ( (*((_BYTE *)a3 + 1) & 1) != 0 && !*((_DWORD *)this + 231) )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdError(v76);
    v51[3] = *((_QWORD *)this + 22);
    v51[4] = 16626LL;
    goto LABEL_248;
  }
  if ( *((_BYTE *)this + 1858) && (!*((_QWORD *)this + 83) || !*((_QWORD *)this + 84) || !*((_QWORD *)this + 85)) )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdError(v76);
    v51[3] = 16640LL;
    goto LABEL_248;
  }
  if ( (*((_DWORD *)this + 343) & 4) != 0 && !*((_QWORD *)this + 81) )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdError(v76);
    v51[3] = 16647LL;
    goto LABEL_248;
  }
  if ( *((_BYTE *)this + 1861) && (!*((_QWORD *)this + 87) || !*((_QWORD *)this + 88)) )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdError(v76);
    v51[3] = 16655LL;
    goto LABEL_248;
  }
  if ( (unsigned int)v50 < 0x300C && *((_QWORD *)this + 87) && *((_QWORD *)this + 88) )
    *((_BYTE *)this + 1861) = 1;
  *((_WORD *)this + 959) = 0;
  *((_BYTE *)this + 1920) = 0;
  if ( *((_BYTE *)this + 1860) )
  {
    if ( (unsigned int)v50 < 0x300B )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v76);
      v51[3] = 16676LL;
      goto LABEL_248;
    }
    if ( (unsigned int)v50 >= 0x4000 )
    {
      if ( (_DWORD)v50 == 0x4000 )
      {
        *((_BYTE *)this + 1919) = 1;
      }
      else
      {
        v88 = *((_DWORD *)this + 466);
        if ( !v88 )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdError(v76);
          v51[3] = 16689LL;
          goto LABEL_248;
        }
        if ( v88 > 8 )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdError(v76);
          v51[3] = 16694LL;
          goto LABEL_248;
        }
        if ( (unsigned int)v50 > 0x5000 )
          *((_BYTE *)this + 1920) = 1;
      }
    }
    else
    {
      *((_BYTE *)this + 1918) = 1;
    }
    if ( !*((_QWORD *)this + 91) )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v76);
      v51[3] = 16707LL;
      goto LABEL_248;
    }
    if ( !*((_BYTE *)this + 1859) )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v76);
      v51[3] = 16716LL;
      goto LABEL_248;
    }
  }
  if ( (int)v21 >= 0 )
  {
    v89 = *(_QWORD *)(*((_QWORD *)this + 22) + 64LL);
    if ( !*(_BYTE *)(*(_QWORD *)(v89 + 40) + 133LL) )
    {
      if ( v86 >= 0x2000 )
      {
        Global = DXGGLOBAL::GetGlobal(v89);
        v91 = 1;
      }
      else
      {
        Global = DXGGLOBAL::GetGlobal(v89);
        v91 = 0;
      }
      LODWORD(v21) = DXGGLOBAL::DeferredInitialize(Global, v91);
      if ( (int)v21 < 0 )
      {
        v55 = WdLogNewEntry5_WdError(v92);
        *(_QWORD *)(v55 + 24) = (int)v21;
        goto LABEL_50;
      }
    }
  }
  v165 = 0;
  DXGADAPTER::Config = 0;
  v152 = 0;
  v173 = 7000;
  v143 = 7000;
  v197 = L"ForceDirectFlip";
  v198 = &v152;
  v200 = &v165;
  v204 = L"DisableOverlays";
  v205 = &v154;
  v207 = &v167;
  v211 = L"EnableOfferReclaimOnDriver";
  v167 = 0;
  v154 = 0;
  v181 = 0;
  v156 = 0;
  v182 = 0;
  v163 = 0;
  v161 = 0;
  v139 = 0;
  v159 = 0;
  v141 = 0;
  v185 = 1;
  v145 = 1;
  v169 = 0;
  v155 = 0;
  v186.hKmdProcessHandle = (HANDLE)1395864371;
  v193 = 16LL;
  v194 = 1395864371LL;
  v171 = 0;
  v147 = 0;
  v184 = 0;
  v149 = 0;
  v175 = 0;
  v157 = 0;
  v180 = 0;
  v151 = 0;
  v177 = 0;
  v142 = 0;
  v183 = 0;
  v153 = 0;
  v179 = 1;
  v144 = 1;
  v166 = 0;
  v162 = 0;
  v168 = 0;
  v146 = 0;
  v172 = 0;
  v148 = 0;
  v170 = 0;
  v150 = 0;
  v174 = 0;
  v164 = 0;
  v176 = 1;
  v158 = 1;
  v178 = 0;
  v160 = 0;
  v195 = 0LL;
  v196 = 288;
  v199 = 67108868;
  v201 = 4;
  v202 = 0LL;
  v203 = 288;
  v206 = 67108868;
  v208 = 4;
  v209 = 0LL;
  v210 = 288;
  v212 = &v145;
  v213 = 67108868;
  v214 = &v185;
  v215 = 4;
  v218 = L"EnableOfferReclaimFailOnDwm";
  v219 = &v155;
  v221 = &v169;
  v225 = L"LeanMemoryLimit";
  v226 = &v193;
  p_hKmdProcessHandle = &v186.hKmdProcessHandle;
  v232 = L"ForceEnableDxgMms2";
  v233 = &v163;
  v235 = &v182;
  v239 = L"ContextNoPatchMode";
  v240 = &v147;
  v242 = &v171;
  v247 = &v139;
  v249 = &v161;
  v254 = &v141;
  v256 = &v159;
  v260 = L"Force32BitFences";
  v261 = &v156;
  v263 = &v181;
  v267 = L"InitialPagingQueueFenceValue";
  v268 = &v143;
  v216 = 0LL;
  v217 = 288;
  v220 = 67108868;
  v222 = 4;
  v223 = 0LL;
  v224 = 288;
  v227 = 184549387;
  v229 = 8;
  v230 = 0LL;
  v231 = 288;
  v234 = 67108868;
  v236 = 4;
  v237 = 0LL;
  v238 = 288;
  v241 = 67108868;
  v243 = 4;
  v244 = 0LL;
  v245 = 288;
  v246 = L"ForceToMapGpuVa";
  v248 = 67108868;
  v250 = 4;
  v251 = 0LL;
  v252 = 288;
  v253 = L"ForceAccessedPhysically";
  v255 = 67108868;
  v257 = 4;
  v258 = 0LL;
  v259 = 288;
  v262 = 67108868;
  v264 = 4;
  v265 = 0LL;
  v266 = 288;
  v269 = 67108868;
  v270 = &v173;
  v274 = L"ForceInitPagingProcessVaSpace";
  v275 = &v149;
  v277 = &v184;
  v281 = L"DisableGdiContextGpuVa";
  v282 = &v157;
  v284 = &v175;
  v288 = L"DisablePagingContextGpuVa";
  v289 = &v151;
  v291 = &v180;
  v295 = L"DisableMonitoredFenceGpuVa";
  v296 = &v142;
  v298 = &v177;
  v302 = L"ForceExplicitResidencyNotification";
  v303 = &v153;
  v305 = &v183;
  v310 = &v139;
  v312 = &v161;
  v317 = &v141;
  v319 = &v159;
  v323 = L"DriverManagesResidencyOverride";
  v324 = &v144;
  v326 = &v179;
  v271 = 4;
  v272 = 0LL;
  v273 = 288;
  v276 = 67108868;
  v278 = 4;
  v279 = 0LL;
  v280 = 288;
  v283 = 67108868;
  v285 = 4;
  v286 = 0LL;
  v287 = 288;
  v290 = 67108868;
  v292 = 4;
  v293 = 0LL;
  v294 = 288;
  v297 = 67108868;
  v299 = 4;
  v300 = 0LL;
  v301 = 288;
  v304 = 67108868;
  v306 = 4;
  v307 = 0LL;
  v308 = 288;
  v309 = L"ForceToMapGpuVa";
  v311 = 67108868;
  v313 = 4;
  v314 = 0LL;
  v315 = 288;
  v316 = L"ForceAccessedPhysically";
  v318 = 67108868;
  v320 = 4;
  v321 = 0LL;
  v322 = 288;
  v325 = 67108868;
  v332 = 67108868;
  v330 = L"GdiPhysicalAdapterIndex";
  v339 = 67108868;
  v331 = &v162;
  v346 = 67108868;
  v333 = &v166;
  v337 = L"ForceReplicateGdiContent";
  v338 = &v146;
  v340 = &v168;
  v344 = L"EnableTimedCalls";
  v345 = &v150;
  v347 = &v170;
  v351 = L"CreateGdiPrimaryOnSlaveGpu";
  v352 = &v148;
  v354 = &v172;
  v358 = L"ForceSurpriseRemovalSupport";
  v359 = &v164;
  v361 = &v174;
  v365 = L"EnableDecodeMPO";
  v366 = &v158;
  v368 = &v176;
  v372 = L"DisableBadDriverCheckForHwProtection";
  v373 = &v160;
  v353 = 67108868;
  v360 = 67108868;
  v367 = 67108868;
  v374 = 67108868;
  v375 = &v178;
  v327 = 4;
  v328 = 0LL;
  v329 = 288;
  v334 = 4;
  v335 = 0LL;
  v336 = 288;
  v341 = 4;
  v342 = 0LL;
  v343 = 288;
  v348 = 4;
  v349 = 0LL;
  v350 = 288;
  v355 = 4;
  v356 = 0LL;
  v357 = 288;
  v362 = 4;
  v363 = 0LL;
  v364 = 288;
  v369 = 4;
  v370 = 0LL;
  v371 = 288;
  v376 = 4;
  v377 = 0LL;
  v378 = 0;
  v379 = 0LL;
  memset(v380, 0, sizeof(v380));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v195, 0LL, 0LL);
  v120 = v155 == 0;
  *((_BYTE *)this + 1921) = v145 != 0;
  v93 = !v120;
  v120 = v163 == 0;
  *((_BYTE *)this + 1922) = v93;
  *((_DWORD *)this + 484) = v147;
  *((_QWORD *)this + 241) = v194;
  v94 = !v120;
  v120 = v139 == 0;
  *((_BYTE *)this + 1940) = v94;
  v95 = !v120;
  v120 = v141 == 0;
  *((_BYTE *)this + 1941) = v95;
  v96 = !v120;
  v120 = v149 == 0;
  *((_BYTE *)this + 1942) = v96;
  v97 = !v120;
  v120 = v157 == 0;
  *((_BYTE *)this + 1944) = v97;
  v98 = !v120;
  v120 = v151 == 0;
  *((_BYTE *)this + 1945) = v98;
  v99 = !v120;
  v120 = v142 == 0;
  *((_BYTE *)this + 1946) = v99;
  v100 = !v120;
  v120 = v153 == 0;
  *((_BYTE *)this + 1947) = v100;
  v101 = !v120;
  v120 = v144 == 0;
  *((_BYTE *)this + 1943) = v101;
  *((_DWORD *)this + 489) = v143;
  *((_BYTE *)this + 1948) = !v120;
  if ( v146 || (v102 = 0, (*((_DWORD *)this + 347) & 0x100) != 0) )
    v102 = 1;
  v120 = v148 == 0;
  *((_BYTE *)this + 1923) = v102;
  v103 = !v120;
  v120 = v150 == 0;
  *((_BYTE *)this + 1924) = v103;
  DXGADAPTER::Config ^= (DXGADAPTER::Config ^ !v120) & 1;
  if ( v152 )
    *((_BYTE *)this + 1859) = 1;
  if ( v154 )
    *((_BYTE *)this + 1860) = 0;
  if ( v156 )
    *((_DWORD *)this + 346) |= 0x20u;
  if ( *((_BYTE *)this + 1860) )
  {
    if ( *((_BYTE *)this + 1918) )
      *((_DWORD *)this + 466) = 2;
  }
  else
  {
    *((_DWORD *)this + 466) = 1;
  }
  v104 = *((_BYTE *)this + 1921);
  if ( *((int *)this + 414) < 4608 )
    v104 = 0;
  *((_BYTE *)this + 1921) = v104;
  if ( !DXGADAPTER::IsDxgmms2(this) )
    *((_BYTE *)this + 1948) = 0;
  if ( !v158 || (v107 = 1, !v105) )
    v107 = 0;
  v120 = v160 == 0;
  *((_BYTE *)this + 1949) = v107;
  *((_BYTE *)this + 1950) = !v120;
  if ( *((_DWORD *)this + 58) > 1u )
    *((_DWORD *)this + 503) = v162;
  if ( v164 )
    *(_BYTE *)a3 |= 0x10u;
  v108 = (__int64 *)((char *)this + 1992);
  RenderCore = ADAPTER_RENDER::CreateRenderCore(v106, (struct ADAPTER_RENDER **)this + 249);
  v111 = RenderCore;
  if ( RenderCore < 0 )
  {
    if ( *v108 )
    {
      v112 = WdLogNewEntry5_WdAssertion(v110);
      *(_QWORD *)(v112 + 24) = 16915LL;
      WdLogEvent5_WdAssertion(v112);
    }
    v113 = WdLogNewEntry5_WdError(v110);
    *(_QWORD *)(v113 + 24) = this;
    *(_QWORD *)(v113 + 32) = v111;
    WdLogEvent5_WdError(v113);
    return (unsigned int)v111;
  }
  v114 = (_QWORD *)((char *)this + 1984);
  DisplayCore = ADAPTER_DISPLAY::CreateDisplayCore(this, (struct ADAPTER_DISPLAY **)this + 248);
  v117 = DisplayCore;
  if ( DisplayCore < 0 )
  {
    if ( *v114 )
    {
      v118 = WdLogNewEntry5_WdAssertion(v116);
      *(_QWORD *)(v118 + 24) = 16931LL;
      WdLogEvent5_WdAssertion(v118);
    }
    v119 = WdLogNewEntry5_WdError(v116);
    *(_QWORD *)(v119 + 24) = this;
    *(_QWORD *)(v119 + 32) = v117;
    WdLogEvent5_WdError(v119);
    return (unsigned int)v117;
  }
  if ( *v108 )
  {
    v120 = *v114 == 0LL;
  }
  else
  {
    v120 = *v114 == 0LL;
    if ( !*v114 )
    {
      v37 = WdLogNewEntry5_WdError(v116);
      *(_QWORD *)(v37 + 24) = this;
      *(_QWORD *)(v37 + 32) = -1073741735LL;
      goto LABEL_25;
    }
  }
  *(_BYTE *)a3 ^= (*(_BYTE *)a3 ^ !v120) & 1;
  *(_BYTE *)a3 ^= (*(_BYTE *)a3 ^ (2 * (*v108 != 0))) & 2;
  if ( !*v108 )
    *((_DWORD *)this + 343) |= 1u;
  if ( DXGADAPTER::IsDxgmms2(this) )
  {
    v123 = *((_DWORD *)this + 71);
    if ( (v123 & 4) == 0
      && (v123 & 8) == 0
      && v121
      && (unsigned int)v50 >= 0x5008
      && (!*((_QWORD *)this + 96) || !*((_QWORD *)this + 108)) )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v122);
      v51[3] = 16978LL;
      goto LABEL_248;
    }
  }
  if ( *((_BYTE *)this + 1916) && DXGADAPTER::IsFullWDDMAdapter(v122) && *((int *)this + 414) >= 4608 )
  {
    if ( !*((_BYTE *)this + 1859) )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v124);
      v51[3] = 16993LL;
      goto LABEL_248;
    }
    goto LABEL_223;
  }
  if ( *((_BYTE *)this + 1859) )
  {
LABEL_223:
    if ( !v121
      || !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v121 + 424) + 8LL) + 688LL))(*(_QWORD *)(v121 + 432)) )
    {
      *(_WORD *)((char *)this + 1859) = 0;
    }
  }
  IsBddFallbackDriver = DXGADAPTER::IsBddFallbackDriver(this);
  v126 = *((_DWORD *)this + 71);
  *((_DWORD *)this + 40) = IsBddFallbackDriver ? 3 : 1;
  if ( (v126 & 0x10) != 0 && !*v114 )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v187);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v187);
    if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v127) + 89) )
    {
      v129 = WdLogNewEntry5_WdError(v128);
      *(_QWORD *)(v129 + 24) = this;
      *(_QWORD *)(v129 + 32) = -1073741735LL;
      WdLogEvent5_WdError(v129);
    }
    else
    {
      DXGADAPTER::AcquireReference(this);
      *((_QWORD *)DXGGLOBAL::GetGlobal(v130) + 89) = this;
    }
    if ( v187[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v187);
  }
  v131 = DXGADAPTER::InitializePowerManagement(this);
  v133 = v131;
  if ( v131 >= 0 )
  {
    if ( *((_BYTE *)this + 1916) )
    {
      if ( *((int *)this + 414) >= 4864 && DXGADAPTER::IsFullWDDMAdapter(this) )
      {
        v138 = *((_DWORD *)this + 71);
        if ( (v138 & 4) == 0 && (v138 & 0x20) == 0 && (*((_DWORD *)this + 345) & 0x10) == 0 )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdError(v132);
          v51[3] = 17063LL;
          goto LABEL_248;
        }
      }
    }
  }
  else
  {
    v134 = WdLogNewEntry5_WdError(v132);
    *(_QWORD *)(v134 + 24) = this;
    *(_QWORD *)(v134 + 32) = v133;
    WdLogEvent5_WdError(v134);
  }
  v135 = *v108;
  if ( v135 )
  {
    v136 = DXGGLOBAL::GetGlobal(v132);
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v135 + 400) + 8LL) + 800LL))(
      *(_QWORD *)(v135 + 408),
      (__int64)v136 + 896);
  }
  if ( (*((_DWORD *)this + 71) & 1) != 0 )
  {
    v137 = *(_QWORD *)((char *)this + 252);
    *((_QWORD *)DXGGLOBAL::GetGlobal(v132) + 90) = v137;
  }
  return (unsigned int)v133;
}
