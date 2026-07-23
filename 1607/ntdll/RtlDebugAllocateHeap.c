/*
 * XREFs of RtlDebugAllocateHeap @ 0x1800917C4
 * Callers:
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180019D74 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlpGetExtraStuffPointer @ 0x180029010 (RtlpGetExtraStuffPointer.c)
 *     RtlLogStackBackTraceEx @ 0x18002B1F8 (RtlLogStackBackTraceEx.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     RtlpValidateHeapHeaders @ 0x18005D2F0 (RtlpValidateHeapHeaders.c)
 *     RtlpValidateHeap @ 0x180091234 (RtlpValidateHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlpGetTagName @ 0x1800EA2F8 (RtlpGetTagName.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC2D0 (RtlpHeapExceptionFilter.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x1800FB678 (RtlpBreakPointHeap.c)
 */

PVOID __fastcall RtlDebugAllocateHeap(_DWORD *Src, int a2, SIZE_T a3)
{
  unsigned __int16 v6; // ax
  struct _PEB *v7; // rax
  __int64 TagName; // rax
  __int64 v9; // rcx
  ULONG v10; // edi
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  SIZE_T v13; // rcx
  PVOID Heap; // rdi
  __int64 v15; // rdi
  _WORD *ExtraStuffPointer; // rax
  _WORD *v17; // r15
  char v19; // [rsp+20h] [rbp-38h]
  PVOID v20; // [rsp+28h] [rbp-30h]
  unsigned __int16 v21; // [rsp+78h] [rbp+20h]

  v19 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return (PVOID)_guard_dispatch_icall_fptr();
  if ( !RtlpCheckHeapSignature(Src, "RtlAllocateHeap") )
    goto LABEL_28;
  v10 = Src[29] | 0x10000100 | a2;
  v11 = 1LL;
  if ( a3 )
    v11 = a3;
  v12 = *((_QWORD *)Src + 33) & (v11 + *((_QWORD *)Src + 32));
  if ( v12 < 0x20 )
    v12 = 32LL;
  v13 = v12 + 16;
  if ( v13 < a3 || v13 > *((_QWORD *)Src + 25) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a3, *((_QWORD *)Src + 25));
LABEL_28:
    v20 = 0LL;
    goto LABEL_47;
  }
  if ( (v10 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
    v19 = 1;
    v10 |= 1u;
  }
  RtlpValidateHeap((__int64)Src, 0);
  Heap = RtlAllocateHeap(Src, v10, a3);
  v20 = Heap;
  RtlpValidateHeapHeaders((PVOID *)Src, 1);
  if ( !Heap )
    goto LABEL_47;
  v15 = (__int64)Heap - 16;
  _m_prefetchw((const void *)v15);
  if ( *(_BYTE *)(v15 + 15) == 5 )
    v15 -= 16LL * *(unsigned __int8 *)(v15 + 14);
  if ( Src[31] )
  {
    *(_DWORD *)(v15 + 8) ^= Src[34];
    if ( *(_BYTE *)(v15 + 11) != (*(_BYTE *)(v15 + 8) ^ (unsigned __int8)(*(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10))) )
      RtlpAnalyzeHeapFailure(Src, v15);
  }
  if ( (*(_BYTE *)(v15 + 10) & 2) != 0 )
  {
    ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v15);
    v17 = ExtraStuffPointer;
    if ( (Src[28] & 0x8000000) != 0 )
      *ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
    else
      *ExtraStuffPointer = 0;
    v6 = v17[1];
  }
  else
  {
    v6 = *(unsigned __int8 *)(v15 + 11);
  }
  v21 = v6;
  if ( Src[31] )
  {
    *(_BYTE *)(v15 + 11) = *(_BYTE *)(v15 + 8) ^ *(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10);
    *(_DWORD *)(v15 + 8) ^= Src[34];
  }
  if ( (Src[28] & 0x20000000) != 0 )
    RtlpValidateHeap((__int64)Src, 0);
  v7 = NtCurrentPeb();
  if ( v20 == (PVOID)RtlpHeapStopOn )
  {
    if ( v7->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Just allocated block at %p for %Ix bytes\n", (const void *)RtlpHeapStopOn, a3);
    goto LABEL_17;
  }
  if ( (v7->NtGlobalFlag & 0x800) != 0 && v21 && v21 == word_180150668 && *((_WORD *)Src + 104) == word_18015066A )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName(Src, v21);
    DbgPrint("Just allocated block at %p for 0x%Ix bytes with tag %ws\n", v20, a3, TagName);
LABEL_17:
    RtlpBreakPointHeap(v9);
  }
LABEL_47:
  if ( v19 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
  return v20;
}
