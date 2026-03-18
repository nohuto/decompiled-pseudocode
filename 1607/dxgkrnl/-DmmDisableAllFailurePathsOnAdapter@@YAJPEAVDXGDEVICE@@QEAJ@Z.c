/*
 * XREFs of ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C01A0534
 * Callers:
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C008BE9C (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00060F4 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00062E8 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C00063C4 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0006874 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00803F8 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0080A8C (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0081930 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C0081990 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C0082D98 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085190 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0087708 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z @ 0x1C00881A8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C0088568 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093CF8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

__int64 __fastcall DmmDisableAllFailurePathsOnAdapter(struct DXGDEVICE *a1, int *const a2)
{
  __int64 v2; // rdi
  int v3; // r13d
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  unsigned int v13; // r12d
  struct DMMVIDPN *v14; // rbx
  __int64 v15; // rsi
  unsigned __int64 *v16; // r15
  int *v17; // rcx
  int NumPathsFromSource; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r9
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  char v34; // r8
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v38; // [rsp+20h] [rbp-79h]
  __int64 v39; // [rsp+40h] [rbp-59h] BYREF
  int v40; // [rsp+48h] [rbp-51h]
  VIDPN_MGR *v41; // [rsp+50h] [rbp-49h]
  __int64 v42; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v43[24]; // [rsp+60h] [rbp-39h] BYREF
  struct _D3DKMT_DISPLAYMODE v44[2]; // [rsp+78h] [rbp-21h] BYREF
  int v45; // [rsp+100h] [rbp+67h]
  int v46; // [rsp+100h] [rbp+67h]
  int v47; // [rsp+100h] [rbp+67h]
  struct DMMVIDPN *v49; // [rsp+110h] [rbp+77h] BYREF
  unsigned __int64 v50; // [rsp+118h] [rbp+7Fh] BYREF

  v2 = *((_QWORD *)a1 + 357);
  v3 = 0;
  v39 = 0LL;
  v40 = 0;
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
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  ADAPTER_RENDER::FlushScheduler(v7[267], 8, 0xFFFFFFFF, 0);
  v41 = *(VIDPN_MGR **)(*(_QWORD *)(v2 + 2128) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v42, (__int64)v41);
  v49 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                             (const struct DMMVIDPN **)v41,
                                             (__int64 *)&v49);
  v6 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v12[3] = *(int *)(v2 + 272);
    v12[4] = *(unsigned int *)(v2 + 268);
    v12[5] = v6;
    WdLogEvent5_WdError(v12);
    goto LABEL_36;
  }
  v13 = -1;
  v14 = v49;
  v15 = 0LL;
  v16 = (unsigned __int64 *)((char *)v49 + 96);
  if ( !*(_DWORD *)(*(_QWORD *)(v2 + 2128) + 80LL) )
    goto LABEL_35;
  v17 = a2;
  do
  {
    if ( !v17 || v17[v15] < 0 )
    {
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)v16, v15, &v50);
      if ( NumPathsFromSource < 0 )
      {
        if ( NumPathsFromSource == -1071774919 && !v50 )
        {
LABEL_31:
          v17 = a2;
          goto LABEL_32;
        }
        v20 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v20);
      }
      if ( v50 )
      {
        v21 = v15;
        if ( v13 != -1 )
          v21 = -3;
        v13 = v21;
        v45 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                *(ADAPTER_DISPLAY **)(v2 + 2128),
                v15,
                0LL,
                4096,
                (struct _KTHREAD **)a1,
                1u,
                0);
        if ( v45 >= 0 )
        {
          if ( v16 )
            v25 = (__int64)(v16 + 7);
          else
            v25 = 0LL;
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v43, v25, 2u, v23, v38, v16[5]);
          if ( (int)DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v16, v15) < 0 )
          {
            v30 = WdLogNewEntry5_WdAssertion(v27);
            WdLogEvent5_WdAssertion(v30);
          }
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
            (ApplyPermissionWithinThisScope *)v43,
            v26,
            v28,
            v29);
          LODWORD(v39) = v39 & 0xFFFFFF00 | 0x51;
          v31 = *(_QWORD *)(v2 + 2128);
          BYTE4(v39) = BYTE4(v39) & 0xF8 | 4;
          v40 = *(_DWORD *)(v31 + 240);
          v46 = VIDPN_MGR::CommitVidPn(
                  (__int64)v41,
                  v14,
                  0LL,
                  v15,
                  D3DKMDT_MCC_IGNORE,
                  (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v39,
                  0LL,
                  0LL);
          if ( v46 >= 0 )
          {
            v34 = 0;
          }
          else
          {
            v33 = (_QWORD *)WdLogNewEntry5_WdError(v32);
            v3 = v46;
            v33[3] = (unsigned int)v15;
            v33[4] = *(int *)(v2 + 272);
            v33[5] = *(unsigned int *)(v2 + 268);
            v33[6] = v46;
            WdLogEvent5_WdError(v33);
            v34 = 1;
          }
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v2 + 2128), v15, v34);
          memset(v44, 0, 0x38uLL);
          ADAPTER_DISPLAY::SetPartOfDesktop(*(DXGADAPTER ***)(v2 + 2128), v15, 0);
          ADAPTER_DISPLAY::SetCddDisplayMode(*(DXGADAPTER ***)(v2 + 2128), v15, v44);
          ADAPTER_DISPLAY::SetDisplayModeInfo(
            *(DXGADAPTER ***)(v2 + 2128),
            v15,
            (const struct _DXGK_DISPLAYMODE_INFO *const)v44);
          v47 = ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v2 + 2128), a1, v15);
          if ( v47 < 0 )
          {
            v36 = (_QWORD *)WdLogNewEntry5_WdError(v35);
            v3 = v47;
            v36[3] = (unsigned int)v15;
            v36[4] = *(int *)(v2 + 272);
            v36[5] = *(unsigned int *)(v2 + 268);
            v36[6] = v47;
            WdLogEvent5_WdError(v36);
          }
        }
        else
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdError(v22);
          v3 = v45;
          v24[3] = (unsigned int)v15;
          v24[4] = *(int *)(v2 + 272);
          v24[5] = *(unsigned int *)(v2 + 268);
          v24[6] = v45;
          WdLogEvent5_WdError(v24);
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v2 + 2128), v15, 1);
        }
      }
      goto LABEL_31;
    }
LABEL_32:
    v15 = (unsigned int)(v15 + 1);
  }
  while ( (unsigned int)v15 < *(_DWORD *)(*(_QWORD *)(v2 + 2128) + 80LL) );
  if ( v13 != -1 )
    ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(
      *(PERESOURCE ***)(v2 + 2128),
      v13,
      (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *const)&v39);
LABEL_35:
  LODWORD(v6) = v3;
LABEL_36:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v49, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v42 + 40));
  return (unsigned int)v6;
}
