/*
 * XREFs of RtlDebugQueryTagHeap @ 0x1800ECC9C
 * Callers:
 *     RtlQueryTagHeap @ 0x1800D8360 (RtlQueryTagHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18003479C (RtlpCheckHeapSignature.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlQueryTagHeap @ 0x1800D8360 (RtlQueryTagHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
 *     RtlpValidateHeap @ 0x1800EDA3C (RtlpValidateHeap.c)
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
    if ( (unsigned __int8)RtlpValidateHeap(BaseAddress) )
      TagHeap = RtlQueryTagHeap(BaseAddress, v11, a3, a4, TagInfo);
  }
  if ( v9 )
    RtlLeaveCriticalSection(BaseAddress[44]);
  return TagHeap;
}
