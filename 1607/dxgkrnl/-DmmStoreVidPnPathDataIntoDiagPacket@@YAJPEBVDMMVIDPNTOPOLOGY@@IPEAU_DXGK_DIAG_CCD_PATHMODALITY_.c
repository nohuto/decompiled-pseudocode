/*
 * XREFs of ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01A0F9C
 * Callers:
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C01A0B74 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@@Z @ 0x1C01A0CAC (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_ACTIVE_VIDPN_INVALIDATION_RE.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C9C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00BC048 (--$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPR.c)
 */

__int64 __fastcall DmmStoreVidPnPathDataIntoDiagPacket(
        const struct DMMVIDPNTOPOLOGY *a1,
        unsigned int a2,
        struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR *a3)
{
  char *v3; // r15
  __int64 v4; // r14
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r13
  _QWORD *v12; // rbx
  unsigned int v14; // esi
  _QWORD *v15; // rbx
  const struct DMMVIDPNTOPOLOGY *i; // rbx
  int v17; // ecx
  __int64 v18; // rax
  const struct DMMVIDPNTOPOLOGY *v19; // rbx

  v3 = (char *)a1 + 160;
  v4 = a2;
  v8 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160) + 48);
  if ( !*(_QWORD *)(v8 + 8) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((unsigned int *)a1 + 10);
  v11 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL);
  if ( (unsigned int)v10 <= (unsigned int)v4 )
  {
    v14 = 0;
    v15 = (_QWORD *)((char *)a1 + 24);
    if ( (_QWORD *)*v15 != v15 )
    {
      for ( i = (const struct DMMVIDPNTOPOLOGY *)(*v15 - 8LL); i; ++v14 )
      {
        if ( v14 >= (unsigned int)v4 )
          break;
        *((_DWORD *)a3 + 4) = *(_DWORD *)(*((_QWORD *)i + 11) + 24LL);
        v17 = *(_DWORD *)(*((_QWORD *)i + 12) + 24LL);
        *(_DWORD *)a3 |= 0x6000u;
        *((_DWORD *)a3 + 5) = v17;
        v18 = *(_QWORD *)(v11 + 268);
        *(_DWORD *)a3 |= 0x1000u;
        *((_QWORD *)a3 + 1) = v18;
        _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR>((__int64)i, (__int64)a3);
        v19 = (const struct DMMVIDPNTOPOLOGY *)*((_QWORD *)i + 1);
        i = v19 == (const struct DMMVIDPNTOPOLOGY *)((char *)a1 + 24)
          ? 0LL
          : (const struct DMMVIDPNTOPOLOGY *)((char *)v19 - 8);
        a3 = (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR *)((char *)a3 + 136);
      }
    }
    return 0LL;
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v12[3] = ContainedBy<DMMVIDPN>::GetContainer((__int64)v3);
    v12[4] = v10;
    v12[5] = v4;
    WdLogEvent5_WdError(v12);
    return 3221225507LL;
  }
}
