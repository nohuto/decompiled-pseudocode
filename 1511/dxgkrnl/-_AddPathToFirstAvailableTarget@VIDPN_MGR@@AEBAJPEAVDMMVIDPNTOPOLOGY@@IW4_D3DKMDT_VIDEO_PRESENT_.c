/*
 * XREFs of ?_AddPathToFirstAvailableTarget@VIDPN_MGR@@AEBAJPEAVDMMVIDPNTOPOLOGY@@IW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GE@Z @ 0x1C0179358
 * Callers:
 *     ?_DetermineInitialVidPnTopology@VIDPN_MGR@@AEAAJPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C0179498 (-_DetermineInitialVidPnTopology@VIDPN_MGR@@AEAAJPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 * Callees:
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008F504 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C017E808 (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 */

__int64 __fastcall VIDPN_MGR::_AddPathToFirstAvailableTarget(
        VIDPN_MGR *a1,
        struct DMMVIDPNTOPOLOGY *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v7; // rbp
  __int64 v8; // rbx
  int FirstAvailableTarget; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v19; // rax

  LODWORD(v7) = -1;
  v8 = a3;
  a7 = -1;
  while ( 1 )
  {
    FirstAvailableTarget = DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(a2, (unsigned int)v7, 2LL, &a7, 0LL);
    v13 = FirstAvailableTarget;
    if ( FirstAvailableTarget == -1071774925 )
      break;
    if ( FirstAvailableTarget < 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v17[3] = 2LL;
      v17[4] = a2;
      v17[5] = v8;
LABEL_10:
      v17[6] = v13;
      WdLogEvent5_WdError(v17);
      return (unsigned int)v13;
    }
    v7 = a7;
    v14 = VIDPN_MGR::AddPathToVidPnTopology(a1, a2, v8, a7, D3DKMDT_VPPI_PRIMARY, 0, 1u, D3DKMDT_MCC_ENFORCE);
    v13 = v14;
    if ( v14 != -1071774975 )
    {
      if ( v14 >= 0 )
        return 0LL;
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v15);
      v17[3] = v8;
      v17[4] = v7;
      v17[5] = a2;
      goto LABEL_10;
    }
    v16 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v15);
    v16[3] = v8;
    v16[4] = v7;
    v16[5] = -1071774975LL;
    WdLogEvent5_WdDmmEvent(v16);
  }
  v19 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v12);
  v19[3] = 2LL;
  v19[4] = a2;
  v19[5] = v8;
  WdLogEvent5_WdDmmEvent(v19);
  return 3223192371LL;
}
