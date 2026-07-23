/*
 * XREFs of RtlDebugGetUserInfoHeap @ 0x1800FA794
 * Callers:
 *     RtlGetUserInfoHeap @ 0x18007AB40 (RtlGetUserInfoHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180019D74 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeapEntry @ 0x1800769A8 (RtlpValidateHeapEntry.c)
 *     RtlGetUserInfoHeap @ 0x18007AB40 (RtlGetUserInfoHeap.c)
 *     RtlpValidateHeap @ 0x180091234 (RtlpValidateHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC2D0 (RtlpHeapExceptionFilter.c)
 */

BOOLEAN __fastcall RtlDebugGetUserInfoHeap(
        PRTL_CRITICAL_SECTION *HeapHandle,
        int a2,
        char *a3,
        PVOID *a4,
        PULONG UserFlags)
{
  BOOLEAN UserInfoHeap; // si
  char v10; // r14
  ULONG v12; // edi
  unsigned __int64 v13; // rdx

  UserInfoHeap = 0;
  v10 = 0;
  if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *))qword_18014C478)(HeapHandle);
  if ( RtlpCheckHeapSignature(HeapHandle, "RtlGetUserInfoHeap") )
  {
    v12 = *((_DWORD *)HeapHandle + 29) | 0x10000000 | a2;
    if ( (v12 & 1) == 0 )
    {
      RtlEnterCriticalSection(HeapHandle[44]);
      v10 = 1;
      v12 |= 1u;
    }
    RtlpValidateHeap((__int64)HeapHandle, 0);
    v13 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
    if ( RtlpValidateHeapEntry((unsigned __int64)HeapHandle, v13, "RtlGetUserInfoHeap") )
      UserInfoHeap = RtlGetUserInfoHeap(HeapHandle, v12, a3, a4, UserFlags);
  }
  else
  {
    UserInfoHeap = 0;
  }
  if ( v10 )
    RtlLeaveCriticalSection(HeapHandle[44]);
  return UserInfoHeap;
}
