/*
 * XREFs of RtlDebugReAllocateHeap @ 0x1800EF574
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180023D40 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x180023F60 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x180023CF0 (RtlReAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002EB04 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlpValidateHeapHeaders @ 0x18004B6B0 (RtlpValidateHeapHeaders.c)
 *     RtlLogStackBackTraceEx @ 0x180054FC8 (RtlLogStackBackTraceEx.c)
 *     RtlpGetExtraStuffPointer @ 0x180074A8C (RtlpGetExtraStuffPointer.c)
 *     RtlpValidateHeapEntry @ 0x18007587C (RtlpValidateHeapEntry.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpValidateHeap @ 0x180092BC8 (RtlpValidateHeap.c)
 *     RtlpGetTagName @ 0x1800E107C (RtlpGetTagName.c)
 *     RtlpHeapExceptionFilter @ 0x1800E3178 (RtlpHeapExceptionFilter.c)
 *     RtlpBreakPointHeap @ 0x1800F019C (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F09E4 (RtlpAnalyzeHeapFailure.c)
 */

__int64 __fastcall RtlDebugReAllocateHeap(_DWORD *Src, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 (__fastcall *v8)(_DWORD *, _QWORD, __int64, unsigned __int64); // rbx
  int v10; // esi
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  struct _PEB *v14; // rax
  __int16 v15; // r8
  unsigned __int16 v16; // dx
  wchar_t *TagName; // rax
  __int64 Heap; // rax
  __int64 v19; // rsi
  _WORD *ExtraStuffPointer; // rax
  _WORD *v21; // r14
  unsigned __int16 v22; // ax
  struct _PEB *v23; // rax
  wchar_t *v24; // rax
  char v25; // [rsp+20h] [rbp-38h]
  unsigned __int16 v26; // [rsp+24h] [rbp-34h]
  __int64 v27; // [rsp+28h] [rbp-30h]
  __int64 v28; // [rsp+30h] [rbp-28h]
  unsigned int v29; // [rsp+68h] [rbp+10h]

  v25 = 0;
  v27 = 0LL;
  if ( (Src[29] & 0x1000000) != 0 )
  {
    v8 = (__int64 (__fastcall *)(_DWORD *, _QWORD, __int64, unsigned __int64))qword_1801420C8;
    _guard_check_icall_fptr();
    return v8(Src, a2, a3, a4);
  }
  if ( !RtlpCheckHeapSignature(Src, "RtlReAllocateHeap") )
    goto LABEL_68;
  v10 = Src[29] | 0x10000100 | a2;
  v29 = v10;
  v11 = 1LL;
  if ( a4 )
    v11 = a4;
  v12 = (*((_QWORD *)Src + 33) & (v11 + *((_QWORD *)Src + 32))) + 16;
  if ( v12 < a4 || v12 > *((_QWORD *)Src + 25) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a4, *((_QWORD *)Src + 25));
LABEL_68:
    v27 = 0LL;
    goto LABEL_69;
  }
  v26 = 0;
  if ( (v10 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((_QWORD *)Src + 44));
    v25 = 1;
    v29 = v10 | 1;
  }
  RtlpValidateHeap((__int64)Src, 0);
  v13 = a3 - 16;
  _m_prefetchw((const void *)(a3 - 16));
  if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
    v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
  v28 = v13;
  if ( RtlpValidateHeapEntry((unsigned __int64)Src, v13, "RtlReAllocateHeap") )
  {
    v14 = NtCurrentPeb();
    if ( a3 == qword_180143630 )
    {
      if ( v14->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to reallocate block at %p to %Ix bytes\n", (const void *)qword_180143630, a4);
    }
    else
    {
      if ( (v14->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_36;
      v15 = dword_180143638;
      if ( !dword_180143638 )
        goto LABEL_36;
      if ( Src[31] )
      {
        *(_DWORD *)(v28 + 8) ^= Src[34];
        if ( *(_BYTE *)(v28 + 11) != (*(_BYTE *)(v28 + 8) ^ (unsigned __int8)(*(_BYTE *)(v28 + 9) ^ *(_BYTE *)(v28 + 10))) )
        {
          RtlpAnalyzeHeapFailure(Src, v28);
          v15 = dword_180143638;
        }
      }
      if ( (*(_BYTE *)(v28 + 10) & 2) != 0 )
        v16 = *(_WORD *)(RtlpGetExtraStuffPointer(v28) + 2);
      else
        v16 = *(unsigned __int8 *)(v28 + 11);
      v26 = v16;
      if ( Src[31] )
      {
        *(_BYTE *)(v28 + 11) = *(_BYTE *)(v28 + 8) ^ *(_BYTE *)(v28 + 9) ^ *(_BYTE *)(v28 + 10);
        *(_DWORD *)(v28 + 8) ^= Src[34];
      }
      if ( !v16 || v16 != v15 || *((_WORD *)Src + 104) != HIWORD(dword_180143638) )
        goto LABEL_36;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName((__int64)Src, v26);
      DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", a3, a4, TagName);
    }
    RtlpBreakPointHeap(0LL);
LABEL_36:
    Heap = RtlReAllocateHeap((__int64)Src, v29, a3, a4);
    v27 = Heap;
    if ( Heap )
    {
      v19 = Heap - 16;
      _m_prefetchw((const void *)(Heap - 16));
      if ( *(_BYTE *)(Heap - 16 + 15) == 5 )
        v19 -= 16LL * *(unsigned __int8 *)(v19 + 14);
      if ( Src[31] )
      {
        *(_DWORD *)(v19 + 8) ^= Src[34];
        if ( *(_BYTE *)(v19 + 11) != (*(_BYTE *)(v19 + 8) ^ (unsigned __int8)(*(_BYTE *)(v19 + 9) ^ *(_BYTE *)(v19 + 10))) )
          RtlpAnalyzeHeapFailure(Src, v19);
      }
      if ( (*(_BYTE *)(v19 + 10) & 2) != 0 )
      {
        ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v19);
        v21 = ExtraStuffPointer;
        if ( (Src[28] & 0x8000000) != 0 )
          *ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
        else
          *ExtraStuffPointer = 0;
        v22 = v21[1];
      }
      else
      {
        v22 = *(unsigned __int8 *)(v19 + 11);
      }
      v26 = v22;
      if ( Src[31] )
      {
        *(_BYTE *)(v19 + 11) = *(_BYTE *)(v19 + 8) ^ *(_BYTE *)(v19 + 9) ^ *(_BYTE *)(v19 + 10);
        *(_DWORD *)(v19 + 8) ^= Src[34];
      }
    }
    RtlpValidateHeapHeaders((void **)Src, 1);
    RtlpValidateHeap((__int64)Src, 0);
  }
  if ( v27 )
  {
    v23 = NtCurrentPeb();
    if ( v27 == qword_180143630 )
    {
      if ( v23->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)qword_180143630, a4);
LABEL_57:
      RtlpBreakPointHeap(0LL);
      goto LABEL_69;
    }
    if ( (v23->NtGlobalFlag & 0x800) != 0 && __PAIR32__(*((_WORD *)Src + 104), v26) == dword_180143638 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v24 = RtlpGetTagName((__int64)Src, v26);
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v27, a4, v24);
      goto LABEL_57;
    }
  }
LABEL_69:
  if ( v25 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return v27;
}
