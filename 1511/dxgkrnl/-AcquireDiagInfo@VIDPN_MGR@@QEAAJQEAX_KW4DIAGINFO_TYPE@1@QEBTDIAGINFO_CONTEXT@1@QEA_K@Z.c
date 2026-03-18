/*
 * XREFs of ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01755E8
 * Callers:
 *     DmmCollectTdrDiagInfo @ 0x1C0179A64 (DmmCollectTdrDiagInfo.c)
 *     DmmEscape @ 0x1C0179F44 (DmmEscape.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004EC4 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0004F74 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C002ADD4 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002B8D4 (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002B9A0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FDF4 (-CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C01464B8 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C0175F44 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C017676C (-AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0178950 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0178C20 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C0178E64 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C017956C (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 *     ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C01796F8 (-_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV-$AutoBuffer@U_DMM_VIDPNSOURCEM.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C01802D0 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0180638 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0181084 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0181400 (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0181544 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     MonitorSerializeMonitorPresentEvents @ 0x1C0187184 (MonitorSerializeMonitorPresentEvents.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagInfo(VIDPN_MGR *a1, void *a2, size_t a3, int a4, int *a5, size_t *a6)
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
  __int64 v24; // rcx
  _QWORD *v25; // r14
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  _QWORD *v32; // r14
  __int64 v33; // rax
  __int64 *v34; // rcx
  __int64 *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  unsigned __int8 *v48; // rdx
  __int64 v49; // rax
  DXGDIAGNOSTICS *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rcx
  unsigned __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rbx
  __int64 v67; // rcx
  __int64 v68; // rbx
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rcx
  _QWORD *v73; // r14
  __int64 v74; // rax
  __int64 v75; // r8
  __int64 v76; // r9
  int v77; // eax
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rbx
  __int64 v81; // r15
  struct DMMVIDPNTOPOLOGY *v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rbx
  __int64 v85; // rax
  int v86; // eax
  __int64 v87; // rcx
  int v88; // eax
  __int64 v89; // rcx
  _QWORD *v90; // rbx
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  int v95; // eax
  unsigned __int64 v96; // rsi
  __int64 v97; // rax
  __int64 v98; // rcx
  void *v99; // rbx
  __int64 v100; // rcx
  __int64 v101; // rbx
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  int v105; // eax
  __int64 v106; // rcx
  __int64 v107; // rcx
  _QWORD *v108; // rbx
  __int64 v109; // rax
  size_t v110; // rbx
  size_t v111; // r8
  _QWORD *v112; // rax
  __int64 v113; // [rsp+38h] [rbp-49h] BYREF
  __int64 v114; // [rsp+40h] [rbp-41h] BYREF
  __int64 v115; // [rsp+48h] [rbp-39h] BYREF
  __int128 v116; // [rsp+50h] [rbp-31h]
  void **v117; // [rsp+60h] [rbp-21h]
  void *Src; // [rsp+68h] [rbp-19h]
  unsigned __int64 v119; // [rsp+70h] [rbp-11h]
  int v120; // [rsp+78h] [rbp-9h]
  unsigned __int64 v121; // [rsp+80h] [rbp-1h] BYREF
  __int64 v122; // [rsp+88h] [rbp+7h] BYREF
  __int64 v123; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v124; // [rsp+98h] [rbp+17h] BYREF
  __int64 v125; // [rsp+A0h] [rbp+1Fh] BYREF
  void *v126; // [rsp+E0h] [rbp+5Fh] BYREF

  v126 = a2;
  v6 = a4;
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
  v115 = (__int64)&DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v117 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v119 = 0LL;
  v120 = 3;
  v116 = 0LL;
  if ( (int)v6 > 7 )
  {
    if ( (_DWORD)v6 == 8 )
    {
      if ( a5 )
      {
        v104 = WdLogNewEntry5_WdAssertion(a1);
        WdLogEvent5_WdAssertion(v104);
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v123, (__int64)v9);
      v105 = DMMVIDPN::SerializeVidPns((char *)v9 + 224, &v115);
      v23 = v105;
      if ( v105 >= 0 )
      {
        DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v123 + 40));
        goto LABEL_139;
      }
      v108 = (_QWORD *)WdLogNewEntry5_WdError(v106);
      v108[3] = (char *)v9 + 224;
      if ( !*((_QWORD *)v9 + 1) )
      {
        v109 = WdLogNewEntry5_WdAssertion(v107);
        WdLogEvent5_WdAssertion(v109);
      }
      v108[4] = *(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL);
      v108[5] = v23;
      WdLogEvent5_WdError(v108);
      v53 = v123;
    }
    else
    {
      if ( (_DWORD)v6 == 9 )
      {
        if ( a5 )
        {
          v93 = WdLogNewEntry5_WdAssertion(a1);
          WdLogEvent5_WdAssertion(v93);
        }
        v121 = 0LL;
        if ( !*((_QWORD *)v9 + 1) )
        {
          v94 = WdLogNewEntry5_WdAssertion(a1);
          WdLogEvent5_WdAssertion(v94);
        }
        v95 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL), &v121, 0LL);
        v17 = 0x80000000LL;
        v23 = v95;
        if ( (int)(v95 + 0x80000000) >= 0 && v95 != -1073741789 )
          goto LABEL_79;
        v96 = v121;
        if ( !v121 )
        {
          v97 = WdLogNewEntry5_WdAssertion(0x80000000LL);
          WdLogEvent5_WdAssertion(v97);
        }
        DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)&v115, v96);
        v99 = Src;
        if ( !Src )
        {
          v101 = WdLogNewEntry5_WdError(v98);
          *(_QWORD *)(v101 + 24) = v96;
          if ( !*((_QWORD *)v9 + 1) )
          {
            v102 = WdLogNewEntry5_WdAssertion(v100);
            WdLogEvent5_WdAssertion(v102);
          }
          *(_QWORD *)(v101 + 32) = *(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL);
          WdLogEvent5_WdError(v101);
          LODWORD(v23) = -1073741801;
          goto LABEL_149;
        }
        if ( !*((_QWORD *)v9 + 1) )
        {
          v103 = WdLogNewEntry5_WdAssertion(v98);
          WdLogEvent5_WdAssertion(v103);
        }
        v39 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL), &v121, v99);
        goto LABEL_78;
      }
      if ( (int)v6 > 11 )
      {
        if ( (_DWORD)v6 == 12 )
        {
          if ( a5 )
          {
            v59 = WdLogNewEntry5_WdAssertion(a1);
            WdLogEvent5_WdAssertion(v59);
          }
          v60 = *((_QWORD *)v9 + 10);
          v114 = 0LL;
          if ( v60 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v60 + 32));
            v61 = *((_QWORD *)v9 + 10);
          }
          else
          {
            v61 = 0LL;
          }
          auto_rc<DMMVIDPN const>::reset(&v114, v61);
          v66 = v114;
          if ( v114 )
          {
            v70 = DMMVIDPN::Serialize(v114, &v115);
            v23 = v70;
            if ( v70 >= 0 )
            {
              v35 = &v114;
LABEL_35:
              auto_rc<DMMVIDPN const>::reset(v35, 0LL);
LABEL_140:
              v110 = v119;
              if ( v8 )
              {
                v111 = v119;
                if ( a3 < v119 )
                  v111 = a3;
                memmove(v8, Src, v111);
              }
              if ( v12 )
                *v12 = v110;
              if ( v110 <= a3 )
              {
                LODWORD(v23) = 0;
              }
              else
              {
                v112 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
                LODWORD(v23) = -2147483643;
                v112[3] = a3;
                v112[4] = v6;
                v112[5] = v119;
              }
              goto LABEL_149;
            }
            v73 = (_QWORD *)WdLogNewEntry5_WdError(v71);
            v73[3] = v66;
            if ( !*((_QWORD *)v9 + 1) )
            {
              v74 = WdLogNewEntry5_WdAssertion(v72);
              WdLogEvent5_WdAssertion(v74);
            }
            v73[4] = *(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL);
            v73[5] = v23;
            WdLogEvent5_WdError(v73);
          }
          else
          {
            v68 = WdLogNewEntry5_WdWarning(v63, v62, v64, v65);
            if ( !*((_QWORD *)v9 + 1) )
            {
              v69 = WdLogNewEntry5_WdAssertion(v67);
              WdLogEvent5_WdAssertion(v69);
            }
            *(_QWORD *)(v68 + 24) = *(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL);
            WdLogEvent5_WdWarning(v68);
            LODWORD(v23) = -1071774884;
          }
          v34 = &v114;
LABEL_97:
          auto_rc<DMMVIDPN const>::reset(v34, 0LL);
          goto LABEL_149;
        }
        if ( (_DWORD)v6 != 13 )
        {
          if ( (_DWORD)v6 != 14 )
            goto LABEL_116;
          if ( a5 )
          {
            v44 = WdLogNewEntry5_WdAssertion(a1);
            WdLogEvent5_WdAssertion(v44);
          }
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v125, (__int64)v9);
          LODWORD(v126) = 0x8000;
          v45 = DMM::AutoBuffer<unsigned char>::Initialize((__int64)&v115, 0x8000uLL, 0LL, PagedPool);
          v23 = v45;
          if ( v45 >= 0 )
          {
            v48 = (unsigned __int8 *)Src;
            if ( !Src )
            {
              v49 = WdLogNewEntry5_WdAssertion(v46);
              WdLogEvent5_WdAssertion(v49);
              v48 = (unsigned __int8 *)Src;
            }
            v50 = (DXGDIAGNOSTICS *)*((_QWORD *)v9 + 63);
            if ( !v50 )
            {
              v51 = WdLogNewEntry5_WdError(0LL);
              *(_QWORD *)(v51 + 24) = Src;
              *(_QWORD *)(v51 + 32) = v9;
              WdLogEvent5_WdError(v51);
              LODWORD(v23) = -1073741436;
LABEL_71:
              v53 = v125;
              goto LABEL_114;
            }
            LODWORD(v23) = DXGDIAGNOSTICS::ReadDiagnostics(v50, v48, (unsigned int *)&v126);
            if ( (int)v23 >= 0 )
            {
              v54 = (unsigned int)v126;
              if ( (unsigned int)v126 > v119 )
              {
                v55 = WdLogNewEntry5_WdAssertion(v52);
                WdLogEvent5_WdAssertion(v55);
              }
              v119 = v54;
              DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v125 + 40));
              goto LABEL_140;
            }
            v47 = (_QWORD *)WdLogNewEntry5_WdError(v52);
            v47[3] = Src;
          }
          else
          {
            v47 = (_QWORD *)WdLogNewEntry5_WdError(v46);
            v47[3] = 0x8000LL;
            v47[5] = v23;
          }
          v47[4] = v9;
          WdLogEvent5_WdError(v47);
          goto LABEL_71;
        }
        if ( a5 )
        {
          v56 = WdLogNewEntry5_WdAssertion(a1);
          WdLogEvent5_WdAssertion(v56);
        }
        v39 = VIDPN_MGR::AcquireDiagVersion(a1, &v115);
LABEL_78:
        v23 = v39;
        if ( v39 >= 0 )
          goto LABEL_140;
LABEL_79:
        v42 = (_QWORD *)WdLogNewEntry5_WdError(v17);
        if ( !*((_QWORD *)v9 + 1) )
        {
          v58 = WdLogNewEntry5_WdAssertion(v57);
          WdLogEvent5_WdAssertion(v58);
        }
        v42[3] = *(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL);
        v42[4] = v23;
        goto LABEL_82;
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v124, (__int64)v9);
      v113 = 0LL;
      v77 = VIDPN_MGR::CreateClientVidPnFromActive((__int64)v9, &v113, v75, v76);
      v23 = v77;
      if ( v77 >= 0 )
      {
        v80 = v113;
        v81 = (unsigned int)*a5;
        if ( DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v113 + 96), *a5) )
        {
          v86 = VIDPN_MGR::UnpinPathModalityFromSource(v9, v82, v81);
          v23 = v86;
          if ( v86 >= 0 )
          {
            v88 = (_DWORD)v6 == 10
                ? VIDPN_MGR::_SerializeVidPnSourceModeSet(v9, v80, (unsigned int)v81, &v115)
                : VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource(v9, (__int64)&v115);
            v23 = v88;
            if ( v88 >= 0 )
            {
              auto_rc<DMMVIDPN>::reset(&v113, 0LL);
              DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v124 + 40));
              v8 = v126;
              goto LABEL_139;
            }
          }
          v90 = (_QWORD *)WdLogNewEntry5_WdError(v87);
          v90[3] = v81;
          if ( !*((_QWORD *)v9 + 1) )
          {
            v91 = WdLogNewEntry5_WdAssertion(v89);
            WdLogEvent5_WdAssertion(v91);
          }
          v90[4] = *(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL);
          v90[5] = v23;
          WdLogEvent5_WdError(v90);
        }
        else
        {
          v84 = WdLogNewEntry5_WdDmmEvent(v82);
          if ( !*((_QWORD *)v9 + 1) )
          {
            v85 = WdLogNewEntry5_WdAssertion(v83);
            WdLogEvent5_WdAssertion(v85);
          }
          *(_QWORD *)(v84 + 24) = *(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL);
          WdLogEvent5_WdDmmEvent(v84);
          LODWORD(v23) = -1071774919;
        }
      }
      else
      {
        v79 = WdLogNewEntry5_WdDmmEvent(v78);
        *(_QWORD *)(v79 + 24) = v23;
        WdLogEvent5_WdDmmEvent(v79);
      }
      auto_rc<DMMVIDPN>::reset(&v113, 0LL);
      v53 = v124;
    }
LABEL_114:
    DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v53 + 40));
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
          v37 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 2));
          WdLogEvent5_WdAssertion(v37);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 11) + 72LL));
        v21 = *((_QWORD *)v9 + 11);
        v22 = DMMVIDEOPRESENTSOURCESET::Serialize(v21, &v115);
        goto LABEL_23;
      }
      if ( (_DWORD)v6 == 3 )
      {
        if ( a5 )
        {
          v36 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 3));
          WdLogEvent5_WdAssertion(v36);
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
              v13 = WdLogNewEntry5_WdAssertion(a1);
              WdLogEvent5_WdAssertion(v13);
            }
            v14 = (_QWORD *)((char *)v9 + 160);
            v15 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests((char *)v9 + 160, &v115);
            goto LABEL_50;
          }
LABEL_116:
          v92 = WdLogNewEntry5_WdError(a1);
          *(_QWORD *)(v92 + 24) = v6;
          WdLogEvent5_WdError(v92);
          LODWORD(v23) = -1073741811;
          goto LABEL_149;
        }
        if ( a5 )
        {
          v20 = WdLogNewEntry5_WdAssertion(a1);
          WdLogEvent5_WdAssertion(v20);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 12) + 72LL));
        v21 = *((_QWORD *)v9 + 12);
        v22 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v21, &v115);
LABEL_23:
        v23 = v22;
        if ( v22 < 0 )
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdError(v17);
          v25[3] = v21;
          if ( !*((_QWORD *)v9 + 1) )
          {
            v26 = WdLogNewEntry5_WdAssertion(v24);
            WdLogEvent5_WdAssertion(v26);
          }
          v25[4] = *(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL);
          v25[5] = v23;
          WdLogEvent5_WdError(v25);
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
        v27 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 4));
        WdLogEvent5_WdAssertion(v27);
      }
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 9) + 32LL));
      v28 = *((_QWORD *)v9 + 9);
      v122 = v28;
      v29 = DMMVIDPN::Serialize(v28, &v115);
      v23 = v29;
      if ( v29 < 0 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdError(v30);
        v32[3] = v28;
        if ( !*((_QWORD *)v9 + 1) )
        {
          v33 = WdLogNewEntry5_WdAssertion(v31);
          WdLogEvent5_WdAssertion(v33);
        }
        v32[4] = *(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL);
        v32[5] = v23;
        WdLogEvent5_WdError(v32);
        v34 = &v122;
        goto LABEL_97;
      }
      v35 = &v122;
      goto LABEL_35;
    }
    if ( a5 )
    {
      v38 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 1));
      WdLogEvent5_WdAssertion(v38);
    }
    v39 = VIDPN_MGR::AcquireDiagSummary(v9, &v115);
    goto LABEL_78;
  }
  if ( a5 )
  {
    v40 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v40);
  }
  v14 = (_QWORD *)((char *)v9 + 288);
  v15 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests((char *)v9 + 288, &v115);
LABEL_50:
  v23 = v15;
  if ( v15 >= 0 )
  {
LABEL_139:
    v12 = a6;
    goto LABEL_140;
  }
  v42 = (_QWORD *)WdLogNewEntry5_WdError(v17);
  v42[3] = v14;
  if ( !*((_QWORD *)v9 + 1) )
  {
    v43 = WdLogNewEntry5_WdAssertion(v41);
    WdLogEvent5_WdAssertion(v43);
  }
  v42[4] = *(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL);
  v42[5] = v23;
LABEL_82:
  WdLogEvent5_WdError(v42);
LABEL_149:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v115);
  return (unsigned int)v23;
}
