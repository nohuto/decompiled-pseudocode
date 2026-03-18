/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_ @ 0x1C00B10E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C000268C (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0004F50 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C00285FC (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C0063868 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C0063918 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C008A0DC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0096618 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00968D8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0097248 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0097378 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00973C8 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_(
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
  struct VIDPN_MGR *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _BOOL8 v17; // r8
  __int64 v18; // r9
  DMMVIDPNTOPOLOGY *v19; // r12
  struct DMMVIDPN *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // ecx
  _QWORD *v27; // rbx
  _QWORD *v28; // rax
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r13
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  DMMVIDPNTOPOLOGY *v34; // r10
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  _QWORD *v48; // rax
  __int64 v49; // rdx
  _QWORD *v50; // rbx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  _QWORD *v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  _QWORD *v62; // r15
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  _QWORD *v70; // r15
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rdx
  _QWORD *v75; // rbx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rax
  _QWORD *v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // r9
  _QWORD *v87; // r15
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // [rsp+20h] [rbp-79h]
  struct DMMVIDPN *v96; // [rsp+40h] [rbp-59h] BYREF
  __int64 v97; // [rsp+48h] [rbp-51h] BYREF
  __int64 v98; // [rsp+50h] [rbp-49h] BYREF
  DMMVIDPNTOPOLOGY *v99; // [rsp+58h] [rbp-41h]
  DMMVIDPNTOPOLOGY *v100; // [rsp+60h] [rbp-39h]
  _BYTE v101[24]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v102[112]; // [rsp+80h] [rbp-19h] BYREF
  unsigned int i; // [rsp+110h] [rbp+77h]
  unsigned int v104; // [rsp+118h] [rbp+7Fh]

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v102, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v102);
  v9 = 0;
  if ( v4 < 0 )
  {
    if ( v4 == -1073741130 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
      v48[3] = a1;
      v48[4] = (int)HIDWORD(*(_QWORD *)((char *)a1 + 252));
      v48[5] = *((unsigned int *)a1 + 63);
      v48[6] = this;
    }
    else
    {
      v9 = v4;
    }
  }
  else if ( !*((_BYTE *)a1 + 1909) && (!DXGADAPTER::IsBddFallbackDriver(a1) || DxgkIsMSBDDFallbackEnabled()) )
  {
    v10 = *((_QWORD *)a1 + 247);
    if ( v10 )
    {
      v11 = *(struct VIDPN_MGR **)(v10 + 88);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v97, (__int64)v11);
      v96 = 0LL;
      ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                                 v11,
                                                 (__int64 *)&v96,
                                                 v12,
                                                 v13);
      v19 = (DMMVIDPNTOPOLOGY *)ClientVidPnFromLastClientCommitedVidPn;
      if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
      {
        v50 = (_QWORD *)WdLogNewEntry5_WdError(v16);
        v50[3] = v19;
        v50[4] = v11;
        v53 = *(_QWORD *)this;
        v50[5] = *(_QWORD *)this;
        if ( !*((_QWORD *)v11 + 1) )
        {
          v54 = WdLogNewEntry5_WdAssertion(v53, v49, v51, v52);
          WdLogEvent5_WdAssertion(v54);
        }
        v55 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL);
        v50[6] = (int)HIDWORD(*(_QWORD *)(v55 + 252));
        if ( !*((_QWORD *)v11 + 1) )
        {
          v56 = WdLogNewEntry5_WdAssertion(v55, v49, v51, v52);
          WdLogEvent5_WdAssertion(v56);
        }
        v57 = v50;
        v50[7] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL) + 252LL);
      }
      else
      {
        v20 = v96;
        v100 = (struct DMMVIDPN *)((char *)v96 + 96);
        if ( v96 == (struct DMMVIDPN *)-96LL )
        {
          v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
          v62[3] = -96LL;
          v62[4] = this;
          v63 = *(_QWORD *)this;
          v62[5] = *(_QWORD *)this;
          if ( !*((_QWORD *)v11 + 1) )
          {
            v64 = WdLogNewEntry5_WdAssertion(v63, v59, v60, v61);
            WdLogEvent5_WdAssertion(v64);
          }
          v65 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL);
          v62[6] = (int)HIDWORD(*(_QWORD *)(v65 + 252));
          if ( !*((_QWORD *)v11 + 1) )
          {
            v66 = WdLogNewEntry5_WdAssertion(v65, v59, v60, v61);
            WdLogEvent5_WdAssertion(v66);
          }
          v62[7] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL) + 252LL);
          WdLogEvent5_WdWarning(v62);
          goto LABEL_30;
        }
        LOBYTE(v17) = 1;
        LODWORD(v19) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, v96, v17, v18);
        if ( (int)v19 >= 0 )
        {
          v98 = 0LL;
          v24 = VIDPN_MGR::CreateClientVidPn(v11, &v98, v22, v23);
          v19 = (DMMVIDPNTOPOLOGY *)v24;
          if ( v24 < 0 )
          {
            v75 = (_QWORD *)WdLogNewEntry5_WdError(v25);
            v75[3] = v19;
            v75[4] = v11;
            v78 = *(_QWORD *)this;
            v75[5] = *(_QWORD *)this;
            if ( !*((_QWORD *)v11 + 1) )
            {
              v79 = WdLogNewEntry5_WdAssertion(v78, v74, v76, v77);
              WdLogEvent5_WdAssertion(v79);
            }
            v80 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL);
            v75[6] = (int)HIDWORD(*(_QWORD *)(v80 + 252));
            if ( !*((_QWORD *)v11 + 1) )
            {
              v81 = WdLogNewEntry5_WdAssertion(v80, v74, v76, v77);
              WdLogEvent5_WdAssertion(v81);
            }
            v82 = v75;
            v75[7] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL) + 252LL);
          }
          else
          {
            v99 = (DMMVIDPNTOPOLOGY *)(v98 + 96);
            if ( v98 != -96 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v11 + 12) + 72LL));
              v26 = 0;
              v27 = (_QWORD *)*((_QWORD *)v11 + 12);
              for ( i = 0; v26 < *(_DWORD *)(*((_QWORD *)a1 + 247) + 80LL); i = v26 )
              {
                v28 = v27 + 3;
                if ( (_QWORD *)*v28 != v28 )
                {
                  NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(*v28 - 8LL);
                  if ( *v28 != 8LL )
                  {
                    do
                    {
                      v104 = *((_DWORD *)NextTarget + 6);
                      if ( !DMMVIDPNTOPOLOGY::FindPath(v100, v26, v104)
                        && (*((_DWORD *)NextTarget + 19) != 15 || *((_QWORD *)NextTarget + 12)) )
                      {
                        if ( *((_QWORD *)v34 + 5) )
                        {
                          v91 = WdLogNewEntry5_WdAssertion(v31, v30, v32, v33);
                          *(_QWORD *)(v91 + 24) = 792LL;
                          WdLogEvent5_WdAssertion(v91);
                          v34 = v99;
                        }
                        v35 = VIDPN_MGR::AddPathToVidPnTopology(
                                v11,
                                v34,
                                i,
                                v104,
                                (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                                0xFFFFu,
                                0,
                                D3DKMDT_MCC_IGNORE);
                        v19 = (DMMVIDPNTOPOLOGY *)v35;
                        if ( v35 == -1071774975 )
                        {
                          LODWORD(v19) = 0;
                        }
                        else
                        {
                          if ( v35 < 0 )
                          {
                            v94 = WdLogNewEntry5_WdError(v37);
                            *(_QWORD *)(v94 + 24) = v19;
                            WdLogEvent5_WdError(v94);
                            goto LABEL_27;
                          }
                          v19 = v99;
                          if ( *((_QWORD *)v99 + 5) != 1LL )
                          {
                            v92 = WdLogNewEntry5_WdAssertion(v37, v36, v38, v39);
                            *(_QWORD *)(v92 + 24) = 823LL;
                            WdLogEvent5_WdAssertion(v92);
                          }
                          Path = DMMVIDPNTOPOLOGY::FindPath(v19, i, v104);
                          LODWORD(v19) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(this, a1, Path, 0, 0);
                          if ( (int)v19 < 0 )
                            goto LABEL_27;
                          LOBYTE(v41) = 2;
                          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                            (__int64)v101,
                            (__int64)v99 + 56,
                            v41,
                            v42,
                            v95,
                            0xFFuLL);
                          DMMVIDPNTOPOLOGY::RemovePath(v99, i, v104, 0LL);
                          if ( *((_QWORD *)v99 + 5) )
                          {
                            v93 = WdLogNewEntry5_WdAssertion(v44, v43, v45, v46);
                            *(_QWORD *)(v93 + 24) = 847LL;
                            WdLogEvent5_WdAssertion(v93);
                          }
                          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v101);
                        }
                      }
                      NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v27, NextTarget);
                      v26 = i;
                    }
                    while ( NextTarget );
                  }
                }
                ++v26;
              }
