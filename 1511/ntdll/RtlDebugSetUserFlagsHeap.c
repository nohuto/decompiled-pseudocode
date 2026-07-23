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
    return ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *, _QWORD, char *, _QWORD, ULONG))qword_180142130)(
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
    RtlpValidateHeap((PVOID *)BaseAddress, 0);
    v13 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
    if ( RtlpValidateHeapEntry((unsigned __int64)BaseAddress, v13, "RtlSetUserFlagsHeap") )
    {
      v9 = RtlSetUserFlagsHeap(BaseAddress, v12, a3, a4, UserFlagsSet);
      RtlpValidateHeap((PVOID *)BaseAddress, 0);
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
