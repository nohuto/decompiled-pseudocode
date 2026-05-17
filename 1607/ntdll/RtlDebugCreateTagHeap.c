/*
 * XREFs of RtlDebugCreateTagHeap @ 0x1800FA590
 * Callers:
 *     RtlCreateTagHeap @ 0x180075D90 (RtlCreateTagHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180019D84 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeapHeaders @ 0x18005D300 (RtlpValidateHeapHeaders.c)
 *     RtlCreateTagHeap @ 0x180075D90 (RtlCreateTagHeap.c)
 *     RtlpValidateHeap @ 0x180091244 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC210 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugCreateTagHeap(_DWORD *Src, int a2, __int64 a3, _WORD *a4)
{
  char v8; // si
  unsigned int TagHeap; // r14d
  int v10; // edi

  v8 = 0;
  TagHeap = 0;
  if ( RtlpCheckHeapSignature(Src, "RtlCreateTagHeap") )
  {
    v10 = Src[29] | 0x10000000 | a2;
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v8 = 1;
      v10 |= 1u;
    }
    if ( RtlpValidateHeap((__int64)Src, 0) )
      TagHeap = RtlCreateTagHeap(Src, v10, a3, a4);
    RtlpValidateHeapHeaders((void **)Src, 1);
  }
  if ( v8 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return TagHeap;
}
