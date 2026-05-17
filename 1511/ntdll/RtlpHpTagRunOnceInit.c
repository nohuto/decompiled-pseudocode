/*
 * XREFs of RtlpHpTagRunOnceInit @ 0x18005AF60
 * Callers:
 *     <none>
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180054420 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpMetadataAlloc @ 0x18005A854 (RtlpHpMetadataAlloc.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlpHpTagRunOnceInit(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  void *v4; // rax

  if ( (int)RtlRunOnceExecuteOnce(
              &RtlpHpMetadataHeapInitVar,
              (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpHpMetadataHeapInit,
              0LL,
              0LL) < 0 )
    return 0;
  memset(a2, 0, 0x28uLL);
  *a2 = 0LL;
  v3 = 1;
  *((_DWORD *)a2 + 2) = 0;
  a2[2] = 0LL;
  *((_DWORD *)a2 + 3) = 0;
  v4 = RtlpHpMetadataAlloc(0x2000uLL, 1);
  a2[3] = v4;
  if ( !v4 )
    return 0;
  return v3;
}
