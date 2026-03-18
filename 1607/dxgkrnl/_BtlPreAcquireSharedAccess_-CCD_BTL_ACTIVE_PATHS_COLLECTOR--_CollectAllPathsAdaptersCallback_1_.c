/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00DA8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000192C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00047D8 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0008768 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C00117AC (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C002AC0C (DxgkIsMSBDDFallbackEnabled.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00806CC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0081930 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C0081990 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00845AC (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085094 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085190 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C008D61C (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C008D6CC (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  __int64 v10; // rsi
  __int64 v11; // rsi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  DMMVIDPNTOPOLOGY *v17; // r12
  struct DMMVIDPN *v18; // rbx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // rbx
  _QWORD *v25; // rax
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r13
  __int64 v27; // rcx
  DMMVIDPNTOPOLOGY *v28; // r10
  int v29; // eax
  __int64 v30; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *v38; // rax
  _QWORD *v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  _QWORD *v44; // rcx
  __int64 v45; // rax
  _QWORD *v46; // r15
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  _QWORD *v51; // r15
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  _QWORD *v55; // rbx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  _QWORD *v60; // rcx
  __int64 v61; // rax
  _QWORD *v62; // r15
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // [rsp+20h] [rbp-99h]
  struct DMMVIDPN *v71; // [rsp+40h] [rbp-79h] BYREF
  __int64 v72; // [rsp+48h] [rbp-71h] BYREF
  __int64 v73; // [rsp+50h] [rbp-69h] BYREF
  DMMVIDPNTOPOLOGY *v74; // [rsp+58h] [rbp-61h]
  __int64 v75; // [rsp+60h] [rbp-59h] BYREF
  DMMVIDPNTOPOLOGY *v76; // [rsp+68h] [rbp-51h]
  _BYTE v77[32]; // [rsp+70h] [rbp-49h] BYREF
  _BYTE v78[128]; // [rsp+90h] [rbp-29h] BYREF
  unsigned int v79; // [rsp+130h] [rbp+77h]
  unsigned int v80; // [rsp+138h] [rbp+7Fh]

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v78, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v78);
  v9 = 0;
  if ( v4 < 0 )
  {
    if ( v4 == -1073741130 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
      v38[3] = a1;
      v38[4] = *((int *)a1 + 68);
      v38[5] = *((unsigned int *)a1 + 67);
      v38[6] = this;
    }
    else
    {
      v9 = v4;
    }
    goto LABEL_31;
  }
  if ( !*((_BYTE *)a1 + 2053) && (!DXGADAPTER::IsBddFallbackDriver(a1) || DxgkIsMSBDDFallbackEnabled()) )
  {
    v10 = *((_QWORD *)a1 + 266);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 88);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v72, v11);
      v71 = 0LL;
      ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                                 (const struct DMMVIDPN **)v11,
                                                 (__int64 *)&v71);
      v17 = (DMMVIDPNTOPOLOGY *)ClientVidPnFromLastClientCommitedVidPn;
      if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdError(v14);
        v39[3] = v17;
        v39[4] = v11;
        v40 = *(_QWORD *)this;
        v39[5] = *(_QWORD *)this;
        if ( !*(_QWORD *)(v11 + 8) )
        {
          v41 = WdLogNewEntry5_WdAssertion(v40);
          WdLogEvent5_WdAssertion(v41);
        }
        v42 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL);
        v39[6] = *(int *)(v42 + 272);
        if ( !*(_QWORD *)(v11 + 8) )
        {
          v43 = WdLogNewEntry5_WdAssertion(v42);
          WdLogEvent5_WdAssertion(v43);
        }
        v44 = v39;
        v39[7] = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL) + 268LL);
      }
      else
      {
        v18 = v71;
        v76 = (struct DMMVIDPN *)((char *)v71 + 96);
        if ( v71 == (struct DMMVIDPN *)-96LL )
        {
          v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
          v46[3] = -96LL;
          v46[4] = this;
          v47 = *(_QWORD *)this;
          v46[5] = *(_QWORD *)this;
          if ( !*(_QWORD *)(v11 + 8) )
          {
            v48 = WdLogNewEntry5_WdAssertion(v47);
            WdLogEvent5_WdAssertion(v48);
          }
          v49 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL);
          v46[6] = *(int *)(v49 + 272);
          if ( !*(_QWORD *)(v11 + 8) )
          {
            v50 = WdLogNewEntry5_WdAssertion(v49);
            WdLogEvent5_WdAssertion(v50);
          }
          v46[7] = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL) + 268LL);
          WdLogEvent5_WdWarning(v46);
          goto LABEL_30;
        }
        LODWORD(v17) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, v71, 1);
        if ( (int)v17 >= 0 )
        {
          v73 = 0LL;
          v20 = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)v11, &v73);
          v17 = (DMMVIDPNTOPOLOGY *)v20;
          if ( v20 < 0 )
          {
            v55 = (_QWORD *)WdLogNewEntry5_WdError(v21);
            v55[3] = v17;
            v55[4] = v11;
            v56 = *(_QWORD *)this;
            v55[5] = *(_QWORD *)this;
            if ( !*(_QWORD *)(v11 + 8) )
            {
              v57 = WdLogNewEntry5_WdAssertion(v56);
              WdLogEvent5_WdAssertion(v57);
            }
            v58 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL);
            v55[6] = *(int *)(v58 + 272);
            if ( !*(_QWORD *)(v11 + 8) )
            {
              v59 = WdLogNewEntry5_WdAssertion(v58);
              WdLogEvent5_WdAssertion(v59);
            }
            v60 = v55;
            v55[7] = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL) + 268LL);
          }
          else
          {
            v74 = (DMMVIDPNTOPOLOGY *)(v73 + 96);
            if ( v73 != -96 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 96) + 72LL));
              v22 = *((_QWORD *)a1 + 266);
              v23 = 0;
              v24 = *(_QWORD *)(v11 + 96);
              v75 = v24;
              v79 = 0;
              if ( *(_DWORD *)(v22 + 80) )
              {
                do
                {
                  v25 = (_QWORD *)(v24 + 24);
                  if ( (_QWORD *)*v25 != v25 )
                  {
                    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(*v25 - 8LL);
                    if ( *v25 != 8LL )
                    {
                      do
                      {
                        v80 = *((_DWORD *)NextTarget + 6);
                        if ( !DMMVIDPNTOPOLOGY::FindPath(v76, v23, v80)
                          && (*((_DWORD *)NextTarget + 19) != 15 || *((_QWORD *)NextTarget + 12)) )
                        {
                          if ( *((_QWORD *)v28 + 5) )
                          {
                            v66 = WdLogNewEntry5_WdAssertion(v27);
                            *(_QWORD *)(v66 + 24) = 852LL;
                            WdLogEvent5_WdAssertion(v66);
                            v28 = v74;
                          }
                          v29 = VIDPN_MGR::AddPathToVidPnTopology(
                                  (VIDPN_MGR *)v11,
                                  v28,
                                  v79,
                                  v80,
                                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                                  0xFFFFu,
                                  0,
                                  D3DKMDT_MCC_IGNORE);
                          v17 = (DMMVIDPNTOPOLOGY *)v29;
                          if ( v29 == -1071774975 )
                          {
                            LODWORD(v17) = 0;
                          }
                          else
                          {
                            if ( v29 < 0 )
                            {
                              v69 = WdLogNewEntry5_WdError(v30);
                              *(_QWORD *)(v69 + 24) = v17;
                              WdLogEvent5_WdError(v69);
LABEL_68:
                              auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v75);
LABEL_29:
                              auto_rc<DMMVIDPN>::reset(&v73, 0LL);
LABEL_30:
                              auto_rc<DMMVIDPN>::reset((__int64 *)&v71, 0LL);
                              DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v72 + 40));
                              v9 = (unsigned int)v17;
                              goto LABEL_31;
                            }
                            v17 = v74;
                            if ( *((_QWORD *)v74 + 5) != 1LL )
                            {
                              v67 = WdLogNewEntry5_WdAssertion(v30);
                              *(_QWORD *)(v67 + 24) = 883LL;
                              WdLogEvent5_WdAssertion(v67);
                            }
                            Path = DMMVIDPNTOPOLOGY::FindPath(v17, v79, v80);
                            LODWORD(v17) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(this, a1, Path, 0, 0);
                            if ( (int)v17 < 0 )
                              goto LABEL_68;
                            ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                              (__int64)v77,
                              (__int64)v74 + 56,
                              2u,
                              v32,
                              v70,
                              0xFFuLL);
                            DMMVIDPNTOPOLOGY::RemovePath(v74, v79, v80, 0LL);
                            if ( *((_QWORD *)v74 + 5) )
                            {
                              v68 = WdLogNewEntry5_WdAssertion(v34);
                              *(_QWORD *)(v68 + 24) = 907LL;
                              WdLogEvent5_WdAssertion(v68);
                            }
                            ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                              (ApplyPermissionWithinThisScope *)v77,
                              v33,
                              v35,
                              v36);
                          }
                        }
                        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                       (DMMVIDEOPRESENTTARGETSET *)v24,
                                       NextTarget);
                        v23 = v79;
                      }
                      while ( NextTarget );
                    }
                  }
                  v79 = ++v23;
                }
                while ( v23 < *(_DWORD *)(*((_QWORD *)a1 + 266) + 80LL) );
              }
              if ( v24 )
                ReferenceCounted::Release((ReferenceCounted *)(v24 + 64));
              goto LABEL_29;
            }
            v62 = (_QWORD *)WdLogNewEntry5_WdError(v21);
            v62[3] = -96LL;
            v62[4] = this;
            v63 = *(_QWORD *)this;
            v62[5] = *(_QWORD *)this;
            if ( !*(_QWORD *)(v11 + 8) )
            {
              v64 = WdLogNewEntry5_WdAssertion(v63);
              WdLogEvent5_WdAssertion(v64);
            }
            v65 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL);
            v62[6] = *(int *)(v65 + 272);
            if ( !*(_QWORD *)(v11 + 8) )
            {
              v61 = WdLogNewEntry5_WdAssertion(v65);
              WdLogEvent5_WdAssertion(v61);
            }
            v60 = v62;
            v62[7] = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL) + 268LL);
          }
          WdLogEvent5_WdError(v60);
          goto LABEL_29;
        }
        v51 = (_QWORD *)WdLogNewEntry5_WdError(v19);
        v51[3] = v18;
        v51[4] = this;
        v52 = *(_QWORD *)this;
        v51[5] = *(_QWORD *)this;
        if ( !*(_QWORD *)(v11 + 8) )
        {
          v53 = WdLogNewEntry5_WdAssertion(v52);
          WdLogEvent5_WdAssertion(v53);
        }
        v54 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL);
        v51[6] = *(int *)(v54 + 272);
        if ( !*(_QWORD *)(v11 + 8) )
        {
          v45 = WdLogNewEntry5_WdAssertion(v54);
          WdLogEvent5_WdAssertion(v45);
        }
        v44 = v51;
        v51[7] = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL) + 268LL);
      }
      WdLogEvent5_WdError(v44);
      goto LABEL_30;
    }
  }
LABEL_31:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v78);
  return v9;
}
