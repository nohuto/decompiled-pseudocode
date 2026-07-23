/*
 * XREFs of RtlDebugZeroHeap @ 0x1800FB554
 * Callers:
 *     RtlZeroHeap @ 0x1800EBD10 (RtlZeroHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180019D74 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlpValidateHeap @ 0x180091234 (RtlpValidateHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlZeroHeap @ 0x1800EBD10 (RtlZeroHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC2D0 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugZeroHeap(PRTL_CRITICAL_SECTION *HeapHandle, int a2)
{
  char v4; // si
  ULONG v6; // ebx
  unsigned __int32 v7; // ebx

  v4 = 0;
  if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *))qword_18014C4A0)(HeapHandle);
  if ( !RtlpCheckHeapSignature(HeapHandle, "RtlZeroHeap") )
    goto LABEL_7;
  v6 = *((_DWORD *)HeapHandle + 29) | 0x10000000 | a2;
  if ( (v6 & 1) == 0 )
  {
    RtlEnterCriticalSection(HeapHandle[44]);
    v4 = 1;
    v6 |= 1u;
  }
  if ( RtlpValidateHeap((__int64)HeapHandle, 0) )
    v7 = RtlZeroHeap(HeapHandle, v6);
  else
LABEL_7:
    v7 = -1073741811;
  if ( v4 )
    RtlLeaveCriticalSection(HeapHandle[44]);
  return v7;
}
