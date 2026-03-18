/*
 * XREFs of ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C008F004
 * Callers:
 *     DmmRemovePresentPathFromVidPnSourceInActiveVidPn @ 0x1C00B17E8 (DmmRemovePresentPathFromVidPnSourceInActiveVidPn.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C0007A0C (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000913C (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C000FB78 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008DC58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C008DD50 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C009060C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C0090F40 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0091214 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0091398 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C009B578 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C009B794 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C009B93C (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A58F0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5940 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 */

__int64 __fastcall VIDPN_MGR::RemovePresentPathFromVidPnSourceInActiveVidPn(
        VIDPN_MGR *this,
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
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  DMMVIDPNTOPOLOGY *v31; // r15
  char *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // ecx
  unsigned int v36; // ebx
  char v37; // r12
  int v38; // eax
  __int64 v39; // rcx
  int v40; // esi
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned int v44; // r13d
  __int64 v45; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v47; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v48; // r13d
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // r12
  __int64 v55; // rcx
  _QWORD *v56; // r13
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  struct DMMVIDPN *v60; // rbx
  void *v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rsi
  _QWORD *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rcx
  _QWORD *v77; // rbx
  __int64 v78; // rax
  unsigned int v79; // [rsp+40h] [rbp-31h] BYREF
  unsigned int v80; // [rsp+44h] [rbp-2Dh] BYREF
  _BYTE v81[8]; // [rsp+48h] [rbp-29h] BYREF
  struct DMMVIDPN *v82; // [rsp+50h] [rbp-21h] BYREF
  unsigned __int64 v83; // [rsp+58h] [rbp-19h] BYREF
  unsigned int v84; // [rsp+60h] [rbp-11h] BYREF
  char v85; // [rsp+64h] [rbp-Dh]
  int v86; // [rsp+68h] [rbp-9h]
  _BYTE v87[80]; // [rsp+70h] [rbp-1h] BYREF
  unsigned int v88; // [rsp+D0h] [rbp+5Fh] BYREF
  struct DXGDEVICE *v89; // [rsp+D8h] [rbp+67h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v90; // [rsp+E0h] [rbp+6Fh] BYREF

  v89 = a2;
  v6 = a3;
  v7 = a2;
  v9 = WdLogNewEntry5_WdDmmEvent();
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
  if ( **((struct _KTHREAD ***)this + 5) != CurrentThread )
  {
    v21 = WdLogNewEntry5_WdAssertion(CurrentThread);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v23 = WdLogNewEntry5_WdAssertion(CurrentThread);
    WdLogEvent5_WdAssertion(v23);
  }
  v14 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(*(_QWORD *)(v14 + 16) + 284LL) & 0x100) != 0 )
    goto LABEL_11;
  if ( !v14 )
  {
    v24 = WdLogNewEntry5_WdAssertion(CurrentThread);
    WdLogEvent5_WdAssertion(v24);
  }
  v15 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*((ADAPTER_DISPLAY **)this + 1), v6, 0, 0x40u, v7, 1u);
  v16 = v15;
  if ( v15 >= 0 )
  {
LABEL_11:
    if ( a4 )
    {
      v82 = 0LL;
      if ( (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(this, (__int64 *)&v82) >= 0 )
      {
        v31 = (struct DMMVIDPN *)((char *)v82 + 96);
        v32 = (char *)v82 + 152;
        if ( v82 == (struct DMMVIDPN *)-96LL )
          v32 = 0LL;
        LOBYTE(v29) = 2;
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v87, v32, v29);
        v79 = -1;
        v88 = -1;
        if ( a5 )
        {
          if ( !*((_QWORD *)this + 1) )
          {
            v34 = WdLogNewEntry5_WdAssertion(v33);
            WdLogEvent5_WdAssertion(v34);
          }
          ADAPTER_DISPLAY::GetPrimaryPath(
            *((ADAPTER_DISPLAY **)this + 1),
            &v80,
            &v88,
            (enum _DXGK_PRIMARY_TARGET_TYPE *)v81);
          v35 = v88;
          if ( v80 != (_DWORD)v6 )
            v35 = -1;
          v79 = v35;
        }
        v36 = v79;
        v37 = 0;
        LOBYTE(v90) = 0;
        while ( 1 )
        {
          v88 = v12;
          v79 = -1;
          v38 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v31, v6, v12, &v79);
          v40 = v38;
          if ( v38 < 0 )
          {
            if ( v38 == -1071774919 )
              break;
            v41 = WdLogNewEntry5_WdAssertion(v39);
            WdLogEvent5_WdAssertion(v41);
          }
          if ( v40 == -1071774919 || v79 == -1 )
            break;
          if ( v79 == v36 )
          {
            Path = DMMVIDPNTOPOLOGY::FindPath(v31, v6, v79);
            if ( !Path )
            {
              v47 = WdLogNewEntry5_WdAssertion(v45);
              WdLogEvent5_WdAssertion(v47);
            }
            v48 = *((_DWORD *)Path + 28);
            v90 = v48;
            if ( v48 == D3DKMDT_VPPS_UNPINNED )
            {
              v49 = WdLogNewEntry5_WdAssertion(v45);
              *(_QWORD *)(v49 + 24) = 8533LL;
              WdLogEvent5_WdAssertion(v49);
            }
            if ( ((v48 - 1) & 0xFFFFFFFD) != 0 && (*((_DWORD *)Path + 30) & 4) != 0 )
            {
              if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling(Path) < 0 )
              {
                v51 = WdLogNewEntry5_WdAssertion(v50);
                WdLogEvent5_WdAssertion(v51);
              }
              v52 = DMMVIDPNPRESENTPATH::PinContentScaling(Path, D3DKMDT_VPPS_STRETCHED);
              v54 = v52;
              if ( v52 < 0 )
              {
                v56 = (_QWORD *)WdLogNewEntry5_WdError(v53);
                v56[3] = v6;
                if ( !*((_QWORD *)this + 1) )
                {
                  v57 = WdLogNewEntry5_WdAssertion(v55);
                  WdLogEvent5_WdAssertion(v57);
                }
                v56[4] = *((_QWORD *)this + 1);
                v56[5] = v54;
                WdLogEvent5_WdError(v56);
                if ( (int)DMMVIDPNPRESENTPATH::PinContentScaling(Path, v90) < 0 )
                {
                  v59 = WdLogNewEntry5_WdAssertion(v58);
                  WdLogEvent5_WdAssertion(v59);
                }
              }
              v37 = 1;
            }
            v44 = v88;
            LOBYTE(v90) = 1;
          }
          else
          {
            if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v31, v6, v79, 0LL) < 0 )
            {
              v43 = WdLogNewEntry5_WdAssertion(v42);
              WdLogEvent5_WdAssertion(v43);
            }
            v44 = v12 - 1;
            v37 = 1;
          }
          v12 = v44 + 1;
        }
        v60 = v82;
        v61 = 0LL;
        if ( !v37 )
          goto LABEL_69;
        if ( (_BYTE)v90 )
        {
          if ( !*((_QWORD *)this + 1) )
          {
            v62 = WdLogNewEntry5_WdAssertion(v39);
            WdLogEvent5_WdAssertion(v62);
          }
          v63 = *((_QWORD *)this + 1);
          if ( *(_QWORD *)(*(_QWORD *)(v63 + 16) + 1992LL) )
          {
            if ( !v63 )
            {
              v64 = WdLogNewEntry5_WdAssertion(0LL);
              WdLogEvent5_WdAssertion(v64);
            }
            DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                           *((ADAPTER_DISPLAY **)this + 1),
                                           v6);
            if ( !DisplayedPrimaryAllocation || (v61 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2)) == 0LL )
              DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v31, v6);
          }
        }
        else
        {
          v83 = 0LL;
          if ( (unsigned int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v31, v6, &v83) != -1071774919 )
          {
            v67 = WdLogNewEntry5_WdAssertion(v66);
            WdLogEvent5_WdAssertion(v67);
          }
        }
        v85 &= 0xF8u;
        v86 = -2;
        v84 = v84 & 0xFFFFFF00 | 0x41;
        v68 = VIDPN_MGR::CommitVidPn(
                (__int64)this,
                v60,
                v61,
                v6,
                D3DKMDT_MCC_IGNORE,
                (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v84,
                0LL,
                (unsigned __int8 *)&v90);
        v73 = v68;
        if ( v68 < 0 )
        {
          v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v70, v69, v71, v72);
          v10 = v6;
          v74[3] = v60;
          v74[4] = v6;
          v74[5] = v73;
          WdLogEvent5_WdWarning(v74);
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v87);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v82, 0LL);
        }
        else
        {
LABEL_69:
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v87);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v82, 0LL);
          v10 = v6;
        }
        v7 = v89;
      }
      else
      {
        v30 = WdLogNewEntry5_WdError(v28);
        *(_QWORD *)(v30 + 24) = this;
        WdLogEvent5_WdError(v30);
        auto_rc<DMMVIDPN>::reset((__int64 *)&v82, 0LL);
      }
    }
    if ( !*((_QWORD *)this + 1) )
    {
      v75 = WdLogNewEntry5_WdAssertion(CurrentThread);
      WdLogEvent5_WdAssertion(v75);
    }
    v17 = ADAPTER_DISPLAY::DestroyCddAllocations(*((ADAPTER_DISPLAY **)this + 1), v7, v6);
    v19 = v17;
    if ( v17 < 0 )
    {
      v77 = (_QWORD *)WdLogNewEntry5_WdError(v18);
      v77[3] = v10;
      if ( !*((_QWORD *)this + 1) )
      {
        v78 = WdLogNewEntry5_WdAssertion(v76);
        WdLogEvent5_WdAssertion(v78);
      }
      v77[4] = *((_QWORD *)this + 1);
      v77[5] = v19;
      WdLogEvent5_WdError(v77);
    }
    return 0LL;
  }
  else
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(CurrentThread);
    v26[3] = v6;
    if ( !*((_QWORD *)this + 1) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v25);
      WdLogEvent5_WdAssertion(v27);
    }
    v26[4] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    v26[5] = v16;
    WdLogEvent5_WdError(v26);
    return (unsigned int)v16;
  }
}
