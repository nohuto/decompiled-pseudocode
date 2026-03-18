/*
 * XREFs of ?_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C017FDEC
 * Callers:
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C005E9F8 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00968D8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0097378 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00973C8 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00CC290 (-RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C017A3A8 (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AugmentVidPnTopology(
        struct DMMVIDPNTOPOLOGY *a1,
        struct _D3DKMT_AUGMENT_CDSJ *a2)
{
  __int64 v3; // r14
  VIDPN_MGR *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  char *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  unsigned __int16 v15; // r12
  __int64 v16; // rdx
  int v17; // r9d
  char *v18; // rsi
  char *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rbp
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  int FirstAvailableTarget; // eax
  __int64 v29; // rcx
  __int64 v30; // rbp
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rbp
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  _QWORD *v44; // rsi
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  _QWORD *v61; // rsi
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // [rsp+20h] [rbp-78h]
  __int64 v69; // [rsp+20h] [rbp-78h]
  _BYTE v70[24]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v71[24]; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v72; // [rsp+A0h] [rbp+8h] BYREF
  int v73; // [rsp+A8h] [rbp+10h] BYREF

  LODWORD(v3) = -1;
  *((_DWORD *)a2 + 4) = -1;
  *((_DWORD *)a2 + 5) = -2;
  v5 = *(VIDPN_MGR **)(ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160) + 48);
  if ( a1 )
    v8 = (char *)a1 + 56;
  else
    v8 = 0LL;
  LOBYTE(v6) = 1;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v71, (__int64)v8, v6, v7, v68, 1uLL);
  if ( a1 )
    v11 = (char *)a1 + 56;
  else
    v11 = 0LL;
  LOBYTE(v9) = 2;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v70, (__int64)v11, v9, v10, v69, 1uLL);
  v12 = (int)DMMVIDPNTOPOLOGY::RestorePresentPathsFromLkgTopology(a1, *((_DWORD *)a2 + 3));
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v70);
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v71);
  if ( (int)v12 < 0 )
  {
    if ( (_DWORD)v12 != -1073741275 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v22[3] = v12;
      if ( !*((_QWORD *)v5 + 1) )
      {
        v25 = WdLogNewEntry5_WdAssertion(v21, v20, v23, v24);
        WdLogEvent5_WdAssertion(v25);
      }
      v26 = *((_QWORD *)v5 + 1);
      v22[4] = (int)HIDWORD(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 252LL));
      if ( !*((_QWORD *)v5 + 1) )
      {
        v27 = WdLogNewEntry5_WdAssertion(v26, v20, v23, v24);
        WdLogEvent5_WdAssertion(v27);
      }
      v22[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 16LL) + 252LL);
      v22[6] = *((unsigned int *)a2 + 3);
      WdLogEvent5_WdError(v22);
    }
    v73 = -2;
    LODWORD(v12) = -1071774925;
    v72 = -1;
    while ( 1 )
    {
      FirstAvailableTarget = DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(a1, (unsigned int)v3, 1LL, &v72, &v73);
      v30 = FirstAvailableTarget;
      if ( FirstAvailableTarget == -1071774925 )
        break;
      if ( FirstAvailableTarget < 0 )
      {
        v44 = (_QWORD *)WdLogNewEntry5_WdError(v29);
        v44[3] = v30;
        if ( !*((_QWORD *)v5 + 1) )
        {
          v55 = WdLogNewEntry5_WdAssertion(v52, v51, v53, v54);
          WdLogEvent5_WdAssertion(v55);
        }
        v56 = *((_QWORD *)v5 + 1);
        v44[4] = (int)HIDWORD(*(_QWORD *)(*(_QWORD *)(v56 + 16) + 252LL));
        if ( !*((_QWORD *)v5 + 1) )
        {
          v57 = WdLogNewEntry5_WdAssertion(v56, v51, v53, v54);
          WdLogEvent5_WdAssertion(v57);
        }
        v44[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 16LL) + 252LL);
        v50 = *((unsigned int *)a2 + 3);
LABEL_46:
        v44[6] = v50;
        WdLogEvent5_WdError(v44);
        return (unsigned int)v30;
      }
      v3 = v72;
      v31 = VIDPN_MGR::AddPathToVidPnTopology(
              v5,
              a1,
              *((unsigned int *)a2 + 3),
              v72,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              0xFFFFu,
              0,
              D3DKMDT_MCC_ENFORCE);
      v30 = v31;
      if ( v31 != -1071774975 )
      {
        if ( v31 < 0 )
        {
          v44 = (_QWORD *)WdLogNewEntry5_WdError(v32);
          v44[3] = v30;
          if ( !*((_QWORD *)v5 + 1) )
          {
            v47 = WdLogNewEntry5_WdAssertion(v43, v42, v45, v46);
            WdLogEvent5_WdAssertion(v47);
          }
          v48 = *((_QWORD *)v5 + 1);
          v44[4] = (int)HIDWORD(*(_QWORD *)(*(_QWORD *)(v48 + 16) + 252LL));
          if ( !*((_QWORD *)v5 + 1) )
          {
            v49 = WdLogNewEntry5_WdAssertion(v48, v42, v45, v46);
            WdLogEvent5_WdAssertion(v49);
          }
          v44[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 16LL) + 252LL);
          v50 = *((unsigned int *)a2 + 3);
          v44[7] = v3;
          goto LABEL_46;
        }
        *((_DWORD *)a2 + 5) = v73;
        *((_DWORD *)a2 + 4) = v3;
        return (unsigned int)v30;
      }
      v35 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v32);
      if ( !*((_QWORD *)v5 + 1) )
      {
        v38 = WdLogNewEntry5_WdAssertion(v34, v33, v36, v37);
        WdLogEvent5_WdAssertion(v38);
      }
      v39 = *((_QWORD *)v5 + 1);
      v40 = *(_QWORD *)(v39 + 16);
      v35[3] = (int)HIDWORD(*(_QWORD *)(v40 + 252));
      if ( !*((_QWORD *)v5 + 1) )
      {
        v41 = WdLogNewEntry5_WdAssertion(v39, v40, v36, v37);
        WdLogEvent5_WdAssertion(v41);
      }
      v35[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 16LL) + 252LL);
      v35[5] = *((unsigned int *)a2 + 3);
      v35[6] = v3;
      WdLogEvent5_WdDmmEvent(v35);
    }
    v61 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v29);
    if ( !*((_QWORD *)v5 + 1) )
    {
      v64 = WdLogNewEntry5_WdAssertion(v60, v59, v62, v63);
      WdLogEvent5_WdAssertion(v64);
    }
    v65 = *((_QWORD *)v5 + 1);
    v66 = *(_QWORD *)(v65 + 16);
    v61[3] = (int)HIDWORD(*(_QWORD *)(v66 + 252));
    if ( !*((_QWORD *)v5 + 1) )
    {
      v67 = WdLogNewEntry5_WdAssertion(v65, v66, v62, v63);
      WdLogEvent5_WdAssertion(v67);
    }
    v61[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 16LL) + 252LL);
    v61[5] = *((unsigned int *)a2 + 3);
    WdLogEvent5_WdDmmEvent(v61);
  }
  else
  {
    v14 = (_QWORD *)((char *)a1 + 24);
    v15 = -1;
    if ( (_QWORD *)*v14 != v14 )
    {
      v16 = *v14 - 8LL;
      if ( v16 )
      {
        v17 = *((_DWORD *)a2 + 3);
        v18 = (char *)a1 + 24;
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)(v16 + 88) + 24LL) == v17 && *(_WORD *)(v16 + 108) < v15 )
          {
            v15 = *(_WORD *)(v16 + 108);
            *((_DWORD *)a2 + 4) = *(_DWORD *)(*(_QWORD *)(v16 + 96) + 24LL);
            *((_DWORD *)a2 + 5) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 96) + 96LL) + 72LL);
          }
          v19 = *(char **)(v16 + 8);
          if ( v19 == v18 )
            v16 = 0LL;
          else
            v16 = (__int64)(v19 - 8);
        }
        while ( v16 );
      }
    }
  }
  return (unsigned int)v12;
}
