/*
 * XREFs of RtlDebugSetUserValueHeap @ 0x1800ED52C
 * Callers:
 *     RtlpSetUserValueHeapInternal @ 0x180058098 (RtlpSetUserValueHeapInternal.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18003479C (RtlpCheckHeapSignature.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpValidateHeapEntry @ 0x180038924 (RtlpValidateHeapEntry.c)
 *     RtlSetUserValueHeap @ 0x180058080 (RtlSetUserValueHeap.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
 *     RtlpValidateHeap @ 0x1800EDA3C (RtlpValidateHeap.c)
 */

char __fastcall RtlDebugSetUserValueHeap(unsigned __int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v5; // si
  char v7; // bl
  char v8; // r14
  unsigned __int64 v10; // rdx

  v5 = a2;
  v7 = 0;
  v8 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return qword_180143D00(a1, a2, a3, a4, 0);
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlSetUserValueHeap") )
  {
    if ( ((*(_BYTE *)(a1 + 116) | v5) & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v8 = 1;
    }
    RtlpValidateHeap(a1, 0LL);
    v10 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
    if ( RtlpValidateHeapEntry(a1, v10, "RtlSetUserValueHeap") )
    {
      v7 = RtlSetUserValueHeap();
      RtlpValidateHeap(a1, 0LL);
    }
  }
  else
  {
    v7 = 0;
  }
  if ( v8 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return v7;
}
