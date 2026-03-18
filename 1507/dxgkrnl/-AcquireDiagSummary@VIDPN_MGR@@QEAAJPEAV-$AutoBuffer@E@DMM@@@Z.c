/*
 * XREFs of ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C01716C4
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C0170D68 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002BB3C (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C002C10C (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002C69C (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0174308 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01745D8 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C017ADAC (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C017AEF0 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C017C590 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C017C8F8 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C017D344 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     MonitorSerializeMonitorPresentEvents @ 0x1C0182AD4 (MonitorSerializeMonitorPresentEvents.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagSummary(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rax
  DMMVIDEOPRESENTTARGETSET *v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  _QWORD *v44; // rsi
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rsi
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  _QWORD *v62; // rsi
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  _QWORD *v70; // rsi
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rax
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rcx
  unsigned __int64 v84; // rsi
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  void *v90; // r15
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rax
  __int64 v96; // rax
  int v97; // eax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rsi
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rax
  size_t v104; // r12
  unsigned __int64 v105; // rsi
  int v106; // eax
  __int64 v107; // rcx
  _QWORD *v108; // rax
  char *v109; // rbx
  char *v110; // rcx
  char *v111; // rbx
  char *v112; // rbx
  char *v113; // rbx
  char *v114; // rbx
  char *v115; // rbx
  char *v116; // rbx
  char *v117; // rbx
  __int64 v118; // rcx
  _QWORD v119[4]; // [rsp+28h] [rbp-E0h] BYREF
  char *v120; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v121; // [rsp+50h] [rbp-B8h]
  __int64 v122; // [rsp+58h] [rbp-B0h]
  _QWORD v123[4]; // [rsp+60h] [rbp-A8h] BYREF
  void *v124; // [rsp+80h] [rbp-88h]
  size_t v125; // [rsp+88h] [rbp-80h]
  int v126; // [rsp+90h] [rbp-78h]
  void **v127; // [rsp+98h] [rbp-70h] BYREF
  __int128 v128; // [rsp+A0h] [rbp-68h]
  void **v129; // [rsp+B0h] [rbp-58h]
  void *v130; // [rsp+B8h] [rbp-50h]
  size_t v131; // [rsp+C0h] [rbp-48h]
  int v132; // [rsp+C8h] [rbp-40h]
  void **v133; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v134; // [rsp+D8h] [rbp-30h]
  void **v135; // [rsp+E8h] [rbp-20h]
  void *v136; // [rsp+F0h] [rbp-18h]
  size_t v137; // [rsp+F8h] [rbp-10h]
  int v138; // [rsp+100h] [rbp-8h]
  void **v139; // [rsp+108h] [rbp+0h] BYREF
  __int128 v140; // [rsp+110h] [rbp+8h]
  void **v141; // [rsp+120h] [rbp+18h]
  void *v142; // [rsp+128h] [rbp+20h]
  size_t v143; // [rsp+130h] [rbp+28h]
  int v144; // [rsp+138h] [rbp+30h]
  void **v145; // [rsp+140h] [rbp+38h] BYREF
  __int128 v146; // [rsp+148h] [rbp+40h]
  void **v147; // [rsp+158h] [rbp+50h]
  void *v148; // [rsp+160h] [rbp+58h]
  size_t v149; // [rsp+168h] [rbp+60h]
  int v150; // [rsp+170h] [rbp+68h]
  void **v151; // [rsp+178h] [rbp+70h] BYREF
  __int128 v152; // [rsp+180h] [rbp+78h]
  void **v153; // [rsp+190h] [rbp+88h]
  void *Src; // [rsp+198h] [rbp+90h]
  size_t Size; // [rsp+1A0h] [rbp+98h]
  int v156; // [rsp+1A8h] [rbp+A0h]
  void **v157; // [rsp+1B0h] [rbp+A8h] BYREF
  __int128 v158; // [rsp+1B8h] [rbp+B0h]
  void **v159; // [rsp+1C8h] [rbp+C0h]
  void *v160; // [rsp+1D0h] [rbp+C8h]
  size_t v161; // [rsp+1D8h] [rbp+D0h]
  int v162; // [rsp+1E0h] [rbp+D8h]
  void **v163; // [rsp+1E8h] [rbp+E0h] BYREF
  __int128 v164; // [rsp+1F0h] [rbp+E8h]
  void **v165; // [rsp+200h] [rbp+F8h]
  void *v166; // [rsp+208h] [rbp+100h]
  size_t v167; // [rsp+210h] [rbp+108h]
  int v168; // [rsp+218h] [rbp+110h]
  unsigned __int64 v169; // [rsp+260h] [rbp+158h] BYREF

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v6 + 24) = 0LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(a2 + 32) )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = a1[11];
  v151 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  Src = 0LL;
  v153 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  Size = 0LL;
  v152 = 0LL;
  v156 = 3;
  v10 = DMMVIDEOPRESENTSOURCESET::Serialize(v9, &v151);
  v12 = v10;
  if ( v10 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    v17 = a1[11];
    v18 = v13;
    *(_QWORD *)(v13 + 24) = v17;
    if ( !a1[1] )
    {
      v19 = WdLogNewEntry5_WdAssertion(v17, v14, v15, v16);
      WdLogEvent5_WdAssertion(v19);
    }
    *(_QWORD *)(v18 + 32) = *(_QWORD *)(a1[1] + 16LL);
    *(_QWORD *)(v18 + 40) = v12;
    WdLogEvent5_WdError(v18);
    goto LABEL_63;
  }
  v20 = (DMMVIDEOPRESENTTARGETSET *)a1[12];
  v139 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v142 = 0LL;
  v141 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v140 = 0LL;
  v143 = 0LL;
  v144 = 3;
  v21 = DMMVIDEOPRESENTTARGETSET::Serialize(v20);
  v12 = v21;
  if ( v21 < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v22);
    v27 = a1[12];
    v28 = v23;
    *(_QWORD *)(v23 + 24) = v27;
    if ( !a1[1] )
    {
      v29 = WdLogNewEntry5_WdAssertion(v27, v24, v25, v26);
      WdLogEvent5_WdAssertion(v29);
    }
    *(_QWORD *)(v28 + 32) = *(_QWORD *)(a1[1] + 16LL);
    *(_QWORD *)(v28 + 40) = v12;
    WdLogEvent5_WdError(v28);
    goto LABEL_62;
  }
  v30 = a1[9];
  v127 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v130 = 0LL;
  v129 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v128 = 0LL;
  v131 = 0LL;
  v132 = 3;
  v31 = DMMVIDPN::Serialize(v30, &v127);
  v12 = v31;
  if ( v31 < 0 )
  {
    v33 = WdLogNewEntry5_WdError(v32);
    v37 = a1[9];
    v38 = v33;
    *(_QWORD *)(v33 + 24) = v37;
    if ( !a1[1] )
    {
      v39 = WdLogNewEntry5_WdAssertion(v37, v34, v35, v36);
      WdLogEvent5_WdAssertion(v39);
    }
    *(_QWORD *)(v38 + 32) = *(_QWORD *)(a1[1] + 16LL);
    *(_QWORD *)(v38 + 40) = v12;
    WdLogEvent5_WdError(v38);
    goto LABEL_61;
  }
  v124 = 0LL;
  v123[0] = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v125 = 0LL;
  v123[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v126 = 3;
  *(_OWORD *)&v123[1] = 0LL;
  v40 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests(a1 + 20, v123);
  v12 = v40;
  if ( v40 < 0 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdError(v41);
    v44[3] = a1 + 20;
    if ( !a1[1] )
    {
      v47 = WdLogNewEntry5_WdAssertion(v43, v42, v45, v46);
      WdLogEvent5_WdAssertion(v47);
    }
    v44[4] = *(_QWORD *)(a1[1] + 16LL);
    v44[5] = v12;
    WdLogEvent5_WdError(v44);
    goto LABEL_60;
  }
  v48 = a1[12];
  v157 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v160 = 0LL;
  v159 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v158 = 0LL;
  v161 = 0LL;
  v162 = 3;
  v49 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v48, &v157);
  v12 = v49;
  if ( v49 < 0 )
  {
    v51 = WdLogNewEntry5_WdError(v50);
    v55 = a1[12];
    v56 = v51;
    *(_QWORD *)(v51 + 24) = v55;
    if ( !a1[1] )
    {
      v57 = WdLogNewEntry5_WdAssertion(v55, v52, v53, v54);
      WdLogEvent5_WdAssertion(v57);
    }
    *(_QWORD *)(v56 + 32) = *(_QWORD *)(a1[1] + 16LL);
    *(_QWORD *)(v56 + 40) = v12;
    WdLogEvent5_WdError(v56);
    goto LABEL_59;
  }
  v136 = 0LL;
  v133 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v137 = 0LL;
  v135 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v138 = 3;
  v134 = 0LL;
  v58 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests(a1 + 36, &v133);
  v12 = v58;
  if ( v58 < 0 )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdError(v59);
    v62[3] = a1 + 36;
    if ( !a1[1] )
    {
      v65 = WdLogNewEntry5_WdAssertion(v61, v60, v63, v64);
      WdLogEvent5_WdAssertion(v65);
    }
    v62[4] = *(_QWORD *)(a1[1] + 16LL);
    v62[5] = v12;
    WdLogEvent5_WdError(v62);
    goto LABEL_58;
  }
  v148 = 0LL;
  v145 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v149 = 0LL;
  v147 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v150 = 3;
  v146 = 0LL;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v169, (__int64)a1);
  v66 = DMMVIDPN::SerializeVidPns(a1 + 28, &v145);
  v12 = v66;
  if ( v66 < 0 )
  {
    v70 = (_QWORD *)WdLogNewEntry5_WdError(v67);
    v70[3] = a1 + 28;
    if ( !a1[1] )
    {
      v73 = WdLogNewEntry5_WdAssertion(v69, v68, v71, v72);
      WdLogEvent5_WdAssertion(v73);
    }
    v70[4] = *(_QWORD *)(a1[1] + 16LL);
    v70[5] = v12;
    WdLogEvent5_WdError(v70);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v169 + 40));
    goto LABEL_57;
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v169 + 40));
  v163 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v165 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v164 = 0LL;
  v166 = 0LL;
  v167 = 0LL;
  v168 = 3;
  v169 = 0LL;
  if ( !a1[1] )
  {
    v78 = WdLogNewEntry5_WdAssertion(v75, v74, v76, v77);
    WdLogEvent5_WdAssertion(v78);
  }
  v79 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(a1[1] + 16LL), &v169, 0LL);
  v83 = 0x80000000LL;
  v12 = v79;
  if ( (int)(v79 + 0x80000000) >= 0 && v79 != -1073741789 )
    goto LABEL_46;
  v84 = v169;
  if ( !v169 )
  {
    v85 = WdLogNewEntry5_WdAssertion(0x80000000LL, v80, v81, v82);
    WdLogEvent5_WdAssertion(v85);
  }
  DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)&v163, v84, v81, v82);
  v90 = v166;
  if ( !v166 )
  {
    v12 = WdLogNewEntry5_WdError(v87);
    *(_QWORD *)(v12 + 24) = v84;
    if ( !a1[1] )
    {
      v95 = WdLogNewEntry5_WdAssertion(v92, v91, v93, v94);
      WdLogEvent5_WdAssertion(v95);
    }
    *(_QWORD *)(v12 + 32) = *(_QWORD *)(a1[1] + 16LL);
    WdLogEvent5_WdError(v12);
    LODWORD(v12) = -1073741801;
    goto LABEL_56;
  }
  if ( !a1[1] )
  {
    v96 = WdLogNewEntry5_WdAssertion(v87, v86, v88, v89);
    WdLogEvent5_WdAssertion(v96);
  }
  v97 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(a1[1] + 16LL), &v169, v90);
  v12 = v97;
  if ( v97 < 0 )
  {
LABEL_46:
    v100 = WdLogNewEntry5_WdError(v83);
    if ( !a1[1] )
    {
      v103 = WdLogNewEntry5_WdAssertion(v99, v98, v101, v102);
      WdLogEvent5_WdAssertion(v103);
    }
    *(_QWORD *)(v100 + 24) = *(_QWORD *)(a1[1] + 16LL);
    *(_QWORD *)(v100 + 32) = v12;
    WdLogEvent5_WdError(v100);
    goto LABEL_56;
  }
  LODWORD(v122) = 3;
  v104 = v167;
  v119[0] = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v105 = v143 + v131 + v125 + v161 + v137 + v167 + v149 + Size + 40;
  v119[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v120 = 0LL;
  v121 = 0LL;
  *(_OWORD *)&v119[1] = 0LL;
  v106 = DMM::AutoBuffer<unsigned char>::Initialize((__int64)v119, v105, 0LL, 1LL);
  v12 = v106;
  if ( v106 >= 0 )
  {
    v12 = (__int64)v120;
    *((_DWORD *)v120 + 1) = v121;
    *(_WORD *)v12 = 20480;
    v109 = v120 + 40;
    v110 = v120 + 40;
    *(_DWORD *)(v12 + 8) = 40;
    memmove(v110, Src, Size);
    v111 = &v109[Size];
    *(_DWORD *)(v12 + 12) = (_DWORD)v111 - (_DWORD)v120;
    memmove(v111, v142, v143);
    v112 = &v111[v143];
    *(_DWORD *)(v12 + 16) = (_DWORD)v112 - (_DWORD)v120;
    memmove(v112, v130, v131);
    v113 = &v112[v131];
    *(_DWORD *)(v12 + 20) = (_DWORD)v113 - (_DWORD)v120;
    memmove(v113, v124, v125);
    v114 = &v113[v125];
    *(_DWORD *)(v12 + 24) = (_DWORD)v114 - (_DWORD)v120;
    memmove(v114, v160, v161);
    v115 = &v114[v161];
    *(_DWORD *)(v12 + 28) = (_DWORD)v115 - (_DWORD)v120;
    memmove(v115, v136, v137);
    v116 = &v115[v137];
    *(_DWORD *)(v12 + 32) = (_DWORD)v116 - (_DWORD)v120;
    memmove(v116, v148, v149);
    v117 = &v116[v149];
    *(_DWORD *)(v12 + 36) = (_DWORD)v117 - (_DWORD)v120;
    memmove(v117, v90, v104);
    LODWORD(v12) = DMM::AutoBuffer<unsigned char>::Initialize(a2, v121, v120, (unsigned int)v122);
    if ( (int)v12 >= 0 )
    {
      LODWORD(v12) = 0;
      goto LABEL_55;
    }
    v108 = (_QWORD *)WdLogNewEntry5_WdError(v118);
    v108[3] = a2;
    v108[4] = v119;
  }
  else
  {
    v108 = (_QWORD *)WdLogNewEntry5_WdError(v107);
    v108[3] = v105;
    v108[4] = a1;
    v108[5] = v12;
  }
  WdLogEvent5_WdError(v108);
LABEL_55:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v119);
LABEL_56:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v163);
LABEL_57:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v145);
LABEL_58:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v133);
LABEL_59:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v157);
LABEL_60:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v123);
LABEL_61:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v127);
LABEL_62:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v139);
LABEL_63:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v151);
  return (unsigned int)v12;
}
