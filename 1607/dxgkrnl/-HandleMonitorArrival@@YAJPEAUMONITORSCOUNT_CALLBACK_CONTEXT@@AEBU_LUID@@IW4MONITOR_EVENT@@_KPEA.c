/*
 * XREFs of ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179100
 * Callers:
 *     DxgkSimulateMonitorsIfNecessary @ 0x1C017ABA0 (DxgkSimulateMonitorsIfNecessary.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000AF10 (DxgkLogCodePointPacket.c)
 *     IsInternalVideoOutput @ 0x1C000B478 (IsInternalVideoOutput.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0089D20 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0089D68 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0089DE4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C0089E20 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008A118 (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C008AB70 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C008CD28 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008D0CC (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00B8BD4 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BC314 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?DetermineDefaultTopology@@YA?AW4MultiScreenDefaultShellTopology@@IE@Z @ 0x1C01785B4 (-DetermineDefaultTopology@@YA-AW4MultiScreenDefaultShellTopology@@IE@Z.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C0178D54 (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@AEBUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C0178E8C (-GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@.c)
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C0178F4C (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 *     ?IsValidCloneConfiguration@@YAEPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C017A154 (-IsValidCloneConfiguration@@YAEPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C017A2A8 (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C01AAD64 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C01AB204 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C01AB3FC (-RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 */

