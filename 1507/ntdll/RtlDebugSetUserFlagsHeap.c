/*
 * XREFs of RtlDebugSetUserFlagsHeap @ 0x1800ED358
 * Callers:
 *     RtlpSetUserFlagsHeapInternal @ 0x1800DA634 (RtlpSetUserFlagsHeapInternal.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18003479C (RtlpCheckHeapSignature.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpValidateHeapEntry @ 0x180038924 (RtlpValidateHeapEntry.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlSetUserFlagsHeap @ 0x1800D85F0 (RtlSetUserFlagsHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
 *     RtlpValidateHeap @ 0x1800EDA3C (RtlpValidateHeap.c)
 */

BOOLEAN __fastcall RtlDebugSetUserFlagsHeap(
        PRTL_CRITICAL_SECTION *BaseAddress,
        unsigned int a2,
        char *a3,
        ULONG a4,
        ULONG UserFlagsSet)
{
  BOOLEAN v9; // bl
  char v10; // r14
  ULONG v12; // esi
  unsigned __int64 v13; // rdx

  v9 = 0;
  v10 = 0;
  if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *, _QWORD, char *, _QWORD, ULONG))qword_180143D10)(
             BaseAddress,
             a2,
             a3,
             a4,
             UserFlagsSet);
  if ( ((UserFlagsSet | a4) & 0xFFFFF1FF) != 0 )
    return 0;
  if ( RtlpCheckHeapSignature(BaseAddress, "RtlSetUserFlagsHeap") )
  {
    v12 = *((_DWORD *)BaseAddress + 29) | 0x10000000 | a2;
    if ( (v12 & 1) == 0 )
    {
      RtlEnterCriticalSection(BaseAddress[44]);
      v10 = 1;
      v12 |= 1u;
    }
    RtlpValidateHeap(BaseAddress);
    v13 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
    if ( RtlpValidateHeapEntry((unsigned __int64)BaseAddress, v13, "RtlSetUserFlagsHeap") )
    {
      v9 = RtlSetUserFlagsHeap(BaseAddress, v12, a3, a4, UserFlagsSet);
      RtlpValidateHeap(BaseAddress);
    }
  }
  else
  {
    v9 = 0;
  }
  if ( v10 )
    RtlLeaveCriticalSection(BaseAddress[44]);
  return v9;
}
