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

PVOID __fastcall RtlDebugAllocateHeap(_DWORD *BaseAddress, _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *a2, SIZE_T a3)
{
  unsigned int v4; // r14d
  PRTL_DYNAMIC_HASH_TABLE v6; // rbx
  ULONG v8; // r14d
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  SIZE_T v11; // rcx
  PVOID Heap; // rbx
  __int64 v13; // rbx
  _WORD *ExtraStuffPointer; // rax
  _WORD *v15; // r14
  unsigned __int16 v16; // ax
  struct _PEB *v17; // rax
  wchar_t *TagName; // rax
  char v19; // [rsp+20h] [rbp-38h]
  PVOID v20; // [rsp+28h] [rbp-30h]
  unsigned __int16 v21; // [rsp+78h] [rbp+20h]

  v4 = (unsigned int)a2;
  v19 = 0;
  if ( (BaseAddress[29] & 0x1000000) != 0 )
  {
    v6 = qword_180143CA0;
    ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
      qword_180143CA0,
      a2);
    return (PVOID)((__int64 (__fastcall *)(_DWORD *, _QWORD, SIZE_T))v6)(BaseAddress, v4, a3);
  }
  if ( !RtlpCheckHeapSignature(BaseAddress, "RtlAllocateHeap") )
    goto LABEL_46;
  v8 = BaseAddress[29] | 0x10000100 | v4;
  v9 = 1LL;
  if ( a3 )
    v9 = a3;
  v10 = *((_QWORD *)BaseAddress + 33) & (v9 + *((_QWORD *)BaseAddress + 32));
  if ( v10 < 0x20 )
    v10 = 32LL;
  v11 = v10 + 16;
  if ( v11 < a3 || v11 > *((_QWORD *)BaseAddress + 25) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a3, *((_QWORD *)BaseAddress + 25));
LABEL_46:
    v20 = 0LL;
    goto LABEL_47;
  }
  if ( (v8 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
    v19 = 1;
    v8 |= 1u;
  }
  RtlpValidateHeap(BaseAddress);
  Heap = RtlAllocateHeap(BaseAddress, v8, a3);
  v20 = Heap;
  RtlpValidateHeapHeaders(BaseAddress);
  if ( !Heap )
    goto LABEL_47;
  v13 = (__int64)Heap - 16;
  _m_prefetchw((const void *)v13);
  if ( *(_BYTE *)(v13 + 15) == 5 )
    v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
  if ( BaseAddress[31] )
  {
    *(_DWORD *)(v13 + 8) ^= BaseAddress[34];
    if ( *(_BYTE *)(v13 + 11) != (*(_BYTE *)(v13 + 8) ^ (unsigned __int8)(*(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10))) )
      RtlpAnalyzeHeapFailure(BaseAddress, v13);
  }
  if ( (*(_BYTE *)(v13 + 10) & 2) != 0 )
  {
    ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v13);
    v15 = ExtraStuffPointer;
    if ( (BaseAddress[28] & 0x8000000) != 0 )
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
  if ( BaseAddress[31] )
  {
    *(_BYTE *)(v13 + 11) = *(_BYTE *)(v13 + 8) ^ *(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10);
    *(_DWORD *)(v13 + 8) ^= BaseAddress[34];
  }
  if ( (BaseAddress[28] & 0x20000000) != 0 )
    RtlpValidateHeap(BaseAddress);
  v17 = NtCurrentPeb();
  if ( v20 == (PVOID)RtlpHeapStopOn )
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
  if ( (v17->NtGlobalFlag & 0x800) != 0
    && v21
    && v21 == word_1801445E8
    && *((_WORD *)BaseAddress + 104) == word_1801445EA )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName((__int64)BaseAddress, v21);
    DbgPrint("Just allocated block at %p for 0x%Ix bytes with tag %ws\n", v20, a3, TagName);
    goto LABEL_33;
  }
LABEL_47:
  if ( v19 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
  return v20;
}
