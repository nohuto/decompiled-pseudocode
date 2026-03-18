/*
 * XREFs of ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00CBC48
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00DE6A0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00048C4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C0004EB0 (-GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C008DD50 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FDF4 (-CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C0090F40 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0091214 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0091398 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C009B578 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C009B794 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A58F0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5940 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C00CB16C (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 *     DmmResetModeState @ 0x1C00CC0D8 (DmmResetModeState.c)
 */

__int64 __fastcall VIDPN_MGR::RemovePresentPathFromActiveVidPn(struct _KTHREAD ***this, unsigned int a2)
{
  __int64 v2; // r12
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // r8
  __int64 v8; // rax
  int ClientVidPnFromActive; // eax
  __int64 v10; // rcx
  unsigned __int8 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rax
  struct DMMVIDPN *v14; // rbx
  char *v15; // r13
  _QWORD *v16; // r15
  bool i; // zf
  struct DMMVIDPNPRESENTPATH *FirstPath; // r15
  __int64 v19; // r14
  unsigned int v20; // esi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  int NumPathsFromSource; // eax
  __int64 v28; // rax
  void *v29; // r12
  __int64 v30; // rax
  struct _KTHREAD **v31; // rcx
  __int64 v32; // rax
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  struct _KTHREAD **v38; // rdx
  struct DXGDEVICE *v39; // rsi
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rcx
  char *v48; // r15
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rcx
  _QWORD *v53; // rbx
  __int64 v54; // rax
  _QWORD *v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rax
  struct _KTHREAD **v58; // rbx
  _QWORD *v59; // rsi
  unsigned int *j; // rsi
  __int64 v62; // [rsp+20h] [rbp-50h]
  unsigned int v63; // [rsp+40h] [rbp-30h] BYREF
  char v64; // [rsp+44h] [rbp-2Ch]
  int v65; // [rsp+48h] [rbp-28h]
  _BYTE v66[32]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v67; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v68; // [rsp+B8h] [rbp+48h]
  struct DMMVIDPN *v69; // [rsp+C0h] [rbp+50h] BYREF

  v68 = a2;
  v2 = a2;
  v4 = WdLogNewEntry5_WdDmmEvent(this);
  *(_QWORD *)(v4 + 24) = v2;
  *(_QWORD *)(v4 + 32) = this;
  WdLogEvent5_WdDmmEvent(v4);
  CurrentThread = KeGetCurrentThread();
  if ( *this[5] != CurrentThread )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v8);
  }
  v69 = 0LL;
  ClientVidPnFromActive = VIDPN_MGR::CreateClientVidPnFromActive(
                            (__int64)this,
                            (__int64 *)&v69,
                            (__int64)CurrentThread,
                            v6);
  v12 = ClientVidPnFromActive;
  if ( ClientVidPnFromActive < 0 )
  {
    v13 = WdLogNewEntry5_WdDmmEvent(v10);
    *(_QWORD *)(v13 + 24) = v12;
    WdLogEvent5_WdDmmEvent(v13);
    goto LABEL_66;
  }
  v14 = v69;
  v15 = (char *)v69 + 96;
  v16 = (_QWORD *)((char *)v69 + 120);
  if ( (_QWORD *)*v16 != v16 )
  {
    FirstPath = (struct DMMVIDPNPRESENTPATH *)(*v16 - 8LL);
    for ( i = FirstPath == 0LL; !i; i = FirstPath == 0LL )
    {
      LOBYTE(v10) = v15[76];
      v19 = *(unsigned int *)(*((_QWORD *)FirstPath + 11) + 24LL);
      v20 = *(_DWORD *)(*((_QWORD *)FirstPath + 12) + 24LL);
      if ( ((unsigned __int16)((2 << v10) - 1) & *((_WORD *)v15 + 39)) != 0 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v21);
      }
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v66,
        (unsigned __int64)(v15 + 56) & -(__int64)(v15 != 0LL),
        2u,
        v11,
        v62,
        0xFFuLL);
      v67 = 0LL;
      if ( (_DWORD)v2 == -1 )
      {
        if ( (int)DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v15, v19) < 0 )
        {
          v23 = WdLogNewEntry5_WdAssertion(v22);
          WdLogEvent5_WdAssertion(v23);
        }
        v67 = 0LL;
        FirstPath = DMMVIDPNTOPOLOGY::GetFirstPath((DMMVIDPNTOPOLOGY *)v15);
      }
      else
      {
        if ( (_DWORD)v2 != v20 )
        {
          v48 = (char *)*((_QWORD *)FirstPath + 1);
          if ( v48 == v15 + 24 )
            FirstPath = 0LL;
          else
            FirstPath = (struct DMMVIDPNPRESENTPATH *)(v48 - 8);
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v66);
          continue;
        }
        if ( (int)DMMVIDPNTOPOLOGY::RemovePath((DMMVIDPNTOPOLOGY *)v15, v19, v20, 0LL) < 0 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v25);
          WdLogEvent5_WdAssertion(v26);
        }
        NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)v15, v19, &v67);
        if ( NumPathsFromSource < 0 )
        {
          if ( NumPathsFromSource != -1071774919 )
          {
            v28 = WdLogNewEntry5_WdAssertion(v24);
            WdLogEvent5_WdAssertion(v28);
          }
          v67 = 0LL;
        }
        FirstPath = 0LL;
      }
      v29 = 0LL;
      if ( !this[1] )
      {
        v30 = WdLogNewEntry5_WdAssertion(v24);
        WdLogEvent5_WdAssertion(v30);
      }
      v31 = this[1];
      if ( *((_QWORD *)v31[2] + 249) && v67 )
      {
        if ( !v31 )
        {
          v32 = WdLogNewEntry5_WdAssertion(0LL);
          WdLogEvent5_WdAssertion(v32);
        }
        DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(this[1], v19);
        if ( !DisplayedPrimaryAllocation )
        {
          v50 = WdLogNewEntry5_WdWarning(v31, v34, v35, v36);
          *(_QWORD *)(v50 + 24) = v19;
          if ( !this[1] )
          {
            v51 = WdLogNewEntry5_WdAssertion(v49);
            WdLogEvent5_WdAssertion(v51);
          }
          *(_QWORD *)(v50 + 32) = this[1][2];
          WdLogEvent5_WdWarning(v50);
          LODWORD(v12) = -1071775468;
          goto LABEL_57;
        }
        v29 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2);
      }
      if ( !this[1] )
      {
        v37 = WdLogNewEntry5_WdAssertion(v31);
        WdLogEvent5_WdAssertion(v37);
      }
      v38 = this[1];
      v39 = (struct DXGDEVICE *)*((_QWORD *)v38[17] + 127 * v19 + 84);
      if ( !v38 )
      {
        v40 = WdLogNewEntry5_WdAssertion(1016 * v19);
        WdLogEvent5_WdAssertion(v40);
      }
      v41 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this[1], v19, 0LL, 256, v39, 0);
      v12 = v41;
      if ( v41 < 0 )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdError(v42);
        v53[3] = v19;
        if ( !this[1] )
        {
          v57 = WdLogNewEntry5_WdAssertion(v56);
          WdLogEvent5_WdAssertion(v57);
        }
        v53[4] = this[1][2];
