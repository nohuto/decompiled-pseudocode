/*
 * XREFs of sub_1C00C5900 @ 0x1C00C5900
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00031D4 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00048C4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C00281BC (DxgkIsMSBDDFallbackEnabled.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008DC58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008F504 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FFCC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0091214 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00A1DEC (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00A1E9C (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A58F0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5940 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 */

__int64 __fastcall sub_1C00C5900(struct DXGADAPTER *a1, CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  _QWORD *v10; // rax
  __int64 v11; // rsi
  struct VIDPN_MGR *v12; // rsi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  DMMVIDPNTOPOLOGY *v18; // r12
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rcx
  struct DMMVIDPN *v25; // rbx
  _QWORD *v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // r15
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  _QWORD *v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  _QWORD *v44; // rcx
  _QWORD *v45; // r15
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  unsigned int v50; // ecx
  _QWORD *v51; // rbx
  _QWORD *v52; // rax
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r13
  __int64 v54; // rcx
  DMMVIDPNTOPOLOGY *v55; // r10
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rax
  struct DMMVIDPNPRESENTPATH *Path; // rax
  unsigned __int8 v61; // r9
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v66; // [rsp+20h] [rbp-79h]
  struct DMMVIDPN *v67; // [rsp+40h] [rbp-59h] BYREF
  __int64 v68; // [rsp+48h] [rbp-51h] BYREF
  __int64 v69; // [rsp+50h] [rbp-49h] BYREF
  DMMVIDPNTOPOLOGY *v70; // [rsp+58h] [rbp-41h]
  DMMVIDPNTOPOLOGY *v71; // [rsp+60h] [rbp-39h]
  _BYTE v72[24]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v73[112]; // [rsp+80h] [rbp-19h] BYREF
  unsigned int i; // [rsp+110h] [rbp+77h]
  unsigned int v75; // [rsp+118h] [rbp+7Fh]

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v73, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v73);
  v9 = 0;
  if ( v4 < 0 )
  {
    if ( v4 == -1073741130 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
      v10[3] = a1;
      v10[4] = (int)HIDWORD(*(_QWORD *)((char *)a1 + 252));
      v10[5] = *((unsigned int *)a1 + 63);
      v10[6] = this;
    }
    else
    {
      v9 = v4;
    }
    goto LABEL_66;
  }
  if ( !*((_BYTE *)a1 + 1917) && (!DXGADAPTER::IsBddFallbackDriver(a1) || DxgkIsMSBDDFallbackEnabled()) )
  {
    v11 = *((_QWORD *)a1 + 248);
    if ( v11 )
    {
      v12 = *(struct VIDPN_MGR **)(v11 + 112);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v68, (__int64)v12);
      v67 = 0LL;
      ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                                 v12,
                                                 (__int64 *)&v67);
      v18 = (DMMVIDPNTOPOLOGY *)ClientVidPnFromLastClientCommitedVidPn;
      if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdError(v15);
        v19[3] = v18;
        v19[4] = v12;
        v20 = *(_QWORD *)this;
        v19[5] = *(_QWORD *)this;
        if ( !*((_QWORD *)v12 + 1) )
        {
          v21 = WdLogNewEntry5_WdAssertion(v20);
          WdLogEvent5_WdAssertion(v21);
        }
        v22 = *(_QWORD *)(*((_QWORD *)v12 + 1) + 16LL);
        v19[6] = (int)HIDWORD(*(_QWORD *)(v22 + 252));
        if ( !*((_QWORD *)v12 + 1) )
        {
          v23 = WdLogNewEntry5_WdAssertion(v22);
          WdLogEvent5_WdAssertion(v23);
        }
        v24 = v19;
        v19[7] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v12 + 1) + 16LL) + 252LL);
LABEL_15:
        WdLogEvent5_WdError(v24);
