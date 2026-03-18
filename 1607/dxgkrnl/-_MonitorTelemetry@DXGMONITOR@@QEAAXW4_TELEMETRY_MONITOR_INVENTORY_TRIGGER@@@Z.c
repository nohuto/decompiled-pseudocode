/*
 * XREFs of ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C00F2778
 * Callers:
 *     ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C00F0BDC (-_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 *     ?_MonitorTelemetry@MONITOR_MGR@@QEAAXXZ @ 0x1C01AF9BC (-_MonitorTelemetry@MONITOR_MGR@@QEAAXXZ.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C000A364 (EDIDV1_IsEDIDBaseBlock.c)
 *     TraceLoggingProviderEnabled @ 0x1C000B3EC (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000B414 (_TlgKeywordOn.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C000CEBC (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     EDIDV1_ObtainMonitorSerialNumber @ 0x1C000EB78 (EDIDV1_ObtainMonitorSerialNumber.c)
 *     EDIDV1_ObtainMonitorManufacturerName @ 0x1C000EC88 (EDIDV1_ObtainMonitorManufacturerName.c)
 *     EDIDV1_ObtainMonitorProductCodeID @ 0x1C000ECEC (EDIDV1_ObtainMonitorProductCodeID.c)
 *     EDIDV1_ObtainMonitorManufactureDate @ 0x1C000ED5C (EDIDV1_ObtainMonitorManufactureDate.c)
 *     _TlgWrite @ 0x1C000F358 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C000F984 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z @ 0x1C00F06A0 (-_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z.c)
 */

