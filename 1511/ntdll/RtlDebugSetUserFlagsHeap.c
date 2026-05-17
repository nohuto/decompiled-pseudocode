/*
 * XREFs of RtlDebugSetUserFlagsHeap @ 0x1800EFAE4
 * Callers:
 *     RtlSetUserFlagsHeap @ 0x1800E02C0 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002EB04 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeapEntry @ 0x18007587C (RtlpValidateHeapEntry.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpValidateHeap @ 0x180092BC8 (RtlpValidateHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800E02C0 (RtlSetUserFlagsHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1800E3178 (RtlpHeapExceptionFilter.c)
 */

char __fastcall RtlDebugSetUserFlagsHeap(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  char v9; // bl
  char v10; // r14
  int v12; // esi
  unsigned __int64 v13; // rdx

  v9 = 0;
  v10 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return qword_180142130(a1, a2, a3, a4, a5);
  if ( ((a5 | a4) & 0xFFFFF1FF) != 0 )
    return 0;
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlSetUserFlagsHeap") )
  {
    v12 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v12 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v10 = 1;
      v12 |= 1u;
    }
    RtlpValidateHeap(a1, 0);
    v13 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
    if ( RtlpValidateHeapEntry(a1, v13, "RtlSetUserFlagsHeap") )
    {
      v9 = RtlSetUserFlagsHeap(a1, v12, a3, a4, a5);
      RtlpValidateHeap(a1, 0);
    }
  }
  else
  {
    v9 = 0;
  }
  if ( v10 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return v9;
}
