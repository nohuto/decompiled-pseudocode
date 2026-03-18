/*
 * XREFs of ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A5D3C
 * Callers:
 *     sub_1C00A64F0 @ 0x1C00A64F0 (sub_1C00A64F0.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008DC58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008F504 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FFCC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0091004 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0091214 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00A16BC (IsVirtualizationDisabledForTarget.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A58F0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5940 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00A61D4 (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_POST_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C00A63F8 (-_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_POST_ADAPTER_PREFERENCE.c)
 *     ?_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C00A64C0 (-_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_ADAPTER_PREFERENCE@12@AEBVD.c)
 *     ?_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0185024 (-_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@.c)
 *     ?_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@E@Z @ 0x1C0185064 (-_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback(
        struct DXGADAPTER *a1,
        _BYTE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  struct VIDPN_MGR *v7; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r15
  _QWORD *v15; // rax
  __int64 v16; // rbx
  _QWORD *v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  int VmtPreference; // eax
  int v22; // edx
  bool v23; // cc
  unsigned int v24; // eax
  unsigned int v25; // ecx
  int VotPreference; // eax
  __int64 v27; // r9
  int v28; // r15d
  int v29; // eax
  int v30; // r10d
  int v31; // r11d
  unsigned int PathSourceFromTarget; // eax
  unsigned int v33; // r12d
  struct DMMVIDPNTOPOLOGY *v34; // r15
  __int64 v35; // rcx
  int PostAdapterPreference; // eax
  bool v37; // zf
  unsigned __int8 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rsi
  _QWORD *v42; // rax
  __int64 v43; // [rsp+20h] [rbp-49h]
  DMMVIDPNTOPOLOGY *v44; // [rsp+40h] [rbp-29h]
  __int64 v45; // [rsp+48h] [rbp-21h] BYREF
  __int64 v46; // [rsp+50h] [rbp-19h] BYREF
  int v47; // [rsp+58h] [rbp-11h]
  DMMVIDPNTOPOLOGY *v48; // [rsp+60h] [rbp-9h]
  __int64 v49; // [rsp+68h] [rbp-1h] BYREF
  __int64 v50; // [rsp+70h] [rbp+7h]
  _BYTE v51[72]; // [rsp+78h] [rbp+Fh] BYREF
  bool v52; // [rsp+D8h] [rbp+6Fh] BYREF
  bool v53; // [rsp+E0h] [rbp+77h] BYREF
  unsigned int v54; // [rsp+E8h] [rbp+7Fh] BYREF

  v47 = ((__int64 (*)(void))BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference)();
  if ( v47 < *(_DWORD *)(v5 + 36) )
    return 0LL;
  v7 = *(struct VIDPN_MGR **)(*(_QWORD *)(v4 + 1984) + 112LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v49, (__int64)v7);
  v8 = *((_QWORD *)a1 + 248);
  v45 = 0LL;
  v48 = 0LL;
  if ( *(_BYTE *)(v8 + 158) && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v7, &v45) >= 0 )
  {
    v10 = v45;
    if ( !v45 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v11);
    }
    v48 = (DMMVIDPNTOPOLOGY *)(v10 + 96);
  }
  v46 = 0LL;
  v12 = VIDPN_MGR::CreateClientVidPn(v7, &v46);
  v14 = v12;
  if ( v12 >= 0 )
  {
    v44 = (DMMVIDPNTOPOLOGY *)(v46 + 96);
    if ( v46 != -96 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v7 + 12) + 72LL));
      v16 = *((_QWORD *)v7 + 12);
      v50 = v16;
      v17 = (_QWORD *)(v16 + 24);
      if ( (_QWORD *)*v17 == v17 || (v18 = *v17 - 8LL) == 0 )
      {
LABEL_49:
        LODWORD(v14) = 0;
LABEL_50:
        if ( v16 )
          ReferenceCounted::Release((ReferenceCounted *)(v16 + 64));
        goto LABEL_52;
      }
      while ( 1 )
      {
        if ( !DMMVIDEOPRESENTTARGET::IsMonitorConnected(
                (DMMVIDEOPRESENTTARGET *)v18,
                (enum _DMM_VIDPN_MONITOR_TYPE *)&v54)
          || *(_BYTE *)(v18 + 396) )
        {
          goto LABEL_45;
        }
        if ( *((_DWORD *)a2 + 9) >= (int)BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference(a1) )
        {
          BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference(v54);
          VmtPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference(*((unsigned int *)a2 + 8));
          v23 = v22 < VmtPreference;
          if ( v22 == VmtPreference )
          {
            if ( *(_BYTE *)(v18 + 397) )
            {
              if ( !a2[49] )
                goto LABEL_45;
            }
            else if ( a2[49] )
            {
              goto LABEL_31;
            }
            if ( *(_QWORD *)a2 == *(_QWORD *)((char *)a1 + 252) )
            {
              v24 = *(_DWORD *)(v18 + 108);
              v25 = *((_DWORD *)a2 + 7);
              if ( v24 != v25 )
              {
                if ( v24 >= v25 )
                  goto LABEL_45;
                goto LABEL_31;
              }
            }
            LOBYTE(v20) = 1;
            VotPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(
                              a1,
                              *(unsigned int *)(v18 + 76),
                              *(unsigned int *)(v18 + 80),
                              v20);
            LOBYTE(v27) = 1;
            v28 = VotPreference;
            v29 = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(
                    a1,
                    *((unsigned int *)a2 + 4),
                    *((unsigned int *)a2 + 6),
                    v27);
            v23 = v28 < v29;
            if ( v28 == v29 )
            {
              if ( v30 == v31 && *((_DWORD *)a2 + 1) == HIDWORD(*(_QWORD *)((char *)a1 + 252))
                || (int)BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference(a1) >= *((_DWORD *)a2 + 11) )
              {
                goto LABEL_45;
              }
              goto LABEL_31;
            }
          }
          if ( !v23 )
            goto LABEL_45;
        }
LABEL_31:
        if ( !v48
          || (PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                       v48,
                                       *(unsigned int *)(v18 + 24),
                                       v19,
                                       v20),
              v33 = PathSourceFromTarget,
              PathSourceFromTarget == -1) )
        {
          v34 = v44;
LABEL_36:
          v33 = 0;
          if ( *(_DWORD *)(*((_QWORD *)a1 + 248) + 104LL) )
          {
            do
            {
              if ( (int)VIDPN_MGR::AddPathToVidPnTopology(
                          v7,
                          v34,
                          v33,
                          *(_DWORD *)(v18 + 24),
                          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                          0xFFFFu,
                          0,
                          D3DKMDT_MCC_IGNORE) >= 0 )
                break;
              ++v33;
            }
            while ( v33 < *(_DWORD *)(*((_QWORD *)a1 + 248) + 104LL) );
            v16 = v50;
          }
          goto LABEL_40;
        }
        v34 = v44;
        if ( (int)VIDPN_MGR::AddPathToVidPnTopology(
                    v7,
                    v44,
                    PathSourceFromTarget,
                    *(_DWORD *)(v18 + 24),
                    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                    0xFFFFu,
                    0,
                    D3DKMDT_MCC_IGNORE) < 0 )
          goto LABEL_36;
LABEL_40:
        LODWORD(v14) = IsVirtualizationDisabledForTarget(a1, *(_DWORD *)(v18 + 24), &v52, &v53);
        if ( (int)v14 < 0 )
        {
          v42 = (_QWORD *)WdLogNewEntry5_WdError(v35);
          v42[3] = *(unsigned int *)(v18 + 24);
          v42[4] = (int)HIDWORD(*(_QWORD *)((char *)a1 + 252));
          v42[5] = *((unsigned int *)a1 + 63);
          WdLogEvent5_WdError(v42);
          goto LABEL_50;
        }
        *(_QWORD *)a2 = *(_QWORD *)((char *)a1 + 252);
        *((_DWORD *)a2 + 2) = v33;
        *((_DWORD *)a2 + 3) = *(_DWORD *)(v18 + 24);
        *((_DWORD *)a2 + 5) = *(_DWORD *)(v18 + 72);
        *((_DWORD *)a2 + 4) = *(_DWORD *)(v18 + 76);
        *((_DWORD *)a2 + 6) = *(_DWORD *)(v18 + 80);
        *((_DWORD *)a2 + 7) = *(_DWORD *)(v18 + 108);
        *((_DWORD *)a2 + 8) = v54;
        *((_DWORD *)a2 + 9) = v47;
        a2[40] = *(_BYTE *)(v18 + 389);
        PostAdapterPreference = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference(a1);
        v37 = !v52;
        *((_DWORD *)a2 + 11) = PostAdapterPreference;
        LOBYTE(PostAdapterPreference) = v37;
        v37 = !v53;
        a2[41] = PostAdapterPreference;
        a2[48] = v37;
        a2[49] = *(_BYTE *)(v18 + 397);
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
          (__int64)v51,
          (__int64)v44 + 56,
          2u,
          v38,
          v43,
          0xFFuLL);
        if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v44, v33, *(_DWORD *)(v18 + 24), 0LL) < 0 || *((_QWORD *)v44 + 5) )
        {
          v40 = WdLogNewEntry5_WdAssertion(v39);
          WdLogEvent5_WdAssertion(v40);
        }
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v51);
LABEL_45:
        v41 = *(_QWORD *)(v18 + 8);
        if ( v41 == v16 + 24 )
          v18 = 0LL;
        else
          v18 = v41 - 8;
        if ( !v18 )
          goto LABEL_49;
      }
    }
  }
  v15 = (_QWORD *)WdLogNewEntry5_WdError(v13);
  v15[3] = v14;
  v15[4] = a1;
  v15[5] = (int)HIDWORD(*(_QWORD *)((char *)a1 + 252));
  v15[6] = *((unsigned int *)a1 + 63);
  v15[7] = a2;
  WdLogEvent5_WdError(v15);
LABEL_52:
  auto_rc<DMMVIDPN>::reset(&v46, 0LL);
  auto_rc<DMMVIDPN>::reset(&v45, 0LL);
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v49 + 40));
  return (unsigned int)v14;
}
