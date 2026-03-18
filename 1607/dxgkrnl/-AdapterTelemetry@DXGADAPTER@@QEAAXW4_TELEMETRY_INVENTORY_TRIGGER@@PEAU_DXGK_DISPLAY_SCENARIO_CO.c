/*
 * XREFs of ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E477C
 * Callers:
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0022B30 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E90EC (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     TraceLoggingProviderEnabled @ 0x1C000B3EC (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000B414 (_TlgKeywordOn.c)
 *     ?VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEA_K11@Z @ 0x1C000F2E8 (-VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEA_K11@Z.c)
 *     _TlgWrite @ 0x1C000F358 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000F3F4 (_TlgCreateWsz.c)
 *     DxgkMiracastQueryMiracastSupportNoLock @ 0x1C000F42C (DxgkMiracastQueryMiracastSupportNoLock.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C009FD58 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 */

void __fastcall DXGADAPTER::AdapterTelemetry(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rcx
  __int16 DriverVersion; // r12
  bool v8; // r13
  __int64 v9; // rcx
  const struct _TlgProvider_t *v10; // r11
  BOOLEAN v11; // al
  TraceLoggingHProvider v12; // r11
  BOOLEAN v13; // al
  const WCHAR *v14; // rdx
  int v15; // r10d
  unsigned __int16 *v16; // rax
  int v17; // ecx
  const struct _TlgProvider_t *v18; // r11
  unsigned int v19; // edx
  int v20; // r10d
  int v21; // eax
  __int64 v22; // rdx
  __int16 v23; // cx
  __int16 v24; // cx
  GUID *p_ActivityId; // r8
  const struct _TlgProvider_t *v26; // r11
  BOOLEAN v27; // al
  TraceLoggingHProvider v28; // r11
  BOOLEAN v29; // al
  const WCHAR *v30; // rdx
  int v31; // r10d
  unsigned __int16 *v32; // rax
  int v33; // ecx
  const struct _TlgProvider_t *v34; // r11
  unsigned int v35; // edx
  int v36; // r10d
  int v37; // eax
  __int64 v38; // rdx
  __int16 v39; // cx
  __int16 v40; // cx
  GUID *v41; // r8
  const struct _TlgProvider_t *v42; // r11
  BOOLEAN v43; // al
  TraceLoggingHProvider v44; // r11
  BOOLEAN v45; // al
  const WCHAR *v46; // rdx
  int v47; // r10d
  unsigned __int16 *v48; // rax
  int v49; // ecx
  const struct _TlgProvider_t *v50; // r11
  unsigned int v51; // edx
  int v52; // r10d
  int v53; // eax
  GUID *v54; // r8
  bool v55; // [rsp+30h] [rbp-D0h]
  __int16 v56; // [rsp+32h] [rbp-CEh] BYREF
  __int16 v57; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v58; // [rsp+36h] [rbp-CAh] BYREF
  __int16 v59; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v60; // [rsp+3Ah] [rbp-C6h] BYREF
  __int16 v61; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v62; // [rsp+3Eh] [rbp-C2h] BYREF
  __int16 v63; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v64; // [rsp+42h] [rbp-BEh] BYREF
  __int16 v65; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v66; // [rsp+46h] [rbp-BAh] BYREF
  __int16 v67; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v68; // [rsp+4Ah] [rbp-B6h] BYREF
  __int16 v69; // [rsp+4Ch] [rbp-B4h] BYREF
  __int16 v70; // [rsp+4Eh] [rbp-B2h] BYREF
  __int16 v71; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v72; // [rsp+52h] [rbp-AEh] BYREF
  __int16 v73; // [rsp+54h] [rbp-ACh] BYREF
  __int16 v74; // [rsp+56h] [rbp-AAh] BYREF
  unsigned int v75; // [rsp+58h] [rbp-A8h] BYREF
  int v76; // [rsp+5Ch] [rbp-A4h] BYREF
  volatile unsigned int v77; // [rsp+60h] [rbp-A0h] BYREF
  int v78; // [rsp+64h] [rbp-9Ch] BYREF
  int v79; // [rsp+68h] [rbp-98h] BYREF
  int v80; // [rsp+6Ch] [rbp-94h] BYREF
  int v81; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v82; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v83; // [rsp+78h] [rbp-88h] BYREF
  BOOL v84; // [rsp+7Ch] [rbp-84h] BYREF
  BOOL v85; // [rsp+80h] [rbp-80h] BYREF
  int v86; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v87; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v88; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v89; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v90; // [rsp+94h] [rbp-6Ch] BYREF
  int v91; // [rsp+98h] [rbp-68h] BYREF
  int v92; // [rsp+9Ch] [rbp-64h] BYREF
  volatile unsigned int v93; // [rsp+A0h] [rbp-60h] BYREF
  int v94; // [rsp+A4h] [rbp-5Ch] BYREF
  int v95; // [rsp+A8h] [rbp-58h] BYREF
  int v96; // [rsp+ACh] [rbp-54h] BYREF
  int v97; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v98; // [rsp+B4h] [rbp-4Ch] BYREF
  unsigned int v99; // [rsp+B8h] [rbp-48h] BYREF
  BOOL v100; // [rsp+BCh] [rbp-44h] BYREF
  BOOL v101; // [rsp+C0h] [rbp-40h] BYREF
  int v102; // [rsp+C4h] [rbp-3Ch] BYREF
  unsigned int v103; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v104; // [rsp+CCh] [rbp-34h] BYREF
  unsigned int v105; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v106; // [rsp+D4h] [rbp-2Ch] BYREF
  int v107; // [rsp+D8h] [rbp-28h] BYREF
  int v108; // [rsp+DCh] [rbp-24h] BYREF
  volatile unsigned int v109; // [rsp+E0h] [rbp-20h] BYREF
  int v110; // [rsp+E4h] [rbp-1Ch] BYREF
  int v111; // [rsp+E8h] [rbp-18h] BYREF
  int v112; // [rsp+ECh] [rbp-14h] BYREF
  int v113; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v114; // [rsp+F4h] [rbp-Ch] BYREF
  unsigned int v115; // [rsp+F8h] [rbp-8h] BYREF
  BOOL v116; // [rsp+FCh] [rbp-4h] BYREF
  BOOL v117; // [rsp+100h] [rbp+0h] BYREF
  int v118; // [rsp+104h] [rbp+4h] BYREF
  unsigned int v119; // [rsp+108h] [rbp+8h] BYREF
  unsigned int v120; // [rsp+10Ch] [rbp+Ch] BYREF
  unsigned int v121; // [rsp+110h] [rbp+10h] BYREF
  unsigned int v122; // [rsp+114h] [rbp+14h] BYREF
  int v123; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int64 v124; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v125; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int64 v126; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 v127; // [rsp+138h] [rbp+38h] BYREF
  unsigned __int64 v128; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 v129; // [rsp+148h] [rbp+48h] BYREF
  __int64 v130; // [rsp+150h] [rbp+50h] BYREF
  __int64 v131; // [rsp+158h] [rbp+58h] BYREF
  __int64 v132; // [rsp+160h] [rbp+60h] BYREF
  char v133[8]; // [rsp+168h] [rbp+68h] BYREF
  char v134; // [rsp+170h] [rbp+70h]
  GUID ActivityId; // [rsp+180h] [rbp+80h] BYREF
  EVENT_DATA_DESCRIPTOR v136; // [rsp+190h] [rbp+90h] BYREF
  __int16 *v137; // [rsp+1B0h] [rbp+B0h]
  __int64 v138; // [rsp+1B8h] [rbp+B8h]
  int *v139; // [rsp+1C0h] [rbp+C0h]
  int v140; // [rsp+1C8h] [rbp+C8h]
  int v141; // [rsp+1CCh] [rbp+CCh]
  volatile unsigned int *v142; // [rsp+1D0h] [rbp+D0h]
  int v143; // [rsp+1D8h] [rbp+D8h]
  int v144; // [rsp+1DCh] [rbp+DCh]
  int *v145; // [rsp+1E0h] [rbp+E0h]
  int v146; // [rsp+1E8h] [rbp+E8h]
  int v147; // [rsp+1ECh] [rbp+ECh]
  int *v148; // [rsp+1F0h] [rbp+F0h]
  __int64 v149; // [rsp+1F8h] [rbp+F8h]
  _DWORD *v150; // [rsp+200h] [rbp+100h]
  __int64 v151; // [rsp+208h] [rbp+108h]
  __int64 v152; // [rsp+210h] [rbp+110h]
  _DWORD v153[2]; // [rsp+218h] [rbp+118h] BYREF
  __int64 v154; // [rsp+220h] [rbp+120h]
  __int64 v155; // [rsp+228h] [rbp+128h]
  __int64 v156; // [rsp+230h] [rbp+130h]
  __int64 v157; // [rsp+238h] [rbp+138h]
  __int64 v158; // [rsp+240h] [rbp+140h]
  __int64 v159; // [rsp+248h] [rbp+148h]
  __int64 v160; // [rsp+250h] [rbp+150h]
  __int64 v161; // [rsp+258h] [rbp+158h]
  __int16 *v162; // [rsp+260h] [rbp+160h]
  __int64 v163; // [rsp+268h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR v164; // [rsp+270h] [rbp+170h] BYREF
  __int64 v165; // [rsp+280h] [rbp+180h]
  __int64 v166; // [rsp+288h] [rbp+188h]
  __int64 v167; // [rsp+290h] [rbp+190h]
  __int64 v168; // [rsp+298h] [rbp+198h]
  int *v169; // [rsp+2A0h] [rbp+1A0h]
  __int64 v170; // [rsp+2A8h] [rbp+1A8h]
  int *v171; // [rsp+2B0h] [rbp+1B0h]
  __int64 v172; // [rsp+2B8h] [rbp+1B8h]
  unsigned int *v173; // [rsp+2C0h] [rbp+1C0h]
  __int64 v174; // [rsp+2C8h] [rbp+1C8h]
  unsigned int *v175; // [rsp+2D0h] [rbp+1D0h]
  __int64 v176; // [rsp+2D8h] [rbp+1D8h]
  BOOL *v177; // [rsp+2E0h] [rbp+1E0h]
  __int64 v178; // [rsp+2E8h] [rbp+1E8h]
  BOOL *v179; // [rsp+2F0h] [rbp+1F0h]
  __int64 v180; // [rsp+2F8h] [rbp+1F8h]
  int *v181; // [rsp+300h] [rbp+200h]
  __int64 v182; // [rsp+308h] [rbp+208h]
  unsigned int *v183; // [rsp+310h] [rbp+210h]
  __int64 v184; // [rsp+318h] [rbp+218h]
  unsigned int *v185; // [rsp+320h] [rbp+220h]
  __int64 v186; // [rsp+328h] [rbp+228h]
  unsigned int *v187; // [rsp+330h] [rbp+230h]
  __int64 v188; // [rsp+338h] [rbp+238h]
  unsigned int *v189; // [rsp+340h] [rbp+240h]
  __int64 v190; // [rsp+348h] [rbp+248h]
  __int16 *v191; // [rsp+350h] [rbp+250h]
  __int64 v192; // [rsp+358h] [rbp+258h]
  __int64 *v193; // [rsp+360h] [rbp+260h]
  __int64 v194; // [rsp+368h] [rbp+268h]
  __int16 *v195; // [rsp+370h] [rbp+270h]
  __int64 v196; // [rsp+378h] [rbp+278h]
  __int16 *v197; // [rsp+380h] [rbp+280h]
  __int64 v198; // [rsp+388h] [rbp+288h]
  int *v199; // [rsp+390h] [rbp+290h]
  __int64 v200; // [rsp+398h] [rbp+298h]
  unsigned __int64 *v201; // [rsp+3A0h] [rbp+2A0h]
  __int64 v202; // [rsp+3A8h] [rbp+2A8h]
  unsigned __int64 *v203; // [rsp+3B0h] [rbp+2B0h]
  __int64 v204; // [rsp+3B8h] [rbp+2B8h]
  unsigned __int64 *v205; // [rsp+3C0h] [rbp+2C0h]
  __int64 v206; // [rsp+3C8h] [rbp+2C8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int16 *v208; // [rsp+3F0h] [rbp+2F0h]
  __int64 v209; // [rsp+3F8h] [rbp+2F8h]
  int *v210; // [rsp+400h] [rbp+300h]
  int v211; // [rsp+408h] [rbp+308h]
  int v212; // [rsp+40Ch] [rbp+30Ch]
  volatile unsigned int *v213; // [rsp+410h] [rbp+310h]
  int v214; // [rsp+418h] [rbp+318h]
  int v215; // [rsp+41Ch] [rbp+31Ch]
  int *v216; // [rsp+420h] [rbp+320h]
  int v217; // [rsp+428h] [rbp+328h]
  int v218; // [rsp+42Ch] [rbp+32Ch]
  int *v219; // [rsp+430h] [rbp+330h]
  __int64 v220; // [rsp+438h] [rbp+338h]
  _DWORD *v221; // [rsp+440h] [rbp+340h]
  __int64 v222; // [rsp+448h] [rbp+348h]
  __int64 v223; // [rsp+450h] [rbp+350h]
  _DWORD v224[2]; // [rsp+458h] [rbp+358h] BYREF
  __int64 v225; // [rsp+460h] [rbp+360h]
  __int64 v226; // [rsp+468h] [rbp+368h]
  __int64 v227; // [rsp+470h] [rbp+370h]
  __int64 v228; // [rsp+478h] [rbp+378h]
  __int64 v229; // [rsp+480h] [rbp+380h]
  __int64 v230; // [rsp+488h] [rbp+388h]
  __int64 v231; // [rsp+490h] [rbp+390h]
  __int64 v232; // [rsp+498h] [rbp+398h]
  __int16 *v233; // [rsp+4A0h] [rbp+3A0h]
  __int64 v234; // [rsp+4A8h] [rbp+3A8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+4B0h] [rbp+3B0h] BYREF
  __int64 v236; // [rsp+4C0h] [rbp+3C0h]
  __int64 v237; // [rsp+4C8h] [rbp+3C8h]
  __int64 v238; // [rsp+4D0h] [rbp+3D0h]
  __int64 v239; // [rsp+4D8h] [rbp+3D8h]
  int *v240; // [rsp+4E0h] [rbp+3E0h]
  __int64 v241; // [rsp+4E8h] [rbp+3E8h]
  int *v242; // [rsp+4F0h] [rbp+3F0h]
  __int64 v243; // [rsp+4F8h] [rbp+3F8h]
  unsigned int *v244; // [rsp+500h] [rbp+400h]
  __int64 v245; // [rsp+508h] [rbp+408h]
  unsigned int *v246; // [rsp+510h] [rbp+410h]
  __int64 v247; // [rsp+518h] [rbp+418h]
  BOOL *v248; // [rsp+520h] [rbp+420h]
  __int64 v249; // [rsp+528h] [rbp+428h]
  BOOL *v250; // [rsp+530h] [rbp+430h]
  __int64 v251; // [rsp+538h] [rbp+438h]
  int *v252; // [rsp+540h] [rbp+440h]
  __int64 v253; // [rsp+548h] [rbp+448h]
  unsigned int *v254; // [rsp+550h] [rbp+450h]
  __int64 v255; // [rsp+558h] [rbp+458h]
  unsigned int *v256; // [rsp+560h] [rbp+460h]
  __int64 v257; // [rsp+568h] [rbp+468h]
  unsigned int *v258; // [rsp+570h] [rbp+470h]
  __int64 v259; // [rsp+578h] [rbp+478h]
  unsigned int *v260; // [rsp+580h] [rbp+480h]
  __int64 v261; // [rsp+588h] [rbp+488h]
  __int16 *v262; // [rsp+590h] [rbp+490h]
  __int64 v263; // [rsp+598h] [rbp+498h]
  __int64 *v264; // [rsp+5A0h] [rbp+4A0h]
  __int64 v265; // [rsp+5A8h] [rbp+4A8h]
  __int16 *v266; // [rsp+5B0h] [rbp+4B0h]
  __int64 v267; // [rsp+5B8h] [rbp+4B8h]
  __int16 *v268; // [rsp+5C0h] [rbp+4C0h]
  __int64 v269; // [rsp+5C8h] [rbp+4C8h]
  int *v270; // [rsp+5D0h] [rbp+4D0h]
  __int64 v271; // [rsp+5D8h] [rbp+4D8h]
  unsigned __int64 *v272; // [rsp+5E0h] [rbp+4E0h]
  __int64 v273; // [rsp+5E8h] [rbp+4E8h]
  unsigned __int64 *v274; // [rsp+5F0h] [rbp+4F0h]
  __int64 v275; // [rsp+5F8h] [rbp+4F8h]
  unsigned __int64 *v276; // [rsp+600h] [rbp+500h]
  __int64 v277; // [rsp+608h] [rbp+508h]
  __int16 *v278; // [rsp+610h] [rbp+510h]
  __int64 v279; // [rsp+618h] [rbp+518h]
  __int16 *v280; // [rsp+620h] [rbp+520h]
  __int64 v281; // [rsp+628h] [rbp+528h]
  EVENT_DATA_DESCRIPTOR v282; // [rsp+630h] [rbp+530h] BYREF
  __int16 *v283; // [rsp+650h] [rbp+550h]
  __int64 v284; // [rsp+658h] [rbp+558h]
  int *v285; // [rsp+660h] [rbp+560h]
  int v286; // [rsp+668h] [rbp+568h]
  int v287; // [rsp+66Ch] [rbp+56Ch]
  volatile unsigned int *v288; // [rsp+670h] [rbp+570h]
  int v289; // [rsp+678h] [rbp+578h]
  int v290; // [rsp+67Ch] [rbp+57Ch]
  int *v291; // [rsp+680h] [rbp+580h]
  int v292; // [rsp+688h] [rbp+588h]
  int v293; // [rsp+68Ch] [rbp+58Ch]
  int *v294; // [rsp+690h] [rbp+590h]
  __int64 v295; // [rsp+698h] [rbp+598h]
  _DWORD *v296; // [rsp+6A0h] [rbp+5A0h]
  __int64 v297; // [rsp+6A8h] [rbp+5A8h]
  __int64 v298; // [rsp+6B0h] [rbp+5B0h]
  _DWORD v299[2]; // [rsp+6B8h] [rbp+5B8h] BYREF
  __int64 v300; // [rsp+6C0h] [rbp+5C0h]
  __int64 v301; // [rsp+6C8h] [rbp+5C8h]
  __int64 v302; // [rsp+6D0h] [rbp+5D0h]
  __int64 v303; // [rsp+6D8h] [rbp+5D8h]
  __int64 v304; // [rsp+6E0h] [rbp+5E0h]
  __int64 v305; // [rsp+6E8h] [rbp+5E8h]
  __int64 v306; // [rsp+6F0h] [rbp+5F0h]
  __int64 v307; // [rsp+6F8h] [rbp+5F8h]
  __int16 *v308; // [rsp+700h] [rbp+600h]
  __int64 v309; // [rsp+708h] [rbp+608h]
  struct _EVENT_DATA_DESCRIPTOR v310; // [rsp+710h] [rbp+610h] BYREF
  __int64 v311; // [rsp+720h] [rbp+620h]
  __int64 v312; // [rsp+728h] [rbp+628h]
  __int64 v313; // [rsp+730h] [rbp+630h]
  __int64 v314; // [rsp+738h] [rbp+638h]
  int *v315; // [rsp+740h] [rbp+640h]
  __int64 v316; // [rsp+748h] [rbp+648h]
  int *v317; // [rsp+750h] [rbp+650h]
  __int64 v318; // [rsp+758h] [rbp+658h]
  unsigned int *v319; // [rsp+760h] [rbp+660h]
  __int64 v320; // [rsp+768h] [rbp+668h]
  unsigned int *v321; // [rsp+770h] [rbp+670h]
  __int64 v322; // [rsp+778h] [rbp+678h]
  BOOL *v323; // [rsp+780h] [rbp+680h]
  __int64 v324; // [rsp+788h] [rbp+688h]
  BOOL *v325; // [rsp+790h] [rbp+690h]
  __int64 v326; // [rsp+798h] [rbp+698h]
  int *v327; // [rsp+7A0h] [rbp+6A0h]
  __int64 v328; // [rsp+7A8h] [rbp+6A8h]
  unsigned int *v329; // [rsp+7B0h] [rbp+6B0h]
  __int64 v330; // [rsp+7B8h] [rbp+6B8h]
  unsigned int *v331; // [rsp+7C0h] [rbp+6C0h]
  __int64 v332; // [rsp+7C8h] [rbp+6C8h]
  unsigned int *v333; // [rsp+7D0h] [rbp+6D0h]
  __int64 v334; // [rsp+7D8h] [rbp+6D8h]
  unsigned int *v335; // [rsp+7E0h] [rbp+6E0h]
  __int64 v336; // [rsp+7E8h] [rbp+6E8h]
  __int16 *v337; // [rsp+7F0h] [rbp+6F0h]
  __int64 v338; // [rsp+7F8h] [rbp+6F8h]
  __int64 *v339; // [rsp+800h] [rbp+700h]
  __int64 v340; // [rsp+808h] [rbp+708h]
  __int16 *v341; // [rsp+810h] [rbp+710h]
  __int64 v342; // [rsp+818h] [rbp+718h]
  __int16 *v343; // [rsp+820h] [rbp+720h]
  __int64 v344; // [rsp+828h] [rbp+728h]
  int *v345; // [rsp+830h] [rbp+730h]
  __int64 v346; // [rsp+838h] [rbp+738h]
  __int16 *v347; // [rsp+840h] [rbp+740h]
  __int64 v348; // [rsp+848h] [rbp+748h]
  __int16 *v349; // [rsp+850h] [rbp+750h]
  __int64 v350; // [rsp+858h] [rbp+758h]

  DriverVersion = DXGADAPTER::GetDriverVersion((DXGADAPTER *)a1);
  v8 = *(_QWORD *)(v6 + 776) != 0LL;
  v55 = *(_DWORD *)(v6 + 248) > 1u;
  DXGADAPTER::GetAdapterType((DXGADAPTER *)v6, (BOOL *)&v75);
  EtwActivityIdControl(3u, &ActivityId);
  DxgkMiracastQueryMiracastSupportNoLock((__int64)v133);
  v9 = *(_QWORD *)(a1 + 2136);
  if ( v9 )
  {
    if ( *(_QWORD *)(a1 + 2128) )
    {
      v127 = 0LL;
      v128 = 0LL;
      v129 = 0LL;
      VIDMM_EXPORT::VidMmGetTotalSegmentSize(
        *(VIDMM_EXPORT **)(v9 + 400),
        *(struct VIDMM_GLOBAL **)(v9 + 408),
        &v127,
        &v128,
        &v129);
      ++DXGADAPTER::sTelemetrySeqId;
      if ( (unsigned int)dword_1C00568C0 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C00568C0, 0x800000000004uLL) )
      {
        v208 = &v68;
        v68 = 2;
        v209 = 2LL;
        v212 = 0;
        v108 = MEMORY[0xFFFFF780000002C4];
        v210 = &v108;
        v215 = 0;
        v109 = DXGADAPTER::sTelemetrySeqId;
        v213 = &v109;
        v211 = 4;
        v214 = 4;
        v11 = TraceLoggingProviderEnabled(v10, 0, 0x400000000000uLL);
        v218 = 0;
        v110 = v11;
        v216 = &v110;
        v217 = 4;
        v13 = TraceLoggingProviderEnabled(v12, 0, 0x200000000000uLL);
        v14 = *(const WCHAR **)(a1 + 1144);
        v15 = v13;
        v219 = &v111;
        v16 = *(unsigned __int16 **)(a1 + 1072);
        v111 = v15;
        v221 = v224;
        v220 = 4LL;
        v222 = 2LL;
        v17 = *v16;
        v223 = *((_QWORD *)v16 + 1);
        v225 = a1 + 276;
        v227 = a1 + 280;
        v229 = a1 + 284;
        v231 = a1 + 288;
        v69 = *(_WORD *)(a1 + 292);
        v224[0] = v17;
        v233 = &v69;
        v224[1] = 0;
        v226 = 4LL;
        v228 = 4LL;
        v230 = 4LL;
        v232 = 4LL;
        v234 = 2LL;
        TlgCreateWsz(&pDesc, v14);
        v19 = *(_DWORD *)(a1 + 300);
        v238 = a1 + 1160;
        v237 = 8LL;
        v236 = a1 + 1152;
        v112 = (v19 >> 6) & 1;
        v240 = &v112;
        v239 = 4LL;
        v21 = v20;
        v241 = 4LL;
        LOBYTE(v21) = v134 == (char)v20;
        v243 = 4LL;
        v113 = v21;
        v242 = &v113;
        v114 = (v75 >> 4) & 1;
        v245 = 4LL;
        v244 = &v114;
        v247 = 4LL;
        v115 = (v75 >> 5) & 1;
        v246 = &v115;
        v116 = v8;
        v248 = &v116;
        v117 = v55;
        v250 = &v117;
        v252 = &v118;
        v249 = 4LL;
        v119 = (v75 >> 3) & 1;
        v254 = &v119;
        v251 = 4LL;
        v120 = (v75 >> 2) & 1;
        v256 = &v120;
        v121 = v75 & 1;
        v122 = (v75 >> 1) & 1;
        v118 = (v19 >> 7) & 1;
        v260 = &v122;
        v262 = &v70;
        v132 = *(_QWORD *)(a1 + 268);
        v264 = &v132;
        v71 = *(_WORD *)(a1 + 1984);
        v266 = &v71;
        v72 = *(_WORD *)(a1 + 1988);
        v253 = 4LL;
        v255 = 4LL;
        v257 = 4LL;
        v258 = &v121;
        v259 = 4LL;
        v261 = 4LL;
        v70 = DriverVersion;
        v263 = 2LL;
        v265 = 8LL;
        v267 = 2LL;
        v22 = *(_QWORD *)(a1 + 2128);
        v268 = &v72;
        v270 = &v123;
        v272 = &v127;
        v274 = &v128;
        v276 = &v129;
        v269 = 2LL;
        v123 = a2;
        v271 = 4LL;
        v273 = 8LL;
        v275 = 8LL;
        v277 = 8LL;
        v23 = *(_WORD *)(*(_QWORD *)(v22 + 16) + 1008LL);
        v278 = &v73;
        v73 = v23;
        v279 = 2LL;
        v24 = *(_WORD *)(*(_QWORD *)(v22 + 16) + 1012LL);
        v280 = &v74;
        v74 = v24;
        v281 = 2LL;
        p_ActivityId = (GUID *)(a3 + 8);
        if ( !a3 )
          p_ActivityId = &ActivityId;
        TlgWrite(v18, &unk_1C0039769, p_ActivityId, (LPCGUID)1, 0x26u, &pData);
      }
    }
    else
    {
      v124 = 0LL;
      v125 = 0LL;
      v126 = 0LL;
      VIDMM_EXPORT::VidMmGetTotalSegmentSize(
        *(VIDMM_EXPORT **)(v9 + 400),
        *(struct VIDMM_GLOBAL **)(v9 + 408),
        &v124,
        &v125,
        &v126);
      ++DXGADAPTER::sTelemetrySeqId;
      if ( (unsigned int)dword_1C00568C0 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C00568C0, 0x800000000004uLL) )
      {
        v137 = &v63;
        v63 = 2;
        v138 = 2LL;
        v141 = 0;
        v92 = MEMORY[0xFFFFF780000002C4];
        v139 = &v92;
        v144 = 0;
        v93 = DXGADAPTER::sTelemetrySeqId;
        v142 = &v93;
        v140 = 4;
        v143 = 4;
        v43 = TraceLoggingProviderEnabled(v42, 0, 0x400000000000uLL);
        v147 = 0;
        v94 = v43;
        v145 = &v94;
        v146 = 4;
        v45 = TraceLoggingProviderEnabled(v44, 0, 0x200000000000uLL);
        v46 = *(const WCHAR **)(a1 + 1144);
        v47 = v45;
        v148 = &v95;
        v48 = *(unsigned __int16 **)(a1 + 1072);
        v95 = v47;
        v150 = v153;
        v149 = 4LL;
        v151 = 2LL;
        v49 = *v48;
        v152 = *((_QWORD *)v48 + 1);
        v154 = a1 + 276;
        v156 = a1 + 280;
        v158 = a1 + 284;
        v160 = a1 + 288;
        v64 = *(_WORD *)(a1 + 292);
        v153[0] = v49;
        v162 = &v64;
        v153[1] = 0;
        v155 = 4LL;
        v157 = 4LL;
        v159 = 4LL;
        v161 = 4LL;
        v163 = 2LL;
        TlgCreateWsz(&v164, v46);
        v51 = *(_DWORD *)(a1 + 300);
        v167 = a1 + 1160;
        v166 = 8LL;
        v165 = a1 + 1152;
        v96 = (v51 >> 6) & 1;
        v169 = &v96;
        v168 = 4LL;
        v53 = v52;
        v170 = 4LL;
        LOBYTE(v53) = v134 == (char)v52;
        v172 = 4LL;
        v97 = v53;
        v171 = &v97;
        v98 = (v75 >> 4) & 1;
        v174 = 4LL;
        v173 = &v98;
        v176 = 4LL;
        v99 = (v75 >> 5) & 1;
        v175 = &v99;
        v100 = v8;
        v177 = &v100;
        v101 = v55;
        v179 = &v101;
        v181 = &v102;
        v178 = 4LL;
        v103 = (v75 >> 3) & 1;
        v183 = &v103;
        v180 = 4LL;
        v104 = (v75 >> 2) & 1;
        v185 = &v104;
        v105 = v75 & 1;
        v106 = (v75 >> 1) & 1;
        v102 = (v51 >> 7) & 1;
        v189 = &v106;
        v191 = &v65;
        v131 = *(_QWORD *)(a1 + 268);
        v193 = &v131;
        v66 = *(_WORD *)(a1 + 1984);
        v195 = &v66;
        v67 = *(_WORD *)(a1 + 1988);
        v182 = 4LL;
        v184 = 4LL;
        v186 = 4LL;
        v187 = &v105;
        v188 = 4LL;
        v190 = 4LL;
        v65 = DriverVersion;
        v192 = 2LL;
        v194 = 8LL;
        v196 = 2LL;
        v198 = 2LL;
        v197 = &v67;
        v199 = &v107;
        v201 = &v124;
        v203 = &v125;
        v205 = &v126;
        v107 = a2;
        v200 = 4LL;
        v202 = 8LL;
        v204 = 8LL;
        v206 = 8LL;
        v54 = (GUID *)(a3 + 8);
        if ( !a3 )
          v54 = &ActivityId;
        TlgWrite(v50, &unk_1C00399C1, v54, (LPCGUID)1, 0x24u, &v136);
      }
    }
  }
  else if ( *(_QWORD *)(a1 + 2128) )
  {
    ++DXGADAPTER::sTelemetrySeqId;
    if ( (unsigned int)dword_1C00568C0 > 5 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C00568C0, 0x800000000004uLL) )
      {
        v283 = &v56;
        v56 = 2;
        v284 = 2LL;
        v287 = 0;
        v76 = MEMORY[0xFFFFF780000002C4];
        v285 = &v76;
        v290 = 0;
        v77 = DXGADAPTER::sTelemetrySeqId;
        v288 = &v77;
        v286 = 4;
        v289 = 4;
        v27 = TraceLoggingProviderEnabled(v26, 0, 0x400000000000uLL);
        v293 = 0;
        v78 = v27;
        v291 = &v78;
        v292 = 4;
        v29 = TraceLoggingProviderEnabled(v28, 0, 0x200000000000uLL);
        v30 = *(const WCHAR **)(a1 + 1144);
        v31 = v29;
        v294 = &v79;
        v32 = *(unsigned __int16 **)(a1 + 1072);
        v79 = v31;
        v296 = v299;
        v295 = 4LL;
        v297 = 2LL;
        v33 = *v32;
        v298 = *((_QWORD *)v32 + 1);
        v300 = a1 + 276;
        v302 = a1 + 280;
        v304 = a1 + 284;
        v306 = a1 + 288;
        v57 = *(_WORD *)(a1 + 292);
        v299[0] = v33;
        v308 = &v57;
        v299[1] = 0;
        v301 = 4LL;
        v303 = 4LL;
        v305 = 4LL;
        v307 = 4LL;
        v309 = 2LL;
        TlgCreateWsz(&v310, v30);
        v35 = *(_DWORD *)(a1 + 300);
        v313 = a1 + 1160;
        v312 = 8LL;
        v311 = a1 + 1152;
        v80 = (v35 >> 6) & 1;
        v315 = &v80;
        v314 = 4LL;
        v37 = v36;
        v316 = 4LL;
        LOBYTE(v37) = v134 == (char)v36;
        v318 = 4LL;
        v81 = v37;
        v317 = &v81;
        v82 = (v75 >> 4) & 1;
        v320 = 4LL;
        v319 = &v82;
        v322 = 4LL;
        v83 = (v75 >> 5) & 1;
        v321 = &v83;
        v84 = v8;
        v323 = &v84;
        v85 = v55;
        v325 = &v85;
        v327 = &v86;
        v324 = 4LL;
        v87 = (v75 >> 3) & 1;
        v329 = &v87;
        v326 = 4LL;
        v88 = (v75 >> 2) & 1;
        v331 = &v88;
        v89 = v75 & 1;
        v90 = (v75 >> 1) & 1;
        v86 = (v35 >> 7) & 1;
        v335 = &v90;
        v337 = &v58;
        v130 = *(_QWORD *)(a1 + 268);
        v339 = &v130;
        v59 = *(_WORD *)(a1 + 1984);
        v341 = &v59;
        v60 = *(_WORD *)(a1 + 1988);
        v328 = 4LL;
        v330 = 4LL;
        v332 = 4LL;
        v333 = &v89;
        v334 = 4LL;
        v336 = 4LL;
        v58 = DriverVersion;
        v338 = 2LL;
        v340 = 8LL;
        v342 = 2LL;
        v38 = *(_QWORD *)(a1 + 2128);
        v343 = &v60;
        v345 = &v91;
        v344 = 2LL;
        v91 = a2;
        v346 = 4LL;
        v39 = *(_WORD *)(*(_QWORD *)(v38 + 16) + 1008LL);
        v347 = &v61;
        v61 = v39;
        v348 = 2LL;
        v40 = *(_WORD *)(*(_QWORD *)(v38 + 16) + 1012LL);
        v349 = &v62;
        v62 = v40;
        v350 = 2LL;
        v41 = (GUID *)(a3 + 8);
        if ( !a3 )
          v41 = &ActivityId;
        TlgWrite(v34, &unk_1C0039BF7, v41, (LPCGUID)1, 0x23u, &v282);
      }
    }
  }
}
