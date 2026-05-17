/*
 * XREFs of RtlpHpVirtRunOnceInit @ 0x1800EBB60
 * Callers:
 *     <none>
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180034E70 (RtlRunOnceExecuteOnce.c)
 *     memset @ 0x180098540 (memset.c)
 */

_BOOL8 RtlpHpVirtRunOnceInit()
{
  memset(&RtlpHpVirtGlobalCtx, 0, 0x38uLL);
  RtlpHpVirtGlobalCtx = 0LL;
  dword_180144848 = 0;
  dword_18014484C = 0;
  qword_180144850 = 0LL;
  qword_180144860 = 0LL;
  xmmword_180144868 = 0LL;
  return (int)RtlRunOnceExecuteOnce(
                &RtlpHpMetadataHeapInitVar,
                (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpHpMetadataHeapInit,
                0LL,
                0LL) >= 0;
}
