/*
 * XREFs of RtlDebugReAllocateHeap @ 0x1800FAA84
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180020DC0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x1800211C0 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180019D74 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlReAllocateHeap @ 0x180020D70 (RtlReAllocateHeap.c)
 *     RtlpGetExtraStuffPointer @ 0x180029010 (RtlpGetExtraStuffPointer.c)
 *     RtlLogStackBackTraceEx @ 0x18002B1F8 (RtlLogStackBackTraceEx.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     RtlpValidateHeapHeaders @ 0x18005D2F0 (RtlpValidateHeapHeaders.c)
 *     RtlpValidateHeapEntry @ 0x1800769A8 (RtlpValidateHeapEntry.c)
 *     RtlpValidateHeap @ 0x180091234 (RtlpValidateHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlpGetTagName @ 0x1800EA2F8 (RtlpGetTagName.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC2D0 (RtlpHeapExceptionFilter.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x1800FB678 (RtlpBreakPointHeap.c)
 */

char *__fastcall RtlDebugReAllocateHeap(_DWORD *Src, int a2, char *a3, SIZE_T a4)
{
  int v9; // esi
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  struct _PEB *v13; // rax
  __int64 v14; // rcx
  __int16 v15; // r8
  unsigned __int16 v16; // dx
  wchar_t *TagName; // rax
  char *Heap; // rax
  unsigned __int64 v19; // rsi
  _WORD *ExtraStuffPointer; // rax
  _WORD *v21; // r14
  unsigned __int16 v22; // ax
  struct _PEB *v23; // rax
  __int64 v24; // rcx
  wchar_t *v25; // rax
  char v26; // [rsp+30h] [rbp-38h]
  unsigned __int16 v27; // [rsp+34h] [rbp-34h]
  char *v28; // [rsp+38h] [rbp-30h]
  unsigned __int64 v29; // [rsp+40h] [rbp-28h]
  int Flags; // [rsp+78h] [rbp+10h]

  v26 = 0;
  v28 = 0LL;
  if ( (Src[29] & 0x1000000) != 0 )
    return (char *)_guard_dispatch_icall_fptr();
  if ( !RtlpCheckHeapSignature(Src, "RtlReAllocateHeap") )
    goto LABEL_68;
  v9 = Src[29] | 0x10000100 | a2;
  Flags = v9;
  v10 = 1LL;
  if ( a4 )
    v10 = a4;
  v11 = (*((_QWORD *)Src + 33) & (v10 + *((_QWORD *)Src + 32))) + 16;
  if ( v11 < a4 || v11 > *((_QWORD *)Src + 25) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a4, *((_QWORD *)Src + 25));
LABEL_68:
    v28 = 0LL;
    goto LABEL_69;
  }
  v27 = 0;
  if ( (v9 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
    v26 = 1;
    Flags = v9 | 1;
  }
  RtlpValidateHeap((__int64)Src, 0);
  v12 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  if ( *(a3 - 1) == 5 )
    v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
  v29 = v12;
  if ( RtlpValidateHeapEntry((unsigned __int64)Src, v12, "RtlReAllocateHeap") )
  {
    v13 = NtCurrentPeb();
    if ( a3 == (char *)qword_180150670 )
    {
      if ( v13->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to reallocate block at %p to %Ix bytes\n", (const void *)qword_180150670, a4);
    }
    else
    {
      if ( (v13->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_36;
      v15 = dword_180150678;
      if ( !dword_180150678 )
        goto LABEL_36;
      if ( Src[31] )
      {
        *(_DWORD *)(v29 + 8) ^= Src[34];
        if ( *(_BYTE *)(v29 + 11) != (*(_BYTE *)(v29 + 8) ^ (unsigned __int8)(*(_BYTE *)(v29 + 9) ^ *(_BYTE *)(v29 + 10))) )
        {
          RtlpAnalyzeHeapFailure((__int64)Src, v29);
          v15 = dword_180150678;
        }
      }
      if ( (*(_BYTE *)(v29 + 10) & 2) != 0 )
        v16 = *(_WORD *)(RtlpGetExtraStuffPointer(v29) + 2);
      else
        v16 = *(unsigned __int8 *)(v29 + 11);
      v27 = v16;
      if ( Src[31] )
      {
        *(_BYTE *)(v29 + 11) = *(_BYTE *)(v29 + 8) ^ *(_BYTE *)(v29 + 9) ^ *(_BYTE *)(v29 + 10);
        *(_DWORD *)(v29 + 8) ^= Src[34];
      }
      if ( !v16 || v16 != v15 || *((_WORD *)Src + 104) != HIWORD(dword_180150678) )
        goto LABEL_36;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName((__int64)Src, v27);
      DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", a3, a4, TagName);
    }
    RtlpBreakPointHeap(v14);
LABEL_36:
    Heap = (char *)RtlReAllocateHeap(Src, Flags, a3, a4);
    v28 = Heap;
    if ( Heap )
    {
      v19 = (unsigned __int64)(Heap - 16);
      _m_prefetchw(Heap - 16);
      if ( *(Heap - 1) == 5 )
        v19 -= 16LL * *(unsigned __int8 *)(v19 + 14);
      if ( Src[31] )
      {
        *(_DWORD *)(v19 + 8) ^= Src[34];
        if ( *(_BYTE *)(v19 + 11) != (*(_BYTE *)(v19 + 8) ^ (unsigned __int8)(*(_BYTE *)(v19 + 9) ^ *(_BYTE *)(v19 + 10))) )
          RtlpAnalyzeHeapFailure((__int64)Src, v19);
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
      v27 = v22;
      if ( Src[31] )
      {
        *(_BYTE *)(v19 + 11) = *(_BYTE *)(v19 + 8) ^ *(_BYTE *)(v19 + 9) ^ *(_BYTE *)(v19 + 10);
        *(_DWORD *)(v19 + 8) ^= Src[34];
      }
    }
    RtlpValidateHeapHeaders((PVOID *)Src, 1);
    RtlpValidateHeap((__int64)Src, 0);
  }
  if ( v28 )
  {
    v23 = NtCurrentPeb();
    if ( v28 == (char *)qword_180150670 )
    {
      if ( v23->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)qword_180150670, a4);
LABEL_57:
      RtlpBreakPointHeap(v24);
      goto LABEL_69;
    }
    if ( (v23->NtGlobalFlag & 0x800) != 0 && __PAIR32__(*((_WORD *)Src + 104), v27) == dword_180150678 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v25 = RtlpGetTagName((__int64)Src, v27);
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v28, a4, v25);
      goto LABEL_57;
    }
  }
LABEL_69:
  if ( v26 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
  return v28;
}
