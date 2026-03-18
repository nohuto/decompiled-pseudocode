/*
 * XREFs of ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0041A94
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C0041798 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     __chkstk_0 @ 0x1C0008166 (__chkstk_0.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?ReadMigrationConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0043B9C (-ReadMigrationConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadPreparationPeriodConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0043DA8 (-ReadPreparationPeriodConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadUnusedAllocationConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0043FBC (-ReadUnusedAllocationConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadWorkingSetConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0044588 (-ReadWorkingSetConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadCommitLimitInformation@VIDMM_GLOBAL@@KAXXZ @ 0x1C0044668 (-ReadCommitLimitInformation@VIDMM_GLOBAL@@KAXXZ.c)
 */

void VIDMM_GLOBAL::ReadConfiguration(void)
{
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rax
  __int16 v1; // bx
  PPHYSICAL_MEMORY_RANGE v2; // rcx
  __int64 v3; // rax
  LARGE_INTEGER NumberOfBytes; // rax
  int v5; // edx
  __int64 v6; // r8
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned int *v12; // r15
  ULONG v13; // r13d
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // r8d
  int v25; // r9d
  unsigned int v26; // r8d
  int v27; // r12d
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // edx
  int v32; // esi
  unsigned int v33; // r14d
  int v34; // eax
  int v35; // eax
  int v36; // ecx
  int v37; // r8d
  int v38; // r8d
  int v39; // r8d
  unsigned int v40; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v41; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v42; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v43; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v44; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v45; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v46; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v47; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v48; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v49; // [rsp+54h] [rbp-ACh] BYREF
  int v50; // [rsp+58h] [rbp-A8h] BYREF
  int v51; // [rsp+5Ch] [rbp-A4h] BYREF
  int v52; // [rsp+60h] [rbp-A0h] BYREF
  int v53; // [rsp+64h] [rbp-9Ch] BYREF
  int v54; // [rsp+68h] [rbp-98h] BYREF
  int v55; // [rsp+6Ch] [rbp-94h] BYREF
  int v56; // [rsp+70h] [rbp-90h] BYREF
  int v57; // [rsp+74h] [rbp-8Ch] BYREF
  int v58; // [rsp+78h] [rbp-88h] BYREF
  int v59; // [rsp+7Ch] [rbp-84h] BYREF
  int v60; // [rsp+80h] [rbp-80h] BYREF
  int v61; // [rsp+84h] [rbp-7Ch] BYREF
  int v62; // [rsp+88h] [rbp-78h] BYREF
  int v63; // [rsp+8Ch] [rbp-74h] BYREF
  int v64; // [rsp+90h] [rbp-70h] BYREF
  int v65; // [rsp+94h] [rbp-6Ch] BYREF
  int v66; // [rsp+98h] [rbp-68h] BYREF
  int v67; // [rsp+9Ch] [rbp-64h] BYREF
  int v68; // [rsp+A0h] [rbp-60h] BYREF
  int v69; // [rsp+A4h] [rbp-5Ch] BYREF
  int v70; // [rsp+A8h] [rbp-58h] BYREF
  int v71; // [rsp+ACh] [rbp-54h] BYREF
  int v72; // [rsp+B0h] [rbp-50h] BYREF
  int v73; // [rsp+B4h] [rbp-4Ch] BYREF
  int v74; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v75; // [rsp+BCh] [rbp-44h] BYREF
  int v76; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v77; // [rsp+C4h] [rbp-3Ch] BYREF
  unsigned int v78; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v79; // [rsp+CCh] [rbp-34h] BYREF
  int v80; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v81; // [rsp+D4h] [rbp-2Ch] BYREF
  int v82; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v83; // [rsp+DCh] [rbp-24h] BYREF
  int v84; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v85; // [rsp+E4h] [rbp-1Ch] BYREF
  int v86; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v87; // [rsp+ECh] [rbp-14h] BYREF
  int v88; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v89; // [rsp+F4h] [rbp-Ch] BYREF
  int v90; // [rsp+F8h] [rbp-8h] BYREF
  unsigned int v91; // [rsp+FCh] [rbp-4h] BYREF
  int v92; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v93; // [rsp+104h] [rbp+4h] BYREF
  int v94; // [rsp+108h] [rbp+8h] BYREF
  int v95; // [rsp+10Ch] [rbp+Ch] BYREF
  int v96; // [rsp+110h] [rbp+10h] BYREF
  int v97; // [rsp+114h] [rbp+14h] BYREF
  int v98; // [rsp+118h] [rbp+18h] BYREF
  unsigned int v99; // [rsp+11Ch] [rbp+1Ch] BYREF
  int v100; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v101; // [rsp+124h] [rbp+24h] BYREF
  int v102; // [rsp+128h] [rbp+28h] BYREF
  int v103; // [rsp+12Ch] [rbp+2Ch] BYREF
  int v104; // [rsp+130h] [rbp+30h] BYREF
  int v105; // [rsp+134h] [rbp+34h] BYREF
  int v106; // [rsp+138h] [rbp+38h] BYREF
  int v107; // [rsp+13Ch] [rbp+3Ch] BYREF
  int v108; // [rsp+140h] [rbp+40h] BYREF
  int v109; // [rsp+144h] [rbp+44h] BYREF
  int v110; // [rsp+148h] [rbp+48h] BYREF
  int v111; // [rsp+14Ch] [rbp+4Ch] BYREF
  int v112; // [rsp+150h] [rbp+50h] BYREF
  int v113; // [rsp+154h] [rbp+54h] BYREF
  int v114; // [rsp+158h] [rbp+58h] BYREF
  int v115; // [rsp+15Ch] [rbp+5Ch] BYREF
  unsigned int v116; // [rsp+160h] [rbp+60h] BYREF
  int v117; // [rsp+164h] [rbp+64h] BYREF
  int v118; // [rsp+168h] [rbp+68h] BYREF
  int v119; // [rsp+16Ch] [rbp+6Ch] BYREF
  int v120; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v121; // [rsp+174h] [rbp+74h] BYREF
  int v122; // [rsp+178h] [rbp+78h] BYREF
  int v123; // [rsp+17Ch] [rbp+7Ch] BYREF
  int v124; // [rsp+180h] [rbp+80h] BYREF
  int v125; // [rsp+184h] [rbp+84h] BYREF
  int v126; // [rsp+188h] [rbp+88h] BYREF
  int v127; // [rsp+18Ch] [rbp+8Ch] BYREF
  int v128; // [rsp+190h] [rbp+90h] BYREF
  int v129; // [rsp+194h] [rbp+94h] BYREF
  int v130; // [rsp+198h] [rbp+98h] BYREF
  int v131; // [rsp+19Ch] [rbp+9Ch] BYREF
  int v132; // [rsp+1A0h] [rbp+A0h] BYREF
  int v133; // [rsp+1A4h] [rbp+A4h] BYREF
  int v134; // [rsp+1A8h] [rbp+A8h] BYREF
  int v135; // [rsp+1ACh] [rbp+ACh] BYREF
  int v136; // [rsp+1B0h] [rbp+B0h] BYREF
  int v137; // [rsp+1B4h] [rbp+B4h] BYREF
  int v138; // [rsp+1B8h] [rbp+B8h] BYREF
  int v139; // [rsp+1BCh] [rbp+BCh] BYREF
  int v140; // [rsp+1C0h] [rbp+C0h] BYREF
  int v141; // [rsp+1C4h] [rbp+C4h] BYREF
  int v142; // [rsp+1C8h] [rbp+C8h] BYREF
  int v143; // [rsp+1CCh] [rbp+CCh] BYREF
  int v144; // [rsp+1D0h] [rbp+D0h] BYREF
  int v145; // [rsp+1D4h] [rbp+D4h] BYREF
  int v146; // [rsp+1D8h] [rbp+D8h] BYREF
  int v147; // [rsp+1DCh] [rbp+DCh] BYREF
  int v148; // [rsp+1E0h] [rbp+E0h] BYREF
  int v149; // [rsp+1E4h] [rbp+E4h] BYREF
  int v150; // [rsp+1E8h] [rbp+E8h] BYREF
  int v151; // [rsp+1ECh] [rbp+ECh] BYREF
  int v152; // [rsp+1F0h] [rbp+F0h] BYREF
  int v153; // [rsp+1F4h] [rbp+F4h] BYREF
  int v154; // [rsp+1F8h] [rbp+F8h] BYREF
  int v155; // [rsp+1FCh] [rbp+FCh] BYREF
  int v156; // [rsp+200h] [rbp+100h] BYREF
  int v157; // [rsp+204h] [rbp+104h] BYREF
  int v158; // [rsp+208h] [rbp+108h] BYREF
  int v159; // [rsp+20Ch] [rbp+10Ch] BYREF
  int v160; // [rsp+210h] [rbp+110h] BYREF
  int v161; // [rsp+214h] [rbp+114h] BYREF
  int v162; // [rsp+218h] [rbp+118h] BYREF
  int v163; // [rsp+21Ch] [rbp+11Ch] BYREF
  int v164; // [rsp+220h] [rbp+120h] BYREF
  int v165; // [rsp+224h] [rbp+124h] BYREF
  int v166; // [rsp+228h] [rbp+128h] BYREF
  int v167; // [rsp+22Ch] [rbp+12Ch] BYREF
  int v168; // [rsp+230h] [rbp+130h] BYREF
  int v169; // [rsp+234h] [rbp+134h] BYREF
  int v170; // [rsp+238h] [rbp+138h] BYREF
  int v171; // [rsp+23Ch] [rbp+13Ch] BYREF
  int v172; // [rsp+240h] [rbp+140h] BYREF
  int v173; // [rsp+244h] [rbp+144h] BYREF
  int v174; // [rsp+248h] [rbp+148h] BYREF
  int v175; // [rsp+24Ch] [rbp+14Ch] BYREF
  int v176; // [rsp+250h] [rbp+150h] BYREF
  int v177; // [rsp+254h] [rbp+154h] BYREF
  int v178; // [rsp+258h] [rbp+158h] BYREF
  int v179; // [rsp+25Ch] [rbp+15Ch] BYREF
  int v180; // [rsp+260h] [rbp+160h] BYREF
  int v181; // [rsp+264h] [rbp+164h] BYREF
  int v182; // [rsp+268h] [rbp+168h] BYREF
  int v183; // [rsp+26Ch] [rbp+16Ch] BYREF
  int v184; // [rsp+270h] [rbp+170h] BYREF
  int v185; // [rsp+274h] [rbp+174h] BYREF
  int v186; // [rsp+278h] [rbp+178h] BYREF
  int v187; // [rsp+27Ch] [rbp+17Ch] BYREF
  int v188; // [rsp+280h] [rbp+180h] BYREF
  int v189; // [rsp+284h] [rbp+184h] BYREF
  int v190; // [rsp+288h] [rbp+188h] BYREF
  int v191; // [rsp+28Ch] [rbp+18Ch] BYREF
  int v192; // [rsp+290h] [rbp+190h] BYREF
  int v193; // [rsp+294h] [rbp+194h] BYREF
  int v194; // [rsp+298h] [rbp+198h] BYREF
  int v195; // [rsp+29Ch] [rbp+19Ch] BYREF
  int v196; // [rsp+2A0h] [rbp+1A0h] BYREF
  int v197; // [rsp+2A4h] [rbp+1A4h] BYREF
  int v198; // [rsp+2A8h] [rbp+1A8h] BYREF
  int v199; // [rsp+2ACh] [rbp+1ACh] BYREF
  struct _UNICODE_STRING Destination; // [rsp+2B0h] [rbp+1B0h] BYREF
  struct _UNICODE_STRING String; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v202; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 v203; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int128 v204; // [rsp+2E0h] [rbp+1E0h]
  __int128 v205; // [rsp+2F0h] [rbp+1F0h]
  __int128 v206; // [rsp+300h] [rbp+200h]
  __int64 v207; // [rsp+310h] [rbp+210h]
  struct _UNICODE_STRING DestinationString; // [rsp+318h] [rbp+218h] BYREF
  __int64 v209; // [rsp+328h] [rbp+228h] BYREF
  __int64 v210; // [rsp+330h] [rbp+230h]
  __int64 v211; // [rsp+338h] [rbp+238h] BYREF
  __int64 v212; // [rsp+340h] [rbp+240h]
  _OWORD v213[287]; // [rsp+350h] [rbp+250h] BYREF
  char v214; // [rsp+1540h] [rbp+1440h] BYREF
  _WORD v215[32]; // [rsp+1550h] [rbp+1450h] BYREF

  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  HIBYTE(v1) = 0;
  v2 = PhysicalMemoryRanges;
  if ( PhysicalMemoryRanges )
  {
    NumberOfBytes = PhysicalMemoryRanges->NumberOfBytes;
    v5 = 0;
    if ( NumberOfBytes.QuadPart )
    {
      v6 = qword_1C00270F8;
      do
      {
        v6 += NumberOfBytes.QuadPart;
        ++v5;
        qword_1C00270F8 = v6;
        NumberOfBytes = v2[v5].NumberOfBytes;
      }
      while ( NumberOfBytes.QuadPart );
    }
    ExFreePoolWithTag(v2, 0);
  }
  else
  {
    qword_1C00270F8 = 0x20000000LL;
    _InterlockedAdd(&dword_1C00275CC, 1u);
    v3 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v3 + 24) = 44LL;
    WdLogEvent5_WdLowResource(v3);
  }
  v52 = 25;
  v40 = 25;
  v189 = 0;
  v106 = 0;
  v167 = 0;
  v44 = 0;
  v104 = 40;
  v48 = 40;
  v125 = 10;
  v7 = 1024;
  v114 = 10;
  if ( (unsigned __int64)qword_1C00270F8 <= 0x20000000 )
    v7 = 256;
  v122 = 15;
  v199 = v7;
  v88 = v7;
  v8 = 0x2000000;
  v66 = 15;
  if ( (unsigned __int64)qword_1C00270F8 <= 0x20000000 )
    v8 = 0x800000;
  v127 = 5;
  v171 = v8;
  v120 = v8;
  v9 = 0x1000000;
  if ( (unsigned __int64)qword_1C00270F8 <= 0x20000000 )
    v9 = 0x400000;
  v94 = 5;
  v133 = v9;
  v58 = v9;
  v139 = 0x100000;
  v108 = 0x100000;
  v175 = 0x800000;
  v70 = 0x800000;
  v141 = 60;
  v96 = 60;
  v196 = 60;
  v72 = 60;
  v145 = 2;
  v98 = 2;
  v179 = 200;
  v78 = 200;
  v169 = 300;
  v68 = 300;
  v129 = 0;
  v54 = 0;
  v131 = 4;
  v56 = 4;
  v198 = 10;
  v90 = 10;
  v135 = 0;
  v60 = 0;
  v173 = 1;
  v62 = 1;
  v137 = 1;
  v64 = 1;
  v192 = 1;
  v92 = 1;
  v143 = 1;
  v118 = 1;
  v177 = 8;
  v74 = 8;
  v194 = 0;
  v76 = 0;
  v147 = 0;
  v110 = 0;
  v161 = 1024;
  v197 = 4096;
  v80 = 4096;
  v151 = 6;
  v50 = 6;
  v181 = 20;
  v82 = 20;
  v153 = 30;
  v102 = 30;
  v59 = 1024;
  v211 = 16LL;
  v157 = 15;
  v185 = 32;
  v57 = 32;
  v10 = 256;
  if ( (unsigned __int64)qword_1C00270F8 <= 0x53333333 )
    v10 = 64;
  v51 = 15;
  v195 = v10;
  v69 = v10;
  v11 = 256;
  if ( (unsigned __int64)qword_1C00270F8 <= 0x53333333 )
    v11 = 64;
  v191 = 15;
  v123 = v11;
  v71 = v11;
  v132 = 60000;
  v81 = 60000;
  v130 = 60000;
  v79 = 60000;
  v134 = 10000;
  v75 = 10000;
  v53 = 15;
  v136 = 2000;
  v77 = 2000;
  v149 = 1;
  v100 = 1;
  v190 = 0;
  v84 = 0;
  v155 = 1;
  v112 = 1;
  v202 = 0LL;
  v212 = 0LL;
  v183 = 1;
  v86 = 1;
  v159 = 4;
  v55 = 4;
  v193 = 0;
  v61 = 0;
  v163 = 4;
  v63 = 4;
  v187 = 8;
  v65 = 8;
  v165 = 64;
  v67 = 64;
  v124 = 1;
  v73 = 1;
  v126 = 40;
  v42 = 40;
  v128 = 10;
  v46 = 10;
  v138 = 10;
  v45 = 10;
  v140 = 5;
  v47 = 5;
  v142 = 5;
  v49 = 5;
  v144 = 25;
  v43 = 25;
  v148 = 500;
  v85 = 500;
  v150 = 500;
  v87 = 500;
  v156 = 50;
  v152 = 1000;
  v89 = 1000;
  v154 = 1000;
  v91 = 1000;
  v162 = 5000;
  v97 = 5000;
  v93 = 50;
  v158 = 50;
  v41 = 50;
  v146 = 1;
  v168 = -1;
  v107 = -1;
  *(_QWORD *)&v213[1] = L"PinnedMemoryLimit";
  *((_QWORD *)&v213[1] + 1) = &v40;
  *((_QWORD *)&v213[2] + 1) = &v52;
  *((_QWORD *)&v213[4] + 1) = L"PinnedApertureMemoryLimit";
  *(_QWORD *)&v213[5] = &v48;
  *(_QWORD *)&v213[6] = &v104;
  v83 = 1;
  v160 = 48;
  v95 = 48;
  v203 = 0x2000000LL;
  v209 = 16LL;
  v210 = 0x2000000LL;
  v164 = 0;
  v103 = 0;
  v166 = 0;
  v105 = 0;
  v170 = 0;
  v109 = 0;
  v172 = 0;
  v111 = 0;
  v174 = 0;
  v113 = 0;
  v178 = 1;
  v115 = 1;
  v180 = 0;
  v117 = 0;
  v182 = 0;
  v119 = 0;
  v184 = 1;
  v121 = 1;
  v176 = 300;
  v99 = 300;
  v186 = 100;
  v101 = 100;
  *(_QWORD *)&v213[0] = 0LL;
  DWORD2(v213[0]) = 288;
  LODWORD(v213[2]) = 67108868;
  LODWORD(v213[3]) = 4;
  *((_QWORD *)&v213[3] + 1) = 0LL;
  LODWORD(v213[4]) = 288;
  DWORD2(v213[5]) = 67108868;
  DWORD2(v213[6]) = 4;
  *(_QWORD *)&v213[7] = 0LL;
  DWORD2(v213[7]) = 288;
  *(_QWORD *)&v213[8] = L"FaultInjection";
  *((_QWORD *)&v213[8] + 1) = &v106;
  *((_QWORD *)&v213[9] + 1) = &v189;
  *((_QWORD *)&v213[11] + 1) = L"PagesHistory";
  *(_QWORD *)&v213[12] = &v44;
  *(_QWORD *)&v213[13] = &v167;
  *(_QWORD *)&v213[15] = L"MemTransferThreshold";
  *((_QWORD *)&v213[15] + 1) = &v114;
  *((_QWORD *)&v213[16] + 1) = &v125;
  *((_QWORD *)&v213[18] + 1) = L"ExcessiveMemTransferFlipThreshold";
  *(_QWORD *)&v213[19] = &v66;
  *(_QWORD *)&v213[20] = &v122;
  *(_QWORD *)&v213[22] = L"ExcessiveMemTransferPenalty";
  *((_QWORD *)&v213[22] + 1) = &v94;
  *((_QWORD *)&v213[23] + 1) = &v127;
  *((_QWORD *)&v213[25] + 1) = L"EventThrottleThreshold";
  *(_QWORD *)&v213[26] = &v68;
  *(_QWORD *)&v213[27] = &v169;
  *(_QWORD *)&v213[29] = L"DisablePrefetching";
  *((_QWORD *)&v213[29] + 1) = &v54;
  *((_QWORD *)&v213[30] + 1) = &v129;
  *((_QWORD *)&v213[32] + 1) = L"NbDmaBufferLimitPerDevice";
  *(_QWORD *)&v213[33] = &v88;
  *(_QWORD *)&v213[34] = &v199;
  *(_QWORD *)&v213[36] = L"NbCddDmaBufferLimitPerDevice";
  LODWORD(v213[9]) = 67108868;
  LODWORD(v213[10]) = 4;
  *((_QWORD *)&v213[10] + 1) = 0LL;
  LODWORD(v213[11]) = 288;
  DWORD2(v213[12]) = 67108868;
  DWORD2(v213[13]) = 4;
  *(_QWORD *)&v213[14] = 0LL;
  DWORD2(v213[14]) = 288;
  LODWORD(v213[16]) = 67108868;
  LODWORD(v213[17]) = 4;
  *((_QWORD *)&v213[17] + 1) = 0LL;
  LODWORD(v213[18]) = 288;
  DWORD2(v213[19]) = 67108868;
  DWORD2(v213[20]) = 4;
  *(_QWORD *)&v213[21] = 0LL;
  DWORD2(v213[21]) = 288;
  LODWORD(v213[23]) = 67108868;
  LODWORD(v213[24]) = 4;
  *((_QWORD *)&v213[24] + 1) = 0LL;
  LODWORD(v213[25]) = 288;
  DWORD2(v213[26]) = 67108868;
  DWORD2(v213[27]) = 4;
  *(_QWORD *)&v213[28] = 0LL;
  DWORD2(v213[28]) = 288;
  LODWORD(v213[30]) = 67108868;
  LODWORD(v213[31]) = 4;
  *((_QWORD *)&v213[31] + 1) = 0LL;
  LODWORD(v213[32]) = 288;
  DWORD2(v213[33]) = 67108868;
  DWORD2(v213[34]) = 4;
  *(_QWORD *)&v213[35] = 0LL;
  DWORD2(v213[35]) = 288;
  LODWORD(v213[37]) = 67108868;
  *((_QWORD *)&v213[36] + 1) = &v56;
  *((_QWORD *)&v213[37] + 1) = &v131;
  *((_QWORD *)&v213[39] + 1) = L"DmaBufferBytesLimitAllDevices";
  *(_QWORD *)&v213[40] = &v120;
  *(_QWORD *)&v213[41] = &v171;
  *(_QWORD *)&v213[43] = L"DmaBufferListBytesLimitAllDevices";
  *((_QWORD *)&v213[43] + 1) = &v58;
  *((_QWORD *)&v213[44] + 1) = &v133;
  *((_QWORD *)&v213[46] + 1) = L"NbDmaBufferLimitCompareWatermark";
  *(_QWORD *)&v213[47] = &v90;
  *(_QWORD *)&v213[48] = &v198;
  *(_QWORD *)&v213[50] = L"NbPagingHistoryRecords";
  *((_QWORD *)&v213[50] + 1) = &v60;
  *((_QWORD *)&v213[51] + 1) = &v135;
  *((_QWORD *)&v213[53] + 1) = L"PinDWMAllocationBackingStore";
  *(_QWORD *)&v213[54] = &v62;
  *(_QWORD *)&v213[55] = &v173;
  *(_QWORD *)&v213[57] = L"RemovePagesFromWorkingSetOnPagingForDwm";
  *((_QWORD *)&v213[57] + 1) = &v64;
  *((_QWORD *)&v213[58] + 1) = &v137;
  *((_QWORD *)&v213[60] + 1) = L"UseUnreset";
  *(_QWORD *)&v213[61] = &v92;
  *(_QWORD *)&v213[62] = &v192;
  *(_QWORD *)&v213[64] = L"PrivateHeapPackingThreshold";
  LODWORD(v213[38]) = 4;
  *((_QWORD *)&v213[38] + 1) = 0LL;
  LODWORD(v213[39]) = 288;
  DWORD2(v213[40]) = 67108868;
  DWORD2(v213[41]) = 4;
  *(_QWORD *)&v213[42] = 0LL;
  DWORD2(v213[42]) = 288;
  LODWORD(v213[44]) = 67108868;
  LODWORD(v213[45]) = 4;
  *((_QWORD *)&v213[45] + 1) = 0LL;
  LODWORD(v213[46]) = 288;
  DWORD2(v213[47]) = 67108868;
  DWORD2(v213[48]) = 4;
  *(_QWORD *)&v213[49] = 0LL;
  DWORD2(v213[49]) = 288;
  LODWORD(v213[51]) = 67108868;
  LODWORD(v213[52]) = 4;
  *((_QWORD *)&v213[52] + 1) = 0LL;
  LODWORD(v213[53]) = 288;
  DWORD2(v213[54]) = 67108868;
  DWORD2(v213[55]) = 4;
  *(_QWORD *)&v213[56] = 0LL;
  DWORD2(v213[56]) = 288;
  LODWORD(v213[58]) = 67108868;
  LODWORD(v213[59]) = 4;
  *((_QWORD *)&v213[59] + 1) = 0LL;
  LODWORD(v213[60]) = 288;
  DWORD2(v213[61]) = 67108868;
  DWORD2(v213[62]) = 4;
  *(_QWORD *)&v213[63] = 0LL;
  DWORD2(v213[63]) = 288;
  *((_QWORD *)&v213[64] + 1) = &v108;
  *((_QWORD *)&v213[65] + 1) = &v139;
  *((_QWORD *)&v213[67] + 1) = L"PrivateHeapPackingBlockSize";
  *(_QWORD *)&v213[68] = &v70;
  *(_QWORD *)&v213[69] = &v175;
  *(_QWORD *)&v213[71] = L"EvictTemporaryPeriod";
  *((_QWORD *)&v213[71] + 1) = &v96;
  *((_QWORD *)&v213[72] + 1) = &v141;
  *((_QWORD *)&v213[74] + 1) = L"EvictUnusedPeriod";
  *(_QWORD *)&v213[75] = &v72;
  *(_QWORD *)&v213[76] = &v196;
  *(_QWORD *)&v213[78] = L"ProcessPendingOfferPeriod";
  *((_QWORD *)&v213[78] + 1) = &v118;
  *((_QWORD *)&v213[79] + 1) = &v143;
  *((_QWORD *)&v213[81] + 1) = L"ProcessSysmemOfferPeriod";
  *(_QWORD *)&v213[82] = &v74;
  *(_QWORD *)&v213[83] = &v177;
  *(_QWORD *)&v213[85] = L"SegmentBalancingPolicy";
  *((_QWORD *)&v213[85] + 1) = &v98;
  *((_QWORD *)&v213[86] + 1) = &v145;
  *((_QWORD *)&v213[88] + 1) = L"BugcheckOnApertureCorruption";
  *(_QWORD *)&v213[89] = &v76;
  *(_QWORD *)&v213[90] = &v194;
  *(_QWORD *)&v213[92] = L"QuickApertureCorruptionCheck";
  *((_QWORD *)&v213[92] + 1) = &v110;
  LODWORD(v213[65]) = 67108868;
  LODWORD(v213[66]) = 4;
  *((_QWORD *)&v213[66] + 1) = 0LL;
  LODWORD(v213[67]) = 288;
  DWORD2(v213[68]) = 67108868;
  DWORD2(v213[69]) = 4;
  *(_QWORD *)&v213[70] = 0LL;
  DWORD2(v213[70]) = 288;
  LODWORD(v213[72]) = 67108868;
  LODWORD(v213[73]) = 4;
  *((_QWORD *)&v213[73] + 1) = 0LL;
  LODWORD(v213[74]) = 288;
  DWORD2(v213[75]) = 67108868;
  DWORD2(v213[76]) = 4;
  *(_QWORD *)&v213[77] = 0LL;
  DWORD2(v213[77]) = 288;
  LODWORD(v213[79]) = 67108868;
  LODWORD(v213[80]) = 4;
  *((_QWORD *)&v213[80] + 1) = 0LL;
  LODWORD(v213[81]) = 288;
  DWORD2(v213[82]) = 67108868;
  DWORD2(v213[83]) = 4;
  *(_QWORD *)&v213[84] = 0LL;
  DWORD2(v213[84]) = 288;
  LODWORD(v213[86]) = 67108868;
  LODWORD(v213[87]) = 4;
  *((_QWORD *)&v213[87] + 1) = 0LL;
  LODWORD(v213[88]) = 288;
  DWORD2(v213[89]) = 67108868;
  DWORD2(v213[90]) = 4;
  *(_QWORD *)&v213[91] = 0LL;
  DWORD2(v213[91]) = 288;
  LODWORD(v213[93]) = 67108868;
  *((_QWORD *)&v213[93] + 1) = &v147;
  *((_QWORD *)&v213[95] + 1) = L"DirectFlipMemoryRequirement";
  *(_QWORD *)&v213[96] = &v78;
  *(_QWORD *)&v213[97] = &v179;
  *(_QWORD *)&v213[99] = L"CommitProcessHeapOnDemand";
  *((_QWORD *)&v213[99] + 1) = &v100;
  *((_QWORD *)&v213[100] + 1) = &v149;
  *((_QWORD *)&v213[102] + 1) = L"SegmentCleanupSizeThreshold";
  *(_QWORD *)&v213[103] = &v80;
  *(_QWORD *)&v213[104] = &v197;
  *(_QWORD *)&v213[106] = L"SegmentCleanupCountThreshold";
  *((_QWORD *)&v213[106] + 1) = &v50;
  *((_QWORD *)&v213[107] + 1) = &v151;
  *((_QWORD *)&v213[109] + 1) = L"SegmentCleanupTime";
  *(_QWORD *)&v213[110] = &v82;
  *(_QWORD *)&v213[111] = &v181;
  *(_QWORD *)&v213[113] = L"PagingProcessVaSpaceBitCount";
  *((_QWORD *)&v213[113] + 1) = &v102;
  *((_QWORD *)&v213[114] + 1) = &v153;
  *((_QWORD *)&v213[116] + 1) = L"GpuVaPagingHistorySize";
  *(_QWORD *)&v213[117] = &v84;
  *(_QWORD *)&v213[118] = &v190;
  *(_QWORD *)&v213[120] = L"EnableAsyncResidency";
  *((_QWORD *)&v213[120] + 1) = &v112;
  LODWORD(v213[94]) = 4;
  *((_QWORD *)&v213[94] + 1) = 0LL;
  LODWORD(v213[95]) = 288;
  DWORD2(v213[96]) = 67108868;
  DWORD2(v213[97]) = 4;
  *(_QWORD *)&v213[98] = 0LL;
  DWORD2(v213[98]) = 288;
  LODWORD(v213[100]) = 67108868;
  LODWORD(v213[101]) = 4;
  *((_QWORD *)&v213[101] + 1) = 0LL;
  LODWORD(v213[102]) = 288;
  DWORD2(v213[103]) = 67108868;
  DWORD2(v213[104]) = 4;
  *(_QWORD *)&v213[105] = 0LL;
  DWORD2(v213[105]) = 288;
  LODWORD(v213[107]) = 67108868;
  LODWORD(v213[108]) = 4;
  *((_QWORD *)&v213[108] + 1) = 0LL;
  LODWORD(v213[109]) = 288;
  DWORD2(v213[110]) = 67108868;
  DWORD2(v213[111]) = 4;
  *(_QWORD *)&v213[112] = 0LL;
  DWORD2(v213[112]) = 288;
  LODWORD(v213[114]) = 67108868;
  LODWORD(v213[115]) = 4;
  *((_QWORD *)&v213[115] + 1) = 0LL;
  LODWORD(v213[116]) = 288;
  DWORD2(v213[117]) = 67108868;
  DWORD2(v213[118]) = 4;
  *(_QWORD *)&v213[119] = 0LL;
  DWORD2(v213[119]) = 288;
  LODWORD(v213[121]) = 67108868;
  LODWORD(v213[122]) = 4;
  *((_QWORD *)&v213[121] + 1) = &v155;
  *((_QWORD *)&v213[122] + 1) = 0LL;
  *((_QWORD *)&v213[123] + 1) = L"GlobalCommitmentBudget";
  *(_QWORD *)&v213[124] = &v211;
  *(_QWORD *)&v213[125] = &v202;
  *(_QWORD *)&v213[127] = L"DebouncedPageManagement";
  *((_QWORD *)&v213[127] + 1) = &v86;
  *((_QWORD *)&v213[128] + 1) = &v183;
  *((_QWORD *)&v213[130] + 1) = L"DebouncedUnlockAge";
  *(_QWORD *)&v213[131] = &v51;
  *(_QWORD *)&v213[132] = &v157;
  *(_QWORD *)&v213[134] = L"DebouncedDecommitAge";
  *((_QWORD *)&v213[134] + 1) = &v53;
  *((_QWORD *)&v213[135] + 1) = &v191;
  *((_QWORD *)&v213[137] + 1) = L"RecycleHeapPackingThreshold";
  *(_QWORD *)&v213[138] = &v55;
  *(_QWORD *)&v213[139] = &v159;
  *(_QWORD *)&v213[141] = L"RecycleHeapPackingBlockSize";
  *((_QWORD *)&v213[141] + 1) = &v57;
  *((_QWORD *)&v213[142] + 1) = &v185;
  *((_QWORD *)&v213[144] + 1) = L"RecycleHeapPTDBlockSize";
  *(_QWORD *)&v213[145] = &v59;
  *(_QWORD *)&v213[146] = &v161;
  *(_QWORD *)&v213[148] = L"ZeroedRecyclePages";
  *((_QWORD *)&v213[148] + 1) = &v61;
  LODWORD(v213[123]) = 288;
  DWORD2(v213[124]) = 184549387;
  DWORD2(v213[125]) = 8;
  *(_QWORD *)&v213[126] = 0LL;
  DWORD2(v213[126]) = 288;
  LODWORD(v213[128]) = 67108868;
  LODWORD(v213[129]) = 4;
  *((_QWORD *)&v213[129] + 1) = 0LL;
  LODWORD(v213[130]) = 288;
  DWORD2(v213[131]) = 67108868;
  DWORD2(v213[132]) = 4;
  *(_QWORD *)&v213[133] = 0LL;
  DWORD2(v213[133]) = 288;
  LODWORD(v213[135]) = 67108868;
  LODWORD(v213[136]) = 4;
  *((_QWORD *)&v213[136] + 1) = 0LL;
  LODWORD(v213[137]) = 288;
  DWORD2(v213[138]) = 67108868;
  DWORD2(v213[139]) = 4;
  *(_QWORD *)&v213[140] = 0LL;
  DWORD2(v213[140]) = 288;
  LODWORD(v213[142]) = 67108868;
  LODWORD(v213[143]) = 4;
  *((_QWORD *)&v213[143] + 1) = 0LL;
  LODWORD(v213[144]) = 288;
  DWORD2(v213[145]) = 67108868;
  DWORD2(v213[146]) = 4;
  *(_QWORD *)&v213[147] = 0LL;
  DWORD2(v213[147]) = 288;
  LODWORD(v213[149]) = 67108868;
  LODWORD(v213[150]) = 4;
  *((_QWORD *)&v213[149] + 1) = &v193;
  *((_QWORD *)&v213[151] + 1) = L"LeanRecycleHeapPackingThreshold";
  *(_QWORD *)&v213[152] = &v63;
  *(_QWORD *)&v213[153] = &v163;
  *(_QWORD *)&v213[155] = L"LeanRecycleHeapPackingBlockSize";
  *((_QWORD *)&v213[155] + 1) = &v65;
  *((_QWORD *)&v213[156] + 1) = &v187;
  *((_QWORD *)&v213[158] + 1) = L"LeanRecycleHeapPTDBlockSize";
  *(_QWORD *)&v213[159] = &v67;
  *(_QWORD *)&v213[160] = &v165;
  *(_QWORD *)&v213[162] = L"MaximumDecommitDebounce";
  *((_QWORD *)&v213[162] + 1) = &v69;
  *((_QWORD *)&v213[163] + 1) = &v195;
  *((_QWORD *)&v213[165] + 1) = L"MaximumUnlockDebounce";
  *(_QWORD *)&v213[166] = &v71;
  *(_QWORD *)&v213[167] = &v123;
  *(_QWORD *)&v213[169] = L"EnableTrimWnfCallback";
  *((_QWORD *)&v213[169] + 1) = &v73;
  *((_QWORD *)&v213[170] + 1) = &v124;
  *((_QWORD *)&v213[172] + 1) = L"StartPeriodicTrimThreshold";
  *(_QWORD *)&v213[173] = &v42;
  *(_QWORD *)&v213[174] = &v126;
  *(_QWORD *)&v213[176] = L"CriticalPeriodicTrimThreshold";
  *((_QWORD *)&v213[176] + 1) = &v46;
  *((_QWORD *)&v213[150] + 1) = 0LL;
  LODWORD(v213[151]) = 288;
  DWORD2(v213[152]) = 67108868;
  DWORD2(v213[153]) = 4;
  *(_QWORD *)&v213[154] = 0LL;
  DWORD2(v213[154]) = 288;
  LODWORD(v213[156]) = 67108868;
  LODWORD(v213[157]) = 4;
  *((_QWORD *)&v213[157] + 1) = 0LL;
  LODWORD(v213[158]) = 288;
  DWORD2(v213[159]) = 67108868;
  DWORD2(v213[160]) = 4;
  *(_QWORD *)&v213[161] = 0LL;
  DWORD2(v213[161]) = 288;
  LODWORD(v213[163]) = 67108868;
  LODWORD(v213[164]) = 4;
  *((_QWORD *)&v213[164] + 1) = 0LL;
  LODWORD(v213[165]) = 288;
  DWORD2(v213[166]) = 67108868;
  DWORD2(v213[167]) = 4;
  *(_QWORD *)&v213[168] = 0LL;
  DWORD2(v213[168]) = 288;
  LODWORD(v213[170]) = 67108868;
  LODWORD(v213[171]) = 4;
  *((_QWORD *)&v213[171] + 1) = 0LL;
  LODWORD(v213[172]) = 288;
  DWORD2(v213[173]) = 67108868;
  DWORD2(v213[174]) = 4;
  *(_QWORD *)&v213[175] = 0LL;
  DWORD2(v213[175]) = 288;
  LODWORD(v213[177]) = 67108868;
  *((_QWORD *)&v213[177] + 1) = &v128;
  *((_QWORD *)&v213[179] + 1) = L"IdleTrimInterval";
  *(_QWORD *)&v213[180] = &v79;
  *(_QWORD *)&v213[181] = &v130;
  *(_QWORD *)&v213[183] = L"ForegroundTrimInterval";
  *((_QWORD *)&v213[183] + 1) = &v81;
  *((_QWORD *)&v213[184] + 1) = &v132;
  *((_QWORD *)&v213[186] + 1) = L"MaximumTrimInterval";
  *(_QWORD *)&v213[187] = &v75;
  *(_QWORD *)&v213[188] = &v134;
  *(_QWORD *)&v213[190] = L"MinimumTrimInterval";
  *((_QWORD *)&v213[190] + 1) = &v77;
  *((_QWORD *)&v213[191] + 1) = &v136;
  *((_QWORD *)&v213[193] + 1) = L"VideoMemoryFragmentationBuffer";
  *(_QWORD *)&v213[194] = &v45;
  *(_QWORD *)&v213[195] = &v138;
  *(_QWORD *)&v213[197] = L"SystemMemoryFragmentationBuffer";
  *((_QWORD *)&v213[197] + 1) = &v47;
  *((_QWORD *)&v213[198] + 1) = &v140;
  *((_QWORD *)&v213[200] + 1) = L"ProcessBudgetCapBuffer";
  *(_QWORD *)&v213[201] = &v49;
  *(_QWORD *)&v213[202] = &v142;
  *(_QWORD *)&v213[204] = L"BudgetThreshold";
  *((_QWORD *)&v213[204] + 1) = &v43;
  *((_QWORD *)&v213[205] + 1) = &v144;
  LODWORD(v213[178]) = 4;
  *((_QWORD *)&v213[178] + 1) = 0LL;
  LODWORD(v213[179]) = 288;
  DWORD2(v213[180]) = 67108868;
  DWORD2(v213[181]) = 4;
  *(_QWORD *)&v213[182] = 0LL;
  DWORD2(v213[182]) = 288;
  LODWORD(v213[184]) = 67108868;
  LODWORD(v213[185]) = 4;
  *((_QWORD *)&v213[185] + 1) = 0LL;
  LODWORD(v213[186]) = 288;
  DWORD2(v213[187]) = 67108868;
  DWORD2(v213[188]) = 4;
  *(_QWORD *)&v213[189] = 0LL;
  DWORD2(v213[189]) = 288;
  LODWORD(v213[191]) = 67108868;
  LODWORD(v213[192]) = 4;
  *((_QWORD *)&v213[192] + 1) = 0LL;
  LODWORD(v213[193]) = 288;
  DWORD2(v213[194]) = 67108868;
  DWORD2(v213[195]) = 4;
  *(_QWORD *)&v213[196] = 0LL;
  DWORD2(v213[196]) = 288;
  LODWORD(v213[198]) = 67108868;
  LODWORD(v213[199]) = 4;
  *((_QWORD *)&v213[199] + 1) = 0LL;
  LODWORD(v213[200]) = 288;
  DWORD2(v213[201]) = 67108868;
  DWORD2(v213[202]) = 4;
  *(_QWORD *)&v213[203] = 0LL;
  DWORD2(v213[203]) = 288;
  LODWORD(v213[205]) = 67108868;
  LODWORD(v213[206]) = 4;
  *((_QWORD *)&v213[207] + 1) = L"PagingQueueFenceIncrement";
  *(_QWORD *)&v213[208] = &v83;
  *(_QWORD *)&v213[209] = &v146;
  *(_QWORD *)&v213[211] = L"DeviceSuspendPeriodMin";
  *((_QWORD *)&v213[211] + 1) = &v85;
  *((_QWORD *)&v213[212] + 1) = &v148;
  *((_QWORD *)&v213[214] + 1) = L"DeviceSuspendPeriodMax";
  *(_QWORD *)&v213[215] = &v87;
  *(_QWORD *)&v213[216] = &v150;
  *(_QWORD *)&v213[218] = L"DeviceResumePeriodMin";
  *((_QWORD *)&v213[218] + 1) = &v89;
  *((_QWORD *)&v213[219] + 1) = &v152;
  *((_QWORD *)&v213[221] + 1) = L"DeviceResumePeriodMax";
  *(_QWORD *)&v213[222] = &v91;
  *(_QWORD *)&v213[223] = &v154;
  *(_QWORD *)&v213[225] = L"PagingQueueQuantum";
  *((_QWORD *)&v213[225] + 1) = &v93;
  *((_QWORD *)&v213[226] + 1) = &v156;
  *((_QWORD *)&v213[228] + 1) = L"PagingQueueProcessingPeriodTime";
  *(_QWORD *)&v213[229] = &v41;
  *(_QWORD *)&v213[230] = &v158;
  *(_QWORD *)&v213[232] = L"InitialPromotionInterval";
  *((_QWORD *)&v213[232] + 1) = &v95;
  *((_QWORD *)&v213[233] + 1) = &v160;
  *((_QWORD *)&v213[206] + 1) = 0LL;
  LODWORD(v213[207]) = 288;
  DWORD2(v213[208]) = 67108868;
  DWORD2(v213[209]) = 4;
  *(_QWORD *)&v213[210] = 0LL;
  DWORD2(v213[210]) = 288;
  LODWORD(v213[212]) = 67108868;
  LODWORD(v213[213]) = 4;
  *((_QWORD *)&v213[213] + 1) = 0LL;
  LODWORD(v213[214]) = 288;
  DWORD2(v213[215]) = 67108868;
  DWORD2(v213[216]) = 4;
  *(_QWORD *)&v213[217] = 0LL;
  DWORD2(v213[217]) = 288;
  LODWORD(v213[219]) = 67108868;
  LODWORD(v213[220]) = 4;
  *((_QWORD *)&v213[220] + 1) = 0LL;
  LODWORD(v213[221]) = 288;
  DWORD2(v213[222]) = 67108868;
  DWORD2(v213[223]) = 4;
  *(_QWORD *)&v213[224] = 0LL;
  DWORD2(v213[224]) = 288;
  LODWORD(v213[226]) = 67108868;
  LODWORD(v213[227]) = 4;
  *((_QWORD *)&v213[227] + 1) = 0LL;
  LODWORD(v213[228]) = 288;
  DWORD2(v213[229]) = 67108868;
  DWORD2(v213[230]) = 4;
  *(_QWORD *)&v213[231] = 0LL;
  DWORD2(v213[231]) = 288;
  LODWORD(v213[233]) = 67108868;
  LODWORD(v213[234]) = 4;
  *((_QWORD *)&v213[234] + 1) = 0LL;
  *((_QWORD *)&v213[235] + 1) = L"MaximumPromotionInterval";
  *(_QWORD *)&v213[236] = &v97;
  *(_QWORD *)&v213[237] = &v162;
  *(_QWORD *)&v213[239] = L"PromotionTargetSizePerInterval";
  *((_QWORD *)&v213[239] + 1) = &v209;
  *((_QWORD *)&v213[240] + 1) = &v203;
  *((_QWORD *)&v213[242] + 1) = L"ForceUncommitGpuVAOnEvict";
  *(_QWORD *)&v213[243] = &v103;
  *(_QWORD *)&v213[244] = &v164;
  *(_QWORD *)&v213[246] = L"ForceSynchronousEvict";
  *((_QWORD *)&v213[246] + 1) = &v105;
  *((_QWORD *)&v213[247] + 1) = &v166;
  *((_QWORD *)&v213[249] + 1) = L"DxgMms2OfferReclaim";
  *(_QWORD *)&v213[250] = &v107;
  *(_QWORD *)&v213[251] = &v168;
  *(_QWORD *)&v213[253] = L"EnableGpuVaGuardPages";
  *((_QWORD *)&v213[253] + 1) = &v109;
  *((_QWORD *)&v213[254] + 1) = &v170;
  *((_QWORD *)&v213[256] + 1) = L"AllocateGpuVaFromHighAddresses";
  *(_QWORD *)&v213[257] = &v111;
  *(_QWORD *)&v213[258] = &v172;
  *(_QWORD *)&v213[260] = L"DisableMakeIoMmuAddressValid";
  *((_QWORD *)&v213[260] + 1) = &v113;
  *((_QWORD *)&v213[261] + 1) = &v174;
  LODWORD(v213[235]) = 288;
  DWORD2(v213[236]) = 67108868;
  DWORD2(v213[237]) = 4;
  *(_QWORD *)&v213[238] = 0LL;
  DWORD2(v213[238]) = 288;
  LODWORD(v213[240]) = 184549387;
  LODWORD(v213[241]) = 8;
  *((_QWORD *)&v213[241] + 1) = 0LL;
  LODWORD(v213[242]) = 288;
  DWORD2(v213[243]) = 67108868;
  DWORD2(v213[244]) = 4;
  *(_QWORD *)&v213[245] = 0LL;
  DWORD2(v213[245]) = 288;
  LODWORD(v213[247]) = 67108868;
  LODWORD(v213[248]) = 4;
  *((_QWORD *)&v213[248] + 1) = 0LL;
  LODWORD(v213[249]) = 288;
  DWORD2(v213[250]) = 67108868;
  DWORD2(v213[251]) = 4;
  *(_QWORD *)&v213[252] = 0LL;
  DWORD2(v213[252]) = 288;
  LODWORD(v213[254]) = 67108868;
  LODWORD(v213[255]) = 4;
  *((_QWORD *)&v213[255] + 1) = 0LL;
  LODWORD(v213[256]) = 288;
  DWORD2(v213[257]) = 67108868;
  DWORD2(v213[258]) = 4;
  *(_QWORD *)&v213[259] = 0LL;
  DWORD2(v213[259]) = 288;
  LODWORD(v213[261]) = 67108868;
  LODWORD(v213[262]) = 4;
  *((_QWORD *)&v213[262] + 1) = 0LL;
  LODWORD(v213[263]) = 288;
  *((_QWORD *)&v213[263] + 1) = L"MemoryComponentActiveThreshold";
  DWORD2(v213[266]) = 288;
  *(_QWORD *)&v213[264] = &v99;
  *(_QWORD *)&v213[265] = &v176;
  *(_QWORD *)&v213[267] = L"DemotionWithinDeviceEnabled";
  *((_QWORD *)&v213[267] + 1) = &v115;
  *((_QWORD *)&v213[268] + 1) = &v178;
  *((_QWORD *)&v213[270] + 1) = L"DisableUncommitGpuVaInPagingProcess";
  *(_QWORD *)&v213[271] = &v117;
  *(_QWORD *)&v213[272] = &v180;
  *(_QWORD *)&v213[274] = L"EnableZeroFlagInPde";
  *((_QWORD *)&v213[274] + 1) = &v119;
  *((_QWORD *)&v213[275] + 1) = &v182;
  *((_QWORD *)&v213[277] + 1) = L"TransferFlushThreshold";
  *(_QWORD *)&v213[278] = &v121;
  *(_QWORD *)&v213[279] = &v184;
  *(_QWORD *)&v213[281] = L"SelfRefreshMemoryEvictionThreshold";
  *((_QWORD *)&v213[281] + 1) = &v101;
  LODWORD(v213[270]) = 288;
  DWORD2(v213[273]) = 288;
  LODWORD(v213[277]) = 288;
  DWORD2(v213[280]) = 288;
  *((_QWORD *)&v213[282] + 1) = &v186;
  DWORD2(v213[264]) = 67108868;
  DWORD2(v213[265]) = 4;
  *(_QWORD *)&v213[266] = 0LL;
  LODWORD(v213[268]) = 67108868;
  LODWORD(v213[269]) = 4;
  *((_QWORD *)&v213[269] + 1) = 0LL;
  DWORD2(v213[271]) = 67108868;
  DWORD2(v213[272]) = 4;
  *(_QWORD *)&v213[273] = 0LL;
  LODWORD(v213[275]) = 67108868;
  LODWORD(v213[276]) = 4;
  *((_QWORD *)&v213[276] + 1) = 0LL;
  DWORD2(v213[278]) = 67108868;
  DWORD2(v213[279]) = 4;
  *(_QWORD *)&v213[280] = 0LL;
  LODWORD(v213[282]) = 67108868;
  LODWORD(v213[283]) = 4;
  *((_QWORD *)&v213[283] + 1) = 0LL;
  memset(&v213[284], 0, 0x30uLL);
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v213, 0LL, 0LL);
  v12 = dword_1C0027120;
  memset(dword_1C0027120, 0, sizeof(dword_1C0027120));
  memset(v213, 0, sizeof(v213));
  v13 = 0;
  v14 = 0LL;
  do
  {
    memset(v215, 0, sizeof(v215));
    *(_DWORD *)&Destination.Length = 0x400000;
    Destination.Buffer = v215;
    RtlInitUnicodeString(&DestinationString, L"MaxSegmentSize");
    if ( RtlAppendUnicodeStringToString(&Destination, &DestinationString) >= 0 )
    {
      *(_DWORD *)&String.Length = 0x100000;
      String.Buffer = (PWSTR)&v214;
      if ( RtlIntegerToUnicodeString(v13, 0, &String) >= 0 && RtlAppendUnicodeStringToString(&Destination, &String) >= 0 )
      {
        *(_QWORD *)&v205 = Destination.Buffer;
        *(_QWORD *)&v204 = 0LL;
        *((_QWORD *)&v205 + 1) = &v116;
        DWORD2(v204) = 288;
        *((_QWORD *)&v206 + 1) = &v188;
        v213[1] = v205;
        v213[0] = v204;
        LODWORD(v206) = 67108868;
        LODWORD(v207) = 4;
        v213[2] = v206;
        *(_QWORD *)&v213[3] = v207;
        v188 = 0;
        v116 = 0;
        RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v213, 0LL, 0LL);
        v17 = v116;
        *v12 = v116;
        if ( v17 )
        {
          v18 = (v17 + 4095) & 0xFFFFF000;
          if ( v18 < 0x800000 )
            v18 = 0x800000;
          *v12 = v18;
          v19 = WdLogNewEntry5_WdEvent(v16, v15);
          *(_QWORD *)(v19 + 24) = v14;
          *(_QWORD *)(v19 + 32) = *v12;
          WdLogEvent5_WdEvent(v19);
        }
      }
    }
    ++v13;
    ++v14;
    ++v12;
  }
  while ( v13 < 0x20 );
  v20 = WdLogNewEntry5_WdEvent(v16, v15);
  *(_QWORD *)(v20 + 24) = v40;
  WdLogEvent5_WdEvent(v20);
  v21 = v52;
  if ( v40 < 0x5A )
    v21 = v40;
  dword_1C0027110 = v21;
  v22 = v104;
  if ( v48 < 0x5A )
    v22 = v48;
  dword_1C0027114 = v22;
  v23 = 0x7FFFFFF;
  dword_1C0027118 = 0;
  if ( v44 < 0x7FFFFFF )
    v23 = v44;
  dword_1C002711C = v23;
  dword_1C002723C = v88;
  dword_1C0027240 = v56;
  dword_1C0027244 = v120;
  dword_1C0027248 = v58;
  dword_1C002724C = v90;
  dword_1C0027250 = v60;
  VIDMM_GLOBAL::_Config = v106;
  v24 = (v62 != 0) | (2 * (v64 & 1 | (2 * (v92 & 1))));
  qword_1C0027258 = (unsigned int)(v114 << 20);
  dword_1C0027260 = v66;
  dword_1C0027264 = v94;
  dword_1C0027270 = v108;
  dword_1C0027274 = v70;
  qword_1C0027268 = (unsigned int)(10000000 * v68);
  dword_1C0027298 = v98;
  qword_1C0027278 = (unsigned int)(10000000 * v96);
  qword_1C0027280 = (unsigned int)(10000000 * v72);
  qword_1C0027288 = (unsigned int)(10000000 * v118);
  qword_1C0027290 = (unsigned int)(10000000 * v74);
  v25 = v77;
  v26 = ((((v54 ^ dword_1C00270E4) & 1 ^ dword_1C00270E4) & 0xFFFFFFF1 | (2 * v24)) ^ (16 * (v76 != 0))) & 0x10 ^ (((v54 ^ dword_1C00270E4) & 1 ^ dword_1C00270E4) & 0xFFFFFFF1 | (2 * v24));
  v27 = 100;
  dword_1C00270E8 = v110 != 0;
  qword_1C00270F0 = (unsigned __int64)v78 << 20;
  dword_1C00270EC = v100 != 0;
  qword_1C00272C8 = (unsigned int)(v80 << 10);
  dword_1C00272D0 = v50;
  dword_1C00272E0 = v102;
  dword_1C00272E4 = v84;
  dword_1C00272E8 = 32 * v84;
  dword_1C00272EC = v112;
  qword_1C00272F0 = v212;
  dword_1C00272F8 = v86;
  dword_1C00272FC = v51;
  dword_1C0027300 = v53;
  dword_1C0027304 = v55;
  dword_1C0027308 = v57;
  dword_1C002730C = v59;
  dword_1C0027310 = v61;
  dword_1C0027314 = v63;
  dword_1C0027318 = v65;
  dword_1C002731C = v67;
  dword_1C0027320 = v69;
  dword_1C0027324 = v71;
  dword_1C0027328 = v73;
  v28 = 100;
  if ( v42 < 0x64 )
    v28 = v42;
  dword_1C002732C = v28;
  if ( v46 < v28 )
    v28 = v46;
  qword_1C00272D8 = (unsigned int)(10000 * v82);
  if ( v43 < 0x64 )
    v27 = v43;
  dword_1C0027330 = v28;
  v29 = v75;
  dword_1C0027350 = v27;
  if ( v75 <= 0xEA60 )
  {
    if ( v75 < 0x10 )
      v29 = 16;
  }
  else
  {
    v29 = 60000;
  }
  if ( v77 >= 0x10 )
  {
    if ( v77 >= v29 )
      v25 = v29;
  }
  else
  {
    v25 = 16;
  }
  v30 = v79;
  v31 = v81;
  v32 = 50;
  v33 = 300;
  if ( v29 > v79 )
    v30 = v29;
  if ( v30 > v81 )
    v31 = v30;
  if ( v30 >= 0x124F80 )
    v30 = 1200000;
  if ( v31 >= 0x124F80 )
    v31 = 1200000;
  dword_1C002733C = 10000 * v29;
  dword_1C0027340 = 10000 * v25;
  dword_1C0027334 = 10000 * v30;
  LODWORD(dword_1C0027338) = 10000 * v31;
  v34 = 50;
  if ( v45 < 0x32 )
    v34 = v45;
  dword_1C0027344 = v34;
  v35 = 50;
  if ( v47 < 0x32 )
    v35 = v47;
  dword_1C0027348 = v35;
  if ( v49 < 0x32 )
    v32 = v49;
  dword_1C002734C = v32;
  dword_1C0027354 = v83;
  if ( v83 <= 0x51EB851 )
  {
    if ( !v83 )
      dword_1C0027354 = 1;
  }
  else
  {
    dword_1C0027354 = 85899345;
  }
  if ( v41 < 0x12D )
  {
    v33 = v41;
    if ( v41 < 0x10 )
      v33 = 16;
  }
  qword_1C0027358 = 10000LL * v85;
  qword_1C0027360 = 10000LL * v87;
  qword_1C0027368 = 10000LL * v89;
  qword_1C0027370 = 10000LL * v91;
  qword_1C0027378 = 10000LL * v93;
  qword_1C0027398 = v210;
  qword_1C00273B8 = (unsigned __int64)v99 << 20;
  qword_1C00273C8 = (unsigned __int64)v101 << 20;
  dword_1C00273A0 = v103;
  dword_1C00273A4 = v105;
  qword_1C0027380 = 10000LL * v33;
  v41 = v33;
  qword_1C0027388 = (unsigned int)(10000 * v95);
  qword_1C0027390 = (unsigned int)(10000 * v97);
  v36 = v107;
  dword_1C00273AC = v109;
  if ( (unsigned int)(v107 - 3) <= 0xFFFFFFFB )
    v36 = 0;
  dword_1C00273B0 = v111;
  dword_1C00273A8 = v36;
  v37 = ((unsigned __int8)v26 ^ (unsigned __int8)(32 * (v113 != 0))) & 0x20 ^ v26;
  v38 = ((unsigned __int8)v37 ^ ((v115 != 0) << 6)) & 0x40 ^ v37;
  v39 = ((unsigned __int8)v38 ^ (unsigned __int8)((v117 != 0) << 7)) & 0x80 ^ v38;
  LOBYTE(v1) = v119 != 0;
  qword_1C00273C0 = (unsigned __int64)v121 << 20;
  dword_1C00270E4 = ((unsigned __int16)v39 ^ (unsigned __int16)(v1 << 8)) & 0x100 ^ v39;
  VIDMM_GLOBAL::ReadCommitLimitInformation();
  VIDMM_GLOBAL::ReadWorkingSetConfiguration();
  VIDMM_GLOBAL::ReadUnusedAllocationConfiguration();
  VIDMM_GLOBAL::ReadPreparationPeriodConfiguration();
  VIDMM_GLOBAL::ReadMigrationConfiguration();
}
