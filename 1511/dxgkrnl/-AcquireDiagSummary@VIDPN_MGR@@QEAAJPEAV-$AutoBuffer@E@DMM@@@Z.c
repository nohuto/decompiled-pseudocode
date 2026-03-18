/*
 * XREFs of ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C0175F44
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01755E8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C002ADD4 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002B8D4 (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002B9A0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0178950 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0178C20 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C01802D0 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0180638 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0181084 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0181400 (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0181544 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     MonitorSerializeMonitorPresentEvents @ 0x1C0187184 (MonitorSerializeMonitorPresentEvents.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagSummary(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  DMMVIDEOPRESENTTARGETSET *v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  _QWORD *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rcx
  _QWORD *v44; // rsi
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rcx
  _QWORD *v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rcx
  unsigned __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rcx
  void *v58; // r15
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rsi
  __int64 v65; // rax
  size_t v66; // r12
  unsigned __int64 v67; // rsi
  int v68; // eax
  __int64 v69; // rcx
  _QWORD *v70; // rax
  char *v71; // rbx
  char *v72; // rcx
  char *v73; // rbx
  char *v74; // rbx
  char *v75; // rbx
  char *v76; // rbx
  char *v77; // rbx
  char *v78; // rbx
  char *v79; // rbx
  __int64 v80; // rcx
  _QWORD v81[4]; // [rsp+28h] [rbp-E0h] BYREF
  char *v82; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v83; // [rsp+50h] [rbp-B8h]
  __int64 v84; // [rsp+58h] [rbp-B0h]
  _QWORD v85[4]; // [rsp+60h] [rbp-A8h] BYREF
  void *v86; // [rsp+80h] [rbp-88h]
  size_t v87; // [rsp+88h] [rbp-80h]
  int v88; // [rsp+90h] [rbp-78h]
  void **v89; // [rsp+98h] [rbp-70h] BYREF
  __int128 v90; // [rsp+A0h] [rbp-68h]
  void **v91; // [rsp+B0h] [rbp-58h]
  void *v92; // [rsp+B8h] [rbp-50h]
  size_t v93; // [rsp+C0h] [rbp-48h]
  int v94; // [rsp+C8h] [rbp-40h]
  void **v95; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v96; // [rsp+D8h] [rbp-30h]
  void **v97; // [rsp+E8h] [rbp-20h]
  void *v98; // [rsp+F0h] [rbp-18h]
  size_t v99; // [rsp+F8h] [rbp-10h]
  int v100; // [rsp+100h] [rbp-8h]
  void **v101; // [rsp+108h] [rbp+0h] BYREF
  __int128 v102; // [rsp+110h] [rbp+8h]
  void **v103; // [rsp+120h] [rbp+18h]
  void *v104; // [rsp+128h] [rbp+20h]
  size_t v105; // [rsp+130h] [rbp+28h]
  int v106; // [rsp+138h] [rbp+30h]
  void **v107; // [rsp+140h] [rbp+38h] BYREF
  __int128 v108; // [rsp+148h] [rbp+40h]
  void **v109; // [rsp+158h] [rbp+50h]
  void *v110; // [rsp+160h] [rbp+58h]
  size_t v111; // [rsp+168h] [rbp+60h]
  int v112; // [rsp+170h] [rbp+68h]
  void **v113; // [rsp+178h] [rbp+70h] BYREF
  __int128 v114; // [rsp+180h] [rbp+78h]
  void **v115; // [rsp+190h] [rbp+88h]
  void *Src; // [rsp+198h] [rbp+90h]
  size_t Size; // [rsp+1A0h] [rbp+98h]
  int v118; // [rsp+1A8h] [rbp+A0h]
  void **v119; // [rsp+1B0h] [rbp+A8h] BYREF
  __int128 v120; // [rsp+1B8h] [rbp+B0h]
  void **v121; // [rsp+1C8h] [rbp+C0h]
  void *v122; // [rsp+1D0h] [rbp+C8h]
  size_t v123; // [rsp+1D8h] [rbp+D0h]
  int v124; // [rsp+1E0h] [rbp+D8h]
  void **v125; // [rsp+1E8h] [rbp+E0h] BYREF
  __int128 v126; // [rsp+1F0h] [rbp+E8h]
  void **v127; // [rsp+200h] [rbp+F8h]
  void *v128; // [rsp+208h] [rbp+100h]
  size_t v129; // [rsp+210h] [rbp+108h]
  int v130; // [rsp+218h] [rbp+110h]
  unsigned __int64 v131; // [rsp+260h] [rbp+158h] BYREF

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(a2 + 32) )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = a1[11];
  v113 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  Src = 0LL;
  v115 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  Size = 0LL;
  v114 = 0LL;
  v118 = 3;
  v8 = DMMVIDEOPRESENTSOURCESET::Serialize(v7, &v113);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    v12 = a1[11];
    v13 = v11;
    *(_QWORD *)(v11 + 24) = v12;
    if ( !a1[1] )
    {
      v14 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v14);
    }
    *(_QWORD *)(v13 + 32) = *(_QWORD *)(a1[1] + 16LL);
    *(_QWORD *)(v13 + 40) = v10;
    WdLogEvent5_WdError(v13);
    goto LABEL_63;
  }
  v15 = (DMMVIDEOPRESENTTARGETSET *)a1[12];
  v101 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v104 = 0LL;
  v103 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v102 = 0LL;
  v105 = 0LL;
  v106 = 3;
  v16 = DMMVIDEOPRESENTTARGETSET::Serialize(v15);
  v10 = v16;
  if ( v16 < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v17);
    v19 = a1[12];
    v20 = v18;
    *(_QWORD *)(v18 + 24) = v19;
    if ( !a1[1] )
    {
      v21 = WdLogNewEntry5_WdAssertion(v19);
      WdLogEvent5_WdAssertion(v21);
    }
    *(_QWORD *)(v20 + 32) = *(_QWORD *)(a1[1] + 16LL);
    *(_QWORD *)(v20 + 40) = v10;
    WdLogEvent5_WdError(v20);
    goto LABEL_62;
  }
  v22 = a1[9];
  v89 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v92 = 0LL;
  v91 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v90 = 0LL;
  v93 = 0LL;
  v94 = 3;
  v23 = DMMVIDPN::Serialize(v22, &v89);
  v10 = v23;
  if ( v23 < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v24);
    v26 = a1[9];
    v27 = v25;
    *(_QWORD *)(v25 + 24) = v26;
    if ( !a1[1] )
    {
      v28 = WdLogNewEntry5_WdAssertion(v26);
      WdLogEvent5_WdAssertion(v28);
    }
    *(_QWORD *)(v27 + 32) = *(_QWORD *)(a1[1] + 16LL);
    *(_QWORD *)(v27 + 40) = v10;
    WdLogEvent5_WdError(v27);
    goto LABEL_61;
  }
  v86 = 0LL;
  v85[0] = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v87 = 0LL;
  v85[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v88 = 3;
  *(_OWORD *)&v85[1] = 0LL;
  v29 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests(a1 + 20, v85);
  v10 = v29;
  if ( v29 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v30);
    v32[3] = a1 + 20;
    if ( !a1[1] )
    {
      v33 = WdLogNewEntry5_WdAssertion(v31);
      WdLogEvent5_WdAssertion(v33);
    }
    v32[4] = *(_QWORD *)(a1[1] + 16LL);
    v32[5] = v10;
    WdLogEvent5_WdError(v32);
    goto LABEL_60;
  }
  v34 = a1[12];
  v119 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v122 = 0LL;
  v121 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v120 = 0LL;
  v123 = 0LL;
  v124 = 3;
  v35 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v34, &v119);
  v10 = v35;
  if ( v35 < 0 )
  {
    v37 = WdLogNewEntry5_WdError(v36);
    v38 = a1[12];
    v39 = v37;
    *(_QWORD *)(v37 + 24) = v38;
    if ( !a1[1] )
    {
      v40 = WdLogNewEntry5_WdAssertion(v38);
      WdLogEvent5_WdAssertion(v40);
    }
    *(_QWORD *)(v39 + 32) = *(_QWORD *)(a1[1] + 16LL);
    *(_QWORD *)(v39 + 40) = v10;
    WdLogEvent5_WdError(v39);
    goto LABEL_59;
  }
  v98 = 0LL;
  v95 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v99 = 0LL;
  v97 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v100 = 3;
  v96 = 0LL;
  v41 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests(a1 + 36, &v95);
  v10 = v41;
  if ( v41 < 0 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdError(v42);
    v44[3] = a1 + 36;
    if ( !a1[1] )
    {
      v45 = WdLogNewEntry5_WdAssertion(v43);
      WdLogEvent5_WdAssertion(v45);
    }
    v44[4] = *(_QWORD *)(a1[1] + 16LL);
    v44[5] = v10;
    WdLogEvent5_WdError(v44);
    goto LABEL_58;
  }
  v110 = 0LL;
  v107 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v111 = 0LL;
  v109 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v112 = 3;
  v108 = 0LL;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v131, (__int64)a1);
  v46 = DMMVIDPN::SerializeVidPns(a1 + 28, &v107);
  v10 = v46;
  if ( v46 < 0 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdError(v47);
    v49[3] = a1 + 28;
    if ( !a1[1] )
    {
      v50 = WdLogNewEntry5_WdAssertion(v48);
      WdLogEvent5_WdAssertion(v50);
    }
    v49[4] = *(_QWORD *)(a1[1] + 16LL);
    v49[5] = v10;
    WdLogEvent5_WdError(v49);
    DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v131 + 40));
    goto LABEL_57;
  }
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v131 + 40));
  v125 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v127 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v126 = 0LL;
  v128 = 0LL;
  v129 = 0LL;
  v130 = 3;
  v131 = 0LL;
  if ( !a1[1] )
  {
    v52 = WdLogNewEntry5_WdAssertion(v51);
    WdLogEvent5_WdAssertion(v52);
  }
  v53 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(a1[1] + 16LL), &v131, 0LL);
  v54 = 0x80000000LL;
  v10 = v53;
  if ( (int)(v53 + 0x80000000) >= 0 && v53 != -1073741789 )
    goto LABEL_46;
  v55 = v131;
  if ( !v131 )
  {
    v56 = WdLogNewEntry5_WdAssertion(0x80000000LL);
    WdLogEvent5_WdAssertion(v56);
  }
  DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)&v125, v55);
  v58 = v128;
  if ( !v128 )
  {
    v10 = WdLogNewEntry5_WdError(v57);
    *(_QWORD *)(v10 + 24) = v55;
    if ( !a1[1] )
    {
      v60 = WdLogNewEntry5_WdAssertion(v59);
      WdLogEvent5_WdAssertion(v60);
    }
    *(_QWORD *)(v10 + 32) = *(_QWORD *)(a1[1] + 16LL);
    WdLogEvent5_WdError(v10);
    LODWORD(v10) = -1073741801;
    goto LABEL_56;
  }
  if ( !a1[1] )
  {
    v61 = WdLogNewEntry5_WdAssertion(v57);
    WdLogEvent5_WdAssertion(v61);
  }
  v62 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(a1[1] + 16LL), &v131, v58);
  v10 = v62;
  if ( v62 < 0 )
  {
LABEL_46:
    v64 = WdLogNewEntry5_WdError(v54);
    if ( !a1[1] )
    {
      v65 = WdLogNewEntry5_WdAssertion(v63);
      WdLogEvent5_WdAssertion(v65);
    }
    *(_QWORD *)(v64 + 24) = *(_QWORD *)(a1[1] + 16LL);
    *(_QWORD *)(v64 + 32) = v10;
    WdLogEvent5_WdError(v64);
    goto LABEL_56;
  }
  LODWORD(v84) = 3;
  v66 = v129;
  v81[0] = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v67 = v105 + v93 + v87 + v123 + v99 + v129 + v111 + Size + 40;
  v81[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v82 = 0LL;
  v83 = 0LL;
  *(_OWORD *)&v81[1] = 0LL;
  v68 = DMM::AutoBuffer<unsigned char>::Initialize((__int64)v81, v67, 0LL, PagedPool);
  v10 = v68;
  if ( v68 >= 0 )
  {
    v10 = (__int64)v82;
    *((_DWORD *)v82 + 1) = v83;
    *(_WORD *)v10 = 20480;
    v71 = v82 + 40;
    v72 = v82 + 40;
    *(_DWORD *)(v10 + 8) = 40;
    memmove(v72, Src, Size);
    v73 = &v71[Size];
    *(_DWORD *)(v10 + 12) = (_DWORD)v73 - (_DWORD)v82;
    memmove(v73, v104, v105);
    v74 = &v73[v105];
    *(_DWORD *)(v10 + 16) = (_DWORD)v74 - (_DWORD)v82;
    memmove(v74, v92, v93);
    v75 = &v74[v93];
    *(_DWORD *)(v10 + 20) = (_DWORD)v75 - (_DWORD)v82;
    memmove(v75, v86, v87);
    v76 = &v75[v87];
    *(_DWORD *)(v10 + 24) = (_DWORD)v76 - (_DWORD)v82;
    memmove(v76, v122, v123);
    v77 = &v76[v123];
    *(_DWORD *)(v10 + 28) = (_DWORD)v77 - (_DWORD)v82;
    memmove(v77, v98, v99);
    v78 = &v77[v99];
    *(_DWORD *)(v10 + 32) = (_DWORD)v78 - (_DWORD)v82;
    memmove(v78, v110, v111);
    v79 = &v78[v111];
    *(_DWORD *)(v10 + 36) = (_DWORD)v79 - (_DWORD)v82;
    memmove(v79, v58, v66);
    LODWORD(v10) = DMM::AutoBuffer<unsigned char>::Initialize(a2, v83, v82, (enum _POOL_TYPE)v84);
    if ( (int)v10 >= 0 )
    {
      LODWORD(v10) = 0;
      goto LABEL_55;
    }
    v70 = (_QWORD *)WdLogNewEntry5_WdError(v80);
    v70[3] = a2;
    v70[4] = v81;
  }
  else
  {
    v70 = (_QWORD *)WdLogNewEntry5_WdError(v69);
    v70[3] = v67;
    v70[4] = a1;
    v70[5] = v10;
  }
  WdLogEvent5_WdError(v70);
LABEL_55:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v81);
LABEL_56:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v125);
LABEL_57:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v107);
LABEL_58:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v95);
LABEL_59:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v119);
LABEL_60:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v85);
LABEL_61:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v89);
LABEL_62:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v101);
LABEL_63:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v113);
  return (unsigned int)v10;
}
