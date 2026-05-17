/*
 * XREFs of RtlDebugCompactHeap @ 0x1800FA14C
 * Callers:
 *     RtlCompactHeap @ 0x180090A00 (RtlCompactHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180019D84 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeapHeaders @ 0x18005D300 (RtlpValidateHeapHeaders.c)
 *     RtlCompactHeap @ 0x180090A00 (RtlCompactHeap.c)
 *     RtlpValidateHeap @ 0x180091244 (RtlpValidateHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC210 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugCompactHeap(_DWORD *Src, int a2)
{
  char v4; // si
  __int64 v6; // rbx
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9

  v4 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return (unsigned int)((__int64 (__fastcall *)(_DWORD *))qword_18014C498)(Src);
  if ( RtlpCheckHeapSignature(Src, "RtlCompactHeap") )
  {
    v7 = Src[29] | 0x10000000 | a2;
    if ( (v7 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v4 = 1;
      v7 |= 1u;
    }
    RtlpValidateHeap((__int64)Src, 0);
    v6 = RtlCompactHeap((char *)Src, v7, v8, v9);
    RtlpValidateHeapHeaders((void **)Src, 1);
  }
  else
  {
    v6 = 0LL;
  }
  if ( v4 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return v6;
}
