/*
 * XREFs of ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00E5674
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E90EC (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006E88 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0008750 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0008768 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C009F708 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B4048 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z @ 0x1C00E55B4 (-CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z.c)
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C00E7070 (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 *     ?SetModeBehavior@DXGADAPTER@@AEAAXE@Z @ 0x1C00E71A4 (-SetModeBehavior@DXGADAPTER@@AEAAXE@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C00E72A8 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00E7778 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00E7A7C (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     DpiGetAdapterInfo @ 0x1C00E7F68 (DpiGetAdapterInfo.c)
 *     ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ @ 0x1C00E8F4C (-AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ.c)
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C00E8FB4 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGADAPTER::Initialize(DXGADAPTER *this, struct _DEVICE_OBJECT *a2, struct _DXGK_ADAPTER_CAPS *a3)
{
  __int64 v6; // rax
  struct _ERESOURCE *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rax
  DXGGLOBAL *v21; // rcx
  unsigned int v22; // eax
  struct _ERESOURCE *v23; // rax
  NTSTATUS v24; // eax
  int AdapterInfo; // eax
  const struct _GUID *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  NTSTATUS v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rsi
  _QWORD *v43; // rax
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  _DWORD *v48; // r12
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned __int64 v54; // r15
  SIZE_T v55; // rax
  unsigned __int64 v56; // rbx
  PVOID v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // r8
  unsigned int v62; // edx
  int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // r13
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  char v69; // al
  int v70; // eax
  char v71; // cl
  char v72; // cl
  char v73; // cl
  char v74; // dl
  char v75; // dl
  unsigned int v76; // eax
  __int64 v77; // rcx
  DXGGLOBAL *Global; // rax
  unsigned int v79; // edx
  __int64 v80; // rcx
  bool v81; // al
  bool v82; // al
  bool v83; // al
  bool v84; // al
  bool v85; // al
  bool v86; // al
  bool v87; // al
  char v88; // al
  bool v89; // al
  char v90; // al
  char v91; // dl
  char v92; // al
  char v93; // al
  unsigned int v94; // ecx
  char v95; // al
  char v96; // al
  __int64 *v97; // rbx
  int RenderCore; // eax
  __int64 v99; // rcx
  __int64 v100; // r15
  __int64 v101; // rax
  __int64 v102; // rax
  _QWORD *v103; // r15
  int DisplayCore; // eax
  __int64 v105; // rcx
  __int64 v106; // r12
  __int64 v107; // rax
  __int64 v108; // rax
  bool v109; // zf
  __int64 v110; // rdx
  DXGADAPTER *v111; // rcx
  int v112; // eax
  __int64 v113; // rcx
  bool IsBddFallbackDriver; // cf
  int v115; // eax
  __int64 v116; // rcx
  __int64 v117; // rcx
  __int64 v118; // rax
  int v119; // eax
  __int64 v120; // rcx
  __int64 v121; // rsi
  __int64 v122; // rax
  __int64 v123; // rbx
  struct DXGGLOBAL *v124; // rax
  __int64 v125; // rbx
  int v126; // eax
  unsigned int v127; // [rsp+30h] [rbp-D0h] BYREF
  int v128; // [rsp+34h] [rbp-CCh] BYREF
  int v129; // [rsp+38h] [rbp-C8h] BYREF
  int v130; // [rsp+3Ch] [rbp-C4h] BYREF
  int v131; // [rsp+40h] [rbp-C0h] BYREF
  int v132; // [rsp+44h] [rbp-BCh] BYREF
  int v133; // [rsp+48h] [rbp-B8h] BYREF
  int v134; // [rsp+4Ch] [rbp-B4h] BYREF
  int v135; // [rsp+50h] [rbp-B0h] BYREF
  int v136; // [rsp+54h] [rbp-ACh] BYREF
  int v137; // [rsp+58h] [rbp-A8h] BYREF
  int v138; // [rsp+5Ch] [rbp-A4h] BYREF
  int v139; // [rsp+60h] [rbp-A0h] BYREF
  int v140; // [rsp+64h] [rbp-9Ch] BYREF
  int v141; // [rsp+68h] [rbp-98h] BYREF
  int v142; // [rsp+6Ch] [rbp-94h] BYREF
  int v143; // [rsp+70h] [rbp-90h] BYREF
  int v144; // [rsp+74h] [rbp-8Ch] BYREF
  int v145; // [rsp+78h] [rbp-88h] BYREF
  int v146; // [rsp+7Ch] [rbp-84h] BYREF
  int v147; // [rsp+80h] [rbp-80h] BYREF
  int v148; // [rsp+84h] [rbp-7Ch] BYREF
  int v149; // [rsp+88h] [rbp-78h] BYREF
  int v150; // [rsp+8Ch] [rbp-74h] BYREF
  int v151; // [rsp+90h] [rbp-70h] BYREF
  int v152; // [rsp+94h] [rbp-6Ch] BYREF
  int v153; // [rsp+98h] [rbp-68h] BYREF
  int v154; // [rsp+9Ch] [rbp-64h] BYREF
  int v155; // [rsp+A0h] [rbp-60h] BYREF
  int v156; // [rsp+A4h] [rbp-5Ch] BYREF
  int v157; // [rsp+A8h] [rbp-58h] BYREF
  int v158; // [rsp+ACh] [rbp-54h] BYREF
  int v159; // [rsp+B0h] [rbp-50h] BYREF
  int v160; // [rsp+B4h] [rbp-4Ch] BYREF
  int v161; // [rsp+B8h] [rbp-48h] BYREF
  int v162; // [rsp+BCh] [rbp-44h] BYREF
  int v163; // [rsp+C0h] [rbp-40h] BYREF
  int v164; // [rsp+C4h] [rbp-3Ch] BYREF
  int v165; // [rsp+C8h] [rbp-38h] BYREF
  int v166; // [rsp+CCh] [rbp-34h] BYREF
  int v167; // [rsp+D0h] [rbp-30h] BYREF
  int v168; // [rsp+D4h] [rbp-2Ch] BYREF
  int v169; // [rsp+D8h] [rbp-28h] BYREF
  int v170; // [rsp+DCh] [rbp-24h] BYREF
  int v171; // [rsp+E0h] [rbp-20h] BYREF
  int v172; // [rsp+E4h] [rbp-1Ch] BYREF
  int v173; // [rsp+E8h] [rbp-18h] BYREF
  int v174; // [rsp+ECh] [rbp-14h] BYREF
  int v175; // [rsp+F0h] [rbp-10h] BYREF
  int v176; // [rsp+F4h] [rbp-Ch] BYREF
  int v177; // [rsp+F8h] [rbp-8h] BYREF
  int v178; // [rsp+FCh] [rbp-4h] BYREF
  int v179; // [rsp+100h] [rbp+0h] BYREF
  int v180; // [rsp+104h] [rbp+4h] BYREF
  int v181; // [rsp+108h] [rbp+8h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v182; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v183[16]; // [rsp+140h] [rbp+40h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v184; // [rsp+150h] [rbp+50h] BYREF
  unsigned int *v185; // [rsp+180h] [rbp+80h]
  int v186; // [rsp+188h] [rbp+88h]
  __int64 v187; // [rsp+190h] [rbp+90h]
  int v188; // [rsp+198h] [rbp+98h]
  __int64 v189; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v190; // [rsp+1A8h] [rbp+A8h]
  __int64 v191; // [rsp+1B0h] [rbp+B0h] BYREF
  int v192; // [rsp+1B8h] [rbp+B8h]
  const wchar_t *v193; // [rsp+1C0h] [rbp+C0h]
  int *v194; // [rsp+1C8h] [rbp+C8h]
  int v195; // [rsp+1D0h] [rbp+D0h]
  int *v196; // [rsp+1D8h] [rbp+D8h]
  int v197; // [rsp+1E0h] [rbp+E0h]
  __int64 v198; // [rsp+1E8h] [rbp+E8h]
  int v199; // [rsp+1F0h] [rbp+F0h]
  const wchar_t *v200; // [rsp+1F8h] [rbp+F8h]
  int *v201; // [rsp+200h] [rbp+100h]
  int v202; // [rsp+208h] [rbp+108h]
  int *v203; // [rsp+210h] [rbp+110h]
  int v204; // [rsp+218h] [rbp+118h]
  __int64 v205; // [rsp+220h] [rbp+120h]
  int v206; // [rsp+228h] [rbp+128h]
  const wchar_t *v207; // [rsp+230h] [rbp+130h]
  int *v208; // [rsp+238h] [rbp+138h]
  int v209; // [rsp+240h] [rbp+140h]
  int *v210; // [rsp+248h] [rbp+148h]
  int v211; // [rsp+250h] [rbp+150h]
  __int64 v212; // [rsp+258h] [rbp+158h]
  int v213; // [rsp+260h] [rbp+160h]
  const wchar_t *v214; // [rsp+268h] [rbp+168h]
  __int64 *v215; // [rsp+270h] [rbp+170h]
  int v216; // [rsp+278h] [rbp+178h]
  HANDLE *p_hKmdProcessHandle; // [rsp+280h] [rbp+180h]
  int v218; // [rsp+288h] [rbp+188h]
  __int64 v219; // [rsp+290h] [rbp+190h]
  int v220; // [rsp+298h] [rbp+198h]
  const wchar_t *v221; // [rsp+2A0h] [rbp+1A0h]
  int *v222; // [rsp+2A8h] [rbp+1A8h]
  int v223; // [rsp+2B0h] [rbp+1B0h]
  int *v224; // [rsp+2B8h] [rbp+1B8h]
  int v225; // [rsp+2C0h] [rbp+1C0h]
  __int64 v226; // [rsp+2C8h] [rbp+1C8h]
  int v227; // [rsp+2D0h] [rbp+1D0h]
  const wchar_t *v228; // [rsp+2D8h] [rbp+1D8h]
  int *v229; // [rsp+2E0h] [rbp+1E0h]
  int v230; // [rsp+2E8h] [rbp+1E8h]
  int *v231; // [rsp+2F0h] [rbp+1F0h]
  int v232; // [rsp+2F8h] [rbp+1F8h]
  __int64 v233; // [rsp+300h] [rbp+200h]
  int v234; // [rsp+308h] [rbp+208h]
  const wchar_t *v235; // [rsp+310h] [rbp+210h]
  int *v236; // [rsp+318h] [rbp+218h]
  int v237; // [rsp+320h] [rbp+220h]
  int *v238; // [rsp+328h] [rbp+228h]
  int v239; // [rsp+330h] [rbp+230h]
  __int64 v240; // [rsp+338h] [rbp+238h]
  int v241; // [rsp+340h] [rbp+240h]
  const wchar_t *v242; // [rsp+348h] [rbp+248h]
  int *v243; // [rsp+350h] [rbp+250h]
  int v244; // [rsp+358h] [rbp+258h]
  int *v245; // [rsp+360h] [rbp+260h]
  int v246; // [rsp+368h] [rbp+268h]
  __int64 v247; // [rsp+370h] [rbp+270h]
  int v248; // [rsp+378h] [rbp+278h]
  const wchar_t *v249; // [rsp+380h] [rbp+280h]
  int *v250; // [rsp+388h] [rbp+288h]
  int v251; // [rsp+390h] [rbp+290h]
  int *v252; // [rsp+398h] [rbp+298h]
  int v253; // [rsp+3A0h] [rbp+2A0h]
  __int64 v254; // [rsp+3A8h] [rbp+2A8h]
  int v255; // [rsp+3B0h] [rbp+2B0h]
  const wchar_t *v256; // [rsp+3B8h] [rbp+2B8h]
  int *v257; // [rsp+3C0h] [rbp+2C0h]
  int v258; // [rsp+3C8h] [rbp+2C8h]
  int *v259; // [rsp+3D0h] [rbp+2D0h]
  int v260; // [rsp+3D8h] [rbp+2D8h]
  __int64 v261; // [rsp+3E0h] [rbp+2E0h]
  int v262; // [rsp+3E8h] [rbp+2E8h]
  const wchar_t *v263; // [rsp+3F0h] [rbp+2F0h]
  int *v264; // [rsp+3F8h] [rbp+2F8h]
  int v265; // [rsp+400h] [rbp+300h]
  int *v266; // [rsp+408h] [rbp+308h]
  int v267; // [rsp+410h] [rbp+310h]
  __int64 v268; // [rsp+418h] [rbp+318h]
  int v269; // [rsp+420h] [rbp+320h]
  const wchar_t *v270; // [rsp+428h] [rbp+328h]
  int *v271; // [rsp+430h] [rbp+330h]
  int v272; // [rsp+438h] [rbp+338h]
  int *v273; // [rsp+440h] [rbp+340h]
  int v274; // [rsp+448h] [rbp+348h]
  __int64 v275; // [rsp+450h] [rbp+350h]
  int v276; // [rsp+458h] [rbp+358h]
  const wchar_t *v277; // [rsp+460h] [rbp+360h]
  int *v278; // [rsp+468h] [rbp+368h]
  int v279; // [rsp+470h] [rbp+370h]
  int *v280; // [rsp+478h] [rbp+378h]
  int v281; // [rsp+480h] [rbp+380h]
  __int64 v282; // [rsp+488h] [rbp+388h]
  int v283; // [rsp+490h] [rbp+390h]
  const wchar_t *v284; // [rsp+498h] [rbp+398h]
  int *v285; // [rsp+4A0h] [rbp+3A0h]
  int v286; // [rsp+4A8h] [rbp+3A8h]
  int *v287; // [rsp+4B0h] [rbp+3B0h]
  int v288; // [rsp+4B8h] [rbp+3B8h]
  __int64 v289; // [rsp+4C0h] [rbp+3C0h]
  int v290; // [rsp+4C8h] [rbp+3C8h]
  const wchar_t *v291; // [rsp+4D0h] [rbp+3D0h]
  int *v292; // [rsp+4D8h] [rbp+3D8h]
  int v293; // [rsp+4E0h] [rbp+3E0h]
  int *v294; // [rsp+4E8h] [rbp+3E8h]
  int v295; // [rsp+4F0h] [rbp+3F0h]
  __int64 v296; // [rsp+4F8h] [rbp+3F8h]
  int v297; // [rsp+500h] [rbp+400h]
  const wchar_t *v298; // [rsp+508h] [rbp+408h]
  int *v299; // [rsp+510h] [rbp+410h]
  int v300; // [rsp+518h] [rbp+418h]
  int *v301; // [rsp+520h] [rbp+420h]
  int v302; // [rsp+528h] [rbp+428h]
  __int64 v303; // [rsp+530h] [rbp+430h]
  int v304; // [rsp+538h] [rbp+438h]
  const wchar_t *v305; // [rsp+540h] [rbp+440h]
  int *v306; // [rsp+548h] [rbp+448h]
  int v307; // [rsp+550h] [rbp+450h]
  int *v308; // [rsp+558h] [rbp+458h]
  int v309; // [rsp+560h] [rbp+460h]
  __int64 v310; // [rsp+568h] [rbp+468h]
  int v311; // [rsp+570h] [rbp+470h]
  const wchar_t *v312; // [rsp+578h] [rbp+478h]
  int *v313; // [rsp+580h] [rbp+480h]
  int v314; // [rsp+588h] [rbp+488h]
  int *v315; // [rsp+590h] [rbp+490h]
  int v316; // [rsp+598h] [rbp+498h]
  __int64 v317; // [rsp+5A0h] [rbp+4A0h]
  int v318; // [rsp+5A8h] [rbp+4A8h]
  const wchar_t *v319; // [rsp+5B0h] [rbp+4B0h]
  int *v320; // [rsp+5B8h] [rbp+4B8h]
  int v321; // [rsp+5C0h] [rbp+4C0h]
  int *v322; // [rsp+5C8h] [rbp+4C8h]
  int v323; // [rsp+5D0h] [rbp+4D0h]
  __int64 v324; // [rsp+5D8h] [rbp+4D8h]
  int v325; // [rsp+5E0h] [rbp+4E0h]
  const wchar_t *v326; // [rsp+5E8h] [rbp+4E8h]
  int *v327; // [rsp+5F0h] [rbp+4F0h]
  int v328; // [rsp+5F8h] [rbp+4F8h]
  int *v329; // [rsp+600h] [rbp+500h]
  int v330; // [rsp+608h] [rbp+508h]
  __int64 v331; // [rsp+610h] [rbp+510h]
  int v332; // [rsp+618h] [rbp+518h]
  const wchar_t *v333; // [rsp+620h] [rbp+520h]
  int *v334; // [rsp+628h] [rbp+528h]
  int v335; // [rsp+630h] [rbp+530h]
  int *v336; // [rsp+638h] [rbp+538h]
  int v337; // [rsp+640h] [rbp+540h]
  __int64 v338; // [rsp+648h] [rbp+548h]
  int v339; // [rsp+650h] [rbp+550h]
  const wchar_t *v340; // [rsp+658h] [rbp+558h]
  int *v341; // [rsp+660h] [rbp+560h]
  int v342; // [rsp+668h] [rbp+568h]
  int *v343; // [rsp+670h] [rbp+570h]
  int v344; // [rsp+678h] [rbp+578h]
  __int64 v345; // [rsp+680h] [rbp+580h]
  int v346; // [rsp+688h] [rbp+588h]
  const wchar_t *v347; // [rsp+690h] [rbp+590h]
  int *v348; // [rsp+698h] [rbp+598h]
  int v349; // [rsp+6A0h] [rbp+5A0h]
  int *v350; // [rsp+6A8h] [rbp+5A8h]
  int v351; // [rsp+6B0h] [rbp+5B0h]
  __int64 v352; // [rsp+6B8h] [rbp+5B8h]
  int v353; // [rsp+6C0h] [rbp+5C0h]
  const wchar_t *v354; // [rsp+6C8h] [rbp+5C8h]
  int *v355; // [rsp+6D0h] [rbp+5D0h]
  int v356; // [rsp+6D8h] [rbp+5D8h]
  int *v357; // [rsp+6E0h] [rbp+5E0h]
  int v358; // [rsp+6E8h] [rbp+5E8h]
  __int64 v359; // [rsp+6F0h] [rbp+5F0h]
  int v360; // [rsp+6F8h] [rbp+5F8h]
  const wchar_t *v361; // [rsp+700h] [rbp+600h]
  int *v362; // [rsp+708h] [rbp+608h]
  int v363; // [rsp+710h] [rbp+610h]
  int *v364; // [rsp+718h] [rbp+618h]
  int v365; // [rsp+720h] [rbp+620h]
  __int64 v366; // [rsp+728h] [rbp+628h]
  int v367; // [rsp+730h] [rbp+630h]
  const wchar_t *v368; // [rsp+738h] [rbp+638h]
  int *v369; // [rsp+740h] [rbp+640h]
  int v370; // [rsp+748h] [rbp+648h]
  int *v371; // [rsp+750h] [rbp+650h]
  int v372; // [rsp+758h] [rbp+658h]
  __int64 v373; // [rsp+760h] [rbp+660h]
  int v374; // [rsp+768h] [rbp+668h]
  const wchar_t *v375; // [rsp+770h] [rbp+670h]
  int *v376; // [rsp+778h] [rbp+678h]
  int v377; // [rsp+780h] [rbp+680h]
  int *v378; // [rsp+788h] [rbp+688h]
  int v379; // [rsp+790h] [rbp+690h]
  __int64 v380; // [rsp+798h] [rbp+698h]
  int v381; // [rsp+7A0h] [rbp+6A0h]
  const wchar_t *v382; // [rsp+7A8h] [rbp+6A8h]
  int *v383; // [rsp+7B0h] [rbp+6B0h]
  int v384; // [rsp+7B8h] [rbp+6B8h]
  int *v385; // [rsp+7C0h] [rbp+6C0h]
  int v386; // [rsp+7C8h] [rbp+6C8h]
  __int64 v387; // [rsp+7D0h] [rbp+6D0h]
  int v388; // [rsp+7D8h] [rbp+6D8h]
  const wchar_t *v389; // [rsp+7E0h] [rbp+6E0h]
  int *v390; // [rsp+7E8h] [rbp+6E8h]
  int v391; // [rsp+7F0h] [rbp+6F0h]
  int *v392; // [rsp+7F8h] [rbp+6F8h]
  int v393; // [rsp+800h] [rbp+700h]
  __int64 v394; // [rsp+808h] [rbp+708h]
  int v395; // [rsp+810h] [rbp+710h]
  const wchar_t *v396; // [rsp+818h] [rbp+718h]
  int *v397; // [rsp+820h] [rbp+720h]
  int v398; // [rsp+828h] [rbp+728h]
  int *v399; // [rsp+830h] [rbp+730h]
  int v400; // [rsp+838h] [rbp+738h]
  __int64 v401; // [rsp+840h] [rbp+740h]
  int v402; // [rsp+848h] [rbp+748h]
  _BYTE v403[40]; // [rsp+850h] [rbp+750h] BYREF

  if ( KeGetCurrentIrql() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 4972LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_DWORD *)this + 44) )
    return 3221225485LL;
  v7 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 18) = v7;
  if ( !v7 )
    goto LABEL_5;
  v14 = ExInitializeResourceLite(v7);
  v19 = v14;
  if ( v14 < 0 )
    goto LABEL_8;
  v21 = (DXGGLOBAL *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 24) = a2;
  v22 = DXGGLOBAL::AcquireAdapterOrdinal(v21);
  *((_DWORD *)this + 50) = v22;
  if ( v22 == -1 )
    return 3221225495LL;
  v23 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 29) = v23;
  if ( !v23 )
  {
LABEL_5:
    v12 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = this;
    *(_QWORD *)(v12 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v12);
    return 3221225495LL;
  }
  v24 = ExInitializeResourceLite(v23);
  v19 = v24;
  if ( v24 < 0 )
  {
LABEL_8:
    v20 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
    *(_QWORD *)(v20 + 24) = this;
    *(_QWORD *)(v20 + 32) = v19;
    WdLogEvent5_WdWarning(v20);
    return (unsigned int)v19;
  }
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  *((_QWORD *)this + 5) = -1LL;
  AdapterInfo = DpiGetAdapterInfo(a2, (char *)this + 968, (char *)this + 240, (char *)this + 1360);
  v19 = AdapterInfo;
  if ( AdapterInfo < 0 )
  {
    v30 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
    *(_QWORD *)(v30 + 24) = this;
    *(_QWORD *)(v30 + 32) = v19;
    WdLogEvent5_WdWarning(v30);
    memset((char *)this + 240, 0, 0x2D8uLL);
    memset((char *)this + 968, 0, 0xC8uLL);
    return (unsigned int)v19;
  }
  v31 = *((_DWORD *)this + 75);
  if ( (v31 & 8) != 0 && (v31 & 0x10) != 0 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v27);
    *(_QWORD *)(v32 + 24) = 5071LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( !*((_QWORD *)this + 39) )
  {
    v33 = WdLogNewEntry5_WdError(v27);
    *(_QWORD *)(v33 + 24) = 5078LL;
LABEL_20:
    WdLogEvent5_WdError(v33);
    return 3221225561LL;
  }
  if ( !*((_QWORD *)this + 56) )
    *((_QWORD *)this + 56) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !*((_QWORD *)this + 118) )
    *((_QWORD *)this + 118) = DxgkQueryFSEBlock;
  v34 = DXGADAPTER::CallDriverQueryInterface((PDEVICE_OBJECT *)this, v26, v28, v29, (char *)this + 1168);
  v39 = v34;
  if ( v34 < 0 )
  {
    v40 = WdLogNewEntry5_WdTrace(v36, v35, v37, v38);
    *(_QWORD *)(v40 + 24) = this;
    *(_QWORD *)(v40 + 32) = v39;
LABEL_28:
    memset((char *)this + 1168, 0, 0xB8uLL);
    goto LABEL_29;
  }
  if ( *((_WORD *)this + 585) < 4u )
    goto LABEL_28;
LABEL_29:
  v41 = *(_QWORD *)(*((_QWORD *)this + 24) + 64LL);
  v42 = *(unsigned int *)(*(_QWORD *)(v41 + 40) + 28LL);
  *((_DWORD *)this + 338) = v42;
  if ( (unsigned int)v42 >= 0x6002 && *((_DWORD *)this + 252) && *((_DWORD *)this + 253) )
    DXGADAPTER::SetModeBehavior(this, v35);
  if ( (unsigned int)(v42 - 20480) <= 5 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v41);
    v43[3] = 5147LL;
LABEL_271:
    WdLogEvent5_WdError(v43);
    return 3221225485LL;
  }
  v182.Type = DXGKQAITYPE_DRIVERCAPS;
  v182.pOutputData = (char *)this + 1456;
  v182.OutputDataSize = 576;
  v182.pInputData = 0LL;
  v182.InputDataSize = 0;
  if ( (unsigned int)v42 <= 0x5010 )
  {
    if ( (unsigned int)v42 < 0x4000 )
    {
      if ( (unsigned int)v42 < 0x3000 )
      {
        if ( (unsigned int)v42 < 0x2001 )
        {
          if ( (unsigned int)v42 >= 0x2000 || (unsigned int)v42 < 0x104E )
          {
            v43 = (_QWORD *)WdLogNewEntry5_WdError(v41);
            v43[3] = v42;
            goto LABEL_271;
          }
          v182.OutputDataSize = 336;
        }
        else
        {
          v182.OutputDataSize = 528;
        }
      }
      else
      {
        v182.OutputDataSize = 544;
      }
    }
    else
    {
      v182.OutputDataSize = 552;
    }
  }
  else
  {
    v182.OutputDataSize = 576;
  }
  v44 = DXGADAPTER::DdiQueryAdapterInfo(this, &v182, v37);
  v19 = v44;
  if ( v44 < 0 )
  {
    v47 = WdLogNewEntry5_WdError(v45);
    *(_QWORD *)(v47 + 24) = v19;
LABEL_48:
    WdLogEvent5_WdError(v47);
    return (unsigned int)v19;
  }
  v48 = (_DWORD *)((char *)this + 2032);
  *((_DWORD *)this + 508) = 0;
  if ( (unsigned int)v42 >= 0x5010 )
  {
    v184.Type = DXGKQAITYPE_DISPLAY_DRIVERCAPS_EXTENSION;
    v184.pInputData = 0LL;
    v184.InputDataSize = 0;
    v184.pOutputData = (char *)this + 2032;
    v184.OutputDataSize = 4;
    v49 = DXGADAPTER::DdiQueryAdapterInfo(this, &v184, v46);
    if ( v49 < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v51, v50, v52, v53) + 24) = v49;
      *v48 = 0;
    }
  }
  v54 = *((unsigned int *)this + 62);
  v55 = 48 * v54;
  v56 = v54;
  if ( !is_mul_ok(v54, 0x30uLL) )
    v55 = -1LL;
  v57 = operator new[](v55, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 255) = v57;
  if ( !v57 )
  {
    v59 = WdLogNewEntry5_WdLowResource(v58);
    *(_QWORD *)(v59 + 24) = 5385LL;
    WdLogEvent5_WdLowResource(v59);
    return 3221225495LL;
  }
  memset(v57, 0, 48 * v54);
  if ( *((int *)this + 448) < 0x2000 || (unsigned int)v42 < 0x5005 )
    goto LABEL_64;
  *((_DWORD *)this + 512) = 0;
  v62 = 0;
  v127 = 0;
  if ( (_DWORD)v54 )
  {
    while ( 1 )
    {
      LODWORD(v184.hKmdProcessHandle) = 15;
      v185 = &v127;
      v186 = 4;
      v188 = 24;
      v187 = *((_QWORD *)this + 255) + 48LL * v62;
      v63 = DXGADAPTER::DdiQueryAdapterInfo(
              this,
              (const struct _DXGKARG_QUERYADAPTERINFO *)&v184.hKmdProcessHandle,
              v61);
      v65 = v63;
      if ( v63 < 0 )
        break;
      v62 = v127 + 1;
      v60 = *(unsigned __int16 *)(*((_QWORD *)this + 255) + 48LL * v127);
      *((_DWORD *)this + 512) += v60;
      v127 = v62;
      if ( v62 >= (unsigned int)v54 )
        goto LABEL_61;
    }
    v66 = WdLogNewEntry5_WdEvent(v64);
    *(_QWORD *)(v66 + 24) = v65;
    WdLogEvent5_WdEvent(v66);
LABEL_64:
    if ( (_DWORD)v54 )
    {
      v67 = 0LL;
      do
      {
        *(_WORD *)(v67 + *((_QWORD *)this + 255)) = *((_WORD *)this + 766);
        *(_DWORD *)(*((_QWORD *)this + 255) + v67 + 16) ^= (*(_DWORD *)(*((_QWORD *)this + 255) + v67 + 16) ^ (*((_DWORD *)this + 381) >> 7)) & 1;
        *(_DWORD *)(*((_QWORD *)this + 255) + v67 + 16) ^= (*(_DWORD *)(*((_QWORD *)this + 255) + v67 + 16) ^ (*((_DWORD *)this + 381) >> 5)) & 2;
        *(_WORD *)(*((_QWORD *)this + 255) + v67 + 2) = *((_WORD *)this + 764);
        v60 = *((_QWORD *)this + 255);
        *(_QWORD *)(v60 + v67 + 8) = *((_QWORD *)this + 24);
        v67 += 48LL;
        --v56;
      }
      while ( v56 );
    }
    goto LABEL_67;
  }
LABEL_61:
  if ( *((_DWORD *)this + 512) > 0x40u )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v60);
    v43[3] = this;
    v43[4] = 64LL;
    v43[5] = *((unsigned int *)this + 512);
    goto LABEL_271;
  }
  if ( (*((_DWORD *)this + 380) & 1) == 0 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v60);
    v43[3] = this;
    v43[4] = 5450LL;
    goto LABEL_271;
  }
LABEL_67:
  if ( (unsigned int)v42 >= 0x3001 )
  {
    v70 = *((_DWORD *)this + 448);
    if ( v70 != 4096 && v70 != 4608 && v70 != 4864 && v70 != 0x2000 && v70 != 8448 )
    {
      v33 = WdLogNewEntry5_WdError(v60);
      *(_QWORD *)(v33 + 24) = *((int *)this + 448);
      goto LABEL_20;
    }
  }
  else
  {
    *((_DWORD *)this + 448) = 4096;
  }
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v60) + 512) || (v69 = 1, (*((_DWORD *)this + 75) & 8) != 0) )
    v69 = 0;
  *((_BYTE *)this + 2052) = v69;
  if ( v69 )
  {
    v68 = *((unsigned int *)this + 448);
    if ( (int)v68 < 4608
      && (*((_DWORD *)this + 496)
       || *((_DWORD *)this + 497)
       || *((_BYTE *)this + 1992)
       || *((_BYTE *)this + 1993)
       || *((_BYTE *)this + 1994)
       || (*((_DWORD *)this + 377) & 0x10000000) != 0
       || (*((_DWORD *)this + 380) & 0x14) != 0
       || *((_BYTE *)this + 1995)
       || *((_BYTE *)this + 1997)
       || *((_BYTE *)this + 1998)) )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v68);
      v43[3] = 5540LL;
      goto LABEL_271;
    }
    if ( (int)v68 < 4864
      && ((*((_DWORD *)this + 379) & 0x10) != 0
       || (*((_DWORD *)this + 381) & 0x10) != 0
       || *((_BYTE *)this + 1999)
       || *((_DWORD *)this + 500)) )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v68);
      v43[3] = 5555LL;
      goto LABEL_271;
    }
    if ( (int)v68 < 0x2000 && *((_BYTE *)this + 2004) )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v68);
      v43[3] = 5583LL;
      goto LABEL_271;
    }
  }
  if ( (unsigned int)v42 < 0x4000 )
  {
    *((_DWORD *)this + 381) &= ~0x10u;
    *((_BYTE *)this + 1999) = 0;
  }
  if ( (unsigned int)v42 < 0x5011 )
  {
    v68 = *((unsigned int *)this + 75);
    if ( (v68 & 1) != 0 && (*((_DWORD *)this + 381) & 0x10) != 0 && (v68 & 0x1000) != 0 )
      *((_BYTE *)this + 2004) = 1;
  }
  *(_BYTE *)a3 ^= (*(_BYTE *)a3 ^ (4 * *((_BYTE *)this + 1992))) & 4;
  v71 = *(_BYTE *)a3 ^ (*(_BYTE *)a3 ^ (8 * (*((_BYTE *)this + 1998) != 0))) & 8;
  *(_BYTE *)a3 = v71;
  v72 = (v71 ^ (32 * (*((_DWORD *)this + 381) >> 4))) & 0x20 ^ v71;
  *(_BYTE *)a3 = v72;
  v73 = (v72 ^ (*((_BYTE *)this + 1999) << 6)) & 0x40 ^ v72;
  *(_BYTE *)a3 = v73;
  *((_DWORD *)a3 + 1) = *((_DWORD *)this + 373);
  v74 = v73 & 0x7F | (*(_BYTE *)v48 << 7);
  *(_BYTE *)a3 = v74;
  v75 = v74 & 0xEF;
  LOBYTE(v68) = (*((_BYTE *)a3 + 1) ^ *((_BYTE *)this + 2004)) & 1;
  *((_BYTE *)a3 + 1) ^= v68;
  *((_DWORD *)a3 + 2) = *((_DWORD *)this + 448);
  *(_BYTE *)a3 = v75;
  if ( (unsigned int)v42 >= 0x5021 )
    *(_BYTE *)a3 = v75 ^ (v75 ^ (16 * *((_BYTE *)this + 2024))) & 0x10;
  if ( (*(_BYTE *)a3 & 0x40) != 0 )
  {
    if ( (unsigned int)v42 < 0x5005 && (*((_DWORD *)this + 252) || *((_DWORD *)this + 253)) )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v68);
      v43[3] = *((_QWORD *)this + 24);
      goto LABEL_271;
    }
    *((_BYTE *)a3 + 1) ^= (*((_BYTE *)a3 + 1) ^ (2 * *((_BYTE *)this + 2027))) & 2;
  }
  LOBYTE(v68) = (*(_BYTE *)a3 & 0x40) != 0;
  if ( ((*(_BYTE *)a3 & 0x40) != 0 || (*((_BYTE *)a3 + 1) & 1) != 0) && (*(_BYTE *)a3 & 0x20) == 0 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v68);
    v43[3] = *((_QWORD *)this + 24);
    v43[4] = 5659LL;
    goto LABEL_271;
  }
  if ( (*(_BYTE *)a3 & 0x40) != 0 )
  {
    if ( (*((_BYTE *)a3 + 1) & 1) != 0 )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v68);
      v43[3] = *((_QWORD *)this + 24);
      v43[4] = 5666LL;
      goto LABEL_271;
    }
  }
  else if ( (*((_BYTE *)a3 + 1) & 1) != 0 && !*((_DWORD *)this + 253) )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v68);
    v43[3] = *((_QWORD *)this + 24);
    v43[4] = 5674LL;
    goto LABEL_271;
  }
  if ( *((_BYTE *)this + 1994) && (!*((_QWORD *)this + 85) || !*((_QWORD *)this + 86) || !*((_QWORD *)this + 87)) )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v68);
    v43[3] = 5688LL;
    goto LABEL_271;
  }
  if ( (*((_DWORD *)this + 377) & 4) != 0 && !*((_QWORD *)this + 83) )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v68);
    v43[3] = 5695LL;
    goto LABEL_271;
  }
  if ( *((_BYTE *)this + 1997) && (!*((_QWORD *)this + 89) || !*((_QWORD *)this + 90)) )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v68);
    v43[3] = 5703LL;
    goto LABEL_271;
  }
  if ( (unsigned int)v42 < 0x300C && *((_QWORD *)this + 89) && *((_QWORD *)this + 90) )
    *((_BYTE *)this + 1997) = 1;
  *((_WORD *)this + 1027) = 0;
  *((_BYTE *)this + 2056) = 0;
  if ( *((_BYTE *)this + 1996) )
  {
    if ( (unsigned int)v42 < 0x300B )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v68);
      v43[3] = 5724LL;
      goto LABEL_271;
    }
    if ( (unsigned int)v42 >= 0x4000 )
    {
      if ( (_DWORD)v42 == 0x4000 )
      {
        *((_BYTE *)this + 2055) = 1;
      }
      else
      {
        v76 = *((_DWORD *)this + 500);
        if ( !v76 )
        {
          v43 = (_QWORD *)WdLogNewEntry5_WdError(v68);
          v43[3] = 5737LL;
          goto LABEL_271;
        }
        if ( v76 > 8 )
        {
          v43 = (_QWORD *)WdLogNewEntry5_WdError(v68);
          v43[3] = 5742LL;
          goto LABEL_271;
        }
        if ( (unsigned int)v42 > 0x5000 )
          *((_BYTE *)this + 2056) = 1;
      }
    }
    else
    {
      *((_BYTE *)this + 2054) = 1;
    }
    if ( !*((_QWORD *)this + 93) && !*((_QWORD *)this + 109) && !*((_QWORD *)this + 113) )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v68);
      v43[3] = 5757LL;
      goto LABEL_271;
    }
    if ( (unsigned int)v42 > 0x4002 && !*((_QWORD *)this + 97) && !*((_QWORD *)this + 108) && !*((_QWORD *)this + 112) )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v68);
      v43[3] = 5769LL;
      goto LABEL_271;
    }
    if ( !*((_BYTE *)this + 1995) )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v68);
      v43[3] = 5779LL;
      goto LABEL_271;
    }
  }
  v77 = *(_QWORD *)(*((_QWORD *)this + 24) + 64LL);
  if ( !*(_BYTE *)(*(_QWORD *)(v77 + 40) + 133LL) )
  {
    if ( *((int *)this + 448) >= 0x2000 )
    {
      Global = DXGGLOBAL::GetGlobal(v77);
      v79 = 1;
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal(v77);
      v79 = 0;
    }
    LODWORD(v19) = DXGGLOBAL::DeferredInitialize(Global, v79);
    if ( (int)v19 < 0 )
    {
      v47 = WdLogNewEntry5_WdError(v80);
      *(_QWORD *)(v47 + 24) = (int)v19;
      goto LABEL_48;
    }
  }
  v157 = 0;
  DXGADAPTER::Config = 0;
  v145 = 0;
  v163 = 7000;
  v140 = 7000;
  v193 = L"ForceDirectFlip";
  v194 = &v145;
  v196 = &v157;
  v200 = L"DisableOverlays";
  v201 = &v146;
  v158 = 0;
  v146 = 0;
  v162 = 0;
  v147 = 0;
  v160 = 0;
  v134 = 0;
  v130 = 0;
  v128 = 0;
  v131 = 0;
  v129 = 0;
  v159 = 1;
  v132 = 1;
  v182.hKmdProcessHandle = (HANDLE)1395864371;
  v189 = 16LL;
  v190 = 1395864371LL;
  v161 = 0;
  v133 = 0;
  v164 = 0;
  v135 = 0;
  v165 = 0;
  v136 = 0;
  v166 = 0;
  v137 = 0;
  v167 = 0;
  v138 = 0;
  v168 = 0;
  v139 = 0;
  v169 = 1;
  v141 = 1;
  v170 = 0;
  v155 = 0;
  v171 = 0;
  v142 = 0;
  v173 = 0;
  v143 = 0;
  v172 = 0;
  v144 = 0;
  v174 = 0;
  v156 = 0;
  v175 = 1;
  v148 = 1;
  v176 = 0;
  v149 = 0;
  v177 = 0;
  v150 = 0;
  v178 = 0;
  v152 = 0;
  v179 = 0;
  v154 = 0;
  v180 = 0;
  v153 = 0;
  v181 = 0;
  v151 = 0;
  v191 = 0LL;
  v192 = 288;
  v195 = 67108868;
  v197 = 4;
  v198 = 0LL;
  v199 = 288;
  v202 = 67108868;
  v204 = 4;
  v203 = &v158;
  v205 = 0LL;
  v207 = L"EnableOfferReclaimOnDriver";
  v206 = 288;
  v208 = &v132;
  v210 = &v159;
  v214 = L"LeanMemoryLimit";
  v215 = &v189;
  p_hKmdProcessHandle = &v182.hKmdProcessHandle;
  v221 = L"ForceEnableDxgMms2";
  v222 = &v134;
  v224 = &v160;
  v228 = L"ContextNoPatchMode";
  v229 = &v133;
  v231 = &v161;
  v236 = &v128;
  v238 = &v130;
  v243 = &v129;
  v245 = &v131;
  v249 = L"Force32BitFences";
  v250 = &v147;
  v252 = &v162;
  v256 = L"InitialPagingQueueFenceValue";
  v257 = &v140;
  v209 = 67108868;
  v211 = 4;
  v212 = 0LL;
  v213 = 288;
  v216 = 184549387;
  v218 = 8;
  v219 = 0LL;
  v220 = 288;
  v223 = 67108868;
  v225 = 4;
  v226 = 0LL;
  v227 = 288;
  v230 = 67108868;
  v232 = 4;
  v233 = 0LL;
  v234 = 288;
  v235 = L"ForceToMapGpuVa";
  v237 = 67108868;
  v239 = 4;
  v240 = 0LL;
  v241 = 288;
  v242 = L"ForceAccessedPhysically";
  v244 = 67108868;
  v246 = 4;
  v247 = 0LL;
  v248 = 288;
  v251 = 67108868;
  v253 = 4;
  v254 = 0LL;
  v255 = 288;
  v258 = 67108868;
  v259 = &v163;
  v263 = L"ForceInitPagingProcessVaSpace";
  v264 = &v135;
  v266 = &v164;
  v270 = L"DisableGdiContextGpuVa";
  v271 = &v136;
  v273 = &v165;
  v277 = L"DisablePagingContextGpuVa";
  v278 = &v137;
  v280 = &v166;
  v284 = L"DisableMonitoredFenceGpuVa";
  v285 = &v138;
  v287 = &v167;
  v291 = L"ForceExplicitResidencyNotification";
  v292 = &v139;
  v294 = &v168;
  v299 = &v128;
  v301 = &v130;
  v306 = &v129;
  v308 = &v131;
  v312 = L"DriverManagesResidencyOverride";
  v313 = &v141;
  v315 = &v169;
  v260 = 4;
  v261 = 0LL;
  v262 = 288;
  v265 = 67108868;
  v267 = 4;
  v268 = 0LL;
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
  v293 = 67108868;
  v295 = 4;
  v296 = 0LL;
  v297 = 288;
  v298 = L"ForceToMapGpuVa";
  v300 = 67108868;
  v302 = 4;
  v303 = 0LL;
  v304 = 288;
  v305 = L"ForceAccessedPhysically";
  v307 = 67108868;
  v309 = 4;
  v310 = 0LL;
  v311 = 288;
  v314 = 67108868;
  v316 = 4;
  v317 = 0LL;
  v318 = 288;
  v319 = L"GdiPhysicalAdapterIndex";
  v320 = &v155;
  v322 = &v170;
  v326 = L"ForceReplicateGdiContent";
  v327 = &v142;
  v329 = &v171;
  v333 = L"EnableTimedCalls";
  v334 = &v144;
  v336 = &v172;
  v340 = L"CreateGdiPrimaryOnSlaveGpu";
  v341 = &v143;
  v343 = &v173;
  v347 = L"ForceSurpriseRemovalSupport";
  v348 = &v156;
  v350 = &v174;
  v354 = L"EnableDecodeMPO";
  v355 = &v148;
  v357 = &v175;
  v361 = L"DisableBadDriverCheckForHwProtection";
  v362 = &v149;
  v364 = &v176;
  v368 = L"ForceSecondaryMPOSupport";
  v369 = &v150;
  v371 = &v177;
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
  v375 = L"ForceSecondaryIFlipSupport";
  v384 = 67108868;
  v376 = &v152;
  v391 = 67108868;
  v378 = &v178;
  v382 = L"EnablePanelFitterSupport";
  v383 = &v154;
  v385 = &v179;
  v389 = L"EnableMultiPlaneOverlay3DDIs";
  v390 = &v153;
  v392 = &v180;
  v396 = L"DisableSecondaryIFlipSupport";
  v397 = &v151;
  v398 = 67108868;
  v399 = &v181;
  v379 = 4;
  v380 = 0LL;
  v381 = 288;
  v386 = 4;
  v387 = 0LL;
  v388 = 288;
  v393 = 4;
  v394 = 0LL;
  v395 = 288;
  v400 = 4;
  v401 = 0LL;
  v402 = 0;
  memset(v403, 0, sizeof(v403));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v191, 0LL, 0LL);
  v109 = v134 == 0;
  *((_BYTE *)this + 2057) = v132 != 0;
  *((_DWORD *)this + 518) = v133;
  *((_QWORD *)this + 258) = v190;
  v81 = !v109;
  v109 = v128 == 0;
  *((_BYTE *)this + 2076) = v81;
  v82 = !v109;
  v109 = v129 == 0;
  *((_BYTE *)this + 2077) = v82;
  v83 = !v109;
  v109 = v135 == 0;
  *((_BYTE *)this + 2078) = v83;
  v84 = !v109;
  v109 = v136 == 0;
  *((_BYTE *)this + 2080) = v84;
  v85 = !v109;
  v109 = v137 == 0;
  *((_BYTE *)this + 2081) = v85;
  v86 = !v109;
  v109 = v138 == 0;
  *((_BYTE *)this + 2082) = v86;
  v87 = !v109;
  v109 = v139 == 0;
  *((_BYTE *)this + 2083) = v87;
  *((_BYTE *)this + 2079) = !v109;
  v109 = v141 == 0;
  *((_DWORD *)this + 524) = v140;
  *((_BYTE *)this + 2084) = !v109;
  if ( v142 || (v88 = 0, (*((_DWORD *)this + 381) & 0x100) != 0) )
    v88 = 1;
  v109 = v143 == 0;
  *((_BYTE *)this + 2058) = v88;
  v89 = !v109;
  v109 = v144 == 0;
  *((_BYTE *)this + 2059) = v89;
  DXGADAPTER::Config ^= (DXGADAPTER::Config ^ !v109) & 1;
  if ( v145 )
    *((_BYTE *)this + 1995) = 1;
  if ( v146 )
    *((_BYTE *)this + 1996) = 0;
  if ( v147 )
    *((_DWORD *)this + 380) |= 0x20u;
  if ( *((_BYTE *)this + 1996) )
  {
    if ( *((_BYTE *)this + 2054) )
      *((_DWORD *)this + 500) = 2;
  }
  else
  {
    *((_DWORD *)this + 500) = 1;
  }
  v90 = *((_BYTE *)this + 2057);
  if ( *((int *)this + 448) < 4608 )
    v90 = 0;
  *((_BYTE *)this + 2057) = v90;
  if ( !DXGADAPTER::IsDxgmms2(this) )
    *((_BYTE *)this + 2084) = 0;
  if ( !v148 || (v92 = 1, !v91) )
    v92 = 0;
  v109 = v149 == 0;
  *((_BYTE *)this + 2085) = v92;
  *((_BYTE *)this + 2086) = !v109;
  if ( !v91 || (v93 = 1, !v150) )
    v93 = 0;
  *((_BYTE *)this + 2087) = v93;
  *((_BYTE *)this + 2088) = 0;
  if ( !v151 && (*((_DWORD *)this + 379) & 0x10) != 0 )
  {
    v94 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 24) + 64LL) + 40LL) + 28LL);
    if ( v94 < 0x6000 )
    {
      if ( v94 >= 0x5006 )
        *((_BYTE *)this + 2088) = v152 != 0;
    }
    else
    {
      *((_BYTE *)this + 2088) = 1;
    }
  }
  if ( !v153
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 24) + 64LL) + 40LL) + 28LL) < 0x6002u
    || (v95 = 1, !*((_QWORD *)this + 113)) )
  {
    v95 = 0;
  }
  *((_BYTE *)this + 2090) = v95;
  if ( v91 && !v95 && !*((_QWORD *)this + 93) && !*((_QWORD *)this + 109) )
    *((_BYTE *)this + 1996) = 0;
  if ( !v154 || (v109 = v95 == 0, v96 = 1, v109) )
    v96 = 0;
  *((_BYTE *)this + 2089) = v96;
  if ( *((_DWORD *)this + 62) > 1u )
    *((_DWORD *)this + 539) = v155;
  if ( v156 )
    *(_BYTE *)a3 |= 0x10u;
  DXGADAPTER::InitializeDriverWorkarounds(this);
  v97 = (__int64 *)((char *)this + 2136);
  RenderCore = ADAPTER_RENDER::CreateRenderCore(this, (struct ADAPTER_RENDER **)this + 267);
  v100 = RenderCore;
  if ( RenderCore < 0 )
  {
    if ( *v97 )
    {
      v101 = WdLogNewEntry5_WdAssertion(v99);
      *(_QWORD *)(v101 + 24) = 6010LL;
      WdLogEvent5_WdAssertion(v101);
    }
    v102 = WdLogNewEntry5_WdError(v99);
    *(_QWORD *)(v102 + 24) = this;
    *(_QWORD *)(v102 + 32) = v100;
    WdLogEvent5_WdError(v102);
    return (unsigned int)v100;
  }
  v103 = (_QWORD *)((char *)this + 2128);
  DisplayCore = ADAPTER_DISPLAY::CreateDisplayCore(this, (struct ADAPTER_DISPLAY **)this + 266);
  v106 = DisplayCore;
  if ( DisplayCore < 0 )
  {
    if ( *v103 )
    {
      v107 = WdLogNewEntry5_WdAssertion(v105);
      *(_QWORD *)(v107 + 24) = 6026LL;
      WdLogEvent5_WdAssertion(v107);
    }
    v108 = WdLogNewEntry5_WdError(v105);
    *(_QWORD *)(v108 + 24) = this;
    *(_QWORD *)(v108 + 32) = v106;
    WdLogEvent5_WdError(v108);
    return (unsigned int)v106;
  }
  if ( *v97 )
  {
    v109 = *v103 == 0LL;
  }
  else
  {
    v109 = *v103 == 0LL;
    if ( !*v103 )
    {
      v33 = WdLogNewEntry5_WdError(v105);
      *(_QWORD *)(v33 + 24) = this;
      *(_QWORD *)(v33 + 32) = -1073741735LL;
      goto LABEL_20;
    }
  }
  *(_BYTE *)a3 ^= (!v109 ^ *(_BYTE *)a3) & 1;
  *(_BYTE *)a3 ^= (*(_BYTE *)a3 ^ (2 * (*v97 != 0))) & 2;
  if ( !*v97 )
    *((_DWORD *)this + 377) |= 1u;
  if ( DXGADAPTER::IsDxgmms2(this) )
  {
    v112 = *((_DWORD *)this + 75);
    if ( (v112 & 4) == 0
      && (v112 & 8) == 0
      && v110
      && (unsigned int)v42 >= 0x5008
      && (!*((_QWORD *)this + 98) || !*((_QWORD *)this + 110)) )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v111);
      v43[3] = 6073LL;
      goto LABEL_271;
    }
  }
  if ( *((_BYTE *)this + 2052) && DXGADAPTER::IsFullWDDMAdapter(v111) && *((int *)this + 448) >= 4608 )
  {
    if ( !*((_BYTE *)this + 1995) )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v113);
      v43[3] = 6088LL;
      goto LABEL_271;
    }
    goto LABEL_246;
  }
  if ( *((_BYTE *)this + 1995) )
  {
LABEL_246:
    if ( !v110
      || !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v110 + 400) + 8LL) + 704LL))(*(_QWORD *)(v110 + 408)) )
    {
      *(_WORD *)((char *)this + 1995) = 0;
    }
  }
  IsBddFallbackDriver = DXGADAPTER::IsBddFallbackDriver(this);
  v115 = *((_DWORD *)this + 75);
  *((_DWORD *)this + 44) = IsBddFallbackDriver ? 3 : 1;
  if ( (v115 & 0x10) != 0 && !*v103 )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v183);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v183);
    if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v116) + 70) )
    {
      v118 = WdLogNewEntry5_WdError(v117);
      *(_QWORD *)(v118 + 24) = this;
      *(_QWORD *)(v118 + 32) = -1073741735LL;
      WdLogEvent5_WdError(v118);
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)this + 3);
      *((_QWORD *)this + 4) = -1LL;
      *((_QWORD *)DXGGLOBAL::GetGlobal(v117) + 70) = this;
    }
    if ( v183[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v183);
  }
  v119 = DXGADAPTER::InitializePowerManagement(this);
  v121 = v119;
  if ( v119 >= 0 )
  {
    if ( *((_BYTE *)this + 2052) )
    {
      if ( *((int *)this + 448) >= 4864 && DXGADAPTER::IsFullWDDMAdapter(this) )
      {
        v126 = *((_DWORD *)this + 75);
        if ( (v126 & 4) == 0 && (v126 & 0x20) == 0 && (*((_DWORD *)this + 379) & 0x10) == 0 )
        {
          v43 = (_QWORD *)WdLogNewEntry5_WdError(v120);
          v43[3] = 6158LL;
          goto LABEL_271;
        }
      }
    }
  }
  else
  {
    v122 = WdLogNewEntry5_WdError(v120);
    *(_QWORD *)(v122 + 24) = this;
    *(_QWORD *)(v122 + 32) = v121;
    WdLogEvent5_WdError(v122);
  }
  v123 = *v97;
  if ( v123 )
  {
    v124 = DXGGLOBAL::GetGlobal(v120);
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v123 + 376) + 8LL) + 800LL))(
      *(_QWORD *)(v123 + 384),
      (__int64)v124 + 736);
  }
  if ( (*((_DWORD *)this + 75) & 1) != 0 )
  {
    v125 = *(_QWORD *)((char *)this + 268);
    *((_QWORD *)DXGGLOBAL::GetGlobal(v120) + 71) = v125;
  }
  return (unsigned int)v121;
}
