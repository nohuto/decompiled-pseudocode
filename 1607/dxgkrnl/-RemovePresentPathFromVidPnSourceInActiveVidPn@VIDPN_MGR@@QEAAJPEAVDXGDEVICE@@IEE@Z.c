/*
 * XREFs of ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C00840B4
 * Callers:
 *     DmmRemovePresentPathFromVidPnSourceInActiveVidPn @ 0x1C0070918 (DmmRemovePresentPathFromVidPnSourceInActiveVidPn.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00047D8 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0004FF4 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0005018 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C000678C (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C007FA6C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00803F8 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00806CC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0080A8C (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0081930 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C0081990 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C0082D98 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085190 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z @ 0x1C00881A8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00883AC (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C0088568 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall VIDPN_MGR::RemovePresentPathFromVidPnSourceInActiveVidPn(
        ADAPTER_DISPLAY **this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        char a4,
        unsigned __int8 a5)
{
  __int64 v6; // r14
  struct DXGDEVICE *v7; // r12
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rcx
  unsigned int v12; // r13d
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v14; // rax
  ADAPTER_DISPLAY *v15; // rdx
  int v16; // eax
  __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rax
  DMMVIDPNTOPOLOGY *v31; // r15
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // ecx
  unsigned int v35; // ebx
  char v36; // r12
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // esi
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned int v46; // r13d
  __int64 v47; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v49; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v50; // r13d
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // r12
  __int64 v57; // rcx
  _QWORD *v58; // r13
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  struct DMMVIDPN *v62; // rbx
  void *v63; // rsi
  __int64 v64; // rax
  ADAPTER_DISPLAY *v65; // rcx
  __int64 v66; // rax
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v68; // rcx
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rsi
  _QWORD *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  __int64 v78; // rcx
  _QWORD *v79; // rbx
  __int64 v80; // rax
  __int64 v81; // [rsp+20h] [rbp-51h]
  unsigned int v82; // [rsp+40h] [rbp-31h] BYREF
  unsigned int v83; // [rsp+44h] [rbp-2Dh] BYREF
  _BYTE v84[8]; // [rsp+48h] [rbp-29h] BYREF
  struct DMMVIDPN *v85; // [rsp+50h] [rbp-21h] BYREF
  unsigned __int64 v86; // [rsp+58h] [rbp-19h] BYREF
  unsigned int v87; // [rsp+60h] [rbp-11h] BYREF
  char v88; // [rsp+64h] [rbp-Dh]
  int v89; // [rsp+68h] [rbp-9h]
  _BYTE v90[80]; // [rsp+70h] [rbp-1h] BYREF
  unsigned int v91; // [rsp+D0h] [rbp+5Fh] BYREF
  struct DXGDEVICE *v92; // [rsp+D8h] [rbp+67h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v93; // [rsp+E0h] [rbp+6Fh] BYREF

  v92 = a2;
  v6 = a3;
  v7 = a2;
  v9 = WdLogNewEntry5_WdDmmEvent(this);
  v10 = (unsigned int)v6;
  *(_QWORD *)(v9 + 24) = v6;
  *(_QWORD *)(v9 + 32) = this;
  WdLogEvent5_WdDmmEvent(v9);
  v12 = 0;
  if ( !v7 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v22);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)this[5] + 1) != CurrentThread )
  {
    v14 = WdLogNewEntry5_WdAssertion(CurrentThread);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !this[1] )
  {
    v23 = WdLogNewEntry5_WdAssertion(CurrentThread);
    WdLogEvent5_WdAssertion(v23);
  }
  v15 = this[1];
  if ( (*(_DWORD *)(*((_QWORD *)v15 + 2) + 300LL) & 0x100) != 0 )
    goto LABEL_11;
  if ( !v15 )
  {
    v24 = WdLogNewEntry5_WdAssertion(CurrentThread);
    WdLogEvent5_WdAssertion(v24);
  }
  v16 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(this[1], v6, 0, 0x40u, v7, 1u, 0);
  v17 = v16;
  if ( v16 >= 0 )
  {
LABEL_11:
    if ( a4 )
    {
      v85 = 0LL;
      if ( (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn((struct VIDPN_MGR *)this) >= 0 )
      {
        v31 = (struct DMMVIDPN *)((char *)v85 + 96);
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
          (__int64)v90,
          (__int64)v85 + 152,
          2u,
          v29,
          v81,
          *((_QWORD *)v85 + 17));
        v82 = -1;
        v91 = -1;
        if ( a5 )
        {
          if ( !this[1] )
          {
            v33 = WdLogNewEntry5_WdAssertion(v32);
            WdLogEvent5_WdAssertion(v33);
          }
          ADAPTER_DISPLAY::GetPrimaryPath(this[1], &v83, &v91, (enum _DXGK_PRIMARY_TARGET_TYPE *)v84);
          v34 = v91;
          if ( v83 != (_DWORD)v6 )
            v34 = -1;
          v82 = v34;
        }
        v35 = v82;
        v36 = 0;
        LOBYTE(v93) = 0;
        while ( 1 )
        {
          v91 = v12;
          v82 = -1;
          v37 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v31, v6, v12, &v82);
          v42 = v37;
          if ( v37 < 0 )
          {
            if ( v37 == -1071774919 )
              break;
            v43 = WdLogNewEntry5_WdAssertion(v39);
            WdLogEvent5_WdAssertion(v43);
          }
          if ( v42 == -1071774919 )
            break;
          v40 = v82;
          if ( v82 == -1 )
            break;
          if ( v82 == v35 )
          {
            Path = DMMVIDPNTOPOLOGY::FindPath(v31, v6, v82);
            if ( !Path )
            {
              v49 = WdLogNewEntry5_WdAssertion(v47);
              WdLogEvent5_WdAssertion(v49);
            }
            v50 = *((_DWORD *)Path + 28);
            v93 = v50;
            if ( v50 == D3DKMDT_VPPS_UNPINNED )
            {
              v51 = WdLogNewEntry5_WdAssertion(v47);
              *(_QWORD *)(v51 + 24) = 8567LL;
              WdLogEvent5_WdAssertion(v51);
            }
            if ( ((v50 - 1) & 0xFFFFFFFD) != 0 && (*((_DWORD *)Path + 30) & 4) != 0 )
            {
              if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling(Path) < 0 )
              {
                v53 = WdLogNewEntry5_WdAssertion(v52);
                WdLogEvent5_WdAssertion(v53);
              }
              v54 = DMMVIDPNPRESENTPATH::PinContentScaling(Path, D3DKMDT_VPPS_STRETCHED);
              v56 = v54;
              if ( v54 < 0 )
              {
                v58 = (_QWORD *)WdLogNewEntry5_WdError(v55);
                v58[3] = v6;
                if ( !this[1] )
                {
                  v59 = WdLogNewEntry5_WdAssertion(v57);
                  WdLogEvent5_WdAssertion(v59);
                }
                v58[4] = this[1];
                v58[5] = v56;
                WdLogEvent5_WdError(v58);
                if ( (int)DMMVIDPNPRESENTPATH::PinContentScaling(Path, v93) < 0 )
                {
                  v61 = WdLogNewEntry5_WdAssertion(v60);
                  WdLogEvent5_WdAssertion(v61);
                }
              }
              v36 = 1;
            }
            v46 = v91;
            LOBYTE(v93) = 1;
          }
          else
          {
            if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v31, v6, v82, 0LL) < 0 )
            {
              v45 = WdLogNewEntry5_WdAssertion(v44);
              WdLogEvent5_WdAssertion(v45);
            }
            v46 = v12 - 1;
            v36 = 1;
          }
          v12 = v46 + 1;
        }
        v62 = v85;
        v63 = 0LL;
        if ( !v36 )
          goto LABEL_67;
        if ( (_BYTE)v93 )
        {
          if ( !this[1] )
          {
            v64 = WdLogNewEntry5_WdAssertion(v39);
            WdLogEvent5_WdAssertion(v64);
          }
          v65 = this[1];
          if ( *(_QWORD *)(*((_QWORD *)v65 + 2) + 2136LL) )
          {
            if ( !v65 )
            {
              v66 = WdLogNewEntry5_WdAssertion(0LL);
              WdLogEvent5_WdAssertion(v66);
            }
            DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(this[1], v6);
            if ( !DisplayedPrimaryAllocation || (v63 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2)) == 0LL )
              DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v31, v6);
          }
        }
        else
        {
          v86 = 0LL;
          if ( (unsigned int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v31, v6, &v86) != -1071774919 )
          {
            v69 = WdLogNewEntry5_WdAssertion(v68);
            WdLogEvent5_WdAssertion(v69);
          }
        }
        v88 &= 0xF0u;
        v89 = -2;
        v87 = v87 & 0xFFFFFF00 | 0x41;
        v70 = VIDPN_MGR::CommitVidPn(
                (__int64)this,
                v62,
                v63,
                v6,
                D3DKMDT_MCC_IGNORE,
                (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v87,
                0LL,
                (unsigned __int8 *)&v93);
        v72 = v70;
        if ( v70 < 0 )
        {
          v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v71, v38, v40, v41);
          v10 = v6;
          v73[3] = v62;
          v73[4] = v6;
          v73[5] = v72;
          WdLogEvent5_WdWarning(v73);
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
            (ApplyPermissionWithinThisScope *)v90,
            v74,
            v75,
            v76);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v85, 0LL);
        }
        else
        {
LABEL_67:
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
            (ApplyPermissionWithinThisScope *)v90,
            v38,
            v40,
            v41);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v85, 0LL);
          v10 = v6;
        }
        v7 = v92;
      }
      else
      {
        v30 = WdLogNewEntry5_WdError(v28);
        *(_QWORD *)(v30 + 24) = this;
        WdLogEvent5_WdError(v30);
        auto_rc<DMMVIDPN>::reset((__int64 *)&v85, 0LL);
      }
    }
    if ( !this[1] )
    {
      v77 = WdLogNewEntry5_WdAssertion(CurrentThread);
      WdLogEvent5_WdAssertion(v77);
    }
    v18 = ADAPTER_DISPLAY::DestroyCddAllocations(this[1], v7, v6);
    v20 = v18;
    if ( v18 < 0 )
    {
      v79 = (_QWORD *)WdLogNewEntry5_WdError(v19);
      v79[3] = v10;
      if ( !this[1] )
      {
        v80 = WdLogNewEntry5_WdAssertion(v78);
        WdLogEvent5_WdAssertion(v80);
      }
      v79[4] = this[1];
      v79[5] = v20;
      WdLogEvent5_WdError(v79);
    }
    return 0LL;
  }
  else
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(CurrentThread);
    v26[3] = v6;
    if ( !this[1] )
    {
      v27 = WdLogNewEntry5_WdAssertion(v25);
      WdLogEvent5_WdAssertion(v27);
    }
    v26[4] = *((_QWORD *)this[1] + 2);
    v26[5] = v17;
    WdLogEvent5_WdError(v26);
    return (unsigned int)v17;
  }
}
