/*
 * XREFs of RtlDebugSetUserValueHeap @ 0x1800FB1B0
 * Callers:
 *     RtlSetUserValueHeap @ 0x180029050 (RtlSetUserValueHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180019D84 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlSetUserValueHeap @ 0x180029050 (RtlSetUserValueHeap.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeapEntry @ 0x1800769B8 (RtlpValidateHeapEntry.c)
 *     RtlpValidateHeap @ 0x180091244 (RtlpValidateHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC210 (RtlpHeapExceptionFilter.c)
 */

char __fastcall RtlDebugSetUserValueHeap(unsigned __int64 a1, int a2, unsigned __int64 a3, __int64 a4)
{
  char v8; // si
  char v9; // r14
  unsigned int v11; // edi
  unsigned __int64 v12; // rdx

  v8 = 0;
  v9 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_18014C470)();
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlSetUserValueHeap") )
  {
    v11 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v9 = 1;
      v11 |= 1u;
    }
    RtlpValidateHeap(a1, 0);
    v12 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
    if ( RtlpValidateHeapEntry(a1, v12, "RtlSetUserValueHeap") )
    {
      v8 = RtlSetUserValueHeap(a1, v11, a3, a4);
      RtlpValidateHeap(a1, 0);
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v9 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return v8;
}
