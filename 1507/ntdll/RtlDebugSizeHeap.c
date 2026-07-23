/*
 * XREFs of RtlDebugSizeHeap @ 0x1800ED6C8
 * Callers:
 *     RtlSizeHeap @ 0x18002A610 (RtlSizeHeap.c)
 *     RtlpSizeHeapInternal @ 0x1800DD7F8 (RtlpSizeHeapInternal.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlSizeHeap @ 0x18002A610 (RtlSizeHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18003479C (RtlpCheckHeapSignature.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpValidateHeapEntry @ 0x180038924 (RtlpValidateHeapEntry.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
 *     RtlpValidateHeap @ 0x1800EDA3C (RtlpValidateHeap.c)
 */

SIZE_T __fastcall RtlDebugSizeHeap(PRTL_CRITICAL_SECTION *BaseAddress, unsigned int a2, char *a3)
{
  char v6; // r14
  SIZE_T v8; // rbx
  ULONG v9; // esi
  unsigned __int64 v10; // rdx

  v6 = 0;
  if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *, _QWORD, char *))qword_180143D20)(BaseAddress, a2, a3);
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
    RtlpValidateHeap(BaseAddress);
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
