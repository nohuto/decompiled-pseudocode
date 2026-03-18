/*
 * XREFs of DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00B89C4
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAI@Z @ 0x1C00B74D4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00012D4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004F94 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0089ECC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C00B6870 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 *     ?CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00B9638 (-CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00CBA5C (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C00CC7A0 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00CCF0C (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00CD0FC (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 */

__int64 __fastcall DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r13
  VIDPN_MGR *v9; // r13
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  DMMVIDPN *v18; // rbx
  char *v19; // r12
  _QWORD *v20; // r14
  char *v21; // r14
  __int64 v22; // rdi
  int PathSourceFromTarget; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  char v26; // cl
  char *v27; // r14
  __int64 v29; // rbx
  __int64 v30; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // r12
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rax
  _QWORD *v47; // r14
  char *v48; // r14
  char *v49; // r12
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  int v55; // eax
  char *v56; // r14
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rbx
  _QWORD *v60; // rax
  bool v61; // zf
  void *v62; // r8
  _QWORD *v63; // rax
  struct DMMVIDPN *v64; // rbx
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rcx
  char v68; // [rsp+40h] [rbp-C0h]
  DMMVIDPN *v69; // [rsp+48h] [rbp-B8h] BYREF
  struct DMMVIDPN *v70; // [rsp+50h] [rbp-B0h] BYREF
  DMMVIDPNTOPOLOGY *v71; // [rsp+58h] [rbp-A8h]
  unsigned int v72; // [rsp+60h] [rbp-A0h] BYREF
  char v73; // [rsp+64h] [rbp-9Ch]
  int v74; // [rsp+68h] [rbp-98h]
  char *v75; // [rsp+70h] [rbp-90h]
  __int64 v76; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v77[480]; // [rsp+80h] [rbp-80h] BYREF

  v68 = 0;
  if ( !a2 )
  {
    v33 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v33 + 24) = a1;
LABEL_36:
    WdLogEvent5_WdError(v33);
    return 3221225485LL;
  }
  if ( !*(_QWORD *)(a2 + 16) )
  {
    v33 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v33 + 24) = a2;
    *(_QWORD *)(v33 + 32) = a1;
    goto LABEL_36;
  }
  if ( !a1 )
  {
    v32 = WdLogNewEntry5_WdError(0LL);
    goto LABEL_32;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    WdLogEvent5_WdAssertion(v34);
  }
  v8 = *(_QWORD *)(a1 + 1976);
  if ( !v8 )
  {
    v32 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v32 + 24) = a1;
LABEL_32:
    WdLogEvent5_WdError(v32);
    return 3223191554LL;
  }
  v9 = *(VIDPN_MGR **)(v8 + 88);
  if ( !v9 )
  {
    v35 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v35 + 24) = a1;
    WdLogEvent5_WdError(v35);
    return 3223192373LL;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v76, (__int64)v9);
  v70 = 0LL;
  v10 = VIDPN_MGR::CreateClientVidPnFromActive(v9, &v70);
  v12 = v10;
  if ( v10 < 0 )
  {
    v36 = WdLogNewEntry5_WdDmmEvent(v11);
    *(_QWORD *)(v36 + 24) = v12;
    WdLogEvent5_WdDmmEvent(v36);
    goto LABEL_23;
  }
  v69 = 0LL;
  v13 = *((_QWORD *)v9 + 10);
  v71 = (struct DMMVIDPN *)((char *)v70 + 96);
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 32));
    v14 = *((_QWORD *)v9 + 10);
  }
  else
  {
    v14 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v69, v14);
  v18 = v69;
  if ( !v69 )
  {
    v37 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v37 + 24) = v9;
    WdLogEvent5_WdError(v37);
    LODWORD(v12) = -1071774884;
    goto LABEL_22;
  }
  memset(v77, 0, sizeof(v77));
  v19 = (char *)v69 + 96;
  v75 = (char *)v69 + 96;
  v20 = (_QWORD *)((char *)v69 + 120);
  if ( (_QWORD *)*v20 == v20 )
    goto LABEL_21;
  v21 = (char *)(*v20 - 8LL);
  if ( !v21 )
    goto LABEL_21;
  while ( 1 )
  {
    if ( *(_DWORD *)(*((_QWORD *)v21 + 11) + 24LL) != ((*(_DWORD *)(a2 + 4) >> 6) & 0xF) )
      goto LABEL_16;
    v22 = *(unsigned int *)(*((_QWORD *)v21 + 12) + 24LL);
    PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v71, v22, v16, v17);
    v25 = (*(_DWORD *)(a2 + 4) >> 6) & 0xF;
    if ( PathSourceFromTarget == (_DWORD)v25 )
      goto LABEL_16;
    if ( PathSourceFromTarget != -1 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v25, v24, v16, v17);
      WdLogEvent5_WdAssertion(v38);
    }
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 12) + 72LL));
    v29 = *((_QWORD *)v9 + 12);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v29, v22);
    if ( !TargetById )
      break;
    if ( v29 )
      ReferenceCounted::Release((ReferenceCounted *)(v29 + 64));
    v18 = v69;
    if ( *((_DWORD *)TargetById + 26) != 2 )
    {
      if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
             v69,
             v22,
             (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v77) < 0 )
      {
        v43 = WdLogNewEntry5_WdAssertion(v40, v39, v41, v42);
        WdLogEvent5_WdAssertion(v43);
      }
      v44 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
              v9,
              v71,
              (struct _D3DKMDT_VIDPN_PRESENT_PATH *)v77,
              D3DKMDT_MCC_IGNORE);
      v12 = v44;
      if ( v44 < 0 )
        goto LABEL_64;
      v19 = v75;
      v26 = 1;
      v68 = 1;
      goto LABEL_17;
    }
    v19 = v75;
