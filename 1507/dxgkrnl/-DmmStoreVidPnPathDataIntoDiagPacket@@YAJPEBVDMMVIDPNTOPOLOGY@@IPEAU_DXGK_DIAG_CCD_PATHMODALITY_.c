/*
 * XREFs of ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0172DA4
 * Callers:
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C017297C (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@@Z @ 0x1C0172AB4 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_ACTIVE_VIDPN_INVALIDATION_RE.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00ADF7C (--$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPR.c)
 */

__int64 __fastcall DmmStoreVidPnPathDataIntoDiagPacket(
        const struct DMMVIDPNTOPOLOGY *a1,
        unsigned int a2,
        struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR *a3)
{
  char *v3; // r15
  __int64 v4; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r13
  _QWORD *v15; // rbx
  unsigned int v17; // esi
  _QWORD *v18; // rbx
  const struct DMMVIDPNTOPOLOGY *i; // rbx
  int v20; // ecx
  __int64 v21; // rax
  const struct DMMVIDPNTOPOLOGY *v22; // rbx

  v3 = (char *)a1 + 160;
  v4 = a2;
  v9 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160) + 48);
  if ( !*(_QWORD *)(v9 + 8) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v8, v7, v10, v11);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *((unsigned int *)a1 + 10);
  v14 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
  if ( (unsigned int)v13 <= (unsigned int)v4 )
  {
    v17 = 0;
    v18 = (_QWORD *)((char *)a1 + 24);
    if ( (_QWORD *)*v18 != v18 )
    {
      for ( i = (const struct DMMVIDPNTOPOLOGY *)(*v18 - 8LL); i; ++v17 )
      {
        if ( v17 >= (unsigned int)v4 )
          break;
        *((_DWORD *)a3 + 4) = *(_DWORD *)(*((_QWORD *)i + 11) + 24LL);
        v20 = *(_DWORD *)(*((_QWORD *)i + 12) + 24LL);
        *(_DWORD *)a3 |= 0x6000u;
        *((_DWORD *)a3 + 5) = v20;
        v21 = *(_QWORD *)(v14 + 252);
        *(_DWORD *)a3 |= 0x1000u;
        *((_QWORD *)a3 + 1) = v21;
        _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR>((__int64)i, (__int64)a3);
        v22 = (const struct DMMVIDPNTOPOLOGY *)*((_QWORD *)i + 1);
        i = v22 == (const struct DMMVIDPNTOPOLOGY *)((char *)a1 + 24)
          ? 0LL
          : (const struct DMMVIDPNTOPOLOGY *)((char *)v22 - 8);
        a3 = (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR *)((char *)a3 + 128);
      }
    }
    return 0LL;
  }
  else
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v15[3] = ContainedBy<DMMVIDPN>::GetContainer((__int64)v3);
    v15[4] = v13;
    v15[5] = v4;
    WdLogEvent5_WdError(v15);
    return 3221225507LL;
  }
}
