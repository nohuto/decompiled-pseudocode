/*
 * XREFs of ?_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01842B4
 * Callers:
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00ADD28 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008F504 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A58F0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5940 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00DC850 (-RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C017E808 (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AugmentVidPnTopology(
        struct DMMVIDPNTOPOLOGY *a1,
        struct _D3DKMT_AUGMENT_CDSJ *a2)
{
  __int64 v3; // r14
  VIDPN_MGR *v5; // rbx
  unsigned __int8 v6; // r9
  char *v7; // rdx
  unsigned __int8 v8; // r9
  char *v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  unsigned __int16 v13; // r12
  __int64 v14; // rdx
  int v15; // r9d
  char *v16; // rsi
  char *v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  int FirstAvailableTarget; // eax
  __int64 v24; // rcx
  __int64 v25; // rbp
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  _QWORD *v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // [rsp+20h] [rbp-78h]
  __int64 v50; // [rsp+20h] [rbp-78h]
  _BYTE v51[24]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v52[24]; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v53; // [rsp+A0h] [rbp+8h] BYREF
  int v54; // [rsp+A8h] [rbp+10h] BYREF

  LODWORD(v3) = -1;
  *((_DWORD *)a2 + 4) = -1;
  *((_DWORD *)a2 + 5) = -2;
  v5 = *(VIDPN_MGR **)(ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160) + 48);
  if ( a1 )
    v7 = (char *)a1 + 56;
  else
    v7 = 0LL;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v52, (__int64)v7, 1u, v6, v49, 1uLL);
  if ( a1 )
    v9 = (char *)a1 + 56;
  else
    v9 = 0LL;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v51, (__int64)v9, 2u, v8, v50, 1uLL);
  v10 = (int)DMMVIDPNTOPOLOGY::RestorePresentPathsFromLkgTopology(a1, *((_DWORD *)a2 + 3));
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v51);
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v52);
  if ( (int)v10 < 0 )
  {
    if ( (_DWORD)v10 != -1073741275 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      v19[3] = v10;
      if ( !*((_QWORD *)v5 + 1) )
      {
        v20 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v20);
      }
      v21 = *((_QWORD *)v5 + 1);
      v19[4] = (int)HIDWORD(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 252LL));
      if ( !*((_QWORD *)v5 + 1) )
      {
        v22 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v22);
      }
      v19[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 16LL) + 252LL);
      v19[6] = *((unsigned int *)a2 + 3);
      WdLogEvent5_WdError(v19);
    }
    v54 = -2;
    LODWORD(v10) = -1071774925;
    v53 = -1;
    while ( 1 )
    {
      FirstAvailableTarget = DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(a1, v3, 1, &v53, &v54);
      v25 = FirstAvailableTarget;
      if ( FirstAvailableTarget == -1071774925 )
        break;
      if ( FirstAvailableTarget < 0 )
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdError(v24);
        v34[3] = v25;
        if ( !*((_QWORD *)v5 + 1) )
        {
          v40 = WdLogNewEntry5_WdAssertion(v39);
          WdLogEvent5_WdAssertion(v40);
        }
        v41 = *((_QWORD *)v5 + 1);
        v34[4] = (int)HIDWORD(*(_QWORD *)(*(_QWORD *)(v41 + 16) + 252LL));
        if ( !*((_QWORD *)v5 + 1) )
        {
          v42 = WdLogNewEntry5_WdAssertion(v41);
          WdLogEvent5_WdAssertion(v42);
        }
        v34[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 16LL) + 252LL);
        v38 = *((unsigned int *)a2 + 3);
LABEL_46:
        v34[6] = v38;
        WdLogEvent5_WdError(v34);
        return (unsigned int)v25;
      }
      v3 = v53;
      v26 = VIDPN_MGR::AddPathToVidPnTopology(
              v5,
              a1,
              *((_DWORD *)a2 + 3),
              v53,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              0xFFFFu,
              0,
              D3DKMDT_MCC_ENFORCE);
      v25 = v26;
      if ( v26 != -1071774975 )
      {
        if ( v26 < 0 )
        {
          v34 = (_QWORD *)WdLogNewEntry5_WdError(v27);
          v34[3] = v25;
          if ( !*((_QWORD *)v5 + 1) )
          {
            v35 = WdLogNewEntry5_WdAssertion(v33);
            WdLogEvent5_WdAssertion(v35);
          }
          v36 = *((_QWORD *)v5 + 1);
          v34[4] = (int)HIDWORD(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 252LL));
          if ( !*((_QWORD *)v5 + 1) )
          {
            v37 = WdLogNewEntry5_WdAssertion(v36);
            WdLogEvent5_WdAssertion(v37);
          }
          v34[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 16LL) + 252LL);
          v38 = *((unsigned int *)a2 + 3);
          v34[7] = v3;
          goto LABEL_46;
        }
        *((_DWORD *)a2 + 5) = v54;
        *((_DWORD *)a2 + 4) = v3;
        return (unsigned int)v25;
      }
      v29 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v27);
      if ( !*((_QWORD *)v5 + 1) )
      {
        v30 = WdLogNewEntry5_WdAssertion(v28);
        WdLogEvent5_WdAssertion(v30);
      }
      v31 = *((_QWORD *)v5 + 1);
      v29[3] = (int)HIDWORD(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 252LL));
      if ( !*((_QWORD *)v5 + 1) )
      {
        v32 = WdLogNewEntry5_WdAssertion(v31);
        WdLogEvent5_WdAssertion(v32);
      }
      v29[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 16LL) + 252LL);
      v29[5] = *((unsigned int *)a2 + 3);
      v29[6] = v3;
      WdLogEvent5_WdDmmEvent(v29);
    }
    v45 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v24);
    if ( !*((_QWORD *)v5 + 1) )
    {
      v46 = WdLogNewEntry5_WdAssertion(v44);
      WdLogEvent5_WdAssertion(v46);
    }
    v47 = *((_QWORD *)v5 + 1);
    v45[3] = (int)HIDWORD(*(_QWORD *)(*(_QWORD *)(v47 + 16) + 252LL));
    if ( !*((_QWORD *)v5 + 1) )
    {
      v48 = WdLogNewEntry5_WdAssertion(v47);
      WdLogEvent5_WdAssertion(v48);
    }
    v45[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 16LL) + 252LL);
    v45[5] = *((unsigned int *)a2 + 3);
    WdLogEvent5_WdDmmEvent(v45);
  }
  else
  {
    v12 = (_QWORD *)((char *)a1 + 24);
    v13 = -1;
    if ( (_QWORD *)*v12 != v12 )
    {
      v14 = *v12 - 8LL;
      if ( v14 )
      {
        v15 = *((_DWORD *)a2 + 3);
        v16 = (char *)a1 + 24;
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)(v14 + 88) + 24LL) == v15 && *(_WORD *)(v14 + 108) < v13 )
          {
            v13 = *(_WORD *)(v14 + 108);
            *((_DWORD *)a2 + 4) = *(_DWORD *)(*(_QWORD *)(v14 + 96) + 24LL);
            *((_DWORD *)a2 + 5) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 96) + 96LL) + 72LL);
          }
          v17 = *(char **)(v14 + 8);
          if ( v17 == v16 )
            v14 = 0LL;
          else
            v14 = (__int64)(v17 - 8);
        }
        while ( v14 );
      }
    }
  }
  return (unsigned int)v10;
}