LABEL_27:
              if ( v27 )
                ReferenceCounted::Release((ReferenceCounted *)(v27 + 8));
              goto LABEL_29;
            }
            v87 = (_QWORD *)WdLogNewEntry5_WdError(v25);
            v87[3] = -96LL;
            v87[4] = this;
            v88 = *(_QWORD *)this;
            v87[5] = *(_QWORD *)this;
            if ( !*((_QWORD *)v11 + 1) )
            {
              v89 = WdLogNewEntry5_WdAssertion(v88, v84, v85, v86);
              WdLogEvent5_WdAssertion(v89);
            }
            v90 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL);
            v87[6] = (int)HIDWORD(*(_QWORD *)(v90 + 252));
            if ( !*((_QWORD *)v11 + 1) )
            {
              v83 = WdLogNewEntry5_WdAssertion(v90, v84, v85, v86);
              WdLogEvent5_WdAssertion(v83);
            }
            v82 = v87;
            v87[7] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL) + 252LL);
          }
          WdLogEvent5_WdError(v82);
LABEL_29:
          auto_rc<DMMVIDPN>::reset(&v98, 0LL);
LABEL_30:
          auto_rc<DMMVIDPN>::reset((__int64 *)&v96, 0LL);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v97 + 40));
          v9 = (unsigned int)v19;
          goto LABEL_31;
        }
        v70 = (_QWORD *)WdLogNewEntry5_WdError(v21);
        v70[3] = v20;
        v70[4] = this;
        v71 = *(_QWORD *)this;
        v70[5] = *(_QWORD *)this;
        if ( !*((_QWORD *)v11 + 1) )
        {
          v72 = WdLogNewEntry5_WdAssertion(v71, v67, v68, v69);
          WdLogEvent5_WdAssertion(v72);
        }
        v73 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL);
        v70[6] = (int)HIDWORD(*(_QWORD *)(v73 + 252));
        if ( !*((_QWORD *)v11 + 1) )
        {
          v58 = WdLogNewEntry5_WdAssertion(v73, v67, v68, v69);
          WdLogEvent5_WdAssertion(v58);
        }
        v57 = v70;
        v70[7] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL) + 252LL);
      }
      WdLogEvent5_WdError(v57);
      goto LABEL_30;
    }
  }
LABEL_31:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v102);
  return v9;
}
