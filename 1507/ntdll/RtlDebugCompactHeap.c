/*
 * XREFs of RtlDebugCompactHeap @ 0x1800EC190
 * Callers:
 *     RtlCompactHeap @ 0x180078DE0 (RtlCompactHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18003479C (RtlpCheckHeapSignature.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlCompactHeap @ 0x180078DE0 (RtlCompactHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
 *     RtlpValidateHeap @ 0x1800EDA3C (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800EE040 (RtlpValidateHeapHeaders.c)
 */

__int64 __fastcall RtlDebugCompactHeap(_DWORD *Src, unsigned int a2)
{
  char v4; // r14
  __int64 v6; // rbx
  int v7; // edi

  v4 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return (unsigned int)qword_180143D28(Src, a2);
  if ( RtlpCheckHeapSignature(Src, "RtlCompactHeap") )
  {
    v7 = Src[29] | 0x10000000 | a2;
    if ( (v7 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v4 = 1;
      v7 |= 1u;
    }
    RtlpValidateHeap(Src, 0LL);
    v6 = RtlCompactHeap((char *)Src, v7);
    RtlpValidateHeapHeaders(Src);
  }
  else
  {
    v6 = 0LL;
  }
  if ( v4 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return v6;
}
