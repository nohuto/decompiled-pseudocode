/*
 * XREFs of ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00B6EE4
 * Callers:
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_1_ @ 0x1C00B6E40 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_ANCHOR_INFO--_FindAnchorAdaptersCallback_.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00804BC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00806CC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0081930 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C0081990 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C0082A44 (IsVirtualizationDisabledForTarget.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00845AC (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085094 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085190 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     MonitorGetMonitorType @ 0x1C00B7244 (MonitorGetMonitorType.c)
 *     ?_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_POST_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C00B7304 (-_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_POST_ADAPTER_PREFERENCE.c)
 *     ?_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C00B73CC (-_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_ADAPTER_PREFERENCE@12@AEBVD.c)
 *     ?_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C01AE740 (-_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@.c)
 *     ?_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@E@Z @ 0x1C01AE780 (-_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback(
        struct DXGADAPTER *a1,
        _DWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rbx
  _QWORD *v14; // rsi
  __int64 v15; // rsi
  struct HDXGMONITOR__ *v16; // r15
  __int64 v17; // rsi
  __int64 v19; // r12
  DXGADAPTER *v20; // r12
  int v21; // edx
  bool v22; // zf
  unsigned int v23; // edx
  __int64 v24; // r8
  __int64 v25; // r9
  struct DMMVIDPNTOPOLOGY *v26; // r15
  unsigned int PathSourceFromTarget; // r12d
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  int VmtPreference; // eax
  int v40; // edx
  bool v41; // cc
  unsigned int v42; // eax
  int VotPreference; // eax
  __int64 v44; // r9
  int v45; // r15d
  int v46; // eax
  int v47; // r10d
  int v48; // r11d
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // [rsp+20h] [rbp-49h]
  DMMVIDPNTOPOLOGY *v52; // [rsp+40h] [rbp-29h]
  int MonitorType; // [rsp+48h] [rbp-21h]
  int v54; // [rsp+4Ch] [rbp-1Dh]
  __int64 v55; // [rsp+50h] [rbp-19h] BYREF
  __int64 v56; // [rsp+58h] [rbp-11h] BYREF
  DMMVIDPNTOPOLOGY *v57; // [rsp+60h] [rbp-9h]
  __int64 v58; // [rsp+68h] [rbp-1h]
  __int64 v59; // [rsp+70h] [rbp+7h] BYREF
  _BYTE v60[72]; // [rsp+78h] [rbp+Fh] BYREF
  bool v61; // [rsp+D8h] [rbp+6Fh] BYREF
  bool v62; // [rsp+E0h] [rbp+77h] BYREF
  int v63; // [rsp+E8h] [rbp+7Fh]

  v54 = ((__int64 (*)(void))BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference)();
  if ( v54 < *(_DWORD *)(v5 + 36) )
    return 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 2128) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v59, v6);
  v7 = *((_QWORD *)a1 + 266);
  v56 = 0LL;
  v57 = 0LL;
  if ( *(_BYTE *)(v7 + 134)
    && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn((const struct DMMVIDPN **)v6, &v56) >= 0 )
  {
    v9 = v56;
    if ( !v56 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v34);
    }
    v57 = (DMMVIDPNTOPOLOGY *)(v9 + 96);
  }
  v55 = 0LL;
  v10 = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)v6, &v55);
  v12 = v10;
  if ( v10 < 0 || (v52 = (DMMVIDPNTOPOLOGY *)(v55 + 96), v55 == -96) )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v35[3] = v12;
    v35[4] = a1;
    v35[5] = *((int *)a1 + 68);
    v35[6] = *((unsigned int *)a1 + 67);
    v35[7] = a2;
    WdLogEvent5_WdError(v35);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v6 + 96) + 72LL));
    v13 = *(_QWORD *)(v6 + 96);
    v58 = v13;
    v14 = (_QWORD *)(v13 + 24);
    if ( (_QWORD *)*v14 != v14 )
    {
      v15 = *v14 - 8LL;
      while ( v15 )
      {
        v63 = 0;
        v16 = *(struct HDXGMONITOR__ **)(v15 + 96);
        if ( !v16 )
          goto LABEL_12;
        if ( !*(_QWORD *)(v15 + 40) )
        {
          v36 = WdLogNewEntry5_WdAssertion(v11);
          WdLogEvent5_WdAssertion(v36);
        }
        v19 = *(_QWORD *)(*(_QWORD *)(v15 + 40) + 88LL);
        if ( !*(_QWORD *)(v19 + 8) )
        {
          v37 = WdLogNewEntry5_WdAssertion(v11);
          WdLogEvent5_WdAssertion(v37);
        }
        v20 = *(DXGADAPTER **)(*(_QWORD *)(v19 + 8) + 16LL);
        MonitorType = MonitorGetMonitorType(v20, v16);
        if ( MonitorType < 0 )
        {
          v38 = (_QWORD *)WdLogNewEntry5_WdError(v11);
          v38[5] = MonitorType;
          v38[3] = v16;
          v38[4] = v20;
          WdLogEvent5_WdError(v38);
          v21 = 0;
        }
        else
        {
          v21 = v63;
        }
        v22 = *(_BYTE *)(v15 + 396) == 0;
        v63 = v21;
        if ( !v22 )
          goto LABEL_12;
        if ( a2[9] < (int)BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference(a1) )
          goto LABEL_27;
        BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference(v23);
        VmtPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference((unsigned int)a2[8]);
        v41 = v40 < VmtPreference;
        if ( v40 == VmtPreference )
        {
          if ( *(_BYTE *)(v15 + 397) )
          {
            if ( !*((_BYTE *)a2 + 49) )
              goto LABEL_12;
          }
          else if ( *((_BYTE *)a2 + 49) )
          {
            goto LABEL_27;
          }
          if ( *a2 == *((_DWORD *)a1 + 67) && a2[1] == *((_DWORD *)a1 + 68) )
          {
            v42 = *(_DWORD *)(v15 + 108);
            v11 = (unsigned int)a2[7];
            if ( v42 != (_DWORD)v11 )
            {
              if ( v42 >= (unsigned int)v11 )
                goto LABEL_12;
              goto LABEL_27;
            }
          }
          LOBYTE(v25) = 1;
          VotPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(
                            a1,
                            *(unsigned int *)(v15 + 76),
                            *(unsigned int *)(v15 + 80),
                            v25);
          LOBYTE(v44) = 1;
          v45 = VotPreference;
          v46 = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(a1, (unsigned int)a2[5], (unsigned int)a2[6], v44);
          v41 = v45 < v46;
          if ( v45 == v46 )
          {
            if ( v47 == v48 && a2[1] == *((_DWORD *)a1 + 68)
              || (int)BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference(a1) >= a2[11] )
            {
              goto LABEL_12;
            }
            goto LABEL_27;
          }
        }
        if ( !v41 )
          goto LABEL_12;
LABEL_27:
        if ( !v57 )
        {
          v26 = v52;
LABEL_35:
          PathSourceFromTarget = 0;
          if ( *(_DWORD *)(*((_QWORD *)a1 + 266) + 80LL) )
          {
            do
            {
              if ( (int)VIDPN_MGR::AddPathToVidPnTopology(
                          (VIDPN_MGR *)v6,
                          v26,
                          PathSourceFromTarget,
                          *(_DWORD *)(v15 + 24),
                          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                          0xFFFFu,
                          0,
                          D3DKMDT_MCC_IGNORE) >= 0 )
                break;
              ++PathSourceFromTarget;
            }
            while ( PathSourceFromTarget < *(_DWORD *)(*((_QWORD *)a1 + 266) + 80LL) );
            v13 = v58;
          }
          goto LABEL_30;
        }
        v26 = v52;
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v57, *(unsigned int *)(v15 + 24), v24, v25);
        if ( PathSourceFromTarget == -1
          || (int)VIDPN_MGR::AddPathToVidPnTopology(
                    (VIDPN_MGR *)v6,
                    v52,
                    PathSourceFromTarget,
                    *(_DWORD *)(v15 + 24),
                    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                    0xFFFFu,
                    0,
                    D3DKMDT_MCC_IGNORE) < 0 )
        {
          goto LABEL_35;
        }
LABEL_30:
        LODWORD(v12) = IsVirtualizationDisabledForTarget((__int64)a1, *(_DWORD *)(v15 + 24), &v61, &v62);
        if ( (int)v12 < 0 )
        {
          v50 = (_QWORD *)WdLogNewEntry5_WdError(v28);
          v50[3] = *(unsigned int *)(v15 + 24);
          v50[4] = *((int *)a1 + 68);
          v50[5] = *((unsigned int *)a1 + 67);
          WdLogEvent5_WdError(v50);
          goto LABEL_16;
        }
        *(_QWORD *)a2 = *(_QWORD *)((char *)a1 + 268);
        a2[2] = PathSourceFromTarget;
        a2[3] = *(_DWORD *)(v15 + 24);
        a2[4] = *(_DWORD *)(v15 + 72);
        a2[5] = *(_DWORD *)(v15 + 76);
        a2[6] = *(_DWORD *)(v15 + 80);
        a2[7] = *(_DWORD *)(v15 + 108);
        a2[8] = v63;
        a2[9] = v54;
        *((_BYTE *)a2 + 40) = *(_BYTE *)(v15 + 389);
        a2[11] = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference(a1);
        v22 = !v62;
        *((_BYTE *)a2 + 41) = !v61;
        *((_BYTE *)a2 + 48) = v22;
        *((_BYTE *)a2 + 49) = *(_BYTE *)(v15 + 397);
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
          (__int64)v60,
          (__int64)v52 + 56,
          2u,
          v29,
          v51,
          0xFFuLL);
        if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v52, PathSourceFromTarget, *(_DWORD *)(v15 + 24), 0LL) < 0
          || *((_QWORD *)v52 + 5) )
        {
          v49 = WdLogNewEntry5_WdAssertion(v31);
          WdLogEvent5_WdAssertion(v49);
        }
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
          (ApplyPermissionWithinThisScope *)v60,
          v30,
          v32,
          v33);
LABEL_12:
        v17 = *(_QWORD *)(v15 + 8);
        if ( v17 == v13 + 24 )
          v15 = 0LL;
        else
          v15 = v17 - 8;
      }
    }
    LODWORD(v12) = 0;
LABEL_16:
    if ( v13 )
      ReferenceCounted::Release((ReferenceCounted *)(v13 + 64));
  }
  auto_rc<DMMVIDPN>::reset(&v55, 0LL);
  auto_rc<DMMVIDPN>::reset(&v56, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v59 + 40));
  return (unsigned int)v12;
}
