/*
 * XREFs of RtlDebugAllocateHeap @ 0x1800EBDCC
 * Callers:
 *     RtlpAllocateHeap @ 0x180030C30 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlLogStackBackTraceEx @ 0x180007878 (RtlLogStackBackTraceEx.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18003479C (RtlpCheckHeapSignature.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpGetExtraStuffPointer @ 0x1800582B0 (RtlpGetExtraStuffPointer.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpGetTagName @ 0x1800D91B0 (RtlpGetTagName.c)
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
 *     RtlpBreakPointHeap @ 0x1800EDA10 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeap @ 0x1800EDA3C (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800EE040 (RtlpValidateHeapHeaders.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800EEA14 (RtlpAnalyzeHeapFailure.c)
 */

__int64 __fastcall RtlDebugAllocateHeap(_DWORD *Src, unsigned int a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v6)(_DWORD *, _QWORD, unsigned __int64); // rbx
  unsigned int v8; // r14d
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 Heap; // rbx
  __int64 v13; // rbx
  _WORD *ExtraStuffPointer; // rax
  _WORD *v15; // r14
  unsigned __int16 v16; // ax
  struct _PEB *v17; // rax
  wchar_t *TagName; // rax
  char v19; // [rsp+20h] [rbp-38h]
  __int64 v20; // [rsp+28h] [rbp-30h]
  unsigned __int16 v21; // [rsp+78h] [rbp+20h]

  v19 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
  {
    v6 = (__int64 (__fastcall *)(_DWORD *, _QWORD, unsigned __int64))qword_180143CA0;
    _guard_check_icall_fptr();
    return v6(Src, a2, a3);
  }
  if ( !RtlpCheckHeapSignature(Src, "RtlAllocateHeap") )
    goto LABEL_46;
  v8 = Src[29] | 0x10000100 | a2;
  v9 = 1LL;
  if ( a3 )
    v9 = a3;
  v10 = *((_QWORD *)Src + 33) & (v9 + *((_QWORD *)Src + 32));
  if ( v10 < 0x20 )
    v10 = 32LL;
  v11 = v10 + 16;
  if ( v11 < a3 || v11 > *((_QWORD *)Src + 25) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a3, *((_QWORD *)Src + 25));
LABEL_46:
    v20 = 0LL;
    goto LABEL_47;
  }
  if ( (v8 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((_QWORD *)Src + 44));
    v19 = 1;
    v8 |= 1u;
  }
  RtlpValidateHeap(Src, 0LL);
  Heap = RtlAllocateHeap((__int64)Src, v8, a3);
  v20 = Heap;
  RtlpValidateHeapHeaders(Src);
  if ( !Heap )
    goto LABEL_47;
  v13 = Heap - 16;
  _m_prefetchw((const void *)v13);
  if ( *(_BYTE *)(v13 + 15) == 5 )
    v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
  if ( Src[31] )
  {
    *(_DWORD *)(v13 + 8) ^= Src[34];
    if ( *(_BYTE *)(v13 + 11) != (*(_BYTE *)(v13 + 8) ^ (unsigned __int8)(*(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10))) )
      RtlpAnalyzeHeapFailure(Src, v13);
  }
  if ( (*(_BYTE *)(v13 + 10) & 2) != 0 )
  {
    ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v13);
    v15 = ExtraStuffPointer;
    if ( (Src[28] & 0x8000000) != 0 )
      *ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
    else
      *ExtraStuffPointer = 0;
    v16 = v15[1];
  }
  else
  {
    v16 = *(unsigned __int8 *)(v13 + 11);
  }
  v21 = v16;
  if ( Src[31] )
  {
    *(_BYTE *)(v13 + 11) = *(_BYTE *)(v13 + 8) ^ *(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10);
    *(_DWORD *)(v13 + 8) ^= Src[34];
  }
  if ( (Src[28] & 0x20000000) != 0 )
    RtlpValidateHeap(Src, 0LL);
  v17 = NtCurrentPeb();
  if ( v20 == RtlpHeapStopOn )
  {
    if ( v17->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Just allocated block at %p for %Ix bytes\n", (const void *)RtlpHeapStopOn, a3);
LABEL_33:
    RtlpBreakPointHeap(0LL);
    goto LABEL_47;
  }
  if ( (v17->NtGlobalFlag & 0x800) != 0 && v21 && v21 == word_1801445E8 && *((_WORD *)Src + 104) == word_1801445EA )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName((__int64)Src, v21);
    DbgPrint("Just allocated block at %p for 0x%Ix bytes with tag %ws\n", v20, a3, TagName);
    goto LABEL_33;
  }
LABEL_47:
  if ( v19 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return v20;
}