void __fastcall DXGMONITOR::_MonitorTelemetry(__int64 a1, int a2)
{
  unsigned __int8 v4; // r12
  unsigned __int16 v5; // r14
  __int64 v6; // r8
  __int64 v7; // r9
  int HWMonitorBaseEDIDBlock; // eax
  unsigned __int8 *v9; // r15
  unsigned __int8 v10; // r9
  __int64 v11; // rcx
  _DWORD *v12; // rbx
  __int16 v13; // r9
  BOOLEAN v14; // al
  __int64 v15; // rdx
  unsigned __int16 *v16; // rax
  int v17; // ecx
  LPCGUID v18; // r9
  __int16 v19; // r9
  BOOLEAN v20; // al
  __int64 v21; // rdx
  unsigned __int16 *v22; // rax
  LPCGUID v23; // r9
  int v24; // r10d
  SIZE_T v25; // rax
  char *v26; // rbx
  unsigned __int8 i; // r9
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rcx
  __int16 v32; // r10
  unsigned int v33; // r11d
  BOOLEAN v34; // al
  __int64 v35; // rdx
  __int64 v36; // r11
  unsigned __int16 *v37; // rax
  int v38; // ecx
  const GUID *v39; // r9
  bool v40; // zf
  int v41; // eax
  __int64 v42; // r11
  int v43; // [rsp+38h] [rbp-D0h] BYREF
  _WORD v44[2]; // [rsp+3Ch] [rbp-CCh] BYREF
  int v45; // [rsp+40h] [rbp-C8h] BYREF
  int v46; // [rsp+44h] [rbp-C4h] BYREF
  CHAR psz[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v48; // [rsp+4Ch] [rbp-BCh] BYREF
  int v49; // [rsp+50h] [rbp-B8h] BYREF
  int v50; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v51; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v52; // [rsp+5Ch] [rbp-ACh] BYREF
  int v53; // [rsp+60h] [rbp-A8h] BYREF
  int v54; // [rsp+64h] [rbp-A4h] BYREF
  int v55; // [rsp+68h] [rbp-A0h] BYREF
  int v56; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v57; // [rsp+70h] [rbp-98h] BYREF
  int v58; // [rsp+74h] [rbp-94h] BYREF
  int v59; // [rsp+78h] [rbp-90h] BYREF
  int v60; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v61; // [rsp+80h] [rbp-88h] BYREF
  __int64 v62; // [rsp+88h] [rbp-80h] BYREF
  GUID ActivityId; // [rsp+90h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  int *v65; // [rsp+C8h] [rbp-40h]
  __int64 v66; // [rsp+D0h] [rbp-38h]
  int *v67; // [rsp+D8h] [rbp-30h]
  __int64 v68; // [rsp+E0h] [rbp-28h]
  void *v69; // [rsp+E8h] [rbp-20h]
  __int64 v70; // [rsp+F0h] [rbp-18h]
  int *v71; // [rsp+F8h] [rbp-10h]
  __int64 v72; // [rsp+100h] [rbp-8h]
  int *v73; // [rsp+108h] [rbp+0h]
  __int64 v74; // [rsp+110h] [rbp+8h]
  int *v75; // [rsp+118h] [rbp+10h]
  __int64 v76; // [rsp+120h] [rbp+18h]
  int *v77; // [rsp+128h] [rbp+20h]
  __int64 v78; // [rsp+130h] [rbp+28h]
  int *v79; // [rsp+138h] [rbp+30h]
  __int64 v80; // [rsp+140h] [rbp+38h]
  __int64 v81; // [rsp+148h] [rbp+40h]
  int v82; // [rsp+150h] [rbp+48h] BYREF
  int v83; // [rsp+154h] [rbp+4Ch]
  int *v84; // [rsp+158h] [rbp+50h]
  __int64 v85; // [rsp+160h] [rbp+58h]
  __int64 v86; // [rsp+168h] [rbp+60h]
  __int64 v87; // [rsp+170h] [rbp+68h]
  __int64 *v88; // [rsp+178h] [rbp+70h]
  __int64 v89; // [rsp+180h] [rbp+78h]
  int *v90; // [rsp+188h] [rbp+80h]
  __int64 v91; // [rsp+190h] [rbp+88h]
  __int64 v92; // [rsp+198h] [rbp+90h]
  int v93; // [rsp+1A0h] [rbp+98h] BYREF
  int v94; // [rsp+1A4h] [rbp+9Ch]
  __int64 *v95; // [rsp+1A8h] [rbp+A0h]
  __int64 v96; // [rsp+1B0h] [rbp+A8h]
  unsigned __int8 *v97; // [rsp+1B8h] [rbp+B0h]
  __int64 v98; // [rsp+1C0h] [rbp+B8h] BYREF
  __int64 v99; // [rsp+1C8h] [rbp+C0h]
  __int64 v100; // [rsp+1D0h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v102; // [rsp+1E8h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v103; // [rsp+1F8h] [rbp+F0h] BYREF
  int *v104; // [rsp+208h] [rbp+100h]
  __int64 v105; // [rsp+210h] [rbp+108h]
  _WORD *v106; // [rsp+218h] [rbp+110h]
  __int64 v107; // [rsp+220h] [rbp+118h]
  int *v108; // [rsp+228h] [rbp+120h]
  __int64 v109; // [rsp+230h] [rbp+128h]
  int *v110; // [rsp+238h] [rbp+130h]
  __int64 v111; // [rsp+240h] [rbp+138h]
  int *v112; // [rsp+248h] [rbp+140h]
  __int64 v113; // [rsp+250h] [rbp+148h]
  int *v114; // [rsp+258h] [rbp+150h]
  __int64 v115; // [rsp+260h] [rbp+158h]
  int *v116; // [rsp+268h] [rbp+160h]
  __int64 v117; // [rsp+270h] [rbp+168h]
  int *v118; // [rsp+278h] [rbp+170h]
  __int64 v119; // [rsp+280h] [rbp+178h]
  int *v120; // [rsp+288h] [rbp+180h]
  __int64 v121; // [rsp+290h] [rbp+188h]
  unsigned int *v122; // [rsp+298h] [rbp+190h]
  __int64 v123; // [rsp+2A0h] [rbp+198h]
  unsigned int *v124; // [rsp+2A8h] [rbp+1A0h]
  __int64 v125; // [rsp+2B0h] [rbp+1A8h]
  _DWORD *v126; // [rsp+2B8h] [rbp+1B0h]
  __int64 v127; // [rsp+2C0h] [rbp+1B8h]
  char *v128; // [rsp+2C8h] [rbp+1C0h]
  _DWORD v129[2]; // [rsp+2D0h] [rbp+1C8h] BYREF
  EVENT_DATA_DESCRIPTOR v130; // [rsp+2D8h] [rbp+1D0h] BYREF
  _WORD *v131; // [rsp+2F8h] [rbp+1F0h]
  __int64 v132; // [rsp+300h] [rbp+1F8h]
  int *v133; // [rsp+308h] [rbp+200h]
  __int64 v134; // [rsp+310h] [rbp+208h]
  void *v135; // [rsp+318h] [rbp+210h]
  __int64 v136; // [rsp+320h] [rbp+218h]
  unsigned int *v137; // [rsp+328h] [rbp+220h]
  __int64 v138; // [rsp+330h] [rbp+228h]
  unsigned int *v139; // [rsp+338h] [rbp+230h]
  __int64 v140; // [rsp+340h] [rbp+238h]
  int *v141; // [rsp+348h] [rbp+240h]
  __int64 v142; // [rsp+350h] [rbp+248h]
  int *v143; // [rsp+358h] [rbp+250h]
  __int64 v144; // [rsp+360h] [rbp+258h]
  _DWORD *v145; // [rsp+368h] [rbp+260h]
  __int64 v146; // [rsp+370h] [rbp+268h]
  __int64 v147; // [rsp+378h] [rbp+270h]
  _DWORD v148[2]; // [rsp+380h] [rbp+278h] BYREF
  int *v149; // [rsp+388h] [rbp+280h]
  __int64 v150; // [rsp+390h] [rbp+288h]
  __int64 v151; // [rsp+398h] [rbp+290h]
  __int64 v152; // [rsp+3A0h] [rbp+298h]
  CHAR *v153; // [rsp+3A8h] [rbp+2A0h]
  __int64 v154; // [rsp+3B0h] [rbp+2A8h]
  _DWORD *v155; // [rsp+3B8h] [rbp+2B0h]
  __int64 v156; // [rsp+3C0h] [rbp+2B8h]
  __int64 v157; // [rsp+3C8h] [rbp+2C0h]
  _DWORD v158[2]; // [rsp+3D0h] [rbp+2C8h] BYREF
  CHAR v159[8]; // [rsp+3D8h] [rbp+2D0h] BYREF
  CHAR v160; // [rsp+3E0h] [rbp+2D8h] BYREF
  __int64 v161; // [rsp+3E1h] [rbp+2D9h]
  int v162; // [rsp+3E9h] [rbp+2E1h]
  char v163; // [rsp+3EDh] [rbp+2E5h]

  v45 = a2;
  *(_QWORD *)v159 = 0LL;
  v4 = 0;
  v5 = 3;
  EtwActivityIdControl(3u, &ActivityId);
  HWMonitorBaseEDIDBlock = DXGMONITOR::_GetHWMonitorBaseEDIDBlock((DXGMONITOR *)a1, (void **)v159, v6, v7);
  v9 = *(unsigned __int8 **)v159;
  if ( HWMonitorBaseEDIDBlock >= 0 )
  {
    v4 = 0;
    if ( (int)EDIDV1_IsEDIDBaseBlock(*(_QWORD **)v159) >= 0 )
      v4 = v10;
  }
  if ( v9 )
  {
    memset(psz, 0, sizeof(psz));
    *(_DWORD *)&v159[1] = 0;
    v161 = 0LL;
    v162 = 0;
    v163 = 0;
    v159[0] = 0;
    v160 = 0;
    LOBYTE(v43) = 0;
    v44[0] = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    EDIDV1_ObtainMonitorManufacturerName(v9);
    EDIDV1_ObtainMonitorProductCodeID(v9);
    EDIDV1_ObtainMonitorSerialNumber(v9, &v160);
    EDIDV1_ObtainMonitorManufactureDate(v9);
    EDID_V1_GetPhysicalSize(v11, v9, &v51, &v52);
    v12 = *(_DWORD **)(a1 + 176);
    if ( v12 )
    {
      v53 = v12[5];
      v54 = v12[6];
      v55 = v12[2];
      v48 = v12[14];
      v49 = v12[7];
      v50 = v12[8];
    }
    if ( *(_DWORD *)(a1 + 112) > 1u
      && TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C00568C0, 0, 0x400000000000uLL) )
    {
      if ( (unsigned int)(v24 - 1) <= 3 )
        v5 = v24 - 1;
      v25 = 136LL * v5;
      if ( !is_mul_ok(v5, 0x88uLL) )
        v25 = -1LL;
      v26 = (char *)operator new(v25, 0x4D677844u, PagedPool);
      if ( !v26 )
        v5 = 0;
      for ( i = 0; i < v5; *(_OWORD *)&v26[v30 + 120] = *(_OWORD *)(v31 + 136) )
      {
        v28 = i + 1;
        v29 = i++;
        v30 = 136 * v29;
        *(_DWORD *)&v26[v30] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v28) + 8LL);
        *(_DWORD *)&v26[v30 + 4] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v28) + 12LL);
        v31 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v28);
        *(_OWORD *)&v26[v30 + 8] = *(_OWORD *)(v31 + 24);
        *(_OWORD *)&v26[v30 + 24] = *(_OWORD *)(v31 + 40);
        *(_OWORD *)&v26[v30 + 40] = *(_OWORD *)(v31 + 56);
        *(_OWORD *)&v26[v30 + 56] = *(_OWORD *)(v31 + 72);
        *(_OWORD *)&v26[v30 + 72] = *(_OWORD *)(v31 + 88);
        *(_OWORD *)&v26[v30 + 88] = *(_OWORD *)(v31 + 104);
        *(_OWORD *)&v26[v30 + 104] = *(_OWORD *)(v31 + 120);
      }
      if ( (unsigned int)dword_1C00568C0 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C00568C0, 0x400000000020uLL) )
      {
        LOWORD(v46) = v32;
        v65 = &v46;
        v66 = 2LL;
        v56 = MEMORY[0xFFFFF780000002C4];
        v68 = 4LL;
        v67 = &v56;
        v69 = &gDISeqId;
        v70 = 4LL;
        v57 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C00568C0, 0, 0x400000000000uLL);
        v71 = &v57;
        v72 = v33;
        v34 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C00568C0, 0, 0x200000000000uLL);
        v35 = *(_QWORD *)(a1 + 16);
        v73 = &v58;
        v75 = &v45;
        v59 = *(_DWORD *)(a1 + 32);
        v77 = &v59;
        v79 = &v82;
        v81 = *(_QWORD *)(a1 + 80);
        v82 = *(unsigned __int16 *)(a1 + 72);
        v58 = v34;
        v74 = v36;
        v76 = v36;
        v78 = v36;
        v80 = 2LL;
        v83 = 0;
        v85 = v36;
        v87 = v36;
        v60 = v4;
        v84 = &v60;
        v86 = a1 + 28;
        v62 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 8) + 16LL) + 268LL);
        v88 = &v62;
        v89 = 8LL;
        v37 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v35 + 8) + 16LL) + 1072LL);
        v90 = &v93;
        v91 = 2LL;
        v38 = *v37;
        v92 = *((_QWORD *)v37 + 1);
        v95 = &v98;
        v93 = v38;
        v94 = 0;
        v96 = 2LL;
        v97 = v9;
        v99 = a1 + 112;
        v98 = 128LL;
        v100 = v36;
        TlgCreateSz(&pDesc, psz);
        TlgCreateSz(&v102, v159);
        TlgCreateSz(&v103, &v160);
        v40 = *(_QWORD *)(a1 + 176) == (_QWORD)v39;
        v106 = v44;
        v41 = (int)v39;
        v104 = &v43;
        LOBYTE(v41) = !v40;
        v105 = 1LL;
        v61 = v41;
        v108 = &v61;
        v110 = &v53;
        v112 = &v54;
        v114 = &v55;
        v116 = &v48;
        v118 = &v49;
        v120 = &v50;
        v122 = &v51;
        v124 = &v52;
        v126 = v129;
        v107 = 2LL;
        v109 = v42;
        v111 = v42;
        v113 = v42;
        v129[0] = 136 * v5;
        v115 = v42;
        v117 = v42;
        v119 = v42;
        v121 = v42;
        v123 = v42;
        v125 = v42;
        v127 = 2LL;
        v128 = v26;
        v129[1] = 0;
        TlgWrite((TraceLoggingHProvider)&dword_1C00568C0, &unk_1C003E41F, &ActivityId, v39, 0x23u, &pData);
      }
      if ( v26 )
        operator delete(v26);
    }
    else if ( (unsigned int)dword_1C00568C0 > 5 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C00568C0, 0x800000000020uLL) )
      {
        LOWORD(v46) = v13;
        v65 = &v46;
        v66 = 2LL;
        v61 = MEMORY[0xFFFFF780000002C4];
        v67 = &v61;
        v69 = &gDISeqId;
        v68 = 4LL;
        v70 = 4LL;
        v60 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C00568C0, 0, 0x400000000000uLL);
        v71 = &v60;
        v72 = 4LL;
        v14 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C00568C0, 0, 0x200000000000uLL);
        v15 = *(_QWORD *)(a1 + 16);
        v73 = &v59;
        v58 = v45;
        v75 = &v58;
        v57 = *(_DWORD *)(a1 + 32);
        v77 = &v57;
        v79 = &v82;
        v81 = *(_QWORD *)(a1 + 80);
        v82 = *(unsigned __int16 *)(a1 + 72);
        v59 = v14;
        v74 = 4LL;
        v76 = 4LL;
        v78 = 4LL;
        v80 = 2LL;
        v83 = 0;
        v85 = 4LL;
        v87 = 4LL;
        v56 = v4;
        v84 = &v56;
        v86 = a1 + 28;
        v62 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 16LL) + 268LL);
        v88 = &v62;
        v89 = 8LL;
        v16 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 16LL) + 1072LL);
        v90 = &v93;
        v91 = 2LL;
        v17 = *v16;
        v92 = *((_QWORD *)v16 + 1);
        v95 = &v98;
        v93 = v17;
        v94 = 0;
        v96 = 2LL;
        v97 = v9;
        v98 = 128LL;
        v99 = a1 + 112;
        v100 = 4LL;
        TlgCreateSz(&pDesc, psz);
        TlgCreateSz(&v102, v159);
        TlgCreateSz(&v103, &v160);
        v105 = 1LL;
        v106 = v44;
        v104 = &v43;
        v107 = 2LL;
        v109 = 4LL;
        v111 = 4LL;
        v45 = v12 != 0LL;
        v108 = &v45;
        v110 = &v53;
        v112 = &v54;
        v114 = &v55;
        v116 = &v48;
        v118 = &v49;
        v120 = &v50;
        v122 = &v51;
        v124 = &v52;
        v113 = 4LL;
        v115 = 4LL;
        v117 = 4LL;
        v119 = 4LL;
        v121 = 4LL;
        v123 = 4LL;
        v125 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C00568C0, &unk_1C003E21F, &ActivityId, v18, 0x21u, &pData);
      }
    }
  }
  else if ( (unsigned int)dword_1C00568C0 > 5
         && TlgKeywordOn((TraceLoggingHProvider)&dword_1C00568C0, 0x800000000020uLL) )
  {
    v44[0] = v19;
    v131 = v44;
    v132 = 2LL;
    v45 = MEMORY[0xFFFFF780000002C4];
    v134 = 4LL;
    v133 = &v45;
    v135 = &gDISeqId;
    v136 = 4LL;
    v52 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C00568C0, 0, 0x400000000000uLL);
    v137 = &v52;
    v138 = 4LL;
    v20 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C00568C0, 0, 0x200000000000uLL);
    v21 = *(_QWORD *)(a1 + 16);
    v139 = &v51;
    v141 = &v50;
    v49 = *(_DWORD *)(a1 + 32);
    v143 = &v49;
    v145 = v148;
    v147 = *(_QWORD *)(a1 + 80);
    v148[0] = *(unsigned __int16 *)(a1 + 72);
    v51 = v20;
    v140 = 4LL;
    v50 = a2;
    v142 = 4LL;
    v144 = 4LL;
    v146 = 2LL;
    v148[1] = 0;
    v150 = 4LL;
    v152 = 4LL;
    v48 = v4;
    v149 = &v48;
    v151 = a1 + 28;
    *(_QWORD *)v159 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) + 16LL) + 268LL);
    v153 = v159;
    v154 = 8LL;
    v22 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v21 + 8) + 16LL) + 1072LL);
    v155 = v158;
    v156 = 2LL;
    LODWORD(v21) = *v22;
    v157 = *((_QWORD *)v22 + 1);
    v158[0] = v21;
    v158[1] = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1C00568C0, &unk_1C003E62B, &ActivityId, v23, 0x10u, &v130);
  }
}
