/*
 * XREFs of ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C00B9520
 * Callers:
 *     DmmRemovePresentPathFromVidPnSourceInActiveVidPn @ 0x1C00BA068 (DmmRemovePresentPathFromVidPnSourceInActiveVidPn.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0005F48 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C000DE6C (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C00193C8 (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00898AC (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C008A0DC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C008A260 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0096618 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0097378 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00973C8 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C00B6870 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00B6B20 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00B6C38 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00CC158 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C00CC7A0 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // r13d
  struct _KTHREAD *CurrentThread; // rcx
  ADAPTER_DISPLAY *v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rsi
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rbx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  DMMVIDPNTOPOLOGY *v39; // r15
  char *v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  unsigned int v46; // ecx
  unsigned int v47; // ebx
  char v48; // r12
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // esi
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  unsigned int v61; // r13d
  __int64 v62; // rdx
  __int64 v63; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v68; // r13d
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rax
  int v75; // eax
  __int64 v76; // rcx
  __int64 v77; // r12
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  _QWORD *v82; // r13
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rax
  struct DMMVIDPN *v89; // rbx
  void *v90; // rsi
  __int64 v91; // rax
  ADAPTER_DISPLAY *v92; // rcx
  __int64 v93; // rax
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rax
  int v100; // eax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rsi
  _QWORD *v106; // rax
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  _QWORD *v110; // rbx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rax
  __int64 v114; // [rsp+20h] [rbp-51h]
  unsigned int v115; // [rsp+40h] [rbp-31h] BYREF
  unsigned int v116; // [rsp+44h] [rbp-2Dh] BYREF
  _BYTE v117[8]; // [rsp+48h] [rbp-29h] BYREF
  struct DMMVIDPN *v118; // [rsp+50h] [rbp-21h] BYREF
  unsigned __int64 v119; // [rsp+58h] [rbp-19h] BYREF
  unsigned int v120; // [rsp+60h] [rbp-11h] BYREF
  char v121; // [rsp+64h] [rbp-Dh]
  int v122; // [rsp+68h] [rbp-9h]
  _BYTE v123[80]; // [rsp+70h] [rbp-1h] BYREF
  unsigned int v124; // [rsp+D0h] [rbp+5Fh] BYREF
  struct DXGDEVICE *v125; // [rsp+D8h] [rbp+67h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v126; // [rsp+E0h] [rbp+6Fh] BYREF

  v125 = a2;
  v6 = a3;
  v7 = a2;
  v9 = WdLogNewEntry5_WdDmmEvent(this);
  v10 = (unsigned int)v6;
  *(_QWORD *)(v9 + 24) = v6;
  *(_QWORD *)(v9 + 32) = this;
  WdLogEvent5_WdDmmEvent(v9);
  v15 = 0;
  if ( !v7 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    WdLogEvent5_WdAssertion(v26);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)this[5] + 1) != CurrentThread )
  {
    v25 = WdLogNewEntry5_WdAssertion(CurrentThread, v11, v13, v14);
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !this[1] )
  {
    v27 = WdLogNewEntry5_WdAssertion(CurrentThread, v11, v13, v14);
    WdLogEvent5_WdAssertion(v27);
  }
  v17 = this[1];
  v18 = *(unsigned int *)(*((_QWORD *)v17 + 2) + 284LL);
  if ( (v18 & 0x80u) != 0LL )
    goto LABEL_11;
  if ( !v17 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v18, 0LL, v13, v14);
    WdLogEvent5_WdAssertion(v28);
  }
  v19 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(this[1], (unsigned int)v6, 0LL, 64LL, v7, 1u);
  v20 = v19;
  if ( v19 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v31[3] = v6;
    if ( !this[1] )
    {
      v34 = WdLogNewEntry5_WdAssertion(v30, v29, v32, v33);
      WdLogEvent5_WdAssertion(v34);
    }
    v31[4] = *((_QWORD *)this[1] + 2);
    v31[5] = v20;
    WdLogEvent5_WdError(v31);
    return (unsigned int)v20;
  }
  else
  {
LABEL_11:
    if ( a4 )
    {
      v118 = 0LL;
      if ( (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                  (struct VIDPN_MGR *)this,
                  (__int64 *)&v118,
                  v13,
                  v14) >= 0 )
      {
        v39 = (struct DMMVIDPN *)((char *)v118 + 96);
        v40 = (char *)v118 + 152;
        if ( v118 == (struct DMMVIDPN *)-96LL )
          v40 = 0LL;
        LOBYTE(v36) = 2;
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
          (__int64)v123,
          (__int64)v40,
          v36,
          v37,
          v114,
          *((_QWORD *)v118 + 17));
        v115 = -1;
        v124 = -1;
        if ( a5 )
        {
          if ( !this[1] )
          {
            v45 = WdLogNewEntry5_WdAssertion(v42, v41, v43, v44);
            WdLogEvent5_WdAssertion(v45);
          }
          ADAPTER_DISPLAY::GetPrimaryPath(this[1], &v116, &v124, (enum _DXGK_PRIMARY_TARGET_TYPE *)v117);
          v46 = v124;
          if ( v116 != (_DWORD)v6 )
            v46 = -1;
          v115 = v46;
        }
        v47 = v115;
        v48 = 0;
        LOBYTE(v126) = 0;
        while ( 1 )
        {
          v124 = v15;
          v115 = -1;
          v49 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v39, (unsigned int)v6, v15, &v115);
          v54 = v49;
          if ( v49 < 0 )
          {
            if ( v49 == -1071774919 )
              break;
            v55 = WdLogNewEntry5_WdAssertion(v51, v50, v52, v53);
            WdLogEvent5_WdAssertion(v55);
          }
          if ( v54 == -1071774919 )
            break;
          v52 = v115;
          if ( v115 == -1 )
            break;
          if ( v115 == v47 )
          {
            Path = DMMVIDPNTOPOLOGY::FindPath(v39, v6, v115);
            if ( !Path )
            {
              v67 = WdLogNewEntry5_WdAssertion(v63, v62, v65, v66);
              WdLogEvent5_WdAssertion(v67);
            }
            v68 = *((_DWORD *)Path + 28);
            v126 = v68;
            if ( v68 == D3DKMDT_VPPS_UNPINNED )
            {
              v69 = WdLogNewEntry5_WdAssertion(v63, v62, v65, v66);
              *(_QWORD *)(v69 + 24) = 8460LL;
              WdLogEvent5_WdAssertion(v69);
            }
            if ( ((v68 - 1) & 0xFFFFFFFD) != 0 && (*((_DWORD *)Path + 30) & 4) != 0 )
            {
              if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling(Path) < 0 )
              {
                v74 = WdLogNewEntry5_WdAssertion(v71, v70, v72, v73);
                WdLogEvent5_WdAssertion(v74);
              }
              v75 = DMMVIDPNPRESENTPATH::PinContentScaling(Path, D3DKMDT_VPPS_STRETCHED);
              v77 = v75;
              if ( v75 < 0 )
              {
                v82 = (_QWORD *)WdLogNewEntry5_WdError(v76);
                v82[3] = v6;
                if ( !this[1] )
                {
                  v83 = WdLogNewEntry5_WdAssertion(v79, v78, v80, v81);
                  WdLogEvent5_WdAssertion(v83);
                }
                v82[4] = this[1];
                v82[5] = v77;
                WdLogEvent5_WdError(v82);
                if ( (int)DMMVIDPNPRESENTPATH::PinContentScaling(Path, v126) < 0 )
                {
                  v88 = WdLogNewEntry5_WdAssertion(v85, v84, v86, v87);
                  WdLogEvent5_WdAssertion(v88);
                }
              }
              v48 = 1;
            }
            v61 = v124;
            LOBYTE(v126) = 1;
          }
          else
          {
            if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v39, v6, v115, 0LL) < 0 )
            {
              v60 = WdLogNewEntry5_WdAssertion(v57, v56, v58, v59);
              WdLogEvent5_WdAssertion(v60);
            }
            v61 = v15 - 1;
            v48 = 1;
          }
          v15 = v61 + 1;
        }
        v89 = v118;
        v90 = 0LL;
        if ( !v48 )
          goto LABEL_69;
        if ( (_BYTE)v126 )
        {
          if ( !this[1] )
          {
            v91 = WdLogNewEntry5_WdAssertion(v51, v50, v52, v53);
            WdLogEvent5_WdAssertion(v91);
          }
          v92 = this[1];
          if ( *(_QWORD *)(*((_QWORD *)v92 + 2) + 1984LL) )
          {
            if ( !v92 )
            {
              v93 = WdLogNewEntry5_WdAssertion(0LL, v50, v52, v53);
              WdLogEvent5_WdAssertion(v93);
            }
            DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation((DXGADAPTER **)this[1], v6);
            if ( !DisplayedPrimaryAllocation || (v90 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2)) == 0LL )
              DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v39, v6);
          }
        }
        else
        {
          v119 = 0LL;
          if ( (unsigned int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v39, v6, &v119) != -1071774919 )
          {
            v99 = WdLogNewEntry5_WdAssertion(v96, v95, v97, v98);
            WdLogEvent5_WdAssertion(v99);
          }
        }
        v121 &= 0xF8u;
        v122 = -2;
        v120 = v120 & 0xFFFFFF00 | 0x41;
        v100 = VIDPN_MGR::CommitVidPn(
                 (VIDPN_MGR *)this,
                 v89,
                 v90,
                 v6,
                 D3DKMDT_MCC_IGNORE,
                 (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v120,
                 0LL,
                 (unsigned __int8 *)&v126);
        v105 = v100;
        if ( v100 < 0 )
        {
          v106 = (_QWORD *)WdLogNewEntry5_WdWarning(v102, v101, v103, v104);
          v10 = v6;
          v106[3] = v89;
          v106[4] = v6;
          v106[5] = v105;
          WdLogEvent5_WdWarning(v106);
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v123);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v118, 0LL);
        }
        else
        {
LABEL_69:
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v123);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v118, 0LL);
          v10 = v6;
        }
        v7 = v125;
      }
      else
      {
        v38 = WdLogNewEntry5_WdError(v35);
        *(_QWORD *)(v38 + 24) = this;
        WdLogEvent5_WdError(v38);
        auto_rc<DMMVIDPN>::reset((__int64 *)&v118, 0LL);
      }
    }
    if ( !this[1] )
    {
      v107 = WdLogNewEntry5_WdAssertion(v18, v17, v13, v14);
      WdLogEvent5_WdAssertion(v107);
    }
    v21 = ADAPTER_DISPLAY::DestroyCddAllocations(this[1], v7, v6);
    v23 = v21;
    if ( v21 < 0 )
    {
      v110 = (_QWORD *)WdLogNewEntry5_WdError(v22);
      v110[3] = v10;
      if ( !this[1] )
      {
        v113 = WdLogNewEntry5_WdAssertion(v109, v108, v111, v112);
        WdLogEvent5_WdAssertion(v113);
      }
      v110[4] = this[1];
      v110[5] = v23;
      WdLogEvent5_WdError(v110);
    }
    return 0LL;
  }
}
