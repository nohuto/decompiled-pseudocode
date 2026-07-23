/*
 * XREFs of RtlpHpTagRunOnceInit @ 0x18005AF60
 * Callers:
 *     <none>
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180054420 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpMetadataAlloc @ 0x18005A854 (RtlpHpMetadataAlloc.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlpHpTagRunOnceInit(PRTL_RUN_ONCE a1, _QWORD *a2, PVOID *a3)
{
  unsigned int v4; // ebx
  void *v5; // rax

  if ( RtlRunOnceExecuteOnce(&RtlpHpMetadataHeapInitVar, (PRTL_RUN_ONCE_INIT_FN)RtlpHpMetadataHeapInit, 0LL, 0LL) < 0 )
    return 0;
  memset(a2, 0, 0x28uLL);
  *a2 = 0LL;
  v4 = 1;
  *((_DWORD *)a2 + 2) = 0;
  a2[2] = 0LL;
  *((_DWORD *)a2 + 3) = 0;
  v5 = RtlpHpMetadataAlloc(0x2000uLL, 1);
  a2[3] = v5;
  if ( !v5 )
    return 0;
  return v4;
}
