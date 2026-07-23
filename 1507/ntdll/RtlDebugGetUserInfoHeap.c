/*
 * XREFs of RtlDebugGetUserInfoHeap @ 0x1800ECAF0
 * Callers:
 *     RtlpGetUserInfoHeapInternal @ 0x180057D00 (RtlpGetUserInfoHeapInternal.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18003479C (RtlpCheckHeapSignature.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpValidateHeapEntry @ 0x180038924 (RtlpValidateHeapEntry.c)
 *     RtlGetUserInfoHeap @ 0x180057CD0 (RtlGetUserInfoHeap.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
 *     RtlpValidateHeap @ 0x1800EDA3C (RtlpValidateHeap.c)
 */

BOOLEAN __fastcall RtlDebugGetUserInfoHeap(
        PRTL_CRITICAL_SECTION *BaseAddress,
        unsigned int a2,
        char *a3,
        PVOID *a4,
        PULONG UserFlags)
{
  BOOLEAN UserInfoHeap; // bl
  char v10; // r14
  ULONG v12; // esi
  unsigned __int64 v13; // rdx

  UserInfoHeap = 0;
  v10 = 0;
  if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *, _QWORD, char *, PVOID *, PULONG))qword_180143D08)(
             BaseAddress,
             a2,
             a3,
             a4,
             UserFlags);
  if ( RtlpCheckHeapSignature(BaseAddress, "RtlGetUserInfoHeap") )
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
    if ( RtlpValidateHeapEntry((unsigned __int64)BaseAddress, v13, "RtlGetUserInfoHeap") )
      UserInfoHeap = RtlGetUserInfoHeap(BaseAddress, v12, a3, a4, UserFlags);
  }
  else
  {
    UserInfoHeap = 0;
  }
  if ( v10 )
    RtlLeaveCriticalSection(BaseAddress[44]);
  return UserInfoHeap;
}
