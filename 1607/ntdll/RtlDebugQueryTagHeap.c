/*
 * XREFs of RtlDebugQueryTagHeap @ 0x1800FA938
 * Callers:
 *     RtlQueryTagHeap @ 0x1800E9310 (RtlQueryTagHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180019D74 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeap @ 0x180091234 (RtlpValidateHeap.c)
 *     RtlQueryTagHeap @ 0x1800E9310 (RtlQueryTagHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC2D0 (RtlpHeapExceptionFilter.c)
 */

PWSTR __fastcall RtlDebugQueryTagHeap(
        PRTL_CRITICAL_SECTION *HeapHandle,
        int a2,
        USHORT a3,
        BOOLEAN a4,
        PRTL_HEAP_TAG_INFO TagInfo)
{
  char v9; // si
  PWSTR TagHeap; // r14
  ULONG v11; // ebx

  v9 = 0;
  TagHeap = 0LL;
  if ( RtlpCheckHeapSignature(HeapHandle, "RtlQueryTagHeap") )
  {
    v11 = *((_DWORD *)HeapHandle + 29) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(HeapHandle[44]);
      v9 = 1;
      v11 |= 1u;
    }
    if ( RtlpValidateHeap((__int64)HeapHandle, 0) )
      TagHeap = RtlQueryTagHeap(HeapHandle, v11, a3, a4, TagInfo);
  }
  if ( v9 )
    RtlLeaveCriticalSection(HeapHandle[44]);
  return TagHeap;
}
