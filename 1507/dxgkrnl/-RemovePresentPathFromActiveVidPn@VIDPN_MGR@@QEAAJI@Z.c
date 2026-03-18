/*
 * XREFs of ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00BD1F0
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00CAAA0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C00043B0 (-GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0004F50 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C008A0DC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C008A260 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0097378 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00973C8 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C00B6870 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00B6B20 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00B9638 (-CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C00BCB0C (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 *     DmmResetModeState @ 0x1C00BD4A0 (DmmResetModeState.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00CC158 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C00CC7A0 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 */

__int64 __fastcall VIDPN_MGR::RemovePresentPathFromActiveVidPn(DXGADAPTER ***this, unsigned int a2)
{
  __int64 v2; // r12
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // r8
  __int64 v9; // rax
  int ClientVidPnFromActive; // eax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rsi
  struct DMMVIDPN *v14; // rbx
  __int64 v15; // r8
  char *v16; // r13
  _QWORD *v17; // r15
  bool i; // zf
  struct DMMVIDPNPRESENTPATH *FirstPath; // r15
  DXGADAPTER **v20; // rbx
  _QWORD *v21; // rsi
  unsigned int *j; // rsi
  __int64 v24; // r14
  unsigned int v25; // esi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  void *v34; // r12
  DXGADAPTER **v35; // rcx
  DXGADAPTER **v36; // rdx
  struct DXGDEVICE *v37; // rsi
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  int NumPathsFromSource; // eax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  char *v63; // r15
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rbx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  _QWORD *v72; // rbx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  _QWORD *v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rax
  __int64 v82; // [rsp+20h] [rbp-50h]
  unsigned int v83; // [rsp+40h] [rbp-30h] BYREF
  char v84; // [rsp+44h] [rbp-2Ch]
  int v85; // [rsp+48h] [rbp-28h]
  _BYTE v86[32]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v87; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v88; // [rsp+B8h] [rbp+48h]
  struct DMMVIDPN *v89; // [rsp+C0h] [rbp+50h] BYREF

  v88 = a2;
  v2 = a2;
  v4 = WdLogNewEntry5_WdDmmEvent(this);
  *(_QWORD *)(v4 + 24) = v2;
  *(_QWORD *)(v4 + 32) = this;
  WdLogEvent5_WdDmmEvent(v4);
  CurrentThread = KeGetCurrentThread();
  if ( this[5][1] != CurrentThread )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6, v5, CurrentThread, v7);
    WdLogEvent5_WdAssertion(v9);
  }
  v89 = 0LL;
  ClientVidPnFromActive = VIDPN_MGR::CreateClientVidPnFromActive(
                            (__int64)this,
                            (__int64 *)&v89,
                            (__int64)CurrentThread,
                            v7);
  v13 = ClientVidPnFromActive;
  if ( ClientVidPnFromActive < 0 )
  {
    v47 = WdLogNewEntry5_WdDmmEvent(v11);
    *(_QWORD *)(v47 + 24) = v13;
    WdLogEvent5_WdDmmEvent(v47);
  }
  else
  {
    v14 = v89;
    v15 = 1LL;
    v16 = (char *)v89 + 96;
    v17 = (_QWORD *)((char *)v89 + 120);
    if ( (_QWORD *)*v17 != v17 )
    {
      FirstPath = (struct DMMVIDPNPRESENTPATH *)(*v17 - 8LL);
      for ( i = FirstPath == 0LL; !i; i = FirstPath == 0LL )
      {
        LOBYTE(v11) = v16[76];
        v24 = *(unsigned int *)(*((_QWORD *)FirstPath + 11) + 24LL);
        v25 = *(_DWORD *)(*((_QWORD *)FirstPath + 12) + 24LL);
        if ( ((unsigned __int16)((2 << v11) - 1) & *((_WORD *)v16 + 39)) != 0 )
        {
          v48 = WdLogNewEntry5_WdAssertion(v11, v16 + 56, 1LL, v12);
          WdLogEvent5_WdAssertion(v48);
        }
        LOBYTE(v15) = 2;
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
          (__int64)v86,
          (unsigned __int64)(v16 + 56) & -(__int64)(v16 != 0LL),
          v15,
          v12,
          v82,
          0xFFuLL);
        v87 = 0LL;
        if ( (_DWORD)v2 == -1 )
        {
          if ( (int)DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v16, v24) < 0 )
          {
            v49 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
            WdLogEvent5_WdAssertion(v49);
          }
          v87 = 0LL;
          FirstPath = DMMVIDPNTOPOLOGY::GetFirstPath((DMMVIDPNTOPOLOGY *)v16);
        }
        else
        {
          if ( (_DWORD)v2 != v25 )
          {
            v63 = (char *)*((_QWORD *)FirstPath + 1);
            if ( v63 == v16 + 24 )
              FirstPath = 0LL;
            else
              FirstPath = (struct DMMVIDPNPRESENTPATH *)(v63 - 8);
            ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v86);
            goto LABEL_35;
          }
          if ( (int)DMMVIDPNTOPOLOGY::RemovePath((DMMVIDPNTOPOLOGY *)v16, v24, v25, 0LL) < 0 )
          {
            v54 = WdLogNewEntry5_WdAssertion(v51, v50, v52, v53);
            WdLogEvent5_WdAssertion(v54);
          }
          NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)v16, v24, &v87);
          if ( NumPathsFromSource < 0 )
          {
            if ( NumPathsFromSource != -1071774919 )
            {
              v56 = WdLogNewEntry5_WdAssertion(v31, v30, v32, v33);
              WdLogEvent5_WdAssertion(v56);
            }
            v87 = 0LL;
          }
          FirstPath = 0LL;
        }
        v34 = 0LL;
        if ( !this[1] )
        {
          v57 = WdLogNewEntry5_WdAssertion(v31, v30, v32, v33);
          WdLogEvent5_WdAssertion(v57);
        }
        v35 = this[1];
        if ( *((_QWORD *)v35[2] + 248) && v87 )
        {
          if ( !v35 )
          {
            v58 = WdLogNewEntry5_WdAssertion(0LL, v30, v32, v33);
            WdLogEvent5_WdAssertion(v58);
          }
          DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(this[1], v24);
          if ( !DisplayedPrimaryAllocation )
          {
            v66 = WdLogNewEntry5_WdWarning(v35, v30, v32, v33);
            *(_QWORD *)(v66 + 24) = v24;
            if ( !this[1] )
            {
              v69 = WdLogNewEntry5_WdAssertion(v65, v64, v67, v68);
              WdLogEvent5_WdAssertion(v69);
            }
            *(_QWORD *)(v66 + 32) = this[1][2];
            WdLogEvent5_WdWarning(v66);
            LODWORD(v13) = -1071775468;
            goto LABEL_65;
          }
          v34 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2);
        }
        if ( !this[1] )
        {
          v60 = WdLogNewEntry5_WdAssertion(v35, v30, v32, v33);
          WdLogEvent5_WdAssertion(v60);
        }
        v36 = this[1];
        v37 = (struct DXGDEVICE *)*((_QWORD *)v36[14] + 126 * v24 + 84);
        if ( !v36 )
        {
          v61 = WdLogNewEntry5_WdAssertion(1008 * v24, 0LL, v32, v33);
          WdLogEvent5_WdAssertion(v61);
        }
        v38 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                (ADAPTER_DISPLAY *)this[1],
                (unsigned int)v24,
                0LL,
                256LL,
                v37,
                0);
        v13 = v38;
        if ( v38 < 0 )
        {
          v72 = (_QWORD *)WdLogNewEntry5_WdError(v39);
          v72[3] = v24;
          if ( !this[1] )
          {
            v81 = WdLogNewEntry5_WdAssertion(v78, v77, v79, v80);
            WdLogEvent5_WdAssertion(v81);
          }
          v72[4] = this[1][2];
LABEL_63:
          v72[5] = v13;
          v76 = v72;
LABEL_64:
          WdLogEvent5_WdError(v76);
LABEL_65:
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v86);
          goto LABEL_14;
        }
        v84 &= 0xF8u;
        v83 = v83 & 0xFFFFFF00 | 0x44;
        v85 = -2;
        v40 = VIDPN_MGR::CommitVidPn(
                (VIDPN_MGR *)this,
                v14,
                v34,
                v24,
                D3DKMDT_MCC_IGNORE,
                (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v83,
                0LL,
                0LL);
        v13 = v40;
        if ( v40 < 0 )
        {
          v76 = (_QWORD *)WdLogNewEntry5_WdError(v42);
          v76[3] = v14;
          v76[4] = v24;
          v76[5] = v13;
          goto LABEL_64;
        }
        if ( !this[1] )
        {
          v62 = WdLogNewEntry5_WdAssertion(v42, v41, v43, v44);
          WdLogEvent5_WdAssertion(v62);
        }
        v45 = DmmResetModeState(this[1][2], (unsigned int)v24);
        v13 = v45;
        if ( v45 < 0 )
        {
          v72 = (_QWORD *)WdLogNewEntry5_WdError(v46);
          if ( !this[1] )
          {
            v75 = WdLogNewEntry5_WdAssertion(v71, v70, v73, v74);
            WdLogEvent5_WdAssertion(v75);
          }
          v72[3] = this[1][2];
          v72[4] = v24;
          goto LABEL_63;
        }
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v86);
        LODWORD(v2) = v88;
LABEL_35:
        v15 = 1LL;
      }
    }
    if ( (_DWORD)v2 == -1 )
    {
      _InterlockedAdd((volatile signed __int32 *)this[12] + 18, 1u);
      v20 = this[12];
      v21 = v20 + 3;
      if ( (_QWORD *)*v21 != v21 )
      {
        for ( j = (unsigned int *)(*v21 - 8LL);
              j;
              j = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                    (DMMVIDEOPRESENTTARGETSET *)v20,
                                    (const struct DMMVIDEOPRESENTTARGET *const)j) )
        {
          VIDPN_MGR::SetTargetOwnership((__int64)this, j[6], 2);
        }
      }
      if ( v20 )
        ReferenceCounted::Release((ReferenceCounted *)(v20 + 8));
    }
    else
    {
      VIDPN_MGR::SetTargetOwnership((__int64)this, v2, 2);
    }
    LODWORD(v13) = 0;
  }
LABEL_14:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v89, 0LL);
  return (unsigned int)v13;
}
