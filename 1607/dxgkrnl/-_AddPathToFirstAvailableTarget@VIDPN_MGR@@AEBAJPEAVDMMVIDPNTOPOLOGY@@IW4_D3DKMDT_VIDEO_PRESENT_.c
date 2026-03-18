/*
 * XREFs of ?_AddPathToFirstAvailableTarget@VIDPN_MGR@@AEBAJPEAVDMMVIDPNTOPOLOGY@@IW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GE@Z @ 0x1C01A2D34
 * Callers:
 *     ?_DetermineInitialVidPnTopology@VIDPN_MGR@@AEAAJPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C01A2E78 (-_DetermineInitialVidPnTopology@VIDPN_MGR@@AEAAJPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 * Callees:
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00845AC (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C01A7BB0 (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 */

__int64 __fastcall VIDPN_MGR::_AddPathToFirstAvailableTarget(
        VIDPN_MGR *a1,
        struct DMMVIDPNTOPOLOGY *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rbx
  int FirstAvailableTarget; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v20; // rax

  LODWORD(v7) = -1;
  v8 = a4;
  a7 = -1;
  v9 = a3;
  while ( 1 )
  {
    FirstAvailableTarget = DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(
                             a2,
                             (unsigned int)v7,
                             (unsigned int)v8,
                             &a7,
                             0LL,
                             0LL);
    v14 = FirstAvailableTarget;
    if ( FirstAvailableTarget == -1071774925 )
      break;
    if ( FirstAvailableTarget < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v18[3] = v8;
      v18[4] = a2;
      v18[5] = v9;
LABEL_10:
      v18[6] = v14;
      WdLogEvent5_WdError(v18);
      return (unsigned int)v14;
    }
    v7 = a7;
    v15 = VIDPN_MGR::AddPathToVidPnTopology(a1, a2, v9, a7, D3DKMDT_VPPI_PRIMARY, 0, 1u, D3DKMDT_MCC_ENFORCE);
    v14 = v15;
    if ( v15 != -1071774975 )
    {
      if ( v15 >= 0 )
        return 0LL;
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v18[3] = v9;
      v18[4] = v7;
      v18[5] = a2;
      goto LABEL_10;
    }
    v17 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v16);
    v17[3] = v9;
    v17[4] = v7;
    v17[5] = -1071774975LL;
    WdLogEvent5_WdDmmEvent(v17);
  }
  v20 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v13);
  v20[3] = v8;
  v20[4] = a2;
  v20[5] = v9;
  WdLogEvent5_WdDmmEvent(v20);
  return 3223192371LL;
}
