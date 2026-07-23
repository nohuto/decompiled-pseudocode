/*
 * XREFs of RtlDebugQueryTagHeap @ 0x1800EF428
 * Callers:
 *     RtlQueryTagHeap @ 0x1800E0030 (RtlQueryTagHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002EB04 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeap @ 0x180092BC8 (RtlpValidateHeap.c)
 *     RtlQueryTagHeap @ 0x1800E0030 (RtlQueryTagHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1800E3178 (RtlpHeapExceptionFilter.c)
 */

PWSTR __fastcall RtlDebugQueryTagHeap(
        PRTL_CRITICAL_SECTION *BaseAddress,
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
  if ( RtlpCheckHeapSignature(BaseAddress, "RtlQueryTagHeap") )
  {
    v11 = *((_DWORD *)BaseAddress + 29) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(BaseAddress[44]);
      v9 = 1;
      v11 |= 1u;
    }
    if ( RtlpValidateHeap((PVOID *)BaseAddress, 0) )
      TagHeap = RtlQueryTagHeap(BaseAddress, v11, a3, a4, TagInfo);
  }
  if ( v9 )
    RtlLeaveCriticalSection(BaseAddress[44]);
  return TagHeap;
}
