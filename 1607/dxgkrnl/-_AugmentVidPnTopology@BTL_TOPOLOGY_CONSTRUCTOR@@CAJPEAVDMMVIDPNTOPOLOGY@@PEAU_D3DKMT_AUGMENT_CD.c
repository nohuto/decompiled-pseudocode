/*
 * XREFs of ?_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01AD9EC
 * Callers:
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00D5748 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C9C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0081930 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C0081990 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00845AC (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00F5468 (-RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C01A7BB0 (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AugmentVidPnTopology(
        struct DMMVIDPNTOPOLOGY *a1,
        struct _D3DKMT_AUGMENT_CDSJ *a2)
{
  __int64 v3; // r15
  VIDPN_MGR *v5; // rbx
  __int64 v6; // r9
  char *v7; // rdx
  __int64 v8; // r9
  char *v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  unsigned __int16 v19; // r13
  __int64 v20; // rdx
  int v21; // r9d
  char *v22; // rsi
  char *v23; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // r14
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  int FirstAvailableTarget; // eax
  __int64 v31; // rcx
  __int64 v32; // r14
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  _QWORD *v36; // r14
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // [rsp+20h] [rbp-50h]
  __int64 v56; // [rsp+20h] [rbp-50h]
  _BYTE v57[24]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v58[24]; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v59; // [rsp+B0h] [rbp+40h] BYREF
  int v60; // [rsp+B8h] [rbp+48h] BYREF
  int v61; // [rsp+C0h] [rbp+50h] BYREF

  LODWORD(v3) = -1;
  *((_DWORD *)a2 + 5) = -2;
  *((_DWORD *)a2 + 4) = -1;
  *((_DWORD *)a2 + 6) = -2;
  v5 = *(VIDPN_MGR **)(ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160) + 48);
  if ( a1 )
    v7 = (char *)a1 + 56;
  else
    v7 = 0LL;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v58, (__int64)v7, 1u, v6, v55, 1uLL);
  if ( a1 )
    v9 = (char *)a1 + 56;
  else
    v9 = 0LL;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v57, (__int64)v9, 2u, v8, v56, 1uLL);
  v10 = (int)DMMVIDPNTOPOLOGY::RestorePresentPathsFromLkgTopology(a1, *((_DWORD *)a2 + 3));
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v57, v11, v12, v13);
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v58, v14, v15, v16);
  if ( (int)v10 < 0 )
  {
    if ( (_DWORD)v10 != -1073741275 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdError(v17);
      v26[3] = v10;
      if ( !*((_QWORD *)v5 + 1) )
      {
        v27 = WdLogNewEntry5_WdAssertion(v25);
        WdLogEvent5_WdAssertion(v27);
      }
      v28 = *(int *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 16LL) + 272LL);
      v26[4] = v28;
      if ( !*((_QWORD *)v5 + 1) )
      {
        v29 = WdLogNewEntry5_WdAssertion(v28);
        WdLogEvent5_WdAssertion(v29);
      }
      v26[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 16LL) + 268LL);
      v26[6] = *((unsigned int *)a2 + 3);
      WdLogEvent5_WdError(v26);
    }
    v60 = -2;
    v61 = -2;
    v59 = -1;
    while ( 1 )
    {
      FirstAvailableTarget = DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(a1, v3, 1, &v59, &v60, &v61);
      v32 = FirstAvailableTarget;
      if ( FirstAvailableTarget == -1071774925 )
        break;
      if ( FirstAvailableTarget < 0 )
      {
        v41 = (_QWORD *)WdLogNewEntry5_WdError(v31);
        v41[3] = v32;
        if ( !*((_QWORD *)v5 + 1) )
        {
          v47 = WdLogNewEntry5_WdAssertion(v46);
          WdLogEvent5_WdAssertion(v47);
        }
        v48 = *(int *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 16LL) + 272LL);
        v41[4] = v48;
        if ( !*((_QWORD *)v5 + 1) )
        {
          v49 = WdLogNewEntry5_WdAssertion(v48);
          WdLogEvent5_WdAssertion(v49);
        }
        v41[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 16LL) + 268LL);
        v45 = *((unsigned int *)a2 + 3);
LABEL_46:
        v41[6] = v45;
        WdLogEvent5_WdError(v41);
        return (unsigned int)v32;
      }
      v3 = v59;
      v33 = VIDPN_MGR::AddPathToVidPnTopology(
              v5,
              a1,
              *((_DWORD *)a2 + 3),
              v59,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              0xFFFFu,
              0,
              D3DKMDT_MCC_ENFORCE);
      v32 = v33;
      if ( v33 != -1071774975 )
      {
        if ( v33 < 0 )
        {
          v41 = (_QWORD *)WdLogNewEntry5_WdError(v34);
          v41[3] = v32;
          if ( !*((_QWORD *)v5 + 1) )
          {
            v42 = WdLogNewEntry5_WdAssertion(v40);
            WdLogEvent5_WdAssertion(v42);
          }
          v43 = *(int *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 16LL) + 272LL);
          v41[4] = v43;
          if ( !*((_QWORD *)v5 + 1) )
          {
            v44 = WdLogNewEntry5_WdAssertion(v43);
            WdLogEvent5_WdAssertion(v44);
          }
          v41[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 16LL) + 268LL);
          v45 = *((unsigned int *)a2 + 3);
          v41[7] = v3;
          goto LABEL_46;
        }
        *((_DWORD *)a2 + 5) = v60;
        *((_DWORD *)a2 + 6) = v61;
        *((_DWORD *)a2 + 4) = v3;
        return (unsigned int)v32;
      }
      v36 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v34);
      if ( !*((_QWORD *)v5 + 1) )
      {
        v37 = WdLogNewEntry5_WdAssertion(v35);
        WdLogEvent5_WdAssertion(v37);
      }
      v38 = *(int *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 16LL) + 272LL);
      v36[3] = v38;
      if ( !*((_QWORD *)v5 + 1) )
      {
        v39 = WdLogNewEntry5_WdAssertion(v38);
        WdLogEvent5_WdAssertion(v39);
      }
      v36[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 16LL) + 268LL);
      v36[5] = *((unsigned int *)a2 + 3);
      v36[6] = v3;
      WdLogEvent5_WdDmmEvent(v36);
    }
    v51 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v31);
    if ( !*((_QWORD *)v5 + 1) )
    {
      v52 = WdLogNewEntry5_WdAssertion(v50);
      WdLogEvent5_WdAssertion(v52);
    }
    v53 = *(int *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 16LL) + 272LL);
    v51[3] = v53;
    if ( !*((_QWORD *)v5 + 1) )
    {
      v54 = WdLogNewEntry5_WdAssertion(v53);
      WdLogEvent5_WdAssertion(v54);
    }
    v51[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 16LL) + 268LL);
    v51[5] = *((unsigned int *)a2 + 3);
    WdLogEvent5_WdDmmEvent(v51);
    return 3223192371LL;
  }
  else
  {
    v18 = (_QWORD *)((char *)a1 + 24);
    v19 = -1;
    if ( (_QWORD *)*v18 != v18 )
    {
      v20 = *v18 - 8LL;
      if ( v20 )
      {
        v21 = *((_DWORD *)a2 + 3);
        v22 = (char *)a1 + 24;
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)(v20 + 88) + 24LL) == v21 && *(_WORD *)(v20 + 108) < v19 )
          {
            v19 = *(_WORD *)(v20 + 108);
            *((_DWORD *)a2 + 4) = *(_DWORD *)(*(_QWORD *)(v20 + 96) + 24LL);
            *((_DWORD *)a2 + 5) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 96) + 96LL) + 72LL);
            *((_DWORD *)a2 + 6) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 96) + 96LL) + 76LL);
          }
          v23 = *(char **)(v20 + 8);
          if ( v23 == v22 )
            v20 = 0LL;
          else
            v20 = (__int64)(v23 - 8);
        }
        while ( v20 );
      }
    }
    return (unsigned int)v10;
  }
}
