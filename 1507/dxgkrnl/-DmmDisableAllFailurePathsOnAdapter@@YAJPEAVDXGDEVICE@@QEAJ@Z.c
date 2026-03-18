/*
 * XREFs of ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C0172400
 * Callers:
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C0065374 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002474 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00065E0 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C000ADEC (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C000AF88 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C000E214 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C008A260 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0096618 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0097378 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00973C8 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C00B6870 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00B6C38 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00CC158 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C00CC7A0 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C00CF958 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 */

__int64 __fastcall DmmDisableAllFailurePathsOnAdapter(struct DXGDEVICE *a1, int *const a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned int v13; // r12d
  struct VIDPN_MGR *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  struct DMMVIDPN *v20; // rbx
  unsigned __int64 *v21; // r13
  int *v22; // rcx
  int NumPathsFromSource; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  char v43; // r8
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v47; // [rsp+20h] [rbp-89h]
  __int64 v48; // [rsp+40h] [rbp-69h] BYREF
  int v49; // [rsp+48h] [rbp-61h]
  unsigned __int64 v50; // [rsp+50h] [rbp-59h] BYREF
  __int64 v51; // [rsp+58h] [rbp-51h] BYREF
  VIDPN_MGR *v52; // [rsp+60h] [rbp-49h]
  _BYTE v53[24]; // [rsp+68h] [rbp-41h] BYREF
  struct _D3DKMT_DISPLAYMODE v54[2]; // [rsp+80h] [rbp-29h] BYREF
  int v55; // [rsp+110h] [rbp+67h]
  int v57; // [rsp+120h] [rbp+77h]
  int v58; // [rsp+120h] [rbp+77h]
  int v59; // [rsp+120h] [rbp+77h]
  struct DMMVIDPN *v60; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = *((_QWORD *)a1 + 2338);
  v3 = 0;
  v48 = 0LL;
  v55 = 0;
  v49 = 0;
  if ( !v2 )
  {
    v5 = WdLogNewEntry5_WdError(a1);
    LODWORD(v6) = -1073741811;
    *(_QWORD *)(v5 + 24) = a1;
    *(_QWORD *)(v5 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v5);
    return (unsigned int)v6;
  }
  v7 = *(__int64 **)(*((_QWORD *)a1 + 2) + 16LL);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v2)
    || !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v7) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = -1;
  if ( *(_QWORD *)(v2 + 1984) && !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v7) )
    ADAPTER_RENDER::FlushScheduler(v7[248], 8, 0xFFFFFFFF, 0);
  v52 = *(VIDPN_MGR **)(*(_QWORD *)(v2 + 1976) + 88LL);
  v14 = v52;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v51, (__int64)v52);
  v60 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                             v14,
                                             (__int64 *)&v60,
                                             v15,
                                             v16);
  v6 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v19[3] = (int)HIDWORD(*(_QWORD *)(v2 + 252));
    v19[4] = *(unsigned int *)(v2 + 252);
    v19[5] = v6;
    WdLogEvent5_WdError(v19);
    goto LABEL_42;
  }
  v20 = v60;
  v21 = (unsigned __int64 *)((char *)v60 + 96);
  if ( !*(_DWORD *)(*(_QWORD *)(v2 + 1976) + 80LL) )
    goto LABEL_41;
  v22 = a2;
  do
  {
    if ( !v22 || v22[v3] < 0 )
    {
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)v21, v3, &v50);
      if ( NumPathsFromSource < 0 )
      {
        if ( NumPathsFromSource == -1071774919 && !v50 )
        {
LABEL_37:
          v22 = a2;
          goto LABEL_38;
        }
        v28 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
        WdLogEvent5_WdAssertion(v28);
      }
      if ( v50 )
      {
        if ( *(_QWORD *)(v2 + 1984) && DXGADAPTER::IsDxgmms2((DXGADAPTER *)v7) )
          ADAPTER_RENDER::FlushScheduler(v7[248], 8, v3, 0);
        v29 = v3;
        if ( v13 != -1 )
          v29 = -3;
        v13 = v29;
        v57 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v2 + 1976), v3, 0LL, 4096LL, a1, 1u);
        if ( v57 >= 0 )
        {
          if ( v21 )
            v34 = (__int64)(v21 + 7);
          else
            v34 = 0LL;
          LOBYTE(v31) = 2;
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v53, v34, v31, v32, v47, v21[5]);
          if ( (int)DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v21, v3) < 0 )
          {
            v39 = WdLogNewEntry5_WdAssertion(v36, v35, v37, v38);
            WdLogEvent5_WdAssertion(v39);
          }
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v53);
          LODWORD(v48) = v48 & 0xFFFFFF00 | 0x51;
          v40 = *(_QWORD *)(v2 + 1976);
          BYTE4(v48) = BYTE4(v48) & 0xF8 | 4;
          v49 = *(_DWORD *)(v40 + 240);
          v58 = VIDPN_MGR::CommitVidPn(
                  (__int64)v52,
                  v20,
                  0LL,
                  v3,
                  D3DKMDT_MCC_IGNORE,
                  (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v48,
                  0LL,
                  0LL);
          if ( v58 >= 0 )
          {
            v43 = 0;
          }
          else
          {
            v42 = (_QWORD *)WdLogNewEntry5_WdError(v41);
            v42[3] = v3;
            v42[4] = (int)HIDWORD(*(_QWORD *)(v2 + 252));
            v42[5] = *(unsigned int *)(v2 + 252);
            v42[6] = v58;
            WdLogEvent5_WdError(v42);
            v43 = 1;
            v55 = v58;
          }
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v2 + 1976), v3, v43);
          memset(v54, 0, 0x38uLL);
          ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v2 + 1976), v3, 0);
          ADAPTER_DISPLAY::SetCddDisplayMode(*(PERESOURCE ***)(v2 + 1976), v3, v54);
          ADAPTER_DISPLAY::SetDisplayModeInfo(
            *(PERESOURCE ***)(v2 + 1976),
            v3,
            (const struct _DXGK_DISPLAYMODE_INFO *const)v54);
          v59 = ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v2 + 1976), a1, v3);
          if ( v59 < 0 )
          {
            v45 = (_QWORD *)WdLogNewEntry5_WdError(v44);
            v45[3] = v3;
            v45[4] = (int)HIDWORD(*(_QWORD *)(v2 + 252));
            v45[5] = *(unsigned int *)(v2 + 252);
            v45[6] = v59;
            WdLogEvent5_WdError(v45);
            v55 = v59;
          }
        }
        else
        {
          v33 = (_QWORD *)WdLogNewEntry5_WdError(v30);
          v33[3] = v3;
          v33[4] = (int)HIDWORD(*(_QWORD *)(v2 + 252));
          v33[5] = *(unsigned int *)(v2 + 252);
          v33[6] = v57;
          WdLogEvent5_WdError(v33);
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v2 + 1976), v3, 1);
          v55 = v57;
        }
      }
      goto LABEL_37;
    }
LABEL_38:
    ++v3;
  }
  while ( v3 < *(_DWORD *)(*(_QWORD *)(v2 + 1976) + 80LL) );
  if ( v13 != -1 )
    ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(
      *(PERESOURCE ***)(v2 + 1976),
      v13,
      (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *const)&v48);
LABEL_41:
  LODWORD(v6) = v55;
LABEL_42:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v60, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v51 + 40));
  return (unsigned int)v6;
}
