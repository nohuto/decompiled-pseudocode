/*
 * XREFs of RtlDebugReAllocateHeap @ 0x1800ECDE8
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18002DA50 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x18002DC40 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlLogStackBackTraceEx @ 0x180007878 (RtlLogStackBackTraceEx.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlReAllocateHeap @ 0x18002DA20 (RtlReAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18003479C (RtlpCheckHeapSignature.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpValidateHeapEntry @ 0x180038924 (RtlpValidateHeapEntry.c)
 *     RtlpGetExtraStuffPointer @ 0x1800582B0 (RtlpGetExtraStuffPointer.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpGetTagName @ 0x1800D91B0 (RtlpGetTagName.c)
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
 *     RtlpBreakPointHeap @ 0x1800EDA10 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeap @ 0x1800EDA3C (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800EE040 (RtlpValidateHeapHeaders.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800EEA14 (RtlpAnalyzeHeapFailure.c)
 */

char *__fastcall RtlDebugReAllocateHeap(
        _DWORD *BaseAddress,
        _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *a2,
        char *a3,
        SIZE_T a4)
{
  unsigned int v6; // esi
  PRTL_DYNAMIC_HASH_TABLE v8; // rbx
  int v10; // esi
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  struct _PEB *v14; // rax
  __int16 v15; // r8
  unsigned __int16 v16; // dx
  wchar_t *TagName; // rax
  char *Heap; // rax
  __int64 v19; // rsi
  _WORD *ExtraStuffPointer; // rax
  _WORD *v21; // r14
  unsigned __int16 v22; // ax
  struct _PEB *v23; // rax
  wchar_t *v24; // rax
  char v25; // [rsp+20h] [rbp-38h]
  unsigned __int16 v26; // [rsp+24h] [rbp-34h]
  char *v27; // [rsp+28h] [rbp-30h]
  __int64 v28; // [rsp+30h] [rbp-28h]
  int Flags; // [rsp+68h] [rbp+10h]

  v6 = (unsigned int)a2;
  v25 = 0;
  v27 = 0LL;
  if ( (BaseAddress[29] & 0x1000000) != 0 )
  {
    v8 = qword_180143CA8;
    ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
      qword_180143CA8,
      a2);
    return (char *)((__int64 (__fastcall *)(_DWORD *, _QWORD, char *, SIZE_T))v8)(BaseAddress, v6, a3, a4);
  }
  if ( !RtlpCheckHeapSignature(BaseAddress, "RtlReAllocateHeap") )
    goto LABEL_68;
  v10 = BaseAddress[29] | 0x10000100 | v6;
  Flags = v10;
  v11 = 1LL;
  if ( a4 )
    v11 = a4;
  v12 = (*((_QWORD *)BaseAddress + 33) & (v11 + *((_QWORD *)BaseAddress + 32))) + 16;
  if ( v12 < a4 || v12 > *((_QWORD *)BaseAddress + 25) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a4, *((_QWORD *)BaseAddress + 25));
LABEL_68:
    v27 = 0LL;
    goto LABEL_69;
  }
  v26 = 0;
  if ( (v10 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
    v25 = 1;
    Flags = v10 | 1;
  }
  RtlpValidateHeap(BaseAddress);
  v13 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  if ( *(a3 - 1) == 5 )
    v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
  v28 = v13;
  if ( RtlpValidateHeapEntry((unsigned __int64)BaseAddress, v13, "RtlReAllocateHeap") )
  {
    v14 = NtCurrentPeb();
    if ( a3 == (char *)qword_1801445F0 )
    {
      if ( v14->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to reallocate block at %p to %Ix bytes\n", (const void *)qword_1801445F0, a4);
    }
    else
    {
      if ( (v14->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_36;
      v15 = dword_1801445F8;
      if ( !dword_1801445F8 )
        goto LABEL_36;
      if ( BaseAddress[31] )
      {
        *(_DWORD *)(v28 + 8) ^= BaseAddress[34];
        if ( *(_BYTE *)(v28 + 11) != (*(_BYTE *)(v28 + 8) ^ (unsigned __int8)(*(_BYTE *)(v28 + 9) ^ *(_BYTE *)(v28 + 10))) )
        {
          RtlpAnalyzeHeapFailure(BaseAddress, v28);
          v15 = dword_1801445F8;
        }
      }
      if ( (*(_BYTE *)(v28 + 10) & 2) != 0 )
        v16 = *(_WORD *)(RtlpGetExtraStuffPointer(v28) + 2);
      else
        v16 = *(unsigned __int8 *)(v28 + 11);
      v26 = v16;
      if ( BaseAddress[31] )
      {
        *(_BYTE *)(v28 + 11) = *(_BYTE *)(v28 + 8) ^ *(_BYTE *)(v28 + 9) ^ *(_BYTE *)(v28 + 10);
        *(_DWORD *)(v28 + 8) ^= BaseAddress[34];
      }
      if ( !v16 || v16 != v15 || *((_WORD *)BaseAddress + 104) != HIWORD(dword_1801445F8) )
        goto LABEL_36;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName((__int64)BaseAddress, v26);
      DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", a3, a4, TagName);
    }
    RtlpBreakPointHeap(0LL);
LABEL_36:
    Heap = (char *)RtlReAllocateHeap(BaseAddress, Flags, a3, a4);
    v27 = Heap;
    if ( Heap )
    {
      v19 = (__int64)(Heap - 16);
      _m_prefetchw(Heap - 16);
      if ( *(Heap - 1) == 5 )
        v19 -= 16LL * *(unsigned __int8 *)(v19 + 14);
      if ( BaseAddress[31] )
      {
        *(_DWORD *)(v19 + 8) ^= BaseAddress[34];
        if ( *(_BYTE *)(v19 + 11) != (*(_BYTE *)(v19 + 8) ^ (unsigned __int8)(*(_BYTE *)(v19 + 9) ^ *(_BYTE *)(v19 + 10))) )
          RtlpAnalyzeHeapFailure(BaseAddress, v19);
      }
      if ( (*(_BYTE *)(v19 + 10) & 2) != 0 )
      {
        ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v19);
        v21 = ExtraStuffPointer;
        if ( (BaseAddress[28] & 0x8000000) != 0 )
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
      if ( BaseAddress[31] )
      {
        *(_BYTE *)(v19 + 11) = *(_BYTE *)(v19 + 8) ^ *(_BYTE *)(v19 + 9) ^ *(_BYTE *)(v19 + 10);
        *(_DWORD *)(v19 + 8) ^= BaseAddress[34];
      }
    }
    RtlpValidateHeapHeaders(BaseAddress);
    RtlpValidateHeap(BaseAddress);
  }
  if ( v27 )
  {
    v23 = NtCurrentPeb();
    if ( v27 == (char *)qword_1801445F0 )
    {
      if ( v23->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)qword_1801445F0, a4);
LABEL_57:
      RtlpBreakPointHeap(0LL);
      goto LABEL_69;
    }
    if ( (v23->NtGlobalFlag & 0x800) != 0 && __PAIR32__(*((_WORD *)BaseAddress + 104), v26) == dword_1801445F8 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v24 = RtlpGetTagName((__int64)BaseAddress, v26);
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v27, a4, v24);
      goto LABEL_57;
    }
  }
LABEL_69:
  if ( v25 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
  return v27;
}
