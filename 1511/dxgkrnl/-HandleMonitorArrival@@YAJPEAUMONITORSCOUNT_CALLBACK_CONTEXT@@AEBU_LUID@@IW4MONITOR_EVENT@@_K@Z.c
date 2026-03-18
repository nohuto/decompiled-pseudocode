/*
 * XREFs of ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C01548FC
 * Callers:
 *     DxgkSimulateMonitorsIfNecessary @ 0x1C01560F0 (DxgkSimulateMonitorsIfNecessary.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000A1C4 (DxgkLogCodePointPacket.c)
 *     IsInternalVideoOutput @ 0x1C000A310 (IsInternalVideoOutput.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00A23F8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A2778 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00A484C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00A4894 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00A4904 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00A4940 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4C38 (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00A5694 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00A5B24 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C00B922C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z.c)
 *     ?DetermineDefaultTopology@@YA?AW4MultiScreenDefaultShellTopology@@IE@Z @ 0x1C0153534 (-DetermineDefaultTopology@@YA-AW4MultiScreenDefaultShellTopology@@IE@Z.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C0153CBC (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@AEBUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C0154688 (-GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@.c)
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C0154748 (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C0155894 (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C018199C (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C0182038 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C0182230 (-RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 */

__int64 __fastcall HandleMonitorArrival(__int64 a1, const struct _LUID *a2, unsigned int a3, int a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v7; // r15
  __int64 v10; // rcx
  struct CCD_BTL *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // edi
  __int64 v18; // rbx
  _QWORD *v19; // rax
  int v20; // ebx
  __int64 v21; // rax
  unsigned int v22; // ecx
  unsigned int v23; // r8d
  unsigned int v24; // edx
  __int16 v25; // cx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rbx
  _QWORD *v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rbx
  _QWORD *v33; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v34; // ecx
  int v35; // ebx
  int v36; // r12d
  __int64 v37; // rax
  unsigned int v38; // edx
  __int64 v39; // rbx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned int i; // r15d
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  _QWORD *v52; // rax
  __int64 v53; // r12
  __int64 v54; // rcx
  int v55; // r15d
  _QWORD *v56; // rax
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // rbx
  __int64 v66; // rax
  unsigned int v67; // r8d
  int v68; // r9d
  unsigned int v69; // edx
  enum MultiScreenShellCapabilities *v70; // rdx
  unsigned __int8 v71; // r15
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  struct _LUID *v73; // rax
  bool v74; // al
  __int64 v75; // rcx
  unsigned __int16 v76; // bx
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rcx
  unsigned __int16 v83; // dx
  __int64 v84; // r8
  __int64 v85; // r9
  int v86; // eax
  __int64 v87; // rcx
  __int64 v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rax
  unsigned int j; // ebx
  __int64 v92; // rcx
  unsigned __int16 v93; // ax
  __int16 v94; // bx
  unsigned __int16 v95; // bx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rax
  __int64 v101; // r8
  __int64 v102; // r9
  int v103; // eax
  __int64 v104; // rcx
  __int64 v105; // r15
  __int64 v106; // rax
  unsigned int v107; // r15d
  char v108; // al
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v112; // rbx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v113; // rax
  __int128 v114; // xmm0
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v115; // rbx
  char v116; // al
  __int64 v117; // rcx
  __int64 v118; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v119; // rax
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rcx
  int v123; // eax
  int v124; // eax
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rbx
  __int64 v129; // rax
  __int64 v130; // r8
  __int64 v131; // r9
  int v132; // eax
  __int64 v133; // rcx
  __int64 v134; // r15
  __int64 v135; // rax
  int v136; // eax
  __int64 v137; // rcx
  __int64 v138; // rbx
  __int64 v139; // rax
  __int64 v140; // r8
  __int64 v141; // r9
  int v142; // eax
  __int64 v143; // rcx
  __int64 v144; // r15
  __int64 v145; // rax
  int v146; // eax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 v151; // rbx
  _QWORD *v152; // rax
  _QWORD *v153; // rax
  unsigned __int8 v154[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v155; // [rsp+5Ch] [rbp-ACh]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v156; // [rsp+60h] [rbp-A8h] BYREF
  int v157; // [rsp+64h] [rbp-A4h]
  int LaptopSpecialCaseFlags; // [rsp+68h] [rbp-A0h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v159; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v160; // [rsp+70h] [rbp-98h] BYREF
  int UnusedVidpnSourceId; // [rsp+74h] [rbp-94h]
  struct _D3DKMT_GETPATHSMODALITY *v162[8]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v163; // [rsp+B8h] [rbp-50h]
  int v164; // [rsp+C4h] [rbp-44h]
  int v165; // [rsp+C8h] [rbp-40h]
  void *v166[12]; // [rsp+D8h] [rbp-30h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v167[8]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v168; // [rsp+178h] [rbp+70h]

  v5 = a4;
  v7 = a3;
  if ( a5 == 4 )
  {
    *(_BYTE *)(a1 + 25) = 0;
    return 0LL;
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v162, 8u, 0);
  v11 = CCD_BTL::Global(v10);
  v12 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v162, v11);
  v17 = 0;
  v18 = v12;
  if ( v12 >= 0 )
  {
    v20 = dword_1C0046E54;
    if ( (unsigned int)dword_1C0046E54 > 1 )
    {
      v21 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
      *(_QWORD *)(v21 + 24) = 3830LL;
      WdLogEvent5_WdWarning(v21);
      v22 = 81;
      v23 = 1;
      v24 = v20;
LABEL_12:
      DxgkLogCodePointPacket(v22, v24, v23, 0);
      goto LABEL_13;
    }
    if ( v163 )
      v25 = *(_WORD *)(v163 + 20);
    else
      v25 = 0;
    if ( !v25 )
    {
      v24 = 1;
      v23 = 0;
      v22 = 62;
      goto LABEL_12;
    }
    v26 = DisplayConfigHandleMonitorInvalidation(3LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1);
    v28 = v26;
    if ( v26 < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v29[3] = v28;
      v29[4] = a2->HighPart;
      v29[5] = a2->LowPart;
      v29[6] = v7;
      v29[7] = v5;
      WdLogEvent5_WdError(v29);
    }
    v154[1] = 1;
    v154[2] = 0;
    v154[0] = 0;
    v30 = QueryMonitorType(
            a2,
            v7,
            (enum _DMM_VIDPN_MONITOR_TYPE *)&v160,
            &v156,
            &v159,
            &v154[3],
            &v154[1],
            &v154[2],
            v154);
    v32 = v30;
    if ( v30 >= 0 )
    {
      v35 = v160;
      v34 = v156;
    }
    else
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v31);
      v33[3] = v32;
      v33[4] = a2->HighPart;
      v33[5] = a2->LowPart;
      v33[6] = v7;
      v33[7] = v5;
      WdLogEvent5_WdError(v33);
      v34 = D3DKMDT_VOT_UNINITIALIZED;
      v154[3] = 0;
      v35 = 0;
      v156 = D3DKMDT_VOT_UNINITIALIZED;
      v160 = 0;
      v154[1] = 0;
      v154[2] = 0;
      v154[0] = 0;
    }
    if ( !(_DWORD)v5 && (unsigned int)(v34 - 10) <= 1 )
      *(_BYTE *)(a1 + 28) = 1;
    LaptopSpecialCaseFlags = GetLaptopSpecialCaseFlags(
                               (const struct CCD_TOPOLOGY *)v162,
                               a2,
                               v7,
                               v34,
                               (const struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1);
    v36 = LaptopSpecialCaseFlags;
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
        v37 = WdLogNewEntry5_WdAssertion((unsigned int)(LaptopSpecialCaseFlags - 1));
        *(_QWORD *)(v37 + 24) = 3928LL;
        WdLogEvent5_WdAssertion(v37);
      }
    }
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v167, 8u, 0);
    if ( v36 && v35 == 1 )
      v38 = v36 | 0x86;
    else
      v38 = 143;
    LODWORD(v39) = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)v167, v38, 0LL);
    if ( (int)v39 >= 0 )
    {
      if ( v159 == D3DKMDT_VOT_MIRACAST )
      {
        for ( i = 0; ; ++i )
        {
          v43 = v168 ? *(unsigned __int16 *)(v168 + 20) : 0LL;
          if ( i >= (unsigned __int16)v43 )
            break;
          if ( *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v167, i) + 5) == a3 )
            goto LABEL_42;
        }
        v44 = WdLogNewEntry5_WdError(v43);
        *(_QWORD *)(v44 + 24) = 3978LL;
        WdLogEvent5_WdError(v44);
        LODWORD(v39) = -1073741823;
