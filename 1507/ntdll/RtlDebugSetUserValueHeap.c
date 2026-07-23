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

BOOLEAN __fastcall RtlDebugSetUserValueHeap(PRTL_CRITICAL_SECTION *BaseAddress, unsigned int a2, char *a3, void *a4)
{
  BOOLEAN v8; // bl
  char v9; // r14
  ULONG v11; // esi
  unsigned __int64 v12; // rdx

  v8 = 0;
  v9 = 0;
  if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *, _QWORD, char *, void *, _WORD))qword_180143D00)(
             BaseAddress,
             a2,
             a3,
             a4,
             0);
  if ( RtlpCheckHeapSignature(BaseAddress, "RtlSetUserValueHeap") )
  {
    v11 = *((_DWORD *)BaseAddress + 29) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(BaseAddress[44]);
      v9 = 1;
      v11 |= 1u;
    }
    RtlpValidateHeap(BaseAddress);
    v12 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
    if ( RtlpValidateHeapEntry((unsigned __int64)BaseAddress, v12, "RtlSetUserValueHeap") )
    {
      v8 = RtlSetUserValueHeap(BaseAddress, v11, a3, a4);
      RtlpValidateHeap(BaseAddress);
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v9 )
    RtlLeaveCriticalSection(BaseAddress[44]);
  return v8;
}