__int64 __fastcall HandleMonitorArrival(
        __int64 a1,
        const struct _LUID *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v6; // r12
  __int64 v8; // r15
  __int64 v11; // rcx
  struct CCD_BTL *v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // edi
  __int64 v19; // rbx
  _QWORD *v20; // rax
  int v21; // ebx
  __int64 v22; // rax
  unsigned int v23; // ecx
  unsigned int v24; // r8d
  unsigned int v25; // edx
  __int16 v26; // cx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rbx
  _QWORD *v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rbx
  _QWORD *v34; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v35; // ecx
  int v36; // ebx
  int v37; // r12d
  __int64 v38; // rax
  unsigned int v39; // edx
  __int64 v40; // rbx
  unsigned int i; // r15d
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rcx
  _QWORD *v52; // rax
  int v53; // r12d
  _QWORD *v54; // rax
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // r15
  __int64 v58; // rax
  __int64 v59; // r8
  __int64 v60; // r9
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // rax
  unsigned int v65; // r9d
  unsigned int v66; // r8d
  unsigned int v67; // edx
  unsigned int v68; // r15d
  enum MultiScreenShellCapabilities *v69; // rdx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  struct _LUID *v71; // rax
  bool v72; // al
  __int64 v73; // rcx
  unsigned __int16 v74; // bx
  __int64 v75; // rax
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rcx
  __int64 v79; // rcx
  unsigned __int16 v80; // dx
  __int64 v81; // r8
  __int64 v82; // r9
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rbx
  __int64 v86; // rax
  __int64 v87; // rax
  unsigned int j; // ebx
  __int64 v89; // rcx
  unsigned __int16 v90; // ax
  __int16 v91; // bx
  unsigned __int16 v92; // bx
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // r8
  __int64 v96; // r9
  int v97; // eax
  __int64 v98; // rcx
  __int64 v99; // r15
  __int64 v100; // rax
  unsigned int v101; // r15d
  char v102; // al
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v106; // rbx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v107; // rax
  __int128 v108; // xmm0
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v109; // rbx
  char v110; // al
  __int64 v111; // rcx
  __int64 v112; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v113; // rax
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rcx
  int v117; // eax
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rbx
  __int64 v122; // rax
  __int64 v123; // r8
  __int64 v124; // r9
  int v125; // eax
  __int64 v126; // rcx
  __int64 v127; // r15
  __int64 v128; // rax
  int v129; // eax
  __int64 v130; // rcx
  __int64 v131; // rbx
  __int64 v132; // rax
  __int64 v133; // r8
  __int64 v134; // r9
  int v135; // eax
  __int64 v136; // rcx
  __int64 v137; // r15
  __int64 v138; // rax
  int v139; // eax
  __int64 v140; // rcx
  __int64 v141; // rbx
  _QWORD *v142; // rax
  _QWORD *v143; // rax
  unsigned __int8 v144[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v145; // [rsp+5Ch] [rbp-ACh]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v146; // [rsp+60h] [rbp-A8h] BYREF
  int LaptopSpecialCaseFlags; // [rsp+64h] [rbp-A4h]
  int v148; // [rsp+68h] [rbp-A0h]
  int v149; // [rsp+6Ch] [rbp-9Ch] BYREF
  int UnusedVidpnSourceId; // [rsp+70h] [rbp-98h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v151; // [rsp+74h] [rbp-94h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v152[8]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v153; // [rsp+B8h] [rbp-50h]
  int v154; // [rsp+C4h] [rbp-44h]
  int v155; // [rsp+C8h] [rbp-40h]
  struct _D3DKMT_GETPATHSMODALITY *v156[12]; // [rsp+D8h] [rbp-30h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v157[8]; // [rsp+138h] [rbp+30h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v158; // [rsp+178h] [rbp+70h]

  v6 = a4;
  v8 = a3;
  if ( a5 == 4 )
  {
    *(_BYTE *)(a1 + 25) = 0;
    return 0LL;
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v152, 8u, 0);
  v12 = CCD_BTL::Global(v11);
  v13 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v152, v12);
  v18 = 0;
  v19 = v13;
  if ( v13 >= 0 )
  {
    v21 = dword_1C0057014;
    if ( (unsigned int)dword_1C0057014 > 1 )
    {
      v22 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
      *(_QWORD *)(v22 + 24) = 3877LL;
      WdLogEvent5_WdWarning(v22);
      v23 = 82;
      v24 = 1;
      v25 = v21;
LABEL_12:
      DxgkLogCodePointPacket(v23, v25, v24, 0);
      goto LABEL_13;
    }
    if ( v153 )
      v26 = *(_WORD *)(v153 + 20);
    else
      v26 = 0;
    if ( !v26 )
    {
      v25 = 1;
      v24 = 0;
      v23 = 62;
      goto LABEL_12;
    }
    v27 = DisplayConfigHandleMonitorInvalidation(3LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
    v29 = v27;
    if ( v27 < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v28);
      v30[3] = v29;
      v30[4] = a2->HighPart;
      v30[5] = a2->LowPart;
      v30[6] = v8;
      v30[7] = v6;
      WdLogEvent5_WdError(v30);
    }
    v144[1] = 1;
    v144[2] = 0;
    v144[0] = 0;
    v31 = QueryMonitorType(
            a2,
            v8,
            (enum _DMM_VIDPN_MONITOR_TYPE *)&v149,
            &v146,
            &v151,
            &v144[3],
            &v144[1],
            &v144[2],
            v144);
    v33 = v31;
    if ( v31 >= 0 )
    {
      v36 = v149;
      v35 = v146;
    }
    else
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdError(v32);
      v34[3] = v33;
      v34[4] = a2->HighPart;
      v34[5] = a2->LowPart;
      v34[6] = v8;
      v34[7] = v6;
      WdLogEvent5_WdError(v34);
      v35 = D3DKMDT_VOT_UNINITIALIZED;
      v144[3] = 0;
      v36 = 0;
      v146 = D3DKMDT_VOT_UNINITIALIZED;
      v149 = 0;
      v144[1] = 0;
      v144[2] = 0;
      v144[0] = 0;
    }
    if ( !(_DWORD)v6 && (unsigned int)(v35 - 10) <= 1 )
      *(_BYTE *)(a1 + 28) = 1;
    LaptopSpecialCaseFlags = GetLaptopSpecialCaseFlags(
                               (const struct CCD_TOPOLOGY *)v152,
                               a2,
                               v8,
                               v35,
                               (const struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1);
    v37 = LaptopSpecialCaseFlags;
    if ( LaptopSpecialCaseFlags )
    {
      if ( LaptopSpecialCaseFlags == 1 )
      {
        *(_BYTE *)(a1 + 26) = 1;
      }
      else if ( LaptopSpecialCaseFlags == 8 )
      {
        *(_BYTE *)(a1 + 27) = 1;
      }
      else
      {
        v38 = WdLogNewEntry5_WdAssertion((unsigned int)(LaptopSpecialCaseFlags - 1));
        *(_QWORD *)(v38 + 24) = 3975LL;
        WdLogEvent5_WdAssertion(v38);
      }
    }
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v157, 8u, 0);
    if ( v37 && v36 == 1 )
      v39 = v37 | 0x86;
    else
      v39 = 143;
    LODWORD(v40) = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)v157, v39, 0LL);
    if ( (int)v40 >= 0 )
    {
      if ( v151 == D3DKMDT_VOT_MIRACAST )
      {
        for ( i = 0; ; ++i )
        {
          v42 = v158 ? *((unsigned __int16 *)v158 + 10) : 0LL;
          if ( i >= (unsigned __int16)v42 )
            break;
          if ( *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v157, i) + 5) == a3 )
            goto LABEL_42;
        }
        v43 = WdLogNewEntry5_WdError(v42);
        *(_QWORD *)(v43 + 24) = 4025LL;
        WdLogEvent5_WdError(v43);
        LODWORD(v40) = -1073741823;
