/*
 * XREFs of ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C0150824
 * Callers:
 *     DxgkSimulateMonitorsIfNecessary @ 0x1C0151E80 (DxgkSimulateMonitorsIfNecessary.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C0004FC0 (IsInternalVideoOutput.c)
 *     DxgkLogCodePointPacket @ 0x1C00084E0 (DxgkLogCodePointPacket.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C0062EFC (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0063E1C (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C006419C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0066084 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00660CC (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0066138 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C0066174 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C006646C (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C0066E5C (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C00AE26C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z.c)
 *     ?DetermineDefaultTopology@@YA?AW4MultiScreenDefaultShellTopology@@IE@Z @ 0x1C0150220 (-DetermineDefaultTopology@@YA-AW4MultiScreenDefaultShellTopology@@IE@Z.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C0150628 (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@AEBUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C0150764 (-GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE33@Z @ 0x1C0151654 (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C017D524 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C017D67C (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C017DBC0 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemovePath@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C017DD60 (-RemovePath@CCD_TOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall HandleMonitorArrival(__int64 a1, const struct _LUID *a2, unsigned int a3, int a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v7; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct CCD_BTL *v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // edi
  __int64 v19; // rbx
  _QWORD *v20; // rax
  __int16 v21; // cx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rbx
  _QWORD *v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rbx
  _QWORD *v29; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v30; // ecx
  int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // r12d
  __int64 v36; // rax
  unsigned int v37; // edx
  __int64 v38; // rbx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int i; // r14d
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  _QWORD *v51; // rax
  __int64 v52; // r12
  __int64 v53; // rcx
  int v54; // r14d
  _QWORD *v55; // rax
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // r14
  __int64 v59; // rax
  __int64 v60; // r8
  __int64 v61; // r9
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rbx
  __int64 v65; // rax
  int v66; // r9d
  unsigned int v67; // r8d
  unsigned int v68; // edx
  enum MultiScreenShellCapabilities *v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  unsigned __int8 v72; // r14
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v74; // r8
  __int64 v75; // r9
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v76; // rax
  __int64 v77; // r8
  __int64 v78; // r9
  bool v79; // al
  __int64 v80; // rdx
  unsigned __int16 v81; // bx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rdx
  unsigned int j; // r14d
  unsigned __int16 v89; // ax
  __int64 v90; // rdx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v91; // rbx
  __int64 v92; // rcx
  __int64 v93; // rax
  unsigned __int16 v94; // ax
  __int64 v95; // rcx
  unsigned __int16 v96; // dx
  __int64 v97; // r8
  __int64 v98; // r9
  int v99; // eax
  __int64 v100; // rcx
  __int64 v101; // rbx
  __int64 v102; // rax
  __int64 v103; // rax
  unsigned int k; // ebx
  unsigned __int16 v105; // ax
  __int16 v106; // bx
  unsigned __int16 v107; // bx
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rax
  __int64 v113; // r8
  __int64 v114; // r9
  int v115; // eax
  __int64 v116; // rcx
  __int64 v117; // r14
  __int64 v118; // rax
  unsigned int v119; // r14d
  char v120; // al
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v127; // rbx
  __int64 v128; // r8
  __int64 v129; // r9
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v130; // rax
  __int128 v131; // xmm0
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rdx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v135; // rbx
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 v138; // rcx
  __int64 v139; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v140; // rax
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rcx
  int v144; // eax
  int v145; // eax
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 v149; // rbx
  __int64 v150; // rax
  __int64 v151; // r8
  __int64 v152; // r9
  int v153; // eax
  __int64 v154; // rcx
  __int64 v155; // r14
  __int64 v156; // rax
  int v157; // eax
  __int64 v158; // rcx
  __int64 v159; // rbx
  __int64 v160; // rax
  __int64 v161; // r8
  __int64 v162; // r9
  int v163; // eax
  __int64 v164; // rcx
  __int64 v165; // r14
  __int64 v166; // rax
  int v167; // eax
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 v172; // rbx
  _QWORD *v173; // rax
  _QWORD *v174; // rax
  unsigned __int8 v176; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v177; // [rsp+41h] [rbp-BFh] BYREF
  unsigned __int8 v178; // [rsp+42h] [rbp-BEh] BYREF
  bool v179; // [rsp+43h] [rbp-BDh]
  unsigned int v180; // [rsp+44h] [rbp-BCh]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v181; // [rsp+48h] [rbp-B8h] BYREF
  int LaptopSpecialCaseFlags; // [rsp+4Ch] [rbp-B4h]
  int v183; // [rsp+50h] [rbp-B0h]
  int v184; // [rsp+54h] [rbp-ACh] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v185; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v186; // [rsp+5Ch] [rbp-A4h] BYREF
  _BYTE v187[64]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v188; // [rsp+A0h] [rbp-60h]
  int v189; // [rsp+ACh] [rbp-54h]
  int v190; // [rsp+B0h] [rbp-50h]
  void *v191[12]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v192[64]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v193; // [rsp+160h] [rbp+60h]

  v5 = a3;
  v7 = a4;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v187, 8u, 0);
  v13 = CCD_BTL::Global(v10, v9, v11, v12);
  v14 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v187, v13);
  v18 = 0;
  v19 = v14;
  if ( v14 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v20[3] = v19;
    v20[4] = a2->HighPart;
    v20[5] = a2->LowPart;
    v20[6] = v5;
    v20[7] = v7;
    WdLogEvent5_WdError(v20);
    DxgkLogCodePointPacket(0x3Eu, 0, v19, 0);
LABEL_8:
    *(_BYTE *)(a1 + 25) = 1;
    goto LABEL_143;
  }
  if ( v188 )
    v21 = *(_WORD *)(v188 + 20);
  else
    v21 = 0;
  if ( !v21 )
  {
    DxgkLogCodePointPacket(0x3Eu, 1u, 0, 0);
    goto LABEL_8;
  }
  v22 = DisplayConfigHandleMonitorInvalidation(3LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, v16, v17);
  v24 = v22;
  if ( v22 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v23);
    v25[3] = v24;
    v25[4] = a2->HighPart;
    v25[5] = a2->LowPart;
    v25[6] = v5;
    v25[7] = v7;
    WdLogEvent5_WdError(v25);
  }
  v176 = 0;
  v177 = 1;
  v26 = QueryMonitorType(a2, v5, (enum _DMM_VIDPN_MONITOR_TYPE *)&v184, &v181, &v185, &v178, &v177, &v176);
  v28 = v26;
  if ( v26 >= 0 )
  {
    v31 = v184;
    v30 = v181;
  }
  else
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v27);
    v29[3] = v28;
    v29[4] = a2->HighPart;
    v29[5] = a2->LowPart;
    v29[6] = v5;
    v29[7] = v7;
    WdLogEvent5_WdError(v29);
    v30 = D3DKMDT_VOT_UNINITIALIZED;
    v178 = 0;
    v31 = 0;
    v181 = D3DKMDT_VOT_UNINITIALIZED;
    v184 = 0;
    v177 = 0;
    v176 = 0;
  }
  if ( !(_DWORD)v7 && (unsigned int)(v30 - 10) <= 1 )
    *(_BYTE *)(a1 + 28) = 1;
  LaptopSpecialCaseFlags = GetLaptopSpecialCaseFlags(
                             (const struct CCD_TOPOLOGY *)v187,
                             a2,
                             (unsigned int)v5,
                             (unsigned int)v30,
                             (const struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1);
  v35 = LaptopSpecialCaseFlags;
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
      v36 = WdLogNewEntry5_WdAssertion((unsigned int)(LaptopSpecialCaseFlags - 1), v32, v33, v34);
      *(_QWORD *)(v36 + 24) = 3585LL;
      WdLogEvent5_WdAssertion(v36);
    }
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v192, 8u, 0);
  if ( v35 && v31 == 1 )
    v37 = v35 | 0x86;
  else
    v37 = 143;
  LODWORD(v38) = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)v192, v37, 0LL);
  if ( (int)v38 >= 0 )
  {
    if ( v185 == D3DKMDT_VOT_MIRACAST )
    {
      for ( i = 0; ; ++i )
      {
        v42 = v193 ? *(unsigned __int16 *)(v193 + 20) : 0LL;
        if ( i >= (unsigned __int16)v42 )
          break;
        if ( *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v192, i, v39, v40) + 5) == a3 )
          goto LABEL_37;
      }
      v43 = WdLogNewEntry5_WdError(v42);
      *(_QWORD *)(v43 + 24) = 3635LL;
      WdLogEvent5_WdError(v43);
      LODWORD(v38) = -1073741823;
LABEL_37:
      LODWORD(v5) = a3;
    }
    if ( (int)v38 >= 0 )
    {
      v44 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v192, 0LL, v39, v40);
      v38 = v44;
      if ( v44 < 0 )
      {
        v46 = (_QWORD *)WdLogNewEntry5_WdError(v45);
        v46[3] = v38;
        v46[4] = a2->HighPart;
        v46[5] = a2->LowPart;
        v46[6] = (unsigned int)v5;
        v46[7] = a4;
        WdLogEvent5_WdError(v46);
        DxgkLogCodePointPacket(0x3Eu, 2u, v38, 0);
      }
      *(_DWORD *)(a1 + 32) |= 0x40u;
    }
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v192);
  if ( (int)v38 < 0 )
  {
    if ( (_DWORD)v38 == -1073741266 )
    {
      *(_BYTE *)(a1 + 25) = 1;
      goto LABEL_139;
    }
    v55 = (_QWORD *)WdLogNewEntry5_WdEvent(v48, v47, v49, v50);
    v55[3] = (int)v38;
    v55[4] = a2->HighPart;
    v55[5] = a2->LowPart;
    v55[6] = (unsigned int)v5;
    v55[7] = a4;
    WdLogEvent5_WdEvent(v55);
    *(_BYTE *)(a1 + 25) = 1;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v191, 8u, 0);
    v56 = CCD_TOPOLOGY::CopyInheritScope(v191, (const struct CCD_TOPOLOGY *)v187);
    v58 = v56;
    if ( v56 < 0 )
    {
      v59 = WdLogNewEntry5_WdError(v57);
      *(_QWORD *)(v59 + 32) = v187;
      *(_QWORD *)(v59 + 24) = v58;
      WdLogEvent5_WdError(v59);
      v62 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v187, 0LL, v60, v61);
      v64 = v62;
      if ( v62 < 0 )
      {
        v65 = WdLogNewEntry5_WdError(v63);
        *(_QWORD *)(v65 + 32) = v187;
        *(_QWORD *)(v65 + 24) = v64;
        WdLogEvent5_WdError(v65);
      }
      v66 = v64;
      v67 = v58;
      v68 = 3;
      goto LABEL_49;
    }
    if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget((CCD_TOPOLOGY *)v187, a2, a3, &v186) >= 0 )
      CCD_TOPOLOGY::RemovePath((CCD_TOPOLOGY *)v187, v186);
    v72 = v176;
    v79 = 0;
    if ( !v176 && !v177 )
    {
      if ( v178
        || (PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v187, 0LL, v70, v71),
            v76 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v187, 0LL, v74, v75),
            DxgkIsPortraitFirstTarget(
              *(struct _LUID *)((char *)v76 + 8),
              *((unsigned int *)PathDescriptor + 5),
              v77,
              v78)) )
      {
        v79 = 1;
      }
    }
    LOBYTE(v69) = v79;
    v179 = v79;
    v81 = DetermineDefaultTopology(LaptopSpecialCaseFlags, v69);
    v183 = v81;
    if ( v81 == 3 )
    {
      if ( !v72 )
      {
        v180 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v187, 0LL, v82, v83) + 4);
LABEL_100:
        v86 = v188;
LABEL_101:
        if ( v86 )
          v106 = *(_WORD *)(v86 + 20);
        else
          v106 = 0;
        v107 = v106 + 1;
        if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v187, v107, v82, v83) >= v107 )
        {
          v119 = v107 - 1;
          if ( !v176 )
          {
            v120 = LaptopSpecialCaseFlags;
            if ( LaptopSpecialCaseFlags )
            {
              if ( v107 != 2 )
              {
                v121 = WdLogNewEntry5_WdAssertion(2LL, v108, v110, v111);
                *(_QWORD *)(v121 + 24) = 3910LL;
                WdLogEvent5_WdAssertion(v121);
                v120 = LaptopSpecialCaseFlags;
              }
              if ( v179 )
                v119 = !IsInternalVideoOutput(v181);
              else
                v119 = ((unsigned __int8)~v120 >> 3) & 1;
              if ( *((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v187, 0LL, v110, v111) + 22) )
              {
                v126 = WdLogNewEntry5_WdAssertion(v123, v122, v124, v125);
                *(_QWORD *)(v126 + 24) = 3942LL;
                WdLogEvent5_WdAssertion(v126);
              }
              v127 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v187, 0LL, v124, v125);
              v130 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v187, 1LL, v128, v129);
              *(_OWORD *)v130 = *(_OWORD *)v127;
              *((_OWORD *)v130 + 1) = *((_OWORD *)v127 + 1);
              *((_OWORD *)v130 + 2) = *((_OWORD *)v127 + 2);
              *((_OWORD *)v130 + 3) = *((_OWORD *)v127 + 3);
              *((_OWORD *)v130 + 4) = *((_OWORD *)v127 + 4);
              *((_OWORD *)v130 + 5) = *((_OWORD *)v127 + 5);
              *((_OWORD *)v130 + 6) = *((_OWORD *)v127 + 6);
              v131 = *((_OWORD *)v127 + 7);
              v127 = (const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v127 + 128);
              *((_OWORD *)v130 + 7) = v131;
              *((_OWORD *)v130 + 8) = *(_OWORD *)v127;
              *((_OWORD *)v130 + 9) = *((_OWORD *)v127 + 1);
              *((_OWORD *)v130 + 10) = *((_OWORD *)v127 + 2);
              *((_OWORD *)v130 + 11) = *((_OWORD *)v127 + 3);
              *((_OWORD *)v130 + 12) = *((_OWORD *)v127 + 4);
              *((_QWORD *)v130 + 26) = *((_QWORD *)v127 + 10);
              *(_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v187, 1 - v119, v132, v133) = 847872;
            }
          }
          v135 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v187, v119, v110, v111);
          *((struct _LUID *)v135 + 1) = *a2;
          *((_DWORD *)v135 + 4) = v180;
          *((_DWORD *)v135 + 5) = a3;
          *((_DWORD *)v135 + 20) = v181;
          *((_BYTE *)v135 + 117) = v176;
          *(_DWORD *)v135 = 585728;
          ++*(_WORD *)(v188 + 20);
          if ( (_WORD)v183 == 3 )
          {
            if ( v188 )
              v138 = *(unsigned __int16 *)(v188 + 20);
            else
              v138 = 0LL;
            if ( (_WORD)v138 != 2 )
            {
              v139 = WdLogNewEntry5_WdAssertion(v138, v134, v136, v137);
              *(_QWORD *)(v139 + 24) = 3980LL;
              WdLogEvent5_WdAssertion(v139);
            }
            v140 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v187, v119 == 0, v136, v137);
            if ( v185 == D3DKMDT_VOT_MIRACAST )
            {
              v143 = *(_QWORD *)((char *)v140 + 140);
              *(_DWORD *)v135 |= 0x20000u;
              *(_QWORD *)((char *)v135 + 140) = v143;
            }
            v144 = *((_DWORD *)v140 + 50);
            *(_DWORD *)v135 |= 0x40000u;
            *((_DWORD *)v135 + 50) = v144;
          }
          else
          {
            CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath((CCD_TOPOLOGY *)v187, v119);
          }
          v189 = 1;
          v190 = 4;
          v145 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v187, 0LL, v141, v142);
          v149 = v145;
          if ( v145 >= 0 )
          {
            v157 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v187, 1LL, v147, v148);
            v159 = v157;
            if ( v157 == -1073741266 )
            {
              v66 = 0;
              v67 = -1073741266;
              v68 = 7;
            }
            else
            {
              if ( v157 >= 0 )
                goto LABEL_50;
              v160 = WdLogNewEntry5_WdError(v158);
              *(_QWORD *)(v160 + 24) = v159;
              *(_QWORD *)(v160 + 32) = v188;
              WdLogEvent5_WdError(v160);
              v163 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v191, 0LL, v161, v162);
              v165 = v163;
              if ( v163 < 0 )
              {
                v166 = WdLogNewEntry5_WdError(v164);
                *(_QWORD *)(v166 + 32) = v191;
                *(_QWORD *)(v166 + 24) = v165;
                WdLogEvent5_WdError(v166);
              }
              v66 = v165;
              v67 = v159;
              v68 = 8;
            }
          }
          else
          {
            v150 = WdLogNewEntry5_WdError(v146);
            *(_QWORD *)(v150 + 24) = v149;
            *(_QWORD *)(v150 + 32) = v188;
            WdLogEvent5_WdError(v150);
            v153 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v191, 0LL, v151, v152);
            v155 = v153;
            if ( v153 < 0 )
            {
              v156 = WdLogNewEntry5_WdError(v154);
              *(_QWORD *)(v156 + 32) = v191;
              *(_QWORD *)(v156 + 24) = v155;
              WdLogEvent5_WdError(v156);
            }
            v66 = v155;
            v67 = v149;
            v68 = 6;
          }
        }
        else
        {
          v112 = WdLogNewEntry5_WdLowResource(v109);
          *(_QWORD *)(v112 + 24) = v107;
          WdLogEvent5_WdLowResource(v112);
          v115 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v191, 0LL, v113, v114);
          v117 = v115;
          if ( v115 < 0 )
          {
            v118 = WdLogNewEntry5_WdError(v116);
            *(_QWORD *)(v118 + 32) = v191;
            *(_QWORD *)(v118 + 24) = v117;
            WdLogEvent5_WdError(v118);
          }
          v67 = v107;
          v66 = v117;
          v68 = 5;
        }
LABEL_49:
        DxgkLogCodePointPacket(0x3Eu, v68, v67, v66);
LABEL_50:
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v191);
LABEL_139:
        v54 = a4;
        v52 = a5;
        goto LABEL_140;
      }
    }
    else
    {
      v84 = v81;
      if ( (unsigned __int16)(v81 - 4) > 1u )
      {
        LOWORD(v84) = v81 - 4;
        v85 = WdLogNewEntry5_WdAssertion(v84, v80, v82, v83);
        *(_QWORD *)(v85 + 24) = 3764LL;
        WdLogEvent5_WdAssertion(v85);
      }
    }
    v86 = v188;
    v87 = 0LL;
    v180 = 0;
    do
    {
      for ( j = 0; ; ++j )
      {
        v89 = v86 ? *(_WORD *)(v86 + 20) : 0;
        if ( j >= v89 )
          break;
        v91 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v187, j, v82, v83);
        v92 = *(_DWORD *)v91 & 0x3000;
        if ( (_DWORD)v92 != 12288 )
        {
          v93 = WdLogNewEntry5_WdAssertion(v92, v90, v82, v83);
          *(_QWORD *)(v93 + 24) = 3795LL;
          WdLogEvent5_WdAssertion(v93);
        }
        v87 = v180;
        if ( (*(_DWORD *)v91 & 0x3000) == 0x3000
          && *((_DWORD *)v91 + 2) == a2->LowPart
          && __PAIR64__(v180, a2->HighPart) == *(_QWORD *)((char *)v91 + 12) )
        {
          v86 = v188;
          break;
        }
        v86 = v188;
      }
      if ( v86 )
        v94 = *(_WORD *)(v86 + 20);
      else
        v94 = 0;
      if ( j >= v94 )
        break;
      v87 = (unsigned int)(v87 + 1);
      v180 = v87;
    }
    while ( (unsigned int)v87 < 0x10 );
    if ( (_DWORD)v87 == 16 )
    {
      v95 = WdLogNewEntry5_WdEvent(v86, v87, v82, v83);
      if ( v188 )
        v96 = *(_WORD *)(v188 + 20);
      else
        v96 = 0;
      *(_QWORD *)(v95 + 24) = v96;
      *(_QWORD *)(v95 + 32) = 16LL;
      WdLogEvent5_WdEvent(v95);
      v99 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v191, 0LL, v97, v98);
      v101 = v99;
      if ( v99 < 0 )
      {
        v102 = WdLogNewEntry5_WdError(v100);
        *(_QWORD *)(v102 + 32) = v191;
        *(_QWORD *)(v102 + 24) = v101;
        WdLogEvent5_WdError(v102);
      }
      v66 = 0;
      v67 = v101;
      v68 = 4;
      goto LABEL_49;
    }
    if ( (_WORD)v183 == 3 )
    {
      if ( !v176 )
      {
        v103 = WdLogNewEntry5_WdAssertion(v86, v87, v82, v83);
        *(_QWORD *)(v103 + 24) = 3848LL;
        WdLogEvent5_WdAssertion(v103);
        v86 = v188;
      }
      for ( k = 0; ; ++k )
      {
        v105 = v86 ? *(_WORD *)(v86 + 20) : 0;
        if ( k >= v105 )
          break;
        if ( !*((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v187, k, v82, v83) + 117) )
        {
          v183 = 4;
          goto LABEL_100;
        }
        v86 = v188;
      }
    }
    goto LABEL_101;
  }
  v51 = (_QWORD *)WdLogNewEntry5_WdEvent(v48, v47, v49, v50);
  v52 = a5;
  v51[3] = a2->HighPart;
  v51[4] = a2->LowPart;
  v53 = (unsigned int)v5;
  v54 = a4;
  v51[5] = v53;
  v51[6] = a4;
  v51[7] = a5;
  WdLogEvent5_WdEvent(v51);
LABEL_140:
  v167 = DisplayConfigHandleMonitorInvalidation(1LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, v49, v50);
  v172 = v167;
  if ( v167 < 0 )
  {
    v173 = (_QWORD *)WdLogNewEntry5_WdError(v169);
    v173[3] = v172;
    v173[4] = a2->HighPart;
    v173[5] = a2->LowPart;
    v173[6] = a3;
    v173[7] = v54;
    WdLogEvent5_WdError(v173);
    LODWORD(v172) = 0;
  }
  v174 = (_QWORD *)WdLogNewEntry5_WdEvent(v169, v168, v170, v171);
  v174[3] = a2->HighPart;
  v174[4] = a2->LowPart;
  v174[5] = a3;
  v174[6] = v54;
  v174[7] = v52;
  WdLogEvent5_WdEvent(v174);
  v18 = v172;
LABEL_143:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v187);
  return v18;
}