LABEL_65:
        auto_rc<DMMVIDPN>::reset((__int64 *)&v67, 0LL);
        DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v68 + 40));
        v9 = (unsigned int)v18;
        goto LABEL_66;
      }
      v25 = v67;
      v71 = (struct DMMVIDPN *)((char *)v67 + 96);
      if ( v67 == (struct DMMVIDPN *)-96LL )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
        v26[3] = -96LL;
        v26[4] = this;
        v27 = *(_QWORD *)this;
        v26[5] = *(_QWORD *)this;
        if ( !*((_QWORD *)v12 + 1) )
        {
          v28 = WdLogNewEntry5_WdAssertion(v27);
          WdLogEvent5_WdAssertion(v28);
        }
        v29 = *(_QWORD *)(*((_QWORD *)v12 + 1) + 16LL);
        v26[6] = (int)HIDWORD(*(_QWORD *)(v29 + 252));
        if ( !*((_QWORD *)v12 + 1) )
        {
          v30 = WdLogNewEntry5_WdAssertion(v29);
          WdLogEvent5_WdAssertion(v30);
        }
        v26[7] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v12 + 1) + 16LL) + 252LL);
        WdLogEvent5_WdWarning(v26);
        goto LABEL_65;
      }
      LODWORD(v18) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, v67, 1);
      if ( (int)v18 < 0 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdError(v31);
        v32[3] = v25;
        v32[4] = this;
        v33 = *(_QWORD *)this;
        v32[5] = *(_QWORD *)this;
        if ( !*((_QWORD *)v12 + 1) )
        {
          v34 = WdLogNewEntry5_WdAssertion(v33);
          WdLogEvent5_WdAssertion(v34);
        }
        v35 = *(_QWORD *)(*((_QWORD *)v12 + 1) + 16LL);
        v32[6] = (int)HIDWORD(*(_QWORD *)(v35 + 252));
        if ( !*((_QWORD *)v12 + 1) )
        {
          v36 = WdLogNewEntry5_WdAssertion(v35);
          WdLogEvent5_WdAssertion(v36);
        }
        v24 = v32;
        v32[7] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v12 + 1) + 16LL) + 252LL);
        goto LABEL_15;
      }
      v69 = 0LL;
      v37 = VIDPN_MGR::CreateClientVidPn(v12, &v69);
      v18 = (DMMVIDPNTOPOLOGY *)v37;
      if ( v37 >= 0 )
      {
        v70 = (DMMVIDPNTOPOLOGY *)(v69 + 96);
        if ( v69 != -96 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v12 + 12) + 72LL));
          v50 = 0;
          v51 = (_QWORD *)*((_QWORD *)v12 + 12);
          for ( i = 0; v50 < *(_DWORD *)(*((_QWORD *)a1 + 248) + 104LL); i = v50 )
          {
            v52 = v51 + 3;
            if ( (_QWORD *)*v52 != v52 )
            {
              NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(*v52 - 8LL);
              if ( *v52 != 8LL )
              {
                do
                {
                  v75 = *((_DWORD *)NextTarget + 6);
                  if ( !DMMVIDPNTOPOLOGY::FindPath(v71, v50, v75)
                    && (*((_DWORD *)NextTarget + 19) != 15 || *((_QWORD *)NextTarget + 12)) )
                  {
                    if ( *((_QWORD *)v55 + 5) )
                    {
                      v56 = WdLogNewEntry5_WdAssertion(v54);
                      *(_QWORD *)(v56 + 24) = 837LL;
                      WdLogEvent5_WdAssertion(v56);
                      v55 = v70;
                    }
                    v57 = VIDPN_MGR::AddPathToVidPnTopology(
                            v12,
                            v55,
                            i,
                            v75,
                            (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                            0xFFFFu,
                            0,
                            D3DKMDT_MCC_IGNORE);
                    v18 = (DMMVIDPNTOPOLOGY *)v57;
                    if ( v57 == -1071774975 )
                    {
                      LODWORD(v18) = 0;
                    }
                    else
                    {
                      if ( v57 < 0 )
                      {
                        v64 = WdLogNewEntry5_WdError(v58);
                        *(_QWORD *)(v64 + 24) = v18;
                        WdLogEvent5_WdError(v64);
                        goto LABEL_62;
                      }
                      v18 = v70;
                      if ( *((_QWORD *)v70 + 5) != 1LL )
                      {
                        v59 = WdLogNewEntry5_WdAssertion(v58);
                        *(_QWORD *)(v59 + 24) = 868LL;
                        WdLogEvent5_WdAssertion(v59);
                      }
                      Path = DMMVIDPNTOPOLOGY::FindPath(v18, i, v75);
                      LODWORD(v18) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(this, a1, Path, 0, 0);
                      if ( (int)v18 < 0 )
                        goto LABEL_62;
                      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                        (__int64)v72,
                        (__int64)v70 + 56,
                        2u,
                        v61,
                        v66,
                        0xFFuLL);
                      DMMVIDPNTOPOLOGY::RemovePath(v70, i, v75, 0LL);
                      if ( *((_QWORD *)v70 + 5) )
                      {
                        v63 = WdLogNewEntry5_WdAssertion(v62);
                        *(_QWORD *)(v63 + 24) = 892LL;
                        WdLogEvent5_WdAssertion(v63);
                      }
                      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v72);
                    }
                  }
                  NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v51, NextTarget);
                  v50 = i;
                }
                while ( NextTarget );
              }
            }
            ++v50;
          }
LABEL_62:
          if ( v51 )
            ReferenceCounted::Release((ReferenceCounted *)(v51 + 8));
          goto LABEL_64;
        }
        v45 = (_QWORD *)WdLogNewEntry5_WdError(v38);
        v45[3] = -96LL;
        v45[4] = this;
        v46 = *(_QWORD *)this;
        v45[5] = *(_QWORD *)this;
        if ( !*((_QWORD *)v12 + 1) )
        {
          v47 = WdLogNewEntry5_WdAssertion(v46);
          WdLogEvent5_WdAssertion(v47);
        }
        v48 = *(_QWORD *)(*((_QWORD *)v12 + 1) + 16LL);
        v45[6] = (int)HIDWORD(*(_QWORD *)(v48 + 252));
        if ( !*((_QWORD *)v12 + 1) )
        {
          v49 = WdLogNewEntry5_WdAssertion(v48);
          WdLogEvent5_WdAssertion(v49);
        }
        v44 = v45;
        v45[7] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v12 + 1) + 16LL) + 252LL);
      }
      else
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdError(v38);
        v39[3] = v18;
        v39[4] = v12;
        v40 = *(_QWORD *)this;
        v39[5] = *(_QWORD *)this;
        if ( !*((_QWORD *)v12 + 1) )
        {
          v41 = WdLogNewEntry5_WdAssertion(v40);
          WdLogEvent5_WdAssertion(v41);
        }
        v42 = *(_QWORD *)(*((_QWORD *)v12 + 1) + 16LL);
        v39[6] = (int)HIDWORD(*(_QWORD *)(v42 + 252));
        if ( !*((_QWORD *)v12 + 1) )
        {
          v43 = WdLogNewEntry5_WdAssertion(v42);
          WdLogEvent5_WdAssertion(v43);
        }
        v44 = v39;
        v39[7] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v12 + 1) + 16LL) + 252LL);
      }
      WdLogEvent5_WdError(v44);
LABEL_64:
      auto_rc<DMMVIDPN>::reset(&v69, 0LL);
      goto LABEL_65;
    }
  }
LABEL_66:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v73);
  return v9;
}
