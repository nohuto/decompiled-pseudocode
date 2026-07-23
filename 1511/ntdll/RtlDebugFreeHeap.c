/*
 * XREFs of RtlDebugFreeHeap @ 0x180092900
 * Callers:
 *     RtlpFreeHeap @ 0x180022430 (RtlpFreeHeap.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002EB04 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlpValidateHeapHeaders @ 0x18004B6B0 (RtlpValidateHeapHeaders.c)
 *     RtlpGetExtraStuffPointer @ 0x180074A8C (RtlpGetExtraStuffPointer.c)
 *     RtlpValidateHeapEntry @ 0x18007587C (RtlpValidateHeapEntry.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpValidateHeap @ 0x180092BC8 (RtlpValidateHeap.c)
 *     RtlpGetTagName @ 0x1800E107C (RtlpGetTagName.c)
 *     RtlpHeapExceptionFilter @ 0x1800E3178 (RtlpHeapExceptionFilter.c)
 *     RtlpBreakPointHeap @ 0x1800F019C (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F09E4 (RtlpAnalyzeHeapFailure.c)
 */

__int64 __fastcall RtlDebugFreeHeap(
        PRTL_CRITICAL_SECTION *BaseAddress,
        _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *a2,
        char *a3)
{
  unsigned int v4; // esi
  LOGICAL v6; // r14d
  PRTL_DYNAMIC_HASH_TABLE v7; // rbx
  int v9; // esi
  unsigned __int64 v10; // rdx
  struct _PEB *v11; // rax
  __int16 v12; // r8
  unsigned __int16 v13; // dx
  __int64 TagName; // rax
  char v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+28h] [rbp-30h]
  int Flags; // [rsp+68h] [rbp+10h]
  unsigned __int16 v18; // [rsp+78h] [rbp+20h]

  v4 = (unsigned int)a2;
  v6 = 0;
  v15 = 0;
  if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) != 0 )
  {
    v7 = qword_1801420D0;
    ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
      qword_1801420D0,
      a2);
    return ((unsigned __int8 (__fastcall *)(PRTL_CRITICAL_SECTION *, _QWORD, char *))v7)(BaseAddress, v4, a3);
  }
  if ( RtlpCheckHeapSignature(BaseAddress, "RtlFreeHeap") )
  {
    v9 = *((_DWORD *)BaseAddress + 29) | 0x10000000 | v4;
    Flags = v9;
    if ( (v9 & 1) == 0 )
    {
      RtlEnterCriticalSection(BaseAddress[44]);
      v15 = 1;
      Flags = v9 | 1;
    }
    RtlpValidateHeap(BaseAddress);
    v10 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
    v16 = v10;
    if ( !RtlpValidateHeapEntry((unsigned __int64)BaseAddress, v10, "RtlFreeHeap") )
      goto LABEL_34;
    v11 = NtCurrentPeb();
    if ( a3 == (char *)qword_180143640 )
    {
      if ( v11->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to free block at %p\n", (const void *)qword_180143640);
    }
    else
    {
      if ( (v11->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_33;
      v12 = unk_180143648;
      if ( !unk_180143648 )
        goto LABEL_33;
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_DWORD *)(v16 + 8) ^= *((_DWORD *)BaseAddress + 34);
        if ( *(_BYTE *)(v16 + 11) != (*(_BYTE *)(v16 + 8) ^ (unsigned __int8)(*(_BYTE *)(v16 + 9) ^ *(_BYTE *)(v16 + 10))) )
        {
          RtlpAnalyzeHeapFailure(BaseAddress, v16);
          v12 = unk_180143648;
        }
      }
      if ( (*(_BYTE *)(v16 + 10) & 2) != 0 )
        v13 = *(_WORD *)(RtlpGetExtraStuffPointer(v16) + 2);
      else
        v13 = *(unsigned __int8 *)(v16 + 11);
      v18 = v13;
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_BYTE *)(v16 + 11) = *(_BYTE *)(v16 + 8) ^ *(_BYTE *)(v16 + 9) ^ *(_BYTE *)(v16 + 10);
        *(_DWORD *)(v16 + 8) ^= *((_DWORD *)BaseAddress + 34);
      }
      if ( !v13 || v13 != v12 || *((_WORD *)BaseAddress + 104) != word_18014364A )
        goto LABEL_33;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName(BaseAddress, v18);
      DbgPrint("About to free block at %p with tag %ws\n", a3, TagName);
    }
    RtlpBreakPointHeap(0LL);
LABEL_33:
    v6 = RtlFreeHeap(BaseAddress, Flags, a3);
    RtlpValidateHeapHeaders((PVOID *)BaseAddress, 1);
    RtlpValidateHeap(BaseAddress);
    goto LABEL_34;
  }
  v6 = 0;
LABEL_34:
  if ( v15 )
    RtlLeaveCriticalSection(BaseAddress[44]);
  return v6;
}
