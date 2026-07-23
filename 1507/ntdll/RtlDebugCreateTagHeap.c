/*
 * XREFs of RtlDebugCreateTagHeap @ 0x1800EC5E0
 * Callers:
 *     RtlCreateTagHeap @ 0x180003610 (RtlCreateTagHeap.c)
 * Callees:
 *     RtlCreateTagHeap @ 0x180003610 (RtlCreateTagHeap.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18003479C (RtlpCheckHeapSignature.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
 *     RtlpValidateHeap @ 0x1800EDA3C (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800EE040 (RtlpValidateHeapHeaders.c)
 */

__int64 __fastcall RtlDebugCreateTagHeap(PRTL_CRITICAL_SECTION *BaseAddress, int a2, WCHAR *a3, WCHAR *a4)
{
  char v8; // si
  ULONG TagHeap; // r14d
  ULONG v10; // edi

  v8 = 0;
  TagHeap = 0;
  if ( RtlpCheckHeapSignature(BaseAddress, "RtlCreateTagHeap") )
  {
    v10 = *((_DWORD *)BaseAddress + 29) | 0x10000000 | a2;
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(BaseAddress[44]);
      v8 = 1;
      v10 |= 1u;
    }
    if ( (unsigned __int8)RtlpValidateHeap(BaseAddress) )
      TagHeap = RtlCreateTagHeap(BaseAddress, v10, a3, a4);
    RtlpValidateHeapHeaders(BaseAddress);
  }
  if ( v8 )
    RtlLeaveCriticalSection(BaseAddress[44]);
  return TagHeap;
}
