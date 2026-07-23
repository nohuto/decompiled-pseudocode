/*
 * XREFs of RtlpHpVirtRunOnceInit @ 0x1800EBB60
 * Callers:
 *     <none>
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180034E70 (RtlRunOnceExecuteOnce.c)
 *     memset @ 0x180098540 (memset.c)
 */

_BOOL8 __fastcall RtlpHpVirtRunOnceInit(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  memset(&RtlpHpVirtGlobalCtx, 0, 0x38uLL);
  RtlpHpVirtGlobalCtx.0 = 0LL;
  dword_180144848 = 0;
  dword_18014484C = 0;
  qword_180144850 = 0LL;
  stru_180144860.0 = 0LL;
  Parent = 0LL;
  return RtlRunOnceExecuteOnce(&RtlpHpMetadataHeapInitVar, (PRTL_RUN_ONCE_INIT_FN)RtlpHpMetadataHeapInit, 0LL, 0LL) >= 0;
}
