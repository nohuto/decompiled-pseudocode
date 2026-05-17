/*
 * XREFs of RtlDebugSizeHeap @ 0x1800EFE54
 * Callers:
 *     RtlSizeHeap @ 0x18001BA80 (RtlSizeHeap.c)
 * Callees:
 *     RtlSizeHeap @ 0x18001BA80 (RtlSizeHeap.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002EB04 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeapEntry @ 0x18007587C (RtlpValidateHeapEntry.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpValidateHeap @ 0x180092BC8 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1800E3178 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugSizeHeap(unsigned __int64 a1, unsigned int a2, unsigned __int64 a3)
{
  char v6; // r14
  __int64 v8; // rbx
  unsigned int v9; // esi
  unsigned __int64 v10; // rdx

  v6 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return qword_180142140(a1, a2, a3);
  v8 = -1LL;
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlSizeHeap") )
  {
    v9 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v9 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v9 |= 1u;
      v6 = 1;
    }
    RtlpValidateHeap(a1, 0);
    v10 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
    if ( RtlpValidateHeapEntry(a1, v10, "RtlSizeHeap") )
      v8 = RtlSizeHeap(a1, v9, a3);
  }
  else
  {
    v8 = 0LL;
  }
  if ( v6 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return v8;
}
