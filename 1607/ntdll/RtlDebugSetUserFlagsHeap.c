/*
 * XREFs of RtlDebugSetUserFlagsHeap @ 0x1800FAFE4
 * Callers:
 *     RtlSetUserFlagsHeap @ 0x1800E9420 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180019D84 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeapEntry @ 0x1800769B8 (RtlpValidateHeapEntry.c)
 *     RtlpValidateHeap @ 0x180091244 (RtlpValidateHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlSetUserFlagsHeap @ 0x1800E9420 (RtlSetUserFlagsHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC210 (RtlpHeapExceptionFilter.c)
 */

char __fastcall RtlDebugSetUserFlagsHeap(unsigned __int64 a1, int a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  char v9; // di
  char v10; // r14
  int v12; // esi
  unsigned __int64 v13; // rdx

  v9 = 0;
  v10 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(unsigned __int64))qword_18014C480)(a1);
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
