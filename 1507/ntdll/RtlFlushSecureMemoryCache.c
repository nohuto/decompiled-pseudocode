/*
 * XREFs of RtlFlushSecureMemoryCache @ 0x1800DE8C0
 * Callers:
 *     RtlpSecMemFreeVirtualMemory @ 0x18003776C (RtlpSecMemFreeVirtualMemory.c)
 *     RtlComputeImportTableHash @ 0x1800CA930 (RtlComputeImportTableHash.c)
 *     _ResUnmapViewOfFile @ 0x1800FAB18 (_ResUnmapViewOfFile.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x180093B30 (ZwQueryVirtualMemory.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x1800DE9E0 (RtlpCallSecureMemoryCallbacks.c)
 */

char __fastcall RtlFlushSecureMemoryCache(__int64 a1, __int64 a2)
{
  int v4; // [rsp+3Ch] [rbp-1Ch]
  __int64 v5; // [rsp+40h] [rbp-18h]

  if ( RtlpSecMemListHead == (_UNKNOWN *)&RtlpSecMemListHead )
    return 0;
  if ( !a2 )
  {
    if ( (int)ZwQueryVirtualMemory() < 0 || v4 == 0x10000 )
      return 0;
    a2 = v5;
  }
  return RtlpCallSecureMemoryCallbacks(a1, a2);
}
