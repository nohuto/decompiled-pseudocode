/*
 * XREFs of ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C0176C80
 * Callers:
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00A3B2C (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0007630 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C0007710 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0007934 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0007BDC (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008DC58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C008DD50 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C0090F40 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0091398 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C009AC9C (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C009B578 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C009B93C (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A58F0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5940 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
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
  unsigned __int8 v23; // r9
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  char v31; // r8
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v35; // [rsp+20h] [rbp-79h]
  __int64 v36; // [rsp+40h] [rbp-59h] BYREF
  int v37; // [rsp+48h] [rbp-51h]
  VIDPN_MGR *v38; // [rsp+50h] [rbp-49h]
  __int64 v39; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v40[24]; // [rsp+60h] [rbp-39h] BYREF
  struct _D3DKMT_DISPLAYMODE v41[2]; // [rsp+78h] [rbp-21h] BYREF
  int v42; // [rsp+100h] [rbp+67h]
  int v43; // [rsp+100h] [rbp+67h]
  int v44; // [rsp+100h] [rbp+67h]
  struct DMMVIDPN *v46; // [rsp+110h] [rbp+77h] BYREF
  unsigned __int64 v47; // [rsp+118h] [rbp+7Fh] BYREF

  v2 = *((_QWORD *)a1 + 354);
  v3 = 0;
  v36 = 0LL;
  v37 = 0;
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
  ADAPTER_RENDER::FlushScheduler(v7[249], 8, 0xFFFFFFFF, 0);
  v38 = *(VIDPN_MGR **)(*(_QWORD *)(v2 + 1984) + 112LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v39, (__int64)v38);
  v46 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v38, (__int64 *)&v46);
  v6 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v12[3] = (int)HIDWORD(*(_QWORD *)(v2 + 252));
    v12[4] = *(unsigned int *)(v2 + 252);
    v12[5] = v6;
    WdLogEvent5_WdError(v12);
    goto LABEL_36;
  }
  v13 = -1;
  v14 = v46;
  v15 = 0LL;
  v16 = (unsigned __int64 *)((char *)v46 + 96);
  if ( !*(_DWORD *)(*(_QWORD *)(v2 + 1984) + 104LL) )
    goto LABEL_35;
  v17 = a2;
  do
  {
    if ( !v17 || v17[v15] < 0 )
    {
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)v16, v15, &v47);
      if ( NumPathsFromSource < 0 )
      {
        if ( NumPathsFromSource == -1071774919 && !v47 )
        {
LABEL_31:
          v17 = a2;
          goto LABEL_32;
        }
        v20 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v20);
      }
      if ( v47 )
      {
        v21 = v15;
        if ( v13 != -1 )
          v21 = -3;
        v13 = v21;
        v42 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v2 + 1984), v15, 0LL, 4096, a1, 1u);
        if ( v42 >= 0 )
        {
          if ( v16 )
            v25 = (__int64)(v16 + 7);
          else
            v25 = 0LL;
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v40, v25, 2u, v23, v35, v16[5]);
          if ( (int)DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v16, v15) < 0 )
          {
            v27 = WdLogNewEntry5_WdAssertion(v26);
            WdLogEvent5_WdAssertion(v27);
          }
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v40);
          LODWORD(v36) = v36 & 0xFFFFFF00 | 0x51;
          v28 = *(_QWORD *)(v2 + 1984);
          BYTE4(v36) = BYTE4(v36) & 0xF8 | 4;
          v37 = *(_DWORD *)(v28 + 312);
          v43 = VIDPN_MGR::CommitVidPn(
                  (__int64)v38,
                  v14,
                  0LL,
                  v15,
                  D3DKMDT_MCC_IGNORE,
                  (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v36,
                  0LL,
                  0LL);
          if ( v43 >= 0 )
          {
            v31 = 0;
          }
          else
          {
            v30 = (_QWORD *)WdLogNewEntry5_WdError(v29);
            v3 = v43;
            v30[3] = (unsigned int)v15;
            v30[4] = (int)HIDWORD(*(_QWORD *)(v2 + 252));
            v30[5] = *(unsigned int *)(v2 + 252);
            v30[6] = v43;
            WdLogEvent5_WdError(v30);
            v31 = 1;
          }
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v2 + 1984), v15, v31);
          memset(v41, 0, 0x38uLL);
          ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v2 + 1984), v15, 0);
          ADAPTER_DISPLAY::SetCddDisplayMode(*(PERESOURCE ***)(v2 + 1984), v15, v41);
          ADAPTER_DISPLAY::SetDisplayModeInfo(
            *(PERESOURCE ***)(v2 + 1984),
            v15,
            (const struct _DXGK_DISPLAYMODE_INFO *const)v41);
          v44 = ADAPTER_DISPLAY::DestroyCddAllocations(*(PERESOURCE ***)(v2 + 1984), a1, v15);
          if ( v44 < 0 )
          {
            v33 = (_QWORD *)WdLogNewEntry5_WdError(v32);
            v3 = v44;
            v33[3] = (unsigned int)v15;
            v33[4] = (int)HIDWORD(*(_QWORD *)(v2 + 252));
            v33[5] = *(unsigned int *)(v2 + 252);
            v33[6] = v44;
            WdLogEvent5_WdError(v33);
          }
        }
        else
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdError(v22);
          v3 = v42;
          v24[3] = (unsigned int)v15;
          v24[4] = (int)HIDWORD(*(_QWORD *)(v2 + 252));
          v24[5] = *(unsigned int *)(v2 + 252);
          v24[6] = v42;
          WdLogEvent5_WdError(v24);
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v2 + 1984), v15, 1);
        }
      }
      goto LABEL_31;
    }
LABEL_32:
    v15 = (unsigned int)(v15 + 1);
  }
  while ( (unsigned int)v15 < *(_DWORD *)(*(_QWORD *)(v2 + 1984) + 104LL) );
  if ( v13 != -1 )
    ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(
      *(PERESOURCE ***)(v2 + 1984),
      v13,
      (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *const)&v36);
LABEL_35:
  LODWORD(v6) = v3;
LABEL_36:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v46, 0LL);
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v39 + 40));
  return (unsigned int)v6;
}