LABEL_55:
        v53[5] = v12;
        v55 = v53;
LABEL_56:
        WdLogEvent5_WdError(v55);
LABEL_57:
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v66);
        goto LABEL_66;
      }
      v64 &= 0xF8u;
      v63 = v63 & 0xFFFFFF00 | 0x44;
      v65 = -2;
      v43 = VIDPN_MGR::CommitVidPn(
              (__int64)this,
              v14,
              v29,
              v19,
              D3DKMDT_MCC_IGNORE,
              (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v63,
              0LL,
              0LL);
      v12 = v43;
      if ( v43 < 0 )
      {
        v55 = (_QWORD *)WdLogNewEntry5_WdError(v44);
        v55[3] = v14;
        v55[4] = v19;
        v55[5] = v12;
        goto LABEL_56;
      }
      if ( !this[1] )
      {
        v45 = WdLogNewEntry5_WdAssertion(v44);
        WdLogEvent5_WdAssertion(v45);
      }
      v46 = DmmResetModeState(this[1][2], (unsigned int)v19);
      v12 = v46;
      if ( v46 < 0 )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdError(v47);
        if ( !this[1] )
        {
          v54 = WdLogNewEntry5_WdAssertion(v52);
          WdLogEvent5_WdAssertion(v54);
        }
        v53[3] = this[1][2];
        v53[4] = v19;
        goto LABEL_55;
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v66);
      LODWORD(v2) = v68;
    }
  }
  if ( (_DWORD)v2 == -1 )
  {
    _InterlockedAdd((volatile signed __int32 *)this[12] + 18, 1u);
    v58 = this[12];
    v59 = v58 + 3;
    if ( (_QWORD *)*v59 != v59 )
    {
      for ( j = (unsigned int *)(*v59 - 8LL);
            j;
            j = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                  (DMMVIDEOPRESENTTARGETSET *)v58,
                                  (const struct DMMVIDEOPRESENTTARGET *const)j) )
      {
        VIDPN_MGR::SetTargetOwnership((__int64)this, j[6], 2);
      }
    }
    if ( v58 )
      ReferenceCounted::Release((ReferenceCounted *)(v58 + 8));
  }
  else
  {
    VIDPN_MGR::SetTargetOwnership((__int64)this, v2, 2);
  }
  LODWORD(v12) = 0;
LABEL_66:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v69, 0LL);
  return (unsigned int)v12;
}
