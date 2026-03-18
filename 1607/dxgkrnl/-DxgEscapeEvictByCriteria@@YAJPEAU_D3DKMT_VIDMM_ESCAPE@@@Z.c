/*
 * XREFs of ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0168520
 * Callers:
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgEscapeEvictByCriteria(struct _D3DKMT_VIDMM_ESCAPE *a1)
{
  __int64 v2; // rax
  __int64 CurrentProcess; // rax
  __int64 v4; // rdx
  DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v6; // rcx
  __int64 v7; // rax

  if ( a1->Type != D3DKMT_VIDMMESCAPETYPE_EVICT_BY_CRITERIA )
  {
    v2 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v2 + 24) = 318LL;
    WdLogEvent5_WdAssertion(v2);
  }
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v4);
  if ( ProcessDxgProcess )
    return DXGPROCESS::EvictAllResources(ProcessDxgProcess, &a1->EvictByCriteria);
  v7 = WdLogNewEntry5_WdError(v6);
  *(_QWORD *)(v7 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v7);
  return 3221225485LL;
}
