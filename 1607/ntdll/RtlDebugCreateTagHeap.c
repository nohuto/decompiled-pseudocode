/*
 * XREFs of RtlDebugCreateTagHeap @ 0x1800FA590
 * Callers:
 *     RtlCreateTagHeap @ 0x180075D80 (RtlCreateTagHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180019D74 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeapHeaders @ 0x18005D2F0 (RtlpValidateHeapHeaders.c)
 *     RtlCreateTagHeap @ 0x180075D80 (RtlCreateTagHeap.c)
 *     RtlpValidateHeap @ 0x180091234 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC2D0 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugCreateTagHeap(PRTL_CRITICAL_SECTION *Src, int a2, WCHAR *a3, WCHAR *a4)
{
  char v8; // si
  ULONG TagHeap; // r14d
  ULONG v10; // edi

  v8 = 0;
  TagHeap = 0;
  if ( RtlpCheckHeapSignature(Src, "RtlCreateTagHeap") )
  {
    v10 = *((_DWORD *)Src + 29) | 0x10000000 | a2;
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(Src[44]);
      v8 = 1;
      v10 |= 1u;
    }
    if ( RtlpValidateHeap((__int64)Src, 0) )
      TagHeap = RtlCreateTagHeap(Src, v10, a3, a4);
    RtlpValidateHeapHeaders((PVOID *)Src, 1);
  }
  if ( v8 )
    RtlLeaveCriticalSection(Src[44]);
  return TagHeap;
}