LABEL_16:
    v26 = v68;
LABEL_17:
    v27 = (char *)*((_QWORD *)v21 + 1);
    if ( v27 == v19 + 24 )
      v21 = 0LL;
    else
      v21 = v27 - 8;
    if ( !v21 )
    {
      if ( !v26 )
        goto LABEL_21;
      v47 = v19 + 24;
      if ( (_QWORD *)*v47 != v47 )
      {
        v48 = (char *)(*v47 - 8LL);
        if ( v48 )
        {
          v49 = v19 + 24;
          while ( 1 )
          {
            if ( *(_DWORD *)(*((_QWORD *)v48 + 11) + 24LL) == ((*(_DWORD *)(a2 + 4) >> 6) & 0xF) )
            {
              if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                     v18,
                     *(_DWORD *)(*((_QWORD *)v48 + 12) + 24LL),
                     (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v77) < 0 )
              {
                v54 = WdLogNewEntry5_WdAssertion(v51, v50, v52, v53);
                WdLogEvent5_WdAssertion(v54);
              }
              v55 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(
                      v9,
                      v71,
                      (const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)v77);
              v12 = v55;
              if ( v55 < 0 )
                break;
            }
            v56 = (char *)*((_QWORD *)v48 + 1);
            if ( v56 == v49 )
              v48 = 0LL;
            else
              v48 = v56 - 8;
            if ( !v48 )
              goto LABEL_60;
          }
LABEL_64:
          v63 = (_QWORD *)WdLogNewEntry5_WdError(v45);
          v63[3] = v12;
LABEL_68:
          WdLogEvent5_WdError(v63);
          goto LABEL_22;
        }
      }
LABEL_60:
      v57 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
              *(ADAPTER_DISPLAY **)(a1 + 1976),
              (*(_DWORD *)(a2 + 4) >> 6) & 0xF,
              0LL,
              1024LL,
              *(struct DXGDEVICE **)(1008LL * ((*(_DWORD *)(a2 + 4) >> 6) & 0xF)
                                   + *(_QWORD *)(*(_QWORD *)(a1 + 1976) + 112LL)
                                   + 672),
              0);
      v59 = v57;
      if ( v57 < 0 )
      {
        v60 = (_QWORD *)WdLogNewEntry5_WdError(v58);
        v60[3] = (*(_DWORD *)(a2 + 4) >> 6) & 0xF;
        v60[4] = a1;
        v60[5] = v59;
        WdLogEvent5_WdError(v60);
      }
      v73 &= 0xF8u;
      v74 = -3;
      v61 = *(_QWORD *)(a1 + 1984) == 0LL;
      v72 = v72 & 0xFFFFFF00 | 0x24;
      if ( v61 )
        v62 = 0LL;
      else
        v62 = *(void **)(a2 + 16);
      v64 = v70;
      v65 = VIDPN_MGR::CommitVidPn(
              v9,
              v70,
              v62,
              (*(_DWORD *)(a2 + 4) >> 6) & 0xF,
              D3DKMDT_MCC_IGNORE,
              (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v72,
              0LL,
              0LL);
      v12 = v65;
      if ( v65 < 0 )
      {
        v63 = (_QWORD *)WdLogNewEntry5_WdError(v66);
        v63[3] = v64;
        v67 = (*(_DWORD *)(a2 + 4) >> 6) & 0xF;
        v63[5] = v12;
        v63[4] = v67;
        goto LABEL_68;
      }
LABEL_21:
      LODWORD(v12) = 0;
      goto LABEL_22;
    }
  }
  v46 = WdLogNewEntry5_WdError(v30);
  *(_QWORD *)(v46 + 24) = v22;
  *(_QWORD *)(v46 + 32) = a1;
  WdLogEvent5_WdError(v46);
  if ( v29 )
    ReferenceCounted::Release((ReferenceCounted *)(v29 + 64));
  LODWORD(v12) = -1071774971;
LABEL_22:
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v69, 0LL);
LABEL_23:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v70, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v76 + 40));
  return (unsigned int)v12;
}
