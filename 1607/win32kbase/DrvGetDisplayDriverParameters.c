/*
 * XREFs of DrvGetDisplayDriverParameters @ 0x1C0061030
 * Callers:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z @ 0x1C00601F0 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z.c)
 *     DrvEnumDisplaySettings @ 0x1C0062AF0 (DrvEnumDisplaySettings.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C0037320 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C005D5CC (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     UpdateMonitorDevices @ 0x1C005F930 (UpdateMonitorDevices.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall DrvGetDisplayDriverParameters(__int64 a1, __int128 *a2, int a3, int a4, __int64 a5)
{
  int v5; // r13d
  unsigned int v8; // r12d
  NTSTATUS v9; // esi
  _DWORD *v10; // rbx
  _DWORD *v11; // r15
  unsigned __int16 v12; // r9
  PCWSTR *p_Name; // rcx
  __int64 v14; // r8
  wchar_t **v15; // rdx
  const WCHAR *v16; // rax
  int v17; // eax
  unsigned int v18; // ebx
  const WCHAR *v19; // rax
  WCHAR *v20; // r15
  bool v21; // zf
  unsigned __int16 v22; // ax
  int v23; // eax
  int v25; // r8d
  int v26; // ecx
  int v27; // edx
  __int128 v28; // xmm0
  _OWORD *v29; // rdx
  unsigned __int16 v30; // ax
  __int128 *v31; // rdx
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int64 v39; // rax
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  unsigned int v44; // r15d
  unsigned int v45; // esi
  unsigned int v46; // r13d
  __int64 v47; // rdx
  const WCHAR *RegistryHandleFromDeviceMap; // rax
  WCHAR *v49; // r12
  NTSTATUS v50; // ebx
  bool v51; // sf
  unsigned int v52; // eax
  unsigned int v53; // ecx
  WCHAR *v54; // rbx
  unsigned int v55; // [rsp+40h] [rbp-C0h]
  int v56; // [rsp+44h] [rbp-BCh] BYREF
  int v57; // [rsp+48h] [rbp-B8h] BYREF
  int v58; // [rsp+4Ch] [rbp-B4h]
  int v59; // [rsp+50h] [rbp-B0h]
  __int128 v60; // [rsp+60h] [rbp-A0h]
  __int128 v61; // [rsp+70h] [rbp-90h]
  __int128 v62; // [rsp+80h] [rbp-80h]
  __int128 v63; // [rsp+90h] [rbp-70h]
  __int128 v64; // [rsp+A0h] [rbp-60h]
  __int128 v65; // [rsp+B0h] [rbp-50h]
  __int128 v66; // [rsp+C0h] [rbp-40h]
  __int128 v67; // [rsp+D0h] [rbp-30h]
  __int128 v68; // [rsp+E0h] [rbp-20h]
  __int128 v69; // [rsp+F0h] [rbp-10h]
  __int128 v70; // [rsp+100h] [rbp+0h]
  __int128 v71; // [rsp+110h] [rbp+10h]
  __int128 v72; // [rsp+120h] [rbp+20h]
  __int64 v73; // [rsp+130h] [rbp+30h]
  int v74; // [rsp+138h] [rbp+38h]
  _DWORD v75[55]; // [rsp+140h] [rbp+40h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+220h] [rbp+120h] BYREF
  __int64 v77; // [rsp+258h] [rbp+158h]
  int v78; // [rsp+260h] [rbp+160h]
  __int64 v79; // [rsp+268h] [rbp+168h]
  char *v80; // [rsp+270h] [rbp+170h]
  int v81; // [rsp+278h] [rbp+178h]
  __int64 v82; // [rsp+280h] [rbp+180h]
  int v83; // [rsp+288h] [rbp+188h]
  __int64 v84; // [rsp+290h] [rbp+190h]
  int v85; // [rsp+298h] [rbp+198h]
  __int64 v86; // [rsp+2A0h] [rbp+1A0h]
  _OWORD *v87; // [rsp+2A8h] [rbp+1A8h]
  int v88; // [rsp+2B0h] [rbp+1B0h]
  __int64 v89; // [rsp+2B8h] [rbp+1B8h]
  int v90; // [rsp+2C0h] [rbp+1C0h]
  __int64 v91; // [rsp+2C8h] [rbp+1C8h]
  int v92; // [rsp+2D0h] [rbp+1D0h]
  __int64 v93; // [rsp+2D8h] [rbp+1D8h]
  char *v94; // [rsp+2E0h] [rbp+1E0h]
  int v95; // [rsp+2E8h] [rbp+1E8h]
  __int64 v96; // [rsp+2F0h] [rbp+1F0h]
  int v97; // [rsp+2F8h] [rbp+1F8h]
  __int64 v98; // [rsp+300h] [rbp+200h]
  int v99; // [rsp+308h] [rbp+208h]
  __int64 v100; // [rsp+310h] [rbp+210h]
  char *v101; // [rsp+318h] [rbp+218h]
  int v102; // [rsp+320h] [rbp+220h]
  __int64 v103; // [rsp+328h] [rbp+228h]
  int v104; // [rsp+330h] [rbp+230h]
  __int64 v105; // [rsp+338h] [rbp+238h]
  int v106; // [rsp+340h] [rbp+240h]
  __int64 v107; // [rsp+348h] [rbp+248h]
  char *v108; // [rsp+350h] [rbp+250h]
  int v109; // [rsp+358h] [rbp+258h]
  __int64 v110; // [rsp+360h] [rbp+260h]
  int v111; // [rsp+368h] [rbp+268h]
  __int64 v112; // [rsp+370h] [rbp+270h]
  int v113; // [rsp+378h] [rbp+278h]
  __int64 v114; // [rsp+380h] [rbp+280h]
  char *v115; // [rsp+388h] [rbp+288h]
  int v116; // [rsp+390h] [rbp+290h]
  __int64 v117; // [rsp+398h] [rbp+298h]
  int v118; // [rsp+3A0h] [rbp+2A0h]
  __int64 v119; // [rsp+3A8h] [rbp+2A8h]
  int v120; // [rsp+3B0h] [rbp+2B0h]
  __int64 v121; // [rsp+3B8h] [rbp+2B8h]
  char *v122; // [rsp+3C0h] [rbp+2C0h]
  int v123; // [rsp+3C8h] [rbp+2C8h]
  __int64 v124; // [rsp+3D0h] [rbp+2D0h]
  int v125; // [rsp+3D8h] [rbp+2D8h]
  __int64 v126; // [rsp+3E0h] [rbp+2E0h]
  int v127; // [rsp+3E8h] [rbp+2E8h]
  __int64 v128; // [rsp+3F0h] [rbp+2F0h]
  char *v129; // [rsp+3F8h] [rbp+2F8h]
  int v130; // [rsp+400h] [rbp+300h]
  __int64 v131; // [rsp+408h] [rbp+308h]
  int v132; // [rsp+410h] [rbp+310h]
  __int64 v133; // [rsp+418h] [rbp+318h]
  int v134; // [rsp+420h] [rbp+320h]
  __int64 v135; // [rsp+428h] [rbp+328h]
  char *v136; // [rsp+430h] [rbp+330h]
  int v137; // [rsp+438h] [rbp+338h]
  __int64 v138; // [rsp+440h] [rbp+340h]
  int v139; // [rsp+448h] [rbp+348h]
  __int64 v140; // [rsp+450h] [rbp+350h]
  int v141; // [rsp+458h] [rbp+358h]
  __int64 v142; // [rsp+460h] [rbp+360h]
  _OWORD *v143; // [rsp+468h] [rbp+368h]
  int v144; // [rsp+470h] [rbp+370h]
  __int64 v145; // [rsp+478h] [rbp+378h]
  int v146; // [rsp+480h] [rbp+380h]
  __int64 v147; // [rsp+488h] [rbp+388h]
  int v148; // [rsp+490h] [rbp+390h]
  __int64 v149; // [rsp+498h] [rbp+398h]
  int *v150; // [rsp+4A0h] [rbp+3A0h]
  int v151; // [rsp+4A8h] [rbp+3A8h]
  __int64 v152; // [rsp+4B0h] [rbp+3B0h]
  int v153; // [rsp+4B8h] [rbp+3B8h]
  int (*v154)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+4C0h] [rbp+3C0h]
  int v155; // [rsp+4C8h] [rbp+3C8h]
  __int64 v156; // [rsp+4D0h] [rbp+3D0h]
  __int128 *v157; // [rsp+4D8h] [rbp+3D8h]
  int v158; // [rsp+4E0h] [rbp+3E0h]
  int *v159; // [rsp+4E8h] [rbp+3E8h]
  int v160; // [rsp+4F0h] [rbp+3F0h]
  __int64 v161; // [rsp+4F8h] [rbp+3F8h]
  int v162; // [rsp+500h] [rbp+400h]
  _BYTE v163[40]; // [rsp+508h] [rbp+408h] BYREF

  v5 = a4;
  v58 = a4;
  v56 = 0;
  v8 = 0;
  v57 = 0;
  v9 = 0;
  v59 = 1;
  if ( a3 )
  {
    memset(a2, 0, 0xDCuLL);
LABEL_16:
    v21 = gDrvDpiAdjusted == 0;
    *((_WORD *)a2 + 34) = 220;
    *((_DWORD *)a2 + 16) = 67175425;
    if ( v21 )
      v22 = 96;
    else
      v22 = gdmLogPixels;
    v21 = v56 == 0;
    *((_WORD *)a2 + 83) = v22;
    *((_DWORD *)a2 + 18) = 410910848;
    v23 = *((_DWORD *)a2 + 18);
    if ( !v21 )
      v23 = 410910880;
    *((_DWORD *)a2 + 18) = v23;
    if ( *((_DWORD *)a2 + 22) )
      *((_DWORD *)a2 + 18) |= 0x20000000u;
    if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
    {
      v25 = *((unsigned __int8 *)gpsi + 8681);
      v26 = *((_DWORD *)gpsi + 548);
      v27 = *((_DWORD *)gpsi + 549);
      *((_DWORD *)a2 + 18) |= 0x1C0000u;
      *((_DWORD *)a2 + 42) = v25;
      *((_DWORD *)a2 + 43) = v26;
      *((_DWORD *)a2 + 44) = v27;
    }
    return (unsigned int)v9;
  }
  if ( a5 && !a4 )
  {
    *((_DWORD *)a2 + 42) = *(_DWORD *)(a5 + 168);
    *((_DWORD *)a2 + 43) = *(_DWORD *)(a5 + 172);
    *((_DWORD *)a2 + 44) = *(_DWORD *)(a5 + 176);
    *((_DWORD *)a2 + 46) = *(_DWORD *)(a5 + 184);
    *((_DWORD *)a2 + 45) = *(_DWORD *)(a5 + 180);
    *((_DWORD *)a2 + 53) = *(_DWORD *)(a5 + 212);
    *((_DWORD *)a2 + 54) = *(_DWORD *)(a5 + 216);
    *((_DWORD *)a2 + 19) = *(_DWORD *)(a5 + 76);
    *((_DWORD *)a2 + 20) = *(_DWORD *)(a5 + 80);
    *((_DWORD *)a2 + 21) = *(_DWORD *)(a5 + 84);
    *((_DWORD *)a2 + 22) = *(_DWORD *)(a5 + 88);
    v30 = *(_WORD *)(a5 + 70);
    if ( *((_WORD *)a2 + 35) < v30 )
      v30 = *((_WORD *)a2 + 35);
    *((_WORD *)a2 + 35) = v30;
    memmove((char *)a2 + 220, (const void *)(a5 + 220), v30);
    if ( (*(_DWORD *)(a5 + 72) & 0x20) != 0 )
      v56 = 1;
    goto LABEL_16;
  }
  QueryTable.QueryRoutine = 0LL;
  QueryTable.Flags = 288;
  QueryTable.Name = 0LL;
  v87 = a2 + 11;
  v10 = (_DWORD *)a2 + 42;
  QueryTable.EntryContext = (char *)a2 + 168;
  v94 = (char *)a2 + 184;
  v11 = (_DWORD *)a2 + 43;
  QueryTable.DefaultType = 0x4000000;
  v101 = (char *)a2 + 180;
  v108 = (char *)a2 + 212;
  v115 = (char *)a2 + 216;
  v122 = (char *)a2 + 84;
  v129 = (char *)a2 + 88;
  v136 = (char *)a2 + 76;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v77 = 0LL;
  v78 = 288;
  v79 = 0LL;
  v80 = (char *)a2 + 172;
  v81 = 0x4000000;
  v82 = 0LL;
  v83 = 0;
  v84 = 0LL;
  v85 = 288;
  v86 = 0LL;
  v88 = 0x4000000;
  v89 = 0LL;
  v90 = 0;
  v91 = 0LL;
  v92 = 288;
  v93 = 0LL;
  v95 = 0x4000000;
  v96 = 0LL;
  v97 = 0;
  v98 = 0LL;
  v99 = 288;
  v100 = 0LL;
  v102 = 0x4000000;
  v103 = 0LL;
  v104 = 0;
  v105 = 0LL;
  v106 = 288;
  v107 = 0LL;
  v109 = 0x4000000;
  v110 = 0LL;
  v111 = 0;
  v112 = 0LL;
  v113 = 288;
  v114 = 0LL;
  v116 = 0x4000000;
  v117 = 0LL;
  v118 = 0;
  v119 = 0LL;
  v120 = 288;
  v121 = 0LL;
  v123 = 0x4000000;
  v124 = 0LL;
  v125 = 0;
  v126 = 0LL;
  v127 = 288;
  v128 = 0LL;
  v130 = 0x4000000;
  v131 = 0LL;
  v132 = 0;
  v133 = 0LL;
  v134 = 288;
  v135 = 0LL;
  v137 = 0x4000000;
  v138 = 0LL;
  v141 = 288;
  v143 = a2 + 5;
  v150 = &v56;
  v148 = 288;
  v154 = DrvDriverExtraCallback;
  v144 = 0x4000000;
  v151 = 0x4000000;
  v159 = &v57;
  v139 = 0;
  v140 = 0LL;
  v142 = 0LL;
  v145 = 0LL;
  v146 = 0;
  v147 = 0LL;
  v149 = 0LL;
  v152 = 0LL;
  v153 = 0;
  v155 = 0;
  v156 = 0LL;
  v157 = a2;
  v158 = 4;
  v160 = 0x10000;
  v161 = 0LL;
  v162 = 0;
  memset(v163, 0, sizeof(v163));
  if ( !*((_WORD *)a2 + 35) )
  {
    v154 = 0LL;
    v155 = 0;
    v156 = 0LL;
    *((_WORD *)a2 + 35) = 0;
  }
  v12 = gProtocolType;
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu && (*(_BYTE *)(a1 + 160) & 8) != 0 )
  {
    v31 = *(__int128 **)(a1 + 288);
    if ( v31 )
    {
      *a2 = *v31;
      a2[1] = v31[1];
      a2[2] = v31[2];
      a2[3] = v31[3];
      a2[4] = v31[4];
      a2[5] = v31[5];
      a2[6] = v31[6];
      v28 = v31[7];
      v29 = v31 + 8;
      a2[7] = v28;
      a2[8] = *v29;
      a2[9] = v29[1];
      a2[10] = v29[2];
      a2[11] = v29[3];
      a2[12] = v29[4];
      *((_QWORD *)a2 + 26) = *((_QWORD *)v29 + 10);
      *((_DWORD *)a2 + 54) = *((_DWORD *)v29 + 22);
      memmove((char *)a2 + 220, (const void *)(*(_QWORD *)(a1 + 288) + 220LL), *((unsigned __int16 *)a2 + 35));
      goto LABEL_16;
    }
  }
  p_Name = &QueryTable.Name;
  v14 = 13LL;
  v15 = off_1C00FF7B0;
  do
  {
    v16 = *v15++;
    *p_Name = v16;
    p_Name += 7;
    --v14;
  }
  while ( v14 );
  if ( v5 )
  {
    UpdateMonitorDevices();
    v32 = a2[1];
    v60 = *a2;
    v33 = a2[2];
    v61 = v32;
    v34 = a2[3];
    v62 = v33;
    v35 = a2[4];
    v63 = v34;
    v36 = a2[5];
    v64 = v35;
    v37 = a2[6];
    v65 = v36;
    v38 = a2[8];
    v66 = v37;
    v39 = *((_QWORD *)a2 + 26);
    v67 = a2[7];
    v40 = a2[9];
    v68 = v38;
    v41 = a2[10];
    v69 = v40;
    v42 = a2[11];
    v70 = v41;
    v43 = a2[12];
    v71 = v42;
    v72 = v43;
    v73 = v39;
    v74 = *((_DWORD *)a2 + 54);
    *v10 = 0;
    *v11 = 0;
    *((_QWORD *)a2 + 22) = 0LL;
    *((_DWORD *)a2 + 46) = 0;
    *(_QWORD *)((char *)a2 + 212) = 0LL;
    *(_QWORD *)((char *)a2 + 76) = 0LL;
    *(_QWORD *)((char *)a2 + 84) = 0LL;
    memset(v75, 0, sizeof(v75));
    v8 = *(_DWORD *)(a1 + 224);
    v55 = v8;
    v44 = 0;
    if ( v8 )
    {
      v45 = v75[43];
      v46 = v75[44];
      do
      {
        v47 = *(_QWORD *)(a1 + 232);
        if ( (*(_BYTE *)(v47 + 20LL * v44) & 3) == 3 )
        {
          RegistryHandleFromDeviceMap = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                         (unsigned __int16 *)a1,
                                                         1,
                                                         (unsigned int *)(v47 + 4 * (5LL * v44 + 1)),
                                                         0LL,
                                                         0,
                                                         0LL,
                                                         gProtocolType);
          v49 = (WCHAR *)RegistryHandleFromDeviceMap;
          if ( RegistryHandleFromDeviceMap
            && (v50 = RtlQueryRegistryValues(0x40000000u, RegistryHandleFromDeviceMap, &QueryTable, 0LL, 0LL),
                ZwClose(v49),
                v51 = v50 < 0,
                v10 = (_DWORD *)a2 + 42,
                !v51)
            && *v10
            && (v52 = *((_DWORD *)a2 + 43)) != 0
            && (v53 = *((_DWORD *)a2 + 44)) != 0
            && (!v45 || v52 < v45 || v52 == v45 && v53 < v46) )
          {
            v8 = v44;
            v55 = v44;
            v45 = *((_DWORD *)a2 + 43);
            v46 = *((_DWORD *)a2 + 44);
          }
          else
          {
            v8 = v55;
          }
        }
        ++v44;
      }
      while ( v44 < *(_DWORD *)(a1 + 224) );
      v5 = v58;
    }
    *((_WORD *)a2 + 35) = WORD3(v64);
    *v10 = DWORD2(v70);
    *((_DWORD *)a2 + 43) = HIDWORD(v70);
    *((_DWORD *)a2 + 44) = v71;
    *(_QWORD *)((char *)a2 + 180) = *(_QWORD *)((char *)&v71 + 4);
    *((_DWORD *)a2 + 53) = HIDWORD(v73);
    *((_DWORD *)a2 + 54) = v74;
    *((_DWORD *)a2 + 19) = HIDWORD(v64);
    *((_QWORD *)a2 + 10) = v65;
    *((_DWORD *)a2 + 22) = DWORD2(v65);
    v12 = gProtocolType;
  }
  if ( v8 < *(_DWORD *)(a1 + 224) && v5 )
  {
    v9 = -1073741823;
    v54 = (WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                     (unsigned __int16 *)a1,
                     1,
                     (unsigned int *)(*(_QWORD *)(a1 + 232) + 4 * (5LL * v8 + 1)),
                     0LL,
                     0,
                     0LL,
                     v12);
    if ( !v54 )
      return (unsigned int)v9;
    v9 = RtlQueryRegistryValues(0x40000000u, v54, &QueryTable, 0LL, 0LL);
    ZwClose(v54);
    if ( v9 < 0 )
      return (unsigned int)v9;
LABEL_14:
    if ( v56
      && !*((_DWORD *)a2 + 42)
      && !*((_DWORD *)a2 + 43)
      && !*((_DWORD *)a2 + 44)
      && !*((_DWORD *)a2 + 46)
      && !*((_DWORD *)a2 + 45)
      && !gbBaseVideo )
    {
      DrvLogDisplayDriverEvent(6);
    }
    goto LABEL_16;
  }
  v17 = v59;
  v18 = 1;
  while ( 1 )
  {
    v19 = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)a1, v17, 0LL, 0LL, 0, 0LL, v12);
    v20 = (WCHAR *)v19;
    if ( v19 )
    {
      v9 = RtlQueryRegistryValues(0x40000000u, v19, &QueryTable, 0LL, 0LL);
      ZwClose(v20);
      if ( v9 >= 0 )
        goto LABEL_14;
    }
    else
    {
      v9 = -1073741823;
    }
    ++v18;
    v17 = 0;
    if ( v18 > 2 )
      return (unsigned int)v9;
    v12 = gProtocolType;
  }
}
