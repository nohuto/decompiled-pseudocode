/*
 * XREFs of ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00E287C
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3B40 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000192C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C0004850 (-GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00803F8 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00806CC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0080A8C (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0081930 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C0081990 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C0082D98 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0084EB8 (-CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z @ 0x1C00881A8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00883AC (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C00E216C (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 *     DmmResetModeState @ 0x1C00E2B30 (DmmResetModeState.c)
 */

__int64 __fastcall VIDPN_MGR::RemovePresentPathFromActiveVidPn(DXGADAPTER ***this, unsigned int a2)
{
  __int64 v2; // r12
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // r8
  __int64 v8; // rax
  int ClientVidPnFromActive; // eax
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rsi
  struct DMMVIDPN *v13; // rbx
  char *v14; // r13
  _QWORD *v15; // r15
  bool i; // zf
  struct DMMVIDPNPRESENTPATH *FirstPath; // r15
  DXGADAPTER **v18; // rbx
  _QWORD *v19; // rsi
  unsigned int *j; // rsi
  __int64 v22; // r14
  unsigned int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rcx
  void *v29; // r12
  DXGADAPTER **v30; // rcx
  DXGADAPTER **v31; // rdx
  struct _KTHREAD **v32; // rsi
  int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  int NumPathsFromSource; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  char *v58; // r15
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rcx
  _QWORD *v66; // rbx
  __int64 v67; // rax
  _QWORD *v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // [rsp+20h] [rbp-50h]
  unsigned int v72; // [rsp+40h] [rbp-30h] BYREF
  char v73; // [rsp+44h] [rbp-2Ch]
  int v74; // [rsp+48h] [rbp-28h]
  _BYTE v75[32]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v76; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v77; // [rsp+B8h] [rbp+48h]
  struct DMMVIDPN *v78; // [rsp+C0h] [rbp+50h] BYREF

  v77 = a2;
  v2 = a2;
  v4 = WdLogNewEntry5_WdDmmEvent(this);
  *(_QWORD *)(v4 + 24) = v2;
  *(_QWORD *)(v4 + 32) = this;
  WdLogEvent5_WdDmmEvent(v4);
  CurrentThread = KeGetCurrentThread();
  if ( this[5][1] != CurrentThread )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v8);
  }
  v78 = 0LL;
  ClientVidPnFromActive = VIDPN_MGR::CreateClientVidPnFromActive(
                            (__int64)this,
                            (__int64 *)&v78,
                            (__int64)CurrentThread,
                            v6);
  v12 = ClientVidPnFromActive;
  if ( ClientVidPnFromActive < 0 )
  {
    v42 = WdLogNewEntry5_WdDmmEvent(v10);
    *(_QWORD *)(v42 + 24) = v12;
    WdLogEvent5_WdDmmEvent(v42);
  }
  else
  {
    v13 = v78;
    v14 = (char *)v78 + 96;
    v15 = (_QWORD *)((char *)v78 + 120);
    if ( (_QWORD *)*v15 != v15 )
    {
      FirstPath = (struct DMMVIDPNPRESENTPATH *)(*v15 - 8LL);
      for ( i = FirstPath == 0LL; !i; i = FirstPath == 0LL )
      {
        LOBYTE(v10) = v14[76];
        v22 = *(unsigned int *)(*((_QWORD *)FirstPath + 11) + 24LL);
        v23 = *(_DWORD *)(*((_QWORD *)FirstPath + 12) + 24LL);
        if ( ((unsigned __int16)((2 << v10) - 1) & *((_WORD *)v14 + 39)) != 0 )
        {
          v43 = WdLogNewEntry5_WdAssertion(v10);
          WdLogEvent5_WdAssertion(v43);
        }
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
          (__int64)v75,
          (unsigned __int64)(v14 + 56) & -(__int64)(v14 != 0LL),
          2u,
          v11,
          v71,
          0xFFuLL);
        v76 = 0LL;
        if ( (_DWORD)v2 == -1 )
        {
          if ( (int)DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v14, v22) < 0 )
          {
            v44 = WdLogNewEntry5_WdAssertion(v27);
            WdLogEvent5_WdAssertion(v44);
          }
          v76 = 0LL;
          FirstPath = DMMVIDPNTOPOLOGY::GetFirstPath((DMMVIDPNTOPOLOGY *)v14);
        }
        else
        {
          if ( (_DWORD)v2 != v23 )
          {
            v58 = (char *)*((_QWORD *)FirstPath + 1);
            if ( v58 == v14 + 24 )
              FirstPath = 0LL;
            else
              FirstPath = (struct DMMVIDPNPRESENTPATH *)(v58 - 8);
            ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
              (ApplyPermissionWithinThisScope *)v75,
              v24,
              v25,
              v26);
            continue;
          }
          if ( (int)DMMVIDPNTOPOLOGY::RemovePath((DMMVIDPNTOPOLOGY *)v14, v22, v23, 0LL) < 0 )
          {
            v46 = WdLogNewEntry5_WdAssertion(v45);
            WdLogEvent5_WdAssertion(v46);
          }
          NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)v14, v22, &v76);
          if ( NumPathsFromSource < 0 )
          {
            if ( NumPathsFromSource != -1071774919 )
            {
              v48 = WdLogNewEntry5_WdAssertion(v28);
              WdLogEvent5_WdAssertion(v48);
            }
            v76 = 0LL;
          }
          FirstPath = 0LL;
        }
        v29 = 0LL;
        if ( !this[1] )
        {
          v49 = WdLogNewEntry5_WdAssertion(v28);
          WdLogEvent5_WdAssertion(v49);
        }
        v30 = this[1];
        if ( *((_QWORD *)v30[2] + 267) && v76 )
        {
          if ( !v30 )
          {
            v50 = WdLogNewEntry5_WdAssertion(0LL);
            WdLogEvent5_WdAssertion(v50);
          }
          DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(this[1], v22);
          if ( !DisplayedPrimaryAllocation )
          {
            v60 = WdLogNewEntry5_WdWarning(v30, v52, v53, v54);
            *(_QWORD *)(v60 + 24) = v22;
            if ( !this[1] )
            {
              v61 = WdLogNewEntry5_WdAssertion(v59);
              WdLogEvent5_WdAssertion(v61);
            }
            *(_QWORD *)(v60 + 32) = this[1][2];
            WdLogEvent5_WdWarning(v60);
            LODWORD(v12) = -1071775468;
            goto LABEL_65;
          }
          v29 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2);
        }
        if ( !this[1] )
        {
          v55 = WdLogNewEntry5_WdAssertion(v30);
          WdLogEvent5_WdAssertion(v55);
        }
        v31 = this[1];
        v32 = (struct _KTHREAD **)*((_QWORD *)v31[14] + 127 * v22 + 84);
        if ( !v31 )
        {
          v56 = WdLogNewEntry5_WdAssertion(1016 * v22);
          WdLogEvent5_WdAssertion(v56);
        }
        v33 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this[1], v22, 0LL, 256, v32, 0, 0);
        v12 = v33;
        if ( v33 < 0 )
        {
          v66 = (_QWORD *)WdLogNewEntry5_WdError(v34);
          v66[3] = v22;
          if ( !this[1] )
          {
            v70 = WdLogNewEntry5_WdAssertion(v69);
            WdLogEvent5_WdAssertion(v70);
          }
          v66[4] = this[1][2];
LABEL_63:
          v66[5] = v12;
          v68 = v66;
LABEL_64:
          WdLogEvent5_WdError(v68);
LABEL_65:
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
            (ApplyPermissionWithinThisScope *)v75,
            v62,
            v63,
            v64);
          goto LABEL_14;
        }
        v73 &= 0xF0u;
        v72 = v72 & 0xFFFFFF00 | 0x44;
        v74 = -2;
        v35 = VIDPN_MGR::CommitVidPn(
                (__int64)this,
                v13,
                v29,
                v22,
                D3DKMDT_MCC_IGNORE,
                (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v72,
                0LL,
                0LL);
        v12 = v35;
        if ( v35 < 0 )
        {
          v68 = (_QWORD *)WdLogNewEntry5_WdError(v36);
          v68[3] = v13;
          v68[4] = v22;
          v68[5] = v12;
          goto LABEL_64;
        }
        if ( !this[1] )
        {
          v57 = WdLogNewEntry5_WdAssertion(v36);
          WdLogEvent5_WdAssertion(v57);
        }
        v37 = DmmResetModeState(this[1][2], (unsigned int)v22);
        v12 = v37;
        if ( v37 < 0 )
        {
          v66 = (_QWORD *)WdLogNewEntry5_WdError(v39);
          if ( !this[1] )
          {
            v67 = WdLogNewEntry5_WdAssertion(v65);
            WdLogEvent5_WdAssertion(v67);
          }
          v66[3] = this[1][2];
          v66[4] = v22;
          goto LABEL_63;
        }
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
          (ApplyPermissionWithinThisScope *)v75,
          v38,
          v40,
          v41);
        LODWORD(v2) = v77;
      }
    }
    if ( (_DWORD)v2 == -1 )
    {
      _InterlockedAdd((volatile signed __int32 *)this[12] + 18, 1u);
      v18 = this[12];
      v19 = v18 + 3;
      if ( (_QWORD *)*v19 != v19 )
      {
        for ( j = (unsigned int *)(*v19 - 8LL);
              j;
              j = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                    (DMMVIDEOPRESENTTARGETSET *)v18,
                                    (const struct DMMVIDEOPRESENTTARGET *const)j) )
        {
          VIDPN_MGR::SetTargetOwnership((__int64)this, j[6], 2);
        }
      }
      if ( v18 )
        ReferenceCounted::Release((ReferenceCounted *)(v18 + 8));
    }
    else
    {
      VIDPN_MGR::SetTargetOwnership((__int64)this, v2, 2);
    }
    LODWORD(v12) = 0;
  }
LABEL_14:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v78, 0LL);
  return (unsigned int)v12;
}