LABEL_42:
        LODWORD(v8) = a3;
      }
      if ( !IsValidCloneConfiguration(v158) )
      {
        v47 = WdLogNewEntry5_WdError(v44);
        *(_QWORD *)(v47 + 24) = 4035LL;
        WdLogEvent5_WdError(v47);
        LODWORD(v40) = -1073741823;
      }
      if ( (int)v40 >= 0 )
      {
        v48 = CCD_TOPOLOGY::Persist(v157, 0LL, v45, v46);
        v40 = v48;
        if ( v48 < 0 )
        {
          v50 = (_QWORD *)WdLogNewEntry5_WdError(v49);
          v50[3] = v40;
          v50[4] = a2->HighPart;
          v50[5] = a2->LowPart;
          v50[6] = (unsigned int)v8;
          v50[7] = a4;
          WdLogEvent5_WdError(v50);
          DxgkLogCodePointPacket(0x3Eu, 2u, v40, 0);
        }
        *(_DWORD *)(a1 + 32) |= 0x40u;
      }
    }
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v157);
    if ( (int)v40 >= 0 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdEvent(v51);
      v53 = a4;
      v52[3] = a2->HighPart;
      v52[4] = a2->LowPart;
      v52[5] = (unsigned int)v8;
      v52[7] = a5;
      v52[6] = a4;
      WdLogEvent5_WdEvent(v52);
LABEL_133:
      v68 = a3;
LABEL_134:
      v139 = DisplayConfigHandleMonitorInvalidation(1LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
      v141 = v139;
      if ( v139 < 0 )
      {
        v142 = (_QWORD *)WdLogNewEntry5_WdError(v140);
        v142[3] = v141;
        v142[4] = a2->HighPart;
        v142[5] = a2->LowPart;
        v142[6] = v68;
        v142[7] = v53;
        WdLogEvent5_WdError(v142);
        LODWORD(v141) = 0;
      }
      v143 = (_QWORD *)WdLogNewEntry5_WdEvent(v140);
      v143[3] = a2->HighPart;
      v143[4] = a2->LowPart;
      v143[5] = v68;
      v143[6] = v53;
      v143[7] = a5;
      WdLogEvent5_WdEvent(v143);
      v18 = v141;
      goto LABEL_137;
    }
    if ( (_DWORD)v40 == -1073741266 )
    {
      *(_BYTE *)(a1 + 25) = 1;
      goto LABEL_132;
    }
    v54 = (_QWORD *)WdLogNewEntry5_WdEvent(v51);
    v54[3] = (int)v40;
    v54[4] = a2->HighPart;
    v54[5] = a2->LowPart;
    v54[6] = (unsigned int)v8;
    v54[7] = a4;
    WdLogEvent5_WdEvent(v54);
    *(_BYTE *)(a1 + 25) = 1;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v156, 8u, 0);
    v55 = CCD_TOPOLOGY::CopyInheritScope((CCD_TOPOLOGY *)v156, (const struct CCD_TOPOLOGY *)v152);
    v57 = v55;
    if ( v55 < 0 )
    {
      v58 = WdLogNewEntry5_WdError(v56);
      *(_QWORD *)(v58 + 32) = v152;
      *(_QWORD *)(v58 + 24) = v57;
      WdLogEvent5_WdError(v58);
      v61 = CCD_TOPOLOGY::Persist(v152, 0LL, v59, v60);
      v63 = v61;
      if ( v61 < 0 )
      {
        v64 = WdLogNewEntry5_WdError(v62);
        *(_QWORD *)(v64 + 32) = v152;
        *(_QWORD *)(v64 + 24) = v63;
        WdLogEvent5_WdError(v64);
      }
      v65 = v63;
      v66 = v57;
      v67 = 3;
      goto LABEL_56;
    }
    v68 = a3;
    CCD_TOPOLOGY::RemovePathByTarget((CCD_TOPOLOGY *)v152, a2, a3);
    v72 = 0;
    if ( !v144[0] && !v144[1] )
    {
      if ( v144[3]
        || (PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v152, 0),
            v71 = (struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v152, 0),
            DxgkIsPortraitFirstTarget(v71[1], *((_DWORD *)PathDescriptor + 5))) )
      {
        v72 = 1;
      }
    }
    LOBYTE(v69) = v72;
    LOBYTE(v145) = v72;
    v74 = DetermineDefaultTopology(LaptopSpecialCaseFlags, v69);
    v148 = v74;
    if ( v74 == 3 )
    {
      if ( v144[0] && *((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v152, 0) + 121)
        || a2->LowPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v152, 0) + 2)
        && a2->HighPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v152, 0) + 3) )
      {
        if ( !v144[0] )
        {
          UnusedVidpnSourceId = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v152, 0) + 4);
          goto LABEL_92;
        }
      }
      else
      {
        v74 = 4;
        v148 = 4;
      }
    }
    else if ( (unsigned __int16)(v74 - 4) > 1u )
    {
      v75 = WdLogNewEntry5_WdAssertion(v73);
      *(_QWORD *)(v75 + 24) = 4163LL;
      WdLogEvent5_WdAssertion(v75);
    }
    UnusedVidpnSourceId = GetUnusedVidpnSourceId((struct CCD_TOPOLOGY *)v152, a2);
    if ( UnusedVidpnSourceId == 16 )
    {
      v79 = WdLogNewEntry5_WdEvent(v78);
      if ( v153 )
        v80 = *(_WORD *)(v153 + 20);
      else
        v80 = 0;
      *(_QWORD *)(v79 + 24) = v80;
      *(_QWORD *)(v79 + 32) = 16LL;
      WdLogEvent5_WdEvent(v79);
      v83 = CCD_TOPOLOGY::Persist(v156, 0LL, v81, v82);
      v85 = v83;
      if ( v83 < 0 )
      {
        v86 = WdLogNewEntry5_WdError(v84);
        *(_QWORD *)(v86 + 32) = v156;
        *(_QWORD *)(v86 + 24) = v85;
        WdLogEvent5_WdError(v86);
      }
      DxgkLogCodePointPacket(0x3Eu, 4u, v85, 0);
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v156);
      v53 = a4;
      goto LABEL_134;
    }
    if ( v74 == 3 )
    {
      if ( !v144[0] )
      {
        v87 = WdLogNewEntry5_WdAssertion(v78);
        *(_QWORD *)(v87 + 24) = 4238LL;
        WdLogEvent5_WdAssertion(v87);
      }
      for ( j = 0; ; ++j )
      {
        v89 = v153;
        v90 = v153 ? *(_WORD *)(v153 + 20) : 0;
        if ( j >= v90 )
          break;
        if ( !*((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v152, j) + 121) )
        {
          LOWORD(v148) = 4;
          goto LABEL_92;
        }
      }
LABEL_93:
      if ( v89 )
        v91 = *(_WORD *)(v89 + 20);
      else
        v91 = 0;
      v92 = v91 + 1;
      if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v152, v92, v76, v77) >= v92 )
      {
        v101 = v92 - 1;
        if ( !v144[0] )
        {
          v102 = LaptopSpecialCaseFlags;
          if ( LaptopSpecialCaseFlags )
          {
            if ( v92 != 2 )
            {
              v103 = WdLogNewEntry5_WdAssertion(2LL);
              *(_QWORD *)(v103 + 24) = 4300LL;
              WdLogEvent5_WdAssertion(v103);
              v102 = LaptopSpecialCaseFlags;
            }
            if ( (_BYTE)v145 )
              v101 = !IsInternalVideoOutput(v146);
            else
              v101 = ((unsigned __int8)~v102 >> 3) & 1;
            if ( *((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v152, 0) + 22) )
            {
              v105 = WdLogNewEntry5_WdAssertion(v104);
              *(_QWORD *)(v105 + 24) = 4332LL;
              WdLogEvent5_WdAssertion(v105);
            }
            v106 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v152, 0);
            v107 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v152, 1u);
            *(_OWORD *)v107 = *(_OWORD *)v106;
            *((_OWORD *)v107 + 1) = *((_OWORD *)v106 + 1);
            *((_OWORD *)v107 + 2) = *((_OWORD *)v106 + 2);
            *((_OWORD *)v107 + 3) = *((_OWORD *)v106 + 3);
            *((_OWORD *)v107 + 4) = *((_OWORD *)v106 + 4);
            *((_OWORD *)v107 + 5) = *((_OWORD *)v106 + 5);
            *((_OWORD *)v107 + 6) = *((_OWORD *)v106 + 6);
            v108 = *((_OWORD *)v106 + 7);
            v106 = (const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v106 + 128);
            *((_OWORD *)v107 + 7) = v108;
            *((_OWORD *)v107 + 8) = *(_OWORD *)v106;
            *((_OWORD *)v107 + 9) = *((_OWORD *)v106 + 1);
            *((_OWORD *)v107 + 10) = *((_OWORD *)v106 + 2);
            *((_OWORD *)v107 + 11) = *((_OWORD *)v106 + 3);
            *((_OWORD *)v107 + 12) = *((_OWORD *)v106 + 4);
            *((_QWORD *)v107 + 26) = *((_QWORD *)v106 + 10);
            *(_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v152, 1 - v101) = 847872;
          }
        }
        v109 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v152, v101);
        *((struct _LUID *)v109 + 1) = *a2;
        *((_DWORD *)v109 + 4) = UnusedVidpnSourceId;
        *((_DWORD *)v109 + 5) = a3;
        *((_DWORD *)v109 + 20) = v146;
        *((_DWORD *)v109 + 21) = v151;
        if ( v144[2] || (v110 = 0, v144[0]) )
          v110 = 1;
        *((_BYTE *)v109 + 121) = v110;
        *(_DWORD *)v109 = 585728;
        ++*(_WORD *)(v153 + 20);
        if ( (_WORD)v148 == 3 )
        {
          if ( v153 )
            v111 = *(unsigned __int16 *)(v153 + 20);
          else
            v111 = 0LL;
          if ( (_WORD)v111 != 2 )
          {
            v112 = WdLogNewEntry5_WdAssertion(v111);
            *(_QWORD *)(v112 + 24) = 4371LL;
            WdLogEvent5_WdAssertion(v112);
          }
          v113 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v152, v101 == 0);
          v116 = *((_QWORD *)v113 + 18);
          *(_DWORD *)v109 |= 0x20000u;
          *((_QWORD *)v109 + 18) = v116;
          LODWORD(v113) = *((_DWORD *)v113 + 50);
          *(_DWORD *)v109 |= 0x40000u;
          *((_DWORD *)v109 + 50) = (_DWORD)v113;
        }
        else
        {
          CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath((CCD_TOPOLOGY *)v152, v101);
        }
        v154 = 1;
        v155 = 4;
        v117 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v152, 0LL, v114, v115);
        v121 = v117;
        if ( v117 >= 0 )
        {
          v129 = CCD_TOPOLOGY::Persist(v152, 1LL, v119, v120);
          v131 = v129;
          if ( v129 == -1073741266 )
          {
            v65 = 0;
            v66 = -1073741266;
            v67 = 7;
          }
          else
          {
            if ( v129 >= 0 )
              goto LABEL_57;
            v132 = WdLogNewEntry5_WdError(v130);
            *(_QWORD *)(v132 + 24) = v131;
            *(_QWORD *)(v132 + 32) = v153;
            WdLogEvent5_WdError(v132);
            v135 = CCD_TOPOLOGY::Persist(v156, 0LL, v133, v134);
            v137 = v135;
            if ( v135 < 0 )
            {
              v138 = WdLogNewEntry5_WdError(v136);
              *(_QWORD *)(v138 + 32) = v156;
              *(_QWORD *)(v138 + 24) = v137;
              WdLogEvent5_WdError(v138);
            }
            v65 = v137;
            v66 = v131;
            v67 = 8;
          }
        }
        else
        {
          v122 = WdLogNewEntry5_WdError(v118);
          *(_QWORD *)(v122 + 24) = v121;
          *(_QWORD *)(v122 + 32) = v153;
          WdLogEvent5_WdError(v122);
          v125 = CCD_TOPOLOGY::Persist(v156, 0LL, v123, v124);
          v127 = v125;
          if ( v125 < 0 )
          {
            v128 = WdLogNewEntry5_WdError(v126);
            *(_QWORD *)(v128 + 32) = v156;
            *(_QWORD *)(v128 + 24) = v127;
            WdLogEvent5_WdError(v128);
          }
          v65 = v127;
          v66 = v121;
          v67 = 6;
        }
      }
      else
      {
        v94 = WdLogNewEntry5_WdLowResource(v93);
        *(_QWORD *)(v94 + 24) = v92;
        WdLogEvent5_WdLowResource(v94);
        v97 = CCD_TOPOLOGY::Persist(v156, 0LL, v95, v96);
        v99 = v97;
        if ( v97 < 0 )
        {
          v100 = WdLogNewEntry5_WdError(v98);
          *(_QWORD *)(v100 + 32) = v156;
          *(_QWORD *)(v100 + 24) = v99;
          WdLogEvent5_WdError(v100);
        }
        v66 = v92;
        v65 = v99;
        v67 = 5;
      }
LABEL_56:
      DxgkLogCodePointPacket(0x3Eu, v67, v66, v65);
LABEL_57:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v156);
LABEL_132:
      v53 = a4;
      goto LABEL_133;
    }
LABEL_92:
    v89 = v153;
    goto LABEL_93;
  }
  v20 = (_QWORD *)WdLogNewEntry5_WdError(v15);
  v20[3] = v19;
  v20[4] = a2->HighPart;
  v20[5] = a2->LowPart;
  v20[6] = v8;
  v20[7] = v6;
  WdLogEvent5_WdError(v20);
  DxgkLogCodePointPacket(0x3Eu, 0, v19, 0);
LABEL_13:
  *(_BYTE *)(a1 + 25) = 1;
LABEL_137:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v152);
  return v18;
}