LABEL_42:
        LODWORD(v7) = a3;
      }
      if ( (int)v39 >= 0 )
      {
        v45 = CCD_TOPOLOGY::Persist(v167, 0LL, v40, v41);
        v39 = v45;
        if ( v45 < 0 )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdError(v46);
          v47[3] = v39;
          v47[4] = a2->HighPart;
          v47[5] = a2->LowPart;
          v47[6] = (unsigned int)v7;
          v47[7] = a4;
          WdLogEvent5_WdError(v47);
          DxgkLogCodePointPacket(0x3Eu, 2u, v39, 0);
        }
        *(_DWORD *)(a1 + 32) |= 0x40u;
      }
    }
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v167);
    if ( (int)v39 >= 0 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdEvent(v49, v48, v50, v51);
      v53 = a5;
      v52[3] = a2->HighPart;
      v52[4] = a2->LowPart;
      v54 = (unsigned int)v7;
      v55 = a4;
      v52[5] = v54;
      v52[6] = a4;
      v52[7] = a5;
      WdLogEvent5_WdEvent(v52);
LABEL_128:
      v146 = DisplayConfigHandleMonitorInvalidation(1LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1);
      v151 = v146;
      if ( v146 < 0 )
      {
        v152 = (_QWORD *)WdLogNewEntry5_WdError(v148);
        v152[3] = v151;
        v152[4] = a2->HighPart;
        v152[5] = a2->LowPart;
        v152[6] = a3;
        v152[7] = v55;
        WdLogEvent5_WdError(v152);
        LODWORD(v151) = 0;
      }
      v153 = (_QWORD *)WdLogNewEntry5_WdEvent(v148, v147, v149, v150);
      v153[3] = a2->HighPart;
      v153[4] = a2->LowPart;
      v153[5] = a3;
      v153[6] = v55;
      v153[7] = v53;
      WdLogEvent5_WdEvent(v153);
      v17 = v151;
      goto LABEL_131;
    }
    if ( (_DWORD)v39 == -1073741266 )
    {
      *(_BYTE *)(a1 + 25) = 1;
      goto LABEL_127;
    }
    v56 = (_QWORD *)WdLogNewEntry5_WdEvent(v49, v48, v50, v51);
    v56[3] = (int)v39;
    v56[4] = a2->HighPart;
    v56[5] = a2->LowPart;
    v56[6] = (unsigned int)v7;
    v56[7] = a4;
    WdLogEvent5_WdEvent(v56);
    *(_BYTE *)(a1 + 25) = 1;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v166, 8u, 0);
    v57 = CCD_TOPOLOGY::CopyInheritScope(v166, (const struct CCD_TOPOLOGY *)v162);
    v59 = v57;
    v157 = v57;
    if ( v57 < 0 )
    {
      v60 = WdLogNewEntry5_WdError(v58);
      *(_QWORD *)(v60 + 32) = v162;
      *(_QWORD *)(v60 + 24) = v59;
      WdLogEvent5_WdError(v60);
      v63 = CCD_TOPOLOGY::Persist(v162, 0LL, v61, v62);
      v65 = v63;
      if ( v63 < 0 )
      {
        v66 = WdLogNewEntry5_WdError(v64);
        *(_QWORD *)(v66 + 32) = v162;
        *(_QWORD *)(v66 + 24) = v65;
        WdLogEvent5_WdError(v66);
      }
      v67 = v157;
      v68 = v65;
      v69 = 3;
      goto LABEL_54;
    }
    CCD_TOPOLOGY::RemovePathByTarget((CCD_TOPOLOGY *)v162, a2, v7);
    v71 = v154[0];
    v74 = 0;
    if ( !v154[0] && !v154[1] )
    {
      if ( v154[3]
        || (PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v162, 0),
            v73 = (struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v162, 0),
            DxgkIsPortraitFirstTarget(v73[1], *((_DWORD *)PathDescriptor + 5))) )
      {
        v74 = 1;
      }
    }
    LOBYTE(v70) = v74;
    LOBYTE(v155) = v74;
    v76 = DetermineDefaultTopology(LaptopSpecialCaseFlags, v70);
    v157 = v76;
    if ( v76 == 3 )
    {
      if ( !v71 )
      {
        UnusedVidpnSourceId = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v162, 0) + 4);
        goto LABEL_85;
      }
    }
    else if ( (unsigned __int16)(v76 - 4) > 1u )
    {
      v77 = WdLogNewEntry5_WdAssertion(v75);
      *(_QWORD *)(v77 + 24) = 4107LL;
      WdLogEvent5_WdAssertion(v77);
    }
    UnusedVidpnSourceId = GetUnusedVidpnSourceId((struct CCD_TOPOLOGY *)v162, a2);
    if ( UnusedVidpnSourceId == 16 )
    {
      v82 = WdLogNewEntry5_WdEvent(v79, v78, v80, v81);
      if ( v163 )
        v83 = *(_WORD *)(v163 + 20);
      else
        v83 = 0;
      *(_QWORD *)(v82 + 24) = v83;
      *(_QWORD *)(v82 + 32) = 16LL;
      WdLogEvent5_WdEvent(v82);
      v86 = CCD_TOPOLOGY::Persist((struct _D3DKMT_GETPATHSMODALITY **)v166, 0LL, v84, v85);
      v88 = v86;
      if ( v86 < 0 )
      {
        v89 = WdLogNewEntry5_WdError(v87);
        *(_QWORD *)(v89 + 32) = v166;
        *(_QWORD *)(v89 + 24) = v88;
        WdLogEvent5_WdError(v89);
      }
      v68 = 0;
      v67 = v88;
      v69 = 4;
      goto LABEL_54;
    }
    if ( v76 == 3 )
    {
      if ( !v71 )
      {
        v90 = WdLogNewEntry5_WdAssertion(v79);
        *(_QWORD *)(v90 + 24) = 4168LL;
        WdLogEvent5_WdAssertion(v90);
      }
      for ( j = 0; ; ++j )
      {
        v92 = v163;
        v93 = v163 ? *(_WORD *)(v163 + 20) : 0;
        if ( j >= v93 )
          break;
        if ( !*((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v162, j) + 117) )
        {
          v157 = 4;
          goto LABEL_85;
        }
      }
LABEL_86:
      if ( v92 )
        v94 = *(_WORD *)(v92 + 20);
      else
        v94 = 0;
      v95 = v94 + 1;
      if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v162, v95, v80, v81) >= v95 )
      {
        v107 = v95 - 1;
        if ( !v154[0] )
        {
          v108 = LaptopSpecialCaseFlags;
          if ( LaptopSpecialCaseFlags )
          {
            if ( v95 != 2 )
            {
              v109 = WdLogNewEntry5_WdAssertion(2LL);
              *(_QWORD *)(v109 + 24) = 4230LL;
              WdLogEvent5_WdAssertion(v109);
              v108 = LaptopSpecialCaseFlags;
            }
            if ( (_BYTE)v155 )
              v107 = !IsInternalVideoOutput(v156);
            else
              v107 = ((unsigned __int8)~v108 >> 3) & 1;
            if ( *((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v162, 0) + 22) )
            {
              v111 = WdLogNewEntry5_WdAssertion(v110);
              *(_QWORD *)(v111 + 24) = 4262LL;
              WdLogEvent5_WdAssertion(v111);
            }
            v112 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v162, 0);
            v113 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v162, 1u);
            *(_OWORD *)v113 = *(_OWORD *)v112;
            *((_OWORD *)v113 + 1) = *((_OWORD *)v112 + 1);
            *((_OWORD *)v113 + 2) = *((_OWORD *)v112 + 2);
            *((_OWORD *)v113 + 3) = *((_OWORD *)v112 + 3);
            *((_OWORD *)v113 + 4) = *((_OWORD *)v112 + 4);
            *((_OWORD *)v113 + 5) = *((_OWORD *)v112 + 5);
            *((_OWORD *)v113 + 6) = *((_OWORD *)v112 + 6);
            v114 = *((_OWORD *)v112 + 7);
            v112 = (const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v112 + 128);
            *((_OWORD *)v113 + 7) = v114;
            *((_OWORD *)v113 + 8) = *(_OWORD *)v112;
            *((_OWORD *)v113 + 9) = *((_OWORD *)v112 + 1);
            *((_OWORD *)v113 + 10) = *((_OWORD *)v112 + 2);
            *((_OWORD *)v113 + 11) = *((_OWORD *)v112 + 3);
            *((_OWORD *)v113 + 12) = *((_OWORD *)v112 + 4);
            *((_QWORD *)v113 + 26) = *((_QWORD *)v112 + 10);
            *(_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v162, 1 - v107) = 847872;
          }
        }
        v115 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v162, v107);
        *((struct _LUID *)v115 + 1) = *a2;
        *((_DWORD *)v115 + 4) = UnusedVidpnSourceId;
        *((_DWORD *)v115 + 5) = a3;
        *((_DWORD *)v115 + 20) = v156;
        if ( v154[2] || (v116 = 0, v154[0]) )
          v116 = 1;
        *((_BYTE *)v115 + 117) = v116;
        *(_DWORD *)v115 = 585728;
        ++*(_WORD *)(v163 + 20);
        if ( (_WORD)v157 == 3 )
        {
          if ( v163 )
            v117 = *(unsigned __int16 *)(v163 + 20);
          else
            v117 = 0LL;
          if ( (_WORD)v117 != 2 )
          {
            v118 = WdLogNewEntry5_WdAssertion(v117);
            *(_QWORD *)(v118 + 24) = 4300LL;
            WdLogEvent5_WdAssertion(v118);
          }
          v119 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v162, v107 == 0);
          if ( v159 == D3DKMDT_VOT_MIRACAST )
          {
            v122 = *(_QWORD *)((char *)v119 + 140);
            *(_DWORD *)v115 |= 0x20000u;
            *(_QWORD *)((char *)v115 + 140) = v122;
          }
          v123 = *((_DWORD *)v119 + 50);
          *(_DWORD *)v115 |= 0x40000u;
          *((_DWORD *)v115 + 50) = v123;
        }
        else
        {
          CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath((CCD_TOPOLOGY *)v162, v107);
        }
        v164 = 1;
        v165 = 4;
        v124 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v162, 0LL, v120, v121);
        v128 = v124;
        if ( v124 >= 0 )
        {
          v136 = CCD_TOPOLOGY::Persist(v162, 1LL, v126, v127);
          v138 = v136;
          if ( v136 == -1073741266 )
          {
            v68 = 0;
            v67 = -1073741266;
            v69 = 7;
          }
          else
          {
            if ( v136 >= 0 )
              goto LABEL_55;
            v139 = WdLogNewEntry5_WdError(v137);
            *(_QWORD *)(v139 + 24) = v138;
            *(_QWORD *)(v139 + 32) = v163;
            WdLogEvent5_WdError(v139);
            v142 = CCD_TOPOLOGY::Persist((struct _D3DKMT_GETPATHSMODALITY **)v166, 0LL, v140, v141);
            v144 = v142;
            if ( v142 < 0 )
            {
              v145 = WdLogNewEntry5_WdError(v143);
              *(_QWORD *)(v145 + 32) = v166;
              *(_QWORD *)(v145 + 24) = v144;
              WdLogEvent5_WdError(v145);
            }
            v68 = v144;
            v67 = v138;
            v69 = 8;
          }
        }
        else
        {
          v129 = WdLogNewEntry5_WdError(v125);
          *(_QWORD *)(v129 + 24) = v128;
          *(_QWORD *)(v129 + 32) = v163;
          WdLogEvent5_WdError(v129);
          v132 = CCD_TOPOLOGY::Persist((struct _D3DKMT_GETPATHSMODALITY **)v166, 0LL, v130, v131);
          v134 = v132;
          if ( v132 < 0 )
          {
            v135 = WdLogNewEntry5_WdError(v133);
            *(_QWORD *)(v135 + 32) = v166;
            *(_QWORD *)(v135 + 24) = v134;
            WdLogEvent5_WdError(v135);
          }
          v68 = v134;
          v67 = v128;
          v69 = 6;
        }
      }
      else
      {
        v100 = WdLogNewEntry5_WdLowResource(v97, v96, v98, v99);
        *(_QWORD *)(v100 + 24) = v95;
        WdLogEvent5_WdLowResource(v100);
        v103 = CCD_TOPOLOGY::Persist((struct _D3DKMT_GETPATHSMODALITY **)v166, 0LL, v101, v102);
        v105 = v103;
        if ( v103 < 0 )
        {
          v106 = WdLogNewEntry5_WdError(v104);
          *(_QWORD *)(v106 + 32) = v166;
          *(_QWORD *)(v106 + 24) = v105;
          WdLogEvent5_WdError(v106);
        }
        v67 = v95;
        v68 = v105;
        v69 = 5;
      }
LABEL_54:
      DxgkLogCodePointPacket(0x3Eu, v69, v67, v68);
LABEL_55:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v166);
LABEL_127:
      v55 = a4;
      v53 = a5;
      goto LABEL_128;
    }
LABEL_85:
    v92 = v163;
    goto LABEL_86;
  }
  v19 = (_QWORD *)WdLogNewEntry5_WdError(v14);
  v19[3] = v18;
  v19[4] = a2->HighPart;
  v19[5] = a2->LowPart;
  v19[6] = v7;
  v19[7] = v5;
  WdLogEvent5_WdError(v19);
  DxgkLogCodePointPacket(0x3Eu, 0, v18, 0);
LABEL_13:
  *(_BYTE *)(a1 + 25) = 1;
LABEL_131:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v162);
  return v17;
}
