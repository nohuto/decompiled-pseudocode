/*
 * XREFs of RtlDebugCreateTagHeap @ 0x1800EF078
 * Callers:
 *     RtlCreateTagHeap @ 0x18004EF00 (RtlCreateTagHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002EB04 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeapHeaders @ 0x18004B6B0 (RtlpValidateHeapHeaders.c)
 *     RtlCreateTagHeap @ 0x18004EF00 (RtlCreateTagHeap.c)
 *     RtlpValidateHeap @ 0x180092BC8 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1800E3178 (RtlpHeapExceptionFilter.c)
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
    if ( RtlpValidateHeap((PVOID *)BaseAddress, 0) )
      TagHeap = RtlCreateTagHeap(BaseAddress, v10, a3, a4);
    RtlpValidateHeapHeaders((PVOID *)BaseAddress, 1);
  }
  if ( v8 )
    RtlLeaveCriticalSection(BaseAddress[44]);
  return TagHeap;
}
