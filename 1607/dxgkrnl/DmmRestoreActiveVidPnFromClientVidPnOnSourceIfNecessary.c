/*
 * XREFs of DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00D9D3C
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0094560 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0001970 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000A6B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C007E558 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00804BC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C0082D98 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0083584 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008376C (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0084EB8 (-CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z @ 0x1C00881A8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z.c)
 */

__int64 __fastcall DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r13
  VIDPN_MGR *v6; // r13
  __int64 v7; // r8
  __int64 v8; // r9
  int ClientVidPnFromActive; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  DMMVIDPN *v15; // rbx
  char *v16; // r12
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // r14
  char *v20; // r14
  __int64 v21; // rdi
  int PathSourceFromTarget; // eax
  __int64 v23; // rcx
  char v24; // cl
  char *v25; // r14
  __int64 v27; // rbx
  __int64 v28; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // r12
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  _QWORD *v42; // r14
  char *v43; // r14
  char *v44; // r12
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  char *v48; // r14
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rbx
  _QWORD *v52; // rax
  bool v53; // zf
  void *v54; // r8
  _QWORD *v55; // rax
  struct DMMVIDPN *v56; // rbx
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rcx
  char v60; // [rsp+40h] [rbp-C0h]
  DMMVIDPN *v61; // [rsp+48h] [rbp-B8h] BYREF
  struct DMMVIDPN *v62; // [rsp+50h] [rbp-B0h] BYREF
  DMMVIDPNTOPOLOGY *v63; // [rsp+58h] [rbp-A8h]
  unsigned int v64; // [rsp+60h] [rbp-A0h] BYREF
  char v65; // [rsp+64h] [rbp-9Ch]
  int v66; // [rsp+68h] [rbp-98h]
  char *v67; // [rsp+70h] [rbp-90h]
  __int64 v68; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v69[480]; // [rsp+80h] [rbp-80h] BYREF

  v60 = 0;
  if ( !a2 )
  {
    v31 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v31 + 24) = a1;
LABEL_36:
    WdLogEvent5_WdError(v31);
    return 3221225485LL;
  }
  if ( !*(_QWORD *)(a2 + 16) )
  {
    v31 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v31 + 24) = a2;
    *(_QWORD *)(v31 + 32) = a1;
    goto LABEL_36;
  }
  if ( !a1 )
  {
    v30 = WdLogNewEntry5_WdError(0LL);
    goto LABEL_32;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v32);
  }
  v5 = *(_QWORD *)(a1 + 2128);
  if ( !v5 )
  {
    v30 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v30 + 24) = a1;
LABEL_32:
    WdLogEvent5_WdError(v30);
    return 3223191554LL;
  }
  v6 = *(VIDPN_MGR **)(v5 + 88);
  if ( !v6 )
  {
    v33 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v33 + 24) = a1;
    WdLogEvent5_WdError(v33);
    return 3223192373LL;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v68, (__int64)v6);
  v62 = 0LL;
  ClientVidPnFromActive = VIDPN_MGR::CreateClientVidPnFromActive((__int64)v6, (__int64 *)&v62, v7, v8);
  v11 = ClientVidPnFromActive;
  if ( ClientVidPnFromActive < 0 )
  {
    v34 = WdLogNewEntry5_WdDmmEvent(v10);
    *(_QWORD *)(v34 + 24) = v11;
    WdLogEvent5_WdDmmEvent(v34);
    goto LABEL_23;
  }
  v61 = 0LL;
  v12 = *((_QWORD *)v6 + 10);
  v63 = (struct DMMVIDPN *)((char *)v62 + 96);
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 32));
    v13 = *((_QWORD *)v6 + 10);
  }
  else
  {
    v13 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v61, v13);
  v15 = v61;
  if ( !v61 )
  {
    v35 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v35 + 24) = v6;
    WdLogEvent5_WdError(v35);
    LODWORD(v11) = -1071774884;
    goto LABEL_22;
  }
  v16 = (char *)v61 + 96;
  v67 = (char *)v61 + 96;
  memset(v69, 0, sizeof(v69));
  v19 = (_QWORD *)((char *)v61 + 120);
  if ( (_QWORD *)*v19 == v19 )
    goto LABEL_21;
  v20 = (char *)(*v19 - 8LL);
  if ( !v20 )
    goto LABEL_21;
  while ( 1 )
  {
    if ( *(_DWORD *)(*((_QWORD *)v20 + 11) + 24LL) != ((*(_DWORD *)(a2 + 4) >> 6) & 0xF) )
      goto LABEL_16;
    v21 = *(unsigned int *)(*((_QWORD *)v20 + 12) + 24LL);
    PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v63, v21, v17, v18);
    v23 = (*(_DWORD *)(a2 + 4) >> 6) & 0xF;
    if ( PathSourceFromTarget == (_DWORD)v23 )
      goto LABEL_16;
    if ( PathSourceFromTarget != -1 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v23);
      WdLogEvent5_WdAssertion(v36);
    }
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v6 + 12) + 72LL));
    v27 = *((_QWORD *)v6 + 12);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v27, v21);
    if ( !TargetById )
      break;
    if ( v27 )
      ReferenceCounted::Release((ReferenceCounted *)(v27 + 64));
    v15 = v61;
    if ( *((_DWORD *)TargetById + 26) != 2 )
    {
      if ( (int)DMMVIDPN::SerializeFunctionalPathDrivingTarget(v61, v21, (struct _D3DKMDT_VIDPN_PRESENT_PATH *)v69) < 0 )
      {
        v38 = WdLogNewEntry5_WdAssertion(v37);
        WdLogEvent5_WdAssertion(v38);
      }
      v39 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
              v6,
              v63,
              (struct _D3DKMDT_VIDPN_PRESENT_PATH *)v69,
              D3DKMDT_MCC_IGNORE);
      v11 = v39;
      if ( v39 < 0 )
        goto LABEL_64;
      v16 = v67;
      v24 = 1;
      v60 = 1;
      goto LABEL_17;
    }
    v16 = v67;
