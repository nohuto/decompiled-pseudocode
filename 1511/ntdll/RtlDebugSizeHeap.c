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

SIZE_T __fastcall RtlDebugSizeHeap(PRTL_CRITICAL_SECTION *BaseAddress, unsigned int a2, char *a3)
{
  char v6; // r14
  SIZE_T v8; // rbx
  ULONG v9; // esi
  unsigned __int64 v10; // rdx

  v6 = 0;
  if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *, _QWORD, char *))qword_180142140)(BaseAddress, a2, a3);
  v8 = -1LL;
  if ( RtlpCheckHeapSignature(BaseAddress, "RtlSizeHeap") )
  {
    v9 = *((_DWORD *)BaseAddress + 29) | 0x10000000 | a2;
    if ( (v9 & 1) == 0 )
    {
      RtlEnterCriticalSection(BaseAddress[44]);
      v9 |= 1u;
      v6 = 1;
    }
    RtlpValidateHeap((PVOID *)BaseAddress, 0);
    v10 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
    if ( RtlpValidateHeapEntry((unsigned __int64)BaseAddress, v10, "RtlSizeHeap") )
      v8 = RtlSizeHeap(BaseAddress, v9, a3);
  }
  else
  {
    v8 = 0LL;
  }
  if ( v6 )
    RtlLeaveCriticalSection(BaseAddress[44]);
  return v8;
}
