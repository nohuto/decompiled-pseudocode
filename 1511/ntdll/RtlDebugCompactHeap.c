/*
 * XREFs of RtlDebugCompactHeap @ 0x1800EEC28
 * Callers:
 *     RtlCompactHeap @ 0x18008DFD0 (RtlCompactHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002EB04 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeapHeaders @ 0x18004B6B0 (RtlpValidateHeapHeaders.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlCompactHeap @ 0x18008DFD0 (RtlCompactHeap.c)
 *     RtlpValidateHeap @ 0x180092BC8 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1800E3178 (RtlpHeapExceptionFilter.c)
 */

SIZE_T __fastcall RtlDebugCompactHeap(PRTL_CRITICAL_SECTION *BaseAddress, unsigned int a2)
{
  char v4; // r14
  SIZE_T v6; // rbx
  ULONG v7; // edi

  v4 = 0;
  if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) != 0 )
    return (unsigned int)((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *, _QWORD))qword_180142148)(BaseAddress, a2);
  if ( RtlpCheckHeapSignature(BaseAddress, "RtlCompactHeap") )
  {
    v7 = *((_DWORD *)BaseAddress + 29) | 0x10000000 | a2;
    if ( (v7 & 1) == 0 )
    {
      RtlEnterCriticalSection(BaseAddress[44]);
      v4 = 1;
      v7 |= 1u;
    }
    RtlpValidateHeap((PVOID *)BaseAddress, 0);
    v6 = RtlCompactHeap(BaseAddress, v7);
    RtlpValidateHeapHeaders((PVOID *)BaseAddress, 1);
  }
  else
  {
    v6 = 0LL;
  }
  if ( v4 )
    RtlLeaveCriticalSection(BaseAddress[44]);
  return v6;
}
