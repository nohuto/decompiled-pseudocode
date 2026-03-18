/*
 * XREFs of ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C008E76C
 * Callers:
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_ @ 0x1C00AD9F0 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_ANCHOR_INFO--_FindAnchorAdaptersCallback_.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C00634F0 (-_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_ADAPTER_PREFERENCE@12@AEBVD.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0089ECC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C008A0DC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C008E9E4 (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C008EA64 (-IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0096618 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00968D8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0097248 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0097378 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00973C8 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0180B50 (-_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@.c)
 *     ?_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@E@Z @ 0x1C0180B90 (-_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback(
        struct DXGADAPTER *a1,
        unsigned int *a2)
{
  unsigned int *v2; // r15
  __int64 v4; // rcx
  __int64 v5; // rdx
  struct VIDPN_MGR *v6; // r13
  __int64 v7; // rax
  int ClientVidPn; // eax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rbx
  _QWORD *v12; // r14
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int PathSourceFromTarget; // r12d
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  _QWORD *v30; // rax
  int VmtPreference; // eax
  int v32; // edx
  bool v33; // cc
  unsigned int v34; // eax
  int VotPreference; // eax
  __int64 v36; // r9
  int v37; // esi
  int v38; // eax
  int v39; // r10d
  int v40; // r11d
  __int64 v41; // rax
  _QWORD *v42; // rax
  DMMVIDPNTOPOLOGY *v43; // [rsp+40h] [rbp-29h]
  __int64 v44; // [rsp+48h] [rbp-21h] BYREF
  __int64 v45; // [rsp+50h] [rbp-19h] BYREF
  DMMVIDPNTOPOLOGY *v46; // [rsp+58h] [rbp-11h]
  __int64 v47; // [rsp+60h] [rbp-9h]
  __int64 v48; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v49[80]; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v51; // [rsp+E0h] [rbp+77h] BYREF
  signed int AdapterPreference; // [rsp+E8h] [rbp+7Fh]

  v2 = a2;
  AdapterPreference = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference((__int64)a1);
  if ( AdapterPreference < *(_DWORD *)(v5 + 36) )
    return 0LL;
  v6 = *(struct VIDPN_MGR **)(*(_QWORD *)(v4 + 1976) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v48, (__int64)v6);
  v7 = *((_QWORD *)a1 + 247);
  v45 = 0LL;
  v46 = 0LL;
  if ( *(_BYTE *)(v7 + 133) && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v6) >= 0 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
    WdLogEvent5_WdAssertion(v29);
    v46 = (DMMVIDPNTOPOLOGY *)96;
  }
  v44 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v6);
  v10 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v30[3] = v10;
    v30[4] = a1;
    v30[5] = (int)HIDWORD(*(_QWORD *)((char *)a1 + 252));
    v30[6] = *((unsigned int *)a1 + 63);
    v30[7] = v2;
    WdLogEvent5_WdError(v30);
  }
  else
  {
    v43 = (DMMVIDPNTOPOLOGY *)(v44 + 96);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v6 + 12) + 72LL));
    v11 = *((_QWORD *)v6 + 12);
    v47 = v11;
    v12 = (_QWORD *)(v11 + 24);
    if ( (_QWORD *)*v12 != v12 )
    {
      v13 = *v12 - 8LL;
      while ( v13 )
      {
        if ( !DMMVIDEOPRESENTTARGET::IsMonitorConnected(
                (DMMVIDEOPRESENTTARGET *)v13,
                (enum _DMM_VIDPN_MONITOR_TYPE *)&v51) )
          goto LABEL_7;
        if ( (int)v2[9] >= (int)BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference((__int64)a1) )
        {
          BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference(v51);
          VmtPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference(v2[8]);
          v33 = v32 < VmtPreference;
          if ( v32 != VmtPreference )
            goto LABEL_33;
          if ( *(_QWORD *)v2 == *(_QWORD *)((char *)a1 + 252) )
          {
            v34 = *(_DWORD *)(v13 + 108);
            v16 = v2[7];
            if ( v34 != (_DWORD)v16 )
            {
              if ( v34 >= (unsigned int)v16 )
                goto LABEL_7;
              goto LABEL_16;
            }
          }
          LOBYTE(v18) = 1;
          VotPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(
                            a1,
                            *(unsigned int *)(v13 + 76),
                            *(unsigned int *)(v13 + 80),
                            v18);
          LOBYTE(v36) = 1;
          v37 = VotPreference;
          v38 = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(a1, v2[4], v2[6], v36);
          v33 = v37 < v38;
          if ( v37 == v38 )
          {
            if ( v39 == v40 && v2[1] == HIDWORD(*(_QWORD *)((char *)a1 + 252)) || (*((_DWORD *)a1 + 71) & 1) == 0 )
              goto LABEL_7;
          }
          else
          {
LABEL_33:
            if ( !v33 )
              goto LABEL_7;
          }
        }
LABEL_16:
        LODWORD(v10) = -1071774975;
        if ( !v46
          || (PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                       v46,
                                       *(unsigned int *)(v13 + 24),
                                       v17,
                                       v18),
              PathSourceFromTarget == -1)
          || (LODWORD(v10) = VIDPN_MGR::AddPathToVidPnTopology(
                               v6,
                               v43,
                               PathSourceFromTarget,
                               *(_DWORD *)(v13 + 24),
                               (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                               0xFFFFu,
                               0,
                               D3DKMDT_MCC_IGNORE),
              (int)v10 < 0) )
        {
          PathSourceFromTarget = 0;
          if ( *(_DWORD *)(*((_QWORD *)a1 + 247) + 80LL) )
          {
            do
            {
              LODWORD(v10) = VIDPN_MGR::AddPathToVidPnTopology(
                               v6,
                               v43,
                               PathSourceFromTarget,
                               *(_DWORD *)(v13 + 24),
                               (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                               0xFFFFu,
                               0,
                               D3DKMDT_MCC_IGNORE);
              if ( (int)v10 >= 0 )
                break;
              ++PathSourceFromTarget;
            }
            while ( PathSourceFromTarget < *(_DWORD *)(*((_QWORD *)a1 + 247) + 80LL) );
            v11 = v47;
            v2 = a2;
          }
        }
        if ( (int)v10 < 0 )
        {
          if ( (_DWORD)v10 != -1071774975 )
          {
            v42 = (_QWORD *)WdLogNewEntry5_WdError(v16);
            v42[3] = (int)v10;
            v42[4] = PathSourceFromTarget;
            v42[5] = *(unsigned int *)(v13 + 24);
            v42[6] = (int)HIDWORD(*(_QWORD *)((char *)a1 + 252));
            v42[7] = *((unsigned int *)a1 + 63);
            WdLogEvent5_WdError(v42);
            goto LABEL_11;
          }
        }
        else
        {
          *(_QWORD *)v2 = *(_QWORD *)((char *)a1 + 252);
          v2[2] = PathSourceFromTarget;
          v2[3] = *(_DWORD *)(v13 + 24);
          v2[5] = *(_DWORD *)(v13 + 72);
          v2[4] = *(_DWORD *)(v13 + 76);
          v2[6] = *(_DWORD *)(v13 + 80);
          v2[7] = *(_DWORD *)(v13 + 108);
          v2[8] = v51;
          v2[9] = AdapterPreference;
          *((_BYTE *)v2 + 40) = *(_BYTE *)(v13 + 389);
          *((_BYTE *)v2 + 41) = DMMVIDEOPRESENTTARGET::IsTargetSupportVirtualMode((DMMVIDEOPRESENTTARGET *)v13);
          LOBYTE(v20) = 2;
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v49, (char *)v43 + 56, v20);
          if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v43, PathSourceFromTarget, *(_DWORD *)(v13 + 24), 0LL) < 0
            || *((_QWORD *)v43 + 5) )
          {
            v41 = WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
            WdLogEvent5_WdAssertion(v41);
          }
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v49);
        }
LABEL_7:
        v14 = *(_QWORD *)(v13 + 8);
        if ( v14 == v11 + 24 )
          v13 = 0LL;
        else
          v13 = v14 - 8;
      }
    }
    LODWORD(v10) = 0;
LABEL_11:
    if ( v11 )
      ReferenceCounted::Release((ReferenceCounted *)(v11 + 64));
  }
  auto_rc<DMMVIDPN>::reset(&v44, 0LL);
  auto_rc<DMMVIDPN>::reset(&v45, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v48 + 40));
  return (unsigned int)v10;
}
