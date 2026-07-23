/*
 * XREFs of RtlpHpPerHeapStackTraceInitialize @ 0x1800F7FA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18002A750 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpMetadataAlloc @ 0x180050754 (RtlpHpMetadataAlloc.c)
 */

__int64 __fastcall RtlpHpPerHeapStackTraceInitialize(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax

  v4 = 0;
  if ( RtlRunOnceExecuteOnce(&RtlpHpMetadataHeapInitVar, (PRTL_RUN_ONCE_INIT_FN)RtlpHpMetadataHeapInit, 0LL, 0LL) >= 0
    && RtlRunOnceExecuteOnce(&RtlpHpStackDbInitVar, RtlpHpStackDbInitialize, 0LL, 0LL) >= 0 )
  {
    v5 = RtlpHpMetadataAlloc(0x18uLL, 0);
    if ( v5 )
    {
      *v5 = 0LL;
      v5[1] = 0LL;
      v5[2] = 0LL;
      v4 = 1;
      *a3 = v5;
    }
  }
  return v4;
}
