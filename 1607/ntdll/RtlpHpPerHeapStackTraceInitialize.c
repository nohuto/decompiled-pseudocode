/*
 * XREFs of RtlpHpPerHeapStackTraceInitialize @ 0x1800F7FA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18002A760 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpMetadataAlloc @ 0x180050764 (RtlpHpMetadataAlloc.c)
 */

__int64 __fastcall RtlpHpPerHeapStackTraceInitialize(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax

  v4 = 0;
  if ( (int)RtlRunOnceExecuteOnce(
              &RtlpHpMetadataHeapInitVar,
              (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpHpMetadataHeapInit,
              0LL,
              0LL) >= 0
    && (int)RtlRunOnceExecuteOnce(
              &RtlpHpStackDbInitVar,
              (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpHpStackDbInitialize,
              0LL,
              0LL) >= 0 )
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
