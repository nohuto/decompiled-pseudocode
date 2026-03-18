/*
 * XREFs of ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C012A89C
 * Callers:
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgEscapeEvictByCriteria(struct _D3DKMT_VIDMM_ESCAPE *a1)
{
  __int64 v2; // rax
  DXGPROCESS *Current; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( a1->Type != D3DKMT_VIDMMESCAPETYPE_EVICT_BY_CRITERIA )
  {
    v2 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v2 + 24) = 7522LL;
    WdLogEvent5_WdAssertion(v2);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
    return DXGPROCESS::EvictAllResources(Current, &a1->EvictByCriteria);
  v5 = WdLogNewEntry5_WdError(v4);
  *(_QWORD *)(v5 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v5);
  return 3221225485LL;
}