LABEL_16:
    v24 = v60;
LABEL_17:
    v25 = (char *)*((_QWORD *)v20 + 1);
    if ( v25 == v16 + 24 )
      v20 = 0LL;
    else
      v20 = v25 - 8;
    if ( !v20 )
    {
      if ( !v24 )
        goto LABEL_21;
      v42 = v16 + 24;
      if ( (_QWORD *)*v42 != v42 )
      {
        v43 = (char *)(*v42 - 8LL);
        if ( v43 )
        {
          v44 = v16 + 24;
          while ( 1 )
          {
            if ( *(_DWORD *)(*((_QWORD *)v43 + 11) + 24LL) == ((*(_DWORD *)(a2 + 4) >> 6) & 0xF) )
            {
              if ( (int)DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                          v15,
                          *(_DWORD *)(*((_QWORD *)v43 + 12) + 24LL),
                          (struct _D3DKMDT_VIDPN_PRESENT_PATH *)v69) < 0 )
              {
                v46 = WdLogNewEntry5_WdAssertion(v45);
                WdLogEvent5_WdAssertion(v46);
              }
              v47 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(
                      v6,
                      v63,
                      (const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)v69);
              v11 = v47;
              if ( v47 < 0 )
                break;
            }
            v48 = (char *)*((_QWORD *)v43 + 1);
            if ( v48 == v44 )
              v43 = 0LL;
            else
              v43 = v48 - 8;
            if ( !v43 )
              goto LABEL_60;
          }
LABEL_64:
          v55 = (_QWORD *)WdLogNewEntry5_WdError(v40);
          v55[3] = v11;
LABEL_68:
          WdLogEvent5_WdError(v55);
          goto LABEL_22;
        }
      }
LABEL_60:
      v49 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
              *(ADAPTER_DISPLAY **)(a1 + 2128),
              (*(_DWORD *)(a2 + 4) >> 6) & 0xF,
              0LL,
              1024,
              *(struct _KTHREAD ***)(1016LL * ((*(_DWORD *)(a2 + 4) >> 6) & 0xF)
                                   + *(_QWORD *)(*(_QWORD *)(a1 + 2128) + 112LL)
                                   + 672),
              0,
              0);
      v51 = v49;
      if ( v49 < 0 )
      {
        v52 = (_QWORD *)WdLogNewEntry5_WdError(v50);
        v52[3] = (*(_DWORD *)(a2 + 4) >> 6) & 0xF;
        v52[4] = a1;
        v52[5] = v51;
        WdLogEvent5_WdError(v52);
      }
      v65 &= 0xF0u;
      v66 = -3;
      v53 = *(_QWORD *)(a1 + 2136) == 0LL;
      v64 = v64 & 0xFFFFFF00 | 0x24;
      if ( v53 )
        v54 = 0LL;
      else
        v54 = *(void **)(a2 + 16);
      v56 = v62;
      v57 = VIDPN_MGR::CommitVidPn(
              (__int64)v6,
              v62,
              v54,
              (*(_DWORD *)(a2 + 4) >> 6) & 0xF,
              D3DKMDT_MCC_IGNORE,
              (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v64,
              0LL,
              0LL);
      v11 = v57;
      if ( v57 < 0 )
      {
        v55 = (_QWORD *)WdLogNewEntry5_WdError(v58);
        v55[3] = v56;
        v59 = (*(_DWORD *)(a2 + 4) >> 6) & 0xF;
        v55[5] = v11;
        v55[4] = v59;
        goto LABEL_68;
      }
LABEL_21:
      LODWORD(v11) = 0;
      goto LABEL_22;
    }
  }
  v41 = WdLogNewEntry5_WdError(v28);
  *(_QWORD *)(v41 + 24) = v21;
  *(_QWORD *)(v41 + 32) = a1;
  WdLogEvent5_WdError(v41);
  if ( v27 )
    ReferenceCounted::Release((ReferenceCounted *)(v27 + 64));
  LODWORD(v11) = -1071774971;
LABEL_22:
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v61, 0LL);
LABEL_23:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v62, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v68 + 40));
  return (unsigned int)v11;
}
