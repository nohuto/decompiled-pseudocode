/*
 * XREFs of ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C0170D68
 * Callers:
 *     DmmCollectTdrDiagInfo @ 0x1C01754CC (DmmCollectTdrDiagInfo.c)
 *     DmmEscape @ 0x1C01759AC (DmmEscape.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00012D4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00043C4 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002BB3C (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C002C10C (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002C69C (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00B9638 (-CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C013FFE0 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C01716C4 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C0171EEC (-AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0174308 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01745D8 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C017481C (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C0174F90 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 *     ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C017511C (-_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV-$AutoBuffer@U_DMM_VIDPNSOURCEM.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C017ADAC (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C017AEF0 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C017C590 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C017C8F8 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C017D344 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     MonitorSerializeMonitorPresentEvents @ 0x1C0182AD4 (MonitorSerializeMonitorPresentEvents.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagInfo(VIDPN_MGR *a1, void *a2, size_t a3, __int64 a4, int *a5, size_t *a6)
{
  __int64 v6; // r14
  void *v8; // r12
  VIDPN_MGR *v9; // rdi
  __int64 v10; // rax
  size_t *v12; // r15
  __int64 v13; // rax
  _QWORD *v14; // r15
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // r14
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // r14
  __int64 v39; // rax
  __int64 *v40; // rcx
  __int64 *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  _QWORD *v49; // rbx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  _QWORD *v58; // rax
  unsigned __int8 *v59; // rdx
  __int64 v60; // rax
  DXGDIAGNOSTICS *v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rcx
  unsigned __int64 v68; // rbx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rbx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rbx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rax
  int v90; // eax
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  _QWORD *v96; // r14
  __int64 v97; // rax
  __int64 v98; // r8
  __int64 v99; // r9
  int v100; // eax
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rbx
  __int64 v104; // r15
  struct DMMVIDPNTOPOLOGY *v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rbx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rax
  int v112; // eax
  __int64 v113; // rcx
  int v114; // eax
  __int64 v115; // rdx
  __int64 v116; // rcx
  _QWORD *v117; // rbx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  int v124; // eax
  __int64 v125; // rdx
  __int64 v126; // r8
  __int64 v127; // r9
  unsigned __int64 v128; // rsi
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  void *v134; // rbx
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rbx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  int v143; // eax
  __int64 v144; // rcx
  __int64 v145; // rdx
  __int64 v146; // rcx
  _QWORD *v147; // rbx
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 v150; // rax
  size_t v151; // rbx
  size_t v152; // r8
  _QWORD *v153; // rax
  __int64 v154; // [rsp+38h] [rbp-49h] BYREF
  __int64 v155; // [rsp+40h] [rbp-41h] BYREF
  __int64 v156; // [rsp+48h] [rbp-39h] BYREF
  __int128 v157; // [rsp+50h] [rbp-31h]
  void **v158; // [rsp+60h] [rbp-21h]
  void *Src; // [rsp+68h] [rbp-19h]
  unsigned __int64 v160; // [rsp+70h] [rbp-11h]
  int v161; // [rsp+78h] [rbp-9h]
  unsigned __int64 v162; // [rsp+80h] [rbp-1h] BYREF
  __int64 v163; // [rsp+88h] [rbp+7h] BYREF
  __int64 v164; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v165; // [rsp+98h] [rbp+17h] BYREF
  __int64 v166; // [rsp+A0h] [rbp+1Fh] BYREF
  void *v167; // [rsp+E0h] [rbp+5Fh] BYREF

  v167 = a2;
  v6 = (int)a4;
  v8 = a2;
  v9 = a1;
  if ( a2 )
  {
    if ( a3 )
    {
      memset(a2, 0, a3);
      goto LABEL_7;
    }
LABEL_5:
    v10 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v10 + 24) = v8;
    *(_QWORD *)(v10 + 32) = a3;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  if ( a3 )
    goto LABEL_5;
LABEL_7:
  v12 = a6;
  if ( a6 )
    *a6 = 0LL;
  Src = 0LL;
  v156 = (__int64)&DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v158 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v160 = 0LL;
  v161 = 3;
  v157 = 0LL;
  if ( (int)v6 > 7 )
  {
    if ( (_DWORD)v6 == 8 )
    {
      if ( a5 )
      {
        v142 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
        WdLogEvent5_WdAssertion(v142);
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v164, (__int64)v9);
      v143 = DMMVIDPN::SerializeVidPns((char *)v9 + 224, &v156);
      v23 = v143;
      if ( v143 >= 0 )
      {
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v164 + 40));
        goto LABEL_139;
      }
      v147 = (_QWORD *)WdLogNewEntry5_WdError(v144);
      v147[3] = (char *)v9 + 224;
      if ( !*((_QWORD *)v9 + 1) )
      {
        v150 = WdLogNewEntry5_WdAssertion(v146, v145, v148, v149);
        WdLogEvent5_WdAssertion(v150);
      }
      v147[4] = *(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL);
      v147[5] = v23;
      WdLogEvent5_WdError(v147);
      v67 = v164;
    }
    else
    {
      if ( (_DWORD)v6 == 9 )
      {
        if ( a5 )
        {
          v122 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
          WdLogEvent5_WdAssertion(v122);
        }
        v162 = 0LL;
        if ( !*((_QWORD *)v9 + 1) )
        {
          v123 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
          WdLogEvent5_WdAssertion(v123);
        }
        v124 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL), &v162, 0LL);
        v17 = 0x80000000LL;
        v23 = v124;
        if ( (int)(v124 + 0x80000000) >= 0 && v124 != -1073741789 )
          goto LABEL_79;
        v128 = v162;
        if ( !v162 )
        {
          v129 = WdLogNewEntry5_WdAssertion(0x80000000LL, v125, v126, v127);
          WdLogEvent5_WdAssertion(v129);
        }
        DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)&v156, v128, v126, v127);
        v134 = Src;
        if ( !Src )
        {
          v137 = WdLogNewEntry5_WdError(v131);
          *(_QWORD *)(v137 + 24) = v128;
          if ( !*((_QWORD *)v9 + 1) )
          {
            v140 = WdLogNewEntry5_WdAssertion(v136, v135, v138, v139);
            WdLogEvent5_WdAssertion(v140);
          }
          *(_QWORD *)(v137 + 32) = *(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL);
          WdLogEvent5_WdError(v137);
          LODWORD(v23) = -1073741801;
          goto LABEL_149;
        }
        if ( !*((_QWORD *)v9 + 1) )
        {
          v141 = WdLogNewEntry5_WdAssertion(v131, v130, v132, v133);
          WdLogEvent5_WdAssertion(v141);
        }
        v45 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL), &v162, v134);
        goto LABEL_78;
      }
      if ( (int)v6 > 11 )
      {
        if ( (_DWORD)v6 == 12 )
        {
          if ( a5 )
          {
            v76 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
            WdLogEvent5_WdAssertion(v76);
          }
          v77 = *((_QWORD *)v9 + 10);
          v155 = 0LL;
          if ( v77 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v77 + 32));
            v78 = *((_QWORD *)v9 + 10);
          }
          else
          {
            v78 = 0LL;
          }
          auto_rc<DMMVIDPN const>::reset(&v155, v78);
          v83 = v155;
          if ( v155 )
          {
            v90 = DMMVIDPN::Serialize(v155, &v156);
            v23 = v90;
            if ( v90 >= 0 )
            {
              v41 = &v155;
LABEL_35:
              auto_rc<DMMVIDPN const>::reset(v41, 0LL);
LABEL_140:
              v151 = v160;
              if ( v8 )
              {
                v152 = v160;
                if ( a3 < v160 )
                  v152 = a3;
                memmove(v8, Src, v152);
              }
              if ( v12 )
                *v12 = v151;
              if ( v151 <= a3 )
              {
                LODWORD(v23) = 0;
              }
              else
              {
                v153 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
                LODWORD(v23) = -2147483643;
                v153[3] = a3;
                v153[4] = v6;
                v153[5] = v160;
              }
              goto LABEL_149;
            }
            v96 = (_QWORD *)WdLogNewEntry5_WdError(v91);
            v96[3] = v83;
            if ( !*((_QWORD *)v9 + 1) )
            {
              v97 = WdLogNewEntry5_WdAssertion(v93, v92, v94, v95);
              WdLogEvent5_WdAssertion(v97);
            }
            v96[4] = *(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL);
            v96[5] = v23;
            WdLogEvent5_WdError(v96);
          }
          else
          {
            v86 = WdLogNewEntry5_WdWarning(v80, v79, v81, v82);
            if ( !*((_QWORD *)v9 + 1) )
            {
              v89 = WdLogNewEntry5_WdAssertion(v85, v84, v87, v88);
              WdLogEvent5_WdAssertion(v89);
            }
            *(_QWORD *)(v86 + 24) = *(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL);
            WdLogEvent5_WdWarning(v86);
            LODWORD(v23) = -1071774884;
          }
          v40 = &v155;
LABEL_97:
          auto_rc<DMMVIDPN const>::reset(v40, 0LL);
          goto LABEL_149;
        }
        if ( (_DWORD)v6 != 13 )
        {
          if ( (_DWORD)v6 != 14 )
            goto LABEL_116;
          if ( a5 )
          {
            v53 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
            WdLogEvent5_WdAssertion(v53);
          }
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v166, (__int64)v9);
          LODWORD(v167) = 0x8000;
          v54 = DMM::AutoBuffer<unsigned char>::Initialize((__int64)&v156, 0x8000uLL, 0LL, 1LL);
          v23 = v54;
          if ( v54 >= 0 )
          {
            v59 = (unsigned __int8 *)Src;
            if ( !Src )
            {
              v60 = WdLogNewEntry5_WdAssertion(v55, 0LL, v56, v57);
              WdLogEvent5_WdAssertion(v60);
              v59 = (unsigned __int8 *)Src;
            }
            v61 = (DXGDIAGNOSTICS *)*((_QWORD *)v9 + 63);
            if ( !v61 )
            {
              v62 = WdLogNewEntry5_WdError(0LL);
              *(_QWORD *)(v62 + 24) = Src;
              *(_QWORD *)(v62 + 32) = v9;
              WdLogEvent5_WdError(v62);
              LODWORD(v23) = -1073741436;
LABEL_71:
              v67 = v166;
              goto LABEL_114;
            }
            LODWORD(v23) = DXGDIAGNOSTICS::ReadDiagnostics(v61, v59, (unsigned int *)&v167);
            if ( (int)v23 >= 0 )
            {
              v68 = (unsigned int)v167;
              if ( (unsigned int)v167 > v160 )
              {
                v69 = WdLogNewEntry5_WdAssertion(v64, v63, v65, v66);
                WdLogEvent5_WdAssertion(v69);
              }
              v160 = v68;
              DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v166 + 40));
              goto LABEL_140;
            }
            v58 = (_QWORD *)WdLogNewEntry5_WdError(v64);
            v58[3] = Src;
          }
          else
          {
            v58 = (_QWORD *)WdLogNewEntry5_WdError(v55);
            v58[3] = 0x8000LL;
            v58[5] = v23;
          }
          v58[4] = v9;
          WdLogEvent5_WdError(v58);
          goto LABEL_71;
        }
        if ( a5 )
        {
          v70 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
          WdLogEvent5_WdAssertion(v70);
        }
        v45 = VIDPN_MGR::AcquireDiagVersion(a1, &v156);
LABEL_78:
        v23 = v45;
        if ( v45 >= 0 )
          goto LABEL_140;
LABEL_79:
        v49 = (_QWORD *)WdLogNewEntry5_WdError(v17);
        if ( !*((_QWORD *)v9 + 1) )
        {
          v75 = WdLogNewEntry5_WdAssertion(v72, v71, v73, v74);
          WdLogEvent5_WdAssertion(v75);
        }
        v49[3] = *(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL);
        v49[4] = v23;
        goto LABEL_82;
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v165, (__int64)v9);
      v154 = 0LL;
      v100 = VIDPN_MGR::CreateClientVidPnFromActive((__int64)v9, &v154, v98, v99);
      v23 = v100;
      if ( v100 >= 0 )
      {
        v103 = v154;
        v104 = (unsigned int)*a5;
        if ( DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v154 + 96), *a5) )
        {
          v112 = VIDPN_MGR::UnpinPathModalityFromSource(v9, v105, v104);
          v23 = v112;
          if ( v112 >= 0 )
          {
            v114 = (_DWORD)v6 == 10
                 ? VIDPN_MGR::_SerializeVidPnSourceModeSet(v9, v103, (unsigned int)v104, &v156)
                 : VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource(v9, (__int64)&v156);
            v23 = v114;
            if ( v114 >= 0 )
            {
              auto_rc<DMMVIDPN>::reset(&v154, 0LL);
              DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v165 + 40));
              v8 = v167;
              goto LABEL_139;
            }
          }
          v117 = (_QWORD *)WdLogNewEntry5_WdError(v113);
          v117[3] = v104;
          if ( !*((_QWORD *)v9 + 1) )
          {
            v120 = WdLogNewEntry5_WdAssertion(v116, v115, v118, v119);
            WdLogEvent5_WdAssertion(v120);
          }
          v117[4] = *(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL);
          v117[5] = v23;
          WdLogEvent5_WdError(v117);
        }
        else
        {
          v108 = WdLogNewEntry5_WdDmmEvent(v105);
          if ( !*((_QWORD *)v9 + 1) )
          {
            v111 = WdLogNewEntry5_WdAssertion(v107, v106, v109, v110);
            WdLogEvent5_WdAssertion(v111);
          }
          *(_QWORD *)(v108 + 24) = *(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL);
          WdLogEvent5_WdDmmEvent(v108);
          LODWORD(v23) = -1071774919;
        }
      }
      else
      {
        v102 = WdLogNewEntry5_WdDmmEvent(v101);
        *(_QWORD *)(v102 + 24) = v23;
        WdLogEvent5_WdDmmEvent(v102);
      }
      auto_rc<DMMVIDPN>::reset(&v154, 0LL);
      v67 = v165;
    }
LABEL_114:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v67 + 40));
    goto LABEL_149;
  }
  if ( (_DWORD)v6 != 7 )
  {
    if ( (_DWORD)v6 != 1 )
    {
      if ( (_DWORD)v6 == 2 )
      {
        if ( a5 )
        {
          v43 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 2), a2, a3, a4);
          WdLogEvent5_WdAssertion(v43);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 11) + 72LL));
        v21 = *((_QWORD *)v9 + 11);
        v22 = DMMVIDEOPRESENTSOURCESET::Serialize(v21, &v156);
        goto LABEL_23;
      }
      if ( (_DWORD)v6 == 3 )
      {
        if ( a5 )
        {
          v42 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 3), a2, a3, a4);
          WdLogEvent5_WdAssertion(v42);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 12) + 72LL));
        v21 = *((_QWORD *)v9 + 12);
        v22 = DMMVIDEOPRESENTTARGETSET::Serialize((DMMVIDEOPRESENTTARGETSET *)v21);
        goto LABEL_23;
      }
      if ( (_DWORD)v6 != 4 )
      {
        a1 = (VIDPN_MGR *)(unsigned int)(v6 - 5);
        if ( (_DWORD)v6 != 5 )
        {
          if ( (_DWORD)v6 == 6 )
          {
            if ( a5 )
            {
              v13 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
              WdLogEvent5_WdAssertion(v13);
            }
            v14 = (_QWORD *)((char *)v9 + 160);
            v15 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests((char *)v9 + 160, &v156);
            goto LABEL_50;
          }
LABEL_116:
          v121 = WdLogNewEntry5_WdError(a1);
          *(_QWORD *)(v121 + 24) = v6;
          WdLogEvent5_WdError(v121);
          LODWORD(v23) = -1073741811;
          goto LABEL_149;
        }
        if ( a5 )
        {
          v20 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
          WdLogEvent5_WdAssertion(v20);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 12) + 72LL));
        v21 = *((_QWORD *)v9 + 12);
        v22 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v21, &v156);
LABEL_23:
        v23 = v22;
        if ( v22 < 0 )
        {
          v28 = (_QWORD *)WdLogNewEntry5_WdError(v17);
          v28[3] = v21;
          if ( !*((_QWORD *)v9 + 1) )
          {
            v29 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
            WdLogEvent5_WdAssertion(v29);
          }
          v28[4] = *(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL);
          v28[5] = v23;
          WdLogEvent5_WdError(v28);
          if ( v21 )
            ReferenceCounted::Release((ReferenceCounted *)(v21 + 64));
          goto LABEL_149;
        }
        if ( v21 )
          ReferenceCounted::Release((ReferenceCounted *)(v21 + 64));
        goto LABEL_140;
      }
      if ( a5 )
      {
        v30 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 4), a2, a3, a4);
        WdLogEvent5_WdAssertion(v30);
      }
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 9) + 32LL));
      v31 = *((_QWORD *)v9 + 9);
      v163 = v31;
      v32 = DMMVIDPN::Serialize(v31, &v156);
      v23 = v32;
      if ( v32 < 0 )
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdError(v33);
        v38[3] = v31;
        if ( !*((_QWORD *)v9 + 1) )
        {
          v39 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
          WdLogEvent5_WdAssertion(v39);
        }
        v38[4] = *(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL);
        v38[5] = v23;
        WdLogEvent5_WdError(v38);
        v40 = &v163;
        goto LABEL_97;
      }
      v41 = &v163;
      goto LABEL_35;
    }
    if ( a5 )
    {
      v44 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 1), a2, a3, a4);
      WdLogEvent5_WdAssertion(v44);
    }
    v45 = VIDPN_MGR::AcquireDiagSummary(v9, &v156);
    goto LABEL_78;
  }
  if ( a5 )
  {
    v46 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v46);
  }
  v14 = (_QWORD *)((char *)v9 + 288);
  v15 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests((char *)v9 + 288, &v156);
LABEL_50:
  v23 = v15;
  if ( v15 >= 0 )
  {
LABEL_139:
    v12 = a6;
    goto LABEL_140;
  }
  v49 = (_QWORD *)WdLogNewEntry5_WdError(v17);
  v49[3] = v14;
  if ( !*((_QWORD *)v9 + 1) )
  {
    v52 = WdLogNewEntry5_WdAssertion(v48, v47, v50, v51);
    WdLogEvent5_WdAssertion(v52);
  }
  v49[4] = *(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL);
  v49[5] = v23;
LABEL_82:
  WdLogEvent5_WdError(v49);
LABEL_149:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v156);
  return (unsigned int)v23;
}
